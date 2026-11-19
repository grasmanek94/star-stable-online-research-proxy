"""Exercise a real Winsock relay and inspector against synthetic loopback peers."""
import json
from pathlib import Path
from queue import Queue
import socket
import struct
import subprocess
import sys
import tempfile
from threading import Thread


TOOLS = Path(__file__).resolve().parents[1] / "docs" / "research" / "protocol" / "tools"
sys.path.insert(0, str(TOOLS))
from datagram_codec import encrypt_envelope


KEY = bytes(range(32))


def varuint(value):
    data = bytearray()
    while value >= 128:
        data.append((value & 127) | 128)
        value >>= 7
    data.append(value)
    return bytes(data)


def fixture(message, body, flags=0, sequence=0, fragment_index=0):
    header = bytes([flags]) + varuint(message) + b"\x00\x07" + bytes(16)
    if flags & 1:
        header += varuint(sequence)
    if flags & 2:
        header += b"\x02" + varuint(fragment_index)
    return encrypt_envelope(header + body, KEY, salt=29)


def udp_socket(family=socket.AF_INET):
    result = socket.socket(family, socket.SOCK_DGRAM)
    result.settimeout(3)
    return result


def lines(stream):
    output = Queue()

    def read():
        for line in stream:
            output.put(line)

    Thread(target=read, daemon=True).start()
    return output


def exercise_relay(executable, *, family, host, trace, exchanges):
    address = f"[{host}]" if family == socket.AF_INET6 else host
    with udp_socket(family) as upstream, udp_socket(family) as first, udp_socket(family) as second:
        upstream.bind((host, 0))
        arguments = [executable, "--listen", f"{address}:0", "--upstream", f"{address}:{upstream.getsockname()[1]}"]
        if trace:
            arguments.append("--trace")
        with subprocess.Popen(arguments, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True) as process:
            try:
                output, diagnostics = lines(process.stdout), lines(process.stderr)
                startup = diagnostics.get(timeout=5)
                assert startup.startswith(f"Listening on {address}:"), startup
                target = host, int(startup.split(" with UDP upstream ")[0].rsplit(":", 1)[1])
                clients = (first, second)
                for client, outgoing in zip(clients, (b"one", b"two")):
                    client.sendto(outgoing, target)
                destinations = {}
                for _ in clients:
                    outgoing, sender = upstream.recvfrom(65536)
                    destinations[outgoing] = sender
                assert destinations[b"one"] != destinations[b"two"]
                for client, outgoing in reversed(list(zip(clients, (b"one", b"two")))):
                    upstream.sendto(outgoing, destinations[outgoing])
                    assert client.recvfrom(65536)[0] == outgoing

                for outgoing, reply in exchanges:
                    first.sendto(outgoing, target)
                    data, sender = upstream.recvfrom(65536)
                    assert data == outgoing and sender == destinations[b"one"]
                    upstream.sendto(reply, sender)
                    data, sender = first.recvfrom(65536)
                    assert data == reply and sender[:2] == target

                records = [json.loads(output.get(timeout=5)) for _ in range(4 + 2 * len(exchanges))]
                assert all(event["event"] == "udp_datagram" and event["forwarded"] for event in records), records
                assert all(("wire_hex" in event) == trace for event in records)
                if trace:
                    assert all(len(bytes.fromhex(event["wire_hex"])) == event["datagram_bytes"] for event in records)
                    assert [event["wire_hex"] for event in records[4:]] == [p.hex() for pair in exchanges for p in pair]
                return records
            finally:
                process.terminate()
                process.wait(timeout=5)


def main(executable):
    removal = fixture(286, b"\x96\x01", flags=1, sequence=3)
    ack = fixture(286, b"", flags=5, sequence=3)
    subtype = b"\x03\x96\x01\x03Fox"
    early = fixture(284, subtype[:3], flags=3, sequence=0xFFFFFFFF)
    late = fixture(284, subtype[3:], flags=3, sequence=0, fragment_index=1)
    opaque = fixture(283, b"\x13\x37")
    request = fixture(6, b"\0\x04user\x06ticket\x06device\0\x02\x01\0")
    master_size = 141
    block = b"\x1f\x00\x01\x00" + bytes([master_size - 25]) + b"\x50" + bytes(5)
    master = fixture(9, b"\0" + struct.pack("<II", len(block) + 4, master_size) + block)
    pet = fixture(284, b"\x02\x96\x01\xac\x02\x02\x0a\0")
    connection = fixture(2, b"\0\x07\0" + bytes(range(1, 9)) + bytes(16))

    exchanges = [(b"", bytes(range(256)) * 200), (removal[:-1], removal), (ack, late), (opaque, early),
                 (request, master), (pet, connection)]
    records = exercise_relay(executable, family=socket.AF_INET, host="127.0.0.1", trace=True, exchanges=exchanges)
    with tempfile.TemporaryDirectory() as temp:
        context = Path(temp) / "context.bin"
        context.write_bytes(KEY)
        result = subprocess.run([sys.executable, str(TOOLS / "inspect_udp_trace.py"), "--context-file", str(context)],
                                input="\n".join(map(json.dumps, records)) + "\n", capture_output=True,
                                text=True, timeout=5, check=True)
    decoded = [json.loads(line) for line in result.stdout.splitlines()]
    assert all("wire_hex" not in event for event in decoded)
    inspections = [event["inspection"] for event in decoded[4:]]
    assert [view["status"] for view in inspections] == [
        "unrecognized_datagram", "unrecognized_datagram", "unrecognized_datagram", "decoded", "ack",
        "waiting_for_fragments", "unsupported_body", "decoded", "decoded", "decoded", "decoded", "decoded",
    ]
    assert inspections[3]["fields"]["body"]["player_id"] == 150
    assert inspections[4]["header"]["message_id"] == 286
    assert inspections[6]["message_name"] is not None
    assert inspections[7]["fields"]["body"]["name"]["text"] == "Fox"
    assert inspections[8]["fields"]["body"]["game_server_ticket"] == {"redacted": True}
    assert "7469636b6574" not in result.stdout
    assert inspections[9]["fields"]["master"]["body"]["player"]["position"]["xyz"] == [0, 0, 0]
    assert inspections[10]["fields"]["body"]["ground_state_name"] == "in_saddlebag"
    assert inspections[11]["fields"]["context_words"] == {"word_count": 8, "redacted": True}

    if socket.has_ipv6:
        exercise_relay(executable, family=socket.AF_INET6, host="::1", trace=False, exchanges=[(b"ipv6", b"reply")])
    print("Synthetic loopback relay and protocol inspection passed")


if __name__ == "__main__":
    main(sys.argv[1])
