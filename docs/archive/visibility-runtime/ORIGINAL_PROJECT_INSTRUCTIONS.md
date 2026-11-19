# Project notes

All PE targets get build-time VERSIONINFO via cmake/VersionResources.cmake and cmake/GenerateVersionResource.cmake. Preserve the product/author/repository identity and automatic2026-to-current-UTC-year range. tools/build.ps1 verifies every PE output with tools/verify_pe_metadata.ps1; see docs/PE_METADATA.md. Resource changes relink modules and require fresh matching symbol/test metadata.

This linked repository is now the maintained checkout, despite the historical1.1.0 folder name. Start new sessions with docs/SESSION_HANDOFF.md and docs/REQUEST_HISTORY.md. Keep all new builds/packages under ignored out/. The old workspace sso-visibility-proxy tree is a snapshot, not the authoritative future editing location.

GitHub Actions is disabled at the user's explicit request. Preserve .github/workflows/windows.yml.disabled; do not re-enable it without a new user instruction. Local builds/tests remain available. research/legacy-ce is archival and must not become a runtime dependency.

docs/IMPLEMENTATION_STATUS.md is the final request-by-request source/delivery audit. Keep it current when changing category scope, presets, adapters or update compatibility. It distinguishes implemented features from live validation and from unsupported arbitrary future layouts/loaders.

This is the standalone Windows x64 CMake source for SSO Visibility 1.3.0: OpenGL proxy, ReShade addon, InitializeASI and explicit DLL adapters share one core. Start with README-DEVELOPERS.md, docs/ARCHITECTURE.md, docs/LOADER_ADAPTERS.md and docs/JOURNAL.md. The historical reverse-engineering handoffs are retained in docs/; old workspace paths and DLL addresses there are not current build metadata.

Current user defaults: preset8 selects only remote riders, horses and pets, with master off until F5 or preset selection. Preset0 is immutable all14 supported filters; 0–4 aggressive, 5–9 guarded, preset9 riders/horses only. Preserve these defaults and F5/F6/F7 semantics. New particle entry must retain child dispatch and replay the exact stolen instruction on native passthrough. Config is368 bytes,14 categories,21 ordered hooks; old metadata is incompatible.

Build with build.cmd, or use the VS 2026/2022 presets. Native tests run in helper processes and must keep their assertions enabled in Release. The shipping DLL must not define SSO_PROXY_TESTING. Preserve own-actor checks, pass-through error behavior, exact restoration and the ordered wrapper/AOB contract.

Generated assets are committed. Edit their canonical inputs in data/ and run tools/generate_assets.py; src/asm/visibility_hooks.asm and tests/fixtures/baseline.inc are reviewed maintained inputs. The generator needs only Python's standard library and must not depend on Cheat Engine, a game installation, absolute researcher paths or network downloads.

Use each newly built DLL's own map/validation/proxy-symbols.json, never a historical g_config RVA. Standard tests do not establish live gameplay safety or FPS improvement. Do not restart or play the user's game as part of a build task.

Client647 repair: docs/updates/2026-11-18-client-647.md supersedes historical645 PE/RVA guards. No timestamp, version string or exact image-size allowlist remains. data/client-layout.json owns helper fingerprints, RIP-derived globals and exact RTTI identities; numeric RVAs are reference/fixture data. Preserve unique AOB, helper relationship, registry layout, ownership and exact-restoration checks. The optional sso_runtime_tests --inspect-client mode audits a file using production discovery without executing or patching game code. The user confirmed the client647 repair works on2026-11-18. Specific full-preset/loader coverage and measured FPS gains were not supplied.

Player delivery policy: README.md is the simple public install/control/preset guide, including the account-ban warning and releases URL. The previous technical README is README-DEVELOPERS.md. Runtime ZIPs/install contain exactly the adapter and INI; combined ZIP has8 files in4 loader folders. Keep metadata/maps/diagnostics local. Source ZIPs include build files and the two READMEs, excluding AGENTS, docs/research/journals/handoffs and research/ archives. Preserve that history in Git; do not delete it to simplify downloads. tools/package_release.py --create-source applies the committed-source allowlist. This later instruction supersedes the earlier8-file runtime release layout.

Version1.3.0 adds Polish/Dutch player guides with a shared language bar. Preserve warning/key/preset equivalence. tools/cache_client.ps1 creates local version/SHA256 executable archives outside this Git repository. Binaries/manifests from the game cache must never enter Git or release/source ZIPs. Cache the current executable only after successful release publication, per user order.
