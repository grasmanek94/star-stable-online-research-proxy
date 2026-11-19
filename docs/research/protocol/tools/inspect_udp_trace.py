"""Annotate sso-proxy --trace JSON lines using a caller-supplied 32-byte test context."""
import argparse
import json
import math
from pathlib import Path
import struct
import sys
import time

from actor_schemas import PACKETS, SUBTYPES
from datagram_codec import Cursor, DecodeError, decrypt_envelope, parse_connection_response, parse_header
from decode_actor_payload import Reader, decode as decode_actor
from decode_authentication_payload import decode as decode_login


MAX_TRACE_LINE = 140_000  # One hex-encoded datagram plus metadata.
MAX_FRAGMENTS = 1024
MAX_GROUPS = 16
FRAGMENT_LIFETIME = 30.0
MAX_DECOMPRESSED = 4 * 1024 * 1024
CATALOG = Path(__file__).resolve().parents[1] / "data" / "message-ids.json"


class LogReader(Reader):
    """Add readable values to the reference grammar's lossless wire representation."""

    def read(self, wire):
        value = super().read(wire)
        if wire == "string":
            try:
                value["text"] = bytes.fromhex(value["hex"]).decode("utf-8")
            except UnicodeDecodeError:
                pass
        if wire == "Vec3":
            values = struct.unpack("<3f", bytes.fromhex(value))
            return {"hex": value, "xyz": [x if math.isfinite(x) else str(x) for x in values]}
        if wire == "Normalized4":
            words = struct.unpack("<4H", bytes.fromhex(value))
            return {"hex": value, "components": [2 * component / 65535 - 1 for component in words]}
        return value


class FragmentBuffer:
    def __init__(self):
        self.groups = {}

    def add(self, stream, header, body, elapsed):
        count = header["fragment_count"]
        index = header["fragment_index"]
        if not 2 <= count <= MAX_FRAGMENTS or index >= count or not 0 < len(body) <= 1024:
            raise DecodeError("Fragment count, index or size outside inspection bounds")
        for key, (last_seen, _, _) in list(self.groups.items()):
            if elapsed - last_seen >= FRAGMENT_LIFETIME:
                del self.groups[key]

        first_sequence = (header["sequence"] - index) & 0xFFFFFFFF
        key = (*stream, header["connection_id"], header["opaque_id_hex"], header["message_id"], first_sequence)
        if key not in self.groups and len(self.groups) >= MAX_GROUPS:
            oldest = min(self.groups, key=lambda entry: self.groups[entry][0])
            del self.groups[oldest]
        _, previous_count, pieces = self.groups.get(key, (elapsed, count, {}))
        if previous_count != count or (index in pieces and pieces[index] != body):
            del self.groups[key]
            raise DecodeError("Conflicting fragments for the same sequence range")

        pieces[index] = body
        if len(pieces) == count:
            self.groups.pop(key, None)
            return b"".join(pieces[number] for number in range(count))
        self.groups[key] = (elapsed, count, pieces)
        return None


def decompress_block(data, size):
    if size > MAX_DECOMPRESSED:
        raise DecodeError("Decompressed size outside inspection bounds")
    cursor = Cursor(data)
    output = bytearray()

    def extended_length(length):
        if length == 15:
            while True:
                extension = cursor.take(1)[0]
                length += extension
                if extension != 255:
                    break
        return length

    while cursor.position < len(data):
        token = cursor.take(1)[0]
        literal_length = extended_length(token >> 4)
        if literal_length > size - len(output):
            raise DecodeError("LZ4 literals exceed the declared size")
        output.extend(cursor.take(literal_length))
        if cursor.position == len(data):
            break

        offset = int.from_bytes(cursor.take(2), "little")
        if not 0 < offset <= len(output):
            raise DecodeError("Invalid LZ4 match offset")
        match_length = extended_length(token & 15) + 4
        if match_length > size - len(output):
            raise DecodeError("LZ4 match exceeds the declared size")
        pattern = output[-offset:]
        repetitions, extra = divmod(match_length, offset)
        output.extend(pattern * repetitions)
        output.extend(pattern[:extra])

    if len(output) != size:
        raise DecodeError("LZ4 result differs from the declared size")
    return output


def decode_master(body):
    cursor = Cursor(body)
    exit_code = cursor.varuint(16)
    record_size, decoded_size = struct.unpack("<II", cursor.take(8))
    block = cursor.take(record_size - 4)
    if cursor.position != len(body):
        raise DecodeError("Trailing bytes after the compressed master record")
    result = {"exit_code": exit_code, "compressed_bytes": len(block), "uncompressed_bytes": decoded_size}
    if exit_code == 0:
        result["master"] = decode_actor("master", decompress_block(block, decoded_size), reader_type=LogReader)
    return result


def decode_body(message, body):
    if message == 1:
        cursor = Cursor(body)
        fields = {"protocol_value": cursor.varuint(32), "user_flags": cursor.take(1)[0]}
        if cursor.position != len(body):
            raise DecodeError("Trailing bytes after the connection request")
        return fields
    if message == 2:
        fields = parse_connection_response(body)
        if "context_words" in fields:
            fields["context_words"] = {"word_count": len(fields["context_words"]), "redacted": True}
        return fields
    if message in (6, 7):
        fields = decode_login(message, body, reader_type=LogReader)
        if message == 6:
            for key in ("optional_record", "username", "game_server_ticket", "machine_identifier", "queue_token", "user_id"):
                fields["body"][key] = {"redacted": True}
        elif fields["body"]["data"]["value"] is not None:
            fields["body"]["data"]["value"]["server_string"] = {"redacted": True}
        return fields
    if message == 9:
        return decode_master(body)
    if message == 284 and body and body[0] not in SUBTYPES:
        return None
    if message in PACKETS or message in (282, 284):
        fields = decode_actor(message, body, reader_type=LogReader)
        if message == 284:
            subtype = fields["subtype"]
            fields["subtype_schema"] = SUBTYPES[subtype]
            if subtype in (1, 2):
                update = fields["body"]
                update["owner_name"] = {1: "rider", 2: "attached_horse"}.get(update["owner"])
                if subtype == 2:
                    update["ground_state_name"] = "on_ground" if update["ground_state"] else "in_saddlebag"
        return fields
    return None


class Inspector:
    def __init__(self, context):
        self.context = context
        self.names = {entry["id"]: entry["name"] for entry in json.loads(CATALOG.read_text(encoding="utf-8"))}
        self.fragments = FragmentBuffer()

    def inspect(self, event):
        wire = event.pop("wire_hex", None)
        if event.get("event") != "udp_datagram" or wire is None:
            return event

        try:
            datagram = bytes.fromhex(wire)
            if len(datagram) != event["datagram_bytes"]:
                raise ValueError
            plaintext = decrypt_envelope(datagram, self.context)
            header = parse_header(plaintext)
        except (KeyError, TypeError, ValueError):
            event["inspection"] = {"status": "unrecognized_datagram"}
            return event

        body = plaintext[header["payload_span"][0]:]
        message = header["message_id"]
        inspection = {"header": header, "message_name": self.names.get(message), "payload_bytes": len(body)}
        event["inspection"] = inspection
        if header["flags"] & 5 == 5:
            inspection["status"] = "ack" if not body else "unexpected_ack_payload"
            return event

        try:
            if "fragment_count" in header:
                stream = (event["client"], event["direction"])
                body = self.fragments.add(stream, header, body, time.monotonic())
                if body is None:
                    inspection["status"] = "waiting_for_fragments"
                    return event
                inspection["reassembled_bytes"] = len(body)
            fields = decode_body(message, body)
        except (KeyError, TypeError, ValueError):
            inspection["status"] = "malformed_or_outside_inspection_bounds"
            return event

        if fields is None:
            inspection["status"] = "unsupported_body"
            if message == 284:
                inspection["subtype"] = body[0]
        else:
            inspection["status"] = "decoded"
            inspection["fields"] = fields
        return event


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--context-file", type=Path, required=True, help="Binary file with eight little-endian u32 words")
    args = parser.parse_args()
    try:
        with args.context_file.open("rb") as source:
            context = source.read(33)
        if len(context) != 32:
            parser.error("The context file must contain exactly 32 bytes")
        inspector = Inspector(context)
    except OSError as error:
        parser.error(str(error))

    while line := sys.stdin.buffer.readline(MAX_TRACE_LINE + 1):
        try:
            if len(line) > MAX_TRACE_LINE:
                while line and not line.endswith(b"\n"):
                    line = sys.stdin.buffer.readline(MAX_TRACE_LINE + 1)
                raise ValueError
            event = json.loads(line)
            if not isinstance(event, dict):
                raise ValueError
        except ValueError:
            event = {"event": "invalid_trace_line"}
        print(json.dumps(inspector.inspect(event), allow_nan=False), flush=True)


if __name__ == "__main__":
    main()
