# Expanded SSO object visibility and OpenGL proxy: engineering handoff

Read the earlier **[visibility handoff](SSO-Visibility-Engineering-Handoff.md)** for the profiling, sampler experiments, failed hide-preference experiment, original player/horse/pet fade discovery and baseline actor architecture. This addendum records the later NPC/category work and the native OpenGL delivery. Start a fresh session with `RESUME-SSO-VISIBILITY.md` at the workspace root.

## Outcome and evidence boundaries

The current delivery is **`Star-Stable-OpenGL-visibility-proxy-v1.zip`**, containing a single deployable x64 `opengl32.dll`, its README, read-only diagnostic, sources and evidence. Hiding starts off. F5 enables it, F6 restores native calls, Ctrl+Numpad1–9/0 selects the ten main categories, and Ctrl+Numpad Decimal selects NPC floating text. Choices default to1 and persist across F6/F5 within a game process.

The user explicitly confirmed the earlier **v4** table preserves their own rider/horse/pets while hiding others. In the later **v5** experiment, a live RPM read found all18 CALL hooks active, active1, all11 category flags1 and growing native counters for players, NPC animals, NPC fallback, NPC horses, sale horses, collectible/coin visuals, markers and text. Standalone-horse hits were0. This proves execution of those decisions, not that every named physical object disappeared. No later explicit visual or controlled FPS result was received before the user requested the proxy.

The **proxy has not yet been installed/launched in SSO**. It passed native helper-process and emulated compiled-code tests. Do not promote the CE read-back, the old v4 visual result, or a synthetic fixture into a live proxy/FPS claim. The agent did not activate this DLL in the game, restart/play the game or send messages to anyone.

Final DLL identity:

```text
Architecture: AMD64/x64
Bytes: 188416
SHA256: d3f1d557802241e5c9c34023531547e0a182fc31c58316a3b32daed283db7312
Preferred DLL image base: 0x180000000
g_config RVA: 0x0005E9E0 (only valid with this DLL/map/hash)
```

The baseline game remains **645.348067 / Stellar645**, SHA256 `3CEC805521C70B64F1A33C5A0EFA67679B8112DACBE9594AB1B47301B4D3DE8D`, PE timestamp `6AEB5BD3`, SizeOfImage `014AF000`. All game addresses below are baseline RVAs. The user executable path is `C:\Users\Rafal\Desktop\StarStableOnline\Star Stable Online\client\SSOClient.exe`. The game was confirmed to statically import `OPENGL32.dll`, and its running module was the Windows System32 copy before installation. No application-directory `opengl32.dll` existed when checked.

## Why the NPC implementation differs from v4

Live class enumeration found about3499 loaded `CPXQuestControl` records spanning humans, dogs/cats, cows/sheep/birds, horses/foals and named story creatures. Separate concrete NPC-human, NPC-horse and NPC-pet classes were not present for those ambient models. `CPXHorse` mostly represented player horses; `CPXHorseForSale` was a separate sale/display class.

The user wanted independent categories, so the implementation combines authoritative concrete classes for players/pets/sale horses with a **name heuristic** within `CPXQuestControl`. It uses case-insensitive word boundaries, underscores/digits and CamelCase. `Cat1Night`, `RanchDogSleeping`, `Hen1`, `GoldenLeafPaddockHorse01`, `HorseQC227`, `Foal1` and `Donkey1` are recognized. Human exclusions include trainer/shopkeeper/girl/stylist terms. `Catherine` does not become a cat, and `SeahorsePoint` does not become a horse.

Unknown NPC names use the generic NPC bucket. With every NPC bucket at1, all recognized `CPXQuestControl` models are selected. Turning just one bucket off may not correspond to a complete physical species split: a cow with a unique story name can remain in generic NPCs. This limitation is visible in the table/README, not hidden behind an authoritative label.

The collected names split into2146 fallback NPCs,1057 animals and296 horse-like NPCs under the final heuristic. These are loaded records across the world, not on-screen counts or a labeled ground-truth dataset. The registry's update-enabled bit likewise does not establish visibility or proximity.

## New native evidence and discovery

Focused exports are under `outputs/visibility-categories-v5-evidence/ida/`; the original full player/horse/pet functions and local-control helpers remain in `visibility-aob-v4-evidence/ida/`. The shared earlier `ida-evidence/` includes full CPXSkinMesh, CPXMesh, particle and dispatcher exports. The v5 exports include:

| Item | RVA | Role |
|---|---:|---|
| CPXCharacter update | `28BF90` | Base update called by CPXQuestControl; model state, animation, LOD and text |
| CPXQuestControl update | `295D40` | NPC base update, interaction work, quest markers and speech text |
| CPXQuestItem update | `29E000` | Interaction/gameplay as well as optional visuals; not globally skipped |
| CPXCollectItem update | `36D600` | Collection state plus a dedicated visual submission |
| CPXHorseForSale update | `330AE0` | Sale-model lifecycle, icon, reins and child updates |
| CPXIcon update | `2B45C0` | GUI/icon work; not used as a broad world-marker filter |
| Camera-relative distance helper | `0B3260` | Computes actual distance; left unchanged |
| Visual tick gate | `0CF220` | `(actor[145] >>6)&1`; only two selected callers are hooked |
| CPXSkinMesh update | `0E7D00` | Skeletal/render branch and preserved child traversal |
| CPXMesh update | `0D3B90` | Mesh work and preserved child traversal |
| Actor compact-name accessor | `0B48C0` → `603730` | Registry-backed actor name |
| Registry sibling lookup | `603CF0` | Establishes record+40 as parent index |

Initially, actor+96 was tried as ancestry because it is a safe reference in the base actor. That produced empty parent chains. The registry sibling lookup proved the actual hierarchy follows **record+40**. It also showed child indices in the record's +0/+8 vector. Do not repeat the actor+96 assumption.

The full64-byte record is now understood sufficiently for this feature:

```text
+0/+8: child-index vector begin/end
+24: compact actor name storage
+32: instantiated actor pointer
+40: parent registry index; BADF00D is no parent
+44: generation
+52: lazy/state value (still not established as class ID)
```

For names, byte31 zero means an inline short string of up to7 characters; otherwise the qword at+24 shifted left one gives the ANSI character pointer. The classifier bounds inspected names to96 characters, validates canonical pointers and stops at zero. Names are internal actor identifiers; no chat handler or character-name collection is added to the proxy log.

## Selected hooks and meaning

The source of truth is **`work/visibility-categories-v5-sites.json`**. It contains each full original window, exact AOB signature, matched-window RVA, patch offset, original target RVA and five-byte CALL site. These windows all have exactly one executable-section match in the baseline executable. The proxy's `validation/proxy-symbols.json` additionally maps each game hook to its wrapper RVA in the delivered DLL.

| Hook | CALL RVA | Original target | Behavior while its category is selected |
|---|---:|---:|---|
| rider | `794C8F` | `799AD0` | Preserve predicate, then force non-local hide result |
| horse | `1E286C` | `1E6F50` | Preserve horse adapter, then conditionally force hide |
| pet | `3C126B` | `799AD0` | Preserve owner decision, then conditionally force hide for the actual pet in RBX |
| skin gate | `0E7D49` | `0CF220` | Return false for selected visual components; retain children |
| mesh gate | `0D3BE5` | `0CF220` | Return false for selected visual components; retain children |
| NPC direct animation | `28CE5D` | `0FCF00` | Skip selected model's skeletal tick |
| LOD model1 | `28C297` | `69E540` | Suppress selected NPC LOD draw |
| LOD model2 | `28C4B5` | `69E540` | Same |
| LOD model3 | `28C567` | `69E540` | Same |
| LOD model4 | `28CDA0` | `69E540` | Same |
| quest mark1 | `295EAE` | `69EBC0` | Suppress dedicated mark submission |
| quest mark2 | `295FA1` | `69EBC0` | Same |
| quest mark3 | `295FF1` | `69EBC0` | Same |
| collection visual | `36D93C` | `69EBC0` | Suppress collection model submission, keep update method |
| sale icon | `330DDD` | `69EBC0` | Suppress sale indicator/model submission |
| NPC text1 | `28D49C` | `6A1D20` | Suppress floating text |
| NPC text2 | `28D74E` | `6A1D20` | Same |
| NPC speech text | `296646` | `6A1D20` | Suppress speech overlay |

Global replacement of `799AD0` was again avoided because it has other actor/network-related callers. Global replacement of `CF220` was considered but rejected in favor of the two concrete mesh/skin callers. **Far-distance spoofing** was also considered, then rejected: the same distance drives model streaming and NPC interaction state, not just drawing. Broad `CPXQuestItem`/checkpoint returns were rejected because they mix gameplay and visuals.

This feature suppresses selected ongoing visual/skeletal work, not file streaming, object creation or every NPC subsystem. NPC animation events/root-motion-dependent behavior, quests and cutscenes are not comprehensively validated. It does not claim every optional particle effect is hidden. The earlier ineffective sampler/MatrixAnimation/preference experiments remain historical diagnostics, not proven optimizations.

## Classifier, ownership and cache

Maintain **`work/sso-visibility-categories-v5.c`**. It does not call game methods, allocate from the game heap, write actor fields, change ownership flags, or alter positions/network state. It only reads game structures and writes its own config/cache/counters.

Typed roots use these baseline vtables: mesh `EE4520`, skin `EE5FE8`, particleEx `EE6830`, particle `EE6BA8`, PlayerSSO `FE4770`, PlayerTPNet `FD10F8`, horse `F10600`, pet `F4A868`, NPC QuestControl `F23958`, sale `F37BB8`, collect `F3E8D0`, checkpoint `F26E20`. The particle entries are recognized by the classifier; this does not mean a global particle-update hook exists.

The nearest relevant typed ancestor determines the role, while ownership/checkpoint checks continue up the ancestry. Locally controlled Player/Horse/Pet roots and locally owned pets/horses are protected. `CPXQuestControl`'s bit4 alone does not protect an NPC: many ambient NPCs have it too. Invalid indices, null/generation-mismatched actors, self cycles and ancestry beyond32 levels fall back to visible/native behavior. Explicit marker subtrees remain marker candidates when reaching a generic NPC root.

Cache entries are32 bytes: generation, packed epoch+role, immediate parent index, typed/name root index, root generation, root parent and root vtable. Positive cache hits still check the root's ancestor chain for ownership/checkpoint protection, so moving a higher grouping node under the local player does not leave its descendants hidden. Dynamic Player/Horse/Pet roots are not cached. Generic visible results can conservatively remain visible until reparent/generation/epoch changes.

The usual capacity is1048576 records, **32MiB** committed address space. It is retained until game exit; F5 advances a16-bit cache epoch, avoiding a large clear each toggle. Initial capacity can grow up to4194304 according to the prepared registry bounds. A later index outside capacity uses an uncached bounded lookup rather than an out-of-range write. Native counters count decisions, not actors, visible objects or CPU milliseconds.

The344-byte config layout is stable across the CE/native builds:

| Offset | Field |
|---:|---|
| `0` | active byte |
| `16..26` | eleven category hide bytes |
| `64` | main image base |
| `72` | address of registry global, main+1379EF0 |
| `80` | local safe-reference address, main+1302F28 |
| `88` | cache pointer |
| `96` | cache capacity DWORD |
| `100` | epoch DWORD |
| `104..199` | twelve vtable pointers |
| `256..343` | eleven QWORD counters |

The earlier source used pointer-read macros. Actual tests with the installed CE TCC compiler exposed omitted/mis-evaluated nested zero-offset dereferences: the registry global's address was returned where its pointee was required. Explicit typed **Q/D/B functions** fixed it. Preserve these functions unless actual native tests establish a replacement. MSVC/O2 can inline them; no CE/TCC runtime is needed by the DLL.

## Proxy forwarding and initialization

`work/proxy/generate_proxy.py` reads the installed **System32 opengl32 PE export metadata**, then emits `.def`, MASM forwarders and name/ordinal tables. It does not copy Windows OpenGL's implementation. There are368 named exports with matching ordinals. The recorded system DLL SHA is `3049C75A038A5115E3500BFE6A45E5E3935E95549E171DFB83182061FC81467C`; it is provenance, not a runtime OS allowlist.

Each steady-state export is a memory-indirect jump to the real function. Initial entries point to per-export lazy thunks, which pass an index in R11 to a shared resolver. It saves argument GPRs, XMM0..5 and stack layout, invokes initialization, restores them, then tail-jumps to the real function. OpenGL signatures do not need guessed C prototypes.

`DllMain` only records its module handle/stops flag. InitOnce defers path lookup, logging, absolute System32 loading and export resolution until an exported function is called; the hotkey worker starts only after InitOnce releases. This follows the loader-lock rationale in [Microsoft's DLL best practices](https://learn.microsoft.com/en-us/windows/win32/dlls/dynamic-link-library-best-practices). The build uses static CRT `/MT` and deliberately retains thread notifications, as required by [DisableThreadLibraryCalls documentation](https://learn.microsoft.com/en-us/windows/win32/api/libloaderapi/nf-libloaderapi-disablethreadlibrarycalls).

The worker runs only when the host basename is SSOClient.exe, and key actions additionally require its foreground PID. It polls every20ms with rising-edge detection. It does not intercept/swallow keys. Categories default to1; toggling while off prepares a choice for F5. Choices persist across F6/F5 but no preferences are written to disk.

The DLL is pinned until process exit. It is not hot-unloaded on F6. The real System32 library remains loaded and OpenGL forwarding continues. Native read faults inside classifier callbacks are caught with MSVC SEH and return native/visible behavior; an aggregate count is logged outside those callbacks. This reduces a specific failure mode; it is not a proof against all client crashes.

## Native install, restore and concurrency

`visibility_runtime.c` scans only executable main-module sections, counts exact uniqueness, checks E8 targets against expected baseline helpers, validates local player/horse vtables/control flags and captures full live windows. Header/layout rejection happens before activation. Unlike v4's narrow AOB strategy, this broader version is deliberately gated by the analyzed PE timestamp/size because it reads more object layouts.

All visibility wrappers are MASM functions inside the proxy. A65536-byte near allocation holds one16-byte thunk per site: `FF 25 00 00 00 00`, a64-bit absolute wrapper address and padding. The existing five-byte CALL reaches this nearby thunk; the thunk jumps to the DLL regardless of DLL distance/ASLR. The original helper pointers live in `g_originals[]`. No instruction decoder needs to relocate arbitrary overwritten prologues.

Force/gate wrappers call their original one-argument helper, preserve its volatile state, and change saved AL only when selected. Skip wrappers preserve all argument registers, XMM0..5 and the original stack arguments, then either return or tail-jump to the original void helper. C callbacks preserve ABI nonvolatile registers. Executed assembly tests include17-argument stack layouts and a DLL rebased to `0x500000000`.

Before changing code, the worker completes scans, allocations and wrapper preparation. The bounded patch section collects handles, suspends other threads, examines instruction pointers at each five-byte site, changes page protection, verifies every full window, writes calls, flushes the instruction cache and resumes/closes handles in a `finally` path. It retries a busy instruction boundary at most16 times. No logging/heap allocation is performed while threads are paused. A background helper thread's resumption was tested.

Thread suspension is a practical patching measure, not a general synchronization proof. [Microsoft documents the deadlock risk](https://learn.microsoft.com/en-us/windows/win32/api/processthreadsapi/nf-processthreadsapi-suspendthread) when a suspending thread needs a lock held by its target. The implementation minimizes that critical section, but real-game concurrency/lifecycle behavior remains to be tested. Do not claim an absolute crash/deadlock guarantee.

F6 first sets active0 so retained wrappers pass through, then restores only original-or-owned-patched contexts. An unknown change is refused rather than overwritten. Exceptional partial writes retain recovery state so F6 can retry. The source-test-only injected failure after the second site is excluded from shipping compilation. Thunks, config/cache and DLL remain mapped after restoration, allowing already-entered calls to return safely. No executable/configuration file is patched on disk.

## Tests, build and reproduction

Installed build environment: VS2026 Professional `C:\Program Files\Microsoft Visual Studio\18\Professional`, MSVC14.51.36231, x64 `cl/link/ml64`, Windows SDK libraries. Run `work\proxy\build_proxy.cmd` from the source workspace. It compiles `/O2 /MT /W4 /std:c17`, the forwarding/hook ASM, the shipping DLL, a classifier-only test DLL and the native synthetic-image test executable. Generated inputs are included, so a same-baseline rebuild can compile without re-reading the game. Deliberate regeneration uses `python work/proxy/generate_proxy.py`, which currently expects this user's game/CE paths.

```powershell
python work/proxy/test_forwarding.py
python work/test-visibility-categories-v5.py work/proxy/build/classifier_test.dll
python work/proxy/test_compiled_asm.py
work\proxy\build\SSOVisibilityTests.exe
```

The compiled-code emulator requires Unicorn2.1.4 in `work/sampler-libs`. Keystone0.9.2 in `work/v5-libs` is needed by the earlier CE wrapper tests, not by the shipping DLL or the linked-MASM emulator. Dependencies are not bundled. Some sandboxed native-library imports required the execution permission mechanism; this did not mean tests needed admin access to game memory.

Evidence:

| File | What it establishes |
|---|---|
| `forwarding-validation.json` | Exact368 export name/ordinal parity; proxy loaded before System32; distinct real-library handle; native contextless WGL/GL smoke results |
| `msvc-classifier-validation.json` | 81 actual C fixture cases, plus non-ground-truth snapshot name distribution |
| `compiled-assembly-validation.json` | 144 actual linked hook executions and12 lazy/fast forwarding executions across two DLL bases |
| `native-runtime-validation.json` | 16 native synthetic-image checks with real page protection, pause/resume, restoration, SEH and recovery |
| `proxy-symbols.json` | This DLL's hash/header identity, preferred base, selected symbol RVAs, game sites and wrappers |
| `manifest.json` | Packaged-file SHA256 inventory |

These tests never opened/modified SSOClient. The earlier CE suite separately has81 TCC-native classifier cases,72 Lua-generated/Keystone wrapper executions and11 mocked loader scenarios. The first native thread-resumption test used an inadequate10ms scheduling assumption; it was corrected to establish a running helper thread and wait with a2s bound. That was a test timing failure, not observed evidence of a permanently suspended thread.

The initial v5 CT load failed because its XML declaration used `utf8`; CE required `utf-8`. The generator was fixed, and subsequent RPM showed execution of all18 hooks. An exploratory IDA assembler call at RVA1000000 returned false; the16 bytes were later compared to the file and remained identical. Do not use the mutating `ida_idp.assemble` API as an offline assembler.

## Diagnosing a future session

1. Establish the running executable and installed proxy hashes, loaded application-directory versus System32 modules, game/DLL bases, exact log message and whether CE is active. Historical bases/PIDs/config pointers are not current facts.
2. Use the supplied read-only `read-proxy-state.ps1`. It validates disk hash and live DLL headers against metadata, then reads `g_config` at the matching module RVA. Hook ownership additionally checks each near thunk's absolute destination. It makes no writes.
3. Keep the source/map/metadata and DLL from the same build. A new link can move every proxy RVA. Regenerate metadata instead of reading an old offset from a new DLL. Do not treat the old CE read-back helper's0x800-spaced caves as the proxy's16-byte thunks.
4. If unsupported build or missing/ambiguous AOB, use Official IDA MCP on the matching current game binary. Re-establish vtables, parent/name/ownership fields, the local-control exclusion, exact helper semantics and call-argument registers. Do not weaken the build guard or patterns merely to enable a checkbox/hotkey.
5. Update the shared classifier/site plan, generate both CE and proxy inputs deliberately, rebuild, re-run relevant native/ABI/failure tests, refresh metadata/hashes/docs, then coordinate a live test. Preserve a known-good baseline.
6. Test own rider/horse/pets, each category independently, F6 restore and F5 reuse. Verify actual visual scope before collecting off/on/off foreground frame times with a consistent camera/scene. Standing is fine; the user controls gameplay. No messages should be sent without explicit authorization.

The raw census/traces, original executable, IDA database and third-party DLLs are outside the portable package. Source fixtures contain only metadata/small instruction windows. The new artifacts complement the earlier exhaustive handoff; they do not replace its failed-experiment history or profiling caveats.
