# Protocol research: remaining items and evidence limits

Updated 2026-11-19 after the user's request to continue missing work. This is a resumption checklist, not a claim that a client binary contains every server-side implementation. The canonical sections are AUTHENTICATION.md, ACTOR_LIFECYCLE.md and LIBRARY_IDENTIFICATION.md; the main reference embeds them. Procedure counts/digests are recorded in data/coverage.json.

| Item | Current result | Evidence / next useful step |
|---|---|---|
| Launcher argument containing credentials | Resolved for installed launcher2.60.0: single-dash AccessToken, separate NetworkUserId and queue token | Formatter/PLAY_NOW source hashes and native entry copies in authentication-evidence.json |
| Access token's path into UDP login | Resolved: HTTPS Bearer obtains opaque ticket, ticket is login6 string2 | Native setup→data/result→ticket/result→login serializer |
| Production game-service DNS host | Resolved installed default: lb-pub.prod.starstable.com, with exact native data/ticket URLs | ENDPOINTS.md and packaged .env→config→origin→native builder evidence; per-session UDP hostname remains separately assigned/uncollected |
| Full device_info shape | Resolved for the inspected callback, including optional-field rules | dist/index.js→GameRequirementsManager.getDeviceInfo; documented selected OS/hardware/app fields |
| Launcher Device-ID versus game machine identifier | Resolved: launcher SHA256 hex of normalized machine ID; native Windows login fallback uses raw registry string | deviceId.js and node-machine-id source/runtime; native0xA4C0A0 |
| Pack metadata's two scalar meanings | Resolved: size in bytes, CRC32/ISO-HDLC; header record then data record | Open0x614190, size/CRC helpers, all256 CRC-table entries independently matched |
| Pack metadata lifetime | Resolved: successful login clears initializer vector | OnLoginResponse→0x63DB90; parser permits count0 |
| Login7 success and delayed retry | Resolved client-side:0 success requires data;3060 with counter<3 schedules10.0 countdown/state10 and resend |0x7CAF80 and Process0x7CFC20; other failures select state8/countdown1.0 |
| Feature-name duplicates | Resolved: known duplicates accepted, last value wins; minimum counts do not require all names |0x7A98E0/0x7A9470; new synthetic decoder checks |
| Native HTTPS version/timeout policy | Resolved constructor settings: minimumTLS1.2, connect10s, total15s |0x99710 and primary libcurl API definitions; actual negotiation still unknown |
| Login6/7 body decoder | Implemented offline, synthetic only | authentication_schemas.py/decode_authentication_payload.py and verification script; no authentication/network operations |
| UDP envelope and connection material | Recovered and implemented offline, synthetic only | datagram_codec.py; bootstrap1/2→response2 material;8-cycle envelope, FNV checksum |
| Player/horse/pet spawn/update/remove bodies | Focused supported bodies recovered and offline-tested; full semantic coverage is partial | Actor section and schemas; all284 subtypes1–12; unknown fields keep offsets |

Items still unresolved, grouped by what evidence could resolve them:

| Item | What is known | What remains / evidence needed |
|---|---|---|
| Server JWT signature/claims policy | Launcher decodes session_id and exp; uses Bearer normally | Signing algorithm, keys, complete claims, revocation and validation rules belong to server/token evidence. No live JWT was collected; do not invent these from jwtDecode. |
| Ticket/queue validity and binding | Endpoint request/consumed response shapes and exact queue UUID bytes recovered | Server TTL, reuse, user/device/connection binding and failure semantics require backend documentation or an authorized observed exchange. No probing/replay was performed. |
| Native use of emitted NetworkLauncherHash/NetworkLauncherServer | Launcher emits them; no consuming literal-name read found in inspected Windows entry/string surfaces | Dynamic script/data-driven paths or unused legacy arguments remain possible; absence of a string xref is not whole-program absence. |
| StudioInitialize+432 override writers | Constructor empties it; login uses it if nonempty, otherwise MachineGuid fallback | A bounded direct-displacement scan found273 writes to offset432 across many unrelated types; only constructor writes matched the initializer helper neighborhood. Alias writes, copies and different base adjustments are not covered. Exact bounds/limits retained in evidence; do not relabel unrelated writes as initializer writes. |
| Login6 optional first record meaning | Wire string,varu32,u8 is resolved; the only direct serializer caller found initializes it absent | No populated native producer was found. Preserve optional bytes/anonymous scalar names. Server/another platform may provide semantics. |
| Login6 constant1 and server interpretation of metadata | Exact encoding/source established | Platform/capability meaning and enforcement policy are not proved; do not change it or infer bypass behavior. |
| Login7 response string meaning and backend name of3060 | Exact byte position, consumers and numeric retry branch established | Human-readable business names need corroborating data. Structural parse of exit0/absent-data is not a valid native success. |
| Actual TLS negotiation, pins and HTTPS inspector compatibility | Schannel path/embedded bundle and constructor options traced; no pin/client-cert/verification-off option set by reviewed game requests | Negotiated suite/version, external routing, key logging and trust behavior need separate live validation. The launcher Node proxy flag does not establish game TLS/UDP interception. No certificate changes/interception were performed. |
| Live UDP/login decoder compatibility | Algorithms/layouts align with static readers; synthetic fixtures/bounds pass | No captured golden session, native differential execution or server acceptance. A capture from connection startup is needed to exercise material installation/reconnects/reliability. |
| Reliable-UDP terminating proxy | Header/ACK/fragmentation/lifecycle documented | Independent leg state, sequence translation, ACK ownership, retries/timeouts and actor-reference policy remain unimplemented. Offline body decoders do not supply a working relay. |
| Message283 | Catalog name recovered; previous full executable immediate search did not find a linked concrete handler | Could be computed/dynamic/unused in this client. Preserve opaque unless a real dispatch/writer is identified. Earlier journal retains10 unrelated candidate contexts. |
| Full decompressed local master tail | Prefix/local identity/contained length and raw span recovered | The contained initialization stream is not fully flattened in the focused decoder. Follow0x7CB340 and the bounded stream consumers rather than assuming JSON or a generic object list. |
| Other anonymous actor fields and pet teardown script effects | Byte layouts/consumer paths exist for supported bodies | Additional consumer/script analysis can improve semantic names. Omitted PetMotion is not deletion; pet ground state0 is saddlebag; suppressed actor creation is not equivalent to model hiding. |
| Every server-only/internal ID | Complete436-entry client ID/name catalog retained | A name does not define a payload. Some backend serializers are absent from this executable; there is no honest way to fabricate them from the enum. |

No item above is silently declared solved by a successful synthetic test. Future work can continue static client/script analysis where code exists; actual server policy and negotiated/live behavior require additional evidence. Continue to keep original bytes, explicit unknowns and input identities. No runtime/release change, commit/push or live credential collection was made for this continuation.
