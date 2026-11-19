# Requested feature audit — 2026-11-15

Current1.3.0 delivery adds a simple player README, Polish/Dutch translations with language navigation, and the explicit account-ban warning. Runtime ZIPs contain only module/INI pairs; source ZIPs include build files and multilingual/developer READMEs. The user confirmed the client647 repair works on2026-11-18. tools/cache_client.ps1 supports local version/hash archives for future offline update comparisons. These later decisions supersede older packaging/live-status statements below; native visibility policy is unchanged.

Repository delivery now also preserves REQUEST_HISTORY.md, SESSION_HANDOFF.md, additional actor/cosmetic/performance evidence and historical CE work. Fresh builds/packages are generated in this linked checkout under out/. GitHub Actions is disabled by the user's later instruction; its archived .yml.disabled file must stay inactive until requested otherwise. The feature audit below remains the same; current build identities are in build-validation.json.

This is a source and delivery audit of the final requested feature set, after the user asked whether everything was implemented and documented. The implementation is present in version 1.2.0. No unfinished feature stub was found. This audit does not claim new live testing or a measured saving. Current binaries are unchanged; this update adds a traceable requirements checklist to the documentation and packages.

## Controls and settings

| Final request | Implementation | Documentation |
|---|---|---|
| Standalone native feature without Cheat Engine | C17/MASM core; imports only Windows libraries; common code in src/visibility and src/host.c | README.md, BUILD_VALIDATION.md |
| F5 enables, F6 restores/unhides | Foreground keys in src/host.c; VisibilityEnable/Disable in src/visibility/visibility_runtime.c; exact owned-byte restoration | USER_GUIDE.md, ARCHITECTURE.md |
| Configurable presets instead of per-category hotkeys | src/presets.c reads config/SSOVisibility.ini; one switch per category per preset | USER_GUIDE.md |
| Ctrl+Numpad0 hides everything currently supported | Immutable preset0 sets all14 category flags; INI cannot override this preset | USER_GUIDE.md, JOURNAL.md |
| Presets1–9 progressively reduce hiding | Built-in defaults and explicit shipped INI; 4→5 adds gameplay guards while keeping the same category flags | USER_GUIDE.md, preset table below |
| Presets0–4 aggressive;5–9 gameplay-friendly | ProtectGameplay off for0–4 and on for5–9; Coins/QuestMarkers/NpcText off for5–9 | USER_GUIDE.md, ARCHITECTURE.md |
| Preset8 is the default, hides remote horses/riders/pets | DefaultPreset=8 in INI, built-in bank default8, common selected-preset initial value8, startup applies that bank entry | USER_GUIDE.md, README.md |
| Preset9 only remote horses/riders | Only PlayerHorses/PlayerActors enabled in built-in and shipped preset9 | USER_GUIDE.md |
| NPC models may be hidden; keep collision and known race cues | NPC visual/animation call sites; collision/checkpoint routines unpatched; conservative gameplay ancestry checks | ARCHITECTURE.md, JOURNAL.md |
| Preserve own rider, horse and pet bodies | Local control and owner safe-reference checks, continued ancestry protection | ARCHITECTURE.md, earlier engineering handoff |
| Live-edit settings without a rebuild | F7 reloads INI and reapplies selected preset, retaining master state; missing/invalid keys use defaults | USER_GUIDE.md |

Startup still has the master off, as in the earlier proxy. F5 enables default8; pressing a Ctrl+Numpad preset selects and enables it directly. F6 retains the selected preset for the next F5. F7 does not select a different preset merely because DefaultPreset was edited. Defaults5–9 are intended for ordinary gameplay; manual INI edits can deliberately change their protection and cue settings.

## Every supported category

All14 categories have native decision paths, a config flag, an INI key for every editable preset, and diagnostic metadata. The ordinary category classifier is in src/visibility/classifier.inc; assembly adapters are in src/asm/visibility_hooks.asm. Hook windows and indexes are in data/visibility-sites.json.

| INI key | Default presets selecting hide | Native implementation |
|---|---|---|
| PlayerHorses | 0–9 | Horse ownership role; remote native fade path and model classification |
| PlayerActors | 0–9 | Remote player ownership role and native fade path |
| PlayerPets | 0–8 | Pet owner classification and native fade path |
| NpcPets | 0–6 | Pet/NPC animal role, name heuristic for shared CPXQuestControl models |
| NpcActors | 0–5 | NPC/unclassified model role, LOD/model/animation decisions |
| NpcHorses | 0–6 | NPC horse role, name heuristic for shared CPXQuestControl models |
| StandaloneHorses | 0–6 | Unowned riderless CPXHorse role |
| SaleHorses | 0–6 | CPXHorseForSale/model role plus dedicated sale draw call |
| Coins | 0–2 | Coin/shilling/collectible roles plus dedicated collectible visual call |
| QuestMarkers | 0 | Question/exclamation visual roles and three dedicated marker calls |
| NpcText | 0–1 | Three dedicated floating/speech-text calls |
| AmbientParticles | 0–7 | Exact ambient allowlist and protected ancestry, extended-entry/legacy-gate adapters |
| AllParticles | 0–3 | Broad particle mode, same two particle adapters; takes precedence over ambient |
| DetailGrass | 0–7 | Typed viewport detail-grass void helper call |

The flags express policy; they are not promises that every object in a category is selected. Own bodies, checkpoint protection, conservative ancestry checks, name ambiguity, invalid references and other native gates can keep objects visible. NPC species are inferred from names, not an authoritative recovered species field. “Everything” means every implemented filter; arbitrary terrain, buildings, weather subsystems, trails and flares are not separate new filters in this release. City file streaming and object creation continue.

## Particle research and implementation

| Request | Implemented result |
|---|---|
| Investigate the roughly0.43ms particle budget | Read-only IDA wrapper/core/cleanup/manager research; normalized registry census; stack-cost refinement in JOURNAL.md |
| Cosmetic particle option | AmbientParticles exact-name allowlist with generation/ancestry validation and known gameplay protection |
| An intentionally broad alternative | AllParticles with ProtectGameplay=0, included in preset0 and aggressive defaults1–3; may remove cues/fog/own cosmetics |
| Retain child traversal | Extended emitter hook18 tail-jumps to native children once when selected; legacy hook19 forces only its native visual gate false |
| Additional supported visual fluff | DetailGrass through hook20; parent viewport behavior retained |
| Include the code in the CMake tree | Shared classifier, runtime, MASM wrappers and generated data are compiled for all four adapters |
| Thorough notes for future repairs | JOURNAL.md, ARCHITECTURE.md, research/particles exact plans/disassembly/pseudocode/census, historical handoffs |

The0.4307 sampled ms/present is an observed overlapping wrapper budget, not guaranteed recoverable time. GPU resource/tail lifetime and resume behavior need live checks. The feature does not invent game cleanup calls or disable entire quest/obstacle updates to force disappearance.

## Build and loader choices

| Request | Implemented result |
|---|---|
| Professional standalone Windows CMake project | Explicit source groups and targets; shared compiler settings; committed generated inputs; config/data/tests/tools/docs layout; install and CPack rules |
| Easy Windows builds | build.cmd discovers VS/MSVC/CMake through tools/build.ps1; VS2022/2026 and Ninja presets; static CRT |
| Compile as standalone OpenGL proxy | SSO_HOST=PROXY / -Loader PROXY; opengl32.dll forwards368 exports to absolute System32 library |
| Compile as ReShade addon | SSO_HOST=RESHADE / -Loader RESHADE; SSOVisibility.addon64 with registration and AddonInit/Uninit |
| More generic loader support | ASI and PLUGIN targets; InitializeASI and explicit SSOVisibilityInitialize/Shutdown exports; shared implementation |
| Portable source and deliverables | Build-only source ZIP; per-adapter2-file runtime ZIPs (module/INI); combined8-file four-adapter bundle; private metadata/maps remain beside local builds |

The normal build has no Cheat Engine, game, IDA, Python, ReShade SDK or network dependency. Optional Python/Unicorn are isolated test/maintenance tools. Loader contracts, official reference links and placement instructions are in LOADER_ADAPTERS.md.

## Update compatibility and other practical boundaries

**AOB scanning is implemented; automatic compatibility with arbitrary future game updates is not.** Version1.2.2 searches executable sections for unique relocation-masked windows, decodes native helper targets, validates helper code/relationships and native registry structure, discovers RIP-relative globals and exact primary RTTI vtables, and preserves full observed originals. Timestamp, version-string and exact image-size gates are removed. Client647.349716 passes the production-discovery file audit and read-only live local ownership checks. Compiler/semantic/object-layout changes can still require repair; a match does not establish live visual/FPS safety. The current21 site plans and future repair procedure are in data/ and updates/2026-11-18-client-647.md. The earlier AOBv4 table and its user-confirmed behavior remain separate historical artifacts.

**Generic entry contracts are implemented; a universal shader-plugin ABI does not exist in this project.** ReShade must support the documented addon initialization/registration contract. ASI must call InitializeASI outside DllMain, or another host must invoke the explicit entry. A loader that only maps the DLL will not start this controller. This is a documented integration boundary, not a placeholder entry point.

No guarantee of crash-free gameplay, exhaustive race-asset classification or FPS improvement is made. Collision routines are unpatched, but skipping visual/skeletal work can affect model-dependent behavior and needs live checks. Broad particles intentionally relax visual cue protection. The latest instruction to choose default8 selects a policy; it does not silently install/reload the new module into the user's already-running game.

## Documentation and evidence inventory

- README.md: simple player introduction, releases link, install, controls, presets and account-ban warning.
- README-DEVELOPERS.md: renamed technical README with build commands, adapters, dependencies, source layout and packaging.
- USER_GUIDE.md: installation, all controls, full default ladder, INI keys and troubleshooting.
- ARCHITECTURE.md:368-byte config,14 categories,21 hooks, ownership/cache/epoch logic, entry replay, ABI/restoration and update repair.
- JOURNAL.md: discovery path, IDA APIs, RVAs/identity, census/policy, rejected approaches, implementation decisions and outstanding integration work.
- LOADER_ADAPTERS.md: exact initialization/registration/shutdown contracts and compatibility limits.
- research/particles/: full new-site windows and disassembly/pseudocode exports plus normalized census; data/ has canonical runtime inputs.
- REVERSE_ENGINEERING.md and SSO-Visibility-Engineering-Handoff.md: earlier player/horse/pet/NPC work, failed experiments, profiling and baseline addresses.
- BUILD_VALIDATION.md / build-validation.json: isolated test matrix, module identities and limits; older results retained as history.

Earlier sampling experiments and Cheat Engine tables are historical research, not runtime dependencies or switches silently carried into this DLL. The latest preset instructions supersede the old individual-category hotkeys and original all-category startup selection. The recorded same-area performance capture and trace evidence remain in the original workspace; raw ETLs/client binaries/IDBs are intentionally outside the portable source archive.
