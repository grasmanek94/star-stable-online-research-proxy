"""Offline client647 payload decoder. No sockets, interception or process access.

Input is a complete decrypted, header-free and reassembled application body.
Use 'master' only on ID9's decompressed body. Unsupported/malformed input raises;
this helper never decides to delete a message or silently trims unknown bytes.
"""
import argparse
import json
from pathlib import Path
from actor_schemas import SCHEMAS, PACKETS, SUBTYPES


class DecodeError(ValueError):
    pass


class Reader:
    def __init__(self, payload, schemas=None):
        self.payload = bytes(payload)
        self.offset = 0
        self.schemas = SCHEMAS if schemas is None else schemas

    def take(self, size):
        if size < 0 or size > len(self.payload) - self.offset:
            raise DecodeError(f"Truncated at {self.offset}: need {size} bytes")
        start = self.offset
        self.offset += size
        return self.payload[start:self.offset]

    def u8(self):
        return self.take(1)[0]

    def varu(self, bits=32):
        value = 0
        for shift in range(0, bits, 7):
            byte = self.u8()
            value |= (byte & 127) << shift
            if not byte & 128:
                if value >= 1 << bits:
                    raise DecodeError(f"Overflowing uint{bits} varint at {self.offset}")
                return value
        raise DecodeError(f"Unterminated uint{bits} varint at {self.offset}")

    def record(self, fields):
        start = self.offset
        result = {x["name"]: self.read(x["wire"]) for x in fields}
        result["_span"] = [start, self.offset]
        return result

    def read(self, wire):
        if isinstance(wire, list):
            return self.record(wire)
        if isinstance(wire, dict):
            kind = wire["kind"]
            if kind == "raw":
                return self.take(wire["size"]).hex()
            if kind == "optional":
                present = self.u8()
                return {"presence_byte": present, "value": self.read(wire["value"]) if present else None}
            if kind == "variant":
                tag = self.u8()
                if tag >= len(wire["alternatives"]):
                    raise DecodeError(f"Unknown variant {tag} at {self.offset-1}")
                return {"tag": tag, "value": self.read(wire["alternatives"][tag])}
            if kind in ("array", "vector"):
                count = wire["count"] if kind == "array" else self.varu()
                if kind == "vector" and count > wire["maximum_count"]:
                    raise DecodeError(f"Vector count {count} exceeds limit")
                return [self.read(wire["value"]) for _ in range(count)]
            raise DecodeError(f"Unknown grammar kind {kind}")
        if wire in self.schemas:
            return self.record(self.schemas[wire])
        if wire == "u8":
            return self.u8()
        if wire.startswith("varu"):
            return self.varu(int(wire[4:]))
        if wire == "zigzag32":
            value = self.varu()
            return (value >> 1) ^ -(value & 1)
        if wire in ("string", "blob"):
            count = self.varu()
            if wire == "string" and count > 8096:
                raise DecodeError(f"String length {count} exceeds8096")
            return {"length": count, "hex": self.take(count).hex()}
        if wire == "Vec3":
            return self.take(12).hex()
        if wire == "Normalized4":
            return self.take(8).hex()
        if wire == "equipment_map":
            count = self.varu(16)
            # A list preserves duplicate keys and wire order, unlike a JSON object.
            return [{"slot": self.u8(), "item_id": self.varu()} for _ in range(count)]
        raise DecodeError(f"Unknown grammar type {wire}")


def decode(message, payload):
    reader = Reader(payload)
    result = {"message": message, "length": len(payload)}
    if message == "master":
        result["body"] = reader.read("MasterDecompressed")
    else:
        message = int(message)
        if message == 282:
            records = []
            while reader.offset < len(payload):
                records.append(reader.read("PositionRecord"))
            result["records"] = records
        elif message == 284:
            subtype = reader.u8()
            result["subtype"] = subtype
            if subtype not in SUBTYPES:
                raise DecodeError(f"Unsupported push subtype {subtype}; preserve opaque body")
            result["body"] = reader.read(SUBTYPES[subtype])
        elif message in PACKETS:
            result["body"] = reader.read(PACKETS[message])
        else:
            raise DecodeError(f"Unsupported message {message}; preserve opaque body")
    if reader.offset != len(payload):
        raise DecodeError(f"{len(payload)-reader.offset} unexpected trailing bytes at {reader.offset}")
    result["consumed"] = reader.offset
    return result


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--message", required=True, help="Numeric message ID, or master for decompressed local spawn")
    group = parser.add_mutually_exclusive_group(required=True)
    group.add_argument("--hex", help="Header-free payload in hexadecimal")
    group.add_argument("--input", type=Path, help="Local header-free binary payload file")
    args = parser.parse_args()
    try:
        payload = bytes.fromhex(args.hex) if args.hex is not None else args.input.read_bytes()
        print(json.dumps(decode(args.message, payload), indent=2))
    except (DecodeError, ValueError) as error:
        parser.exit(2, f"Decode failed: {error}\n")
