# Star Stable: more players / active-play trace compared with the earlier scene

**The new capture remains limited primarily by main-thread CPU work.** It averaged **63.0 kernel presents/s**, compared with **84.4** in the earlier standing nighttime scene, a **25.4% reduction**. The strongest workload increases are animation/pose evaluation, horse/player actor updates and collision queries. This is a comparison of two different real scenes, not a controlled measurement of player count alone.

![Comparison chart](Star-Stable-crowded-comparison.png)

## Measurements

| Measurement | Earlier standing scene | New busier active-play scene |
|---|---:|---:|
| Recorded duration | 41.014 s | 61.334 s |
| Kernel presents | 3,442 | 3,845 |
| Presents per second | 84.4 | 63.0 |
| Median present interval | 11.68 ms | 15.75 ms |
| 95th / 99th percentile interval | 13.48 / 15.36 ms | 17.55 / 20.33 ms |
| Maximum present interval | 33.26 ms | 34.95 ms |
| Intervals over 25 / 50 ms | 4 / 0 | 20 / 0 |
| Main thread scheduled, fraction of one CPU core | 92.5% | 95.2% |
| Main-thread scheduled CPU time / present | 11.02 ms | 15.19 ms |
| Game GPU scheduled interval union / trace | 34.6% | 36.6% |

Main-thread CPU time per present increased approximately **37.8%**. The busiest other game thread used 17.1% of a core. Approximately 89.9% of recorded main-thread sample instructions were in the game executable, versus 88.7% previously. The new main-thread NVIDIA OpenGL-driver share was 1.21%.

The main thread's sustained execution, the large amount of game code beneath it, and gaps in GPU scheduling strongly support a CPU-side limit. The recorded GPU percentages are **unions of ETW DMA start/stop scheduling intervals**, not hardware shader utilization or PresentMon GPUBusy. They do not measure CPU draw-call preparation. No GPU saturation is apparent from this measure.

The complete five-second buckets in the new trace ranged from 60.6 to 66.4 presents/s. It was mostly sustained lower throughput, with no interval exceeding 50 ms, rather than severe repeated stalls in this particular minute.

## Where the extra work appears

| Work, including callees unless marked self | Earlier main-thread sample share | New share | Approximate CPU ms / present, earlier → new |
|---|---:|---:|---:|
| Terrain method, including descendants | 32.81% | 26.39% | 3.60 → 4.00 |
| QuestControl, including Character | 15.01% | 11.82% | 1.65 → 1.79 |
| Animation/pose pipeline | 19.33% | 23.85% | 2.12 → 3.61 |
| Animation mixer | 17.30% | 21.16% | 1.90 → 3.20 |
| Collision-space scan | 7.50% | 10.95% | 0.82 → 1.66 |
| Sampler touch loops, self | 4.62% | 4.75% | 0.51 → 0.72 |

These rows overlap and must not be added. Approximate CPU ms/present uses the 1 ms sampling period and divides sample counts by recorded presents; it is an aggregate estimate, not a method timer or latency for an individual frame. Reporting only percentages would hide growth in per-frame cost when fewer frames are produced.

Animation/pose at RVA `0x006C4600` increased from about **2.12 to 3.61 sampled ms/present (+70%)**. The mixer at `0x006BFF10` increased from about **1.90 to 3.20 ms/present**. The shared collision-space scan at `0x008B69A0` increased from approximately **0.82 to 1.66 ms/present (+102%)**. Most of the added pose and collision samples occur outside the previously isolated QuestControl branch and Terrain's final shared child traversal.

Terrain remains a large inclusive cost, but its main-thread share fell while its normalized cost grew only around 11%. QuestControl's normalized cost grew roughly 9%. The additional animation work should not all be attributed to QuestControl.

### Horse and player actor updates identified in IDA

Named vtables identify `0x001E1E30` as **CPXHorse virtual slot 14**, and `0x00794310` as the shared **CPXPlayerTPNet / CPXPlayerSSO virtual slot 14** implementation. Both were checked through data references to the corresponding vtable entries.

| Actor update, including descendants | Main-thread sample share, earlier → new | Approximate CPU ms / present | Ratio |
|---|---:|---:|---:|
| CPXHorse update | 5.54% → 18.24% | 0.61 → 2.76 | 4.54× |
| CPXPlayerTPNet / CPXPlayerSSO update | 2.81% → 6.98% | 0.31 → 1.06 | 3.43× |

The horse and player rows overlap: 3,660 new samples contain both update functions. Their growth is evidence of more CPU work in these actor paths, not a measured count of additional actors or calls. The player implementation is shared by multiple classes, so samples alone cannot distinguish the local player from remote players.

The direct horse animation call returns at `0x001E2C1E`; pose samples containing that call rose from 356 to 2,605. The shared player implementation's direct animation call returns at `0x00795B83`; its pose samples rose from 215 to 1,226. All pose samples with a horse-update ancestor increased from 1,006 to 6,227. This connects a substantial part of the animation growth to actual horse/player update code rather than only broad scene labels.

### Collision queries and their callers

IDA confirms `0x008B7240` performs category/mask and three-axis bounding-box overlap tests, virtual checks and a callback; it is called by the collision-space scan. Its inclusive sampled cost rose from approximately 0.34 to 0.64 ms/present. This overlaps the scan row.

Two concrete query callers grew substantially: helper `0x003C0210` constructs a vertical segment and calls the space-query helper at `0x00177580`; helper `0x001ED760` builds a segment from an actor position and direction and makes another query through the same helper. Their return sites are `0x003C0384` and `0x001ED939`. Their sampled costs each grew from about 0.08 to 0.36 ms/present. World-level collision processing under `0x00171360` also grew. These are candidates for checking query frequency, geometry candidates visited and reuse of unchanged query results.

## What this means for the sampler experiment

The two full-track touch loops contributed 4.75% of main-thread samples versus 4.62% previously. Their normalized sampled cost was approximately 0.51 → 0.72 ms/present. They are a small part of the larger animation/update pipeline. Your earlier report of no visible benefit from skipping them remains consistent with there being no large improvement available there; these two captures do not constitute a patched/unpatched A/B test.

The new trace read the original branch bytes (`74 29` and `74 1E`) at both the beginning and end. **Neither sampler bypass was enabled, and the profiler did not modify the game.**

## Concrete requests for the developers

1. Profile CPXHorse slot 14 at `0x001E1E30` and CPXPlayerTPNet/CPXPlayerSSO slot 14 at `0x00794310`, including their attached skin meshes, rigs and pose-generation calls. Instrument rigs, bones, layers, update frequency, visibility/distance state and repeated pose requests per frame. Evaluate whether inactive or distant actors can use less frequent animation updates and whether a pose can be reused within a frame.
2. Profile the pose pipeline `0x006C4600`, mixer `0x006BFF10`, and bone/transform lookup `0x006B7070`. The latter performs a hashed identifier lookup before extracting transform components; record lookup counts and repeated identifiers, then investigate caching resolved bindings where lifetimes permit.
3. Instrument collision-space scan `0x008B69A0`, pair filter `0x008B7240`, query entry `0x00177580` and the concrete callers above. Record queries, candidates visited, overlap tests and hits per frame. Check spatial-query behavior and reuse for unchanged inputs.

These are investigation targets, not conclusions that a particular cache, culling rule or collision algorithm is incorrect. The binary contains no reliable per-object identities or invocation counters in the trace.

## Capture quality and comparison limits

- Valid new capture: **November 15, 2026, 10:41:52.916–10:42:54.251 Europe/Amsterdam**, process 17128, main thread 19296, present thread 12668.
- Game active in all **60/60** one-second foreground checks. An earlier recording during this session had ChatGPT/browser foreground and was excluded from this comparison.
- Identical executable version **645.348067**, SHA-256 `3CEC805521C70B64F1A33C5A0EFA67679B8112DACBE9594AB1B47301B4D3DE8D`, hardware and GPU driver. Every code address in this report is a module-relative RVA.
- Same WPR CPU + GPU.light profiles and **1 ms** sampling period. Both trace headers report **zero lost buffers/events**. New trace has 58,227 main-thread sample events with attached stacks and 422 without a recorded stack; sample-based tables use only the former. Earlier IDA tables use 37,745 attached-stack events.
- GPU: 45,081 matched game packets, no unmatched stops or unmapped completed packets; two all-process starts remained unfinished at the trace boundary. Game packets map to node 0.
- In both traces the main thread's sampled execution was predominantly on logical processors 12 and 13. A read-only, post-capture Windows CPU-set query places both in the system's higher-performance class (`EfficiencyClass = 1`, versus 0 for the other class), so the data does not support blaming this on the main thread mostly running on the lower-performance class. Microsoft documents that higher [EfficiencyClass values identify faster processors](https://learn.microsoft.com/en-us/windows/win32/api/winnt/ns-winnt-system_cpu_set_information). The raw query is in `cpu-topology.json`. No affinity or clock changes were made. Actual CPU clock/thermal counters were not captured, so identical runtime frequency is not established.
- This morning's busier scene also involved active play, a different camera/scene/time and an unmeasured player population. It establishes the costs observed during this slowdown, **not the causal effect of adding one player**, a scaling law, or a controlled comparison with identical objects/settings.
- Presentation intervals measure kernel submission cadence, not confirmed displayed frame rate, input latency or server/network lag.

The accompanying evidence ZIP contains the report, chart, CSV/JSON measurements and IDA exports. The raw ETL is saved separately at `crowded-play-104151/starstable-crowded-play.etl` and is not included in that small ZIP.
