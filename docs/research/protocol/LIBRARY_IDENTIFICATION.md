## Library identification and format examples

Follow-up analysis: 2026-11-19, the same hashed client647.349716. **The client combines third-party HTTP/TLS components with an engine-specific gameplay message/RPC/reliable-UDP stack.** Identifying a dependency elsewhere in the executable does not establish that it structures gameplay packets.

| Layer | Identification | Confidence and scope |
|---|---|---|
| HTTP/TCP transfers | libcurl, C API, compiled into the executable | Confirmed libcurl diagnostics, protocol strings and HTTP socket code. Three compiled DICT request templates report `libcurl 8.23.0`; that is a build fingerprint, not a source-revision or unmodified-upstream guarantee. |
| TLS for the examined libcurl HTTPS path | Windows Schannel/SSPI | Confirmed Schannel handshake/error paths and `Secur32!InitSecurityInterfaceW`. No OpenSSL implementation was identified on this path. |
| Additional HTTP upload path | Sentry Native using Windows WinHTTP | Confirmed transport initializer/request code and imports. Corresponding upstream Sentry transport has matching structure/diagnostics. This is separate from the gameplay datagrams. |
| Gameplay socket I/O | Windows Winsock behind PXEngine wrappers | Confirmed `socket`, `sendto`, `recvfrom`. Winsock is the OS socket API; it does not define the application's message schemas. |
| Gameplay framing, ACKs, ordering, fragmentation | PXEngine NetworkShared connection/message layers | Strong evidence for an engine-specific implementation and wire format. No ENet/RakNet/SLikeNet/Asio implementation was identified in the traced path. |
| Gameplay serialization and RPC binding | PXEngine ByteStreamReader/Writer, NetSerialize helpers and RpcExecutor | Confirmed source-path strings, RTTI and concrete readers. Positional fields, custom ID dispatch and C++ tuple/optional/variant handling. No generic Protobuf/FlatBuffers/MessagePack decoder is used by the traced gameplay readers. |
| Selected gameplay compressed fields | LZ4 block algorithm with an SSO length wrapper | Format/algorithm match from concrete code and the upstream block specification. Exact library release/vendor provenance is not established. |
| Gameplay envelope | XTEA-style 8-cycle block operation plus FNV-1a32 and custom metadata | Standard algorithm building blocks in an engine-specific envelope. No named third-party crypto-library implementation was established for this code. |
| JSON handling elsewhere in the client | RapidJSON, C++ | Confirmed RapidJSON schema/DOM-related RTTI. CPXJson also has engine wrapper code. No universal JSON gameplay packet format or exact RapidJSON version is established. |
| MessagePack references elsewhere | Sentry Native/Crashpad scope and breadcrumb serialization | Confirmed association with crash-reporting code. The particular standalone MessagePack library, if any, was not identified; the strings do not prove use of msgpack-c or MPack for world messages. |

“Engine-specific” describes the recovered architecture, interfaces and wire representation. It does not prove the provenance of every stripped helper or that no upstream source was ever adapted. Standard varints, ZigZag and common algorithms alone cannot establish a particular serialization library.

### HTTP/TCP: libcurl and Schannel evidence

The client contains libcurl-specific strings at RVAs0x1054F50,0x1055468 and0x10554E8. Request templates at0x10633B8,0x1063428 and0x1063458 embed the version fingerprint above. These are DICT capability strings compiled into a multi-protocol library, **not evidence that the game actually uses DICT**. Engine instrumentation at0x9A140 refers to `curl_multi_perform` and `curl_multi_poll`; its metric-name strings are at0xF30408/0xF30448. That function constructs metrics, so those xrefs alone are not a call graph to the transfer APIs. HTTP socket send/receive paths previously traced are0x978EC0/0x9790F0.

libcurl provides URL/HTTP transfer functionality through its C API. Its multi interface allows transfers to be driven by a polling/event loop. This identifies a reusable HTTP component, rather than the schema of an SSO gameplay message. See the [official libcurl overview](https://curl.se/libcurl/) and [programming tutorial](https://curl.se/libcurl/c/libcurl-tutorial.html).

Illustrative C API example, **not recovered SSO source, an SSO endpoint, or a gameplay packet parser**:

```c
#include <curl/curl.h>

int example_http_request(void) {
    if (curl_global_init(CURL_GLOBAL_DEFAULT) != CURLE_OK)
        return 1;
    CURL *request = curl_easy_init();
    if (!request) {
        curl_global_cleanup();
        return 1;
    }
    curl_easy_setopt(request, CURLOPT_URL, "https://example.invalid/status");
    CURLcode result = curl_easy_perform(request);
    curl_easy_cleanup(request);
    curl_global_cleanup();
    return result == CURLE_OK ? 0 : 1;
}
```

Schannel initialization0x965FD0 calls `InitSecurityInterfaceW`; handshake0x9992A0 accesses the returned SSPI function table and emits Schannel-specific errors. TLS is handled below the HTTP application body. The identification is consistent with curl's documented [Schannel TLS backend](https://curl.se/docs/ssl-compared.html). This does not make the separate gameplay UDP envelope TLS or DTLS.

### Separate HTTP implementation: Sentry Native and WinHTTP

RVA0x909AA0 logs the WinHTTP transport initialization, allocates worker state and binds transport callbacks.0x90A390 imports/calls `WinHttpOpen`;0x909C30 uses `WinHttpCrackUrl`, `WinHttpConnect`, `WinHttpOpenRequest`, `WinHttpSendRequest`, `WinHttpReceiveResponse` and `WinHttpQueryHeaders`. The method/headers/body come from a prepared HTTP request object. This matches Sentry's upstream [WinHTTP transport example/version0.7.20](https://raw.githubusercontent.com/getsentry/sentry-native/0.7.20/src/transports/sentry_transport_winhttp.c); the source is a structural comparison, **not an assertion that the embedded SDK is exactly0.7.20**.

The relevant request flow is:

```text
Sentry envelope -> prepared HTTP request -> queued worker task
  -> WinHttpConnect -> WinHttpOpenRequest
  -> WinHttpSendRequest(headers, body) -> WinHttpReceiveResponse
  -> inspect response headers/status -> cleanup
```

RVA0x908120 serializes a crash-event/scope value before writing an attachment and can log a MessagePack flush failure;0x907FD0 does the corresponding breadcrumb operation. Both call serializer0x900590. The matching upstream [Crashpad backend](https://github.com/getsentry/sentry-native/blob/master/src/backends/sentry_backend_crashpad.cpp) explicitly uses `sentry_value_to_msgpack` for this work. These references identify crash-reporting serialization; they do not establish that the HTTP upload body or SSO object updates are all MessagePack.

### Gameplay: custom PXEngine serialization and reliable UDP

The strongest evidence combines proprietary interfaces with concrete byte transfers:

- Source references name `Base/Serialize/NetSerialize/PXNetIntegral.h` at0xF4F150 and `PXNetSerializeStd.h` at0xF64730.
- RPC source reference0xF50C80 names `NetworkShared/RPC/PXRpcExecutor.h`;0xF50D10 identifies `PXEngine::RpcExecutor::Bind`.
- Reader/writer source references at0x10A04D0/0x109ED00 name `PXByteStreamReader.cpp` and `PXByteStreamWriter.cpp`. RTTI names the PXEngine reader, writer and HandlerStub classes.
- Connection sources name `PXConnectionManager.cpp` at0x101ADC0, `PXUdpMessageLayer.cpp` at0x101B480 and `PXUdpNetworkLayer.cpp` at0x101BA90.
- The envelope source reference0x1020520 names `PXGameServerEncryptedNetworkLayer.cpp`.
- Actual codecs use virtual byte-transfer operations and concrete positional readers such as varu32 helper0x1D0820 and PacketHeader codec0x801400. Reliability code0x809340/0x8097F0 implements the recovered flags, per-fragment sequences and ordering rather than handing these bodies to a recognized external messaging API.

Example derived from the actual message286 reader in0x7D08D0: its body contains one varu32 player identifier. For a **synthetic** identifier150, the complete body after header removal/decryption is:

```text
96 01                     # varu32(150)
```

The message ID belongs in SSO's separate PacketHeader; its own varu16 representation for286 is `9E 02`. Neither byte example includes the complete header, encrypted envelope, connection metadata or an actual session. They are examples of the recovered encoding, not captured packets or sendable standalone datagrams.

Compare a Protobuf message whose field1 has integer value150: it has a preceding field tag and encodes as `08 96 01`, as shown in the [official Protobuf encoding guide](https://protobuf.dev/programming-guides/encoding/). SSO's reader does not consume that `08` tag. Both formats can use the same varint primitive while their message structures remain different.

Similarly, C++ RTTI such as `tuple<ClientExitCode,optional<LoginResponseData>>` describes the types bound to a PXEngine reader. It does not imply Boost.Serialization, cereal, a `.proto` schema, a raw memory-struct transfer or an automatic portable RPC protocol. The concrete reader determines widths, presence bytes and order.

### Compression: a standard LZ4 block inside custom lengths

The decompressor0xE6C020 matches the LZ4 block token/literal/match format. That permits reuse of a compatible LZ4 block decoder for those bytes, while SSO's wrapper and the decompressed message schema still need their own handling. See the upstream [LZ4 block specification](https://github.com/lz4/lz4/blob/dev/doc/lz4_Block_format.md). No standalone LZ4 frame header is present in the recovered CompressedBlob wrapper.

Synthetic example for the five ASCII bytes `Hello`:

```text
0A 00 00 00              # record_length = 10: output-size word + block
05 00 00 00              # uncompressed_length = 5
50 48 65 6C 6C 6F        # LZ4 block: token 0x50, five final literal bytes
```

This is an illustrative14-byte CompressedBlob field, not a complete game packet. A compatible C LZ4 API would receive only the last6 bytes, e.g. `LZ4_decompress_safe(block, output, 6, 5)`, and its result must equal5; see the [upstream C API header](https://github.com/lz4/lz4/blob/dev/lib/lz4.h). The outer two lengths are raw little-endian uint32 values, **not varints**. This example was constructed from the format; it was not replayed against a server or tested against a captured session.

### JSON: identified library, separate encoding

RapidJSON RTTI at0x1363DC0,0x1363EE0,0x1363FD8 and0x1364020 names its schema validators, GenericValue, UTF8 and MemoryPoolAllocator types. Engine logging identifies `CPXJson::CreateValue` at function0xA27A50 and `CPXJson::Insert` at0xA290F0, with a `PXJSon.cpp` source reference at0x109F000. These are JSON implementation/wrapper evidence; their existence does not assign JSON encoding to every network field. RapidJSON's [official documentation](https://rapidjson.org/) describes its C++ DOM/parser API.

Illustrative RapidJSON usage, **not an observed SSO body**:

```cpp
#include <rapidjson/document.h>

rapidjson::Document document;
document.Parse(R"({"kind":"example","count":2})");
if (!document.HasParseError() && document.IsObject() &&
    document.HasMember("count") && document["count"].IsInt()) {
    int count = document["count"].GetInt();
    (void)count;
}
```

No exact RapidJSON version or mapping of all HTTP body schemas to JSON libraries was recovered. Fields explicitly typed as strings or compressed bytes must be decoded according to their concrete callers, rather than parsed as JSON automatically.

### Negative results and common false positives

Bounded string/named-symbol searches found no recognizable ENet, RakNet/SLikeNet, Boost.Asio, Protobuf, FlatBuffers, cereal, bitsery, gRPC or GameNetworkingSockets identifiers in support of the traced gameplay stack. Stripping/static linking/renaming can erase fingerprints; absence of names is not a proof of absence throughout the executable. The positive PXEngine source/RTTI/control-flow evidence is stronger than those negative searches.

Boost exception/regex symbols **are** present:101 named-symbol hits in the broader framework probe were all Boost-related, including `regex_error` and regex implementation types. That is not evidence of Boost.Asio or Boost.Serialization. Likewise the `RPCRT4` imports here are `UuidCreate`, `UuidToStringA` and `RpcStringFreeA`; they do not demonstrate that gameplay RPCs use Microsoft RPC. LodePNG zlib diagnostics are image-decoding evidence, not proof that CompressedBlob uses zlib.

For implementation planning, reusable parts identified here are HTTP transfers, TLS, JSON processing where applicable and LZ4 block decoding. SSO's gameplay IDs, positional schemas, header, connection lifecycle, reliable-UDP behavior and encrypted envelope still require the custom protocol described in the rest of this reference.

The authentication continuation also identifies **CRC32/ISO-HDLC** in the login's pack metadata. File hash0x6CA30 streams1024-byte chunks through0x9CB860→0x9CB870; the full256-entry table at0x1069060 matches reflected polynomial0xEDB88320. Its update/complement behavior matches ordinary zlib.crc32. This is an algorithm identification, not enough to assign a particular zlib version or prove an unmodified library build. Keep its role separate from the game envelope's FNV-1a-32 and archive filename FNV64 lookups; identical-looking checksum-sized fields are not interchangeable.
