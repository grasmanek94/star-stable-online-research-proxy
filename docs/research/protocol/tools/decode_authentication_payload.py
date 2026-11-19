"""Offline login6/7 body decoder. No sockets, credential discovery or process access.

Output can contain private login material supplied by the caller as raw hex.
Only use complete decrypted, header-free, reassembled application bodies.
The strict decoder rejects trailing bytes; native callback7 itself does not
check for EOF. Never infer that parse success makes a ticket valid at the server.
"""
import argparse
import json
from pathlib import Path
from authentication_schemas import CLIENT_FEATURES, GAME_FEATURES, PACKETS, SCHEMAS
from decode_actor_payload import DecodeError, Reader


def feature_mask(entries, names):
    if len(entries) < len(names):
        raise DecodeError(f"Feature collection needs at least {len(names)} entries")
    mask = 0
    indexes = {name.encode("ascii"): index for index, name in enumerate(names)}
    for entry in entries:
        name = bytes.fromhex(entry["name"]["hex"])
        try:
            index = indexes[name]
        except KeyError:
            raise DecodeError(f"Unknown native feature name at {entry['_span'][0]}") from None
        mask = (mask & ~(1 << index)) | (int(entry["enabled_byte"] != 0) << index)
    return mask


def decode(message, payload):
    message = int(message)
    if message not in PACKETS:
        raise DecodeError(f"Unsupported authentication message {message}")
    reader = Reader(payload, schemas=SCHEMAS)
    body = reader.read(PACKETS[message])
    if reader.offset != len(payload):
        raise DecodeError(f"Unexpected trailing bytes at {reader.offset}")
    result = {"message": message, "length": len(payload), "body": body,
              "consumed": reader.offset, "notes": []}
    if message == 6:
        if body["constant_one"] != 1:
            result["notes"].append("Value differs from inspected caller's constant1; server meaning unknown")
    else:
        data = body["data"]["value"]
        if data is not None:
            result["feature_masks"] = {
                "game": feature_mask(data["game_features"], GAME_FEATURES),
                "client": feature_mask(data["client_features"], CLIENT_FEATURES),
            }
        if body["exit_code"] == 0 and data is None:
            result["notes"].append("Structurally parsed, but native success handler requires response data")
        if body["exit_code"] == 3060:
            result["notes"].append("Native retries after timer10.0 only if login-attempt counter is below3")
    return result


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--message", type=int, choices=sorted(PACKETS), required=True)
    group = parser.add_mutually_exclusive_group(required=True)
    group.add_argument("--input", type=Path)
    group.add_argument("--hex", help="Synthetic or private header-free body in hex; output includes supplied values")
    args = parser.parse_args()
    try:
        data = args.input.read_bytes() if args.input else bytes.fromhex(args.hex)
        print(json.dumps(decode(args.message, data), indent=2))
    except (DecodeError, ValueError) as error:
        parser.exit(2, f"Decode failed: {error}\n")
