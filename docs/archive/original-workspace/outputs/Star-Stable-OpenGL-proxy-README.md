# Star Stable OpenGL visibility proxy — x64 v1

`opengl32.dll` forwards Windows OpenGL and adds the visibility controls below. Hiding starts **off**. The visibility code supports the analyzed **SSOClient 645.348067 / Stellar645** build. It scans for the hook sites and rejects a different object layout or overlapping patches.

## Install and remove

1. Disable all older CE visibility entries and close the game.
2. Copy **only `opengl32.dll`** from this package into:

   ```text
   C:\Users\Rafal\Desktop\StarStableOnline\Star Stable Online\client\
   ```

   It belongs beside **`SSOClient.exe`**. Keep any existing unrelated DLL separately instead of overwriting it. None was present at this path when this package was prepared.
3. Launch the game normally, enter the world, and press **F5** while the game is in the foreground.
4. Press **F6** to restore the original calls and normal visibility. Native player fade-in can take a few seconds.

To remove it, close the game and remove this package's `opengl32.dll` from that directory. Do not copy anything into Windows/System32. Cheat Engine is not required for the proxy and its visibility entries must stay disabled.

## Controls

Keep **NumLock on**. These are the numeric-keypad keys, not the number row. Controls work while the game window is foreground.

| Key | Action |
|---|---|
| **F5** | Enable hiding using the current category choices |
| **F6** | Turn hiding off and restore the original calls |
| **Ctrl+Numpad1** | Other players' horses |
| **Ctrl+Numpad2** | Other players' characters |
| **Ctrl+Numpad3** | Other players' pets |
| **Ctrl+Numpad4** | NPC pets and ambient animals, identified by names |
| **Ctrl+Numpad5** | NPC actors and unclassified NPC models |
| **Ctrl+Numpad6** | NPC horses, identified by names |
| **Ctrl+Numpad7** | Standalone riderless `CPXHorse` objects |
| **Ctrl+Numpad8** | Buyable and display horses |
| **Ctrl+Numpad9** | Coins and collectible visuals |
| **Ctrl+Numpad0** | World quest question/exclamation markers |
| **Ctrl+Numpad Decimal** | NPC floating text and speech bubbles |

All category choices default to **hide=1**. A category chord flips between **1=hide** and **0=native behavior**. Choices can be changed while off, survive F6/F5, and reset when the game restarts. Keys are polled; the game can also receive the key presses.

The user's own rider, horse and pets are excluded through ownership/control checks. No ignore list, chat handler or server population is changed. NPC models, their skeletal animation and selected visual submissions are suppressed; whole NPC/quest/checkpoint update methods are not replaced with early returns.

## Scope and limits

Most ambient people, horses and animals share `CPXQuestControl`. The NPC animal/horse split therefore uses case-insensitive engine names with word/CamelCase boundaries. Unrecognized story names go into **NPC actors**, even if the model is an animal. With all three NPC choices at1 they are all selected. This is a heuristic split, not a recovered authoritative species field.

Ambient horse models usually belong to the NPC-horse category; sale horses have their own category. The separate riderless-`CPXHorse` bucket had no active hits in the observed scene. Coins cover recognized coin/shilling visual subtrees and `CPXCollectItem` visuals. Terrain, arbitrary scenery, every particle effect and every streamed asset are not globally disabled. Checkpoint ancestors are protected by the classifier.

This does **not** prevent the city from streaming files or creating its actors. It targets selected ongoing visual/animation work. There is no measured FPS benefit yet, no full quest/race/cutscene lifecycle test, and no crash-free guarantee. Skeletal-animation-dependent NPC behavior may differ while hidden. The proxy itself has not yet been launched inside the game; validation below was in helper processes. The separate CE v5 hooks were observed executing in the game, including NPC/sale/coin/marker categories, but that is not a proxy integration test.

## Diagnosis

The proxy writes **`SSO-visibility-proxy.log`** beside its DLL. It records loading, F5/F6 outcomes, category choices and guarded read failures. It does not log character names, chat or credentials.

- No log: check that the DLL is beside the actual running `SSOClient.exe`, then restart the game. Copying into an already running process does not load it.
- F5 reports another build: the visibility layouts need re-analysis; graphics forwarding remains separate.
- F5 reports a signature/call mismatch: disable older CE entries, restart cleanly and inspect the exact log message.
- F5 reports local player/horse not ready: enter the world and retry.
- F6 reports restoration refused: it has set its switches to passthrough and retained its code/backups. Resolve another modifier and retry F6, or restart the game. Do not unload a live proxy.

`read-proxy-state.ps1` is an optional **read-only** diagnostic. It verifies the installed DLL's hash before using its symbol metadata, then reads its switches, counters and native hook targets. Run it from the extracted package with PowerShell when troubleshooting; it does not activate or patch anything. Counters count calls, not players or on-screen objects.

## Validation and source

- All **368** named OpenGL exports and their ordinals match the installed Windows library. The proxy was loaded before System32 in a helper process; native OpenGL/WGL smoke calls matched the real library.
- **81** actual native classifier checks passed with MSVC, including own-actor protection, ownership changes, reparenting, generation checks and category independence.
- **144** executions of the linked visibility assembly and **12** forwarder executions passed register/SIMD/stack checks, including a rebased DLL beyond near-CALL range.
- **16** native runtime checks passed against an isolated synthetic PE: real install/restore, thread resumption, unsupported layout/old-patch rejection, exception fallback, category persistence, changed-context refusal and partial-write recovery.

The package's `source/` folder preserves the workspace layout. Start with its `RESUME-SSO-VISIBILITY.md` and **`outputs/SSO-Visibility-v5-and-OpenGL-Proxy-Handoff.md`**. The source, build script, exact AOB plan, link map, test sources and validation JSON are included. Windows' actual OpenGL DLL, the game executable/database, raw traces and installed test dependencies are not redistributed.
