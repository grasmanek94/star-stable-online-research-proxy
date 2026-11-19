# Star Stable animation sampler investigation and reversible test

Build: **SSOClient.exe 645.348067 / Stellar 645**. All code addresses below are RVAs relative to `SSOClient.exe`, so they do not depend on its runtime load address.

**Finding:** both samplers touch one record every eight keys across the full track, then discard the copied values. The actual key search and interpolation happen separately. I found no animation-output dependency on the touched values. Removing these loops is a reasonable performance experiment, but the evidence does not establish that the live game will be crash-free or faster. The supplied patch has not been applied to the game.

## What the loops do

Embedded assertion metadata identifies the helpers as anonymous-namespace `GetSample` functions in:

```text
Source/System/src/Resources/PXAnimationResource.cpp
```

The full embedded build path contains `PXRelease2026_45`. The adjacent count assertion is `keyCount <= UINT16_MAX`, with source-line metadata 118; the null-key assertion has line metadata 112. These identify the surrounding source, not the exact source line containing the loop. The search helper identifies itself as `GetKeyFromTime`.

| Sampler | Entry RVA | Loop instructions | Key record | Step between touches |
|---|---|---|---|---|
| Quaternion | `0x006841C0` | `0x006842B0`–`0x006842CE` | 20 bytes: time + quaternion | 8 keys / 160 bytes |
| Vector | `0x00684930` | `0x00684A10`–`0x00684A25` | 16 bytes: time + XYZ | 8 keys / 128 bytes |

The relevant sequence is equivalent to the following reconstruction, rather than recovered original source:

```cpp
range = choose_search_range(time, lookupTable, keyCount);

for (unsigned i = 0; i < keyCount; i += 8) {
    scratch = keys[i];  // actual loads/stores exist in the executable
                       // copied values have no later consumer
}

k = GetKeyFromTime(keys, range, time);
return copy_key_or_interpolate(keys[k], keys[k + 1], time);
```

This walks the **full index range**, but does not read every key. For example, 4,096 keys cause 512 record touches in a call even if the lookup table has already narrowed the search to a small interval. The maximum accepted count, 65,535, causes 8,192 touches. These are derived examples; this trace does not reveal the actual track lengths or number of sampler calls.

The quaternion loop reads 16 bytes plus another 4 bytes per selected record, storing them at `rsp+0x30` through `rsp+0x43`. The vector loop reads 16 bytes and stores them at `rsp+0x28` through `rsp+0x37`. Later instructions overwrite the relevant scratch bytes before consuming them. Neither loop changes the keys, lookup table, output buffer or persistent animation state.

The loop also changes temporary registers and flags. At the following search call, the sampler explicitly sets `RCX` to the key pointer, `RDX` to the selected range and `XMM2` to the time. The search overwrites the loop's temporary register/flag values before relying on them. The sampler's later calculations do not require those loop results. I checked machine instructions as well as pseudocode: the decompiler displays these as empty loops and hides the otherwise unused memory copies.

## Why touch the entire track?

The best-supported interpretation is a deliberate memory-touch or cache-warming pass. The retained loads and stores, fixed step and discarded values fit that interpretation. **Its original purpose cannot be established from the executable alone.** It could have been introduced for cache/page behavior or another historical reason; the binary does not contain an explanation.

There is no visible mathematical need to touch these records to evaluate the requested animation sample. `GetKeyFromTime` at `0x00683E60` / `0x00684010` searches the selected range using binary subdivision until the span is at most 24, then scans locally. Interpolation uses the selected key and, when needed, its neighbor. Those operations remain intact in the patch.

The memory touches may still affect performance. Removing them can avoid work and cache pressure, but some stalls may move into the later key search. An emulator cannot measure that. The important source-review question is whether this full-range pass helps representative workloads enough to justify repeating it for every sampled track. Its cost depends on total track length even when the search range is small.

For the developers: instrument calls, key counts, lookup-range widths and cycles per sampler; compare the existing pass with no pass and with touching only the selected interval. Check cache misses and whether immutable animation data could be prepared once when loaded. Repeated track sampling across bones, layers and characters can multiply this cost; that scaling has not been measured here.

## What the original trace says about potential gain

| Loop's own instruction addresses | Main-thread samples | Share of 37,745 main-thread samples |
|---|---:|---:|
| Quaternion | 1,403 | 3.72% |
| Vector | 339 | 0.90% |
| Combined | 1,742 | 4.62% |

The quaternion load at `0x006842BD` alone has 1,211 samples. Sampling identifies where execution was observed; it does not establish whether cache misses, instruction cost or another mechanism dominates that instruction. The two loops account for 1,166 samples inside the previously isolated QuestControl → Character branch.

If removing them eliminated all of their sampled CPU cost, with everything else fixed, the idealized speedup would be `1 / (1 - 1742/37745)`, approximately **4.8%**. Applied to 84.4 FPS that is roughly 88.5 FPS. This is an illustration, not a measured or guaranteed improvement; cache effects, synchronization and frame pacing can change it. These loops alone do not explain a difference between 80 and 200 FPS.

## Supplied test files

- `Star-Stable-sampler-loop-test.CT`: Cheat Engine table containing three alternatives: both loops, quaternion only, vector only. All start disabled.
- `Star-Stable-sampler-loop-test.cea`: standalone Auto Assembler script for both loops, with `[ENABLE]` and `[DISABLE]`.
- `Sampler-loop-patch-evidence.json`: original bytes, guard bytes and build identity.
- `Sampler-loop-emulation-results.json`: offline differential test results.
- `sampler-test-evidence/`: instruction/source metadata and a reproducible offline test harness.

Each selected loop changes **one opcode byte**, preserving the original branch displacement:

| Gate RVA | Disabled/original | Enabled | Existing target |
|---|---|---|---|
| `0x006842A4` | `74 29` (`JZ`) | `EB 29` (`JMP`) | `0x006842CF`, after quaternion loop |
| `0x00684A06` | `74 1E` (`JZ`) | `EB 1E` (`JMP`) | `0x00684A26`, after vector loop |

This preserves the stack frame, argument checks, search and interpolation. It uses no allocation, trampoline, DLL or injected thread. A thread already inside a loop can finish that loop. This simple change reduces patch complexity but does not prove runtime safety.

Both enable and disable check the PE timestamp, image size and a 48-byte instruction window around each selected gate before writing. Enable expects original bytes; disable expects the patched bytes. Cheat Engine's [`assert` directive](https://wiki.cheatengine.org/index.php?title=Auto_Assembler:assert) rejects a script when its expected bytes do not match. These are strict site/build checks, not a runtime hash of the whole process image.

Exact executable SHA-256:

```text
3CEC805521C70B64F1A33C5A0EFA67679B8112DACBE9594AB1B47301B4D3DE8D
```

## Validation and its limits

An isolated Unicorn x86-64 emulator ran the executable's original sampler and search instructions, comparing the original and patched versions on **630 input cases**. Selected counts were 0, 1, 2, 7, 8, 9, 24, 25, 64, 255, 1,024, 4,096 and 65,535, plus randomized counts and values. This does not mean every integer count was tested. Cases included negative time, start, interior, end and beyond-end time; interpolation enabled/disabled; lookup tables present/absent; and normalized quaternion/vector inputs.

All cases produced identical output bytes and identical external math-call arguments. Checks also covered output guard bytes, returned output pointer, callee-saved integer/XMM registers, stack restoration and writes outside the output/stack areas. The bypass executed zero iterations of the two loops. Thirty additional cases verified restoration, fifteen per sampler. In total the harness executed the samplers 1,320 times and removed 101,660 loop iterations in the compared cases.

The native `acosf`/`sinf` calls were modeled with deterministic float32 Python math shims. Thus this checks sampler data flow and equal math inputs, not integration with the game's actual CRT. It does not model CPU caches, concurrent game state, arbitrary invalid inputs or executable-integrity checks. The CE table/XML and its enable/disable byte changes were checked separately against the executable, but the Cheat Engine assembler and live game have not executed this script. There is no live FPS result yet.

**A crash-free guarantee is not available.** If that is a strict prerequisite, do not activate the experiment. The deliverable is an offline-tested, reversible candidate for an optional A/B test.

## How to run a useful A/B test

1. Open the `.CT` in Cheat Engine and select the running `SSOClient.exe` process. The recorded PID was 8516, but it changes after restarting. Confirm build 645.348067.
2. Keep the same standing position, camera, settings and foreground state. Let loading settle. Record about 60 seconds with all three entries unchecked.
3. Check **one** entry, initially the quaternion-only variant. Record the same interval; uncheck it and repeat the original condition. Compare frame-time distributions or median FPS, not a single instantaneous reading.
4. Repeat with both loops, or vector-only, as useful. Keep one table entry active at a time. Do several off/on/off comparisons because other players and scene state can change.
5. Uncheck the active entry to restore the original code. If an assertion fails, leave the script unchanged: it may be another build or another patch may have changed these bytes. Do not remove the guards. Restarting the game loads its original executable code again; these scripts do not edit the on-disk executable.

Record any animation glitches as well as FPS and frame-time results. A small average-FPS difference within normal run-to-run variation is not evidence of improvement. A consistent result under matched conditions would give the developers stronger evidence than the original sample counts alone.
