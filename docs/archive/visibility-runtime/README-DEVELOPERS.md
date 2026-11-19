# SSO Visibility 1.3.0 — developer guide

For downloading, installing and using the plugin, start with the [player README](README.md). This document retains the build and maintenance information.

This linked repository is the maintained checkout. The local directory may still be named `SSO-Visibility-Proxy-1.1.0-source`; the project/build version is1.3.0. [Session handoff](https://github.com/grasmanek94/star-stable-online-quality-of-life-improver/blob/master/docs/SESSION_HANDOFF.md) and [request history](https://github.com/grasmanek94/star-stable-online-quality-of-life-improver/blob/master/docs/REQUEST_HISTORY.md) preserve the final decisions and research context. GitHub Actions is currently disabled by request; its configuration is retained as `.github/workflows/windows.yml.disabled`.

[Update1.2.2](https://github.com/grasmanek94/star-stable-online-quality-of-life-improver/blob/master/docs/releases/1.2.2.md) repairs client647 compatibility, removes the PE version gate and discovers moved helpers, globals and vtables. The [repair journal](https://github.com/grasmanek94/star-stable-online-quality-of-life-improver/blob/master/docs/updates/2026-11-18-client-647.md) records the evidence and future repair procedure.

A Windows x64 visibility controller for analyzed Star Stable client **647.349716**, with a shared native C17/MASM core and four loader adapters. No Cheat Engine, Lua, game files, IDA database, downloaded SDK or Python package is required to build or run it.

**Default preset 8 hides other players' riders, horses and pets only.** Hiding starts off; F5 enables the selected preset, F6 restores native code. Ctrl+Numpad0 applies all supported filters; Ctrl+Numpad1–9 applies editable presets. Defaults 0–4 are aggressive and 5–9 use gameplay guards. F7 reloads `SSOVisibility.ini`. Keep NumLock on.

The new optional filters cover allowlisted ambient particles, broad particle suppression and detail grass. They preserve native child traversal. The broad option can hide quest/race effects and fog; preset 8 leaves these filters off. Read [the user guide](https://github.com/grasmanek94/star-stable-online-quality-of-life-improver/blob/master/docs/USER_GUIDE.md) for the preset ladder and its limits.

## Build on Windows

Install Visual Studio 2022 or 2026 / Build Tools with **Desktop development with C++**, MSVC x64 tools, MASM and a Windows 10/11 SDK. Use CMake 3.25+ for VS 2022, or 4.2+ for VS 2026. The wrapper discovers the installed tools using `vswhere`.

Extract source into a short path such as `C:\Projects\SSO` to avoid Windows compiler path-length limits. Spaces in the path are supported.

```powershell
.\build.cmd                                      # OpenGL proxy, Release, tests
.\build.cmd -Loader RESHADE -Package              # SSOVisibility.addon64
.\build.cmd -Loader ASI -Package                  # SSOVisibility.asi
.\build.cmd -Loader PLUGIN -Package               # SSOVisibility.dll
.\build.cmd -Configuration Debug
.\build.cmd -Configuration RelWithDebInfo
.\build.cmd -Preset vs2022-x64 -Package
```

The CMake cache option is `SSO_HOST=PROXY|RESHADE|ASI|PLUGIN`. The proxy is C17/MASM; plugin adapters add a small C++17 ABI shim. All use the same classifier, hooks, INI and controls. They link the CRT statically.

All PE outputs, including helper EXE/DLLs, embed the product name **Star Stable Online Frame Rate / Performance Fixer**, repository URL in FileDescription, author **grasmanek94**, project version and **2026–current UTC build year** copyright. CMake generates the RC at build time, and the wrapper verifies the linked properties. See [PE metadata and generation](https://github.com/grasmanek94/star-stable-online-quality-of-life-improver/blob/master/docs/PE_METADATA.md).

For VS 2026, outputs are under `out/build/vs2026-x64/bin/<configuration>/`; other adapters use `vs2026-x64-reshade`, `-asi` or `-plugin`. VS 2022 uses corresponding `vs2022` names. Runtime ZIPs are under `out/packages/<LOADER>/<configuration>/`. The wrapper never installs into or launches a game.

Direct CMake is also supported:

```powershell
cmake --preset vs2026-x64-reshade
cmake --build --preset vs2026-reshade-release
ctest --preset vs2026-reshade-release
```

Open Folder in Visual Studio and select a preset, or use the Ninja preset from an x64 MSVC Developer Command Prompt. Ninja's `SSO_HOST` can be overridden at configure time. MSVC x64 is required for SEH and MASM; MinGW, clang-cl, ARM64 and x86 are rejected.

## Loader choices

| Build | Artifact | Initialization |
|---|---|---|
| PROXY | `opengl32.dll` | First forwarded OpenGL call; absolute System32 forwarding |
| RESHADE | `SSOVisibility.addon64` | ReShade `AddonInit` / `AddonUninit` and registration ABI |
| ASI | `SSOVisibility.asi` | An `InitializeASI`-capable loader, outside its loader lock |
| PLUGIN | `SSOVisibility.dll` | Host calls `SSOVisibilityInitialize` / `SSOVisibilityShutdown` |

Install **one adapter**. If ReShade already owns `opengl32.dll`, use the addon rather than replacing ReShade's DLL. Arbitrary shader plugins do not share a universal ABI: a loader must support one of the exported entry contracts. LoadLibrary-only ASI loaders require explicit initialization support. See [loader contracts and official references](https://github.com/grasmanek94/star-stable-online-quality-of-life-improver/blob/master/docs/LOADER_ADAPTERS.md).

## Structure

```text
src/host.c                    Common lifecycle, log and foreground hotkeys
src/presets.c                 INI parsing and built-in presets
src/proxy_main.c              System32 OpenGL forwarding adapter
src/hosts/plugin_host.cpp     ReShade / ASI / explicit DLL ABI adapter
src/visibility/               Patch lifecycle and shared classifier
src/asm/visibility_hooks.asm  21 reviewed native wrappers
config/SSOVisibility.ini       Editable default preset bank
data/                         Canonical hook windows, layout, particle policy, exports
generated/                    Committed build inputs; no generator needed to build
tests/                        Native helper, classifier and linked assembly checks
tools/                        Build, metadata and read-only diagnostic scripts
docs/                         Guides, architecture, journal and repair evidence
out/                          Builds and packages (excluded from source ZIP)
```

## Verification

`BUILD_TESTING=ON` supplies three native suites: synthetic install/restore/recovery, preset configuration, and either OpenGL forwarding or plugin lifecycle. Optional Python 3.10+ adds classifier and generated-asset checks. Optional Unicorn executes the actual linked MASM code:

```powershell
python -m pip install -r tests/requirements.txt
.\build.cmd -AsmTests -Package
```

Unicorn and Python are test tools only. Normal builds do not fetch dependencies. Generated files are committed. For intentional metadata changes, edit `data/` and run `python tools/generate_assets.py`, then `--check`. Wrappers are reviewed source, not generated.

Builds emit a matching map and `validation/proxy-symbols.json` with the DLL hash and current private RVAs. The read-only diagnostic refuses a loaded module that does not match. Never reuse a previous build's config address. [BUILD_VALIDATION.md](https://github.com/grasmanek94/star-stable-online-quality-of-life-improver/blob/master/docs/BUILD_VALIDATION.md) records the exact checked configurations and limits.

The older 1.1 proxy was measured active in a live foreground capture. **The user confirmed the client647 repair works in-game on2026-11-18. Full particle/preset/loader coverage and new measured FPS gains remain unreported.** The 0.4307 sampled ms/present particle cost motivates the experiment; it is not a promised saving. There is no timestamp/version/image-size allowlist. Relocation-masked AOBs, helper fingerprints, RIP-relative global discovery and exact class RTTI allow address changes while retaining ownership and registry checks. Compiler, control-flow and object-layout changes can still require repair; matching bytes do not prove live gameplay safety.

## Packaging and maintenance

```powershell
cpack --config out/build/vs2026-x64/CPackConfig.cmake -C Release
cpack --config out/build/vs2026-x64/CPackSourceConfig.cmake
```

Player ZIPs contain exactly the chosen adapter and `SSOVisibility.ini`, directly at the archive root. The combined ZIP contains four named adapter folders, each with those two files. Private symbol metadata, maps and diagnostic scripts remain in the repository/local build; none is required to run the plugin.

The separate source ZIP includes the CMake/native/generated/config/test/tool files plus the English, Polish, Dutch and developer READMEs. It excludes AI instructions, research archives, journals, handoffs, client binaries/databases, raw captures and build outputs. Full engineering history remains in this repository.

After building all four Release adapters with `-Package`, commit the intended source changes and run `python tools/package_release.py --create-source`. This filters a Git snapshot to the build files, verifies every two-file runtime ZIP against private metadata beside its matching local build, and creates the source ZIP and eight-file combined bundle under `out/releases/1.3.0/`. The separate manifest stays outside the player ZIPs. `--preset vs2022-x64` selects matching VS2022 metadata. Alternatively use CPack's source config, which also excludes research and AI notes, then run the collector without `--create-source`. Optional `python tools/record_validation.py` records matching per-configuration CTest evidence after the seven-build matrix. The native build and ordinary CPack packaging do not require these Python utilities.

Start maintenance with [ARCHITECTURE.md](https://github.com/grasmanek94/star-stable-online-quality-of-life-improver/blob/master/docs/ARCHITECTURE.md) and [JOURNAL.md](https://github.com/grasmanek94/star-stable-online-quality-of-life-improver/blob/master/docs/JOURNAL.md). Earlier actor/NPC analysis is retained in [REVERSE_ENGINEERING.md](https://github.com/grasmanek94/star-stable-online-quality-of-life-improver/blob/master/docs/REVERSE_ENGINEERING.md); its old DLL hashes and absolute paths are historical.

The [request-by-request implementation audit](https://github.com/grasmanek94/star-stable-online-quality-of-life-improver/blob/master/docs/IMPLEMENTATION_STATUS.md) maps the final feature requests to their code and documentation, including the precise update and loader compatibility boundaries.

## Local client archive for update comparisons

After each game update, save the executable before the next update replaces it:

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File tools/cache_client.ps1 -ClientPath "<game folder>/client/SSOClient.exe"
```

The default cache is Documents/Codex/cache/SSO-FPS/clients, outside this repository. Each version/SHA256 folder contains SSOClient.exe and a local manifest with file/product versions, PE identity, size, hash, original path and capture time. Hashing/copying holds a read lock against updates; copies are verified and identical files are reused. Existing mismatched archives are never overwritten. Backups are offline analysis inputs; the helper never executes or uploads them. Keep this cache when cleaning build outputs. Use the newest archived binary and its predecessor in IDA for function/structure differences; update semantic proofs as well as AOBs. The native runtime does not need this helper or cached files.
