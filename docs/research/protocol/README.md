# SSO client647 network research

Start with [SSO-NETWORK-PROTOCOL-647.md](SSO-NETWORK-PROTOCOL-647.md). It contains the recovered UDP game transport, launcher authentication handoff, HTTPS ticket exchange, encryption envelope, reliability/fragmentation, primitive and compound encodings, all436 ID/name entries,175 incoming typed RPC registrations,9 raw callback registrations and10 Mermaid diagrams. The current exact-entry procedure count and document identity are in [data/coverage.json](data/coverage.json).

Read [JOURNAL.md](JOURNAL.md) for how the code was found, the IDA problems and corrections, exact discovery addresses and the steps for continuing after a game update. [data/coverage.json](data/coverage.json) records the executable identity and generated-document digest; the other JSON files retain the structured evidence.

[ENDPOINTS.md](ENDPOINTS.md) identifies the production game-service HTTPS host `lb-pub.prod.starstable.com`, full data/ticket URLs, the separately assigned UDP destination, Sentry's configured `sentry.io` host and launcher-only update traffic. It traces packaged .env defaults through CLI origin formatting into native URL builders/resolution; [data/endpoint-evidence.json](data/endpoint-evidence.json) retains the provenance. No active game process or assigned UDP hostname was available for this check.

[LIBRARY_IDENTIFICATION.md](LIBRARY_IDENTIFICATION.md) is the maintained library-identification section, also embedded in the generated specification. It distinguishes libcurl/Schannel, Sentry/WinHTTP, RapidJSON and LZ4 from the engine-specific gameplay serializer/RPC/UDP code, with C/C++ and synthetic byte examples. Edit this section file before regenerating; do not edit only its generated copy in the main reference.

[ACTOR_LIFECYCLE.md](ACTOR_LIFECYCLE.md) is the focused player/horse/pet specification, also embedded in the main reference. It covers the appended spawn horse, the short HorseBase versus full HorseMaster, local identity extraction, all12 push subtypes, batched movement, pet bag/ground state, removal and transport constraints. The standard-library offline decoder reads header-free bodies and reports byte spans; it does not intercept or send traffic. Run `python docs/research/protocol/tools/verify_actor_payloads.py` for its synthetic grammar/bounds checks.

[AUTHENTICATION.md](AUTHENTICATION.md) traces launcher2.60.0's single-dash argument formatter, AccessToken → HTTPS Bearer → game-server ticket → UDP login6, queue UUIDs, the MachineGuid fallback, remembered-session storage and the separate HTTPS/UDP encryption layers. Its three diagrams cover authentication sequencing, login retry state and traffic decoding. It includes a synthetic encrypted datagram fixture and links to the offline envelope/header decoder. The source hashes and native addresses are in [data/authentication-evidence.json](data/authentication-evidence.json). No live credentials, saved sessions or registry values were collected. HTTPS plaintext inspection is not implemented by the UDP decoder.

The continuation resolves the full device_info builder, hashed launcher identity, size/CRC32 pack metadata, metadata cleanup, login7 retry states, duplicate feature names and native TLS/timeouts. Authentication now has three diagrams and an offline login6/7 body decoder with declarative schemas. [MISSING_ITEMS.md](MISSING_ITEMS.md) distinguishes closed items, remaining client-semantic gaps, unimplemented relay/live checks and server behavior that cannot be inferred from this executable.

This is static client analysis. Complete ID/name coverage does not mean every server/backend payload or field meaning is known. The reference labels those gaps. Nothing here establishes a working traffic filter or live server compatibility. No runtime plugin changes or game memory modifications were made for this research.

## Rebuild the research document

From this repository root, using the tracked static exports under `evidence/client-647/`:

```powershell
python docs/research/protocol/tools/build_reference.py
python docs/research/protocol/tools/validate_reference.py
python docs/research/protocol/tools/verify_actor_payloads.py
python docs/research/protocol/tools/verify_datagram_codec.py
python docs/research/protocol/tools/verify_authentication_payloads.py
```

Both extraction-processing tools accept `--evidence <directory>`. The document builder also accepts `--output <directory>`. They use Python's standard library and process local static exports; they do not run the game, open network connections, discover live credentials or modify process memory. No IDA installation is needed to read the delivered Markdown/JSON.

The optional trace_serializers.py discovery pass can expand the heuristic graph when new exploratory functions have been exported. New candidates may require more IDA exports before its missing set closes; it is not necessary to rerun discovery just to regenerate the reviewed document. tools/actor_schemas.py is the canonical focused body grammar; the document builder emits its actor-wire-schemas.json. Keep byte-layout changes consistent with the reviewed readers and lifecycle section.

The tracked input directory contains exact function-start-RVA-named `decompiled/*.c`, the JSON inputs copied into `data/`, and additional exploratory exports. `tools/inspect_launcher_static.py` can recover the18 selected launcher/library code files and four allowlisted packaged endpoint defaults to an ignored local output from the matching installed app.asar; it does not read user storage, the user's actual process environment or execute JavaScript. The canonical endpoint/authentication sections are edited before document generation, like the actor/library sections. Their evidence JSON is curated from static source landmarks and verified exact IDA starts. Keep changes to canonical evidence and generated data consistent through the builder.

The static exports are now versioned, so ordinary regeneration does not require the old investigation workspace. If they are unavailable, the delivered procedure appendix can be extracted back to individual `.c` files for its indexed functions, but not every constructor/outgoing exploratory function is included there. For new binary analysis, recover functions from the same archived executable with IDA; never substitute a different build under the647 filenames. The new session must discover its own IDA database instance ID. Never substitute a live command-line dump or saved token file for the launcher's static argument formatter when recovering authentication evidence.

The research tools, journal and data are maintained in this standalone research repository. The [CMake UDP relay and trace inspector](../../../README.md#build-and-run-the-udp-relay) reuse the focused offline decoders for synthetic and explicitly configured UDP exchanges. Historical visibility-player packaging rules refer to the separate native project. See root README.md and docs/SESSION_HANDOFF.md for the current checkout and historical-document map.
