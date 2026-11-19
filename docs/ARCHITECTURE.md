# Architecture and maintenance — 1.3.0

## Source ownership

This is the maintained standalone CMake project. Historical `work/proxy/` scripts and CE experiments are reference material. Building this tree has no dependency on them, the game or IDA. `data/` owns ordered hook windows, OpenGL exports, particle policy and diagnostic layout. `generated/` commits the resulting C/ASM/DEF/fixture inputs. `tools/generate_assets.py` is an offline standard-library maintenance tool, not a normal build step.

`src/host.c` owns logging, one controller worker, foreground input, selected preset and module lifetime. `src/presets.c` owns built-in defaults and Windows INI parsing. `src/proxy_main.c` only owns the OpenGL adapter and lazy forwarding. `src/hosts/plugin_host.cpp` is a small C++17 ReShade/ASI/explicit initialization shim. Loader contracts are in [LOADER_ADAPTERS.md](LOADER_ADAPTERS.md).

`src/visibility/visibility_runtime.c` owns build/layout validation, unique executable-section AOB searches, near thunks, patch ownership, restore and recovery. It includes `classifier.inc`, also compiled into the classifier test bridge. `Q`, `D`, `B` are functions rather than nested macros, retaining the fix established in the original CE investigation. `ProxyHideActor`, `ProxyHideVisual`, `ProxyHideParticles` and `ProxyHideFlag` guard memory reads with SEH and fall back to native behavior on exceptions.

## Preset/config contract

The master starts off. Common initialization applies DefaultPreset **8**, overriding the classifier's historical fixture initialization. Preset 8 selects only remote horses, riders and pets. Preset 9 selects only remote horses/riders. Preset 0 is always all 14 switches on with gameplay protection off. Presets 1–9 may be changed in the INI; their built-in progression and all key semantics are in the user guide.

`VisibilityApplyOptions` temporarily clears master active, writes all switches and protection policy, advances the classifier epoch when prepared, then restores the previous master state with a memory barrier. The runtime's `g_epoch` is the source of truth; callers must not independently increment the config epoch. A changed protection policy must invalidate previous cached KEEP/hide results. Epochs are bounded to 65535 because cache entries store them in the upper 16 bits; exhaustion refuses another change and requests restart. No large cache clearing is needed at preset selection.

Config is **368 bytes**, statically asserted, with counters still at 256. `data/runtime-layout.json` mirrors the diagnostic schema:

| Offset | Field |
|---|---|
| 0 | active byte |
| 16–29 | 14 hide bytes, order below |
| 30 | ProtectGameplay byte |
| 64 / 72 / 80 / 88 | image base / registry global address / local reference address / cache allocation |
| 96 / 100 | cache capacity / epoch (uint32) |
| 104–199 | original 12 uint64 vtable pointers |
| 200 / 208 / 216 | quest item / trigger / visibility trigger vtables |
| 224–255 | padding |
| 256–367 | 14 uint64 hit counters |

Category indexes 0–13 are PlayerHorses, PlayerActors, PlayerPets, NpcPets, NpcActors, NpcHorses, StandaloneHorses, SaleHorses, Coins, QuestMarkers, NpcText, AmbientParticles, AllParticles, DetailGrass. Keep the INI key array, config, assembly byte offsets, layout JSON, test bridge and diagnostics in sync. The old 1.1 config was 344 bytes with 11 counters; its private addresses are incompatible.

Registry records are 64 bytes: generation at +44, object pointer +32, hierarchy parent index +40, compact name +24 with external-name flag +31. The external pointer is decoded as Q(record,+24)<<1; reads are bounded. Object safe reference at +128/+132 must match the record generation/index. Actor+96 is not the hierarchy parent. Parent sentinel is 0x0BADF00D; ancestry depth is capped at 32, with invalid/cyclic chains kept native.

Local ownership is recognized by player types/control bit +144 &4 and owner safe references (horse +152, pet +584); local horse safe reference on player is +1608. Own bodies and checkpoint ancestry remain protected independently of aggressive preset policy. Other NPC animal/horse categories use name boundaries because CPXQuestControl covers multiple species. The cache validates generation, parent, selected root generation/parent/vtable and protection of the current ancestor chain. Player ownership paths remain uncached.

## Particle decisions

Ambient filtering accepts only exact case-insensitive names from `data/particle-policy.json`. It then validates the object's registry identity and bounded ancestry, excluding player/horse/pet/NPC/sale roots and known gameplay types/name tokens. Unknown generic particle names stay native. Ambiguous pointers/read failures stay native. It does not allocate, write actor objects, or call game functions.

AllParticles takes precedence over ambient. With ProtectGameplay=0 it selects every recognized CPXParticleSystemEx / CPXParticleSystem emitter without registry/name traversal. This is the explicit broad mode; it may remove race/quest cues, fog and own cosmetics. With protection on, it checks ancestry for known gameplay types/tokens but permits unknown particle names. These particle decisions are not cached. Existing category visual hooks can also suppress particle children owned by selected actor categories; the new filter adds emitter-specific suppression independent of actor selection.

ProtectGameplay adds quest-item, collectible, trigger, visibility-trigger and conservative name-token checks to the original actor/visual ancestry classification. Default presets 5–9 also leave Coins, QuestMarkers and NpcText off. DetailGrass only skips a typed viewport draw helper; it does not modify terrain collision. Gameplay protection is a heuristic, not a proof that every asset's meaning was recovered.

## Hook ABI and patching

There are **21 ordered hooks**. `visibility-sites.json` order maps to HideHook_0..20 and g_originals[0..20]. The original 18 wrappers retain their mappings. New hooks:

| Index | Site RVA | Kind / destination |
|---|---|---|
| 18 | 0x104E50 | Extended particle entry E9; native continuation entry+5, discovered child dispatcher (reference0xAD050) |
| 19 | 0x10C888 | Legacy particle visual-gate CALL; discovered native target (reference0xC8AD0) |
| 20 | 0x23A98E | Detail-grass void helper CALL; discovered native target (reference0x23A9D0) |

Most sites replace only a five-byte E8 CALL. Hook 18 replaces one complete five-byte instruction `48 89 5C 24 08` with E9. Preparation validates its full 179-byte function window and final native child-tail-jump destination. Signature/backup buffers support up to 256 bytes, but only five bytes are written. No instruction splitting or generic trampoline decoder is used.

HideHook_18 has a Windows unwind frame: subtract RSP by 0xC8, `.allocstack`, `.endprolog`. When filtering is needed it saves volatile GPRs and XMM0–5 around the C decision. Native passthrough writes RBX to `[allocated RSP+0xD0]` (original RSP+8), replays the stolen instruction, restores RSP and tail-jumps to entry+5. Hidden path restores arguments/RSP and tail-jumps to discovered native child dispatcher (647 reference0xAD050) **once**. Both destinations receive the native entry stack, return address, nonvolatile registers and stack arguments. The home-space write happens before the epilogue's stack restore so unwind metadata remains valid. Incoming condition flags are not an entry-call contract.

HideHook_19 first runs the native gate, preserves native false, and only forces AL=0 for a selected emitter. The caller's original children path remains. HideHook_20 has a matching unwindable save frame and either tail-calls the original void helper or returns with restored arguments/stack. The new Ex/grass wrappers have direct inactive/flag-off fast paths; the original wrappers keep their established ABI handling. Tests model volatile helper clobbers, SIMD arguments, stack arguments, original gate results and far relocation.

Near-game 16-byte `FF 25 [rip+0]` thunks hold absolute DLL wrapper addresses, allowing a DLL outside signed rel32 range. Actual patched sites point to those near thunks. g_originals[18] uniquely stores entry+5; g_particleChildren separately stores the decoded native child-tail destination. Do not treat every g_originals entry as a full native function entry.

F5 checks client headers, local player/horse layout, all unique signatures and native destinations before allocating/preparing. It allocates cache/thunks before pausing other threads, then bounds retries, checks instruction pointers and entire saved context windows, changes page protection, writes five bytes, flushes the instruction cache and resumes handles on all cleanup paths. F6 sets master off first and restores only exact owned/original bytes. Unknown modifications are never overwritten. Exceptional partial writes retain recovery state. Thread suspension is not a complete synchronization proof.

Code/thunks/cache and active game host module remain allocated/pinned until exit. A per-process named mutex prevents multiple adapters patching the same process. DllMain does no patching, waiting, INI parsing, logging or registration. Explicit stop joins the input worker outside DllMain, then restores. System OpenGL is loaded from the absolute Windows directory and separately pinned. The public proxy export surface remains 368 OpenGL exports; private diagnostic symbols are map entries, not exports.

## Build, evidence and update repair

Use MSVC C17, C++17 only for adapters, x64 MASM, /MT or /MTd, ASLR and NX. Incremental linking is off so maps identify real linked code. Test translation units explicitly retain assert even in Release; some assertions intentionally perform harness actions. Shipping code must never define SSO_PROXY_TESTING. Per-target settings disable unrelated user-wide vcpkg autolinking. Normal builds perform no downloads.

Each link writes filename/hash/header-bound symbol metadata using its own map. `read-proxy-state.ps1` selects that filename/hash, verifies loaded headers, and knows E9 entry ownership versus E8 native calls. Never reuse old g_config RVAs across builds or assume matching source implies matching DLL bytes. Counters are diagnostic calls, not on-screen objects or time measurements.

Current reference647.349716: timestamp6AF719CF, image014C1000, SHA256 `62387b246a92a4874d20329caa6eaf06c7a29830263e94982a8bdad6b6110fe1`. These identify analyzed evidence and are not activation gates. `data/client-layout.json` provides relocation-masked helper-body proofs, binding instruction locations and exact RTTI names. The runtime derives native targets from CALL/E9 instructions, enforces shared-target/call-graph relationships, derives writable globals from RIP-relative operands, validates native registry stride/generation/index/object code, and finds unique primary MSVC RTTI vtables in read-only data. It then checks live local rider/horse generations, types, control bits and horse ownership. `g_patchSites` records actual discovered patch addresses for diagnostics. Full observed windows are saved for exact F6 restoration; wildcarded bytes are never restored from the reference fixture. Compiler/semantic/object-layout changes remain a repair boundary. See [the client647 journal](updates/2026-11-18-client-647.md).

For a new client, retain clean executable identity, reopen its database via official IDA MCP, and follow [the journal's repair checklist](JOURNAL.md). Verify roles, gates, self registers, return types, child tail, stolen instruction, object fields and cleanup paths, not just byte matches. Update semantic proofs and canonical data together with wrappers/fixtures/tests. Regenerate assets; build native/classifier/assembly suites; package matching DLL/INI/metadata. User visual/restoration/transitions/race checks and a controlled foreground performance trace are separate required evidence before claiming a live improvement.

Read-only IDA exports and exact patch plans are in `docs/research/particles/`. No complete executable or database is bundled. [BUILD_VALIDATION.md](BUILD_VALIDATION.md) distinguishes tested helper behavior from the earlier live 1.1 capture and still-unverified 1.2 behavior.
