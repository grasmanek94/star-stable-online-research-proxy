# Repository journal

## 2026-11-19 — standalone research import

The user requested creating C:\Development\AI\SSO-Proxy and committing/pushing the research to grasmanek94/star-stable-online-research-proxy. Read-only remote checks found no branches/tags. Prepared the complete documentation, protocol/schema/tools, static evidence and earlier reports in the writable original workspace before materializing the requested checkout.

Preserved discovery history in [the protocol journal](docs/research/protocol/JOURNAL.md), [the visibility-project journal](docs/JOURNAL.md) and archived original handoffs. Added root navigation, current research-only AGENTS/session handoff, import provenance and file-hash manifest. Included the later privacy/protection notes as dated documents; no message/request was sent and their account placeholders remain placeholders.

Added .gitignore for game/native binaries, IDA databases, captures, archives, credentials, TLS private keys and build/dependency/editor output. No active GitHub workflow is configured. Kept the historical disabled workflow as an archive document.

Tracked static client647 JSON/pseudocode evidence enables document regeneration without the original workspace. Changed builder/discovery defaults to evidence/client-647 and made generated Markdown LF-stable so byte count/SHA256 survive cross-platform Git checkouts. Canonical findings, procedure hashes and decoder behavior are retained. The generated reference still contains490 reviewed procedures,436 IDs,175 typed registrations,9 raw callbacks,10 diagrams and19 JSON data records.

Document validation and all three existing synthetic verification scripts passed:23 actor samples/1241 truncated-prefix rejections,108 envelope roundtrips/16 flag combinations,7 login samples/1425 truncated-prefix rejections. The regenerated protocol content exactly matches the source after newline normalization. Reviewed1060 publication files and found no matches for the checked high-confidence credential patterns. A generated performance SVG contained trailing path-coordinate whitespace; normalized only that whitespace and compared the full parsed XML content to verify identical graphics. A source/import manifest records original, normalized and repository hashes separately from the new repository history. No live credentials, game/client binaries, IDA databases or raw traffic are part of the import.

The repository is research and offline tooling. A live forwarding/filtering proxy, golden traffic validation, TLS interception and backend-policy knowledge are not claimed. Current unresolved items remain in MISSING_ITEMS.md. Source visibility-runtime files/builds/releases are not changed by this import.

## 2026-11-19 — implement UDP forwarding and synthetic trace inspection

Added the CMake Windows relay and a trace inspector using the existing client647 schemas. The relay resolves a configured upstream before binding, forwards unchanged datagrams in both directions, and writes metadata to stdout. The optional inspector accepts a supplied test context and logs recovered fields with sensitive login values redacted. Build, run and test instructions are in the [root README](README.md#forward-udp).

Verified a Release build, the synthetic loopback test, the document validator and all three protocol verification scripts. The installed client hash matched the journal. No IDA MCP tool was exposed. This phase exercised separate local UDP peers and synthetic messages. The [protocol journal](docs/research/protocol/JOURNAL.md#2026-11-19--first-c-udp-relay-and-decoded-trace) records the implementation and remaining gaps.

## 2026-11-21 — TCP forwarding and TLS trace inspection

Added full-duplex Windows TCP forwarding alongside UDP and a combined inspector that accepts a supplied TLS key log and UDP context. Local tests passed for intact streams and half-closes, simultaneous UDP forwarding, TLS 1.2 HTTP/1.1, and TLS 1.3 HTTP/2. The decoded log reports known commands and identifiers, and excludes synthetic credentials and sensitive HTTP fields. See the [protocol journal](docs/research/protocol/JOURNAL.md#2026-11-21--tcp-forwarding-and-supplied-tls-keys) and [run instructions](README.md#forward-tcp-and-inspect-tls).

## 2026-11-21 — reversible Windows hosts redirection

Added `--redirect-hosts` and `--restore-hosts`. The proxy resolves configured upstreams and binds the required ports before installing marked hosts entries. Clean shutdown and manual restore remove the relevant entries while preserving other edits. Tests exercised the Windows file replacement and restoration against temporary fixtures. See the [run instructions](README.md#temporarily-redirect-hostnames-on-windows).
