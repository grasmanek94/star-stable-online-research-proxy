# Build validation — version 1.3.0, 2026-11-18

**Client647 compatibility update:** the seven-configuration matrix covers the new discovery code, relocation-masked AOBs and removed version gate. All42 CTest suite executions pass, with27 native runtime scenarios per configuration and the existing113 classifier/168 linked-wrapper cases. Generated VERSIONINFO identity is checked on all35 PE images. A separate file audit runs production discovery against647.349716 without executing or patching game code; all21 hooks,2 globals and15 RTTI identities resolve. See [the repair journal](updates/2026-11-18-client-647.md) and its sanitized JSON evidence. The user has since confirmed core hiding works on client647. Detailed preset/loader/race coverage and new FPS measurements remain unreported. The1.3.0 build matrix reruns the same checks with the new PE version.

**Latest results are fresh builds in the linked repository checkout**, retaining its historical1.1.0 directory name. All seven configurations below passed again here (42 suites). tools/build.ps1 preserves per-configuration validation/ctest.xml and ctest.log; tools/record_validation.py verifies these and the current module/classifier/assembly hashes before generating build-validation.json. Earlier workspace1.2 results are retained separately as build-validation-workspace-1.2-history.json. The earlier source-portability test described below remains separate historical evidence.

**GitHub Actions is disabled by request.** Its configuration is archived at .github/workflows/windows.yml.disabled. The local matrix is complete; no remote CI result is claimed. Optional tools/package_release.py verifies/collects the CPack packages under out/releases/1.3.0. See SESSION_HANDOFF.md for the current repository and commands.

Validated on Windows x64 with Visual Studio 2026, MSVC19.51.36252.0, SDK10.0.26100.0 and CMake4.5.0-rc1. There is no timestamp/version/image-size allowlist; semantic, structure, ownership and exact-restoration checks remain. Exact per-build SHA256, module filenames, private config RVAs, imports and counts are recorded in [build-validation.json](build-validation.json). Rebuilt binaries may have different timestamps/hashes; use their own metadata.

| Adapter | Configurations checked | CTest result per configuration |
|---|---|---|
| PROXY | Release, Debug, RelWithDebInfo | 6/6 passed |
| RESHADE | Release, Debug | 6/6 passed |
| ASI | Release | 6/6 passed |
| PLUGIN | Release | 6/6 passed |

Each checked configuration included:

- **Runtime:** 27 native synthetic install/restore/recovery scenarios covering all21 hooks, thread resumption, partial writes and exception fallback. Linked particle-entry tests exercise native continuation, child-dispatch once, unreadable-object fallback and E9 recovery. New cases accept changed PE identity and relocated globals/vtables/native grass destination, and reject malformed helper/registry semantics, a global into code, duplicate AOBs and duplicate primary RTTI identities before any patch.
- **Presets:** default8 exactly horses/riders/pets,9 exactly horses/riders, immutable all14 preset0, gradual defaults and 4→5 guard transition, sample INI agreement, invalid/missing values and overrides.
- **Classifier:** 113 cases in host-owned fixtures, retaining earlier ownership/category cases and adding particle allowlist, broad/guarded modes, ancestry and protection cases.
- **Generated assets:** committed outputs match canonical offline inputs.
- **Linked assembly:** 168 wrapper executions across preferred/far image bases, including GPR/SIMD/stack ABI preservation and original/hidden paths. PROXY also has12 linked GL forwarder executions; plugin builds contain no GL forwarding assembly.
- **Host:** PROXY compares all368 OpenGL names/ordinals with distinct System32 loading and four contextless GL/WGL calls. Other adapters run the plugin helper covering ReShade registration ABI negotiation/idempotence, ASI/explicit entry aliases and non-game inactivity.

The first optional ReShade assembly-test attempt used a hardcoded proxy map path and failed. The test now derives the target's basename; the complete listed matrix passed afterward. No live game was involved in that failure or the helper checks.

**Standalone source portability:** a CPack source ZIP was extracted into `work/visibility-v1.2 portability/SSO-Visibility-Proxy-1.2.0-source`. Python discovery was explicitly disabled. Both PROXY and PLUGIN Release built, ran all3 native suites, and packaged successfully using the one-command wrapper. This checks C/MASM and C++ adapter portability with spaces in paths, without original-workspace include/library paths. Subsequent source-archive changes were documentation/evidence only; final archive build inputs are compared with the tested snapshot during packaging.

All7 inspected modules import only KERNEL32.dll and USER32.dll. CRT is static. PROXY resolves actual Windows OpenGL lazily by absolute system path. There is no Cheat Engine, Lua, Python, ReShade SDK or third-party loader dependency in the native core/normal build. Python standard library supports optional classifier/freshness tests and maintenance generation. Unicorn is optional for linked assembly tests; a locally installed copy was used without a build-time download.

The read-only diagnostic parses successfully and uses the matching module filename/hash/header schema,14 categories,368-byte config and E9/E8 ownership distinctions. It has not been run against an installed1.2 module because1.2 was not installed. Hash-bound classifier/ASM reports remain in each local build's validation directory; runtime metadata is a symbol map, not a standalone test certificate.

The VS2022 presets and all-adapter/configuration GitHub matrix are provided but a separate VS2022 installation and remote CI runner were not exercised. Actual ReShade/ASI game loading, graphics-context behavior, particle resource lifetimes, races/quests/transitions and1.2 FPS remain live integration work. The plugin helper models the registration ABI; it does not load a real ReShade runtime.

The earlier1.1 proxy was active during the foreground performance capture with all11 flags/18 hooks. That result is separate from these new1.2 filters/adapters. See JOURNAL.md for the0.4307ms sampled particle budget, tail-called-child refinement, exact evidence locations and unresolved performance scope. Tests do not prove crash-free gameplay or arbitrary game-update compatibility.

The earlier source-migration validation record is retained as [build-validation-v1.1-history.json](build-validation-v1.1-history.json). Its DLL RVAs/hashes describe historical builds only.

Native source-input hashes normalize CRLF to LF, matching Git source archives and Windows checkouts consistently. PE binaries and test/report files retain raw-byte SHA256 verification; no executable bytes are normalized. The final source ZIP's normalized input hashes are compared with the tested build inputs. The later player-download request supersedes the old8-file runtime layout: each runtime ZIP now contains exactly the module and INI, and the combined bundle contains exactly8 files. Private metadata/research stays outside player ZIPs. The source archive keeps build inputs and READMEs while excluding research and AI instructions.

**Minimal download verification, 2026-11-18:** all four Release adapters were packaged and passed their6 suites again. Their module hashes are unchanged from the client647 repair; only the ZIP contents changed. Each archive contains exactly2 root files and no documentation, symbols, scripts or metadata. The combined archive contains exactly8 files. The build-only source archive is about106KB and matches every normalized native input hash. It was extracted into a fresh path containing spaces; PROXY and PLUGIN Release each built, passed all3 native suites, verified PE metadata and packaged with Python discovery disabled. No research/documentation path was required. An initial test nested the checkout too deeply for MSVC's file tracker; repeating in a shorter workspace path passed. README-DEVELOPERS.md now recommends a short source path.
