# AOB v4: update-tolerant remote visibility

The user confirmed that both AOB entries enable and preserve the v3 behavior: other players' riders, horses and pets disappear while their own stay visible. This is confirmed on **SSOClient 645.348067**. Future updates have not been tested.

## Use

1. Uncheck earlier visibility entries before opening **Star-Stable-visibility-AOB-v4.CT**.
2. Select the running `SSOClient.exe` process.
3. Enable **AOB v4: hide other horses + riders** and/or **AOB v4: hide other players' pets**.
4. Status rows resolve to `00` while their entry is enabled. Leave the Byte rows unchecked. They show `??` when their temporary address symbol is not registered, normally while disabled.
5. Uncheck the script entries to restore the captured original bytes. Normal fade-in may take a few seconds.

Keep Cheat Engine and the table open until you restore the entries. Backups live in CE's Lua state. These are temporary code changes, not preference-file edits; exiting the game discards its patched process code. Do not combine the standalone `-all.cea` with the individual table entries.

## How it tolerates updates

- Scans for three long native instruction signatures rather than fixed addresses.
- Wildcards relative CALL/JMP targets, the conditional-branch distance and selected field displacements that can move between builds.
- Accepts exactly one match in `SSOClient.exe` executable PE sections. It counts all candidates itself instead of trusting an API name containing “Unique”.
- Checks that each target is a short forward `JZ` whose normal branch begins with the expected instruction sequence.
- Checks that horse and rider use the same render-flag helpers, the horse visibility wrapper still tail-calls the rider visibility helper, and pets consult that same visibility helper.
- Saves each actual original displacement and the complete live instruction window. Disable restores the captured value, including a changed distance after an update.
- Validates all sites before writing. Writes only one byte per selected branch, reads it back, and attempts rollback on an enable failure.
- Detects a changed process/image or changed surrounding code before restoration. It preserves backups rather than overwrite unknown code.

The scanner uses CE's [all-result AOBScan API](https://wiki.cheatengine.org/index.php?title=Lua:AOBScan), filters results to executable sections of the main module, and performs the byte edits through Auto Assembler with exact live assertions. It has no fixed patch RVAs, heap addresses, original jump distances or build-version allowlist.

**It cannot guarantee compatibility with arbitrary updates.** New register allocation, long conditional jumps, a rewritten horse wrapper or changed local-versus-remote logic may require review. A matching signature cannot prove every future semantic property. Do not weaken a rejected check without examining the updated functions in IDA.

## Validation

- All three signatures have one match each in the baseline executable's code sections.
- Thirty-two isolated Lua scenarios passed: current image layout and a synthetic rebased/relocated layout, independent entry order, dynamic restoration, missing/duplicate matches, module/data decoys, already-patched code, changed branches/helpers, symbol conflicts, partial-failure rollback, changed-context rejection, changed-process rejection and no writes during syntax checking.
- The relocated fixture changes call targets, selected field offsets, branch distances and timestamp. It is not a real future build and does not validate future game semantics.
- The original three displacement changes already passed native branch/local-control fixture tests. The user confirmed the resulting visual behavior with v3 and then with AOB v4.
- A subsequent read-only snapshot found all original branch bytes; it was taken after the user's feedback and does not show that the entries were still enabled then.
- No controlled FPS A/B result or chat-reception test has been performed. No crash-free guarantee is available.

The complete maintenance guide is **[SSO-Visibility-Engineering-Handoff.md](SSO-Visibility-Engineering-Handoff.md)**. The source, generator, fixtures and evidence are bundled so a fresh AI session can reproduce and update the implementation.

Download the **[maintenance bundle](SSO-visibility-maintenance-bundle.zip)** and preserve its folder layout when extracting. A fresh AI session can start with `RESUME-SSO-VISIBILITY.md` at the extracted root. The bundle includes nineteen focused IDA pseudocode exports, full addresses/signatures, failed experiments, source/tests, repair steps and a file-hash manifest.
