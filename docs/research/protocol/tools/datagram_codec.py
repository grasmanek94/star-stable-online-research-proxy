"""Offline reference for client647's UDP envelope/header; no sockets or process access.

Not TLS, authentication, a relay, or a fragment reassembler. Inputs/outputs can
contain private login data. Synthetic checks are not native differential tests.
"""
import struct

MASK = 0xFFFFFFFF
DELTA = 0x9E3779B9
CYCLES = 8
BOOTSTRAP = bytes.fromhex(
    "3a190000 a2a60000 62070000 ca010000 3ea60000 d00b0000 02fb0000 7a010000")


class DecodeError(ValueError):
    pass


def fnv1a(data):
    value = 0x811C9DC5
    for byte in data:
        value = ((value ^ byte) * 0x01000193) & MASK
    return value


def _block(block, words, decrypt=False):
    left, right = struct.unpack("<2I", block)
    total = (DELTA * CYCLES) & MASK if decrypt else 0
    for _ in range(CYCLES):
        if decrypt:
            right = (right - ((((left << 4) ^ (left >> 5)) + left) ^
                              (total + words[(total >> 11) & 3]))) & MASK
            total = (total - DELTA) & MASK
            left = (left - ((((right << 4) ^ (right >> 5)) + right) ^
                            (total + words[total & 3]))) & MASK
        else:
            left = (left + ((((right << 4) ^ (right >> 5)) + right) ^
                            (total + words[total & 3]))) & MASK
            total = (total + DELTA) & MASK
            right = (right + ((((left << 4) ^ (left >> 5)) + left) ^
                              (total + words[(total >> 11) & 3]))) & MASK
    return struct.pack("<2I", left, right)


def _words(key):
    if len(key) != 32:
        raise ValueError("Supply all eight context words as 32 little-endian bytes")
    return struct.unpack("<8I", key)


def encrypt_envelope(plaintext, key, *, salt):
    """Synthetic encoder: caller supplies salt, not native pointer/counter entropy."""
    words = _words(key)
    if not plaintext or not 0 <= salt <= 255:
        raise ValueError("Nonempty plaintext and byte salt required")
    padding = -len(plaintext) % 8
    prefix = bytes([padding, salt, salt & plaintext[0] & key[0], 0])
    padded = plaintext + bytes(padding)
    encrypted = b"".join(_block(padded[i:i+8], words) for i in range(0, len(padded), 8))
    return struct.pack("<I", fnv1a(plaintext + prefix)) + prefix + encrypted


def decrypt_envelope(datagram, key, *, canonical=True):
    """canonical=False follows observed receiver padding/reserved-byte predicates.

    This does not reproduce native buffer allocation or every malformed-input
    behavior. No network-size policy is imposed here; native network limit=1500.
    """
    words = _words(key)
    if len(datagram) < 16 or len(datagram) % 8:
        raise DecodeError("Invalid envelope length")
    expected, = struct.unpack_from("<I", datagram)
    prefix = datagram[4:8]
    padding, salt, tag, reserved = prefix
    padded = b"".join(_block(datagram[i:i+8], words, True)
                      for i in range(8, len(datagram), 8))
    if tag != (salt & padded[0] & key[0]):
        raise DecodeError("Wrong first-block tag or context")
    if padding >= len(padded):
        raise DecodeError("Padding consumes the complete plaintext")
    plaintext = padded[:len(padded)-padding]
    if canonical and (padding > 7 or reserved != 0 or any(padded[len(plaintext):])):
        raise DecodeError("Noncanonical sender padding/reserved byte")
    if fnv1a(plaintext + prefix) != expected:
        raise DecodeError("Checksum mismatch")
    return plaintext


class Cursor:
    def __init__(self, data):
        self.data, self.position = data, 0

    def take(self, size):
        if size < 0 or size > len(self.data) - self.position:
            raise DecodeError("Truncated field")
        start = self.position
        self.position += size
        return self.data[start:self.position]

    def varuint(self, bits):
        value = 0
        for shift in range(0, bits, 7):
            byte = self.take(1)[0]
            value |= (byte & 127) << shift
            if not byte & 128:
                if value >= 1 << bits:
                    raise DecodeError("Varint overflows declared width")
                return value
        raise DecodeError("Unterminated varint")


def parse_header(plaintext):
    """Return header plus payload byte span. Payload may still be one fragment."""
    cursor = Cursor(plaintext)
    flags = cursor.take(1)[0]
    result = {"flags": flags, "message_id": cursor.varuint(16),
              "value_a": cursor.varuint(32), "connection_id": cursor.varuint(32),
              "opaque_id_hex": cursor.take(16).hex()}
    if flags & 8:
        result["optional_value"] = cursor.varuint(64)
    if flags & 1:
        result["sequence"] = cursor.varuint(32)
        if flags & 3 == 3:
            result["fragment_count"] = cursor.varuint(16)
            result["fragment_index"] = cursor.varuint(16)
    result["payload_span"] = [cursor.position, len(plaintext)]
    return result


def parse_connection_response(body):
    """ID2 BODY only. The returned context is private session material."""
    cursor = Cursor(body)
    alternative = cursor.take(1)[0]
    result = {"alternative": alternative}
    if alternative == 0:
        result["connection_id"] = cursor.varuint(32)
        signed = cursor.varuint(32)
        result["signed_value"] = (signed >> 1) ^ -(signed & 1)
        result["context_words"] = [cursor.varuint(32) for _ in range(8)]
        result["opaque_id_hex"] = cursor.take(16).hex()
    elif alternative not in (1, 2):
        raise DecodeError("Unsupported connection-response alternative")
    if cursor.position != len(body):
        raise DecodeError("Trailing connection-response bytes")
    return result
