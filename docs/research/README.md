# Research evidence index

This is the imported visibility/privacy research index. For the current network work, start with [protocol/README.md](protocol/README.md) and the repository's current [session handoff](../SESSION_HANDOFF.md). References below to native implementation/builds describe the separate visibility project and its dated research history.

[Read-only protection/account-risk review](PROTECTION_REVIEW.md) records the later IDA findings and official policy context. It is a high-level review, not an account clearance or a detector-bypass guide.

[Comprehensive new data-access request](DATA_ACCESS_FOLLOWUP.md) provides a ready-to-send GDPR request covering all account data and the additional technical/security categories, with evidence/disclosure limits and primary legal sources. The filename is historical; the current email is a new request, with no reference to earlier correspondence.

These are selected read-only analysis exports, reports and normalized measurements supporting the implementation. Full raw traces/client binaries/databases/heap censuses are kept in the original local investigation workspace, not required for builds. No active PID, absolute heap address or old tool instance ID should be reused.

| Folder | Contents and use |
|---|---|
| actors-v4/ |19 original local ownership, player/horse/pet update, fade/helper/reference exports; native path discovery and own-actor protection |
| actors-v5/ |14 NPC/model/collectible/sale/marker/dispatcher exports supporting the original18 native hooks |
| cosmetics/ |33 viewport/grass/weather, reins, shadows, sky, particle/trail/flare and renderer exports inspected for optional visual savings; presence is not a claim that each is patched |
| particles/ | New particle wrapper/core/cleanup/manager exports, disassembly, exact hook plans and normalized ambient census; see its README.md |
| performance/ | Original performance, crowded, IDA and hiding-enabled reports/figures plus developer-facing text |
| performance/hiding-enabled/ | Selected recording-window, timing/comparison, trace-health and prior-proxy layout evidence; no raw ETL or live heap snapshot |

The historical handoffs explain how paths were found and which preference/sampler experiments did not help. The current JOURNAL.md refines the particle stack interpretation: children are tail-called and usually lack the extended wrapper frame. Legacy reports may retain earlier hypotheses; follow the newer journal and canonical data/ when maintaining1.2.

The reports retain some original-workspace references for provenance. Files named outputs/ or work/ that are not here refer to that original workspace. The portable implementation, exact21 current hook plans, offset contracts, failed approaches and repair instructions are present in this repository; raw profiling data is intentionally separate.
