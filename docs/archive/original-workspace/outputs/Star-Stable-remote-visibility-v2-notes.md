# Remote visibility v2: recheck and revised test

The first table's hide-preference entry **did write its four bytes successfully**, but the user observed no visual effect. A live memory check confirmed `1,1,1,1` at the native preference fields and `EB 08` at the MatrixAnimation gate. That means the old entry's missing effect was not a failed write. The preference consumer/apply path was never established, so that entry should not be treated as a working hide-players implementation.

The MatrixAnimation entry concerns procedural scene animation, not the horse/rider skeletal pipeline. No improvement from that small category was established. The sampler bypass also remains unproven as a performance improvement.

## Revised target

`Star-Stable-remote-visibility-v2.CT` changes the actual existing fade-out decisions inside the non-local portions of:

- `CPXPlayerSSO` / `CPXPlayerTPNet` update at RVA `0x00794310`, branch `0x00794C96`.
- `CPXHorse` update at RVA `0x001E1E30`, branch `0x001E2873`.

The game already has a player-visibility decision helper at `0x00799AD0`, including `CPXVisibilityTrigger::IsSlavePlayerVisible` at `0x0038D9B0`. Horses consult the same decision through `0x001E6F50`. The revised script keeps those calls, and forces the following non-local fade-out branch regardless of the returned Boolean.

| Branch | Original | Enabled | Single changed byte |
|---|---|---|---|
| Rider | `74 7F` | `74 00` | `SSOClient.exe+0x00794C97`: `7F` → `00` |
| Horse | `74 58` | `74 00` | `SSOClient.exe+0x001E2874`: `58` → `00` |

`JZ +0` reaches the following instruction whether taken or not, forcing the existing hidden/fade-out block. This uses one byte per branch, no trampoline, allocation or injected thread. Disable restores the original displacement bytes. Build headers and 48-byte context windows are checked before writes.

The locally controlled branches bypass these fade blocks. The read-only actor-registry check found one local rider and horse with bit `0x04` set at actor offset 144, and 24 non-local riders plus 24 non-local horses without that bit. Notably, the remote riders used the **same CPXPlayerSSO vtable as the local rider**, so filtering solely on a class name would be insufficient. The local actor references were resolved through the game's generation-checked actor registry.

These are executable-derived findings and live state observations, not recovered source. Other game modes/object states still require validation.

## Use

1. Uncheck the old table's entries first. Open **Star-Stable-remote-visibility-v2.CT** and select the running `SSOClient.exe`.
2. Enable **TEST v2: fade out non-local horses + riders (native update paths)**.
3. The two displacement-value rows should both show **00**. **Leave those Byte rows unchecked**; checking one would freeze that byte independently of the script.
4. Give the game a few seconds in the foreground to process the normal fade. Observe whether other riders/horses disappear and your own remain.
5. Uncheck the TEST entry to restore `7F` and `58`. Normal visibility is then decided by the game's original logic; visible actors may fade back in rather than appear instantly.

The two-byte total patch does not modify the preference block, IgnoreList, chat settings or network handlers. It is intended to reuse native client visibility/update behavior; chat reception and all possible gameplay modes have not been tested. It is not a crash-free guarantee or a promised FPS improvement.

## Checks and current status

Twelve isolated branch executions checked both original Boolean results, the bypass and restoration. Local rider/horse fixture paths executed the original native update instructions with external helpers stubbed; they bypassed the edited branches, retained the same helper-call sequence and restored the stack/callee-saved registers. This validates the branch change and those fixture paths, not full runtime safety.

The first requested v2 check reported no visible change, but read-back showed the old sampler bypass active and **both v2 branch bytes still original** (`7F`, `58`). After the correct entry was enabled, the user confirmed that other players disappeared while their pets remained. A subsequent read-back verified both v2 branches as `74 00`, with all 23 recorded non-local horse fade values at zero. Some stored rider records retained nonzero fade values; those may not have been actively updating, so this is not proof of every actor's visibility.

`Star-Stable-remote-visibility-v3.CT` retains the same horse/rider patch and adds a separate native CPXPet fade toggle. Disable v2 before enabling v3's overlapping horse/rider entry.

`remote-visibility-evidence/` contains the exact instruction windows, isolated validation and actor-check evidence. The executable is version **645.348067**, SHA-256 `3CEC805521C70B64F1A33C5A0EFA67679B8112DACBE9594AB1B47301B4D3DE8D`.
