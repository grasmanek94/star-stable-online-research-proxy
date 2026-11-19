# SSO Visibility 1.3.0 — Windows x64

**Default preset 8 hides other players' riders, horses and pets. Your own remain visible.** Hiding starts off. Press F5 to enable the selected preset. The current analyzed reference is SSOClient **647.349716**. Activation discovers addresses and validates code, registry layout and local ownership; it does not require a matching version string, PE timestamp or exact image size. Future compiler/layout changes may still require an update.

> **Account ban risk:** Installing and using this plugin likely violates [Star Stable's rules](https://help.starstable.com/hc/en-us/articles/4404692524946-Your-License-to-use-the-game-service) and could get your account banned. Loading it through ReShade does not imply approval.

## Install

Close the game, disable previous CE visibility entries and replace the old version of this feature. Choose **one** adapter:

| Adapter | Placement / prerequisite |
|---|---|
| `opengl32.dll` | Beside the actual `SSOClient.exe`; no separate loader needed |
| `SSOVisibility.addon64` | In the configured addon search directory of x64 ReShade with full addon support and `AddonInit` support |
| `SSOVisibility.asi` | In the scan directory of an x64 `InitializeASI`-capable loader; initialization must occur outside DllMain |
| `SSOVisibility.dll` | Explicit plugin host loads it and calls the exported initialization function |

Each player ZIP contains only its module and `SSOVisibility.ini`. Put **`SSOVisibility.ini` beside the chosen module**. For the proxy the previously used client directory was `C:\Users\Rafal\Desktop\StarStableOnline\Star Stable Online\client\`; verify the currently running executable's directory. If ReShade already supplies `opengl32.dll`, choose the addon instead of overwriting it. Do not copy these files into System32. Third-party loaders are not included or automatically installed. See `LOADER_ADAPTERS.md` for precise contracts.

Launch normally, enter the world and press F5 in the game window. F6 restores the original patched bytes and native behavior; actor fade-in may take a few seconds. Close the game before replacing/removing a module. It is pinned until process exit to retain code for in-flight calls.

## Controls

Keep **NumLock on**. These are numeric-keypad keys, not the top number row. Keys are polled while the game is foreground; the game can receive the same key presses.

| Key | Action |
|---|---|
| F5 | Enable current preset; initially preset 8 |
| F6 | Disable hiding and restore original game instructions |
| F7 | Reload INI and apply the current preset; preserves master on/off |
| Ctrl+Numpad0 | Select and enable every supported hiding filter; aggressive |
| Ctrl+Numpad1–9 | Select and enable that configured preset |

The old chords no longer toggle individual categories. Set individual categories in the INI. The selected preset survives F6/F5 during this process; a restart selects `[General] DefaultPreset` again. Changing DefaultPreset then pressing F7 does not change the current selection: use its Ctrl+Numpad key or restart.

## Default preset ladder

Each next preset keeps more visible; 4→5 keeps the same category switches but enables extra gameplay protection.

| Preset | Default hiding |
|---|---|
| **0** | Every available category, including broad particles, coins, quest markers and NPC text; immutable blanket preset |
| **1** | As 0, but keep quest markers |
| **2** | As 1, also keep NPC floating text / speech bubbles |
| **3** | As 2, also keep coins / collectible visuals |
| **4** | As 3, replace broad particles with the ambient allowlist |
| **5** | Same filters as 4, with known gameplay ancestry protected |
| **6** | As 5, also keep NPC people / unclassified NPC models |
| **7** | Remote riders/horses/pets, allowlisted ambient particles and detail grass only |
| **8 — default** | Remote riders, horses and pets only |
| **9** | Remote riders and horses only |

Defaults **0–4 are aggressive; 5–9 are intended for ordinary gameplay**. Own bodies and checkpoint ancestors remain protected even in 0. Broad particles may hide the local player's cosmetic effects, fog and race/quest particle cues. “Everything” means all filters implemented here, not deletion of every visible world object.

Gameplay guards inspect known types and case-insensitive name tokens in ancestry. They preserve collision routines and known race/quest cues, but are not an exhaustive asset classification. NPC models may disappear while their logic and collision continue. Do not infer that an invisible model has ceased to be an obstacle.

## Configure the INI

`1=hide`, `0=native behavior`. `[General] DefaultPreset=8` selects the starting option. Edit `[Preset1]` through `[Preset9]`, save, then press F7. `[Preset0]` is ignored so Ctrl+Numpad0 always enables all supported filters. A missing INI uses built-in defaults; the runtime does not create or overwrite your file. Invalid values fall back to that key's built-in default and are logged.

| Key | Scope |
|---|---|
| PlayerHorses | Other players' horses |
| PlayerActors | Other players' rider models |
| PlayerPets | Other players' pets |
| NpcPets | NPC pets / ambient animals; name-based split |
| NpcActors | NPC people and unclassified NPC models |
| NpcHorses | NPC horse models; name-based split |
| StandaloneHorses | Riderless `CPXHorse` objects |
| SaleHorses | Buyable / display horse visuals |
| Coins | Recognized coin/shilling and collectible visual subtrees |
| QuestMarkers | World question / exclamation marker visuals |
| NpcText | NPC floating text / speech bubbles |
| AmbientParticles | Exact allowlisted lamp glows, dust, chimney smoke, forest particles, decorative leaves, with ancestry protection |
| AllParticles | Broad legacy/extended particle filter; takes precedence over ambient selection |
| DetailGrass | Viewport's detail-grass draw helper |
| ProtectGameplay | Additional known quest/race/trigger ancestry protection; default 0 for 1–4, 1 for 5–9 |
| Name | Label printed in the log |

For example, add `AmbientParticles=1` and `DetailGrass=1` to preset 8 to try those two filters while retaining its player selections. Set `AllParticles=1` and `ProtectGameplay=0` only when you intend the broad cue-removing mode; preset 0 already does this.

Most NPC animal/horse classes share `CPXQuestControl`, so names distinguish those buckets. Unknown names enter NpcActors. The standalone-horse bucket had no active hits in the earlier observed scene. The feature does not change ignore lists or chat, prevent city streaming, remove obstacles, disable whole quest updates, or suppress every rendering subsystem.

## Troubleshooting and measurement

`SSO-visibility.log` beside the selected module records startup, selected presets, F5/F6 and guarded read failures. Old versions used `SSO-visibility-proxy.log`. No log can mean the loader did not call initialization, the path is wrong, or the directory is unwritable. A loaded adapter in a non-SSO executable deliberately stays inactive. Only one controller can own the process.

- Helper, registry-code or RTTI rejection: the current signatures or analyzed object layout need re-analysis. A matching client version is no longer required.
- When updating, close the game first, replace your chosen module and retain your customized INI. Diagnostic metadata is not needed to install or use it.
- Signature/context mismatch: remove older visibility patches and restart cleanly before retrying.
- Local player/horse not ready: enter the world and retry F5.
- F6 restoration refused: switches have been set to passthrough; exact bytes/backups remain. Resolve conflicting modifications and retry F6, or restart. Do not force-unload the module.

The optional developer `tools/read-proxy-state.ps1` reads the selected preset, flags, counters and hook ownership. It and private metadata remain in the repository/local builds and are excluded from player ZIPs. Keep `validation/proxy-symbols.json` with its exact matching module. It checks filename/hash and loaded headers before accessing private RVAs. Use 64-bit PowerShell. It does not patch, inject, activate, or suspend anything. Counters measure calls, not visible objects or FPS.

The previous 1.1 proxy was verified active during a live foreground trace. The new 1.2 filters/adapters pass isolated native/classifier/assembly tests, but **have not been visually verified or benchmarked in the game**. The measured 0.4307 sampled ms/present particle wrapper is a research target, not a guaranteed saving. Use the same camera/area/foreground state for comparisons and include restoration, transitions, races and local-actor visibility in live checks.

The source package contains build.cmd, CMake presets, native/generated sources, tests, tools and the two READMEs. The engineering journal and research remain in the repository. No game executable, IDB, Windows OpenGL DLL, raw ETL, Cheat Engine or third-party loader is distributed.
