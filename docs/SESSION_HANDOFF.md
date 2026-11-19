# Continue the SSO protocol research

## Checkout and first reads

The user requested this standalone repository on2026-11-19 at `C:\Development\AI\SSO-Proxy`, remote `https://github.com/grasmanek94/star-stable-online-research-proxy.git`, branch `main`.

Start with root README.md/AGENTS.md, research/protocol/README.md, JOURNAL.md and MISSING_ITEMS.md. Root JOURNAL.md records repository-level changes. The full protocol journal preserves earlier discovery and failure history. docs/JOURNAL.md and most other non-protocol docs retain the separate visibility-plugin history. The previous runtime-specific handoff is archived in docs/archive/visibility-runtime/SESSION_HANDOFF.md.

## Current evidence

Primary game input647.349716, SHA25662387b246a92a4874d20329caa6eaf06c7a29830263e94982a8bdad6b6110fe1, preferred base0x140000000. Launcher2.60.0 app.asar SHA256390abe5340bfc5dc665bd8f5894b3e77af5f3d92cdea105f712d87bfd40f6b20. Those programs/databases are not tracked here. Reuse an independently hash-verified local copy for future IDA work; discover the current IDA instance ID.

Tracked evidence/client-647 contains the original static JSON/pseudocode exports, including exploratory files. The generated reference selects490 exact-entry procedures and preserves436 IDs,175 incoming typed RPC registrations,9 raw callbacks,10 Mermaid diagrams and19 JSON data files. Exploratory exports are not automatically proved packet schemas. The published procedure index and validation distinguish the reviewed subset.

The user explicitly requested importing the research/journals and publishing this new repository. It started from an empty remote; no old visibility-source history is rewritten. docs/IMPORT_PROVENANCE.md and import-manifest.json record the source checkout commit and newer working-tree material. Source text was normalized to LF; generated document coverage is rebuilt for the normalized artifact.

## Important recovered facts

- Gameplay uses custom reliable/encrypted UDP. HTTPS/libcurl/Schannel and Sentry/WinHTTP are separate paths.
- The installed production game-service HTTPS host is lb-pub.prod.starstable.com. Native zero-body POSTs fetch game-server/data then /ticket. Actual UDP game_server_address is returned by the service; no running process/assigned UDP hostname was present in the endpoint check.
- Launcher AccessToken becomes HTTPS Bearer auth; the separately returned ticket enters login6. Queue UUID, raw machine identifier, user ID and transport key material are separate values. Do not rename login6's third string to NetworkLauncherHash.
- Launcher Device-ID is SHA256 hexadecimal text from a normalized machine ID. Session storage PBKDF2 receives UTF8 of that hex text; native login fallback uses the raw Windows MachineGuid string.
- Login pack metadata is filename,size_bytes,CRC32/ISO-HDLC, with header/data records; successful login empties its initializer vector. Code3060 with attempt counter<3 schedules state10/countdown10.0; known feature duplicates are accepted and last value wins.
- UDP uses8 XTEA-style cycles/16 half-updates, little endian and FNV-1a-32 framing. Response2 installs connection material. This does not decrypt HTTPS.
- Player285 uses PlayerShared plus short HorseBase; HorseMaster is larger. All284 subtypes1–12 have focused schemas. Unknown282 player IDs stop the native batch. Missing PetMotion is not deletion; pet state0 means saddlebag. Local player ID comes from decompressed9/PlayerShared+0, not CPXNetwork+1100.

Read the canonical sections and journal for addresses, source hashes, byte order and qualified limits; this summary is not a substitute for them.

## Rebuild and verification

From repository root:

```powershell
python docs/research/protocol/tools/build_reference.py
python docs/research/protocol/tools/validate_reference.py
python docs/research/protocol/tools/verify_actor_payloads.py
python docs/research/protocol/tools/verify_datagram_codec.py
python docs/research/protocol/tools/verify_authentication_payloads.py
```

Builder/discovery default input is evidence/client-647; `--evidence` can select a different local reviewed export set. Do not rerun heuristic trace_serializers.py as a mandatory regeneration step: it can discover additional unresolved candidates. New installed launcher code can be inspected statically with inspect_launcher_static.py into ignored out/, using the matching archive. Do not export full credential-bearing environment/log/session contents.

Checks establish static consistency and synthetic behavior:23 actor samples/1241 rejected truncated prefixes,108 envelope roundtrips/16 header flag combinations and7 login samples/1425 truncated prefixes. The [root README](../README.md#build-and-run-the-udp-relay) covers the Windows CMake relay, caller-supplied context inspector and CTest loopback test. Live golden captures, native differential execution, backend acceptance, HTTPS inspection and a terminating relay remain unverified or unimplemented. MISSING_ITEMS.md keeps the remaining server-policy, anonymous-field, message283 and master-tail gaps visible.

No native binaries, game files, active workflow, live captures or account secrets were added during the import. Future builds/cache/captures belong under ignored paths. Historical absolute paths in imported documents refer to their original investigation environment.
