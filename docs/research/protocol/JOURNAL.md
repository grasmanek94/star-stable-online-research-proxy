# SSO protocol research journal

## 2026-11-19 — scope and database identity

User requests an IDA-based protocol reference with packet types, IDs, encodings, structures, serialization, transport state diagrams and a continuing evidence journal. This work documents the available client, rather than implementing or testing a filtering proxy. No game input, memory writes, live packet injection, login attempt or server query is authorized/needed for this static phase.

Client647.349716, SHA256 `62387b246a92a4874d20329caa6eaf06c7a29830263e94982a8bdad6b6110fe1`, preferred image base0x140000000. Reattached the available official IDA MCP database of the copied client and verified its input hash and completed analysis. Durable executable copy is in Documents/Codex/cache/SSO-FPS/clients/<version>/<sha256>/. Runtime module bases, old PID values and IDA lease IDs are not durable addresses.

Local intermediate exports: ignored `out/protocol-647/`. The protocol document will separate verified wire bytes, host-side object layouts, inferred semantic names and unrecovered fields. No complete schema is claimed merely from finding a message name or a templated RTTI string.

### Initial code surface

-41768 IDA strings. Filtered1376 keyword candidates, then303 focused network/RPC identifiers. A keyword hit included a large unrelated CA certificate bundle; subsequent queries bound string lengths to avoid treating bundled library data as game protocol evidence.
- Winsock IAT: recv RVA0xEE5BF0, send0xEE5BD8, recvfrom0xEE5C50, sendto0xEE5C58, socket0xEE5C40, connect0xEE5C70. Import presence alone does not prove which game layer uses TCP or UDP. Some send/recv callers belong to bundled HTTP code.
- NetworkShared source-path strings identify ConnectionManager, UdpMessageLayer, UdpNetworkLayer, PacketHeader, GameServerEncryptedNetworkLayer, RPC/PXRpcExecutor and Base/Serialize/NetSerialize. NetworkClient strings identify ClientGameServerConnection and CPXNetwork login/server/dispatcher paths.
-438 strings in the message-name region0x101C000..0x1020540 include network enums, internal router messages and some surrounding serializer diagnostics. This is a candidate-name set, not438 verified wire packets.

### Finding callers through logging metadata

Many CPXNetwork function-name strings have data-only xrefs into logging/assertion context records. Following only the string's direct xrefs misses the function. Query xrefs to the containing data item and adjacent aligned record fields (up to32 bytes before the referencing field), then validate the resulting code function.

Recovered named anchors, all RVAs for647:

| Anchor | RVA |
|---|---|
| CPXNetwork::ProcessServerMessage |0x7D1A00|
| CPXNetwork::ProcessDispatcherMessage |0x7D08D0|
| CPXNetwork::TrySendPositionUpdate |0x7D9D70|
| CPXNetwork::LoginServerConnect |0x7C1800|
| CPXNetwork::ProcessConnect |0x7D0120|
| CPXNetwork::LoginServerLogin |0x7C1AF0|
| CPXNetwork::SendDispatcherMessage |0x7D62B0|
| ClientGameServerConnection connection-request serializer path |0x7F1530|
| ClientGameServerConnection connection-response receive path |0x7F2310|
| ConnectionManager packet-header decode/forward path |0x803EB0|
| Encrypted network layer receive/decode path |0x80DC00|
| Packet header inspection helper |0x80DE00|
| Message-ID-to-name switch |0x80C330|

The message-ID name switch is anchored by the exact `PX_NETWORK_MESSAGE_CONNECTION_REQUEST` string xref at0x80C35C. Numeric IDs must be recovered from this switch/registrations, not assigned from the order of strings.

### Observed bootstrap, still being resolved

The connection-request path creates a ByteStreamWriter, serializes a32-bit-looking value through helper0x1D0820 and a byte through the writer interface, constructs a message with ID1, and submits it through a virtual connection interface. The response path selects ID2 and deserializes a tagged3-alternative value before updating connection state and installing connection-specific material through another interface. Exact byte encoding and field meanings remain pending until serializer/caller analysis.

The encrypted layer receive path calls a transform at0xA47360 and then the packet-header decoder0x801400. Its fallback path accepts only header IDs1 or2. It would be premature to label every recv/send path a plaintext TCP protocol or to claim packet payloads can be decoded directly from socket reads.

## Confirmed transport, ID catalog and serialization surface

The gameplay stack is UDP: UdpNetworkLayer receive0x80B430 reaches recvfrom through0xA4BA20; send0x80B750 reaches sendto through0xA4BB70. Socket factory0xA4B4D0 calls socket(address_family,2,0), and login endpoint resolution0xA4B7B0 also supplies type2. The UDP network layer's datagram buffer/limit is1500 bytes. The message layer rejects unreliable message payloads over1024 bytes. TCP send/recv references initially inspected belonged to bundled HTTP/cURL paths. A TCP frame-reassembly diagram would misrepresent these game datagrams; document the actual receive/reliable/split state machine instead.

### Decompiler limitation and ID recovery

Hex-Rays incorrectly reduces message-name switch0x80C330 to the constant ROUTER_INTERNAL_MESSAGES_END, even after giving it the disassembly-confirmed unsigned16 input signature. Its assembly clearly switches436 cases. Recovered IDs0..435 from jump table0x80D0FC, whose entries are32-bit image-relative case targets; each case loads its string with LEA. Stored exact ID/name/case/name-RVA records in message-ids.json. This avoids inventing IDs from string order. IDs267..275 and377..435 include explicit internal namespaces/sentinels and must not all be called client packets.

### RPC discovery

Enumerated named primary HandlerStub vtables:154 distinct classes,270 unique execution/constructor functions. Exported all270 without decompilation errors. Constructors associate a static method-ID word with a stub; e.g0x1313E4C contains80 (achievement update response), while0x13140C0 contains235 (makeup response). Shared signatures can serve multiple IDs, so vtable count and packet count differ.

Recovered175 unique incoming RPC registrations covering all154 classes. Single-ID constructors, post-vtable ID loads and explicit multi-registration blocks were cross-checked. The DeactivateScheduledEvent stub is allocated in helper0x7AF010 but registered with ID from0x131406C in0x7BBA30. Payload C++ parameter tuples come from demangled RTTI; execute methods show actual field parsing before the bound callback. ActorContext/bound receiver parameters are local context, not wire fields.

Static method-metadata references produced353 candidate records/303 unique IDs and329 nonzero-ID referencing functions. Exported177 additional functions absent from the RPC batch, including outgoing writer paths. These references are useful evidence, but a metadata reference alone does not establish direction or a complete wire schema.

### Primitive encodings

-0x1D0820: unsigned32 base128 varint, up to5 bytes; zero still emits one zero byte.0x2D2B10: unsigned16 variant, up to3 bytes.0x2AF380: unsigned64 variant, up to10 bytes.
-0x200540: signed32 ZigZag then the same7-bit continuation scheme.0x1D0C80 and0x2D2D70 are wrappers around the unsigned varints, not fixed-width integer transfers.
-0x2B4D00: byte string with unsigned32 varint length, maximum8096 bytes. No text-encoding conversion or automatic NUL is established by this helper.
-0xA44740: exactly16 opaque bytes; helper0xA44050 copies them without swapping.
-0xA25C40: exactly12 bytes for a three-component float vector.0xA25B40/0xA25A20 quantize four clamped[-1,1] components to four raw little-endian uint16 values,8 bytes total; they are not16 raw quaternion bytes.
-0x80D7D0: CompressedBlob uses a raw little-endian32-bit stored-record length, then another raw32-bit uncompressed length and compressed bytes. The reader enforces the outer record fits, decompresses and checks exact output size. Underlying compressor/decompressor identity is being verified.
- Generic optionals serialize a byte presence flag before their value; variants serialize a byte alternative index. Validate each concrete type's tags/branches. Vector limits are type-specific; examples cap counts at16000.

### Type inference and dependency extraction

Initial caller pseudocode omitted forwarded arguments to callees with incomplete guessed prototypes. Re-decompiled the callees, explicitly typed three disassembly-verified signatures (message-name switch, key installer, compressed-record helper), and refreshed relevant callers. Changes are IDA database types only; no executable or live-process bytes were modified.

Recovered variant tables by their actual IDA symbol addresses, not the call-site address embedded in an autogenerated `funcs_<callsite>` name: connection response table0x1015EC0 has read alternatives0x7AAE50/0x7AAE00/0x7AAEB0; movement tables0x101C068 and0x101C078 each have2 alternatives.

Created an offline stream-argument dependency tracer for candidate serializer helpers. A first whole-function alias set incorrectly followed a reused variable into gameplay calls. Replaced it with position-aware assignments, writer/reader construction events and alias invalidation. Current closure has319 candidate functions/908 edges and no missing exported functions. This is a dependency/evidence graph, not automatic proof that every candidate is itself a wire field. Some memory/container helpers are infrastructure. Compound tuple-reference arrays store pointers in reverse physical order; follow actual serializer execution, not the order of pointer assignments in the wrapper.

Intermediate files now include message-ids.json, rpc-bindings-enriched.json, rpc-stub-vtables.json, rpc-method-metadata.json, serializer-dependencies.json, variant-tables.json and function-RVA-named decompiled/*.c. They contain static evidence only, not captured credentials or player traffic.

## Transport and envelope resolution

All addresses in this journal are image-relative RVAs for the hashed647 executable. Source labels in IDA identify NetworkShared and NetworkClient files, but no source checkout was available.

| Layer or operation | RVA | Evidence and conclusion |
|---|---|---|
| UDP socket factory |0xA4B4D0|`socket(af,2,0)`, with IPv4/IPv6 families; socket type2 establishes UDP|
| Endpoint resolution |0xA4B7B0|Address-resolution hints likewise use socket type2|
| UDP receive wrapper |0xA4BA20|Calls recvfrom; reached by0x80B430|
| UDP send wrapper |0xA4BB70|Calls sendto; reached by0x80B750|
| TCP send/receive paths inspected |0x978EC0,0x9790F0|Bundled HTTP/cURL, separate from gameplay|
| Encrypted-layer constructor |0x80DFF0|Initializes bootstrap context from static32-byte array0x1020478|
| Crypto constructor |0xA46670|Sets key/counter state; loop count at context+44 is8|
| Material installer |0xA485A0|Copies8 uint32 words to context+8..39; marks ready|
| Connection-material update |0x80E2A0|Installs material at layer+72; a different later value is rejected|
| Envelope sender |0xA47B80|8-byte prefix, zero-padded8-byte blocks, XTEA-style8-cycle arithmetic, FNV-1a32 checksum|
| Envelope inverse |0xA47360|Checks envelope/block sizing, tag, unpadded checksum and result length|
| Crypto context selection, send |0x80E170|IDs1/2 use bootstrap; other messages use connection context|
| Crypto context selection, receive |0x80DC00|Tries connection material when ready, then bootstrap; bootstrap fallback requires decoded ID1/2|
| Header codec |0x801400|Variable-width fields;48-byte host layout is not the wire size|
| Reliable receive entry |0x809050|Distinguishes ordinary, reliable and ACK processing|
| Reliable send/splitting |0x809340|1024-byte payload chunks, count then index, a new reliable sequence per fragment|
| Ordered delivery/reassembly |0x8097F0|Duplicate/old sequence rejection, ordered queue, count/index validation and concatenation|
| ACK receive |0x8091A0|Retires saved transmission by sequence|
| ACK send |0x80A020|Header-only ACK with flags5; copies original application ID rather than replacing it with enum3|
| Retransmission timer |0x809F50|Saved timestamp plus base timeout×attempt count, then increment; not the bootstrap retry timer|
| Connection retry worker |0x7F2680|2000ms due time; initial request plus up to8 retries, then failure on the next due exhausted check|

The envelope checksum is over unpadded plaintext and the four prefix bytes at offsets4..7. The checksum word itself is excluded. The optimized final multiplication637696617 is the uint32 product of the FNV multiplier with itself, consistent with processing the tag and final zero byte. The body equations index only the first4 stored key words. The fact that8 words are stored does not justify inventing a second encryption stage.

Header order was checked directly in0x801400: flags u8; message varu16; valueA varu32; connection ID varu32; opaque16; optional varu64 when bit0x08; sequence varu32 when bit1; fragment count varu16 then index varu16 when `(flags&3)==3`. Padding at host+1 and+28..31 is never emitted. ACKs use flags5 and keep their original ID, a particularly important distinction from the catalog's message3 name.

Bootstrap response alternative0 is0x7AA810: varu32 connection ID, ZigZag32 value,8 varu32 words and16 opaque bytes. Alternatives1/2 consume no extra bytes. Protocol value534 comes from the ProcessConnect caller and is not executable version647.

### Compression confirmation

CompressedBlob0x80D7D0 uses raw little-endian lengths, unlike most scalar fields. The first length excludes itself and includes a second raw uint32 uncompressed size.0x80E3B0 bounds the compressed record, allocates the declared result and requires an exact-size decode. Wrappers0xA4C590/0xA4C5E0 reach0xE6ADF0/0xE6C020. The latter's token nibbles, literal extensions,16-bit match offsets and match-length+4 operations establish an LZ4 block pattern. This is a static algorithm identification, not a live golden-vector result or a standard LZ4 frame header.

## Compound-record corrections and player stream investigation

Inspected ProcessDispatcherMessage0x7D08D0 beyond its typed RPC map. It checks the raw callback map second and then explicit ID cases. Message282 reads repeated `[varu32 player ID,PlayerStateData]` until another ID cannot be read; there is no count prefix. Outgoing280/281 write PlayerStateData and an additional millisecond-clock-derived varu32. These directions must not be assigned the same body layout.

PlayerStateData0x80BFE0 contains byte flags, optional transform, a2-alternative movement record, optional attachment, and additional scalar fields. Read/write dispatch tables are0x101C068/0x101C078. Movement readers0x80BDB0/0x80BCE0 and attachment0x80BB90 were expanded in the reference. Normalized4 is8 wire bytes, although its host storage is16 bytes.

### Correcting an off-by-one reference-array interpretation

The initial draft's horse table started at host+8, which shifted every following offset and made a string overlap scalar fields. Re-read the wrapper0x347560 and visitor0x349AF0: visitor+192 is reference-array index24, the original base pointer, and is the **first serialized varu32**, not unused context. Correct final offsets are+0 varu32,+8 string,+40/+44/+48 varu32,+52 Vec3,+64 Normalized4,+80 raw13,+96 map, then scalars and bytes. Helper0x344090 is a stream-pointer wrapper for **ZigZag32**, not a raw-byte enum. The final tables and compound-member-layouts.json reflect this correction.

The player wrapper0x7AA8F0/visitor0x7AF3D0 similarly needed its exact byte transfers checked: there are **nine** u8 fields at host+76..84, then varu32 at+88/+92. An earlier draft had eight bytes and a mistaken varu32 at+84. The corrected table is consistent with the actual reader and host alignment. These were draft-analysis corrections, not executable changes.

The larger horse record0x3474B0/0x349DC0 first visits the same base record and appends raw16,+216/+220 varu32 and8 raw bytes at+224..231. It occurs in push subtypes5/6; message285 uses the base record0x347560 instead.

### Message284 subtypes

0x7D08D0 reads a raw subtype byte and passes the remaining body to0x7D2C00. Expanded subtype paths:

| Subtype | Reader | Discovery/meaning |
|---|---|---|
|1|0x7D2C00|ItemEquipPushMessage diagnostic; player ID then item/owner/slot values|
|2|0x7D24E0|PetStateChangePushMessage; owner selector1 rider/2 horse, item/pet lookup and Pet/PetSlave creation/state update|
|3|0x7D2310|HorseNameChangePushMessage: player ID and string|
|4|0x7D3360|RemoteStartActorPushMessage: actor path string, player ID, argument|
|5/6|0x3474B0|Larger horse create record; two different consumer paths|
|7|0x7D2020,0x7AF240|AppearanceChangePushMessage; optional2×[varu32,ZigZag32,varu32]|
|8/9|0x7D2C00|Three varu32 values; current-horse identity checks before effect application|
|12|0x7D2C00,0x77EDE0|CharacterActivityModifiedPushMessage; player ID plus small record|
|Other|0x7F3E10|Reads varu32 extension/receiver key and invokes a virtual PlayerLookManager reader; not fully enumerated|

Message285 removes an existing actor before parsing replacement data; it uses ReceivedPacket+48, which is PacketHeader+8, the connection-ID field. A draft note initially suggested this was header valueA; correcting the containing-object offset removes that inference. The branch reads its flag/u32 prefix and reads both creation records only under a local context-pointer condition. That condition is not an additional on-wire optional byte.

Message283 has a catalog name, but no explicit reader/binding was found in this investigation. A bounded search for immediate283 in network code0x7A0000..0x80E500 found none. This is evidence of a gap, not proof that283 is impossible or obsolete.

## Login and feature-list encodings

Outgoing login6 is0x7C1AF0→0x7AF880. The order is optional[string,u32,u8], three strings, optional opaque16, two varu32 values and a vector of[string,u32,u32]. The first optional is initialized absent; the second u32 is set to1 in the caller. No actual runtime strings/tickets were read.

Incoming7 is0x7C10C0: varu16 ClientExitCode plus optional LoginResponseData0x7A7DA0. Incoming9 is0x7C1170: varu16 ClientExitCode plus CompressedBlob. The inner login data has two host uint16 feature masks, but0x7A98E0/0x7A9470 serialize them as **vectors of feature-name strings and enabled bytes**. Their readers require at least9/15 entries respectively and reject unknown names. They do not simply transfer the bitmasks as two raw uint16 values. The reference includes all9+15 literal names from0x7FF100/0x7FEC10 and their lookup functions0x7FF1A0/0x7FECF0.

One IDA string pitfall: bit10's `enable_nebula` is13 bytes at0xEED330. Reading32 bytes with a forced length exposed adjacent string/data as well. The length-aware comparison in0x7FECF0 establishes the13-byte name; the oversized read is not a longer protocol field.

## Raw callback registry:9 more incoming IDs

Enumerated std::function implementations receiving ByteStreamReader&. Nine classes were present. PledgeManager constructor0x4E11F0 registers360 and358 through0x7D46B0; shared invoke0x4E3CA0 consumes no stream bytes and calls local pledge completion handlers. Ignoring a body is not evidence that the sender is required to send an empty body.

GardenCentre constructor0x82BE30 registers331,333,335,337,339,341,343. Shared invoke0x82FCB0 forwards the captured message ID and stream to0x82C850. Expanded its readers0x82B390,0x82B7F0,0x82AF00 and helpers0x8292E0,0x829120,0x828D00,0x828F60,0x829550,0x829610. The reference lists exact field sequences, including331's two independent outer vectors and their inner garden-state vectors. Do not flatten them into a single count of interleaved pairs.

Gardening parameter-value variants use read table0x1025AE0 and write table0x1025AF8: tag0 empty, tag1 varu32, tag2 raw4. Reader0x8297A0's apparent uninitialized stack assignments touch host variant storage; no corresponding value bytes are read. The tables' actual addresses came from IDA's symbol lookup, following the earlier call-site-label lesson.

## Final dependency/export and validation pass

Extended the candidate tracer to follow a pointer-to-stream-pointer through tuple visitors, preserving pointer indirection levels as well as argument index. Added explicit direct-dispatch and gardening roots. Final closure: **365 candidate functions,1145 dependency edges,0 missing exports**. The generated document includes411 address-indexed procedures, including additional transport/writer/feature/callback evidence. The graph remains heuristic: e.g0x205610 is a PlayerLookManager lookup, not a serializer, despite a caller's stale guessed arguments. Such false positives must not be interpreted as wire fields. Every exported function included in the appendix was checked to begin at its filename's exact RVA; guessed interior-address exports were excluded.

With IDA still attached to the matching hash, re-read all436 jump-table case entries and exact NUL-terminated name bytes:0 mismatches. Re-read all175 static method-ID uint16 words and HandlerStub vtable slot1 targets:0 mismatches. This validates the extraction against this binary; it does not validate a server exchange. data/ida-cross-check.json retains the receipt.

The document has5 Mermaid diagrams: transport separation, connection lifecycle, envelope receive/fallback, reliable ordering/reassembly, and RPC/raw/direct dispatch. They represent UDP datagrams and the client's observed state, not a fabricated TCP frame-reassembly state machine. Diagram fences/links are checked by the local validator; no rendered Mermaid visual QA or live networking test is claimed.

The standard-library tools are retained under tools/ beside this journal. Raw exploratory input remains ignored out/protocol-647/. data/ contains the436 IDs,175 typed bindings,9 raw bindings, metadata references, variant tables, candidate dependency graph, corrected compound offsets, anchor map, procedure index and document coverage/digest. validate_reference.py checks their counts, explicit links, exact procedure-body digests, function identity, code fences, all RPC reader links and the corrected member-array invariants.

## Resume after a client update

1. Read this journal and SSO-NETWORK-PROTOCOL-647.md before treating a packet name as a complete schema. Preserve both the old and new EXEs in the local version/hash cache; never add them to Git/player ZIPs.
2. Call the official IDA MCP list/open database tools, rediscover the current instance ID, check input SHA256/version and wait for autoanalysis. Reusing an old lease ID, runtime module base or heap pointer is not a valid identity check.
3. Find the string `PX_NETWORK_MESSAGE_CONNECTION_REQUEST` and its code xref. Inspect assembly of the ID/name switch even when decompilation looks plausible. Recover each actual case/string association; enum ordering can change.
4. Find NetworkShared/NetworkClient logging-context strings and follow the data-record xrefs to socket, encryption, header, connection, message and dispatcher functions. Verify sendto/recvfrom versus TCP paths from concrete callers.
5. Enumerate primary HandlerStub RTTI/vtables, inspect Execute at vtable+8 and constructors/registrations. Recover static method-ID words and follow shared allocation helpers. Re-check read modes/virtual transfer widths and nested container/variant tables; a C++ type name alone is insufficient.
6. Enumerate raw ByteStreamReader& callbacks and direct dispatcher cases separately. Recover any new PlayerLookManager virtual subtype registrations. Dynamic registry coverage is a known remaining gap here.
7. Diff actual serializers, not just names/addresses. Check field order, varint signedness, variant tags, optional flags, length caps, raw block widths, compressed wrappers and read-versus-write direction. Keep host offsets separate from stream positions.
8. Export exact-entry pseudocode files and structured findings to a new ignored versioned evidence directory. The retained tools accept an explicit evidence path; do not quietly overwrite647's evidence with a new build. Update the client hash/version labels and static anchors in a new reference revision.
9. Regenerate and validate. A clean document consistency check does not establish live compatibility or that dropping player data is safe. Filtering feasibility and proxy implementation were explicitly deferred by the user.

### Remaining limitations

Complete436-name coverage is complete **catalog coverage**, not all server/backend schemas. Internal-only IDs may have no concrete client encoder/decoder. Some C++ compound parameter types are recovered with exact reader procedures but without all semantic member names or a flattened declarative schema. Outgoing metadata references are linked to writer contexts and can cover several messages per function. PlayerLookManager extension readers, message283, unknown enum meanings and some decompressed application bodies need further work. No server executable, captured golden session, traffic filtering policy or proxy was produced in this phase. The reference marks these gaps instead of inventing definitions.

No CMake/native source, runtime binary, installed game module, release asset or GitHub workflow was changed. Existing unrelated dirty privacy/protection research notes were preserved. This protocol research remains local; no public release/commit/push was performed for it.

### Delivery receipt

The final local validator passed:12 JSON evidence files,436 ID rows,175 typed RPC readers,9 raw callbacks,411 exact-entry procedure blocks and5 Mermaid blocks. Procedure hashes, document hash/size, RPC reader links, explicit anchors and the corrected compound-member invariants all match. Receipt: ignored out/protocol-647/document-validation.json. The validator initially mistook the ordinary `packet-header` section link for a numeric packet anchor; narrowed that check to `packet-<digits>`, then the full pass succeeded. This was a validator-pattern error, not missing protocol evidence.

Saved the analyzed database through Official IDA MCP to ignored out/client-647/SSOClient.exe.i64, preserving the applied analysis types for resumption. This saves an IDA database only; it does not write executable patches. The database file was present at298821083 bytes after saving. Future sessions must still check its input hash rather than rely on that file size.

## Follow-up: library identification and examples

The user asks whether TCP/UDP creation, parsing, structuring and I/O use known C/C++ libraries, and requests adding identifications/examples to the specification. Re-listed the active IDA databases and rechecked the647 input SHA256 before analysis. No game execution, packet capture or memory writes were needed.

Scanned the complete IDA string list with bounded string lengths for library/framework names and PXEngine networking source references. Exported330 matches to ignored out/protocol-647/library-fingerprint-strings.json. Further family exports separate libcurl, JSON and telemetry evidence. No live values were read. The maintained data/library-identification.json retains26 selected static strings plus import callers and7 component records, rather than copying unrelated telemetry endpoints into the reference.

### Positive identifications and limits

- **libcurl:** numerous library-specific diagnostic strings and code, plus3 DICT request templates at0x10633B8/0x1063428/0x1063458 that embed `libcurl 8.23.0`. No standalone version-only string was found. Report8.23.0 as a compiled build fingerprint, not proof of an unmodified upstream release/source revision. The DICT templates prove compiled capability strings, not active DICT traffic. Engine function0x9A140 creates HTTP metrics using curl_multi_perform/poll names; it is not itself the transfer routine.
- **Schannel/SSPI:**0x965FD0 obtains InitSecurityInterfaceW from Secur32, and handshake0x9992A0 accesses the function table and emits Schannel errors. This identifies the examined HTTPS backend. It does not identify gameplay UDP as TLS/DTLS or prove every other TLS component absent.
- **Sentry Native/WinHTTP:**0x909AA0 initializes a background transport;0x90A390 calls WinHttpOpen;0x909C30 builds/sends prepared HTTP requests and receives/inspects responses. The matching upstream source was found at the0.7.20 tag after the same master-path URL returned404. That tagged source is used for structural comparison only, not an embedded-SDK-version claim.
- **MessagePack in Crashpad scope/breadcrumb storage:** diagnostic xrefs lead to0x908120/0x907FD0, both calling0x900590. Matching upstream Crashpad code calls sentry_value_to_msgpack. This does not prove that all HTTP upload bodies are MessagePack, or identify a standalone msgpack-c/MPack dependency in gameplay.
- **RapidJSON:**4 schema-related RTTI strings at0x1363DC0,0x1363EE0,0x1363FD8,0x1364020 confirm the C++ library's presence. CPXJson logging metadata resolves CreateValue/Insert to0xA27A50/0xA290F0 and source PXJSon.cpp at0x109F000. Exact version and every JSON call-site/HTTP schema are unresolved. Presence alone cannot replace positional gameplay readers with a JSON parser.
- **LZ4:** concrete token/literal/match decoder0xE6C020 matches the upstream block specification. The SSO length wrapper remains custom. The algorithm/format is identified; source provenance and exact LZ4 library release remain unknown.
- **Gameplay protocol:** positive source references and RTTI place ByteStreamReader/Writer, NetSerialize, RpcExecutor, ConnectionManager, UdpMessageLayer, UdpNetworkLayer and GameServerEncryptedNetworkLayer in PXEngine's own Base/NetworkShared code. Concrete byte transfers, ID binding, ordering/splitting and Winsock wrappers support an engine-specific format/architecture. This cannot prove that every stripped implementation line was written in-house.

### Negative probes and false positives

Named-symbol searches for recognized ENet/RakNet/SLikeNet/Asio/Protobuf/FlatBuffers/cereal/bitsery/gRPC/GameNetworkingSockets identifiers produced no evidence assigning those frameworks to gameplay. The broader probe returned101 Boost-related symbols, all associated with exceptions/regex rather than an Asio/serialization implementation. Retained this distinction; do not report the ordinary horse-wellbeing “boost” message names as Boost library evidence. RPCRT4 imports are only UuidCreate, UuidToStringA and RpcStringFreeA, which do not identify Microsoft RPC as the gameplay framework. Zlib strings examined include LodePNG image diagnostics; CompressedBlob's actual decoder remains the stronger evidence for LZ4.

### Specification update and examples

Added canonical LIBRARY_IDENTIFICATION.md and made the builder embed it under the transport discussion, linked in the main contents. It has a layer/component/confidence table, exact static anchors, primary upstream references, a generic libcurl C example, Schannel/Sentry flow descriptions, a RapidJSON C++ example, and synthetic recovered-format examples:

- Message286 body for player ID150:96 01; its separately encoded header ID286:9E 02. Neither is a full sendable datagram.
- Protobuf field1/integer150 comparison:08 96 01, demonstrating the extra field tag that SSO's positional reader does not consume.
- CompressedBlob containing a literal-only LZ4 block for Hello:14 bytes total, raw record length10, raw output length5, block50 48 65 6C 6C 6F. The compatible C API receives only that6-byte block, not the SSO length words.

Generic API examples are labeled as illustrative, not recovered native source or actual endpoints. Synthetic bytes are distinguished from captured traffic/server acceptance. Primary comparisons use official curl, LZ4, RapidJSON, Protobuf and getsentry sources, linked beside their claims. No runtime libraries/dependencies or native project behavior were changed. Regeneration keeps436 IDs,175 typed bindings,9 raw callbacks,411 procedure blocks and5 diagrams; the evidence set now has13 JSON files. The local consistency validator passes with the new library records/section and document digest checks.

## Actor-layout follow-up: spawn, updates, identity and teardown

User asks for deeper unresolved layouts, particularly player/horse/pet spawn/update/remove, to make the reference useful for a planned proxy. Re-listed IDA databases and verified the same647 SHA256 before working. This is still offline IDA analysis: no game inputs, live packet collection, memory writes or socket/server exchanges. Added a focused static grammar/offline decoder, not a transparent relay or actual filtering implementation.

### Arrival285: the supposedly discarded horse is consumed

Followed the direct dispatcher0x7D08D0 into0x7CE750, the remote PlayerCreateSlave path. The dispatcher parses PlayerCreateShared at a stack address and the horse at an adjacent stack address248 bytes later.0x7CE750 calls converter0x7F3810 with `a2+62` where a2 is uint32*, i.e. the player-start pointer+248. Consequently the horse data is used for HorseSlave creation even though it looked like a separate unused temporary in pseudocode. Retain the two adjacent variable-length wire records without inventing a248-byte on-wire gap or passing a phantom extra argument.

The consumer removes an existing player of the same ID, creates PlayerSlave/HorseSlave, attaches them, applies both equipment maps, registers the player and PlayerLook, and can create PetSlave from the horse's slot10 item. Pet eligibility also checks the item pet-property bit and availability of the pet-position template. This is why one arrival can create all three visible actors without a separate pet-spawn packet.

### Correcting the earlier HorseCreateMasterMessage label

The earlier draft/reference named0x347560/0x349AF0's short record HorseCreateMasterMessage. Concrete typed RPCs0x351580(ID190) and0x7BF940(ID192) demonstrate that the RTTI-named **HorseCreateMasterMessage is the larger232-byte host record**, read by0x3474B0/0x349DC0. The shorter0x347560 prefix has200-byte host storage and ends at member+193. Adopted the neutral analysis alias **HorseBase** for that prefix, and **HorseMaster** for the full record, without inventing an unverified native shared-type name.

The full record adds raw16 at host+200, varu32 at+216/+220 and8 bytes at+224..231. Those bytes are included in284 subtypes5/6 and the typed horse/archive/swap responses, but not in285's appended horse. All current compound tables, JSON names and the new decoder were corrected. Historical journal entries retain the discovery chronology; this entry supersedes their ambiguous base/master label. Minimum wire sizes are55 bytes for HorseBase and81 for HorseMaster, not the200/232-byte host sizes.

Raw13 at HorseBase+80..92 also gained a concrete role:0x7F3810/0x7F3630 copy it to horse creation-state+132;0x488ED0 supplies it with the equipment map to0x4889A0. That loader uses each slot byte for slots below13. These are per-slot equipment-state bytes, not a guessed appearance-preset identifier. HorseBase+96 remains a separate map with varu16 count and[u8 slot,varu32 item] entries.

### Identity roles and local creation9

PlayerShared+0 is the player/character network ID:0x7CE750 uses it as the map key and writes it to actor+1720. PlayerShared+4 is the user ID:0x7CBD40 checks it against the runtime initializer and has an explicit user-ID mismatch diagnostic. HorseBase+0 is horse ID; HorseBase+40 is owning player ID. The horse converters put that owner ID at creation-state+72, which0x7D9AD0 uses to find the remote rider. These are different from registry safe references or item definition IDs.

ID9 binding in0x7BBA30 stores callback0x7CB340 behind the ClientExitCode/CompressedBlob reader0x7C1170. On success the decompressed callback reads PlayerShared; string at host+248; ZigZag32+280/+284; varu32+288/+292/+296/+300; full HorseMaster at+304; byte+536; then a contained byte stream.0x7AA7A0 delegates that last wrapper to0xA4BF80, which uses **varu32 length+raw bytes**, not another compressed wrapper or raw uint32 length.0x7CBD40 parses that remaining initialization stream. Its full semantic flattening is outside this focused actor grammar; the helper preserves its exact length/content.

0x7CBD40 copies PlayerShared+0 to CPXNetwork+1928 and then local actor+1720. CPXNetwork+1100, used by selection/inspection/remote-name paths, must not be called the local player-ID source. The focused spec explicitly corrects that potential confusion. A future proxy can learn local player/user/horse IDs from the successful9 prefix without host memory access, while preserving its opaque remaining state.

### Closing PlayerLook subtypes10 and11

Default handling in0x7D2C00 gets PlayerLookManager then calls0x7F3E10 on its embedded NetPlayerLookManager at+552. That routine reads a varu32 key, finds a registered object and invokes its vtable+8. The concrete PlayerLook primary vtable at0x100CF30 has reader0x80B9F0 in that slot.

Traced registration back through0x78A000: PlayerLook is embedded at rider+2016, initialized from the8 raw shared look bytes through0x80B920. The registration uses rider+1720, so its lookup key is **player ID**. Remote wrapper0x209820 was initially decompiled without its forwarded arguments; applied an assembly-consistent3-argument IDA type and refreshed0x78A000, confirming0x7F3EC0(manager,object,player_id). Local registration is0x209800→0x7F4020. Destruction0x7F7770 unregisters through0x7F4240. These are database analysis types only, not executable changes.

Concrete layouts:

-284/10: varu32 player ID,1 raw makeup byte.
-284/11: varu32 player ID,6 raw bytes, applied to look host+33,+35,+34,+37,+38,+39 in wire order.

Hex-Rays omitted the length argument on subtype11's first virtual transfer. Assembly establishes R8D=subtype-10, and the path is entered when it equals1; the first transfer retains R8D=1. Subsequent5 transfers explicitly write1. Therefore the first transfer is1 byte, not the apparent int-sized4 bytes. Retained the assembly slice in data/actor-lifecycle-evidence.json and ignored player-look-reader.asm.txt. All known284 subtype values1..12 now have concrete layouts; unrecognized values still remain opaque.

### Position282: unknown-player early termination

Followed parsing0x80BFE0 into state consumer0x790DD0 and the horse/pet consumers. The message is repeated[varu32 player ID,PlayerState] until EOF, with no count/record length. A minimum movement0 state is54 bytes; movement1 is65. Optional transforms and pet data extend these lengths, so do not search for IDs by constant record strides.

The crucial control-flow finding: after parsing one complete record,0x7D08D0 looks up the player. The loop continues only if the actor resolves. Otherwise it **breaks the entire batch and returns success**, leaving later records unapplied. A filtering proxy that suppresses285 but forwards that absent player's282 record can therefore affect retained players later in the same batch. The spec now distinguishes native actor lookup behavior from syntax-level record decoding. Retained the full dispatcher assembly export and the concrete procedure in the main appendix.

The rider state includes the current horse ID. The consumer checks it before applying the nested horse movement variant through its virtual methods. CPXHorse's primary vtable at0xF4AF50 maps the relevant methods to0x1EFC80/0x1D5F20. In movement1 the final varu32 is used for monotonic queuing/interpolation comparisons; anonymous fields keep neutral names where exact semantics remain unproved.

PetMotion is the optional record at PlayerState host+120/presence+160.0x790DD0 resolves rider+1656 and only calls0x3BADE0 if both an existing pet and present state exist. An absent optional means no update; it is not deletion. A present motion record does not contain model/item identity and does not spawn a pet. The pet motion's raw transform, optional scalar and2 state bytes remain precisely delimited in the grammar.

### Pet state: saddlebag/ground, not deletion

0x7D24E0 parses subtype2 as player ID,item ID,owner byte,slot varu32,state byte. It resolves the correct rider/horse equipment owner and requires an equipped item whose ID matches the supplied item ID.0x2699C0 updates the pet state and reaches0x3BC970: zero emits PetInSaddleBag, nonzero emits PetOnGround.0x3BD260 updates the pet's corresponding bit, and0x3BCC50 applies its item/model definition. If needed and eligible, a missing pet can be created through0x3B7770;0x799E40 stores its reference on the rider.

Outgoing203 is different:0x2EE9F0 writes item ID,u8 owner,slot varu32,horse ID varu32,state byte; it does not include the incoming broadcast's player ID. Method word0x1313DB8 verifies ID203. The focused table keeps directions distinct.

Whole-group removal286→0x7CF960 obtains/destroys the attached pet, handles rider/horse ancestry, destroys the horse and erases the player entry. No independent pet-delete packet was identified. Equipment subtype1 can run empty-item/unequip logic through0x7D2930→0x485D90, but the full set of pet teardown/visibility effects in item/script callbacks is not established. The spec does not equate state0, missing PetMotion or a horse swap with guaranteed pet deletion.

### Message283 global probe and limits

Expanded the previous bounded network-code probe to bytes in0x1000..0xEE0000, checking decoded instructions for immediate283 rather than interpreting arbitrary matching bytes as operands. Ten unique instruction contexts remained. Six are RewardManager class-ID/lookup contexts (including class-registration0x43D230 and class-ID getter0x43D0B0); the remaining high-address bundled-code/table contexts were not linked to the game dispatch path. There is still no concrete283 reader, static method-ID word or typed callback registration. Stored candidates/classifications in player-stream-283-global-immediates.json. This is not a proof against computed/dynamic dispatch;283 remains unsupported/pass-through.

An early exploratory lookup used a few interior/guessed RVAs (e.g7F3A30,7F3C20,7812B0); exact-start checks rejected them and no containing function was substituted into their filenames. Subsequent lookups used actual enumerated function starts. Broad primary-vtable probes also encountered SafeActorPtrAs and callback classes whose names contain CPXHorse; those are not the CPXHorse actor vtable and were excluded from method-slot interpretation.

### Deliverables, synthetic verification and resumption

Canonical ACTOR_LIFECYCLE.md is embedded by the main builder and linked in its contents. It adds2 Mermaid diagrams (remote group/pet lifecycle and282 native batch processing), fixed body tables, identity rules, shorter/full horse distinction, local master prefix and transport/filtering requirements. It explicitly notes that suppressing actor creation is broader than the existing DLL's visibility behavior and does not establish preserved collision/interaction.

tools/actor_schemas.py owns the declarative focused grammar and emits data/actor-wire-schemas.json. tools/decode_actor_payload.py reads only complete, header-free/reassembled/decrypted bodies, or the already-decompressed master body. It has no sockets/process access/filter operation. It retains strings/fixed binary fields as hex, maps as entry lists and record spans as zero-based/end-exclusive offsets for byte-preserving analysis. Unsupported/truncated/trailing data raises an error; it does not silently discard bytes. Its conservative overflow/cap checks are not claimed to emulate malformed native input exactly.

tools/verify_actor_payloads.py passed23 constructed samples, all12 push subtypes, both movement alternatives and optional branches,2 position spans, shorter/full horse distinctions, master tail bounds, archive/swap records and1241 rejected truncated prefixes, plus malformed/unsupported/trailing examples. Minimum PlayerShared/HorseBase/HorseMaster sizes are checked as51/55/81. No captured golden packets, native differential execution or server-acceptance test was performed.

The main reference now retains447 exact-entry procedure blocks,436 IDs,175 typed registrations,9 raw callbacks,7 diagrams and16 JSON evidence files. The41 focused procedure roots were checked against exact IDA starts; existing roots overlap with5 of them. data/actor-lifecycle-evidence.json records those roots and substantive findings. The earlier365-function dependency graph is still a heuristic discovery artifact, not a promise that every newly explored consumer's entire application-state graph has been flattened. Do not rerun discovery as a mandatory document-build step; it can discover new helpers needing more exports.

Remaining focused gaps are283, full semantic expansion of the contained local initialization stream, anonymous scalar/flag meanings and some pet equipment-script teardown branches. The byte grammar for the supported actor bodies is now explicit and independently usable by an offline decoder, while live relay sequencing/ACK/encryption/filtering behavior is still unimplemented and unverified. Runtime/native builds, release assets and unrelated dirty research notes remain untouched.

Saved the updated IDA database at out/client-647/SSOClient.exe.i64 after the wrapper type correction. Re-ran the document and actor grammar checks successfully. The retained assembly slice includes the subtype11 branch, buffer setup, first virtual byte-transfer call and the next explicit one-byte transfer, making the omitted argument independently reviewable. The actor grammar/evidence are local research additions; no commit, push or release was performed.

## 2026-11-19 — launcher handoff, authentication and decryption follow-up

### Request, boundaries and inputs

The user asked to trace the launcher's login/session command-line parameter into the game and extend the protocol's authentication/encryption/decryption description for a future inspector of their own computer's traffic. Continued the existing static protocol work. Did not inspect a live command line, account token, saved-session file, launcher log contents, registry MachineGuid value or authenticated capture. No game input, memory modifications, packet transmission, certificate/trust changes or proxy implementation occurred. Runtime/build/release files and unrelated dirty research notes were left intact; this research was not committed or published.

Rediscovered the IDA database, then rechecked retrieve_input_file_sha256 against647.349716 SHA25662387b246a92a4874d20329caa6eaf06c7a29830263e94982a8bdad6b6110fe1 before using addresses. The session's instance ID is ephemeral and is not a resumption credential. Input/database remain ignored out/client-647/SSOClient.exe and .i64. Preferred base0x140000000; all below are RVAs.

A read-only Win32_Process/CIM discovery attempt was denied by the environment. No escalation was needed: the existing archived-client manifest supplied the installation path, and the static installed launcher archive was readable. A broad file search also encountered an inaccessible historical crash-IDB directory; that unrelated directory was not needed. These were discovery problems, not failure of IDA or loss of the current reference binary.

Launcher archive: installed resources/app.asar,243677227 bytes, SHA256390abe5340bfc5dc665bd8f5894b3e77af5f3d92cdea105f712d87bfd40f6b20, package StarStableOnline2.60.0, main dist/index.js. ASAR JSON header size4634696,17636 indexed file entries. Initial ignored inspect_launcher_archive.py produced exploratory code-NNN/extra-NN files under out/protocol-647/launcher-static. Retained tools/inspect_launcher_static.py replaces those unstable discovery numbers with12 explicit source paths and source-00..11 copies under ignored launcher-reviewed. It bounds source reads, rejects unpacked/link records and never executes JS. The delivered authentication evidence retains file hashes/line landmarks, not the full archive or user data.

### Finding the actual command-line contract

Client entry0x1D770 calls GetCommandLineW then0x617A0, which uses CommandLineToArgvW and UTF8 conversion.0x603F0 constructs the engine argument container. Presence/string/integer accessors are0x60730/0x60EC0/0x60E50. Literal AccessToken, NetworkUserName, NetworkUserId, NetworkTicket and LoginQueueToken strings led into the entry copies and StudioInitialize constructor0x63D700.

Static launcher executable.js was more decisive than guessing CLI names: dist/windows/game/helpers/executable.js lines26–60 formats `-Name="value"` with **one dash**, after removing only null/undefined values. The initial progress message used double-dash shorthand; the next update and delivered spec correct it. Windows arguments include AccessToken, NetworkUserId, LoginQueueToken, ServiceBaseUrl, NetworkLauncherHash, NetworkLauncherServer and ProjectUserDataPath, plus language/metrics/features. Mac uses LauncherHash/LauncherServer/DataPath instead for the last three. The native Windows parser was inspected; no claim of macOS binary validation is made.

GameWindow PLAY_NOW, dist/windows/game/index.js lines524–545, ensures a valid access token before building arguments. Session.accessToken goes to AccessToken; accountId to NetworkUserId; loginQueue.token() to LoginQueueToken; new URL(gatewayEndpoint).origin to ServiceBaseUrl. Session.sessionId, decoded from the access-token payload's session_id, goes to NetworkLauncherHash. gameStart.js lines47–60 supplies the arguments to child_process.spawn with shell:true,detached:true,cwd installation and windowsHide:false; its debug logger is also passed those arguments. Actual command lines/logs were deliberately not read because source already proves the format.

The default formatter does not emit NetworkUserName, NetworkTicket, NetworkServer or NetworkServerPort, although the game entry accepts them. This distinguishes the inspected modern launcher from the legacy/manual branch. Searching native string surfaces did not establish a NetworkLauncherHash consumer. **Do not turn an emitted argument into a proved native field merely by matching its name to a plausible purpose.** In particular it is not the demonstrated machine-identifier field below.

### Launcher sign-in, refresh and queue

AccountApiClient createSession posts to gatewayEndpoint/session/create with one of credentials{email,password}, token{id_token,platform:desktop,provider:google}, or client_id:SSO plus verification{verification_id,code}; device_info comes from an optional injected callback. collectDeviceInfo catches errors and returns undefined, causing JSON.stringify to omit the field. The complete callback's upstream device-info schema was not expanded. Error handling consumes service_error_code and optional data.verification_id. AccountService consumes access_token/refresh_token from successful responses and calls jwtDecode for session_id. This call decodes JWT payloads; it does not verify signatures or disclose server signing keys.

Refresh posts refresh_token to gatewayEndpoint/session/refresh, bypassing auto-refresh recursion and offline buffering, then replaces both tokens/session ID. SessionService tests exp against current epoch seconds and refreshes at≤300 seconds; decode errors also request refresh. Concurrent callers share one promise; remembered sessions are rewritten after successful refresh and failures log out. Initialize posts deviceId,launcherVersion,launcherPlatform:desktop,clientOsRelease,browserFamily:Electron to apiEndpoint/launcher/auth/initialize.

Fetch.request adds User-Agent,Device-ID,X-Platform:DESKTOP_LAUNCHER,Content-Type:application/json and, unless skipAuthRefresh, Authorization:Bearer token; it JSON.stringify's supplied bodies. Create/refresh set skipAuthRefresh:true. Constants module confirms LOGIN_QUEUE_ENDPOINT=launcher/login-queue and LAUNCHER_PLATFORM=desktop. Creation is POST /launcher/login-queue/v2/desktop/token, polling GET /launcher/login-queue/token, cancellation DELETE same path. LoginQueue retains queueToken, consumes queuePosition/passedTheQueue/loginStateTimeout and later gives the token to the formatter. Server token lifetime/binding/policy remain unknown.

The static SessionService also explains remembered login at rest: aes-256-ctr; random16-byte IV saddle and16-byte salt sugar; PBKDF2-HMAC-SHA256 with device ID (or code's fixed fallback),100000 iterations,32-byte key. Inner UTF8 JSON stores refresh token under banana; outer Base64-encoded JSON carries hex saddle/sugar/horseshoe(ciphertext). This file format is separate from TLS and game UDP. No saved file was opened or decrypted, and no storage-decryption utility was implemented. Static encrypt/decrypt/KDF definitions and line numbers are recorded for resumption.

### Bearer token → HTTPS data → HTTPS ticket

0x380120 copies StudioInitialize+208 ServiceBaseUrl into CPXPlayerSetup+160, and initializer+352 AccessToken into setup+192. With a nonempty token/base it calls0x3803E0, RequestGameServerData. Empty token takes a setup-complete branch rather than an HTTP call; this does not establish server authentication bypass. Empty base with nonempty token is an error path.

Logging-string metadata led to this code: source path at0xF7CA00; RequestGameServerData string0xF7CB50 and endpoint0xF7CB90; data result handler name0xF7CC10; user_id/mismatch/game_server_address/region_id at0xF7CCF8/0xF7CD00/0xF7CD28/0xF7CD40. Followed references through logging data records to containing functions rather than assuming every string has a direct code xref.0x3803E0 is the **request function**, whose embedded std::function binds callback0x37F2A0; an early exploratory note incorrectly described it as just the callback wrapper, corrected before final delivery.

Both builders append the appropriate path to a slash-normalized service origin: api-gateway/1.0/game-server/data, then api-gateway/1.0/game-server/ticket. Both set SSOCLIENT/{} user agent and Authorization:Bearer{} from setup+192.0x99630 is an embedded203132-byte CA accessor at0xEFE720, not an HTTP-method accessor.0x99AB0 applies CURLOPT_CAINFO_BLOB40309, not a method. The blob starts with Mozilla root-bundle text and its SHA256 is in authentication-evidence.json.

Checked method independently of endpoint names: request constructor0x99710 creates the curl handle, sets URL10002, POSTFIELDS10015 to empty vector data(null), then POSTFIELDSIZE60 to0. Official libcurl POSTFIELDS documentation confirms that setting it enables POST, including null-pointer use; an explicit size0 makes this a zero-body POST. Submit0x9A790 and callback setup0x99530 were inspected for later method changes; none occurs there. Header and user-agent setters are0x99B20/0x99B50. The docs therefore say zero-body POST rather than guessing GET. HTTP version/automatic headers were not captured, and this source-based conclusion is labeled accordingly.

Data handler0x37F2A0 validates the embedded0xF7C350 JSON schema. Required: exchange_rate object with string format_string and price_per_100_sc, string game_server_address, region_id0..255, nonnegative integer user_id. report_a_player_server is optional. Existing nonzero initializer+312 user ID must match returned user_id. Address→+240,userID→+312,region→+385,reportURL→+520,exchange strings→+552/+584. It then calls0x380770 RequestGameServerTicket, whose names/path are at0xF7CDD0/0xF7CDF8.

Ticket result handler0x37FB10 (name0xF7CE48) validates schema0xF7C5B0 requiring string ticket, then stores that string at initializer+320 and signals176003. Failure paths signal176002. No decrypt/signature/JWT decode is performed on this ticket in the inspected path. It is opaque server-issued data, not the launcher access token or a proved symmetric transport key.

### Login6 fields: rejected hypotheses and confirmed sources

Followed0x7C1AF0's tuple-pointer setup into0x7AF880's actual wire order. The local stack declaration/pointer array is reverse-looking; direct serializer reads establish the sequence. It is: optional[string,varu32,u8] initialized absent; username; ticket; machine identifier; optional opaque16 queue token; varu32 user ID; varu32 constant1; vector[string,varu32,varu32]. String encoding is the existing varu32-length byte string. The three strings are not access token, refresh token and session ID.

User name originates initializer+280; ticket+320; userID+312. The third string uses initializer+432 if nonempty, otherwise0xA4C0A0 reads HKLM SOFTWARE\\Microsoft\\Cryptography/MachineGuid. Constructor initially empties+432, and no assignment from NetworkLauncherHash was found in the reviewed Windows entry. Registry API calls were read as code, not executed. Other writers/override contexts remain a named gap.

0x63DBF0 returns initializer+944;0x63DC80 is the LoginQueueToken setter.0xA440C0 validates36-character nonzero hex/hyphen UUID text and0xA441D0 reads16 hex bytes in textual order. It does not apply Windows GUID's little-endian field swaps.0xA43D70 tests nonzero opaque128 presence. Synthetic00112233-4455-6677-8899-aabbccddeeff maps to00112233445566778899aabbccddeeff. Invalid input leaves zero, so it is omitted from login6.

0x63DC00 returns initializer+960. This is **not another UUID**:0x63DC10 moves a3-pointer vector there; entry passes the pack archive's+248 field (CPXPackFileArchive constructor0x612FD0 initializes+248/+256/+264).0x7C1AF0 copies40-byte host records, and0x7A8330 serializes a capped count of[string,varu32,varu32]. It is also **not MetricsGroup**, which entry parses separately into initializer+496. Two metadata scalar meanings remain unresolved; do not label them CRC/version solely by intuition.

Login endpoint0x7C1800 uses initializer+240 and port+272 with fallback18971; entry option is NetworkServerPort.0x7D0120 passes protocol534 to the transport. ID1/2 transport bootstrap must finish before connection-context login6. ID7/9 response structures remain in the main reference; this follow-up does not invent missing backend-policy semantics.

### UDP envelope review and offline decoder

Rechecked crypto constructor0xA46670:8 cycles at+44. Key setter0xA485A0 copies8u32 words at+8..39; the block loops in0xA47B80 and0xA47360 index only the first4. Both8-byte halves are updated each cycle (16 half-updates total), so a stock default32-cycle XTEA call is wrong. Body blocks are independent, little endian, modulo2^32. The prefix salt is not a CBC/CTR IV. FNV-1a-32 covers unpadded plaintext then prefix bytes4..7; sender sets reserved zero and zero-pads, tag=salt&plaintext_first_byte&key_low_byte. The sender derives salt from the input buffer address plus a context counter; the reference takes an explicit salt for reproducible fixtures.

Verified bootstrap bytes directly at0x1020478, all32 bytes retained.0x80DFF0 initializes bootstrap context;0x80E170 uses it for IDs1/2 only.0x80DC00 first tries installed material and permits bootstrap fallback only for decoded IDs1/2. Successful response2's8varu32 words reach0x80E2A0 and0xA485A0; no JWT/ticket-derived KDF was observed. A capture from connection startup can therefore in principle derive its UDP context via response2; this remains an untested static conclusion, not a collected login/session.

Receiver review corrected a likely overstrict decoder assumption: native0xA47360 checks divisible-by8 length, capacity, first-block tag, nonempty post-padding length and checksum. It does not explicitly check padding≤7,reserved=0 or all-zero padding bytes. The reference defaults to canonical sender checks but exposes canonical=False to follow those native predicates more closely. It does not promise exact malformed-input behavior.

Added standard-library tools/datagram_codec.py: envelope encrypt/decrypt, conservative PacketHeader parsing with payload span and response2 body parsing/material extraction. It has no network/process/storage discovery, authentication, TLS, automatic context selection or reassembly. The encryptor is for synthetic fixtures; no server send operation exists. The fixed synthetic request1 fixture includes protocol534 and produces0e3569f4005a0000c8a119ebbe2679592a5b27fd6e83710db921cc258757cb44 with bootstrap material/salt5A. This is a pinned generated regression example, **not captured native golden evidence**.

verify_datagram_codec.py passes108 roundtrips across3 contexts/36 lengths, all16 low-nibble header flag combinations and3 connection response alternatives, wrong-key/checksum/truncated-input checks, upper-key-word nonuse, width bounds and reserved-byte canonical/native distinction. Existing actor tests still pass23 synthetic samples,12 subtypes,2 position spans and1241 rejected truncated prefixes. These are algorithm/grammar consistency checks, not native differential or server-acceptance tests.

### TLS distinction, delivered reference and next steps

Native HTTPS remains libcurl/Schannel with the embedded CA bundle; launcher HTTPS is Node/node-fetch. UDP context/ticket/JWT do not decrypt TLS records. Static launcher cli.js exposes httpProxy,proxy(apiEndpoint),gateway(gatewayEndpoint) and gameArgument. Fetch's httpProxy branch creates HttpsProxyAgent and sets NODE_TLS_REJECT_UNAUTHORIZED=0. This is observed pre-existing behavior, not a change enabled by this work, and is not presented as a recommended verification bypass. It does not automatically configure the game's separate Schannel or UDP paths. Certificate pinning, trust-store/bundle interaction, key logging and negotiated TLS parameters are not proved; no TLS inspector or certificate changes were performed.

AUTHENTICATION.md is canonical and embedded by build_reference.py, with authentication sequence and traffic-decoding flow diagrams. The machine evidence includes12 launcher-source hashes/line landmarks,43 exact-entry native roots/roles/hashes, CA blob identity, CLI arguments, endpoint/field maps and unresolved items.28 new distinct appendix procedures bring the reference to475, with436 IDs,175 typed RPC registrations,9 raw callbacks,9 diagrams and17 JSON files. validate_reference.py checks evidence roots/hashes as well as the pre-existing anchors/layouts/catalogs. README and SESSION_HANDOFF are updated; research stays excluded from release ZIPs.

For future repair, rehash launcher and game independently, recover the formatter/PLAY_NOW/session constructors from static ASAR, then retrace0x380120→data/result→ticket/result and0x7C1AF0→serializer. Treat all numeric RVAs as647 evidence. Do not collect or publish live tokens just to rediscover an argument name. Remaining gaps: server-side JWT/refresh/ticket policy, negotiated TLS/pinning/inspection behavior, complete device_info callback, +432 override writers, two pack metadata scalars, optional login record semantics and live decoder compatibility. Actual TCP/TLS interception and UDP reliability/ACK/reassembly/filtering implementation are separate future work.

Final verification: normalized the43 procedure hashes to stripped UTF8/LF, matching the generated procedure index, and added an explicit cross-check for every authentication procedure hash. Rebuilt the main reference and passed its validation, all actor samples and the UDP codec checks. Saved the IDA database to out/client-647/SSOClient.exe.i64. The document has9 Mermaid fences; syntax was reviewed but diagrams were not rendered by the validator. git diff --check reported no tracked whitespace errors, extracted launcher files remain ignored, and .github/workflows/windows.yml.disabled remains disabled.

## 2026-11-19 — missing-items continuation

The user asked to continue missing work. Audited the explicit gaps instead of treating catalog coverage or successful synthetic checks as complete server knowledge. Prioritized statically available auth details: device_info, device identity normalization, pack metadata scalars, login response semantics, feature duplicate behavior and native TLS policy. Rediscovered the same IDA database and reverified client SHA256 before using RVAs. No live command-line/session/registry data or network capture was collected; all launcher modules were read as static ASAR entries, never executed.

### Full device-info callback and machine ID transformation

Scanned packed dist/*.js for getDeviceInfo and extracted only matching/static source files. dist/index.js line210 binds AccountService's callback to GameRequirementsManager.getDeviceInfo({launcherVersion,distribution:store}). dist/utils/systeminfo.js lines187 onward contains the complete builder. Documented schema_version1, ISO collected_at, app name/version/optional distribution, OS family/name/version/build/arch/locale/timezone, selected hardware manufacturer/model, CPU name/architecture/logical count, raw total memory bytes, optional GPU name/vendor/driver array and capabilities.graphics_api[opengl]. Missing/falsy values become undefined and are omitted by JSON.stringify. GPU vendor-ID fallbacks are10DE NVIDIA,1002 AMD,8086 Intel,106B Apple. Its OpenGL truthiness test can accept the collector's0.0.0 fallback string, so this capability field is not a measured version. No actual system-information APIs were executed by our extraction.

dist/index.js also shows the shared uniqueDeviceId used for Fetch, initialize, analytics/Sentry and SessionService. dist/utils/deviceId.js calls node-machine-id.machineId() without original=true. Read the installed library's original source and packed runtime. On Windows it extracts the registry REG_SZ value, removes whitespace/newlines, lowercases it and hashes that string with SHA256 to lowercase hex. This closes a significant distinction: launcher Device-ID/PBKDF2 uses64-character hex text; native UDP login falls back to the raw MachineGuid string. PBKDF2 receives UTF8 of that hex text, not32 decoded digest bytes. Library commands were not invoked; no real machine ID was obtained.

The same index clears Electron default-session cookies outside watch mode before ordinary setup. This corroborates an explicit token/session handoff rather than a copied browser cookie jar, without making claims about all webviews. Extended retained inspect_launcher_static.py from12 to17 selected code files (index, deviceId, systeminfo and readable/packed node-machine-id). All17 source identities/landmarks are in authentication-evidence.json; source copies stay ignored.

### Pack metadata scalar meanings and CRC proof

Exported exact-entry0x614190, CPXPackFileArchive::Open,25642-character pseudocode. Entry calls this with fourth argument1. It enumerates p_%08d.csa data files and a corresponding name suffixed by literal header, then appends two40-byte host records per pack into archive+248. Header entry string is the header filename; first scalar from0x6CDD0; second from0x6CB10. Data entry uses pack descriptor+56/+60, populated by physical size and conditionally computed file hash earlier in the same function. Fourth argumentfalse stores0 for the data hash. Header checks later compare the descriptor and report Incorrect size / Incorrect hash. These paths establish names **filename,size_bytes,crc32**, replacing the two anonymous scalars.

0x6CDD0 loads the open handle into RDX and tail-calls IO virtual slot+136. A fresh Hex-Rays pseudocode view omitted RDX from that indirect call; applied an explicit unsigned-int file-size getter prototype, but the virtual-call argument is still omitted in that view. Retained full instruction evidence in authentication-evidence.json rather than pretending the pseudocode's prototype is authoritative. CPXIOInterfaceC vtable0xEF9218 slot+136→0x644B0 saves position, seeks end, reads position, restores position. CPXIOInterfaceMem vtable0xEF9BD0 slot+136→0x8AAC0 returns backing-record size. Assembly also confirms the first C-IO tell receives the original RDX handle even when pseudocode omits it.

0x6CB10 calls0x6CA30, which streams up to1024-byte chunks through0x9CB860→0x9CB870. Independently generated the reflected0xEDB88320 CRC table and compared **all256 entries** to static table0x1069060. Table SHA25612f3e0576d447eb37b36d82ba0c1c5481b8f0d12fdc70347ce4a076b229d4c86. The complement/update behavior identifies CRC32/ISO-HDLC, compatible with Python zlib.crc32. This does not establish a specific zlib version. It is separate from UDP FNV-1a-32 and the archive's FNV64 filename lookup. No pack values were forged or submitted and no server integrity enforcement was tested.

Pack metadata moves through0x63DC10 into initializer+960 and is copied into login6. On successful login response,0x7CAF80 calls0x63DB90, destroying strings/clearing that vector. Empty metadata is therefore a valid client-side vector shape; do not require populated metadata on every subsequent login. Meaning of server enforcement and login's adjacent constant1 remains unknown.

### Login7 success, feature-name duplicates and delayed retry

Confirmed registration in0x7BBA30 binds0x7CAF80 for ClientExitCode/optional<LoginResponseData>. Directly checked word0x1313E30==7; tuple reader is0x7C10C0.0x7CAF80 takes exit0 as success and requires present optional data; absent data reaches assertion/error handling. On success it copies the response string, applies feature state, clears metadata and continues event/player setup. The response string's business name is still unresolved.

The failure branch schedules state10/countdown10.0 if code3060 and CPXNetwork+448 attempt byte<3; otherwise state8/countdown1.0. Traced Process string0x10129B0 through logging metadata into exact function0x7CFC20. It subtracts frame time, applies a pending state when the countdown becomes negative, then calls0x7C1AF0 when state10 is active. Login increments attempt byte and enters state7, proving delayed resend. No backend label was invented for3060. This countdown is separate from transport request retries and ACK timers. Added a third authentication Mermaid diagram with these verified branches.

Feature readers0x7A98E0 and0x7A9470 use count minimum9/15 and cap16000, reject unknown names, then fold known names in order by clearing/setting the corresponding bit from each raw enabled byte. There is no duplicate/uniqueness check: last known duplicate wins; any nonzero byte is enabled. Minimum count alone does not require all names. The optional response constructor zeros initial masks, so omitted names remainzero even if repeated other names satisfy the count. This closes the previous cautious statement that duplicate/complete-set semantics were not proved. Updated main text and the focused decoder accordingly.

Added authentication_schemas.py, emitted data/authentication-wire-schemas.json, and decode_authentication_payload.py for complete decrypted/header-free/reassembled login6/7 bodies. Strings remain hex, records retain byte spans, vector entries remain ordered, feature masks are derived separately. A structurally decoded exit0/absent-data body gets a semantic note; it is not suggested as something to transmit. The decoder does not maintain login state or authenticate. It requires exact body consumption, whereas native callback7 itself does not check EOF. Server validity is separate from these parse checks.

Reused the actor decoder's bounded Reader by adding an optional schema registry, preserving its existing default behavior. New verification passes7 constructed bodies and1425 rejected truncated prefixes, unknown/minimum-count feature cases, duplicate last-wins policy, embedded-NUL/invalid-UTF8 strings, optional queue bytes and metadata CRC values. Existing23 actor samples/1241 truncated prefixes still pass after this reader change. The UDP codec still passes108 roundtrips,16 flag combinations and3 response alternatives. No native code was executed and no captured/server-accepted golden packet exists.

### Native HTTPS policy and bounded unknown-writer scan

Revisited0x99710: option32=value6 maps to CURLOPT_SSLVERSION/CURL_SSLVERSION_TLSv1_2, meaning minimumTLS1.2; option78=10 gives connection timeout10 seconds, option13=15 gives whole-operation timeout15 seconds. Cross-checked these constants/range semantics with official curl header/manual links, retained in the evidence. This closes configured TLS policy but **not** actual negotiated protocol/suite. Reviewed constructor/header/CA/submission calls set no pin, client certificate or peer/hostname-verification-off option. No whole-program/runtime absence is claimed. Schannel handshake0x9992A0 has explicit CA-bundle support checks and SNI/certificate failure paths. No TLS interception, trust modification or server probe occurred.

To examine initializer+432 overrides, scanned direct destination memory operands with displacement432 in code interval0x1000..0xA4D000. There are273 writes across many unrelated object types. Only constructor0x63D700 writes fell in initializer helper neighborhood0x63D000..0x63F000. Stored scan bounds, constructor instruction lines and explicit exclusions (aliases/address-taking/copies/adjusted bases/unreviewed paths) in evidence. This **does not close all override writers** or prove the field can never be populated. No consuming NetworkLauncherHash/NetworkLauncherServer literal read was established. Do not chase unrelated classes just because they have the same offset.

Only direct references found for login6 serializer0x7AF880 came from0x7C1AF0; only reference to its optional first-record codec0x7A68B0 came from that serializer. The caller initializes it absent, so no populated producer/semantic names can be recovered from these direct callers. Its byte layout remains known and supported; semantics remain explicitly unnamed. Interior candidate0x6C9D0 was rejected by exact-start checks; the actual file-open routine is0x6CFF0, and no containing function was substituted under the wrong name.

### Audit and current deliverables

Created MISSING_ITEMS.md mapping resolved items, remaining client-semantic work, required live evidence, unimplemented proxy mechanics and server-only definitions absent from this binary. It retains message283 and local master-tail gaps instead of hiding them behind a complete ID catalog. Main reference now includes488 exact-entry functions,436 IDs,175 typed registrations,9 raw callbacks,10 diagrams and18 JSON files; authentication evidence owns62 native roots and17 source records. Of19 added authentication roots,13 add distinct appendix functions beyond the prior475 and6 overlap the existing appendix.

Rebuilt the canonical sections/main reference and validated catalog, anchors, function hashes, schema identities and new CRC/TLS facts. The document validator and actor/UDP/login checks pass. Diagrams are fence-counted/reviewed, not rendered by that validator. No runtime/build/release artifacts, disabled GitHub Actions policy or unrelated pre-existing research edits were changed. Continue with MISSING_ITEMS.md and exact input hashes; live validation, backend auth policy and the remaining unnamed payloads are still not established.

## 2026-11-19 — identify SSOClient domains and endpoint provenance

The user requested the domain(s) SSOClient.exe uses and asked for this evidence in both specification and journal. Identified the configured production HTTPS hostname as **lb-pub.prod.starstable.com**. Kept the account/launcher API, native game-service HTTPS, assigned gameplay UDP and crash/update/metrics roles distinct; one API hostname is not an exhaustive list of all game connections.

### Source identity and packaged defaults

Rediscovered the IDA instance and reverified client647.349716 SHA25662387b246a92a4874d20329caa6eaf06c7a29830263e94982a8bdad6b6110fe1. The installed launcher archive still hashes390abe5340bfc5dc665bd8f5894b3e77af5f3d92cdea105f712d87bfd40f6b20, package2.60.0. An executable string inventory looking for Star Stable domain URLs found the native Sentry DSNs but no literal starstable.com URL for the native game-service API. Traced the existing launcher-config references instead of assuming the API domain must be embedded in SSOClient.

Read static packed dist/utils/config.js (4043 bytes, SHA25618c0398799dbc44ee5235c276d0b0ac8a9b81533d9c2b55e15598dcdfcf9882f). Lines72–79 select packaged ../.env, then dotenv.config loads it; lines85–86 map API_ENDPOINT and API_GATEWAY_ENDPOINT. This is packaged build configuration, not a user's environment/session file. Read only four allowlisted defaults for delivery from packed dist/.env, SHA256a0a02f0fbd0c18da12cef22b628fc267cd11db7de2bd1722e63c185e58d69101:

- Line4 API_ENDPOINT=https://lb-pub.prod.starstable.com/proxy-launcher.
- Line5 API_GATEWAY_ENDPOINT=https://lb-pub.prod.starstable.com/api-gateway/1.0.
- Line7 AUTO_UPDATE_URL=https://launcher-release-prod.starstable.com.
- Line11 PRODUCTION=true.

No unrelated .env values, real environment variables, access tokens, cookies or credentials were exported. Updated retained inspect_launcher_static.py to include config.js (18 selected code/library sources total) and export these four public defaults as configuration_endpoints metadata with file hash/line numbers. It rejects URL credentials/nonliteral endpoint formats and drops query/fragment data from that metadata. It does not execute any packaged JavaScript. Initial exploratory endpoint-static-configuration.json and endpoint-string-candidates.json remain ignored raw inputs; curated endpoint-evidence.json retains only relevant hostname roles, public URLs and addresses.

### Launcher configuration → native HTTPS URLs

dist/index.js lines113–118 prefer a nonempty explicit endpoint CLI override; otherwise use config defaults. Lines188–189 select API and gateway bases. GameWindow PLAY_NOW at source line535 passes new URL(gatewayEndpoint).origin to formatter; this removes /api-gateway/1.0 from the launcher's gateway base. The normal default arguments therefore contain ServiceBaseUrl=https://lb-pub.prod.starstable.com and NetworkLauncherServer=https://lb-pub.prod.starstable.com/proxy-launcher. Native consumption of ServiceBaseUrl is proved; a consuming read of NetworkLauncherServer remains unestablished.

Entry0x1D770 copies ServiceBaseUrl to StudioInitialize+208;0x380120 copies it to CPXPlayerSetup+160. RequestGameServerData0x3803E0 and RequestGameServerTicket0x380770 append their own paths, producing the exact configured URLs:

- POST https://lb-pub.prod.starstable.com/api-gateway/1.0/game-server/data.
- POST https://lb-pub.prod.starstable.com/api-gateway/1.0/game-server/ticket.

These are the previously recovered zero-body Bearer-authenticated native requests. The domain is now concrete without collecting a token or making an authenticated request. Normal HTTPS uses TCP443 unless routing/configuration changes it. Config/environment/CLI overrides mean this is an installed production default, not an immutable allowlist for every version/user. Endpoint documentation also shows the derived launcher session/create,session/refresh,initialize and queue URLs under the same DNS host, while preserving which process constructs each request.

### Gameplay UDP is separately assigned

HandleGameServerDataResult0x37F2A0 copies JSON game_server_address to StudioInitialize+240. LoginServerConnect0x7C1800 copies that string and formats ServerHostname:'%s'; the selected port comes from+272 or fallback18971 and has separate ServerPort:'%u' diagnostic. It invokes resolver0xA4B7B0 with hostname/port strings. Resolver's hints set ai_socktype2(SOCK_DGRAM) and select AF_INET2/AF_INET6=23/unspecified from the family selector. Existing UDP ProcessConnect/sendto/recvfrom evidence establishes its role. Added the exact resolver procedure to the main appendix.

This proves how the assigned game hostname/address reaches the UDP resolver, not its actual value for a particular account/session. The response accepts a string and can supply an IP literal; the client schema does not impose a fixed starstable.com suffix. Do not substitute lb-pub.prod.starstable.com or an unverified region-name guess as the gameplay destination. A future authorized observation needs only the game_server_address field, a hostname-only native diagnostic if available, or a narrowly scoped field read; a complete command-line/log dump is unnecessary and can disclose tokens.

Read-only process-name enumeration found no SSOClient process (also no StarStable/Star Stable matching process names) at this check. A filtered Get-DnsClientCache query for Star Stable domain suffixes returned no rows. These are absence-of-current-evidence observations, not proof the domains are unused/unavailable. No game was started, no process memory read, no service contacted and no packet capture performed. The old work directory is not inside this maintained checkout; current raw research remains under out/protocol-647. No unrelated client log contents were dumped to discover endpoints.

### Separate telemetry/update destinations

Native DSN literals at0xFFF728 and0xFFF768 both select configured host **sentry.io**. Exported and inspected native initialization0x720EF0 (7957-character pseudocode); it selects the DSN using its Live build/channel comparison and calls0x900E50 to install it, with later sentry_init error handling. This corroborates the separate Sentry Native HTTP path from earlier library analysis. Curated endpoint data keeps host/addresses/role and omits the DSN key component. No actual crash upload or remote redirection was observed.

The packaged **launcher-release-prod.starstable.com** value is a launcher self-update origin, not evidence that the game uses it for gameplay. Other native endpoints remain dynamic: GameWindow line905 sets metricsUrl from fetched remoteConfig.metricsUrl, passed as MetricsServer; optional report_a_player_server in the data response goes to initializer+520. No concrete metrics/reporting hostname was recovered from these static defaults, and none was invented.

### Delivered documentation and verification

Created canonical ENDPOINTS.md, embedded in the main reference/contents. It lists destination roles, exact public URLs, packaged hashes/lines, native path and limits. data/endpoint-evidence.json owns9 exact native roots/hashes plus packaged allowlist evidence; the two newly included procedures bring the appendix from488 to490. Full reference retains436 IDs,175 typed RPCs,9 raw callbacks,10 diagrams and19 JSON files. Updated authentication notes, README, missing-items audit and session handoff. Regeneration/validation checks confirm full native URLs, current source count18, endpoint hashes and the explicit uncollected UDP assignment. No runtime code/build/release/publication or GitHub workflow policy changed.

## 2026-11-19 — import into the standalone research repository

The user subsequently explicitly requested creating C:\Development\AI\SSO-Proxy and committing/pushing the research to https://github.com/grasmanek94/star-stable-online-research-proxy.git. This supersedes the earlier no-automatic-publication context for this requested import. The older journal entries record their own historical state and remain intact.

Preserved specifications, schemas/tools, original static IDA JSON/pseudocode, performance/visibility/privacy notes and earlier handoffs. The current default builder input is tracked evidence/client-647, so regeneration no longer depends on the original ignored out/protocol-647 directory. Stored executable/archive identities still refer to the same static inputs; no binary, database or installed launcher source is published. The current research session handoff is docs/SESSION_HANDOFF.md, and root JOURNAL.md records repository-level work. The original visibility-specific handoff is archived separately.

Normalized text to UTF8/LF and changed the builder's Markdown output to explicit LF. This preserves the generated reference byte count/hash across Windows/Linux Git checkouts. Rebuilt content retains the same catalogs, layouts and490 reviewed procedure bodies; the imported reference is compared to the original after newline normalization. New repository defaults/navigation do not establish any additional native/live behavior. The historical visibility project's runtime/build/release tree remains separate and unchanged by the research import. See docs/IMPORT_PROVENANCE.md and import-manifest.json for source/hash provenance.
