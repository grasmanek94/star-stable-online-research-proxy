# Remote visibility v3

The original native-preference experiment wrote its bytes correctly but did not hide actors in the user's scene. The later v2 patch targets the actual existing non-local fade paths. **The user confirmed that other players disappeared with v2 enabled**, while pets remained. Live read-back also confirmed both v2 branch bytes were `74 00` and all 23 recorded non-local horse fade values were zero. FPS improvement has not been measured in a controlled A/B capture.

V3 keeps that same horse/rider entry and adds an independent pet entry.

## Use

1. Uncheck previous visibility-table entries, including v2. Open **Star-Stable-remote-visibility-v3.CT** and select `SSOClient.exe`.
2. Enable **V3: hide other horses + riders** and/or **V3: hide other players' pets**. They can be compared separately.
3. Allow a few seconds with the game active. The corresponding status bytes should read **00**. Leave the Byte status rows themselves unchecked; they are displays, not the intended controls.
4. Uncheck the script entries to restore the original code. The game's normal logic can fade actors back in over time, rather than show them instantly.

Do not enable the standalone combined `.cea` and the `.CT` entries together; they patch the same sites. Build **645.348067**, SHA-256 `3CEC805521C70B64F1A33C5A0EFA67679B8112DACBE9594AB1B47301B4D3DE8D`, only. A guard error is a reason to inspect the current build/patch state, not remove the assertions.

## What changes

| Entry | Native branch | Original → enabled | Single byte written |
|---|---|---|---|
| Horse/rider | Rider update `0x00794C96` | `74 7F` → `74 00` | displacement at `0x00794C97` |
| Horse/rider | Horse update `0x001E2873` | `74 58` → `74 00` | displacement at `0x001E2874` |
| Pet | CPXPet update `0x003C127D` | `74 0A` → `74 00` | displacement at `0x003C127E` |

`JZ +0` always reaches the following instruction, forcing the existing fade-out side of the decision. Each script checks the build and full instruction context. There is no code allocation, trampoline, injected thread, preference-file edit or network-ignore call.

CPXPet's update first resolves its owner and visual actor. It tests local-control bit `0x04` at offset 144; the local branch manages its normal state/particles. Only the non-local branch consults the player's visibility decision and adjusts the fade at offset 504. The new byte forces that existing decrement-to-zero path, which applies the normal visual fade and returns early at zero. It does not remove the whole pet update function.

The running registry included a local player's pet with the local-control bit, and non-local pet records without it. Many stored pet records were inactive/zero, so the number of registry entries must not be interpreted as visible pets or active players. Local rider/horse/pet exclusion is supported by the existing branch structure and isolated tests; unusual game states still need observation.

The patched instructions are in actor update/visibility paths. They do not patch chat reception, IgnoreList, moderation or network-message handlers. Chat behavior has not been tested by sending messages, and no messages were sent by the profiler.

## Verification and limits

- V2 horse/rider hiding: confirmed visually by the user and partially corroborated by live fade-state read-back.
- V3 pet hiding: the user confirmed that other players' pets disappear while their own pets remain visible.
- Eighteen isolated branch executions covered the original Boolean outcomes, enabled behavior and restoration across all three gates.
- Local rider, horse and pet fixtures ran original native update instructions with external calls stubbed. Edited blocks were bypassed, helper-call sequences matched, and callee-saved registers/stack were restored.
- These checks do not model full game object lifecycles, integrity mechanisms or every gameplay mode. No crash-free guarantee or FPS gain is claimed. The profiler has not directly patched the game; live activations were performed by the user in Cheat Engine.

Use the visibility result to decide whether a clean off/on performance capture is worthwhile. Disappearance alone is not proof that all remote animation, network processing or collision work has stopped.

The earlier comparison and developer evidence remain in `Star-Stable-crowded-comparison.md` and `Star-Stable-crowded-developer-evidence.zip`. `remote-visibility-evidence/` contains the disassembly, native pet pseudocode, test results and read-only state snapshots.
