"""Synthetic login grammar checks. Does not log in, read saved tokens or send data."""
import json
import struct
import zlib
from authentication_schemas import CLIENT_FEATURES, GAME_FEATURES
from decode_authentication_payload import decode
from decode_actor_payload import DecodeError


def vu(value):
    result = bytearray()
    while value >= 128:
        result.append((value & 127) | 128)
        value >>= 7
    result.append(value)
    return bytes(result)


def string(value):
    raw = value.encode("utf-8") if isinstance(value, str) else value
    return vu(len(raw)) + raw


def features(names, enabled=1):
    return vu(len(names)) + b"".join(string(name) + bytes([enabled]) for name in names)


def rejects(message, payload):
    try:
        decode(message, payload)
    except DecodeError:
        return
    raise AssertionError("Malformed/unsupported payload accepted")


def verify():
    samples = []
    # Complete request6, including the optional record and sequential queue bytes.
    pack = (vu(2) + string("p_00000000.csaheader") + vu(3) + vu(zlib.crc32(b"hdr")) +
            string("p_00000000.csa") + vu(4) + vu(zlib.crc32(b"data")))
    request = (b"\x01" + string("synthetic-optional") + vu(7) + b"\x02" +
               string("") + string("synthetic-ticket") + string("synthetic-machine") +
               b"\x01" + bytes(range(16)) + vu(300) + vu(1) + pack)
    value = decode(6, request)
    body = value["body"]
    assert body["queue_token"]["value"] == bytes(range(16)).hex()
    assert body["pack_metadata"][1]["crc32"] == zlib.crc32(b"data")
    assert body["pack_metadata"][0]["size_bytes"] == 3
    assert body["optional_record"]["value"]["f32"] == 7
    assert body["user_id"] == 300 and body["_span"] == [0, len(request)]
    samples.append((6, request))
    # Byte strings retain embedded NUL/invalid UTF8; they are not C string reads.
    minimal = b"\x00" + string(b"\x00\xff") + string("") + string("") + b"\x00" + vu(0) + vu(1) + vu(0)
    assert decode(6, minimal)["body"]["username"]["hex"] == "00ff"
    samples.append((6, minimal))
    response_data = (string("synthetic-server-string") + features(GAME_FEATURES) +
                     features(CLIENT_FEATURES, 2) + struct.pack("<3f", 1, 2, 3) + bytes(8))
    response = vu(0) + b"\x01" + response_data
    assert decode(7, response)["feature_masks"] == {"game": 511, "client": 32767}
    samples.append((7, response))
    # Counts do not enforce unique/complete feature names; last entry wins.
    game_duplicates = vu(9) + (string(GAME_FEATURES[0]) + b"\x01") * 8 + string(GAME_FEATURES[0]) + b"\x00"
    client_duplicates = features([CLIENT_FEATURES[0]] * 15)
    duplicate_response = vu(0) + b"\x01" + string("") + game_duplicates + client_duplicates + bytes(20)
    assert decode(7, duplicate_response)["feature_masks"] == {"game": 0, "client": 1}
    samples.append((7, duplicate_response))
    for exit_code in [0, 3060, 65535]:
        payload = vu(exit_code) + b"\x00"
        value = decode(7, payload)
        assert value["body"]["exit_code"] == exit_code
        assert bool(value["notes"]) == (exit_code in [0, 3060])
        samples.append((7, payload))
    truncated = 0
    for message, payload in samples:
        for end in range(len(payload)):
            rejects(message, payload[:end])
            truncated += 1
        rejects(message, payload + b"\x00")
    # Native feature rejection, conservative caps and width checks.
    bad_names = GAME_FEATURES[:-1] + ["unrecognized-feature"]
    rejects(7, vu(0) + b"\x01" + string("") + features(bad_names) + features(CLIENT_FEATURES) + bytes(20))
    rejects(7, vu(0) + b"\x01" + string("") + features(GAME_FEATURES[:-1]) + features(CLIENT_FEATURES) + bytes(20))
    rejects(7, vu(65536) + b"\x00")
    rejects(6, b"\x00" + vu(8097))
    rejects(6, b"\x00" + string("") * 3 + b"\x00" + vu(0) + vu(1) + vu(16001))
    return {"status": "passed", "structured_samples": len(samples),
            "truncated_prefixes_rejected": truncated, "feature_duplicate_policy": "last-wins",
            "request6_synthetic_hex": request.hex(),
            "limit": "Synthetic grammar checks; no native execution, captured credentials or server test"}


if __name__ == "__main__":
    print(json.dumps(verify()))
