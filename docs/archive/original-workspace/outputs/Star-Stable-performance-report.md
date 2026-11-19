# Star Stable: steady low FPS CPU trace

**Updated after IDA inspection:** the class labels below are inclusive ancestry, not standalone subsystem costs. The QuestControl branch is mostly delegated Character animation/pose work; Terrain's ~20% call site is shared child-actor traversal. See `Star-Stable-IDA-hotspot-analysis.md` for the corrected interpretation, exact code behavior and conditioned stack counts.

A 41.014-second Windows performance trace strongly supports a main-thread CPU bottleneck in the captured nighttime scene. The game submitted approximately **84.4 frames per second**. Its main thread was scheduled for **92.5% of the capture**, while the game's GPU scheduling intervals covered **34.6%** of the trace. Most sampled execution on the main thread was inside the game executable.

The useful developer lead is **engine object/scene traversal and evaluation**, with substantial sampled work under `CPXSpace`, `CPXTerrain`, and `CPXQuestControl`. Class identities were recovered from the executable's C++ runtime type information (RTTI), and code locations were recovered from CPU stacks. Method names and source lines require the developer's matching private symbols.

## Capture and reproduction

- Captured November 15, 2026, approximately 00:40:14–00:40:55 Europe/Amsterdam.
- Current nighttime scene. The user controlled the game throughout. No gameplay input or graphics-setting changes were made by the profiler.
- User described stable low FPS, roughly 80 compared with sometimes 200, without stutter in this scene. The reported worsening around many players was **not tested as a controlled comparison**.
- CPU: Intel Core Ultra 7 270K Plus, 24 cores / 24 logical processors.
- GPU: NVIDIA GeForce RTX 4080; Windows driver version `32.0.16.1742`.
- OS: Windows 10, build 19045.
- Executable: `SSOClient.exe`, file version `645.348067`, product `Stellar 645`, 21,418,896 bytes.
- SHA-256: `3CEC805521C70B64F1A33C5A0EFA67679B8112DACBE9594AB1B47301B4D3DE8D`.
- Process ID 8516; main thread ID 2584; kernel presentation events were emitted on thread 11516.
- Recorder: Windows Performance Recorder, CPU verbose plus GPU light, file mode. CPU sampling interval: 1 ms. Trace header reports zero lost buffers and zero lost events.

## What the measurements show

| Measurement | Result | Interpretation |
|---|---:|---|
| Kernel presentation events | 3,442 | Approximately 84.4 submissions/s over their observed span |
| Median presentation interval | 11.683 ms | Consistent with steady FPS in the mid-80s |
| 95th / 99th percentile interval | 13.483 / 15.357 ms | Modest interval variation in this capture |
| Maximum presentation interval | 33.263 ms | Four intervals exceeded 25 ms; none exceeded 50 ms |
| Main-thread scheduled CPU time | 37.927 s / 41.014 s | 92.5% of one logical processor |
| Other busiest game thread | 7.518 s | 18.3% of one logical processor |
| Total game scheduled CPU time | 47.982 s | About 1.17 logical processors, or 4.87% of 24-processor capacity |
| Game GPU scheduled interval union | 14.179 s | 34.6% of trace, on GPU node 0 |
| All-process GPU node 0 interval union | 18.351 s | 44.7% of trace; includes desktop and other processes |

The low total CPU percentage hides the nearly saturated main thread. The GPU is not continuously occupied. All recorded kernel presentation events had flip interval 0; this does not by itself rule out every driver or application limiter, but the sustained main-thread execution is strong evidence that game CPU work is limiting this scene.

GPU percentages above describe the union of ETW DMA start/stop scheduling intervals, attributed through device and context rundown. They are **not hardware shader-utilization counters or PresentMon GPUBusy measurements**. All 29,864 matched game packets were attributed to node 0; the parsed scheduling records had no unmatched start/stop pairs.

## Where the main thread spends its CPU time

Of 37,605 main-thread CPU samples with recorded stacks:

| Executing module | Share of main-thread samples |
|---|---:|
| `SSOClient.exe` | 88.99% |
| Windows kernel | 5.15% |
| `ntdll.dll` | 3.17% |
| NVIDIA OpenGL driver, `nvoglv64.dll` | 1.30% |
| RTSS overlay hook, `RTSSHooks64.dll` | 0.45% |
| Other modules | 0.94% |

These are **exclusive** sample shares: the module executing at the sampled instruction. Driver time on other threads is not included in this particular table. RTSS was present during the capture; this capture does not establish what performance would be without it.

### High-value call paths for the developers

All locations below are RVAs: offsets relative to the loaded `SSOClient.exe` image. They are valid for the exact executable hash above. For non-leaf stack frames, the location is generally a return address following a call; resolve it using the corresponding build's symbols. Percentages count unique main-thread CPU samples containing that stack location, including descendant calls. **Rows overlap and must not be added.**

| Stack location | Identification from the binary | Inclusive main-thread samples |
|---|---|---:|
| `SSOClient.exe+0x0063441F` | Within `CPXStudio` virtual method at root RVA `0x00633CA0`, vtable slot 112 | 64.30% |
| `SSOClient.exe+0x006295B1` | Within `CPXStudio` virtual method at root RVA `0x006294E0`, slot 168 | 63.22% |
| `SSOClient.exe+0x006886BC` | Return address after virtual dispatch in an indexed object loop; root RVA `0x006885A0` | 62.19% |
| `SSOClient.exe+0x00176B36` | Within `CPXSpace` virtual method at root RVA `0x00176640`, slot 108 | 60.08% |
| `SSOClient.exe+0x001A3D47` | Within `CPXTerrain` virtual method at root RVA `0x001A1CD0`, slot 14 | 19.74% |
| `SSOClient.exe+0x00295DD6` | Within `CPXQuestControl` virtual method at root RVA `0x00295D40`, slot 14 | 14.96% |

The `0x006886BC` frame occurs repeatedly in some stacks: its unique-inclusive share is 62.19%, whereas counting repeated occurrences gives 121.19%. That supports nested/repeated dispatch through this code; it does not alone prove an erroneous recursion. The disassembly at `0x006886B9` calls a virtual method at vtable byte offset `0x70` (slot 14) while iterating indexed objects. This slot corresponds to several observed object types, including terrain and quest-control objects. The available evidence supports object evaluation/traversal as a useful investigation area; the exact operation's name remains unknown.

### Hottest code regions by self time

To avoid treating adjacent hot instructions as unrelated functions, sampled instruction RVAs were grouped using PE exception/unwind regions and chained-unwind roots. These are native code-region identities, not recovered private method names. Only symbols/instructions seen in the exported report contribute to the grouped totals.

| Root / code location | Main-thread self samples | Observed behavior / identification |
|---|---:|---|
| `0x000CC650` | 6.42% | Small getter with pointer dereferences and a virtual call, copying three 32-bit fields into a 12-byte result; exact data type unknown |
| `0x006841C0` | 5.13% | Numeric/indexed-record processing; hot load at `0x006842BD`; operation name unknown |
| `0x006885A0` | 4.42% | Indexed-object loop with repeated indirect/virtual calls, including hot call instruction `0x006886B9` |
| `0x008B69A0` | 4.40% | Shared virtual implementation referenced by RTTI-identified `dxSimpleSpace` and `dxHashSpace`, slot 9; strongly matches ODE `collide2` geometry-list scanning |
| `0x0009D970` | 3.18% | Unsymbolized game code; resolve against the matching private PDB |
| `0x008B7240` | 2.87% | Called by the identified collision-space scan; resolve exact method/inlining with private symbols |

The ODE identification combines two independent observations: the binary's RTTI/vtable references and the instruction sequence (lock count, geometry cleanup, flag filtering, linked-list iteration, callback path). The upstream [ODE collision-space implementation](https://github.com/odedevs/ode/blob/master/ode/src/collision_space.cpp) contains matching `dxSimpleSpace::collide2` and `dxHashSpace::collide2` structures. This is a strong source correspondence, not proof that the game uses the current upstream revision. The trace does not establish quadratic scaling or that collisions dominate total frame time.

## Requested developer investigation

1. Load the raw ETL with the private symbols for the exact executable, filter CPU Usage (Sampled) to PID 8516 / TID 2584, and resolve the Studio → Space/object-dispatch paths above. Inspect Terrain and QuestControl descendant work first.
2. Add internal timing and invocation counters to slot-14 object evaluation, Character/SkinMesh animation and pose generation, terrain-object preparation, and the identified collision scan. See the IDA follow-up report before interpreting the QuestControl class label as quest-condition evaluation. Check repeated evaluations within a frame and work done for inactive or distant objects. These are investigation targets, not established bugs.
3. Review the high-frequency getter/data traversal and collision candidate scans for avoidable repeated work, then measure the change. CPU sampling alone does not identify cache-miss rates or prove lock contention.
4. Repeat a matched quiet-versus-crowded capture, keeping camera, location, settings and movement comparable, and count nearby players/entities. This is needed to establish which measured path grows with player count.

## Limits and evidence files

This is one observational capture, with tracing overhead that was not independently quantified. It supports a steady main-thread bottleneck in this scene; it does not reproduce a 200-FPS baseline or the crowded-player stutter complaint. Graphics options and resolution were not changed during the capture. It does not establish a network/server bottleneck, a memory leak, or an exact faulty source line.

The installed service-based PresentMon CLI could not connect to its service, and the portable PresentMon ETL reader did not produce a usable frame CSV from this recording. Consequently, the presentation intervals in this report were independently extracted from `Microsoft-Windows-DxgKrnl/Present` events for this process. They measure kernel presentation submissions, **not confirmed display times or end-to-end latency**.

- `performance-overview.png`: measurement overview.
- `kernel-present-intervals.csv`: kernel submission intervals and presentation fields.
- `thread-summary.csv`, `thread-cpu-counters.csv`: scheduled thread time and independent cumulative thread CPU counters.
- `main-modules.csv`, `main-hot_inclusive.csv`, `main-hot_exclusive.csv`, `main-hot_regions.csv`: process-filtered main-thread CPU evidence.
- `all-*.csv`: CPU evidence across the game's threads, not all system processes.
- `gpu-scheduled-intervals.csv`: attributed game scheduling intervals.
- `main-thread-stacks.html`, `game-cpu-stacks.html`: game-filtered resolved stack reports. Private game methods remain unnamed.
- `build-details.json`, `rtti-evidence.json`: binary identity and class/vtable mapping evidence.
- `starstable-night-steady.etl`: original trace, about 789 MiB. It contains system-wide process, machine and path metadata; share this raw file privately with developer support rather than posting it publicly. The small evidence ZIP excludes the raw ETL.

Method references: Microsoft's [CPU analysis documentation](https://learn.microsoft.com/en-us/windows-hardware/test/wpt/cpu-analysis) describes the sampled-stack workflow; the [PresentMon console documentation](https://github.com/GameTechDev/PresentMon/blob/main/README-ConsoleApplication.md) distinguishes frame metrics from display and GPU timing. All measured values here come from the local capture, not these external references.
