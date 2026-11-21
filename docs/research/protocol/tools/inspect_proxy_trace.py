"""Decode loopback relay observations with supplied UDP contexts and TLS key logs."""
import argparse
from dataclasses import dataclass, field
from ipaddress import IPv4Address
import json
import os
from pathlib import Path
import shutil
import struct
import subprocess
import sys
from threading import Lock, Thread

from inspect_udp_trace import Inspector, read_context, trace_events


DIRECTIONS = ("client_to_upstream", "upstream_to_client")
CLIENT_BASE = int(IPv4Address("10.0.0.0"))
SERVER_IP = IPv4Address("192.0.2.1")
MAX_CONNECTION_ID = (1 << 24) - 1
HTTP_METHODS = frozenset(("CONNECT", "DELETE", "GET", "HEAD", "OPTIONS", "PATCH", "POST", "PUT", "TRACE"))
KNOWN_ROUTES = frozenset((
    "/api-gateway/1.0/game-server/data",
    "/api-gateway/1.0/game-server/ticket",
    "/api-gateway/1.0/session/create",
    "/api-gateway/1.0/session/refresh",
    "/proxy-launcher/launcher/auth/initialize",
    "/proxy-launcher/launcher/login-queue/v2/desktop/token",
))
# The dissector exports an allowlist of fields. No HTTP authentication headers,
# bodies, arbitrary header values, or session secrets are requested from TShark.
WS_FIELDS = (
    "frame.number", "ip.src", "ip.dst",
    "http.request.method", "http.request.uri.path", "http.response.code", "http.request_in",
    "http2.headers.method", "http2.headers.path", "http2.headers.status", "http2.streamid",
)


@dataclass
class TcpTrace:
    forwarded: list[int] = field(default_factory=lambda: [0, 0])
    half_closed: list[bool] = field(default_factory=lambda: [False, False])


class PcapStream:
    """Present the relay's ordered byte streams as TCP frames on a local pipe."""

    def __init__(self, sink):
        self.sink = sink
        # Classic little-endian libpcap, LINKTYPE_RAW. Addresses are synthetic.
        sink.write(struct.pack("<IHHIIII", 0xA1B2C3D4, 2, 4, 0, 0, 65535, 101))

    def packet(self, connection, direction, time_ms, flags, sequence, ack, payload=b""):
        addresses = (CLIENT_BASE + connection, int(SERVER_IP))
        ports = (49152, 443)
        length = 40 + len(payload)
        seconds, millis = divmod(time_ms, 1000)
        record = struct.pack("<IIII", seconds, millis * 1000, length, length)
        ip = struct.pack("!BBHHHBBHII", 0x45, 0, length, 0, 0x4000, 64, 6, 0,
                         addresses[direction], addresses[1 - direction])
        tcp = struct.pack("!HHIIHHHH", ports[direction], ports[1 - direction], sequence & 0xFFFFFFFF,
                          ack & 0xFFFFFFFF, 0x5000 | flags, 65535, 0, 0)
        self.sink.write(record + ip + tcp + payload)

    def open(self, connection, time_ms):
        self.packet(connection, 0, time_ms, 0x02, 0, 0)  # SYN
        self.packet(connection, 1, time_ms, 0x12, 0, 1)  # SYN + ACK
        self.packet(connection, 0, time_ms, 0x10, 1, 1)  # ACK

    def forward(self, trace, connection, direction, time_ms, payload, fin):
        sequence = 1 + trace.forwarded[direction]
        ack = 1 + trace.forwarded[1 - direction] + trace.half_closed[1 - direction]
        self.packet(connection, direction, time_ms, 0x11 if fin else 0x18, sequence, ack, payload)
        trace.forwarded[direction] += len(payload)
        trace.half_closed[direction] = fin


def http_records(layers):
    def field_values(name):
        values = layers.get(name.replace(".", "_"), [])
        return [str(value) for value in values]

    try:
        source = IPv4Address(field_values("ip.src")[0])
        destination = IPv4Address(field_values("ip.dst")[0])
        frame = int(field_values("frame.number")[0])
    except (IndexError, ValueError):
        return

    direction = int(source == SERVER_IP)
    client = destination if direction else source
    connection = int(client) - CLIENT_BASE
    if not 1 <= connection <= MAX_CONNECTION_ID:
        return
    common = {"event": "tls_http", "connection": connection, "direction": DIRECTIONS[direction], "frame": frame}

    for protocol, method, route, status, identifier in (
        ("http/1.x", "http.request.method", "http.request.uri.path", "http.response.code", "http.request_in"),
        ("h2", "http2.headers.method", "http2.headers.path", "http2.headers.status", "http2.streamid"),
    ):
        methods = field_values(method)
        statuses = [int(code) for code in field_values(status) if code.isascii() and code.isdigit() and len(code) == 3]
        if not methods and not statuses:
            continue
        id_name = "http2_stream_ids" if protocol == "h2" else "request_frames"
        yield {
            **common,
            "protocol": protocol,
            "methods": [name if name in HTTP_METHODS else "other" for name in methods],
            "routes": [path if (path := value.split("?", 1)[0]) in KNOWN_ROUTES else "unrecognized"
                       for value in field_values(route)],
            "status_codes": statuses,
            id_name: [int(value) for value in field_values(identifier) if value.isascii() and value.isdigit()],
        }


class TlsInspector:
    def __init__(self, tshark, key_log, emit):
        command = [
            tshark, "-n", "-l", "-r", "-", "-d", "tcp.port==443,tls",
            "-o", f"tls.keylog_file:{key_log}",
            "-o", "tls.debug_file:",
            "-o", "tcp.desegment_tcp_streams:TRUE",
            "-o", "tls.desegment_ssl_records:TRUE",
            "-o", "tls.desegment_ssl_application_data:TRUE",
            "-o", "ip.check_checksum:FALSE", "-o", "tcp.check_checksum:FALSE",
            "-o", "http.desegment_body:FALSE", "-o", "http.decompress_body:FALSE",
            "-Y", "http.request or http.response or http2.headers.method or http2.headers.status",
            "-T", "ek",
        ]
        for name in WS_FIELDS:
            command.extend(("-e", name))
        self.process = subprocess.Popen(command, stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.DEVNULL)
        self.emit = emit
        self.traces = {}
        self.http_count = 0
        self.pipe_error = False
        self.capture = PcapStream(self.process.stdin)
        self.reader = Thread(target=self.read_output)
        self.reader.start()

    def read_output(self):
        with self.process.stdout as output:
            for line in output:
                try:
                    layers = json.loads(line).get("layers", {})
                except ValueError:
                    continue
                for record in http_records(layers):
                    self.emit(record)
                    self.http_count += 1

    def observe(self, event, wire):
        kind = event.get("event")
        if self.pipe_error:
            return
        if kind in ("log_overflow", "invalid_trace_line"):
            self.traces.clear()
            return
        if kind not in ("tcp_open", "tcp_close", "tcp_data", "tcp_half_close"):
            return
        connection = event.get("connection")
        if type(connection) is not int or not 1 <= connection <= MAX_CONNECTION_ID:
            return

        try:
            if kind == "tcp_close":
                self.traces.pop(connection, None)
                return
            if kind == "tcp_open":
                self.capture.open(connection, event["time_unix_ms"])
                self.traces[connection] = TcpTrace()
            else:
                trace = self.traces.get(connection)
                if trace is None:
                    return
                direction = DIRECTIONS.index(event["direction"])
                fin = kind == "tcp_half_close"
                payload = b"" if fin else bytes.fromhex(wire)
                if (trace.half_closed[direction] or event["offset"] != trace.forwarded[direction]
                        or (not fin and len(payload) != event["stream_bytes"])):
                    raise ValueError("TCP observation gap")
                self.capture.forward(trace, connection, direction, event["time_unix_ms"], payload, fin)
            self.process.stdin.flush()
        except (KeyError, TypeError, ValueError, struct.error):
            self.traces.pop(connection, None)
            self.emit({"event": "tls_trace_gap", "connection": connection})
        except OSError:
            self.pipe_error = True

    def finish(self):
        try:
            self.process.stdin.close()
        except OSError:
            self.pipe_error = True
        try:
            status = self.process.wait(timeout=20)
        except subprocess.TimeoutExpired:
            self.process.kill()
            status = self.process.wait()
        self.reader.join()
        failed = status != 0 or self.pipe_error
        self.emit({"event": "tls_inspection_complete", "http_records": self.http_count,
                   "status": "tshark_failed" if failed else "complete" if self.http_count else "no_http_decoded"})
        return 2 if failed else 0


def find_tshark():
    executable = shutil.which("tshark")
    if executable:
        return executable
    default = Path(os.environ.get("ProgramFiles", r"C:\Program Files")) / "Wireshark" / "tshark.exe"
    return str(default) if default.is_file() else None


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--udp-context-file", type=Path, help="Binary file with eight little-endian u32 words")
    parser.add_argument("--tls-key-log", type=Path, help="Supplied TLS session secrets in NSS key log format")
    parser.add_argument("--tshark", help="Path to TShark. Defaults to PATH or the Wireshark installation directory")
    args = parser.parse_args()
    if args.udp_context_file is None and args.tls_key_log is None:
        parser.error("Supply at least one of --udp-context-file or --tls-key-log")

    output_lock = Lock()

    def emit(event):
        with output_lock:
            print(json.dumps(event, allow_nan=False), flush=True)

    tls = None
    try:
        udp = Inspector(read_context(args.udp_context_file)) if args.udp_context_file else None
        if args.tls_key_log:
            if not args.tls_key_log.is_file():
                parser.error("The supplied TLS key log file does not exist")
            tshark = args.tshark or find_tshark()
            if tshark is None:
                parser.error("TLS inspection requires TShark. Install Wireshark or specify --tshark")
            tls = TlsInspector(tshark, args.tls_key_log.resolve(), emit)
    except (OSError, ValueError) as error:
        parser.error(str(error))

    result = 0
    try:
        for event in trace_events(sys.stdin.buffer):
            if udp and event.get("event") == "udp_datagram":
                emit(udp.inspect(event))
            else:
                wire = event.pop("wire_hex", None)
                emit(event)
                if tls:
                    tls.observe(event, wire)
    except KeyboardInterrupt:
        pass
    finally:
        if tls:
            result = tls.finish()
    return result


if __name__ == "__main__":
    raise SystemExit(main())
