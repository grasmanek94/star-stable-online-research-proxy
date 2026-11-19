"""Synthetic UDP codec checks only; no capture, native execution or server access."""
import json
import random
import struct
from datagram_codec import (BOOTSTRAP, DecodeError, decrypt_envelope,
                            encrypt_envelope, fnv1a, parse_connection_response,
                            parse_header)


def varuint(value):
    result = bytearray()
    while value >= 128:
        result.append((value & 127) | 128)
        value >>= 7
    return bytes(result + bytes([value]))


def rejects(function, *args, **kwargs):
    try:
        function(*args, **kwargs)
    except (DecodeError, ValueError):
        return
    raise AssertionError("Malformed input accepted")


def verify():
    assert fnv1a(b"") == 0x811C9DC5
    assert fnv1a(b"hello") == 0x4F9F2CAB
    rng = random.Random(647)
    roundtrips = 0
    for key in [BOOTSTRAP, rng.randbytes(32), bytes(32)]:
        for length in list(range(1, 34)) + [1024, 1480, 1488]:
            payload = rng.randbytes(length)
            encoded = encrypt_envelope(payload, key, salt=roundtrips % 256)
            assert len(encoded) == 8 + ((length + 7) // 8) * 8
            assert decrypt_envelope(encoded, key) == payload
            assert decrypt_envelope(encoded, key, canonical=False) == payload
            changed = bytearray(encoded)
            changed[0] ^= 1
            rejects(decrypt_envelope, changed, key)
            roundtrips += 1
    # Every flag combination gives the correct optional header layout.
    for flags in range(16):
        plain = bytes([flags]) + varuint(285) + varuint(300) + varuint(400) + bytes(range(16))
        if flags & 8:
            plain += varuint((1 << 63) + 1)
        if flags & 1:
            plain += varuint(999)
            if flags & 3 == 3:
                plain += varuint(3) + varuint(1)
        size = len(plain)
        plain += b"body"
        record = parse_header(plain)
        assert record["payload_span"] == [size, size + 4]
        assert record["message_id"] == 285
        for prefix in range(size):
            rejects(parse_header, plain[:prefix])
    # ID1 synthetic, full header plus body protocol534/user-flags0.
    plain = bytes.fromhex("01 01 00 00") + bytes(16) + bytes.fromhex("01 96 04 00")
    datagram = encrypt_envelope(plain, BOOTSTRAP, salt=0x5A)
    assert datagram.hex() == "0e3569f4005a0000c8a119ebbe2679592a5b27fd6e83710db921cc258757cb44"
    assert parse_header(decrypt_envelope(datagram, BOOTSTRAP))["payload_span"] == [21, 24]
    # Context upper16 bytes are installed but not referenced by these cipher loops.
    assert decrypt_envelope(datagram, BOOTSTRAP[:16] + bytes(16)) == plain
    rejects(decrypt_envelope, datagram, bytes(32))
    for prefix in range(len(datagram)):
        rejects(decrypt_envelope, datagram[:prefix], BOOTSTRAP)
    # Model the native receiver's noncanonical reserved-byte acceptance explicitly.
    changed = bytearray(datagram)
    changed[7] = 0x77
    struct.pack_into("<I", changed, 0, fnv1a(plain + changed[4:8]))
    rejects(decrypt_envelope, changed, BOOTSTRAP)
    assert decrypt_envelope(changed, BOOTSTRAP, canonical=False) == plain
    words = [1, 127, 128, 0xFFFFFFFF, 6, 7, 8, 9]
    response = b"\x00" + varuint(10) + varuint(3) + b"".join(map(varuint, words)) + bytes(range(16))
    result = parse_connection_response(response)
    assert result["context_words"] == words and result["signed_value"] == -2
    for prefix in range(len(response)):
        rejects(parse_connection_response, response[:prefix])
    for value in [1, 2]:
        assert parse_connection_response(bytes([value])) == {"alternative": value}
    rejects(parse_connection_response, b"\x03")
    rejects(parse_connection_response, response + b"\x00")
    rejects(parse_header, b"\x00\xff\xff\x07")
    return {"status": "passed", "envelope_roundtrips": roundtrips,
            "header_flag_combinations": 16, "connection_response_alternatives": 3,
            "synthetic_connection_request_plaintext_hex": plain.hex(),
            "synthetic_connection_request_datagram_hex": datagram.hex(),
            "limit": "Synthetic algorithm/bounds checks; no live/native differential test"}


if __name__ == "__main__":
    print(json.dumps(verify()))
