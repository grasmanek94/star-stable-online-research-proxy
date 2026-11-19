# Star Stable: hiding-enabled capture and cosmetic optimization findings

The current proxy hiding paths were verified executing throughout a foreground recording on **2026-11-15, 15:23:18–15:24:19 Europe/Amsterdam**. The user confirms this is essentially **the same area** as before; they did not substantially change locations. This report compares it with the earlier crowded trace. Exact camera/movement and nearby player activity were not controlled.

The new recording averages **96.3 frame submissions/s**, versus **63.0** earlier. Animation/pose work is much lower. The main thread remains CPU-bound, and world traversal, transforms and collision queries account for much of the remaining work. These results strongly support the intended reduction in animation work; the exact total FPS gain attributable to the proxy is not isolated by these two recordings.

![Observed comparison](Star-Stable-hiding-enabled-comparison.png)

## Capture integrity

- Same executable **645.348067**, SHA256 `3CEC805521C70B64F1A33C5A0EFA67679B8112DACBE9594AB1B47301B4D3DE8D`.
- **60/60** foreground checks and **60/60** checks with active=1 and all 11 category flags=1. Cache epoch remained stable.
- All **18** exact owned hook targets and surrounding contexts verified before and after capture. Category decision counters increased; they count calls, not actors.
- The installed proxy differs from the tested CMake Release DLL only in COFF/debug timestamp bytes. A full byte comparison established identical code/data/relocations/layout before generating matching hash-bound diagnostic metadata. See `hiding-enabled/proxy-layout-verification.json`.
- CPU sampling period **1 ms**; **zero lost buffers/events**. Main-thread attached-stack samples: **60,567**. Common game-loop root present in 99.16% of them, versus 99.52% earlier. Stack coverage does not show a major loss of ancestry through the proxy.
- Full ETL lasts 81.550s because WPR recorded a stop/merge tail. Analysis consistently clips CPU sampling, thread scheduling, presents and GPU intervals to the actual **60.877s** recording window. The tail is excluded.
- Both sampler bypass branches remained native. The agent only read state/captured ETW; the user enabled F5 and controlled gameplay. No new optimization patch was applied.

## Measurements

| Metric | Earlier crowded capture | All hiding enabled |
|---|---:|---:|
| Frame submissions/s | 63.0 | 96.3 |
| Median frame interval, ms | 15.75 | 10.22 |
| p95 / p99 frame interval, ms | 17.55 / 20.33 | 11.51 / 14.72 |
| Main-thread scheduled share of one core | 95.2% | 99.5% |
| Main-thread scheduled CPU per present, ms | 15.19 | 10.33 |
| Game GPU scheduled interval union / duration | 36.6% | 31.3% |

Presentation cadence is not a confirmed displayed FPS counter. GPU values are ETW packet interval unions, not hardware shader utilization. The GPU has substantial scheduling gaps while the main thread is nearly saturated.

| Work, inclusive except sampler row | Earlier estimated ms/present | Hiding estimated ms/present | Hiding share of main samples |
|---|---:|---:|---:|
| Terrain / world descendants | 3.996 | 3.976 | 38.50% |
| Animation / pose | 3.611 | 0.317 | 3.07% |
| Animation mixer | 3.204 | 0.278 | 2.70% |
| Collision-space queries | 1.659 | 1.283 | 12.43% |
| QuestControl + Character | 1.790 | 0.147 | 1.43% |
| Sampler touch loops (self) | 0.720 | 0.059 | 0.57% |

Rows overlap and cannot be added. The animation mixer is nested within the broader pose pipeline. CPU-per-present estimates use nominal 1ms samples, not per-method timers.

Animation/pose falls from about **3.61 to 0.32 ms/present**. The terrain/world family remains about **4.00 ms/present**, even though its relative share rises. Collision queries remain about **1.28 ms/present**. This explains why suppressing animation does not take the game to several hundred FPS: substantial scene and physics work continues.

Instruction-level main-thread hotspots include collision scan `0x8B69A0` (7.25% self), world-position getter `0xCC650` (6.62% self), indexed child dispatcher `0x6885A0` (5.01% in the hottest region), and collision pair filtering `0x8B7240` (4.84% in the hottest region). These support developer investigation of repeated unchanged transform reads, actor traversal and collision-query candidate processing while preserving their results.

Only **0.41%** of samples have the instruction pointer inside the application-directory proxy. This is exclusive executing time, not all forwarding/call overhead. It does not appear to be the dominant remaining CPU consumer.

## Concrete cosmetic candidates from IDA

All addresses below are **baseline game RVAs**, not live absolute addresses. Source exports and string/property cross-references are under `cosmetic-optimization-evidence/`.

| Path | RVA | New main-thread sampled share | Estimated ms/present |
|---|---:|---:|---:|
| grass | `0x2415d0` | 0.021% | 0.0022 |
| rain | `0x2427f0` | 0.000% | 0.0000 |
| snow | `0x243140` | 0.000% | 0.0000 |
| flare | `0x1383f0` | 0.028% | 0.0029 |
| trail | `0x136af0` | 0.041% | 0.0043 |
| particle | `0x112970` | 0.203% | 0.0210 |
| particleEx | `0x10aec0` | 4.171% | 0.4307 |
| particleExCore | `0x10af80` | 1.701% | 0.1756 |
| ShadowMap-actual-pass | `0x6ed000` | 0.553% | 0.0571 |
| Reins-callback-registration | `0x106e00` | 0.350% | 0.0361 |
| Reins-animation-callback | `0x1072c0` | 0.036% | 0.0038 |

1. **Decorative particle effects are the strongest remaining cosmetic lead in this scene.** `CPXParticleSystemEx` draw/update wrapper `0x10AEC0` computes camera distance using `0xCC650`, invokes `0x10AF80`, then traverses children through `0xB3390`. The inner function updates particle timing/emission, prepares resources and submits particle work. The whole wrapper accounts for about 0.43ms/present; the core alone is about 0.18ms. These are nested, not additive. **Later disassembly refinement (1.2.0 research):** the wrapper restores its frame and tail-jumps to children, so child samples generally lack its wrapper frame. The initial attribution to child traversal was too conservative. Version1.2 adds an ambient allowlist and an opt-in broad filter while retaining native child dispatch; see `sso-visibility-proxy/docs/JOURNAL.md`. It is isolated-tested, with live visual/performance verification still pending. There is no basis to promise all0.43ms is removable safely. The original evidence ZIP retains the report as it stood at capture time.

2. **A separate detail-grass and rain/snow system exists.** `CPXViewportEffect` vtable `0xF1A6D8`, draw slot14 `0x2413C0`, gates grass with byte+521, rain with +522 and snow with +523. Their concrete calls are `0x2415D0`, `0x2427F0`, `0x243140`. Native property registration `0x245620` names `grassEffectEnable`, `rainEffectEnable`, `snowEffectEnable`, and grass density/triangle limits. The grass path generates/submits decorative vertices; rain/snow update camera-local geometry. This is a separable visual effect system, rather than a reason to skip terrain or its colliders. Here grass is tiny and rain/snow have no sampled cost; disabling them cannot explain a large FPS increase in this recording.

3. **Decorative light flares do visibility raycasts.** `CPXLightFlare` draw/update `0x1383F0` uses an occlusion mode and, on one path, a timer exceeding 0.25s before querying `0x177580` between the flare and camera. The result controls flare visibility. Suppressing a verified cosmetic flare before this work could avoid those particular visual occlusion queries and billboard/cone submission while keeping world collision queries intact. Keep race/signal effects and child updates. This path costs only about 0.003ms/present here, so it is currently a low priority.

4. **Reins have a dedicated animation callback.** `0x106E00` registers a `CPXReinsSimulator` callback on a skin mesh; it allocates a callback object and sets its target to `0x1072C0`. The target resolves endpoint/bone transforms and calls the node solver `0x107BA0` and orientation fix `0x107020`. The simulation is a cosmetic candidate after verifying those bone dependencies. Simply returning from slot14 `0x105CC0` would mainly remove debug bone-line drawing and would not stop the simulation callback. The callback's remaining sampled cost is already tiny after hiding actors. Registration is measured separately and may be a developer caching/lifetime optimization opportunity; it is not evidence that keeping one callback forever is automatically safe.

5. **Trails and shadow rendering are separate visual paths.** `CPXTrail` `0x136AF0` walks/recycles samples and builds colored strip vertices before submission. Remove only identified cosmetic trails, preserving checkpoint/route effects and children. The actual shadow-map preparation/pass `0x6ED000` costs about 0.057ms/present here. Do not mislabel the enclosing `0x6E79E0` function as shadow-only: it also renders the main scene and GUI. Its 21.7% inclusive share is not removable shadow cost.

## Race-preserving scope

Use an explicit whitelist of verified cosmetic effects, with separate user toggles. Preserve ground/collision geometry, visible obstacles, gates, moving course objects, checkpoint/route information, collectibles used by the race, player/horse movement and timing. Keep unknown objects and their children active. Removing a collision query used only to draw a cosmetic flare is different from changing the shared collision/query function.

The current all-11 hiding capture intentionally includes coins/collectibles and quest-marker categories. That is a measurement configuration, not proof that every category should be enabled during every race. A future race preset should preserve any of these used as race cues. Existing checkpoint ancestor protection is useful but is not proof that every moving obstacle or route indicator is identified.

Avoid global returns in `CPXTerrain`, `CPXQuestControl`, `CPXFollow`, shared animation or collision routines. Avoid global alpha/additive render-channel removal and fog removal; those can suppress obstacles or useful visibility cues. For the larger remaining costs, the credible developer optimizations are transform/pose reuse with correct invalidation, fewer repeated actor lookups and collision-query work for unchanged inputs, with identical gameplay results.

## Artifacts and reproducibility

- `hiding-enabled/capture-metadata.json`, `comparison-integrity.json`, `analysis-window.json`, `visibility-state-samples.json`: recording conditions and state proof.
- `hiding-enabled/comparison-with-crowded.csv`, `cosmetic-cost-comparison.json`, `CPU-hot-addresses.json`, `IDA-hotspot-findings.json`, `actor-comparison.json`: measurements.
- `cosmetic-optimization-evidence/ida/`: fresh Hex-Rays exports; descriptive analysis labels, not recovered private function names.
- `work/capture-hiding-enabled.ps1`, `extract-hiding-trace.py`, `analyze-hiding-capture.py`, `compare-hiding-actors.py`, `report-hiding-capture.py`: capture/analysis scripts in the original workspace.
- Raw ETL: `hiding-enabled/starstable-hiding-enabled.etl`, retained locally and excluded from the small evidence ZIP.

No new hiding category or DLL code change was made during this investigation. The optimization list is a prioritized analysis, with gameplay/race validation still required before implementing broader cosmetic suppression.
