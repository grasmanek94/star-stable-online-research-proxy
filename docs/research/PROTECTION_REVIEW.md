# Read-only client protection review — 2026-11-15

The user asked whether earlier Cheat Engine use might put their current account at risk before purchasing Star Rider, whether a new account would be preferable, and what protections can be seen through IDA. This review supports an account-risk decision and a request for authorized performance research. It does not clear an account, predict a ban, or provide ways to disable or evade protections.

## Scope and identity

Used the Official IDA MCP server against the existing SSOClient.exe database, re-discovering/attaching the available database rather than reusing an old instance ID. The database and current on-disk executable have SHA256 `3CEC805521C70B64F1A33C5A0EFA67679B8112DACBE9594AB1B47301B4D3DE8D`, the same645.348067 baseline used in the earlier investigation.

Reviewed504 static imports and41190 extracted strings; decompiled11 selected routines to follow relevant call/data relationships and separate engine/runtime/crash diagnostics from game-network integrity work. This is a focused review, not exhaustive analysis of the client, launcher, services or backend. No live debugger was attached to the game, no integrity request was triggered, no packet was sent or intercepted, and no game/mod code or defaults were changed.

## Findings and confidence

| Observation | What the decompiled code supports | What it does not establish |
|---|---|---|
| Integrity-related protocol names and a network-owned worker | Client integrity ping/pong concepts are compiled into the program; a network-object initialization path creates the relevant worker | Whether a particular session received a request or which server-side decisions follow |
| Debugger indication | The relevant worker calls IsDebuggerPresent and includes a resulting indication in its serialized output | That Cheat Engine was necessarily detected; attaching an external memory editor and attaching a debugger are different actions |
| Running-program inspection | The worker enumerates processes and performs case-insensitive executable-name matching against supplied collections | The active patterns for this session, whether a specific Cheat Engine version matched, or a historical detection record |
| Window inspection | The same path enumerates top-level windows and carries window-related result data | A complete recovered matching policy or proof it ran for the user's account |
| Loaded-module inspection | A helper enumerates modules in the current client process, collects module filename information and embedded certificate serial-number metadata where available | A verified trust-policy decision, a blanket unsigned-DLL ban, or automatic approval of a signed module |
| Result transport | Results are serialized and handed to the client's connection/send interface | Successful delivery, backend retention, interpretation, sanctions, or an account-specific flag |
| Sentry/Crashpad components | Dedicated crash reporting is present; a separately inspected process-launch routine belongs to Crashpad | That every crash report causes anti-cheat action or is itself a ban record |
| Other debugger API uses | Some inspected sites are ordinary assertion/error/runtime diagnostics | That the existence of a debugger API import alone proves an anti-cheat mechanism |

The process/module/window/debugger findings come from decompiled behavior and its surrounding data flow, not just keyword presence. The integrity name is not proof of executable-code hashing: a code-section checksum/patch detector was not established by this reviewed path. It would be incorrect to turn that limited negative finding into a claim that no such detection exists elsewhere.

No explicit Cheat Engine name was established in the reviewed relevant string set. Name/pattern collections are handled through another message-related path; the local keyword result therefore cannot prove that Cheat Engine is absent from effective detection rules. Do not infer unused code from missing direct callers in an optimized callback/virtual-dispatch program.

Exact check sites, packet identifiers, payload layouts, matching lists, activation conditions and patch/bypass recipes are intentionally not part of this account-risk report. No detector was disabled or altered. Public Sentry ingestion identifiers encountered during inspection are not relevant to the account decision and are omitted.

## Follow-up: data categories and identification limits

The user subsequently asked whether reports specifically identify Cheat Engine or the OpenGL proxy and what reaches the server. The follow-up stayed at data-category/privacy scope, without recovering active detector rules, triggering a report or exporting a wire format. Reconfirmed the current IDA input hash and decompiled the window callback in addition to the earlier11 routines.

- The callback uses GetWindowTextA and GetClassNameA: window titles and window-class names are read. This establishes collection capability, not transmission of every window or a complete list of serialized title/class fields.
- The previously reviewed process path compares executable names and carries a matching-result indicator. That supports match-result reporting; it does not establish that a complete inventory of running-process names is sent by this particular path.
- The loaded-module collection contains module filename information and available embedded-certificate serial metadata. This collection enters the worker's serialization path and is passed onward to the connection/send interface.
- Debugger indication and window-related match/result data also enter the reviewed serialized result path. Other context values are present; their semantics were not all recovered. This is not a complete report schema or a captured live payload.

No account-specific Cheat Engine/proxy detection verdict was established. Match results can be meaningful to a receiver without embedding the literal software name in the executable; absence of a local Cheat Engine literal does not clear the account. A module filename is likewise not a demonstrated server-side determination that a specific proxy is unauthorized. Collection, serialization, send-interface handoff, successful delivery, retention and enforcement are separate claims; only the static collection/serialization/handoff were observed here.

The review does not identify active matching patterns, report timing/activation rules, packet identifiers, field ordering/encoding, signatures to alter, or ways to conceal a process/module or forge results. No further game access or live test occurred. To investigate records associated with the actual account, ask Star Stable for available personal-data information and clarification about software/integrity telemetry and retention; a response may omit security-sensitive details. Their published privacy policy describes information requests and contact options, but does not guarantee disclosure of detector rules. [Official privacy policy](https://www.starstable.com/en/privacy)

## Current published guidance

Checked official sources on2026-11-15:

- Star Stable lists attempted cheat-engine use among conduct that can lead to suspension. This does not establish that the user's account has been acted on. [Banned Account](https://help.starstable.com/hc/en-us/articles/360001356380-Banned-Account)
- Its license guidance calls for approved, unmodified software and disallows unauthorized software that modifies the service. A local performance purpose does not itself provide approval. [License guidance](https://help.starstable.com/hc/en-us/articles/4404692524946-Your-License-to-use-the-game-service)
- The published cheating-ban FAQ says earlier conduct can result in action when evidence exists. It does not expose account records or a guaranteed detection timeline. [Cheating Ban](https://www.starstable.com/en/article/cheating-ban)
- The ReShade exception covers permitted screen-appearance changes such as color, contrast and lighting, subject to gameplay/fairness rules. Our addon still hooks native game functions; its loader filename is not evidence that Star Stable has approved those changes. This last point is an inference from the policy and our implementation. [Can I use ReShade?](https://help.starstable.com/hc/en-us/articles/30416548712722-Can-I-use-Reshade)

## Practical conclusion

There is a real policy/enforcement risk, with actual in-client reporting capability. It is not possible to determine from this database whether the account is flagged, whether earlier CE/native-patch tests were reported, whether records were retained, or whether a ban will occur. A successful login or absence of an immediate ban does not answer those questions. The review also does not establish that the account is already doomed.

Creating a second account does not authorize the same tests and is not a basis for calling paid mod testing safe. Before purchasing Star Rider specifically for this experiment, request written authorization and an approved test account/environment from Star Stable. Report the measured performance evidence and describe the native hooks and prior CE tests accurately. Support may clarify policy without disclosing internal detection records; neither the binary review nor a generic support reply should be described as a guarantee.

Suggested request, for the user to send themselves:

> I am investigating a CPU performance issue and have profiling results to share. Earlier experiments used Cheat Engine; the current prototype applies native hooks to suppress selected rendering/animation work. It does not intentionally change currency, progression or movement. Before purchasing membership or running further tests, may I have written permission and an approved test environment/account? Please clarify whether these specific experiments are permitted and how I should provide the profiling findings.

No message was sent to Star Stable by this review. No purchase, account creation, account query, mod installation or live test was performed. The current feature implementation and disabled GitHub workflow remain unchanged.
