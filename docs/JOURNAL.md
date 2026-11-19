# Engineering journal

## 2026-11-15 — rewrite as a completely new access request

At the user's request, rewrote the ready-to-send email as a new Article 15 request, removing references to earlier requests, response dates and ticket numbers. Broadened the opening to all personal data concerning the requester, added general account/game/customer records, and retained the additional conditional PC technical/security scope. The time reference is now receipt of this new request, including retained historical records. The user will send the email themselves. Saved a newly named plaintext draft and updated the older download path with the same content to avoid sending the superseded follow-up wording. No account action, email, code change or live game action was performed.

## 2026-11-15 — targeted data-access follow-up draft

The user reported that a previous data-access reply omitted the PC/security information discussed and asked precisely what further data could be requested. Clarified that static code capability is not proof of collection/transmission/retention for the particular account; the reply itself was not inspected. Checked GDPR Articles12/15, current Star Stable privacy guidance, EDPB Guidelines01/2022 including the directly relevant gaming anti-cheat Example37, CJEU copy/recipient guidance and the Dutch authority's access-request guidance.

Prepared research/DATA_ACCESS_FOLLOWUP.md with a reusable, conditional category-by-category request for actual personal technical/security telemetry, window/process/module observations, debugger indicators, account/session linkages, crash records and derived assessments. Additional fields not established by the code review are explicitly requested only if held. Included questions on missing/deleted/transient/withheld categories, access explanations and permitted restrictions. The template seeks the user's recorded data and intelligibility, not a global detector database, source code or packet-forgery material. No absolute guarantee of disclosure or finding of a legal violation is made. No email/request/account action was performed, no new live game analysis occurred and code/defaults/workflow remain unchanged.

## 2026-11-15 — integrity-report data-category follow-up

The user asked whether integrity reporting specifically identifies CE or the OpenGL proxy and what is sent. Continued only with a high-level static privacy/data-category review. Re-discovered the current IDA database, confirmed its baseline hash and inspected the window callback, which reads window titles and class names. Clarified prior evidence: the reviewed path serializes process-match indications, window-related result data, debugger indication and module/certificate metadata, then hands the result to the connection interface. This does not establish a complete process/window inventory upload, a complete decoded report, successful delivery, backend retention or an account-specific verdict. No active detector lists, protocol layout, activation rules, bypass sites or evasion instructions were recovered/exported for this follow-up.

Appended the distinctions and official privacy-contact context to research/PROTECTION_REVIEW.md. No live report was triggered/intercepted, no game code/defaults/binaries changed, no messages were sent and no account action or purchase occurred. These remain local documentation updates; the disabled workflow is retained.

## 2026-11-15 — read-only protection and account-risk review

The user asked for more IDA decompilation before funding Star Rider, concerned that earlier CE use could put the current account at risk. Re-discovered the current official IDA MCP database, confirmed its input hash against the installed on-disk645.348067 executable, reviewed504 imports/41190 strings and decompiled11 focused routines. No live debugger attachment, active protocol probe, packet interception, game/mod patch, account query or gameplay took place.

The decompiled network-related worker includes debugger indication, process-name matching and top-level window enumeration. Its module helper collects loaded client-module names and embedded certificate serial metadata. Results are serialized and handed to a connection/send interface. Separately inspected debugger sites included ordinary runtime/assertion diagnostics, and a process-launch path belonged to Crashpad. These distinctions avoid mistaking API imports or crash diagnostics alone for ban evidence. The integrity terminology does not establish code-section hashing in the reviewed path.

Documented high-level evidence, confidence limits, current official policy links and a user-sendable authorization request in research/PROTECTION_REVIEW.md. No detector sites, packet layouts, matching lists, disabling instructions or evasion recipes are supplied. Static code cannot reveal the user's account flags, past report delivery/retention or future sanctions. A second account does not authorize testing; the practical recommendation is to obtain written permission/approved testing arrangements before purchasing membership specifically for this work. The ReShade loader variant still applies native hooks and has no automatic approval under the ordinary ReShade visual-tool exception.

This entry and report are local documentation updates. No purchase, account creation, support message or external publication was performed for this review. Feature defaults, native binaries and the disabled workflow are unchanged.

## 2026-11-15 — linked repository integration and builds

The user requested syncing all current features, documentation, instructions, journals, requests and research work into the existing linked Git repository, making appropriate commits, pushing, and building in that checkout. The requested directory retains its historical SSO-Visibility-Proxy-1.1.0-source name; the project version remains1.2.0. Remote is grasmanek94/star-stable-online-quality-of-life-improver, branch master. The checkout was initially clean at c2b709c and fetched with no remote divergence. It is now the maintained editing location; the previous standalone workspace tree is a snapshot.

Synced the complete78-file maintained project, then added REQUEST_HISTORY.md and SESSION_HANDOFF.md, indexed actor v4/v5/cosmetic IDA exports, copied performance reports/figures and selected normalized timing/trace-health evidence, and preserved legacy CE source/table work separately under research/legacy-ce. Raw ETLs, game/IDA binaries and heap censuses remain outside the repository. No installed game module was replaced and no gameplay was performed.

Fresh local builds in this checkout covered PROXY Release/Debug/RelWithDebInfo, RESHADE Release/Debug, ASI Release and PLUGIN Release. All6 suites passed in each (42 suite executions). The build wrapper now preserves per-configuration CTest JUnit/log reports. Optional standard-library maintenance tools record current module/report identities and collect verified CPack source/runtime archives, without adding a normal build/runtime dependency. Current hashes/results supersede private addresses from the earlier workspace build; that record is retained as history.

During integration the user explicitly requested disabling the GitHub workflow. Its YAML is preserved as .github/workflows/windows.yml.disabled so Actions does not discover it. No automatic or manual workflow is enabled; re-enabling requires an explicit future request. This supersedes earlier notes that described an active CI matrix. Local helper validation remains distinct from live1.2 game/loader/FPS checks.

## 2026-11-15 — final request coverage audit

The user asked whether every requested feature was implemented and documented, independently of live testing. Reviewed the common host, built-in/INI presets, classifier,21 wrappers/AOB plan, CMake adapters, documentation and delivered archive identities. No missing final-scope implementation stub was found. Added IMPLEMENTATION_STATUS.md to map each request to the actual implementation, every category/default preset and its documentation. Linked it from the project entry points and included it in source/runtime deliveries. No native code, preset default, binary or game state changed during this audit.

Preserved two explicit boundaries: unique AOB scanning still rejects unsupported PE/object layouts rather than claiming arbitrary-update compatibility; generic loader support requires ReShade, InitializeASI or explicit initialization contracts rather than claiming every shader plugin can load it. These are documented limits, not deferred unimplemented entry points. Gameplay guards remain conservative heuristics, and broad particles intentionally permit cue removal. New live visual/lifetime/loader/FPS checks remain separate from implementation completeness. The older individual category chords and all-category default were superseded by the final preset requests, with default8 retained.

## 2026-11-15 — version 1.2.0: particles, presets and loader adapters

### Final requested behavior

The user requested a particle experiment after the all-hiding performance capture, including an intentionally broad option, an editable preset bank, and ReShade / ASI / generic loader builds. Later clarifications supersede the initial proposal that preset1 be gameplay-preserving: **0–4 are aggressive, 5–9 are gameplay-friendly defaults, and preset8 is the default selection**. Preset8 hides only remote riders, horses and pets; preset9 only remote riders and horses. NPC models may be hidden; collision and race cues should be preserved in the ordinary presets. Ctrl+Numpad0 must select every filter currently available and is not configurable. Presets1–9 are configurable.

The result is native C17/MASM plus a small C++17 loader shim, with no CE dependency. F5 enables the selected preset, F6 restores original code, F7 reloads the INI. Selecting any Ctrl+Numpad preset applies and enables it. Startup remains master off, selected preset8. Do not silently change startup to all categories or broad particles. No new module was installed into the running game during this implementation.

### Evidence and baseline identity

The preceding foreground recording is `outputs/Star-Stable-hiding-enabled-performance.md` and `outputs/Star-Stable-hiding-enabled-evidence.zip` in the original workspace. Raw ETL: `outputs/hiding-enabled/starstable-hiding-enabled.etl`; processing: `work/hiding-enabled/`. The user confirmed essentially the same area, without substantial relocation. All11 original categories and all18 owned hooks were active; 60/60 foreground checks passed. Use the 60.877-second recording interval, excluding WPR's merge tail in the full81.55-second ETL.

Recording-window results were 96.3 kernel presents/s versus earlier crowded63.0, main thread99.5% of one core, scheduled GPU31.3%; animation/pose3.611→0.317 sampled ms/present, terrain/world3.996→3.976, collision1.659→1.283. Player movement/camera/population were not a controlled A/B. The old installed proxy's exclusive sample share was0.414%. Do not attribute the entire change in presents to one flag or claim a controlled FPS gain.

The extended-particle wrapper at RVA0x10AEC0 had0.4307 sampled ms/present; its core0x10AF80 had0.1756 nested within it. **Refinement of the initial report:** disassembly proves wrapper0x10AEC0 restores its native frame and tail-jumps into children. Child work therefore generally lacks the wrapper frame in a normal sampled stack. The initial wording “including children” was overly conservative. Keep both numbers overlapping, not additive, and do not infer that exactly0.4307ms is recoverable. The allowlist covers only part of active particles; new wrapper/classifier overhead and GPU lifetime behavior require measurement.

Client645.348067 / Stellar645: SHA256 `3CEC805521C70B64F1A33C5A0EFA67679B8112DACBE9594AB1B47301B4D3DE8D`, PE timestamp6AEB5BD3, image size014AF000, preferred base0x140000000. All game addresses below are RVAs; IDA exports use preferred VAs. Historical runtime PID1168, module bases and heap pointers are not reusable. DLL-specific hashes/config RVAs are in each build's `validation/proxy-symbols.json`, not these game RVAs.

### Read-only IDA investigation

The Official IDA MCP database was queried through ida-domain Python. Discover a fresh database/instance in future sessions; the investigation instance ID is not a durable interface. Read the server's reference before using APIs. Methods used: `db.functions.get_at`, `get_pseudocode`, `get_disassembly`, callers/callees, `db.bytes.get_bytes_at`, `get_qword_at`, xrefs and strings. Xref objects use `from_ea` (an example suggesting `frm` was incorrect); string items use `address`. The disassembly string list did not contain instruction addresses, so plans were checked with raw bytes and function start/end, not inferred from list positions alone.

Read-only exports are retained under `docs/research/particles/`:

| RVA | Investigation role |
|---|---|
| 0x10AEC0 | CPXParticleSystemEx visual wrapper; full disassembly and 179-byte patch plan |
| 0x10AF80 | Extended emitter core: active checks, setup/simulation/submission path |
| 0x112970 | Legacy CPXParticleSystem method, full disassembly and gate plan |
| 0x111650, 0x111DE0, 0x111F00 | Legacy/extended particle helper paths |
| 0x10CCB0, 0x111BD0 | Emitter state/setup helpers |
| 0x10D440 | Existing resource/backend cleanup path |
| 0x6FAAE0 | Manager submission queue, 128-byte records |
| 0x6FC620, 0x6FC710 | Manager state helper evidence |
| 0x136AF0, 0x1383F0 | Weather/related effects explored; no new patch |

`CPXParticleSystemEx` vtable0xEE6830 method0x10AEC0 begins with exactly `48 89 5C 24 08` (`mov [rsp+8],rbx`), then saves RSI/RDI and uses RCX=self, RDX=context, R8=scene. It calls world-position helpers0xB5440/0xCC650, calculates camera distance and writes self+0x4B8, calls0x10AF80 (return0x10AF56), restores its stack/registers, and finishes with E9 to child dispatch0xB3390. This is why a selected-emitter entry detour can skip the emitter's own preparation/core while retaining children, instead of returning from a whole parent update.

The core reaches0x6FAAE0, which checks manager+624, appends to vector592/600/608 and advances its end by128. This establishes a queued descriptor submission, not a direct OpenGL draw. A global early return at a shared renderer or manager was rejected as too broad and ABI/lifetime-sensitive. Cleanup0x10D440 releases refcounted handles at emitter+840/+872/+896 and resets backend state/flags; the new filter does not synthesize cleanup, write these handles, or destroy emitters. Skipping the entry also skips native cleanup that would have occurred through that entry while hidden. Existing GPU resources/tails may persist; whether a previously queued effect vanishes immediately and how it resumes are pending live checks. This limitation is explicit rather than claiming all lifetimes proven safe.

Legacy `CPXParticleSystem` vtable0xEE6BA8 method0x112970 has its native visual gate CALL0xCF220 at0x1129F8. The native false branch keeps children. The new wrapper runs the gate first and preserves false; selected emitters force only AL false. It does not skip arbitrary parent logic. Exact48-byte context is in `legacy-gate-plan.json`.

`CPXViewportEffect` draw0x2413C0 calls the void detail-grass helper0x2415D0 at0x24158E; its40-byte context is in `grass-call-plan.json`. This call alone is skipped. Parent viewport draw and its child traversal remain native. Grass was a small observed cost and is an extra cosmetic option, not the source of the whole particle budget. Weather, trails and flares were inspected but not added as new independent hooks because measured payoff was limited and visual cue roles were not sufficiently classified. “All” means all implemented14 filters, not every graphics subsystem.

### Census and policy selection

A read-only process-memory registry snapshot was collected at2026-11-15T14:51:19Z with `work/read-particle-census.ps1`; raw research remains `work/live-particle-census.json`. It traversed476905 pool records. This is loaded-world state, not per-frame call counts, visible emitters or proof of cost. No mutation or runtime function call was used. Do not ship heap addresses or player names as useful portable evidence; the project includes a normalized summary instead.

Many objects use generic names (`ParticleSystemEx`, `ParticleSystem`) and cannot be safely classified by name. Explicit quest/clue/interaction particle names also exist, so broad filtering is opt-in. The ambient allowlist is exact, case-insensitive, from observed engine names: Dust_Day, Dust_Night, ForestParticles_Day, ForestGoldenParticles, Particles_MapleLeaves_A, GEN_RoadLantern_Glow_01, GEN_RoadLantern_Glow_1, Particle_LanternGlow_01_Add, LanternGlow, ChimneySmoke. Matching a prefix like “Particle” or “Glow” was rejected because it would include cues or unrelated objects.

Lamp glow ancestry commonly led through CPXMesh/CPXLod to world/terrain; leaves through a location file; day/night dust through light-ray groups. Names alone are insufficient, so ambient mode validates safe-reference identity/generation and every ancestor up to32 levels. Known quest-item/collectible/checkpoint/trigger/visibility-trigger types and race/quest/coin/fog/etc name tokens stay native. Ambient additionally rejects player, horse, pet, NPC and sale-horse ancestry. Unexpected/null/cyclic/too-deep chains stay native. Policy literals are canonical in `data/particle-policy.json`, generated into `generated/particle_policy.inc`.

Broad AllParticles with protection off deliberately returns hide for recognized particle types without registry/name traversal; it includes cues, fog and own cosmetic particles. With protection on it still protects known gameplay ancestry but allows unknown names. Preset0 enables the unrestricted version. Default8 enables neither particle flag. The own-body invariant remains in actor/visual classification; broad effects are an explicit separate scope.

### Native implementation and update contract

The old18 hook indexes remain unchanged; new indexes18/19/20 are extended-particle entry, legacy-particle gate and grass. A complete ordered RVA table and exact plans are in `research/particles/README.md` and canonical `data/visibility-sites.json`. Patch buffers were increased64→256 for the full179-byte entry context; patch writes remain five bytes. New kind `particle_entry` validates the stolen instruction, complete signature and child-tail target before permitting E9. The ordinary CALL hooks remain E8. A no-match, duplicate match, wrong target or different surrounding context refuses activation.

HideHook_18 uses a 0xC8 unwindable Win64 frame. It preserves volatile arguments/XMM0–5 around ProxyHideParticles. Native path replays the stolen RBX home-space store while its frame is still allocated (`[rsp+0xD0]`), restores RSP, then jumps to entry+5 through g_originals[18]. Hidden path restores the original arguments/RSP and jumps to g_particleChildren=game+0xB3390 once. Placing the store after stack restoration was avoided so the final epilogue remains unwindable. The original instruction's first8 home-space bytes may change; native arguments beyond home space must not change. HideHook_20 similarly preserves arguments and returns or jumps to the original void helper. Hook19 follows the existing boolean-gate ABI pattern.

Near-game16-byte FF25 thunks allow far DLL relocation. All hooks retain full original/patched context backups and exact ownership checks. New E9 participates in thread pause/instruction-pointer checking, partial failure retention and exact F6 restoration. Code and cache are retained for in-flight callers. SEH failures fall back to native behavior and increment fault count. No per-emitter allocation, arbitrary object writes or arbitrary game call was added to the classifier.

Config344→368 bytes,11→14 category flags/counters, ProtectGameplay at30, new typed vtables200/208/216. Hits stay256. Full offset table is in ARCHITECTURE.md. New type RVAs: quest itemF252F8, triggerEFDFA0, visibility triggerF42900. Existing registry global1379EF0 and local player reference1302F28 remain baseline-specific. Changing presets invalidates cached role/protection answers by advancing the same bounded native epoch. Tests caught/guard against retaining a cached hide answer across a gameplay-protection change.

### Presets and loader work

The INI uses Windows Unicode profile APIs and binary0/1 switches, with defaults per missing/invalid key; no external parser library. `[General] DefaultPreset=8`. The full shipped INI explicitly lists all14 keys for presets1–9. Preset0 ignores file overrides. Startup creates no user file; build copies a default only if absent. A CMake install/package includes the default, so retain your edited installed file when manually updating. Build wrapper uses `-Loader`, not `-Host` because PowerShell's Host variable is reserved.

0 hides everything;1 restores quest markers;2 also NPC text;3 also collectibles;4 disables broad particles but retains ambient;5 enables gameplay guards;6 keeps NPC people;7 keeps NPC animals/horses/standalone/sale horses;8 keeps ambient particles and grass;9 also keeps remote pets. From5 upward Coins/QuestMarkers/NpcText are off and guards on. INI overrides can deliberately alter these choices; the “gameplay-friendly” label describes defaults, not enforcement against user edits.

Common host code was moved out of the GL adapter. It writes SSO-visibility.log, reads SSOVisibility.ini beside the owning module, permits one named-mutex owner in SSOClient.exe, pins that module, and polls foreground keys on one worker. DllMain does no blocking/patching/registration. Explicit shutdown joins the worker then restores. Non-game test hosts stay inactive. Duplicate-mutex handles and pin-failure cleanup were reviewed and corrected before the final builds.

SSO_HOST offers PROXY, RESHADE, ASI, PLUGIN. Plugin outputs share one C++ shim exposing SSOVisibilityInitialize/Shutdown, InitializeASI, AddonInit/Uninit, NAME and DESCRIPTION. ReShade dynamically negotiates the registration ABI at level1 and uses no graphics event SDK. ASI needs an InitializeASI-capable loader outside its loader lock. LoadLibrary-only hosts need explicit entry support; arbitrary shader/plugin APIs are not magically interchangeable. Full contracts and official source links are in LOADER_ADAPTERS.md. No third-party loader was installed, no live DLL was replaced, and no CE code/package is part of this project.

### Validation, failures and remaining integration work

The final validation matrix, hashes and helper evidence are in BUILD_VALIDATION.md and build-validation.json. Runtime has21 synthetic scenarios /21 hooks; classifier113 cases; actual linked MASM168 wrapper executions at preferred/far bases, plus12 GL forwarder executions for PROXY. Native presets verify exact default8/default9, immutable0, gradual flags, 4→5 protection transition, full sample-INI agreement, invalid input fallback, overrides and missing-file behavior. Plugin helper verifies registration failure/success/idempotence, explicit/ASI entries, shutdown/re-init and no controller in a non-game host.

New native runtime scenarios execute the linked extended-particle wrapper against host-owned fixture objects: broad hidden path reaches an actual child probe once; flags-off reaches native continuation; unreadable particle falls back under SEH; a forced partial-write failure after the E9 retains passthrough/recovery and restores exactly. The synthetic fixture is not a live engine or GPU simulation.

One initial plugin assembly-test run failed because tests/CMakeLists.txt still passed `opengl32.map` for addon outputs. It was corrected to the target basename map; all adapter tests then passed. An attempted combined delete/add documentation patch was rejected by the editing tool before changes; it was applied as sequential operations. These were tooling/test issues, not live game crashes. Earlier failed visibility experiments (preference-byte hide flags, ineffective sampler skips, old tables) remain documented in the historical handoffs; do not revive them as proven working optimization paths.

**No live 1.2 visual, GPU lifetime, ReShade/ASI integration, full gameplay or FPS claim is established.** Native collision/checkpoint routines are not patched, but hiding model/animation work may affect model-dependent behavior. Test local actor preservation, each preset, F6 fade-in, repeated transitions, race/quest cues and particle resume before calling the new feature validated in-game. Measure particle-enabled/disabled in consistent foreground conditions; previous0.43ms is only the target budget.

### Resume / repair checklist

Final local build result: all6 suites passed for PROXY Release/Debug/RelWithDebInfo, RESHADE Release/Debug, ASI Release and PLUGIN Release (7 builds). DLL/report hashes and config dimensions were rechecked against the linked artifacts. All import only KERNEL32/USER32. A freshly extracted source ZIP, in a directory containing spaces with Python discovery disabled, built/tested/packaged both PROXY and PLUGIN Release,3 native suites each. The final source archive includes later documentation/evidence updates; its build inputs are checked against this tested snapshot. These are isolated results, not live1.2 integration.

1. Read this journal, architecture, loader guide and build-validation.json. Establish current client identity, actual loaded adapter and its matching hash-bound metadata. Never reuse PID1168, old heap addresses, IDA instance IDs or DLL private RVAs.
2. Identify whether failure is loader initialization, preset configuration, layout guard, unique signature, native target, ownership protection or restoration. The log and read-only state tool separate these. A loaded module without an initialization entry call will not start hotkeys.
3. For a new game build, open its current IDA database using official MCP discovery/reference. Re-find particle vtables/virtual methods and callers. Verify self/context registers, return types, complete first instruction and entry+5 continuation, native tail child destination, legacy false-branch children and detail-grass caller's ignored return. Read cleanup and manager submission roles again.
4. Revalidate all original18 hooks plus new3, registry/global/local ownership offsets, typed vtables and safe-reference record layout. AOB match alone is not semantic compatibility. Update PE guards only alongside confirmed layout changes.
5. Update data/visibility-sites.json, particle-policy.json and runtime-layout.json plus wrappers/config/test bridge/fixtures where needed. Generate assets offline and run freshness checks. Do not broaden an ambient name match to generic names without new evidence.
6. Build Release/Debug, native suites, classifier and linked ASM. Inspect entryE9 restore and all wrapper destinations, matching map/hash metadata and the loader exports. Build a fresh extracted source tree without Python to protect standalone build portability.
7. Package exact tested binaries with matching INI/docs/metadata. Close the game before manual installation. Have the user perform actual live visibility/restoration/gameplay checks and compare a new foreground trace. Keep unverified behavior and measured outcomes distinct in the next journal entry.
