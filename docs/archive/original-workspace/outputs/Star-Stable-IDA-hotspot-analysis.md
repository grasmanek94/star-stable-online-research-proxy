# Star Stable: what the Terrain and QuestControl hotspots actually do

IDA analysis of `SSOClient.exe` version **645.348067**, combined with the previously recorded nighttime CPU trace, identifies two distinct costs:

- **QuestControl's measured branch is overwhelmingly Character animation/pose work**, including skinned descendants. It is not evidence of expensive quest-condition evaluation.
- **Terrain's approximately 20% branch is shared traversal of actors attached beneath Terrain**, including procedural transforms, particle systems, meshes, follow/ground queries and splines. It is not a measure of terrain heightmap/shader work alone.
- **A specific optimization candidate appears in animation key sampling:** the compiled code reads records across the full track before searching the relevant key interval. Two such loops directly account for **4.62% of all main-thread sample events** in the raw export.

All functional descriptions below come from IDA pseudocode, checked against instructions and vtable identities using the **Official IDA MCP Server**. These are analysis labels; private method names and source lines remain unavailable. No game bytes were patched, no game settings were changed, and no new performance capture was taken.

## 1. QuestControl: skeletal animation dominates the measured cost

At RVA `0x00295DD1`, the RTTI-identified `CPXQuestControl` slot-14 routine calls `CPXCharacter`'s slot-14 implementation at `0x0028BF90`, passing the same object pointer. The sampled return address is `0x00295DD6`.

Of **5,667** raw sampled stacks that contain the QuestControl routine, **5,625 (99.26%)** contain this delegation to Character. Only 42 samples fall elsewhere in the QuestControl routine or its other descendants. This does not mean all quest processing is cheap everywhere in the program; it identifies the particular hotspot we measured.

Within those 5,625 samples:

| Operation identified in IDA | Samples | Share of this branch | Share of all main-thread samples |
|---|---:|---:|---:|
| Animation/pose pipeline at `0x006C4600` | 4,681 | 83.22% | 12.40% |
| Mixer/layer evaluation at `0x006BFF10` | 4,183 | 74.36% | 11.08% |
| Descendant `CPXSkinMesh` routine | 3,459 | 61.49% | 9.16% |
| `AnimatableLayer` evaluation at `0x006B9330` | 2,780 | 49.42% | 7.37% |
| Quaternion key sampler at `0x006841C0` | 1,346 | 23.93% | 3.57% |
| **Two full-track touch loops, self execution only** | **1,166** | **20.73%** | **3.09%** |

These rows overlap: the track sampler runs inside layer/mixer evaluation, which runs inside the pose pipeline. Do not add them.

The observed chain includes:

```text
CPXQuestControl slot 14 @ 0x00295D40
  call @ 0x00295DD1 → CPXCharacter @ 0x0028BF90
    direct model animation call @ 0x0028CE5D → 0x000FCF00
    child traversal call @ 0x0028D75C → 0x000D6040 → shared actor traversal
      CPXSkinMesh @ 0x000E7D00
        animation call @ 0x000E7E89 → 0x000FCF00
          0x000FD130 → animation/pose pipeline @ 0x006C4600
            mixer @ 0x006BFF10 → animation layers
              bone/track sampling and interpolation
```

`0x000FD130` contains error strings identifying failure to update an “animatable or animation mixer.” The pose routine `0x006C4600` evaluates the mixer, iterates bone records, builds transforms from translation/rotation/scale, multiplies matrices and writes a packed bone-pose output. It contains an explicit bone-index bounds error. The mixer iterates layer objects and handles bone translation/rotation/scaling paths.

**What to ask the developers:** instrument model/rig identity, bone count, active layer count and update count per frame at these call sites. Both Character and a skinned descendant can enter this pipeline; the trace does **not** prove that they are redundantly updating the same rig. Check that explicitly. Measure whether distance/visibility-based animation scheduling and lower-frequency updates for less important actors would reduce the serial work without changing behavior.

## 2. A concrete candidate: full-track reads inside the animation samplers

The quaternion sampler at RVA `0x006841C0` uses a time-to-key lookup range and then searches for the two relevant keys. However, immediately before the search, its compiled code executes:

```asm
; RVA        instruction
006842B0     mov     eax, ecx
006842B2     add     ecx, 8
006842B5     lea     rax, [rax+rax*4]
006842B9     movups  xmm0, xmmword ptr [rbx+rax*4]
006842BD     mov     eax, [rbx+rax*4+10h]
006842C1     mov     [scratch_dword], eax
006842C5     movups  [scratch_vector], xmm0
006842CA     cmp     ecx, r9d
006842CD     jb      006842B0
006842DB     call    00683E60  ; key search
```

The loop starts at key index 0, advances by 8, and touches a 20-byte record at each selected index up to the **total track key count**. The vector sampler at `0x00684930` does the analogous operation at `0x00684A10–0x00684A25`, reading a 16-byte record every eight keys. It then calls its key-search helper.

The copied record values have no subsequent use visible in the decompiled result. Hex-Rays consequently presents each loop as an apparently empty `for (i = 0; i < key_count; i += 8)` loop, although the machine-code loads and stack copies are present and sampled. This could be deliberate cache warmup/prefetch behavior or leftover diagnostic behavior; its purpose cannot be established from the binary alone.

| Region | Self samples, whole main thread | Main-thread share | Samples beneath QuestControl → Character |
|---|---:|---:|---:|
| Quaternion touch loop `0x006842B0–0x006842CE` | 1,403 | 3.72% | 950 |
| Vector touch loop `0x00684A10–0x00684A25` | 339 | 0.90% | 216 |
| Combined, disjoint sampled instruction ranges | **1,742** | **4.62%** | **1,166** |

The single load at `0x006842BD` accounts for 1,211 self samples. Sampling can skid to nearby instructions; these counts do not establish the hardware cause, cache-miss rate or exact cost of one load.

**Specific developer experiment:** inspect the source corresponding to these two loops. Benchmark removing the full-track touch, narrowing it to the selected key window, or changing its prefetch strategy if that is its purpose. Confirm correctness and measure cache behavior. The measured 4.62% is an investigation target, not a guaranteed removable cost or predicted FPS improvement.

## 3. Terrain: traversal, world transforms, particles and grounding queries

The complete `CPXTerrain` slot-14 routine at RVA `0x001A1CD0` occurs in **12,386 samples (32.81% of the raw main-thread sample events)**. The earlier ~20% figure refers specifically to its final call into shared actor traversal:

```text
Terrain call @ 0x001A3D42 → shared actor routine @ 0x000B3390
  → dispatcher entry @ 0x006884B0
    → indexed child traversal @ 0x006885A0
      → each selected child's virtual slot 14
```

The return address `0x001A3D47` occurs in **7,422 samples (19.66% of main-thread events)**. Conditioning on that exact frame gives the following breakdown:

| Work beneath Terrain's shared traversal | Samples | Share of this branch | Whole main-thread share |
|---|---:|---:|---:|
| World-position getter `0x000CC650`, including its callees | 1,681 | 22.65% | 4.45% |
| `CPXParticleSystemEx` descendants | 1,401 | 18.88% | 3.71% |
| `CPXMatrixAnimation` descendants | 1,386 | 18.67% | 3.67% |
| `CPXFollow` descendants | 1,375 | 18.53% | 3.64% |
| ODE collision-space scanning | 1,340 | 18.05% | 3.55% |
| `CPXMesh` descendants | 1,127 | 15.18% | 2.99% |
| Dispatcher `0x006885A0`, **self execution** | 1,161 | 15.64% | 3.08% |
| `CPXSpline` descendants | 749 | 10.09% | 1.98% |

These rows overlap. For example, Follow objects invoke collision scans, and particles invoke the position getter. They are not mutually exclusive shares of a pie chart.

### Follow objects: ground/contact queries

The `CPXFollow` method at `0x00192440` updates a followed actor's transform. A flag-controlled path calls `0x000C9EE0` → `0x000CA060`, which forms vertical start/end positions, queries the containing space, and requests a collision result. It falls back to terrain height/normal lookup when needed, then applies the position/orientation result.

The space query reaches the RTTI-identified shared `dxSimpleSpace` / `dxHashSpace` implementation at `0x008B69A0`. That implementation cleans geometry, traverses a linked list of geometry objects, tests enabled flags and invokes the overlap/callback helper for candidates. **1,340 of the 1,375 Follow-related branch samples are also in this collision scan.**

Ask for ground-query counts, scanned geometry count, candidate count and hit count per frame, together with the Follow/target object identities. Investigate redundant queries for unchanged endpoints/geometry and whether an indexed query could avoid scanning every enabled geometry. No object count, quadratic scaling law or specific connection to remote players was measured.

### MatrixAnimation, meshes and particles: repeated scene-object work

`CPXMatrixAnimation` slot 14 at `0x000DA640` calls `0x000DD9E0`, which advances procedural animation state, loops over modifier records, evaluates numeric/trigonometric terms, and applies translation/rotation/scale-related changes to a target transform.

`CPXParticleSystemEx` at `0x0010AEC0` fetches the object's world position, computes camera distance, updates particle state and traverses children. In the conditioned Terrain branch, **846 samples** contain its position-getter call return at `0x0010AEED`, while **504** contain the particle-update return at `0x0010AF56`. The position getter's fallback reads translation components from a virtual world-matrix getter; repeated position/transform access is a concrete instrumentation target.

`CPXMesh` slot 14 resolves mesh/material state, obtains transforms, builds per-mesh/per-submesh render records and submits them to a collection. This is CPU preparation, not proof that rasterization or a particular GPU shader is expensive. `CPXSpline` performs distance/visibility tests, spline-derived transforms and optional terrain alignment before updating a target and traversing children.

Ask for per-type invocation counts and transform cache hit/miss or dirty-state counts. Investigate whether unchanged transforms and distant/inactive objects can avoid work. This trace does not show whether every setter actually causes a matrix rebuild.

### Other Terrain branches: sectors, visibility and terrain objects

The full Terrain routine also scans sector/subcell records, builds visible lists, performs distance/visibility tests and prepares terrain-object mesh records. These other branches account for the remaining **13.15 percentage points** of main-thread sample events under the Terrain method, outside its final shared traversal.

One concrete call site, `0x001A39AC` → helper `0x001A4030`, occurs in **2,598 samples (6.88% of main-thread events)** at return address `0x001A39B1`. The helper computes object distance, prepares transforms, obtains optional auxiliary matrix data, computes a distance fade, and queues a mesh record. Its embedded error string explicitly refers to a “Terrain Object” with no assigned mesh.

Transform/auxiliary preparation precedes this helper's local distance-fade decision, and a non-null mesh can still be queued when the computed fade is zero. Review whether an earlier rejection is valid after accounting for upstream sector culling, other passes and required side effects; this is a source-review candidate, not proof that invisible terrain objects are being drawn.

## Suggested message to the developers

> On SSOClient 645.348067, a 41-second stable ~84-FPS nighttime capture shows a nearly saturated main thread. I correlated ETW CPU stacks with IDA. The apparent QuestControl hotspot is 99.3% delegated to the Character routine, where animation/pose generation accounts for 83.2% of that branch. Please inspect Character/SkinMesh → animation mixer/pose work at RVAs 0x000FCF00, 0x000FD130, 0x006C4600 and 0x006BFF10. Two key-sampler loops at 0x006842B0 and 0x00684A10 read every eighth record across the full track before searching the current key interval; their own instructions account for 4.6% of main-thread samples globally. The Terrain hotspot includes child traversal, CPXFollow ground queries scanning collision-space geometry, MatrixAnimation, particles, meshes and position lookups. The report includes exact call sites and conditioned counts so these can be checked with the build's private symbols. Please instrument per-frame object/rig updates, bone/layer counts, transform reuse and collision-query candidate counts. The crowded-player slowdown has not yet been captured in a controlled comparison.

## Reproducibility and limits

- Exact executable SHA-256: `3CEC805521C70B64F1A33C5A0EFA67679B8112DACBE9594AB1B47301B4D3DE8D`.
- IDA image base: `0x140000000`. Add each RVA to that base; for example, `0x006841C0` → `0x1406841C0`.
- Class identities were checked against named vtables and data references in IDA. Call sites were checked against the preceding machine-code call instructions.
- Conditional branch counts come from the original ETL's `SampledProfile` events and their time-shifted attached stacks for PID 8516 / TID 2584. Each frame location is counted once per sampled stack; recursive frames are not added repeatedly.
- This raw export contains **37,745** main-thread sample events with stacks. The earlier xperf butterfly report counted **37,605**, with a small difference in kernel-side inclusion. Both contain exactly **33,464** exclusive samples inside the game executable; the key game call-site counts match exactly (7,422 and 5,625). This report consistently uses 37,745 for main-thread percentages, so values differ slightly from the first report.
- Percentages are sample shares, not invocation counts, guaranteed wall-time savings or proof of a particular cache/branch bottleneck. No private symbols or original source were available. Inferred semantics are supported by data flow, embedded strings and RTTI, and should be verified against source.
- A single stable nighttime scene cannot establish which work scales with player count or reproduce the reported stutter. The results identify what to measure next.

The `ida-evidence/` folder contains unedited decompiler output with an export header, exact call-site/loop instructions, class/vtable matches and function bounds. `IDA-conditional-stack-breakdown.csv` and `IDA-hotspot-findings.json` contain the counted evidence. `IDA-hotspot-breakdown.png` visualizes the overlapping branch memberships.

## Follow-up: sampler data flow and bypass experiment

`Star-Stable-sampler-loop-test-notes.md` examines the two sampler loops in more detail. Embedded assertions identify their source as anonymous-namespace `GetSample` helpers in `Source/System/src/Resources/PXAnimationResource.cpp`. The loops touch one record every eight keys across the full track and discard the copies; the actual range search and interpolation are separate. No output dependency was found. Memory warming is a plausible purpose, not a recovered source-level explanation.

An isolated emulator compared the original and bypassed native sampler/search instructions on 630 cases, with identical outputs and math-call inputs; another 30 cases verified restoring the original behavior. External trigonometric calls used float32 math shims. This is not a live-game safety or performance test. The follow-up includes a build-guarded, one-byte-per-loop CE experiment and its limitations. No live patch was applied.
