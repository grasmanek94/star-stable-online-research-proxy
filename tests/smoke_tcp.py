"""Verify full-duplex TCP, half-closes and redact synthetic TLS test traffic."""
import argparse
from concurrent.futures import ThreadPoolExecutor
from contextlib import contextmanager
import json
from pathlib import Path
import socket
import ssl
import subprocess
import sys
import tempfile

from smoke_proxy import KEY, TOOLS, fixture, lines, udp_socket


HOST = "127.0.0.1"
ROUTE = b"/api-gateway/1.0/game-server/data"
SECRET = b"test-fixture-private-value"


def tcp_listener():
    listener = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    listener.bind((HOST, 0))
    listener.listen()
    listener.settimeout(5)
    return listener


@contextmanager
def relay_process(executable, tcp, udp):
    arguments = [executable, "--tcp-upstream", f"{HOST}:{tcp.getsockname()[1]}", "--tcp-listen", f"{HOST}:0",
                 "--upstream", f"{HOST}:{udp.getsockname()[1]}", "--listen", f"{HOST}:0", "--trace"]
    with subprocess.Popen(arguments, stdout=subprocess.PIPE, stderr=subprocess.PIPE) as process:
        try:
            diagnostics = lines(process.stderr)
            listeners = {}
            for _ in range(2):
                announcement = diagnostics.get(timeout=5).decode().strip()
                local, upstream = announcement.removeprefix("Listening on ").split(" with ", 1)
                protocol, _ = upstream.split(" upstream ", 1)
                listeners[protocol] = (HOST, int(local.rsplit(":", 1)[1]))
            yield process, listeners
        finally:
            if process.poll() is None:
                process.terminate()
            process.wait(timeout=5)


def udp_roundtrip(upstream, address):
    packet = fixture(286, b"\x96\x01", flags=1, sequence=3)
    with udp_socket() as client:
        client.sendto(packet, address)
        data, source = upstream.recvfrom(1024)
        assert data == packet
        upstream.sendto(packet, source)
        assert client.recvfrom(1024)[0] == packet


def send_then_read(peer, data):
    peer.sendall(data)
    peer.shutdown(socket.SHUT_WR)
    return b"".join(iter(lambda: peer.recv(16384), b""))


def exercise_tcp(executable):
    with tcp_listener() as tcp, udp_socket() as udp:
        udp.bind((HOST, 0))
        with relay_process(executable, tcp, udp) as (process, listeners):
            records = lines(process.stdout)
            sent_upstream = bytes(range(256)) * 896
            sent_downstream = bytes(reversed(range(256))) * 640
            with (socket.create_connection(listeners["TCP"], timeout=5) as client,
                  tcp.accept()[0] as server,
                  ThreadPoolExecutor(max_workers=1) as workers):
                server.settimeout(5)
                upstream_result = workers.submit(send_then_read, client, sent_upstream)
                udp_roundtrip(udp, listeners["UDP"])
                assert send_then_read(server, sent_downstream) == sent_upstream
                assert upstream_result.result(timeout=5) == sent_downstream

            offsets = {"client_to_upstream": 0, "upstream_to_client": 0}
            expected = {"client_to_upstream": sent_upstream, "upstream_to_client": sent_downstream}
            half_closed = set()
            udp_records = 0
            while True:
                event = json.loads(records.get(timeout=5))
                if event["event"] == "tcp_close":
                    assert "winsock_error" not in event, event
                    assert udp_records == 2, "UDP round trip did not appear in the shared log"
                    break
                if event["event"] == "udp_datagram":
                    assert event["forwarded"]
                    udp_records += 1
                    continue
                assert event["connection"] == 1, event
                if event["event"] == "tcp_data":
                    direction = event["direction"]
                    offset = offsets[direction]
                    raw = bytes.fromhex(event["wire_hex"])
                    assert event["offset"] == offset and event["stream_bytes"] == len(raw)
                    assert direction not in half_closed and expected[direction][offset:offset + len(raw)] == raw
                    offsets[direction] += len(raw)
                if event["event"] == "tcp_half_close":
                    assert event["offset"] == offsets[event["direction"]]
                    half_closed.add(event["direction"])
            assert half_closed == expected.keys()
            assert {direction: len(data) for direction, data in expected.items()} == offsets


def receive(peer, size):
    data = bytearray()
    while len(data) < size:
        packet = peer.recv(size - len(data))
        if not packet:
            raise AssertionError("Unexpected EOF")
        data.extend(packet)
    return bytes(data)


def exchange(tcp, address, given_key_log, cert, key, protocol):
    server_context = ssl.SSLContext(ssl.PROTOCOL_TLS_SERVER)
    server_context.load_cert_chain(cert, key)
    server_context.keylog_filename = str(given_key_log)
    client_context = ssl.create_default_context(cafile=cert)
    version = ssl.TLSVersion.TLSv1_3 if protocol == "h2" else ssl.TLSVersion.TLSv1_2
    for context in (server_context, client_context):
        context.minimum_version = version
        context.maximum_version = version
        context.set_alpn_protocols([protocol])

    if protocol == "h2":
        settings = bytes.fromhex("000000040000000000")

        def headers(stream, block):
            return len(block).to_bytes(3, "big") + b"\x01\x05" + stream.to_bytes(4, "big") + block

        target = ROUTE + b"?query=" + SECRET
        authorization = b"Bearer " + SECRET
        block = (b"\x83\x87\x01\x09localhost\x04" + bytes([len(target)]) + target
                 + b"\x00\x0dauthorization" + bytes([len(authorization)]) + authorization)
        request = b"PRI * HTTP/2.0\r\n\r\nSM\r\n\r\n" + settings + headers(1, block)
        response = settings + headers(1, b"\x88")
    else:
        request = (b"POST " + ROUTE + b"?query=" + SECRET + b" HTTP/1.1\r\nHost: localhost\r\nAuthorization: Bearer "
                   + SECRET + b"\r\nContent-Length: 0\r\n\r\n")
        response = (b"HTTP/1.1 200 OK\r\nSet-Cookie: sample=" + SECRET + b"\r\nContent-Length: "
                    + str(len(SECRET)).encode() + b"\r\n\r\n" + SECRET)

    def serve():
        with tcp.accept()[0] as connection:
            connection.settimeout(5)
            with server_context.wrap_socket(connection, server_side=True) as server:
                assert server.selected_alpn_protocol() == protocol
                assert receive(server, len(request)) == request
                server.sendall(response)

    with ThreadPoolExecutor(max_workers=1) as workers:
        future = workers.submit(serve)
        with (socket.create_connection(address, timeout=5) as raw,
              client_context.wrap_socket(raw, server_hostname="localhost") as client):
            assert client.selected_alpn_protocol() == protocol
            # A split across TLS records exercises application-data reassembly.
            client.sendall(request[:19])
            client.sendall(request[19:])
            assert receive(client, len(response)) == response
        future.result(timeout=5)


def exercise_tls(executable, tshark, openssl):
    with tempfile.TemporaryDirectory() as temp, tcp_listener() as tcp, udp_socket() as udp:
        cert = Path(temp) / "cert.pem"
        key = Path(temp) / "private.pem"
        key_log = Path(temp) / "tls.keys"
        udp_context = Path(temp) / "udp.bin"
        key_log.touch()
        udp_context.write_bytes(KEY)
        udp.bind((HOST, 0))
        subprocess.run([openssl, "req", "-x509", "-newkey", "rsa:2048", "-nodes", "-days", "1", "-subj",
                        "/CN=localhost", "-addext", "subjectAltName=DNS:localhost", "-keyout", str(key),
                        "-out", str(cert)], capture_output=True, check=True, timeout=10)

        with relay_process(executable, tcp, udp) as (proxy, listeners):
            command = [sys.executable, str(TOOLS / "inspect_proxy_trace.py"), "--tshark", tshark,
                       "--tls-key-log", str(key_log), "--udp-context-file", str(udp_context)]
            with subprocess.Popen(command, stdin=proxy.stdout, stdout=subprocess.PIPE) as inspector:
                try:
                    output = lines(inspector.stdout)
                    proxy.stdout.close()
                    udp_roundtrip(udp, listeners["UDP"])
                    for protocol in ("http/1.1", "h2"):
                        exchange(tcp, listeners["TCP"], key_log, cert, key, protocol)

                    tls, udp_events = [], []
                    while len(tls) < 4 or len(udp_events) < 2:
                        line = output.get(timeout=8)
                        assert SECRET not in line and b"wire_hex" not in line, line
                        event = json.loads(line)
                        if event["event"] == "tls_http":
                            tls.append(event)
                        if event["event"] == "udp_datagram":
                            udp_events.append(event)
                    assert all(event["inspection"]["fields"]["body"]["player_id"] == 150 for event in udp_events)
                    for protocol, connection in (("http/1.x", 1), ("h2", 2)):
                        request, response = [event for event in tls if event["protocol"] == protocol]
                        assert request["connection"] == response["connection"] == connection
                        assert request["methods"] == ["POST"] and request["routes"] == [ROUTE.decode()]
                        assert response["status_codes"] == [200]
                        if protocol == "h2":
                            assert 1 in request["http2_stream_ids"] and 1 in response["http2_stream_ids"]

                    proxy.terminate()
                    proxy.wait(timeout=5)
                    while True:
                        line = output.get(timeout=8)
                        assert SECRET not in line and b"wire_hex" not in line, line
                        event = json.loads(line)
                        if event["event"] == "tls_inspection_complete":
                            break
                    assert event == {"event": "tls_inspection_complete", "http_records": 4, "status": "complete"}
                    assert inspector.wait(timeout=5) == 0
                finally:
                    if inspector.poll() is None:
                        inspector.terminate()
                        inspector.wait(timeout=5)


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("executable")
    parser.add_argument("--tshark")
    parser.add_argument("--openssl")
    args = parser.parse_args()
    if args.tshark and args.openssl:
        exercise_tls(args.executable, args.tshark, args.openssl)
        print("Synthetic TLS 1.2 HTTP/1.1, TLS 1.3 HTTP/2 and UDP decoding passed")
    else:
        exercise_tcp(args.executable)
        print("Full-duplex TCP, half-closes and concurrent UDP forwarding passed")
