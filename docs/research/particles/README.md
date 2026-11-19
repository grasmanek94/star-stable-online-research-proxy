# Particle investigation evidence — client 645.348067

All addresses are game RVAs. Exported pseudocode is read-only analyst evidence, not compilable project source. Decompiler signatures are tentative; reviewed instruction/argument contracts govern hooks.

## Ordered hook mapping

| Index | Name | Patch RVA | Native target / child RVA | Context bytes |
|---|---|---|---|---|
| 0 | rider | 0x794c8f | 0x799ad0 | 48 |
| 1 | horse | 0x1e286c | 0x1e6f50 | 48 |
| 2 | pet | 0x3c126b | 0x799ad0 | 48 |
| 3 | lod1 | 0x28c297 | 0x69e540 | 26 |
| 4 | lod2 | 0x28c4b5 | 0x69e540 | 26 |
| 5 | lod3 | 0x28c567 | 0x69e540 | 27 |
| 6 | lod4 | 0x28cda0 | 0x69e540 | 27 |
| 7 | mark1 | 0x295eae | 0x69ebc0 | 41 |
| 8 | mark2 | 0x295fa1 | 0x69ebc0 | 41 |
| 9 | mark3 | 0x295ff1 | 0x69ebc0 | 40 |
| 10 | collect | 0x36d93c | 0x69ebc0 | 38 |
| 11 | saleDraw | 0x330ddd | 0x69ebc0 | 33 |
| 12 | npcAnim | 0x28ce5d | 0xfcf00 | 37 |
| 13 | charText0x28d49c | 0x28d49c | 0x6a1d20 | 24 |
| 14 | charText0x28d74e | 0x28d74e | 0x6a1d20 | 24 |
| 15 | questText0x296646 | 0x296646 | 0x6a1d20 | 24 |
| 16 | skinGate | 0xe7d49 | 0xcf220 | 39 |
| 17 | meshGate | 0xd3be5 | 0xcf220 | 35 |
| 18 | particleExEntry | 0x10aec0 | 0xb3390 | 179 |
| 19 | particleLegacyGate | 0x1129f8 | 0xcf220 | 48 |
| 20 | detailGrass | 0x24158e | 0x2415d0 | 40 |

Index18 is E9 at a function entry; g_originals continuation is entry+5, and its listed target is retained child dispatch. Others replace E8 CALLs. Exact windows/masks/offsets are canonical in data/visibility-sites.json; the three new plans are also exported here.

## Normalized loaded-world census

Read-only snapshot 2026-11-15T14:51:19Z, 476905 pool records. These count selected active-record objects by engine name, not on-screen emitters, per-frame samples or guaranteed filter hits. Guarded ancestry can keep allowlisted names. No PID, heap pointers or player names are included.

| Ambient engine name | Loaded selected records |
|---|---|
| ChimneySmoke | 23 |
| Dust_Day | 64 |
| Dust_Night | 65 |
| ForestGoldenParticles | 19 |
| ForestParticles_Day | 37 |
| GEN_RoadLantern_Glow_01 | 456 |
| GEN_RoadLantern_Glow_1 | 36 |
| LanternGlow | 180 |
| Particle_LanternGlow_01_Add | 315 |
| Particles_MapleLeaves_A | 83 |

Generic names remain excluded from ambient mode. Explicit quest/clue/interaction names support separate broad and guarded policies. See the journal for ancestry, queue/cleanup caveats, stack-budget refinement and repair procedure.

ParticleSystemEx-disassembly.txt and ParticleSystem-disassembly.txt preserve control flow. particle-entry-plan.json, legacy-gate-plan.json and grass-call-plan.json preserve the new sites. RVA*.c files preserve core/helper/cleanup/manager exports. No complete binary or IDB is included.
