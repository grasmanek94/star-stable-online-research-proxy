# Continue work from this repository

## Current checkout

The user's maintained checkout is `C:\Users\Rafal\Documents\Codex\2026-11-15\tr\outputs\Star-Stable-OpenGL-proxy-CMake\SSO-Visibility-Proxy-1.1.0-source`, remote `https://github.com/grasmanek94/star-stable-online-quality-of-life-improver.git`, branch master. The old directory name is retained; code version is **1.3.0**. Older workspace tree `sso-visibility-proxy` and original work/proxy scripts are historical snapshots. Make future changes here and build here.

Read README-DEVELOPERS.md, AGENTS.md, IMPLEMENTATION_STATUS.md, REQUEST_HISTORY.md, JOURNAL.md, ARCHITECTURE.md and LOADER_ADAPTERS.md. Earlier discovery and failures are in REVERSE_ENGINEERING.md and SSO-Visibility-Engineering-Handoff.md. The runtime's data/ files and MASM wrapper order are canonical; historical static addresses elsewhere are not instructions to patch a newly updated client blindly.

## Preserve these decisions

- Default8 hides remote riders/horses/pets only. Master starts off. F5 enables,F6 restores,F7 reloads INI; Ctrl+Numpad selects/enables. NumLock on. Preset9 riders/horses only.
- Preset0 enables all14 filters and cannot be overridden. Defaults0–4 aggressive,5–9 guarded. User permits NPC model hiding while preserving collision and known race cues. Own-body/checkpoint invariants remain even in0; broad particles may remove own cosmetics/cues/fog.
- Four adapters share one C/MASM core. No Cheat Engine dependency. ASI/explicit/ReShade entry requirements are documented; do not add loader-lock patching or assume a universal shader ABI.
- The1.2.2 client647 repair removes timestamp/version/image-size allowlists. Discover targets from validated calls/tails, globals from RIP references and15 primary vtables from exact RTTI. Keep structure/ownership/semantic checks. Canonical data/client-layout.json and the dated repair journal supersede historical fixed645 RVAs. Arbitrary future-layout compatibility is not guaranteed.
- **GitHub Actions is disabled by request.** Preserve `.github/workflows/windows.yml.disabled` until the user requests re-enabling. Do not silently restore its .yml extension.

## Builds in this checkout

```powershell
.\build.cmd -Loader PROXY -Configuration Release -Package
.\build.cmd -Loader RESHADE -Configuration Release -Package
.\build.cmd -Loader ASI -Configuration Release -Package
.\build.cmd -Loader PLUGIN -Configuration Release -Package
```

VS2026 outputs are `out/build/vs2026-x64[-reshade|-asi|-plugin]/bin/<configuration>/`. VS2022 uses corresponding names. Runtime ZIPs are `out/packages/<LOADER>/<configuration>/`. Use `-AsmTests` when optional Python/Unicorn are installed. The build wrapper preserves per-configuration `validation/ctest.xml` and `ctest.log` as well as matching private-symbol metadata. Run `python tools/record_validation.py --preset vs2026-x64` after the documented seven-build matrix to update docs/build-validation.json from those reports.

After the four minimal CPack runtime packages exist, commit the intended changes and collect the build-only source ZIP and combined bundle:

```powershell
python tools/package_release.py --create-source
```

The optional standard-library collector writes `out/releases/1.3.0/`, containing all four runtime ZIPs, combined loader ZIP, build-only source ZIP and separate manifest. It checks exact2-file runtime/8-file combined contents, archive CRCs, module hashes against private local metadata, tested source inputs, config dimensions and default8. AI instructions, research/journal/handoff files and symbols are excluded from player/source downloads but retained in Git. README.md is now the simple public guide; README-DEVELOPERS.md retains technical build instructions. Python is not needed for the normal native build or ordinary CPack packages. Generated binaries, caches and packages remain ignored by Git.

## Evidence map and boundaries

docs/research/README.md indexes actor v4/v5, cosmetic and particle IDA excerpts and the performance reports/normalized timing evidence. research/legacy-ce contains historical scripts/tables for provenance. They are separate from the maintained native runtime and may need original workspace fixtures/dependencies to rerun.

Historical client baseline645.348067: SHA256 `3CEC805521C70B64F1A33C5A0EFA67679B8112DACBE9594AB1B47301B4D3DE8D`, PE6AEB5BD3, image014AF000. Registry parent is record+40; safe-reference generation/index at actor+128/+132. Use fresh PID/module base and current DLL hash-bound metadata. Never reuse old g_config addresses, heap pointers or IDA instance IDs.

The older1.1 proxy was verified active with all11 flags and18 owned hooks during a60.877s foreground capture in essentially the same area.96.3 vs63.0 kernel presents/s, main-thread99.5%, pose sampled cost3.611→0.317ms/present. This was not a controlled camera/population A/B. New1.2 particles/grass and actual ReShade/ASI integration remain unverified live. Source/build completeness does not establish safe gameplay or a guaranteed0.43ms gain.

No build task should restart/play the game or replace its loaded module. The user controls gameplay/live checks. All current changes can be built/reviewed independently of a running client. Retain recovery/restore/ownership invariants and build matching metadata after every link.

## Client647 repair, 2026-11-18

Read [the repair journal](updates/2026-11-18-client-647.md) first for update failures. Current reference647.349716 SHA25662387b246a92a4874d20329caa6eaf06c7a29830263e94982a8bdad6b6110fe1; PE6AF719CF, image014C1000 are evidence only. All21 updated AOBs resolve uniquely in a native production-discovery file audit, with2 globals and15 RTTI vtables; read-only live checks confirmed the local player/horse structure. The game was not restarted, played or hotpatched, and no live hiding/FPS success is claimed. Current package version is1.3.0; older installed modules must be replaced by the user with the game closed. Keep customized INI values.

The optional helper mode is `out/build/vs2026-x64/bin/Release/sso_runtime_tests.exe --inspect-client <SSOClient.exe>`. It maps only file data, applies relocations in its own allocation, calls production discovery and prints JSON. It does not execute game code or require a running game. The standard native suite includes relocated bindings/vtables/helper destinations and missing, ambiguous, malformed-semantic and recovery checks. Generated layout_specs.inc is committed; no game file is needed for ordinary builds. Use matching g_patchSites/g_originals metadata for diagnostics; static game RVAs are reference values. KnownGameLayout in the diagnostic now means this runtime completed its validation, rather than a PE-header allowlist.

## 1.3.0 player delivery and live confirmation

On2026-11-18 the user reported that the client647 repair works. This supersedes the earlier pending-live status for core hiding; no exact loader, preset census, race coverage or new FPS measurements were provided. Version1.3.0 retains that hiding logic and updates PE/project version, simple player documentation, Polish/Dutch translations and minimal packaging. README.md, README.pl.md and README.nl.md share a top language bar, identical keys/presets and the account-ban warning. README-DEVELOPERS.md preserves the technical guide.

After successful release publication, archive the current client with tools/cache_client.ps1 outside Git/build output. Default cache: Documents/Codex/cache/SSO-FPS/clients/<version>/<sha256>/SSOClient.exe plus local manifest. Verify source/copy hashes, preserve previous versions and use them for offline IDA differences on later updates. Never put cached executables in Git or release ZIPs. Historical binaries might remain in workspace snapshots; verify identities before adding them.

Completed:1.3.0 was published and all7 upload digests verified. Then archived647.349716 under the cache above with SHA25662387b246a92a4874d20329caa6eaf06c7a29830263e94982a8bdad6b6110fe1; repeated capture verified idempotent reuse. No old645 executable was found in the project workspace. See updates/2026-11-18-client-archive.md for the publication/archive receipt. Release tag remains on its original tested source commit; this later documentation does not change its binaries.

## Local network research, 2026-11-19

The user's subsequent task is static IDA protocol documentation, with a detailed discovery journal and state diagrams; proxy implementation/filtering feasibility was deferred. Start with [research/protocol/README.md](research/protocol/README.md), its linked reference and JOURNAL.md. Gameplay transport is custom reliable/encrypted **UDP**, while the inspected TCP callers belong to bundled HTTP code. The reference preserves all436 ID/name entries,175 typed incoming RPC registrations,9 raw callbacks and concrete procedure evidence, with explicit schema/semantic gaps. Catalog coverage must not be described as complete knowledge of every server/backend payload.

Ignored raw exports are under out/protocol-647; the647 IDA database is under out/client-647. Retained research tools validate/regenerate from static exports. Rediscover IDA instance IDs and verify the input hash in future sessions. Research creates no runtime dependency, changes no game memory and does not change1.3.0 builds/releases. The detailed protocol work is local; do not automatically publish it or stage pre-existing unrelated dirty research notes.

The current follow-up expands actor layouts for the user's planned proxy. Read research/protocol/ACTOR_LIFECYCLE.md and its journal entry before using historical horse labels:285 consumes the shorter HorseBase and actually uses its appended horse; typed HorseCreateMasterMessage is the larger record. All284 subtypes1–12 now have focused schemas. The native282 handler stops a batch on an unknown player; absent pet motion does not delete a pet, and pet state0 means saddlebag. Local player ID is taken from successful decompressed9/PlayerShared+0, not CPXNetwork+1100. An offline body decoder and synthetic checks are supplied; live filtering/transport termination remain unimplemented and unverified.

The authentication follow-up is in research/protocol/AUTHENTICATION.md, also embedded in the generated reference. Installed launcher2.60.0 app.asar SHA256390abe5340bfc5dc665bd8f5894b3e77af5f3d92cdea105f712d87bfd40f6b20 was inspected as static code only. It emits `-AccessToken="..."`, `-NetworkUserId="..."`, `-LoginQueueToken="..."` and service-origin arguments. Native0x380120 copies access token/base;0x3803E0 and0x380770 request data then ticket over HTTPS Bearer auth, using zero-body POSTs.0x37FB10 copies JSON ticket to StudioInitialize+320, which0x7C1AF0 serializes in login6. Login6's third string is a machine identifier with a Windows MachineGuid fallback, not a proved NetworkLauncherHash consumer. Queue UUID is initializer+944; +960 is the pack archive metadata vector, not a UUID or MetricsGroup. Do not repeat those rejected hypotheses.

The offline datagram_codec.py documents/test-drives the custom8-cycle envelope, header and response2 material extraction, separate from TLS and remembered-session AES-CTR. It has no live process/network/storage access. After the endpoint follow-up the full reference has490 exact procedures,10 diagrams and19 JSON files. Document validation,23 actor grammar samples/1241 truncated prefixes,108 envelope roundtrips/16 header flag combinations and7 login samples/1425 truncated prefixes pass synthetic checks. No credential/session/registry values, live packets, native differential execution, TLS interception, relay/filter or server acceptance were tested. Read the protocol journal for exact methods/addresses and unresolved backend/TLS semantics. Native runtime/build/release assets and unrelated pre-existing research edits remain unchanged; no research commit/push/release was requested or performed.

The continuation resolves device_info via dist/index.js→utils/systeminfo.js and Device-ID via node-machine-id's normalized raw identifier→SHA256 hexadecimal text. That UTF8 hex string is the launcher PBKDF2 passphrase, distinct from the native raw MachineGuid fallback.0x614190 produces login pack records: header/data relative filenames, varu32 byte size and CRC32/ISO-HDLC. All256 checksum-table entries matched; data CRC can be0 when Open's integrity flag is off, while the inspected entry passes1. On success0x7CAF80→0x63DB90 clears the initializer vector.0x7CAF80 code3060/counter<3 schedules state10/countdown10.0;0x7CFC20 applies it and resends login. Known feature-name duplicates are accepted and last value wins. Native HTTP constructor sets minimumTLS1.2, connect10s,total15s; negotiated values remain unknown. New authentication_schemas.py/decode_authentication_payload.py are offline only and share the existing bounded reader through an optional schema registry. Read research/protocol/MISSING_ITEMS.md before claiming the remaining server/TLS/anonymous-field gaps are closed.

Endpoint follow-up: research/protocol/ENDPOINTS.md is embedded in the specification. Packaged dist/.env SHA256a0a02f0fbd0c18da12cef22b628fc267cd11db7de2bd1722e63c185e58d69101 configures API_GATEWAY_ENDPOINT=https://lb-pub.prod.starstable.com/api-gateway/1.0 and API_ENDPOINT=https://lb-pub.prod.starstable.com/proxy-launcher. Formatter drops the gateway path for ServiceBaseUrl, then native builders append api-gateway/1.0/game-server/data and /ticket. Gameplay UDP uses returned game_server_address→initializer+240→0x7C1800→resolver0xA4B7B0, with fallback18971. There was no running SSOClient or matching DNS-cache entry, so no current UDP host/IP was established. Native DSNs configure sentry.io separately; launcher-release-prod.starstable.com is launcher self-update traffic. Static extractor now owns18 code files plus four allowlisted packaged endpoint defaults; it does not export unrelated .env values or inspect live credentials.
