# Star Stable remote rider, horse and pet visibility: engineering handoff

This document is intended for a fresh AI session or a developer repairing the feature after a game update. It records what was established from the executable, what was observed in the running game, what was inferred, the unsuccessful experiments, and how the final table works. It is deliberately detailed. It is not original source code or a complete description of the SSO engine.

## 1. Current outcome and confidence

**Confirmed by the user:** v3 hides other players' characters, horses and pets while their own character, horse and pets stay visible. The user subsequently confirmed the AOB v4 table's two entries work with the same behavior on the current client.

The final v4 integration-check reply was: “Both work; my own character/horse/pets stay visible”. It answered a request to disable v3, load `Star-Stable-visibility-AOB-v4.CT`, and enable its two AOB script rows. This is the live confirmation of the generated v4 table, separate from its isolated test results.

The payload changes three short conditional-jump displacement bytes. It forces existing fade-out paths in non-local actor updates. It does not remove the actor objects, ban players, alter the server population, globally skip Character methods, or patch chat/ignore message handlers.

**Not established:** an FPS improvement from this feature, absence of every possible crash, unchanged chat reception under an actual message test, compatibility with another game build, or correct behavior in every game mode/transition. The agent never sent chat or other messages and did not directly activate the patch in the live process. The user activated the CE entries. Tests otherwise used copied code/emulated CPUs or mocked memory APIs; process inspection was read-only.

Latest table: `Star-Stable-visibility-AOB-v4.CT`. It has separate horse/rider and pet entries. The current build is confirmed; future compatibility is conditional on matching and validation. There is no defensible “works after every update” guarantee.

## 2. Environment and baseline identity

| Item | Value used during the investigation |
|---|---|
| Workspace | `C:\Users\Rafal\Documents\Codex\2026-11-15\tr` |
| Game executable | `C:\Users\Rafal\Desktop\StarStableOnline\Star Stable Online\client\SSOClient.exe` |
| IDA database | Same executable path with `.i64` appended |
| File version / product | `645.348067` / `Stellar 645` |
| SHA-256 | `3CEC805521C70B64F1A33C5A0EFA67679B8112DACBE9594AB1B47301B4D3DE8D` |
| Preferred IDA image base | `0x140000000` |
| Observed live module base | `0x7FF7A4730000` |
| Observed live process during visibility work | PID `17128` |
| Earlier nighttime trace process/main thread | PID `8516`, TID `2584` |
| Later valid crowded trace process/main thread | PID `17128`, TID `19296` |
| PE timestamp / header offset | `0x6AEB5BD3` at module offset `0x178` |
| PE SizeOfImage / header offset | `0x014AF000` at module offset `0x1C0` |
| CPU / GPU | Intel Core Ultra 7 270K Plus; NVIDIA RTX 4080 |
| OS / driver | Windows 10 build 19045; GPU driver `32.0.16.1742` |
| User-facing date/time zone | November 15, 2026, Europe/Amsterdam |

All game-code addresses in this document are **baseline RVAs**, unless explicitly called a VA or a heap address. Add the live module base for RPM/CE; add `0x140000000` for the baseline IDA database. For example, RVA `0x00794C96` corresponds to IDA VA `0x140794C96`. Do not reuse the historical ASLR base, PID, heap pointers or MCP lease ID.

V2/v3 were deliberately pinned to this build using header/site assertions. V4 parses the current PE layout and uses signatures; it does not require the baseline timestamp, size or hash. Those values remain useful for reproducing the known-good analysis.

## 3. The profiling context that led to visibility work

The user reported CPU-bound FPS: changing resolution/graphics did not improve it, and crowded player areas were worse. They wanted concrete information for the developers without access to source. They explicitly controlled gameplay; the agent was to capture while they played, not play the game for them.

Two valid foreground CPU/GPU traces were compared:

| Measurement | Earlier standing nighttime scene | Later busier active-play scene |
|---|---:|---:|
| Duration | 41.014 s | 61.334 s |
| Kernel presents | 3,442 | 3,845 |
| Presents/s over observed present span | 84.4 | 63.0 |
| Median present interval | 11.683 ms | 15.749 ms |
| 95th / 99th percentile interval | 13.483 / 15.357 ms | 17.545 / 20.326 ms |
| Main-thread scheduled CPU / one core | 92.5% | 95.2% |
| Main CPU time per present | 11.02 ms | 15.19 ms |
| Game GPU scheduled interval union / trace | 34.6% | 36.6% |

The main thread was nearly saturated while the GPU had gaps. GPU percentages are **ETW DMA start/stop interval unions**, not shader utilization or PresentMon GPUBusy. Presentation cadence is not confirmed display rate or server latency. Both traces used a 1 ms sample period and reported zero lost events/buffers.

The raw IDA-conditioned baseline has 37,745 main-thread sample events with stacks. An earlier xperf butterfly output had 37,605 because of a small kernel-side inclusion difference; both had exactly 33,464 exclusive samples inside the game executable. Use one denominator consistently. The later trace had 58,227 attached-stack events plus 422 main-thread events without stacks; its sample tables use the former.

Per-present sampling estimates grew in animation/pose (`0x006C4600`: 2.12 → 3.61 ms), mixer (`0x006BFF10`: 1.90 → 3.20 ms), and collision scan (`0x008B69A0`: 0.82 → 1.66 ms). These are overlapping inclusive sample groups, not separately timed methods. Horse update grew from 0.61 to 2.76 sampled ms/present; player update from 0.31 to 1.06. Horse/player rows overlap through nesting. The two scenes also differed in movement, camera, time and uncounted player population, so player count alone was not isolated.

The broad QuestControl hotspot was mostly delegated Character/animation work. Terrain included shared child traversal, Follow ground queries, procedural animation, particles, meshes and position lookups. Do not reinterpret those class labels as isolated quest logic or terrain rasterization.

An initial later recording had ChatGPT/browser foreground in all 60 checks and was excluded. Its folder is `crowded-play-103835`, with an explicit exclusion note. The valid replacement is `crowded-play-104151`, with the game foreground in all 60 checks. CPU samples in both valid traces were mostly on logical processors 12/13; a read-only Windows CPU-set query classified those as the higher-performance class. Actual live CPU clock/thermal counters were not captured.

For the complete CPU analysis, consult `Star-Stable-performance-report.md`, `Star-Stable-IDA-hotspot-analysis.md`, `Star-Stable-crowded-comparison.md`, their JSON/CSV evidence and `ida-evidence/`. Large raw ETLs are saved separately and excluded from the small developer ZIPs.

## 4. What was tried first, and what did not work

### 4.1 Animation sampler track-touch loops

The quaternion sampler at `0x006841C0` and vector sampler at `0x00684930` contain full-range memory-touch loops before the real key search. Embedded assertion metadata identifies anonymous-namespace `GetSample` in `Source/System/src/Resources/PXAnimationResource.cpp`, under a `PXRelease2026_45` build path.

The quaternion loop (`0x006842B0`–`0x006842CE`) copies one 20-byte record every eight keys, a 160-byte stride. The vector loop (`0x00684A10`–`0x00684A25`) copies one 16-byte record every eight keys, a 128-byte stride. Scratch copies are discarded/overwritten before a later consumer; temporary register/flag results are not required by the search/interpolation. This resembles deliberate memory warming, but its source-level intent is unknown. “No output dependency found” does not prove no cache/timing benefit.

Original experiment:

| Gate | Original | Enabled |
|---|---|---|
| Quaternion `0x006842A4` | `74 29` | `EB 29` |
| Vector `0x00684A06` | `74 1E` | `EB 1E` |

An isolated Unicorn comparison matched 630 original/bypassed input cases plus 30 restoration cases, using original sampler/search machine code and deterministic float32 shims for external `acosf`/`sinf`. This did not model caches or the full CRT. The user reported no visible FPS gain. Those loops were only about 4.6–4.8% of main-thread samples in the measured scenes. Do not present the bypass as a proven optimization or explanation of an 80→200 FPS difference.

Artifacts: `Star-Stable-sampler-loop-test.CT/.cea`, its notes, `Sampler-loop-emulation-results.json`, `sampler-test-evidence/`, and `work/test-sampler-bypass.py`.

### 4.2 Native hide preferences: correct writes, no visible effect

String searches in IDA found named configuration fields in the preference load/save routine `0x00631970`. The live CPXStudio settings block was verified, and the first quick table set:

| Preference | Decimal offset | Hex offset |
|---|---:|---:|
| `HideMountedHorseAndPlayer` | 170 | `AA` |
| `HideUnmountedHorse` | 171 | `AB` |
| `HideUnmountedPlayer` | 172 | `AC` |
| `GraphicsHidePlayers` | 173 | `AD` |

The pointer chain on the baseline was `studio=[module+0x013794C8]`, `settings=[studio+0x2B8]`, then `settings+0xAA` for four bytes. The primary studio vtable checked as `module+0x00FA53D8`. The script saved/restored original Boolean values and checked its writes. Live RPM confirmed `1,1,1,1` after user enable, yet no hiding was reported.

**Conclusion:** the writes worked; the expected runtime consumer/apply path was not established. The fields may be cached, script-driven, mode-specific or unused in this mode. Do not assert they are definitively dead code, or that setting them alone is a working hide feature. Broad raw-displacement searches initially produced many irrelevant functions; limiting candidate decompilations was not evidence that no consumer exists.

Other nearby preferences, for context: `BecomeAWildHorse` +161, `HidePlayerNames` +162, `ShowOtherWildHorses` +163, `HideHat` +164, request/notification muting +165..169. The experiment did not write those. The native preference routine can load/save options, so those earlier data edits could potentially be persisted by the game; the user was instructed to restore before saving/logging out. V3/v4 do not use this settings block or change preferences.

### 4.3 MatrixAnimation: a different, small animation category

`CPXMatrixAnimation` slot 14 at `0x000DA640` checks actor flags and calls `0x000DD9E0` for procedural transforms, then `0x000B3390` for children. Changing `0x000DA668` from `74 08` to `EB 08` skips the procedural step while preserving child traversal. The user reported no obvious visible/FPS effect in their scene. This is not the skeletal rider/horse pipeline. A global procedural-animation skip can freeze world objects; it is a diagnostic, not a demonstrated harmless optimization.

### 4.4 A misleading “v2 did nothing” result

After the revised fade table was prepared, the first feedback said nothing changed. RPM showed the **old sampler bypass** active while both new fade branches remained original (`74 7F`, `74 58`). The agent explained the mismatch and supplied the exact file/entry name. Once the intended v2 entry was enabled, the user confirmed other players disappeared; pets remained. Do not record the mismatched-table observation as a failure of the fade payload.

Users often switch a toggle off after observing it. A later original-byte snapshot means off **at that instant**, not proof an earlier confirmed activation failed. For coordinated read-back ask the user to leave a specific entry enabled. A post-v4-feedback snapshot similarly found original branch bytes; it was after positive feedback, without a commitment to leave the entries on.

## 5. Relevant SSO actor architecture established here

### 5.1 Actors, virtual update slot and child traversal

RTTI-named vtables identify concrete actor classes. Virtual slot 14 is byte offset `0x70` and was the observed update path used by an indexed dispatcher at `0x006885A0` and related child traversal helpers. This is an analysis description, not recovery of the original private virtual-method name.

The shared actor child helper at `0x000B3390` checks `actor[144] & 0x40`, obtains the raw lookup/traversal context pointer through `0x00621230` from a frame/context argument, then traverses children through the pointer at that returned context's offset 1208. Do not call this raw pointer CPXStudio solely because other helpers resolve the frame's referenced studio actor. Dispatcher vectors can contain nested descendants, so repeated return addresses in a sampled stack must be counted as unique membership rather than repeatedly added.

On the analyzed paths, `0x000B4980` returns `(byte(actor+144)&4)!=0`; `0x000B4990` is its inverse. This flag distinguishes the observed locally controlled updates from network/slave update portions. It is not a recommendation to flip that flag: doing so could change simulation/ownership behavior. `0x000CF220` reads a different flag at `actor+145`, bit `0x40`, used by MatrixAnimation's tick gate.

### 5.2 Baseline vtables and update entries

| Class / item | Vtable RVA | Slot-14 implementation RVA |
|---|---:|---:|
| CPXHorse | `0x00F10600` | `0x001E1E30` |
| CPXPlayerTPNet | `0x00FD10F8` | `0x00794310` |
| CPXPlayerSSO | `0x00FE4770` | `0x00794310` |
| CPXPet | `0x00F4A868` | `0x003C1180` |
| CPXPetManager | `0x00F4DAD8` | shared child helper `0x000B3390` |
| CPXStudio primary vtable | `0x00FA53D8` | not used as a visibility filter |
| CPXStudio secondary named table | `0x00FA5930` | not used here |

**Do not confuse `0x00F4A858` with the CPXPet vtable.** It is the nearby `SafeActorPtrAs<CPXPet>` wrapper table. Reading a fictitious slot 14 from that small wrapper table yields unrelated neighboring data.

**Class identity does not identify the local player.** The read-only registry scan found one local CPXPlayerSSO and roughly 23–24 remote actors using the same CPXPlayerSSO vtable. A class-wide early return would hit the user too. The safe approach used existing local-control flow before the non-local fade blocks.

### 5.3 Actor registry and safe references

The baseline global at module RVA `0x01379EF0` points to the actor registry/lookup context. It is **not** the CPXStudio pointer. The symbol `nExitCode` at RVA `0x013794C8` was decompiled with a misleading integer-ish name/type but held the live CPXStudio pointer.

The safe reference convention reconstructed from `0x00603560`:

```text
safe reference +0:  vtable pointer
safe reference +8:  generation / identity DWORD
safe reference +12: registry index DWORD

registry +0: vector start pointer
registry +8: vector end pointer
record size: 64 bytes
record +32: instantiated actor pointer
record +44: generation / identity DWORD
record +52: lazy-load/state field (not established as a class ID)
```

The resolver checks index bounds and generation. An index `0x0BADF00D` is invalid. If the actor pointer is null, the real resolver can enter a lazy creation path. A read-only inspection must treat that as unavailable rather than guess/instantiate it. `0x005F8CF0` resolves a safe reference through the global registry; `0x006214A0`/`0x006214C0` resolve the reference through its own lookup pointer at +32, the latter asserting on failure. Distinguish them from `0x00621230`/`0x00621240`, which return the raw +32 lookup/context pointer, with the latter asserting if absent. A resolved referenced actor and its registry pointer are different objects.

The global safe reference at `0x01302F28` resolved the local player. On the baseline the local player's safe reference at offset 1608 (`0x648`) resolved their horse. A horse's rider reference is at +152 (`0x98`). A pet's owner reference is at +584 (`0x248`), with visual references around +392/+408. These layouts are baseline facts, not an ABI promise across updates.

Observed historical heap values included studio `0x5ABFCF64D0`, settings `0x2180A4BE5C0`, local player `0x2190D7BBB40` and local horse `0x218E2659550`. They are recorded only to interpret saved snapshots. Never reuse them as future patch addresses.

The local rider's actor byte 144 was observed as 108/110; the horse's as 236. Both contain bit `0x04`. Observed remote rider/horse actors lacked that bit. One own pet resolved to the local owner and had the bit. Another locally controlled pet-like record could be a preview/other object; the implementation preserves all locally controlled pet branches rather than guess its role.

The registry contained about 476,046 records. That is not a player count. The scan saw around 216 non-local pet records, most with zero fade/inactive state; it is not evidence of 216 visible pets. Code in the read-only scanners intentionally avoids collecting character names or chat contents.

## 6. Discovery of the real visibility path

String searches for `hide`, `player`, `horse`, `pet`, `visibility`, and ignore-related names exposed both misleading settings and actual runtime helpers. Embedded assertion metadata identified:

```text
Source/Game/src/Actors/PXVisibilityTrigger.cpp
CPXVisibilityTrigger::IsSlavePlayerVisible
```

The function-name string is near RVA `0x00F43080`, within metadata referenced from `0x0038D9B0`. Other nearby assertion records begin at `0x00F42F58`, `0x00F43030`, `0x00F43058`, `0x00F430B0`. The first lookup was briefly aimed at the interior function-name pointer (`F43060`), which has no direct code reference; following the containing assertion record (`F43058`) found the code reference. This is a useful pattern when searching embedded source assertions.

### 6.1 Shared player visibility decision

`0x00799AD0` is a player hide/visibility decision, an analysis label rather than a recovered private symbol. It resolves the local player safe reference, consults actor flags and other client state, and may consult a visibility trigger via `0x0038D9B0`. The trigger examines inside/outside relationships and group/club-related visibility rules. The helper's result is inverted from `IsSlavePlayerVisible` when that path applies: nonzero means take the hide/fade-out side in the update routines.

Important baseline callers include `0x001DE735`, `0x001E6F6C`, `0x001EDA09`, `0x003C126B`, `0x0058A523`, `0x00794C8F`, `0x0079A50E`, `0x007C4C2C`, `0x007E2211` and another framework reference. Because this helper has several callers, including network-related actor logic, **the implementation does not globally replace it with `return true`**. It only changes the dedicated visual/update decisions after the call inside the non-local rider, horse and pet routines.

`0x001E6F50` is a small horse-to-rider adapter: resolve the horse's rider reference at +152; if present tail-call `0x00799AD0`, otherwise return true. This adapter's shape and shared target are now checked by AOB v4.

### 6.2 Existing fade behavior

The relevant actor routines already have hide/fade-out and normal/fade-in branches. They clear/update rendering flags, decrease a fade field toward zero, and can return early at zero instead of continuing normal descendant/animation work. The patch takes advantage of that supported engine behavior rather than deleting arbitrary animation/collision functions.

Baseline fade storage:

| Actor path | Fade offset |
|---|---:|
| Non-local player | +332 (`0x14C`) |
| Non-local horse | +2792 (`0xAE8`) |
| Non-local pet | +504 (`0x1F8`), with a cap at +508 |

The same fields can be zero in the user's locally controlled actor while it remains visible, because its control path differs. Never interpret a zero local fade field as proof that the local character was hidden. Stored/inactive remote records can also retain nonzero values without being on-screen.

The rendering flag helper calls are `0x000D10E0` and `0x000D20B0` in the baseline. The horse/rider hide side applies the fixed `0xF3FFFFFF` mask, clearing bits 26/27, among other normal engine work. `0x001FEAF0` is called with fade-derived values on visual objects. Its descriptive role is inferred from data flow; do not invent a recovered private method name for it.

### 6.3 Local-control exclusion

Player update `0x00794310` calls the bit-4 predicate around `0x007943B6`. Its locally controlled branch bypasses the non-local fade block beginning around `0x00794C69` and rejoins later work. The edited decision is at `0x00794C96` inside that non-local block.

Horse update `0x001E1E30` has several bit-4 calls for different purposes. The main local/remote split is the call at `0x001E20FB`, with `test al,al` at `0x001E2100` and a conditional jump at `0x001E2102` toward the non-local portion `0x001E23AA`. Local handling returns/traverses children before the later fade block. Do not mistake the earlier calls near `1E1EAD` or `1E2026` for the only ownership decision.

Pet update `0x003C1180` resolves owner and visual actor, calls bit-4 predicate at `0x003C11DC`, and branches at `0x003C11E6` to non-local work `0x003C124C` only when false. Local pet state/particles use the other branch. The edited fade decision is later at `0x003C127D`.

This exclusion was checked through pseudocode, machine instructions, isolated local-control fixtures and the user's visible own actors. A future build can change the local/remote logic independently of a short byte signature; semantic review remains necessary when an update is substantial.

## 7. Exact baseline patch sites and instructions

| Path | Predicate call | Test | JZ instruction | Displacement byte | Original → enabled | Original normal destination |
|---|---:|---:|---:|---:|---|---:|
| Rider | `0x00794C8F` → `0x00799AD0` | `0x00794C94` | `0x00794C96` | `0x00794C97` | `74 7F` → `74 00` | `0x00794D17` |
| Horse | `0x001E286C` → `0x001E6F50` | `0x001E2871` | `0x001E2873` | `0x001E2874` | `74 58` → `74 00` | `0x001E28CD` |
| Pet | `0x003C126B` → `0x00799AD0` | `0x003C127B` | `0x003C127D` | `0x003C127E` | `74 0A` → `74 00` | `0x003C1289` |

The original `JZ normal` chooses the normal side when the hide predicate is zero. Its fall-through is the existing hidden side. Setting **only the displacement** to zero makes `JZ +0` arrive at the following instruction for either Boolean result. This is equivalent to bypassing the conditional transfer while keeping a valid two-byte instruction. It avoids a multi-byte NOP or trampoline patch.

The opcode `74`, preceding `test al,al`, calls, function prologues, stack frames and instruction lengths remain intact. Each selected byte is independently one byte wide. That reduces patch complexity; it is not a concurrency/crash proof for all game states. No code cave needs to be freed while a game thread might still use it.

Baseline rider shape:

```asm
mov     rcx,rsi
call    visibility_decision        ; RVA 799AD0
test    al,al
jz      normal                    ; originally +7F, patched +00
; existing hidden/fade-out code follows
xor     edx,edx
mov     rcx,rsi
call    rendering_flag_getter      ; D10E0
and     eax,0F3FFFFFFh
...
call    rendering_flag_setter      ; D20B0
movss   xmm6,[rsi+14Ch]
...
normal:
cmp     edi,4
```

Baseline horse shape:

```asm
lea     r15,[rsi+0AE8h]            ; non-local fade storage
call    horse_rider_decision       ; 1E6F50 adapter
test    al,al
jz      normal                    ; originally +58, patched +00
; existing hidden side, including the same rendering helpers
...
normal:
cmp     ebx,4
```

Baseline pet shape:

```asm
mov     rcx,rbp                    ; resolved pet owner
movaps  xmm7,xmm0                  ; elapsed step
call    visibility_decision        ; 799AD0
movss   xmm2,[rbx+1F8h]            ; fade
xorps   xmm6,xmm6
test    al,al
jz      normal                    ; originally +0A, patched +00
subss   xmm2,xmm7
maxss   xmm2,xmm6                  ; clamp to zero
jmp     store_fade
normal:
addss   xmm2,xmm7
minss   xmm2,[rbx+1FCh]
store_fade:
movss   [rbx+1F8h],xmm2
```

Do not substitute `74→EB` here: that would force the **normal** branch, the opposite of hiding. The older sampler/MatrixAnimation experiments used `74→EB` because their desired skip targets had different control flow. This distinction is important when reusing code.

## 8. AOB v4 implementation

### 8.1 Source of truth and generated files

Maintain `work/sso-visibility-aob-v4.lua` and regenerate with `work/build-visibility-aob-v4.py`. Do not hand-edit generated CT/CEA files and forget the source. Generated deliverables are:

- `Star-Stable-visibility-AOB-v4.CT`: two independent script entries and dynamic status symbols.
- `Star-Stable-visibility-AOB-v4-avatars.cea`: horse/rider entry.
- `Star-Stable-visibility-AOB-v4-pets.cea`: pet entry.
- `Star-Stable-visibility-AOB-v4-all.cea`: combined alternative; do not enable it alongside the individual entries.

Each AA entry embeds the Lua implementation. There is no global table autorun Lua; the entry only executes when toggled. `if syntaxcheck then return end` prevents scanning or writing during CE syntax checking. The Lua code uses CE's scanner, memory reads, symbol API and Auto Assembler. It does not load an external script at runtime, allocate executable code, start a game thread or write configuration files.

### 8.2 Signature definitions

Spaces below separate bytes. `??` is a full-byte wildcard. These are not the old fixed patch addresses.

**Rider**, baseline signature match begins at `0x00794C8C`, branch offset 10, displacement offset 11, predicate CALL offset 3, flag getter CALL offset 17, setter CALL offset 35:

```text
48 8B CE E8 ?? ?? ?? ?? 84 C0 74 ?? 33 D2 48 8B CE E8 ?? ?? ?? ?? 25 FF FF FF F3 44 8B C0 33 D2 48 8B CE E8 ?? ?? ?? ?? F3 0F 10 B6 ?? ?? ?? ??
```

**Horse**, baseline signature begins at `0x001E2865`, branch offset 14, displacement offset 15, wrapper CALL offset 7, getter CALL offset 21, setter CALL offset 39:

```text
4C 8D BE ?? ?? ?? ?? E8 ?? ?? ?? ?? 84 C0 74 ?? 33 D2 48 8B CE E8 ?? ?? ?? ?? 25 FF FF FF F3 33 D2 44 8B C0 48 8B CE E8 ?? ?? ?? ?? F3 41 0F 10 0F
```

**Pet**, baseline signature begins at `0x003C1265`, branch offset 24, displacement offset 25, owner predicate CALL offset 6:

```text
48 8B CD 0F 28 F8 E8 ?? ?? ?? ?? F3 0F 10 93 ?? ?? ?? ?? 0F 57 F6 84 C0 74 ?? F3 0F 5C D7 F3 0F 5F D6 EB ?? F3 0F 58 D7 F3 0F 5D 93 ?? ?? ?? ??
```

**Horse adapter shape**, checked at the horse pattern's resolved CALL target:

```text
48 83 EC 28 48 81 C1 ?? ?? ?? ?? E8 ?? ?? ?? ?? 48 85 C0 74 ?? 48 8B C8 48 83 C4 28 E9 ?? ?? ?? ?? B0 01 48 83 C4 28 C3
```

It checks a null-owner branch to the `mov al,1` fallback and an E9 tail-call at adapter offset 28. That tail-call must target the same visibility helper as the rider's CALL. The 40-byte current wrapper and exact baseline instruction windows are in `remote-visibility-evidence/native-fade-paths.json` and `pet-patch.json`.

Wildcards cover relative code addresses, selected object-field displacements, and variable jump distances. Register encodings, the visibility mask and surrounding instruction relationships are intentionally specific. If an update changes register allocation, uses a long conditional jump or rewrites the adapter, the signature can fail. Do not solve that by wildcarding almost everything.

### 8.3 Finding and validating a match

1. Resolve the currently selected `SSOClient.exe` module. Parse its DOS/PE headers, require AMD64/PE32+, and derive image size and executable sections. PE structure offsets are format definitions, not pinned game patch RVAs.
2. Use `AOBScan(pattern, '+X', 0, '1')` to obtain **all** executable-memory candidates. Filter to the main module's executable section bounds. The scan itself can inspect other executable mappings; only the main module's code is accepted.
3. Require exactly one accepted candidate per required role. Zero or multiple results abort before any game write. Always destroy the returned CE StringList.
4. Read and match the complete live signature again to catch a change during scanning.
5. Require opcode `74`, a nonzero forward short displacement and a normal destination beginning with `83 FF 04` for rider, `83 FB 04` for horse, or `F3 0F 58 D7` for pet. A zero displacement means another table already patched the branch; do not capture zero as an “original”.
6. Resolve E8/E9 rel32 targets with signed arithmetic and require them inside client executable sections. Horse/rider rendering helper targets must agree. Horse wrapper shape/tail-target must agree with rider. Pet/rider predicate targets must agree.
7. For the pet-only entry, the rider pattern is a read-only reference and may already contain a zero displacement from the avatar entry. The pet target itself must still be original. This permits either enable order.

Why not simply `aobscanmodule`/`AOBScanModuleUnique`? The installed CE Lua documentation describes some “Unique” scanner behavior as stopping at a first/random match, whereas public documentation is not fully consistent across versions. The implementation avoids that ambiguity by counting all returned candidates itself. The [all-result AOBScan API](https://wiki.cheatengine.org/index.php?title=Lua:AOBScan) and the actual installed `C:\Program Files\Cheat Engine\celua.txt` were checked.

### 8.4 Applying, storing and restoring

The selected entries construct a patch plan containing PID, module base, image size, PE timestamp, matched sites, exact original live windows, patched windows, original displacement bytes and registered symbol names. The timestamp identifies a particular **enabled process image for restoration**; it is not a build allowlist preventing a new version from enabling.

Only after every selected site validates does Lua submit a small Auto Assembler source with all exact live `assert(...)` directives before the `db 00` writes. CE's code-writing path is used instead of assuming a raw data-memory write handles executable pages. Read-back must match each expected patched window before the entry is marked active.

State keys in CE's Lua VM:

```text
SSOVisibilityAOB4_avatars
SSOVisibilityAOB4_pets
SSOVisibilityAOB4_all
```

Only use `all` for the combined standalone alternative. The status states are `enabling`, `active`, `needs_recovery`. The source records original bytes before beginning writes, so a failure can attempt rollback.

Symbols registered only while successfully active:

```text
SSOHideAOB4_Rider
SSOHideAOB4_Horse
SSOHideAOB4_Pet
```

They point at the displacement bytes, not the start of the instruction. They are registered with the do-not-save option so saving a table does not turn them into stale absolute addresses. Disabled/unresolved status rows can display `??`; that alone is normal. **Never check/freeze the Byte status rows.** A frozen `00` can reapply the patch independently of the script and defeat restoration.

On disable, the implementation verifies the original process/image identity and each full context. It accepts either its exact original or exact patched window, allowing safe recovery after a partially completed operation. It refuses to overwrite an unknown changed window. It assembles restoration for the changed sites, verifies exact originals, unregisters owned symbols and clears state.

If enable fails after a write, it attempts the same restoration path. If that also fails, backups stay in CE with `needs_recovery`. A later retry can attempt recovery. Another active entry using the same symbols is rejected. The tests exercise partial-failure rollback and refusing changed context; they do not create real process write failures.

Keep CE/the table open until restoring, because the backups are not stored in the game or a file. Closing CE loses that VM state. Exiting the game discards these temporary code modifications. A fresh table cannot safely infer an unknown original jump distance from a live `74 00` after an update.

## 9. Test evidence and how to reproduce

### 9.1 Current confirmation layers

| Layer | What passed | What it does not prove |
|---|---|---|
| Static IDA/data flow | Native fade branches, helper links, local-control exclusion in baseline | Future build semantics |
| Fixed-address native tests | 18 branch executions across 3 gates; local rider/horse/pet fixtures preserve call sequence, stack and saved registers | Full object lifecycle, all external helper behavior, caches/integrity |
| AOB tests | 32 Lua scenarios over current layout and synthetic relocated/rebased layout | A real future game build |
| Live user test v3 | Other riders/horses/pets hide; own actors stay visible | Controlled FPS or chat behavior |
| Live user test AOB v4 | Both AOB entries enable and retain that visual scope | Long-term stability or another version |

The original isolated test report's live-visibility field was written before the subsequent user feedback. The up-to-date confirmation source is `visibility-aob-v4-evidence/confirmed-user-outcomes.json`; do not treat an older “not yet tested” field as reversing a later explicit user confirmation.

### 9.2 Dependencies and commands

Run from the original workspace, or adjust the source paths deliberately. Baseline executable bytes are not bundled as a full executable.

```powershell
python work\build-visibility-aob-v4.py
python work\test-visibility-aob-v4.py
```

The AOB test uses Python `ctypes` to load the installed `C:\Program Files\Cheat Engine\lua53-64.dll`. It executes the actual Lua source in a fresh isolated Lua VM per case. CE memory/scanner/assembler/symbol APIs are mocked with fixture memory. It does not attach to the game. The Python half independently searches the real PE's executable sections for all three signatures, requiring one match each.

Native fixed-address validation is reproduced with `python work/test-remote-visibility-v3.py`. It imports Unicorn 2.1.4 from `work/sampler-libs`. Earlier sampler validation has its own portable arguments and notes. Some sandboxed executions could not load locally installed Python packages even though normal reads worked; the existing test tool calls used the execution permission mechanism to load those libraries. That does not mean tests need administrator access to game memory.

The synthetic AOB fixture changes the module base, moves rider/horse/pet/wrapper code, recomputes relative call targets, changes selected field displacements and horse/rider branch distances, and changes the timestamp. Original captured bytes restore correctly. This demonstrates relocation tolerance of the algorithm, not correctness of unknown future game code.

Sixteen scenario types are run on each layout: combined restore; avatars-then-pets; pets-then-avatars; missing pattern; duplicate pattern; foreign-module decoy; non-executable data decoy; already-patched site; changed normal destination; mismatched predicate helper; changed wrapper; symbol collision; partial-write rollback; changed-context disable rejection; changed-process disable rejection; syntax checking with no API writes/calls.

The native local-control fixtures run original update instructions but stub external helpers, including the compiler's `_security_check_cookie` at `0x009E0E00`. The baseline false/true outcomes are modeled only for the chosen local fixture states. An initial test failed on this unmodeled cookie helper; IDA confirmed its identity before it was stubbed. Do not silently stub an unexpected function without identifying it.

### 9.3 Read-only live inspection helpers

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File work\read-native-settings.ps1
powershell -NoProfile -ExecutionPolicy Bypass -File work\read-local-actor-check.ps1
powershell -NoProfile -ExecutionPolicy Bypass -File work\read-remote-fade-state.ps1
```

These scripts use `OpenProcess` with query/read rights and `ReadProcessMemory`, then close the handle. They do not write game memory. They are **baseline-layout-specific** and contain fixed RVAs; review them before using against an update. The AOB table itself does not rely on those inspection RVAs.

The actor scanner bulk-reads registry records, follows instantiated actor pointers, checks observed vtables, resolves pet owners through the generation-checked record data, and reports flag/fade categories. It does not freeze/suspend the game; snapshots can race actor creation/deletion, so failures or transient values should be skipped/interpreted cautiously. It does not collect character names or messages.

On Windows PowerShell, `[UIntPtr]2` failed conversion in an early helper. Use `[UIntPtr]::new([uint32]2)` or equivalent constructor. That failure occurred before a trace started and was corrected.

## 10. IDA MCP workflow for the next session

Discover tools by filtering `ALL_TOOLS` for `mcp__ida`. The plugin is **Official IDA MCP Server**. Prefer its IDA decompiler/disassembler/xref capabilities over an unrelated binary dumper when semantics/call paths matter.

Typical sequence:

```javascript
const listed = await tools.mcp__ida__list_databases({});
// Reuse an appropriate available instance, otherwise:
const opened = await tools.mcp__ida__open_database({
  path: 'C:\\Users\\Rafal\\Desktop\\StarStableOnline\\Star Stable Online\\client\\SSOClient.exe.i64',
  set_current: true
});
// Use opened.structuredContent.instance_id; historical IDs expire.
await tools.mcp__ida__reference({query:'Functions.get_at Pseudocode.get_text Xrefs.data_refs_to_ea'});
```

Only request GUI mode if the user asks for the GUI; the work here used headless IDA. Opening may report database recovery/restoration. It does not mean the on-disk executable was intentionally patched. The agent did not use IDA byte-patching APIs or save modified executable bytes during this feature work.

Within `execute_python`, `db` is the current ida-domain database. Examples for the baseline:

```python
base = 0x140000000
f = db.functions.get_at(base + 0x3C1180)
text = '\n'.join(db.pseudocode.get_text(f.start_ea))
calls = [hex(ea-base) for ea in db.xrefs.code_refs_to_ea(f.start_ea, False)]
instructions = [
    {'rva': hex(i.ea-base), 'text': db.instructions.get_disassembly(i)}
    for i in db.instructions.get_between(base+0x3C1265, base+0x3C12F0)
]
```

Check the current database's image base; do not assume the baseline base for another database. Obtain source assertions by enumerating `db.strings.get_all()` and `item.contents`, following data references to strings and containing pointer arrays, then code references to those metadata records. Vtable relationships were checked with `db.names.get_all()`, `get_demangled_name`, `data_refs_to_ea`, and qword values at slot offsets.

Decompiler pseudocode sometimes removes unused memory copies, merges return values, assigns misleading integer types, or obscures stack slots. Verify the machine instructions before editing. Non-leaf ETW stack addresses normally identify return addresses after a call; inspect the preceding call, not just the displayed address. PE unwind roots can be split/chained; a short `.pdata` extent is not necessarily the full C++ method. IDA function bounds and xrefs were used to refine the analysis.

For efficient tool output, use `structuredContent.result` rather than printing both the textual content block and structured result, which duplicates large pseudocode. Exports and native evidence are already on disk; do not re-decompile everything without a reason.

## 11. Repairing a future update

### Step 1: establish facts before changing anything

Record current executable path/version/hash, PID/module base, table version, exact error message and whether another table is active. Confirm the user actually loaded the intended CT. Distinguish a syntax error, zero-match rejection, multiple-match rejection, already-patched rejection, helper relationship failure and restoration failure. Do not replace all of those with “AOB broken”.

If the user reports a successful visual test and later bytes are original, establish whether they toggled it off before the read. Do not repeatedly conclude that a confirmed table never applied. Conversely, `00` in a checkbox's display is insufficient if it is a stale/frozen row or refers to another process.

### Step 2: open the matching updated binary/database

Verify IDA is analyzing the same executable the game loaded. Reusing an old `.i64` for a replaced `.exe` can give convincing but obsolete addresses. Make a new database or deliberately refresh/rebuild it when appropriate. Keep the baseline database/evidence for comparison instead of overwriting the only known-good reference without a backup.

### Step 3: rediscover semantics, not just nearby bytes

Use RTTI classes CPXHorse, CPXPlayerSSO/TPNet and CPXPet; inspect their relevant vtable slot/current update implementations. Search embedded strings for `CPXVisibilityTrigger::IsSlavePlayerVisible`, its source path, `CreateMasterPet`, `CreateSlavePet`, and the owner visibility helper. Follow the helper into the actual update callers.

Re-establish which branch is local versus non-local. Check both the user's actor references and control flow. Do not infer ownership from the vtable name; remote characters already shared CPXPlayerSSO with the user. Identify the fade field, clamp/decrement branch, normal branch, early return and helper side effects. Verify the selected zero-displacement change really forces the hidden side.

### Step 4: derive a specific, unique signature and guards

Capture enough instruction context to distinguish roles. Wildcard relocation-sensitive rel32 operands and movable fields only where their semantics are understood. Retain discriminating opcodes/masks. Verify exact uniqueness in executable sections, the normal-branch destination, helper linkage and the correct local-control exclusion. If the compiler now uses a six-byte near JZ, do not just patch one guessed byte: redesign and validate the strategy.

AOB v4's helper adapter check is intentionally strict. If a compiler inlines/removes it, update the cross-check around the new verified data flow rather than delete all relationships. Similarly, if local-control logic changes while old fade signatures still match, signatures alone are insufficient to approve that build.

### Step 5: test failure and restoration behavior

Update the source/generator, regenerate CT/CEA, and run the relevant tests. Extend native/local-control fixtures if control flow changed. Test ambiguity, missing matches, old patches, both enable orders, actual new original byte restoration, partial failure and changed process/context rejection. Avoid tests that only mirror a new constant without checking its meaning.

### Step 6: coordinated live check, then performance measurement

Have a concrete table ready before asking the user to enable it. Ask them to disable overlapping versions and leave a named entry active for read-back. Confirm other actors hide while their own rider/horse/pets stay visible, then confirm unchecking restores normal behavior. Do not claim chat was tested without a real authorized test; no tool should send messages to others without explicit user authorization.

If testing FPS, keep camera, position, foreground state and scene as consistent as possible. Let fades/loading settle, perform off/on/off intervals, and record frame-time distributions. A visibility change is not automatically an FPS change. The user previously found no benefit from other experimental toggles.

For WPR, `require_escalated` execution alone did not supply an elevated Windows token here. The successful capture used `Start-Process ... -Verb RunAs -WindowStyle Hidden` with Windows consent. The prepared script waits for the game foreground before starting. Do not cancel another user's trace, take over gameplay or change settings to manufacture a comparison.

## 12. Troubleshooting and recovery cases

| Symptom | Likely checks / action |
|---|---|
| Zero or multiple AOB matches | Confirm build/process; scan updated code; review pattern and semantics. Do not guess a match or broadly wildcard it. |
| “Already patched” | Disable v2/v3/another v4 instance or frozen Byte rows. Do not save `00` as the original displacement. |
| Helper mismatch | Update may have changed call relationships; inspect all involved functions. Do not bypass the check solely to make the checkbox work. |
| Symbol already registered | Another entry/table owns the same temporary symbol; restore it first. |
| Byte rows show `??` while disabled | Normally expected: v4 unregisters temporary address symbols. |
| Byte rows show `00`, no visible change | Confirm correct PID, actual active script, game foreground, actor update path, owner/model references and current class implementation; not all stored records are active/on-screen. |
| Riders/horses hide, pets do not | Verify pet entry/site, live pet class/update and local-vs-slave split. The pet branch is separate from owner fade. |
| Own actor disappears | Disable immediately and restore originals; recheck ownership exclusion/current game state before adding more patches. |
| Disable rejects changed code | Preserve backups; identify the other modifier/frozen row. Never overwrite unknown context with guessed old bytes. |
| Selected process changed | Select the original process for restoration. Never reuse saved addresses in a restarted client. |
| CE closed/lost backup while game remains patched | Prefer restarting the game. For an exact known binary, on-disk original bytes can be recovered only after verifying the complete matching site/build. Do not assume old `7F/58/0A` distances for a new version. |
| Actors return slowly after disable | Existing normal fade-in/update logic takes time; allow a few foreground seconds before calling restoration broken. |

The table's changes are process code only, so exiting the game removes them. That statement does **not** apply to the earlier native-preference experiment if the client saved options while those data fields were changed.

## 13. Artifact map and historical records

| Path | Purpose |
|---|---|
| `RESUME-SSO-VISIBILITY.md` at workspace root | Short re-entry instructions for a new AI session |
| This handoff | Full reasoning, addresses, history and maintenance workflow |
| `Star-Stable-visibility-AOB-v4.CT` | Current update-tolerant table |
| `Star-Stable-visibility-AOB-v4-notes.md` | User-facing usage and limitations |
| `work/sso-visibility-aob-v4.lua` | Maintainable AOB implementation |
| `work/build-visibility-aob-v4.py` | Generates current CT/standalone files |
| `work/test-visibility-aob-v4.py` / `-fixture.lua` | Signature and state-machine tests |
| `visibility-aob-v4-evidence/validation.json` | Isolated test results and unique baseline matches |
| `visibility-aob-v4-evidence/confirmed-user-outcomes.json` | Latest explicit v3/v4 live feedback |
| `visibility-aob-v4-evidence/post-v4-feedback-readback.json` | Later original-byte snapshot; not an enabled-state capture |
| `visibility-aob-v4-evidence/aob-site-reference.json` | Machine-readable signatures, baseline gates/displacements and original/modified bytes |
| `visibility-aob-v4-evidence/ida/` and `ida-index.json` | Nineteen native pseudocode exports, baseline RVAs/VAs and hashes: full actor updates, local-control tests, visibility chain, registry/context resolvers and preference registration |
| `visibility-aob-v4-evidence/package-manifest.json` | Bundle inventory, per-file SHA-256 hashes and delivery consistency checks |
| `SSO-visibility-maintenance-bundle.zip` | Complete small-file handoff, preserving workspace layout |
| `work/package-visibility-maintenance.py` | Rebuilds source snapshots, reference indexes, manifest and maintenance archive |
| `Star-Stable-remote-visibility-v2.CT/.cea` | Fixed baseline horse/rider patch |
| `Star-Stable-remote-visibility-v3.CT` and related CEA | Fixed baseline avatar + separate pet patch |
| `remote-visibility-evidence/` | Baseline native windows, pet pseudocode, actor observations and native tests |
| `Star-Stable-quick-performance-tests.CT` / README | Older, unproven preference/Matrix/sampler experiments; keep as history |
| `Star-Stable-sampler-loop-test-notes.md` | Detailed sampler dead-copy analysis and emulator limits |
| `Star-Stable-crowded-comparison.md` / PNG | Completed foreground scene comparison |
| `crowded-play-104151/` | Valid second trace measurements, IDA actor identity exports and raw ETL |
| `crowded-play-103835/EXCLUDED-FROM-COMPARISON.md` | Background recording excluded from analysis |
| `ida-evidence/` | Earlier broader engine/CPU native exports |
| `work/read-*.ps1` helpers described above | Read-only baseline process/actor inspection |

Small packages are for source/reports/tables; the raw ETLs are large and contain system-wide tracing metadata. They were intentionally kept out of the small evidence ZIPs. No executable copy is bundled in the maintenance package. Earlier large intermediate text dumps for the excluded recording were removed; the ETL remains.

**Portable maintenance bundle:** extract `SSO-visibility-maintenance-bundle.zip` into a folder and start with `RESUME-SSO-VISIBILITY.md` at that folder's root. Keep `work/` and `outputs/` in place; scripts derive the workspace root from their own location. The ZIP includes current sources and evidence, previous tables explicitly retained as history, and the broader CPU reports/native exports. It excludes ETLs, trace symbol caches, the game executable/IDA database, installed Lua/Unicorn dependencies, giant intermediate dumps and nested old ZIPs. File hashes cover the packaged content; the manifest itself is not self-hashed. The packager verifies archive CRCs and every listed SHA-256 after writing.

After a reviewed source change and the relevant validation, regenerate the table with `python work/build-visibility-aob-v4.py`, then rebuild the bundle with `python work/package-visibility-maintenance.py`. The packager checks that both CT scripts exactly match their standalone CEA counterparts, embed the current Lua twice (enable/disable), and have the expected dynamic status symbols with no table autorun Lua. It checks the existing 32-scenario report and live-confirmation record; it does not rerun gameplay or turn a historical test into evidence for changed native semantics. Re-run and update the relevant tests separately when changing behavior. Baseline pseudocode exports are evidence, not replacement source files to compile or inject.

Some exported C filenames name a queried return address rather than the function entry, e.g. `1E2C1E.c` contains CPXHorse's `0x001E1E30` function. Descriptive filenames are analysis labels, not recovered private symbols. Always inspect the export header/function start.

## 14. Suggested prompt for a fresh AI session

> Resume the Star Stable remote visibility feature in this workspace. Read RESUME-SSO-VISIBILITY.md and outputs/SSO-Visibility-Engineering-Handoff.md first. The confirmed feature hides other players' riders, horses and pets while preserving my own. Maintain the AOB v4 source/generator and do not confuse the old ineffective preference experiment with the working native fade paths. Establish my current executable/hash, process and patch state, use Official IDA MCP to recheck changed native logic if necessary, preserve the local-control exclusion, validate scan uniqueness/helper relationships/restoration, and prepare a concrete reviewed table before coordinating a live test. Do not take over gameplay, patch chat/ignore/network handlers, or claim an FPS benefit without measuring it.

This prompt does not replace the user's actual instructions or the current session's tool/permission rules. It is a technical re-entry aid.
