# Quick Star Stable performance experiments

**Recheck result:** the user reported no benefit or visible effect from these entries. Read-back confirmed the preference writes and MatrixAnimation patch did apply. The hide preferences therefore did not produce the requested visibility behavior in this scene. Use `Star-Stable-remote-visibility-v3.CT` for the later runtime-fade approach; the user confirmed the v2 horse/rider fade paths hide other players. The old experiments remain here as a record, not established optimizations.

Open **Star-Stable-quick-performance-tests.CT** in Cheat Engine and select `SSOClient.exe`. These entries target **645.348067 / Stellar 645** only. All start disabled. Try one at a time, in the same scene, and uncheck it to compare with the original condition.

These are diagnostic experiments, not proven FPS improvements. No entry has been activated in the live game by the profiler, and a crash-free guarantee is not available.

## 1. TRY: native hide horses/riders preferences

This sets four existing Boolean preferences to 1:

| Native preference name | Settings-block offset |
|---|---:|
| `HideMountedHorseAndPlayer` | `0xAA` |
| `HideUnmountedHorse` | `0xAB` |
| `HideUnmountedPlayer` | `0xAC` |
| `GraphicsHidePlayers` | `0xAD` |

IDA identifies their names and addresses in the preference load/save routine at RVA `0x00631970`. A read-only check of the running game verified the CPXStudio pointer/vtable, settings pointer, and that all four values were zero. The table follows the current pointer chain instead of using a captured heap address:

```text
studio   = [SSOClient.exe + 0x013794C8]
settings = [studio + 0x2B8]
flags    = settings + 0xAA, four bytes
```

**The visual effect is unverified.** These are promising native controls by name; the investigation has not established which runtime path consumes them, whether they apply immediately, or whether they hide only other players rather than your own avatar as well. If nothing changes, that does not establish that the CPU cost of other players is small. It may mean these preferences are unused in the current mode or only applied during another settings flow. The entry is labelled as a trial for this reason.

The script only writes these four preference bytes. It does not call the network/ignore APIs, change an IgnoreList, or write chat-muting fields. It does not send an ignore/ban request. This is not a confirmed implementation of remote-only hiding with guaranteed unchanged chat behavior; that requires confirming the native visibility path in-game.

Enable checks the PE timestamp/image size, the `GraphicsHidePlayers` string, the observed CPXStudio vtable and Boolean values. It saves the original four bytes in Cheat Engine's Lua state. Disable restores them if the same process, studio and settings block remain. If the block has been recreated, it avoids writing to the stale address. If another process is selected, it retains the saved state and asks you to select the original game before disabling.

**Keep Cheat Engine and the table open until you uncheck this entry. Uncheck it before changing/saving graphics preferences or logging out.** It modifies a native preference block, and the game may save such preferences to disk; closing Cheat Engine loses the in-memory backup. The script itself does not edit any file. Do not combine this table's sampler entry with the older sampler table's overlapping entries.

## 2. DIAGNOSTIC: freeze procedural MatrixAnimation

This changes the existing conditional jump at `SSOClient.exe+0x000DA668` from `74 08` to `EB 08`. It skips the call to procedural transform/animation step `0x000DD9E0` from `CPXMatrixAnimation` slot 14, while retaining its child traversal at `0x000B3390` and original stack/register restoration. Disable restores `74`.

This is global, including world actors. It can freeze moving/animated scene objects and alter their positions or behavior. It is not a remote-character animation toggle and the skipped work is not established to be unnecessary. Use it to measure the cost of this procedural animation category, then disable it. The category occupied roughly 3% of main-thread samples inclusively in the new scene; this is not a prediction of saved time.

The script checks the build headers and a 40-byte instruction window. It changes one opcode byte and uses no allocation, trampoline or injected thread. No collision checks, ground-query results or whole Character/Player update routines are skipped by this entry.

## 3. TEST: skip both sampler touch loops

This is the previous experiment, copied into the new table for convenience. It changes one branch opcode per loop, leaving key search and interpolation intact. The earlier table's analysis and limitations still apply. Your reported lack of a visible FPS increase remains the only live outcome reported so far; no improvement is claimed.

## Validation

- Native visibility: the actual enable/disable Lua bodies were run in an isolated Lua 5.3 VM with **mocked** Cheat Engine memory APIs. All 16 original Boolean combinations were saved/restored correctly. Seven invalid-build/pointer/data cases were rejected before writes. Syntax checking made no writes, selecting another process preserved the backup, and recreating the settings block avoided stale writes.
- MatrixAnimation: 12 isolated native-wrapper executions covered the active/inactive and animation-enabled/disabled combinations, the bypass, and original behavior. Child-traversal arguments, callee-saved registers and stack restoration passed. External calls were stubbed, so object/world behavior is not tested.
- Samplers: the previous 630 original/bypass comparisons and 30 restoration comparisons passed under the documented emulator/math-shim limitations.
- Table XML and exact patch bytes were checked. The **Cheat Engine Auto Assembler has not executed these new scripts**, and there is no live FPS/visual/crash test for the new entries.

`Quick-performance-table-validation.json` records the new checks. `quick-table-evidence/` contains native preference registration, exact MatrixAnimation instructions and the test inputs/harness. The standalone scripts are `Star-Stable-native-visibility-test.cea` and `Star-Stable-matrix-animation-test.cea`.

The completed capture comparison is in [Star-Stable-crowded-comparison.md](Star-Stable-crowded-comparison.md). It found approximately 84.4 → 63.0 kernel presents/s, 92.5% → 95.2% main-thread scheduling on one core, and substantially more horse/player animation and collision-query work. Those larger pipelines produce state used elsewhere, which is why this quick table does not blindly remove them.
