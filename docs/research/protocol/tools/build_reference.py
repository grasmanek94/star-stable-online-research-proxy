from pathlib import Path
import argparse,json,re,hashlib,shutil
from actor_schemas import SPEC as ACTOR_SPEC
from authentication_schemas import SPEC as AUTH_SPEC
parser=argparse.ArgumentParser(description='Build the static SSO client647 reference from local IDA exports.')
parser.add_argument('--evidence',type=Path,default=Path('evidence/client-647'))
parser.add_argument('--output',type=Path,default=Path('docs/research/protocol'))
args=parser.parse_args()
R=args.evidence.resolve()
D=args.output.resolve()
D.mkdir(parents=True,exist_ok=True)
ids=json.loads((R/'message-ids.json').read_text())
bindings=json.loads((R/'rpc-bindings-enriched.json').read_text())
meta=json.loads((R/'rpc-method-metadata.json').read_text())
deps=json.loads((R/'serializer-dependencies.json').read_text())
actor_evidence=json.loads((R/'actor-lifecycle-evidence.json').read_text())
auth_evidence=json.loads((R/'authentication-evidence.json').read_text())
endpoint_evidence=json.loads((R/'endpoint-evidence.json').read_text())
raw_bindings=json.loads((R/'raw-reader-callbacks.json').read_text())
for b in raw_bindings:
    i=int(re.search(r'_lambda_(\d+)_',b['name'])[1])
    b['id']=(360 if i==1 else 358) if 'PledgeManager' in b['name'] else 329+i*2
    b['registration_function_rva']='0x4e11f0' if 'PledgeManager' in b['name'] else '0x82be30'
raw_ids={b['id']for b in raw_bindings}
names={x['id']:x['name'] for x in ids}
code={}
for p in (R/'decompiled').glob('*.c'):
    s=p.read_text(encoding='utf-8');m=re.search(r'sub_140([0-9A-F]+)\(',s.split('{',1)[0])
    if m and int(m[1],16)==int(p.stem,16):code[int(p.stem,16)]=s
rpcs={}
for b in bindings:rpcs.setdefault(b['id'],[]).append(b)
sources={}
for m in meta:
    for ref in m['references']:
        rva=int(ref['function_rva'],16);text=code.get(rva,'')
        if ref['field_offset']==0 and 'ByteStreamWriter' in text and 'RpcExecutor::HandlerStub' not in text:
            sources.setdefault(m['id'],set()).add(rva)
for mid,rv in [(1,0x7F1530),(6,0x7C1AF0),(280,0x7D9D70),(281,0x7D9D70)]:sources.setdefault(mid,set()).add(rv)
manual_in={2,282,284,285,286,287,289,291,292,297,298,299,301,302,374,375,376}
markers={0,267,275,276,377,435}
internal=set(range(268,275))|set(range(378,435))
security=set()
excluded={0x80C330,0x5F1D40,0x5F1D60,0x5F1EE0,0x5FC760,0x5FADF0,0x5FD6C0}
excluded.update(int(b['execute_rva'],16)for b in bindings if b['id'] in security)
excluded.update(int(x['function_rva'],16)for m in meta if m['id'] in security for x in m['references'])
roots=set(int(x['execute_rva'],16)for x in bindings if x['id'] not in security)
roots|={r for n,refs in sources.items() if n not in security for r in refs}
roots|={int(x,16)for x in deps['function_stream_arguments']}
roots|={0x801400,0x7F1530,0x7F2310,0x7F2680,0x80DC00,0x80E170,0x80DFF0,0x80E2A0,0xA46670,0xA485A0,0xA47360,0xA47B80,0x80D7D0,0x80E3B0,0xA4C590,0xA4C5E0,0x80B430,0x80B750,0x809340,0x809050,0x8097F0,0x8091A0,0x809F50,0x80A020,0x80BFE0,0x80BDB0,0x80BCE0,0x80BB90,0x7D08D0,0x7D1A00,0x7C1800,0x7D0120,0x7AA810,0x7AA8F0,0x347560,0x349AF0,0x7AF3D0,0x7D2C00,0x7D24E0,0x7D2310,0x7D3360,0x7D2020,0x3474B0,0x349DC0,0x7F3E10,0x7AF240,0x344090,0x7AABE0,0x7A8EA0,0x7AAB40,0x7AF9F0,0x7AAA70,0x7A66A0}
roots|={0x7FF100,0x7FEC10,0x7FECF0,0x7FF1A0,0x4E3CA0,0x82FCB0,0x4E11F0,0x82BE30,0x82C850,0x8297A0,0x1A520,0x7D46B0}
roots|={int(x,16)for x in actor_evidence['procedure_rvas']}
roots|={int(x,16)for x in auth_evidence['procedure_rvas']}
roots|={int(x,16)for x in endpoint_evidence['procedure_rvas']}
selected=sorted((roots & code.keys())-excluded)
out=[]
def write(s=''):out.append(s.rstrip()+'\n')
def table(head,rows):
    write('| '+' | '.join(head)+' |');write('|'+'|'.join('---' for _ in head)+'|')
    for row in rows:write('| '+' | '.join(str(c).replace('|','\\|').replace('\n',' ')for c in row)+' |')
    write()
def fnlink(rv):return f'[RVA0x{rv:08X}](#fn-{rv:08x})' if rv in selected else f'RVA0x{rv:08X}'
def namespace(n):
    return 'sentinel' if n in markers else 'internal/backend namespace' if n in internal else 'game/server namespace' if n<267 else 'router namespace'
write('''# Star Stable Online client647 network protocol reference

Research date:2026-11-19. Source: static analysis with the Official IDA MCP server of **SSOClient647.349716**, SHA256 `62387b246a92a4874d20329caa6eaf06c7a29830263e94982a8bdad6b6110fe1`. Image-relative addresses below are **RVAs**, added to preferred IDA image base0x140000000. They identify this client only.

## Read this first: actual scope and confidence

**The recovered game-server protocol is UDP, not TCP.** It implements its own reliable delivery, ordering, fragmentation, acknowledgements and an encrypted envelope. The client also contains TCP/HTTP code; that is a separate stack. Do not put a TCP length-prefix reader in front of these game datagrams.

This document contains the **complete436-entry client ID/name table**, the recovered incoming RPC registrations and argument types, transport/primitive/compound layouts, code-backed state diagrams, and a large address-indexed payload-procedure appendix. It is not a claim to know a complete server implementation or every semantic field name. A client can name backend/internal IDs without containing their serializers. Those missing definitions cannot honestly be reconstructed from names alone.

Confidence labels:

- **Verified:** directly read from instructions, a concrete serializer, the ID jump table, or a matching RPC registration/reader.
- **Candidate:** a static metadata reference or stream-dependency path that needs contextual review; it is not by itself a direction/schema proof.
- **Unknown:** absent or not established by this analysis. Anonymous fields keep their offsets/types instead of receiving invented names.

Packet captures, live sessions, successful server acceptance and every possible server-controlled branch were not tested. No live game memory was modified, no game code was executed, and no login/session traffic was collected. This is a reference to recovered client parsers and writers; it does not implement a proxy or claim server behavior absent from this client.

For discovery steps, problems and follow-up addresses, see [JOURNAL.md](JOURNAL.md). The structured extraction data is in [data/](data/). A host-memory offset is never automatically a wire offset: C++ padding, pointers, vector capacity and variant storage are not transmitted.

## Contents

- [Transport stack](#transport-stack)
- [Server domains and endpoint selection](#server-domains-and-endpoint-selection)
- [Library identification and format examples](#library-identification-and-format-examples)
- [Launcher handoff, authentication and traffic decryption](#launcher-handoff-authentication-and-traffic-decryption)
- [Connection states](#connection-states)
- [Encrypted datagram envelope](#encrypted-datagram-envelope)
- [Packet header](#packet-header)
- [Reliable delivery and split messages](#reliable-delivery-and-split-messages)
- [Primitive encodings](#primitive-encodings)
- [Compound records](#compound-records)
- [Player, horse and pet lifecycle](#player-horse-and-pet-lifecycle-proxy-facing-layouts)
- [Complete message ID catalog](#complete-message-id-catalog)
- [Incoming RPC payload catalog](#incoming-rpc-payload-catalog)
- [Payload and transport procedure appendix](#payload-and-transport-procedure-appendix)
- [Remaining gaps](#remaining-gaps)

## Transport stack

RVA0xA4B4D0 creates `socket(address_family,2,0)`: datagram sockets. Login endpoint resolution0xA4B7B0 likewise supplies socket type2. UdpNetworkLayer receive0x80B430 calls0xA4BA20, which uses `recvfrom`; send0x80B750 calls0xA4BB70, which uses `sendto`. The network layer accepts datagrams up to1500 bytes. Login-server port18971 is a configured-value fallback in0x7C1800, not proof that all connections always use that port.

The Winsock send/recv callers0x978EC0/0x9790F0 inspected here belong to bundled HTTP/cURL plumbing, not the discovered gameplay message layer. HTTP/TLS library messages and Sentry/crash-reporting strings must not be mistaken for SSO gameplay RPCs. No separate custom TCP world-message frame format was established.

```mermaid
flowchart LR
  App[Game message or RPC arguments] --> Writer[ByteStreamWriter and type serializers]
  Writer --> Message[SendingMessage]
  Message --> Reliable[UdpMessageLayer: reliability and splitting]
  Reliable --> Header[PacketHeader plus payload]
  Header --> Crypto[GameServerEncryptedNetworkLayer]
  Crypto --> UDP[UdpNetworkLayer: sendto and recvfrom]
  Web[Separate bundled HTTP paths] --> TCP[TCP streams and HTTP or TLS handling]
```

A UDP receive is already a datagram. OS IP fragmentation is below this layer; the application's split-message fields described below are a separate mechanism. A datagram is transformed/decrypted, its variable-length PacketHeader is consumed, and the remaining bytes become that packet's payload. No application-level TCP reassembly was observed in this path.
''')
endpoint_notes=Path(__file__).resolve().parents[1]/'ENDPOINTS.md'
write(endpoint_notes.read_text(encoding='utf-8'))
library_notes=Path(__file__).resolve().parents[1]/'LIBRARY_IDENTIFICATION.md'
write(library_notes.read_text(encoding='utf-8'))
auth_notes=Path(__file__).resolve().parents[1]/'AUTHENTICATION.md'
write(auth_notes.read_text(encoding='utf-8'))
write('''
## Connection states

The connection-request path0x7F1530 builds message1. The response path0x7F2310 handles message2 before ordinary delivery and installs the returned connection information. The worker0x7F2680 has a2000ms retry timer with a retry counter checked against8: an initial request followed by up to8 retries, then failure when the next due retry finds the counter exhausted. CPXNetwork::ProcessConnect0x7D0120 handles endpoints and failures at a higher level.

```mermaid
stateDiagram-v2
  [*] --> Idle
  Idle --> Resolving: connect requested
  Resolving --> Connecting: endpoint chosen and socket bound
  Connecting --> Connecting: request1 retry timer, up to8 retries
  Connecting --> Connected: response2 success alternative
  Connecting --> Failed: rejection, endpoint failure, or retry exhaustion
  Connected --> LoggingIn: application login6
  LoggingIn --> CreatingPlayer: successful login7
  CreatingPlayer --> InWorld: player creation8 and response9
  InWorld --> Closing: disconnect or transport failure
  Connected --> Closing: disconnect or transport failure
  Closing --> Idle: cleanup
  Failed --> Idle: failure returned to caller
```

This diagram separates the directly recovered transport states from the higher-level login/player sequence. It does not assign an unverified numeric value to every CPXNetwork state or claim all server errors have identical recovery behavior.

### ConnectionRequest, ID1, client to server

Serialized by0x7F1530: unsigned32 varint protocol value, followed by one raw user-flags byte. The inspected ProcessConnect call passes protocol value534. This is distinct from executable version647.349716. The actual meaning of every user-flags bit was not recovered. The request is sent as a reliable message and uses bootstrap encryption.

### ConnectionResponse, ID2, server to client

A raw byte selects one of3 alternatives. The read table at0x1015EC0 points to0x7AAE50,0x7AAE00,0x7AAEB0. Alternative0 delegates to0x7AA810 and consumes the following fields in order:

|Order|Wire encoding|Recovered role|
|---|---|---|
|1|varu32|Connection identifier installed into connection object+64|
|2|zigzag32|Additional signed value; semantics not assigned|
|3–10|8 times varu32|Connection-specific crypto material copied into the encrypted layer|
|11|16 raw bytes|Opaque endpoint/session identifier installed into connection object+72|

Alternatives1 and2 are zero-payload alternatives: their readers set the local variant discriminator and return success without consuming additional body bytes. Their precise human-readable rejection labels are unknown. The discriminator in host memory at+56 is not another wire field. This response is also processed by the normal server-message fallback0x7D1A00, which does not change its format.

## Encrypted datagram envelope

The envelope surrounds the complete serialized PacketHeader and payload. Constructor0x80DFF0 initializes a bootstrap crypto context;0x80E2A0 installs connection-specific material. Outgoing IDs1 and2 use the bootstrap context; other IDs use the connection-specific context. Receive0x80DC00 first tries the connection context when installed, then bootstrap; the bootstrap fallback is accepted only if the decoded header's message ID is1 or2.

The block transform is **XTEA-style with8 loop iterations**, each updating both32-bit halves. Do not silently substitute a library's usual default round count. Constructor0xA46670 writes8 to context+44.0xA47360 is the inverse transform,0xA47B80 the sender. The body is processed in independent8-byte blocks in the reviewed implementation.

|Datagram offset|Width|Meaning|
|---|---|---|
|0|4 raw little-endian bytes|32-bit checksum|
|4|1|Number of padding bytes,0–7 for the native sender|
|5|1|Per-envelope salt byte|
|6|1|Tag = salt AND plaintext[0] AND low_byte(key_word0)|
|7|1|Zero in the native sender|
|8|Multiple of8|Encrypted PacketHeader plus payload, padded to8-byte alignment|

For plaintext lengthN, sender length is `8 + ((N+7)&~7)`. The checksum is FNV-1a32 over the unpadded plaintext followed by the four prefix bytes at offsets4..7. Use arithmetic modulo2^32. Decryption checks the first-block tag and checksum, removes padding, and reports the unpadded size. Receive rejects sizes below8 or not divisible by8 and requires nonempty recovered plaintext. The network buffer is1500 bytes; the receive layer allocates1488 bytes for possible plaintext.

For each little-endian pair of32-bit body words, the sender's arithmetic can be written as below. All intermediates wrap modulo2^32; logical right shifts are unsigned. The native body uses8 cycles and no chaining between adjacent blocks:

```text
sum = 0
repeat 8 times:
    v0 += (((v1 << 4) XOR (v1 >> 5)) + v1) XOR (sum + key[sum AND 3])
    sum += 0x9E3779B9
    v1 += (((v0 << 4) XOR (v0 >> 5)) + v0) XOR (sum + key[(sum >> 11) AND 3])
```

The native sender zero-fills the padding. The salt/counter calculation and exact inverse/check failure branches remain visible in0xA47B80/0xA47360. The checksum's FNV start is0x811C9DC5 and multiplier0x01000193; no checksum bytes are included in their own input.

The bootstrap32-byte material is a static array at RVA0x1020478 in this client. Its bytes are `3a 19 00 00 a2 a6 00 00 62 07 00 00 ca 01 00 00 3e a6 00 00 d0 0b 00 00 02 fb 00 00 7a 01 00 00`. Key installer0xA485A0 copies8 little-endian32-bit words into context+8..39. The reviewed block equations index the first4 words; the remaining stored words must not be guessed to be a second separately transmitted key. The per-envelope counter is at+40 and loop count at+44. See the exact procedures below for arithmetic and key indexing. No live account key, password or ticket is included in this document.

```mermaid
flowchart TD
  Rx[One UDP datagram] --> Size{Envelope size valid?}
  Size -- no --> Drop[Reject datagram]
  Size -- yes --> Session{Connection key installed?}
  Session -- yes --> SessionTry[Try connection-key decode and checks]
  SessionTry -- success --> Parse[Parse PacketHeader]
  SessionTry -- failure --> Bootstrap[Try bootstrap decode and checks]
  Session -- no --> Bootstrap
  Bootstrap -- failure --> Drop
  Bootstrap -- success --> BootHeader[Parse header and require ID1 or2]
  BootHeader -- other ID --> Drop
  BootHeader -- accepted --> Deliver[Pass plaintext to connection manager]
  Parse --> Deliver
```

## Packet header

RVA0x801400 serializes/deserializes the header. **Its48-byte C++ structure is not a48-byte wire header.** Fields are emitted individually in the following order:

|Order|Host offset|Wire encoding|Role|
|---|---|---|---|
|1|+0|u8|Flags|
|2|+2|varu16|Message ID from the catalog|
|3|+4|varu32|Header valueA; copied from SendingMessage+12; exact meaning unknown|
|4|+8|varu32|Connection identifier; copied from SendingMessage+8|
|5|+12|16 raw bytes|Opaque endpoint/session identifier|
|6, conditional|+32|varu64|Optional header valueB, present when flags bit0x08 is set|
|7, conditional|+40|varu32|Reliable sequence number, present when flags bit0x01 is set|
|8, conditional|+44|varu16|Fragment count, present when `(flags&3)==3`|
|9, conditional|+46|varu16|Zero-based fragment index, under the same condition|

The writer sets0x08 when the host value at+32 is nonzero. The serializer includes reliable fields whenever bit0 is set, including ACK packets. Host padding at+1 and+28..31 is not emitted. Parsing ends at the stream cursor; the remainder of the datagram is payload. Flags not evidenced below remain unknown and should not be assigned names from guesswork.

|Flag|Verified interpretation|
|---|---|
|0x01|Reliable packet; includes reliable sequence|
|0x02 together with0x01|Split reliable packet; adds fragment count then index|
|0x04 together with0x01|Reliable acknowledgement|
|0x08|Optional varu64 header valueB present|

### Host-side transport objects

These offsets identify compiler layouts for this executable and are **not contiguous wire templates**:

|Object|Recovered host members|
|---|---|
|SendingMessage|+0 reliability selector32; +4 message ID16; +8 connection ID32; +12 header valueA32; +16 opaque128; +32 optional64; +40 payload pointer; +48 payload length32; +52 accounting32|
|ReceivedPacket|+40 PacketHeader; +88 payload pointer; +96 payload length32; +104 receive time64;112-byte host record|
|PacketHeader|48-byte host object; field order/conditional presence shown above|
|Crypto context|+8..39 key material; +40 per-envelope counter; +44 loop count8; +48 ready flag|

The same number can appear at different offsets in different objects. In particular ReceivedPacket+48 is PacketHeader+8, the connection identifier. Do not confuse it with header valueA at PacketHeader+4.

## Reliable delivery and split messages

Sender0x809340 chooses reliable packets; payloads over1024 bytes are split into chunks of at most1024. It writes flags3, count `ceil(length/1024)`, index starting0 and increments the endpoint's reliable sequence once **per fragment**. Unsplit reliable packets use flags1. Unreliable sender0x808E80 writes flags0 and rejects payloads over1024.

**ACK packets retain the original application message ID.**0x80A020 copies the received ID/connection/identifier fields, writes flags5, preserves the reliable sequence and emits the header without a payload. The presence of catalog ID3 does not mean transport ACKs have to use ID3. ACK receive0x8091A0 removes the matching saved retransmission record by reliable sequence.

Reliable receive0x8097F0 acknowledges packets, rejects already-consumed sequence values, buffers out-of-order arrivals, suppresses queued duplicates and consumes only the next expected sequence. Split messages accumulate until the last index; the preceding fragments must have the same count and indices0..count-2. Payload bytes are concatenated in order and only then delivered as a message. The reviewed code does not introduce a separate wire fragment-group identifier. It relies on the ordered stream and repeated count/index fields.

Retransmission0x809F50 uses `last_send + base_timeout * attempt_count < now`, then increments the attempt count and updates the saved time. This is distinct from the2-second connection-request retry timer. Base timeout/status handling is supplied through connection status data; a universal fixed RTO was not established.

```mermaid
flowchart TD
  Packet[Decoded packet] --> Reliable{Reliable bit set?}
  Reliable -- no --> Dispatch[Deliver message payload]
  Reliable -- yes --> ACK{ACK bit set?}
  ACK -- yes --> Retire[Remove saved send record by sequence]
  ACK -- no --> Reply[Send header-only ACK retaining message ID]
  Reply --> Old{Already consumed or queued?}
  Old -- yes --> Ignore[Do not deliver a duplicate]
  Old -- no --> Queue[Queue and sort by reliable sequence]
  Queue --> Next{Next expected sequence available?}
  Next -- no --> Wait[Wait for the missing sequence]
  Next -- yes --> Split{Split flag set?}
  Split -- no --> Dispatch
  Split -- yes --> Gather[Accumulate fragments and validate count and indices]
  Gather --> Last{Complete fragment series?}
  Last -- no --> Next
  Last -- yes --> Join[Concatenate body bytes]
  Join --> Dispatch
```

## Primitive encodings

The client uses positional serialization. It does **not** add a Protobuf-style field tag before every member. A varint prefix in a field is not evidence of Protobuf.

|Encoding|Bytes and interpretation|Evidence RVA|
|---|---|---|
|u8 / raw bool|One byte. Native bool/optional writers use0 or1; several readers treat any nonzero value as true.|0x2B8840 and per-type readers|
|varu16|Low7 bits per byte,0x80 continuation; at most3 bytes; zero is00.|0x2D2B10; wrapper0x2D2D70|
|varu32|Same, at most5 bytes; no fixed4-byte padding.|0x1D0820; wrapper0x1D0C80|
|varu64|Same, at most10 bytes.|0x2AF380; wrapper0x9CB310|
|zigzag32|Encode `(x<<1) ^ (x>>31)` then unsigned varint; decode `(u>>1) ^ -(u&1)`.|0x200540|
|raw little-endian32|Exactly4 bytes; used by compressed-blob lengths and some scalar float fields. Distinct from varu32.|0x80D7D0 and raw stream calls|
|opaque128|Exactly16 bytes without swapping. No RFC UUID textual byte order is assumed.|0xA44740,0xA44050|
|Vec3|12 raw bytes, three native float32 values on the x64 little-endian client.|0xA25C40|
|Normalized4|8 bytes: four little-endian uint16; decode each as `clamp(2*u/65535-1,-1,1)`. Sender clamps components then quantizes by truncation.|0xA25B40,0xA25A20|
|byte string|varu32 length followed by exactly that many bytes; maximum8096 in this helper. No terminator is transmitted.|0x2B4D00|
|optional T|Presence byte then T only when present; absent has no value bytes.|Concrete type readers|
|variant T0,T1,...|One byte alternative index, then that alternative's payload; invalid index fails.|Concrete read/write tables|
|vector T|Count prefix then repeated T, with type-specific cap. Common cap16000; do not apply it blindly to every collection.|Concrete vector readers|

`std::string` alone does not prove UTF-8 validation. The byte-string helper copies bytes. UI text usage may imply an encoding, but this extraction does not establish a universal text-normalization rule. Likewise C++ enum storage size does not establish wire width: e.g ClientExitCode reader0x2D2DB0 consumes varu16 into a wider host field, while other enums use raw bytes or varu32.

Native varint examples:0→`00`,127→`7F`,128→`80 01`,300→`AC 02`,65535→`FF FF 03`. ZigZag maps0→0,−1→1,1→2,−2→3. The5-byte/10-byte limits describe these concrete encoders/read loops; they do not establish that every malformed/noncanonical representation is accepted or rejected identically to a third-party varint library.

The stream object stores a cursor and another accounting counter. Varint helpers adjust accounting by the difference from the host width; that adjustment is not extra wire padding. Values such as19937 and0x0BADF00D in decompiled cleanup/registry code are pointer/handle sentinels, not packet framing constants.

### CompressedBlob

The recovered layout is:

```text
u32le record_length       # excludes this length field
u32le uncompressed_length # included in record_length
byte compressed_data[record_length-4]
```

Reader0x80D7D0 verifies the record fits the remaining input, passes the bounded record to0x80E3B0, and requires decompression to produce exactly uncompressed_length bytes. Wrapper0xA4C5E0 calls0xE6C020; its token/literal/match decoder follows the LZ4 block pattern (high-nibble literal lengths, low-nibble match lengths plus4, extension bytes and16-bit offsets). This algorithm identification is based on instructions, not on a packet capture. The format is a client-specific length wrapper around a block, not a standard LZ4 frame header. Compression is specific to fields/messages using this type; not every packet body is compressed.

## Compound records

These tables are concrete serializer order. Host offsets help locate consumer semantics in IDA; they are not fixed network offsets. Unknown member meanings are intentionally anonymous.

### PlayerStateData,0x80BFE0

|Order|Host offset|Wire value|
|---|---|---|
|1–3|+0,+1,+2|Three raw bytes|
|4|+12|varu32|
|5|+44|Presence byte for transformA|
|6, if present|+16|Vec3|
|7, if present|+28|Normalized4|
|8|+116|Movement alternative byte:0 or1|
|9|+48|Selected movement record below|
|10|+120|Optional attachment record below|
|11|+164|Raw byte|
|12|+168|varu32|
|13|+4|Optional varu32 (presence byte then value)|
|14|+172|varu32|

Movement alternative0 reader0x80BDB0: raw byte at+0; Vec3+4; Normalized4+16; Vec3+32; raw4+44; raw4+48; varu32+52; optional varu32+56. Raw4 fields are not assigned float meanings without consumer proof.

Movement alternative1 reader0x80BCE0: raw byte+0; Vec3+4; Normalized4+16; Vec3+32; Vec3+44; raw4+56; raw4+60; varu32+64. Read dispatch table0x101C068 and write table0x101C078 select these alternatives. The different host record sizes are variant storage details, not a transmitted size field.

Optional attachment0x80BB90: presence byte; when present, Vec3+0, Normalized4+12, optional varu32+28, raw byte+36, raw byte+37. The host presence byte at+40 is not serialized again at the end.

Outgoing IDs280/281 serialize PlayerStateData then a varu32 time/count value, set from a millisecond-scale clock in0x7D9D70. Incoming282 is a sequence of `[varu32 player_id, PlayerStateData]` records consumed until the next ID cannot be read; no leading record count is read by0x7D08D0. Do not assume outgoing and incoming position payloads are identical.

### PlayerCreateSharedMessage,0x7AA8F0 and0x7AF3D0

The outer wrapper builds a tuple of member references in reverse physical storage order; the visitor reads them in logical field order. The following table follows the visitor, not array-assignment order.
''')
player=[(0,'varu32'),(4,'varu32'),(8,'byte string'),(40,'byte string'),(72,'varu32')]+[(o,'u8')for o in range(76,85)]+[(88,'varu32'),(92,'varu32'),(96,'map: varu16 count, then repeated [u8 key, varu32 value]'),(160,'Vec3'),(172,'Normalized4'),(188,'varu32'),(192,'varu32'),(200,'byte string'),(232,'8 raw bytes'),(240,'record: varu32, u8, u8')]
table(['Order','Host offset','Wire encoding'],[(i+1,f'+{o}',t)for i,(o,t)in enumerate(player)])
write('''### HorseBase,0x347560 and0x349AF0

The reference-array entry at byte192 is index24, the original base pointer. It is the first serialized field, rather than unused metadata. Following it correctly avoids shifting all the member offsets by one slot.
''')
horse=[(0,'varu32'),(8,'byte string'),(40,'varu32'),(44,'varu32'),(48,'varu32'),(52,'Vec3'),(64,'Normalized4'),(80,'13 raw bytes'),(96,'map: varu16 count, then [u8 key, varu32 value]'),(160,'varu32'),(164,'varu32'),(168,'varu32'),(172,'zigzag32 through 0x344090'),(176,'varu32'),(180,'zigzag32 through 0x344090')]+[(o,'u8')for o in range(184,194)]
table(['Order','Host offset','Wire encoding'],[(i+1,f'+{o}',t)for i,(o,t)in enumerate(horse)])
write('''HorseBase is an analysis alias for the shorter horse wire record; it is not the entire RTTI-named HorseCreateMasterMessage. The larger HorseCreateMasterMessage read by0x3474B0/0x349DC0 starts with this entire base record, then adds16 raw bytes at host+200, varu32+216, varu32+220 and8 raw bytes individually at+224..231. These16 raw bytes are distinct from the8-byte Normalized4 encoding. This larger record occurs in push subtypes5/6 and typed horse RPCs; it must not be silently substituted for HorseBase in message285. See the focused lifecycle section for the consumed appended horse, identity fields and per-slot equipment states.

Semantic names such as breed, cosmetic slot or privilege have not been assigned to anonymous fields without consumer evidence.

### Server login messages6,7,9

ID6 client→server is constructed in0x7C1AF0 and serialized by0x7AF880 in this order:

1. Optional record: presence byte; when present, byte string, varu32, raw byte (0x7A68B0). The inspected caller initializes this optional absent.
2. Three byte strings in order: NetworkUserName (possibly empty), HTTPS-provided game-server ticket, machine identifier (initializer+432 override or Windows MachineGuid fallback). These are not the launcher's access/refresh tokens.
3. Optional queue-token opaque128: presence byte followed by16 raw bytes when present. The text UUID is parsed without Windows GUID field swapping.
4. varu32 user/account ID from initializer+312, then varu32 set to1 by this caller; the constant's meaning is unresolved.
5. varu32 collection count, at most16000, then that many pack-archive metadata records `[byte string filename,varu32 size_bytes,varu32 crc32]` through0x7A8330. Source is initializer+960, not MetricsGroup+496. See authentication notes for header/data entries and the conditional CRC calculation.

See [the authentication section](#launcher-handoff-authentication-and-traffic-decryption) for the launcher argument formatter, HTTPS Bearer-to-ticket exchange, exact initializer offsets and offline decryption helper. No actual account credentials or machine identifier were collected.

ID7 server→client reader0x7C10C0 consumes ClientExitCode as varu16, then an optional LoginResponseData record (0x7A7DA0): presence byte; if present, byte string, game-feature collection0x7A98E0, client-feature collection0x7A9470, Vec3 and Normalized4. Each feature collection uses varu32 count≤16000 followed by `[byte string name,u8 enabled]` entries, rather than sending the host's uint16 bitmask directly. The first reader requires at least9 entries and rejects unknown names; the second requires at least15 and also rejects unknown names. The loops accept duplicate known names and overwrite the corresponding bit in wire order: last entry wins. They do not enforce a complete unique set of names; a nonzero enabled byte sets the bit. Handler0x7CAF80 interprets exit code0 as success and requires present data;3060 permits a timed retry while its attempt counter is below3. See the expanded authentication section for its state/timer branches and metadata cleanup.

Feature names, in local bit order, from0x7FF100 and0x7FEC10:

|Bit|Game-feature collection|Client-feature collection|
|---|---|---|
|0|validate_quest_update|compile_script_on_load|
|1|decouple_activities_from_groups|save_metric_on_disc|
|2|kick_player_on_item_release_validation_fail|use_report_player|
|3|new_slave_synchronization|use_actor_refresh_delegates|
|4|enable_archive_horse|enable_quest_cleanup|
|5|enable_event_outbox|enable_actor_streaming|
|6|enable_crafting_system|enable_actors_on_demand|
|7|enable_mystable_grids|enable_space_actors_unload|
|8|enable_refactored_achievement_system|physics_60_ticks_per_second|
|9|—|enable_animation_driven_jousting|
|10|—|enable_nebula|
|11|—|enable_multiple_horse_locations|
|12|—|enable_fashion_week|
|13|—|enable_report_a_message|
|14|—|enable_allow_jump_in_all_triggers|

The field names describe server-selected feature state, not an independently usable setting file. Their on-wire names are short ASCII strings; this does not establish an encoding rule for arbitrary chat text. The client-feature name at bit10 is stored as a13-byte literal at0xEED330; a forced oversized IDA string read runs into adjacent data, so only the length used by the matching reader is meaningful.

ID9 server→client reader0x7C1170 consumes ClientExitCode as varu16 and then CompressedBlob. Its decompressed object-state body is separate from the compressed outer wrapper. A CompressedBlob is not automatically a UTF-8 document or a generic vector.

### Direct dispatcher payloads

The complete dispatcher reader is0x7D08D0. In addition to typed RPCs, it has a raw-reader callback map and these explicit cases:

|ID|Directly recovered payload or evidence|
|---|---|
|282|Repeated player_id varu32 plus PlayerStateData, as above|
|284|Raw byte then remaining payload delegated to0x7D2C00; stream-update field semantics require that reader, not a guessed generic object format|
|285|Raw flag byte, varu32 value, PlayerCreateSharedMessage and HorseBase; see exact conditional branch in0x7D08D0|
|286|One varu32 player identifier, looked up for removal|
|287|Two varu32 values, used for horse-level-up notification|
|289|Three varu32 values followed by a raw byte, then emote handling|
|291|Two raw bytes, varu32 value, byte string; normal chat receive branch|
|292|Opaque128, raw byte, two varu32 values, byte string; alternate chat receive branch|
|297,299,302|varu32 error value, then byte string; GameServerMessages::ServerError|
|298|varu32 count≤16000, repeated [byte string,4 raw bytes], varu32 value, optional [byte string,4 raw bytes];0x7AF9F0 and0x7A66A0|
|301|varu32 followed by4 raw bytes; RaceCompetitionBestScoreResponseMessage|
|374|varu32, vector of leaderboard entries, two raw bytes, optional leaderboard entry; vector/entry formats below|
|375|No bytes consumed by this explicit branch; it only invokes local race-competition logic. This is not a proof the server must send zero bytes.|
|376|Four varu32 values; initial value plus three consumed by0x7AAB40|

The374 leaderboard vector starts with varu32 count≤16000, then entries parsed by0x7AAA70: two byte strings, five varu32 values. The following two raw bytes precede an optional byte and, if present, one more entry of the same format. Anonymous values retain this order without invented ranking/time semantics.

#### Player push update284: subtype byte and body

0x7D2C00 dispatches on the first raw byte, without another subtype length. Each row is the remaining payload:

|Subtype|Native diagnostic name|Wire fields in order|Reader RVA|
|---|---|---|---|
|1|ItemEquipPushMessage|varu32 player ID, varu32, u8, varu32|0x7D2C00|
|2|PetStateChangePushMessage|varu32 player ID, varu32 pet/item ID, u8 owner selector, varu32, u8 pet state|0x7D24E0|
|3|HorseNameChangePushMessage|varu32 player ID, byte string|0x7D2310|
|4|RemoteStartActorPushMessage|byte string actor path, varu32 player ID, varu32 argument|0x7D3360|
|5|HorseCreateMasterMessage diagnostic; local replacement path|Larger horse creation record described above|0x3474B0 via0x7D2C00|
|6|HorseCreateMasterMessage diagnostic; local update path|Same larger horse creation record|0x3474B0 via0x7D2C00|
|7|AppearanceChangePushMessage|varu32 player ID, varu32 horse/value ID, u8 appearance selector, presence byte, if present2×[varu32,zigzag32,varu32]|0x7D2020 and0x7AF240|
|8|HorseConsumableEffect diagnostic|Three varu32 values: player ID, effect/value ID, horse identity checked by consumer|0x7D2C00|
|9|HorseConsumableEffect diagnostic|Three varu32 values, same structural order, different local effect operation|0x7D2C00|
|12|CharacterActivityModifiedPushMessage|varu32 player ID, varu32, u8, u8|0x7D2C00 and0x77EDE0|
|10|PlayerLook makeup|varu32 player ID,raw u8|0x7F3E10 and0x80B9F0|
|11|PlayerLook appearance|varu32 player ID,6 raw u8 values|0x7F3E10 and0x80B9F0|
|Other|Unrecognized extension|No additional known subtype schema; preserve opaque|0x7F3E10|

Pet owner selector1 refers to the rider;2 follows its horse reference. Pet state handling can spawn a Pet or PetSlave and apply state, which is evidence for the pet-state role above. The varu32 field used as a byte by an equipment lookup still occupies a varint on the wire. Subtypes8/9 compare the last ID against the player's current horse, rather than applying to every horse globally. The concrete PlayerLook extension reader now resolves10/11; its registry keys are player IDs. See the lifecycle section for the assembly width check and semantic limits.

Message285 reads its flag byte and varu32 prefix first. It parses PlayerCreateSharedMessage and HorseBase only when the local context pointer checked in this branch is nonzero; that is a client-state condition, not an extra transmitted presence field. Before reading the new records, this branch looks up/removes an existing actor using ReceivedPacket+48, which is PacketHeader+8. This is the field called connection identifier here, not header valueA. This use is a consumer-semantic lead for the connection identifier in routed player broadcasts, without assigning all endpoint-routing semantics from one branch.

### Raw callback messages: gardening and pledges

The raw callback map is registered by0x7D46B0. Constructors0x4E11F0 and0x82BE30 establish9 additional incoming message IDs beyond the175 typed RPC bindings. Pledge callbacks share invoke0x4E3CA0; GardenCentre callbacks share0x82FCB0, which calls0x82C850 with the captured ID and stream.

|ID|Payload consumed by this client reader|
|---|---|
|331|Two independently count-prefixed vectors: varu32 count≤16000 and that many varu64 garden IDs; then varu32 count≤16000 and that many garden-state vectors. A garden-state vector has varu32 count≤16000 and records [byte string,5×varu32,4 raw bytes,4 raw bytes].0x8292E0,0x829120,0x828D00. The consumer pairs the outer vectors by index.|
|333|varu64,4×varu32,u8; GardeningPlantItemMessageResponse|
|335|varu64,4×varu32,zigzag32; GardeningPickItemMessageResponse|
|337|varu32,varu64,varu32,u8; GardeningDestroyItemMessageResponse|
|339|varu32 count≤16000, then [varu64,varu32,varu32,u8] records; GardeningCreateHybridMessageResponse|
|341|varu64,varu32,varu32,u8 through0x829550|
|343|varu64,varu32,tagged parameter value,u8,u8; GardeningModifyParameterMessageResponse|
|358,360|The registered invoke routine consumes no payload bytes; branches invoke local pledge completion logic. No zero-length server-payload requirement is inferred merely from an ignoring reader.|

For343, parameter-value reader0x829610 consumes a raw tag byte:0 has no value bytes;1 has varu32;2 has4 raw bytes. Read table0x1025AE0 and write table0x1025AF8 each have3 entries. Alternative0's decompiled assignments from uninitialized stack locals are host storage artifacts: its reader consumes no value bytes. The last two bytes of343 follow the selected alternative, not a fixed-size variant union.

```mermaid
flowchart TD
  Payload[Delivered message body] --> RPC{Typed RPC registered?}
  RPC -- yes --> Tuple[Read tuple fields and nested values]
  Tuple --> Callback[Invoke bound local method]
  RPC -- no --> Raw{Raw reader callback registered?}
  Raw -- yes --> Reader[Invoke callback with ByteStreamReader]
  Raw -- no --> Special{Explicit message case?}
  Special -- no --> Unknown[Return unhandled]
  Special -- yes --> Push{ID284?}
  Push -- no --> Direct[Read the case-specific fields]
  Push -- yes --> Subtype[Read subtype byte]
  Subtype --> Handler[Subtype parser or PlayerLookManager extension]
```

The name for283 exists in the catalog, but no283 immediate was found in the inspected network-code interval0x7A0000..0x80E500 and it has no matching typed RPC registration in the recovered set. This is not proof it never appears; its payload is unknown here. The raw callback registry is another dispatch mechanism and is not interchangeable with RpcExecutor::HandlerStub.
''')
write((Path(__file__).resolve().parents[1]/'ACTOR_LIFECYCLE.md').read_text(encoding='utf-8'))
write('''
## Complete message ID catalog

Every row below comes from the actual436-case jump table. An enum name is not a direction/schema proof. **RPC S→C** means a concrete incoming typed reader was bound. **Direct S→C** means an explicit incoming dispatcher/bootstrap branch. **Writer source** is a candidate outgoing source with matching static ID metadata plus a constructed ByteStreamWriter; functions can contain several messages. A message may have different request/response formats by direction, so do not collapse them without inspecting both paths.
''')
rows=[]
for entry in ids:
    n=entry['id'];evidence=[]
    if n in rpcs:evidence.append('RPC S→C')
    if n in manual_in:evidence.append('Direct S→C')
    if n in raw_ids:evidence.append('Raw callback S→C')
    if n in sources:evidence.append('Writer source')
    if n in security:evidence=['security/control: name only']
    refs=sorted(sources.get(n,set()))[:5]
    rows.append([n,f'0x{n:04X}',entry['name'],namespace(n),'; '.join(evidence)or'catalog only',', '.join(fnlink(r)for r in refs)])
table(['ID','Hex','Native name','Namespace','Evidence','Writer/caller RVAs'],rows)
write('''## Incoming RPC payload catalog

These175 registrations use154 distinct HandlerStub classes, since some types are shared. `arg1`, `arg2`, etc. refer to the serialized parameter tuple, not to the bound local receiver or ActorContext. The native tuple type is not itself a byte encoding: use its concrete reader and the nested procedures. No field tags are added. The listed parser reads arguments before invoking the bound method. Failed reads return false and are logged by the dispatcher.

The procedure appendix preserves conditional reads, loops, optionals, variants, length caps and nested calls. It is decompiled evidence, **not compilable reference decoder code**. The catalogue gives exact types/addresses where recovered; unknown semantic member names and unexpanded dynamic/server-side layouts remain limitations.
''')
for b in sorted(bindings,key=lambda x:(x['id'],x['execute_rva'])):
    n=b['id'];rv=int(b['execute_rva'],16)
    write(f'<a id="packet-{n}"></a>\n### {n} /0x{n:04X} — {names[n]}\n')
    write('Direction: incoming RPC, server→client. Registration at '+str(b['constructor_rva'])+'; ID word '+b['id_global_rva']+'; stub vtable '+b['stub_rva']+'.')
    write('\nSerialized parameter tuple:\n\n```cpp\n'+b['tuple_cpp']+'\n```\n')
    if n in security:write('Security/control payload not expanded in this reference. No detector-rule, suppression or forged-response schema is supplied.\n')
    else:write('Concrete reader: '+fnlink(rv)+'. Follow its reads in execution order; member widths and optional branches are defined by that procedure and its callees.\n')
write('''## Payload and transport procedure appendix

The following is the recoverable static evidence behind the catalog. Function names retain the image-relative lookup identity. `a1:`, `a2:` in calls are decompiler argument annotations, not C++ named arguments. Pointer arithmetic describes host object storage. A virtual stream call at vtable+8 tests read mode; at+16 it transfers bytes. Follow the latter's explicit byte count. Container resize/allocation and destructor/cleanup code are host mechanics, not extra network fields.

This appendix includes direct concrete readers, nested helper candidates and outgoing writer contexts. A candidate helper's presence does not establish its semantic type or an independent packet. Some guessed prototypes or aggregate layouts remain imperfect; the journal describes the disassembly checks and the enum-switch decompiler failure. The broken decompilation of0x80C330 is intentionally omitted; its jump table supplies the catalog instead.
''')
for rv in selected:
    write(f'<a id="fn-{rv:08x}"></a>\n### RVA0x{rv:08X}\n')
    which=sorted(set(b['id']for b in bindings if int(b['execute_rva'],16)==rv and b['id']not in security))
    if which:write('Incoming RPC IDs: '+', '.join(map(str,which))+'.\n')
    write('```cpp\n'+code[rv].strip()+'\n```\n')
write('''## Remaining gaps

- No complete server-only/internal-message schemas can be inferred from the client's enum names. Those entries remain catalog-only.
- Some wire fields are recovered as scalar/byte/compound sequences but their human names and enum bit meanings are unknown. Member names were not invented from UI intuition.
- Direct dispatcher cases and raw-reader callbacks need more semantic expansion than the incoming typed RPC signatures alone provide. The concrete source procedures are evidence, not a promise of a finished decoder for every ID.
- Outgoing writer source links can contain multiple messages and local context. They are not automatically one flat request layout per ID. Verify the relevant writer construction and actual send path before assigning a schema.
- PlayerLook's concrete subtype10/11 readers are now expanded in the actor lifecycle section. Unknown future/dynamic subtype values and message283 still have no assigned schema. The contained local master initialization stream is bounded/preserved but not fully flattened into the focused actor grammar.
- There are no live packet captures/golden sessions here. Examples and algorithms are static findings, not proof of server acceptance or compatibility with another executable version.
- Launcher2.60.0 handoff and native access-token-to-ticket paths are recovered, but server-side JWT validation/revocation, ticket lifetime/binding, all identifier override writers and negotiated TLS parameters remain unknown. UDP envelope decoding does not decrypt HTTPS.
- No filtering policy, transparent proxy implementation, automatic traffic interception, account authentication bypass or live packet modification was implemented.

For a future update, preserve the old/current executable hashes, re-identify the ID switch and concrete codec functions, and diff the serializers and state machines. Merely retaining the same message name does not establish the same payload format.
''')
target=D/'SSO-NETWORK-PROTOCOL-647.md'
fenced=False
spaced=[]
for line in '\n'.join(out).splitlines():
    if line.startswith('```'):fenced=not fenced
    if not fenced and not line.startswith('```'):
        pieces=re.split(r'(`[^`]*`|\[[^\]]*\]\([^)]*\)|<[^>]*>)',line)
        for i in range(0,len(pieces),2):
            s=pieces[i]
            s=re.sub(r'\b(complete|These|these|the|all|with|of|in|and|or|at|by|to|from|uses|writes|reads|copies|requires|value|length|version|count|flags|bit|byte|bytes|word|words|maximum|minimum|client|least|alternative|alternatives|record|records|reader|sender|constructor|wrapper|helper|table|case|cases|ID|IDs|request|response)(?=(?:\d|0x))',r'\1 ',s,flags=re.IGNORECASE)
            s=re.sub(r'(?<=[a-z])(?=0x[0-9A-F])',' ',s)
            s=s.replace('RVA0x','RVA 0x')
            pieces[i]=s
        line=''.join(pieces)
    spaced.append(line)
target.write_text('\n'.join(spaced)+'\n',encoding='utf-8',newline='\n')
data=D/'data';data.mkdir(exist_ok=True)
for name in ['message-ids.json','rpc-bindings-enriched.json','variant-tables.json','raw-reader-callbacks.json','serializer-dependencies.json','rpc-method-metadata.json','ida-cross-check.json','resolved-anchors.json','library-identification.json','actor-lifecycle-evidence.json','player-stream-283-global-immediates.json','authentication-evidence.json','endpoint-evidence.json']:
    shutil.copyfile(R/name,data/name)
(data/'raw-reader-bindings.json').write_text(json.dumps(raw_bindings,indent=2)+'\n',encoding='utf-8')
(data/'procedure-index.json').write_text(json.dumps([{'rva':f'0x{rv:08X}','anchor':f'fn-{rv:08x}','pseudocode_sha256':hashlib.sha256(code[rv].strip().encode()).hexdigest()}for rv in selected],indent=2)+'\n',encoding='utf-8')
horse_master=horse+[(200,'16 raw bytes'),(216,'varu32'),(220,'varu32')]+[(o,'u8')for o in range(224,232)]
(data/'compound-member-layouts.json').write_text(json.dumps({'host_offsets_are_not_wire_offsets':True,'PlayerCreateSharedMessage':[{'host_offset':o,'wire':t}for o,t in player],'HorseBase':[{'host_offset':o,'wire':t}for o,t in horse],'HorseCreateMasterMessage':[{'host_offset':o,'wire':t}for o,t in horse_master]},indent=2)+'\n',encoding='utf-8')
(data/'actor-wire-schemas.json').write_text(json.dumps(ACTOR_SPEC,indent=2)+'\n',encoding='utf-8')
(data/'authentication-wire-schemas.json').write_text(json.dumps(AUTH_SPEC,indent=2)+'\n',encoding='utf-8')
report={'client':'647.349716','sha256':'62387b246a92a4874d20329caa6eaf06c7a29830263e94982a8bdad6b6110fe1','message_ids':len(ids),'rpc_registrations':len(bindings),'rpc_stub_classes':len(set(b['stub_rva']for b in bindings)),'procedure_appendix_functions':len(selected),'document_bytes':target.stat().st_size,'scope':'Static recovered reference; explicit schema and semantic gaps remain','document_sha256':hashlib.sha256(target.read_bytes()).hexdigest()}
report['raw_callback_registrations']=len(raw_bindings)
report['mermaid_diagrams']=target.read_text(encoding='utf-8').count('```mermaid')
(data/'coverage.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8')
print(json.dumps(report))
