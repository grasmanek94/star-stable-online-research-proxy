# Resume this Star Stable visibility investigation

**Current maintained Git checkout:** [repository handoff](outputs/Star-Stable-OpenGL-proxy-CMake/SSO-Visibility-Proxy-1.1.0-source/docs/SESSION_HANDOFF.md) and [request history](outputs/Star-Stable-OpenGL-proxy-CMake/SSO-Visibility-Proxy-1.1.0-source/docs/REQUEST_HISTORY.md). User requested all work/commits/push/builds there; the historical1.1.0 directory contains1.2.0. Earlier sso-visibility-proxy paths below are snapshots. GitHub Actions is disabled by request through windows.yml.disabled. Use this checkout for future edits/builds and its per-link metadata.

Final request coverage is mapped in [IMPLEMENTATION_STATUS.md](sso-visibility-proxy/docs/IMPLEMENTATION_STATUS.md): all current categories, presets, controls, particle modes, loader targets and documentation, with explicit limits for future game layouts and loader initialization. The refreshed1.2.0 archives include this checklist; native binaries are unchanged by this documentation audit.

**Latest native release 1.2.0:** [source/build instructions](sso-visibility-proxy/README.md), [particle/preset/loader journal](sso-visibility-proxy/docs/JOURNAL.md), [architecture/offsets](sso-visibility-proxy/docs/ARCHITECTURE.md), [loader contracts](sso-visibility-proxy/docs/LOADER_ADAPTERS.md), [build evidence](sso-visibility-proxy/docs/BUILD_VALIDATION.md). Packages: `outputs/SSO-Visibility-1.2.0-all-loaders.zip` and `outputs/SSO-Visibility-Proxy-1.2.0-source.zip`. Default preset8 hides only remote riders/horses/pets; preset0 all14 filters,0–4 aggressive,5–9 guarded,9 riders/horses. F5 enable,F6 restore,F7 reloadINI,Ctrl+Numpad selects/enables presets. PROXY/ReShade/ASI/explicit DLL adapters share native code without CE. Config368 bytes/14 categories/21 hooks supersedes old addresses. New particles/grass preserve native children. New1.2 has isolated validation but no live visual/FPS result. Earlier1.1 proxy was live-captured as described below; statements saying the proxy has never run refer to older delivery stages.

The journal refines the0.4307ms particle-wrapper figure: native children are tail-called, so sampled child stacks generally lack that wrapper frame. It remains an overlapping sampled budget, not promised savings. Old work/proxy and table sources below are historical; build the maintained CMake tree for current artifacts.

**New live proxy performance capture (2026-11-15):** [hiding-enabled performance and cosmetic findings](outputs/Star-Stable-hiding-enabled-performance.md), [evidence ZIP](outputs/Star-Stable-hiding-enabled-evidence.zip). The user confirms essentially the same area, with no substantial location change. All 11 flags and all 18 owned hooks were verified active for the foreground capture (60/60 checks). Recording-window results: 96.3 kernel presents/s versus earlier crowded 63.0, main thread 99.5% of one core, pose about 0.317 versus 3.611 sampled ms/present. World/terrain stays about 3.98 ms/present; collision about 1.28. This is the first live proxy performance capture; exact player/camera activity was not controlled. Trace state, source-layout verification, zero-loss health and the excluded WPR merge tail are documented. Raw ETL is in `outputs/hiding-enabled/`, analysis data in `work/hiding-enabled/`; fresh read-only IDA exports are in `outputs/cosmetic-optimization-evidence/`. No additional optimization patch was applied. Earlier statements that the proxy had never run in SSO describe the older delivery stage.

**Maintained CMake project:** [sso-visibility-proxy/README.md](sso-visibility-proxy/README.md), [architecture/repair guide](sso-visibility-proxy/docs/ARCHITECTURE.md). The standalone source supersedes `work/proxy/` for building. Use `build.cmd` or the CMake presets; no Cheat Engine/game/IDA installation is needed for build or runtime. The original v1 delivery described below is historical. Release/Debug/RelWithDebInfo helper tests pass on VS 2026; per-link metadata replaces old private DLL RVAs. See the newer live1.1 capture and isolated1.2 validation above.

**Historical v1 delivery:** [OpenGL proxy package](outputs/Star-Stable-OpenGL-visibility-proxy-v1.zip), [installation/hotkeys](outputs/Star-Stable-OpenGL-proxy-README.md), and [v5/proxy engineering addendum](outputs/SSO-Visibility-v5-and-OpenGL-Proxy-Handoff.md). The user subsequently requested NPC/category controls and then a native `opengl32.dll` with F5/F6 and Ctrl+Numpad. Source is `work/proxy/`, sharing `work/sso-visibility-categories-v5.c` and `work/visibility-categories-v5-sites.json`. The DLL supports analyzed client645.348067, starts off, preserves category choices across F6/F5, and does not require CE. All native/helper/ABI checks passed; **the proxy has not yet been installed or launched inside SSO**. No FPS benefit is established. Read the addendum before using the older v4 workflow below for newer artifacts.

When reading this inside the extracted proxy's `source/` folder, start with `../README.md` for the delivered DLL. Links naming ZIP archives/raw traces refer to files retained in the original workspace; archives are not recursively nested in this source snapshot. The engineering guides and maintained code retain their relative paths here.

Read **[the exhaustive engineering handoff](outputs/SSO-Visibility-Engineering-Handoff.md)** before editing a table or patching the client. The user explicitly requested this document so a fresh AI session can diagnose future update breakage without reconstructing the conversation.

Portable copy: **[SSO-visibility-maintenance-bundle.zip](outputs/SSO-visibility-maintenance-bundle.zip)**. Extract it with `work/` and `outputs/` intact. It contains this entry point, the handoff, current and historical sources/tables, native exports and evidence with SHA-256 inventory. Game binaries, IDA databases, installed dependencies and raw traces remain separate. `AGENTS.md` also directs a new AI session to these documents.

## Current result

- Working feature: hide other players' riders, horses and pets, while the user's own character, horse and pets remain visible.
- The user confirmed the fixed-address v3 table works, then separately confirmed that the AOB v4 table works on the current client.
- Last explicitly user-confirmed visual table: **[Star-Stable-visibility-AOB-v4.CT](outputs/Star-Stable-visibility-AOB-v4.CT)**. Later CE v5 hook execution was read back in the game; proxy delivery/testing is described above.
- It has independent horse/rider and pet entries. It changes three short-jump displacement bytes in existing non-local fade paths. It does not globally skip Character updates, edit an ignore list or patch chat handlers.
- AOB v4 has no fixed patch RVA, pinned build timestamp or hardcoded restore displacement. It counts all signature matches inside the main module's executable sections, validates branch destinations and helper relationships, and captures exact original bytes for restoration.
- This is update-tolerant, not proof against arbitrary future semantic changes. An update may require re-analysis even if a byte pattern still matches.
- FPS improvement and unchanged chat reception have **not** been established by controlled tests. The confirmed result is client visibility with own actors preserved.

## Start here in a new session

1. Read `outputs/SSO-Visibility-Engineering-Handoff.md`, `outputs/Star-Stable-visibility-AOB-v4-notes.md`, and `outputs/visibility-aob-v4-evidence/confirmed-user-outcomes.json`.
2. Establish the current executable version/hash, running PID/module base and actual patch state. The last addresses/PID in the handoff are historical, not reusable pointers.
3. If using IDA, discover the Official IDA MCP tools, call `list_databases`, and open/attach to the appropriate current database. Read the `reference` tool before guessing ida-domain APIs. Do not reuse a historical MCP instance ID.
4. If signatures fail, inspect the updated native actor update and visibility paths. Do not simply make the patterns broad or disable checks. Verify local-control exclusion and the meaning of the selected branch.
5. Rebuild with `python work/build-visibility-aob-v4.py`. Run `python work/test-visibility-aob-v4.py` from the workspace. The latter uses the installed Lua runtime and mock CE memory, not the running game. See the handoff for paths/dependencies and limits.
6. Ask for a coordinated live check only after a concrete reviewed table exists. Read-back is meaningful only while the user has left the entry enabled; users often toggle it back off before a later read.

## Important locations

Workspace: `C:\Users\Rafal\Documents\Codex\2026-11-15\tr`

Game executable used in this investigation:

```text
C:\Users\Rafal\Desktop\StarStableOnline\Star Stable Online\client\SSOClient.exe
```

Baseline build: `645.348067 / Stellar 645`, SHA-256:

```text
3CEC805521C70B64F1A33C5A0EFA67679B8112DACBE9594AB1B47301B4D3DE8D
```

Core implementation:

- `work/sso-visibility-aob-v4.lua`: maintainable AOB implementation embedded into the table's entries.
- `work/build-visibility-aob-v4.py`: table/standalone-script generator.
- `work/test-visibility-aob-v4.py` and `work/test-visibility-aob-v4-fixture.lua`: isolated AOB/restore/rollback tests.
- `work/read-native-settings.ps1`, `work/read-local-actor-check.ps1`, `work/read-remote-fade-state.ps1`: read-only process inspection helpers. These are pinned to the baseline build and must be reviewed for new versions.
- `outputs/remote-visibility-evidence/`: baseline native instructions, local actor checks, pseudocode and fixed-address validation.
- `outputs/visibility-aob-v4-evidence/`: AOB implementation, tests and confirmation status.

## Approaches to avoid repeating

The earlier table's hide-preference fields at settings offsets `AA`–`AD` wrote successfully but had no visible effect. Their consumer/apply path was not found. The sampler bypass and MatrixAnimation skip did not produce a reported FPS improvement. Do not present those as working optimizations.

Do not hide everything with the CPXPlayerSSO vtable: both the local character and the observed remote characters use it. Do not treat every actor-registry entry as an active actor. Do not interpret a local actor's zero fade field as proof it is hidden; the local path does not use that field the same way.

The user controls gameplay. Earlier instructions were to capture while they play, not play for them. No messages have been sent to other players or developers. The agent generated tables and performed read-only/emulated checks; live patch activation was done by the user in Cheat Engine.
