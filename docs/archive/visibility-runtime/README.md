[English](README.md) | [Polski](README.pl.md) | [Nederlands](README.nl.md)

# Star Stable Online FPS Fixer

This unofficial Windows plugin can improve FPS in Star Stable Online by hiding things the game spends time drawing and animating. The improvement depends on your computer and the area you are in.

> **Account ban risk:** Installing and using this plugin likely violates [Star Stable's Terms of Service](https://help.starstable.com/hc/en-us/articles/4404692524946-Your-License-to-use-the-game-service) and **could get your account banned**. Star Stable says it [takes action against accounts using unauthorized modifications](https://www.starstable.com/en/article/player-safety). This project does not claim approval from Star Stable; using the ReShade version carries the same risk.

By default, it hides **other players' characters, horses and pets**. Your own character, horse and pets stay visible.

You can also choose presets that hide:

- NPC characters, horses and animals.
- Riderless horses and horses displayed for sale.
- Coins and collectible visuals, quest question/exclamation marks, and NPC floating text or speech bubbles.
- Decorative particles such as smoke, dust, glows and leaves, plus detail grass.

## Download and install

1. **Close Star Stable.**
2. Open the **[Releases page](https://github.com/grasmanek94/star-stable-online-quality-of-life-improver/releases)** and choose the version you want. For the simplest setup, download the ZIP whose name ends with **`-PROXY-win64.zip`**.
3. Right-click the ZIP and choose **Extract All**. It contains `opengl32.dll` and `SSOVisibility.ini`.
4. Copy both files into the game's **`client` folder**, beside **`SSOClient.exe`**. You can search your computer for that file to find the right folder.
5. Launch the game normally, enter the world and press **F5**.

Install only one version of the plugin. When updating, close the game and replace the plugin file. Keep your existing `SSOVisibility.ini` if you have customized it.

**Already using ReShade?** Keep its `opengl32.dll`. Download the `-RESHADE-win64.zip` instead and place `SSOVisibility.addon64` and the INI together in your ReShade addon folder. This requires 64-bit ReShade with full addon support. ASI and PLUGIN downloads need a compatible loader; see the [developer guide](README-DEVELOPERS.md#loader-choices).

## Keys

Use these while the game window is active. **Turn NumLock on.** “Num” means the number pad on the right side of your keyboard.

| Key | What it does |
|---|---|
| **F5** | Turn hiding on using the selected preset. Starts with preset **8**. |
| **F6** | Turn hiding off and show things again. Allow a few seconds for them to fade back in. |
| **Ctrl + Num 0** | Hide as much as this plugin supports. |
| **Ctrl + Num 1–9** | Choose that preset and turn hiding on. See below. |
| **F7** | Reload your saved INI settings. |

## Presets: how much gets hidden?

Start with **8**. Lower numbers hide more; higher numbers keep more visible.

| Ctrl + Num | Default behavior |
|---|---|
| **0** | All supported filters, including coins, quest markers, NPC text and broad particle hiding. |
| **1** | Same as 0, but keep quest markers. |
| **2** | Same as 1, also keep NPC floating text and speech bubbles. |
| **3** | Same as 2, also keep coins and collectibles. |
| **4** | Same as 3, but hide only selected decorative particles instead of all particles. |
| **5** | Same as 4, with extra protection for recognized race and quest visuals. |
| **6** | Same as 5, also keep NPC people. |
| **7** | Hide other players' characters, horses and pets, selected decorative particles and detail grass. |
| **8 — default** | Hide only other players' characters, horses and pets. |
| **9** | Hide only other players' characters and horses. Keep their pets. |

**0–4 are aggressive.** They can hide useful race or quest effects, fog and your own cosmetic particles. **5–9 are intended for normal gameplay**, but no preset can recognize every important visual. Hiding something does not remove its collision: an invisible object can still block you. Press **F6** whenever you need everything visible again.

## Change the settings

Open `SSOVisibility.ini` in Notepad. Under `[Preset1]` through `[Preset9]`, set **`1` to hide** a category or **`0` to keep it visible**. Save, press **F7** in the game, then select the preset with **Ctrl + Num**. To choose a different starting preset, change the number in `DefaultPreset=8` under `[General]` and restart the game. Preset 0 always enables every filter and cannot be edited.

## If it does not work

- Check that the plugin and INI are beside the correct game executable, then enter the world before pressing F5.
- Check NumLock and use the number pad for presets.
- A game update may need a newer plugin version. Check the [Releases page](https://github.com/grasmanek94/star-stable-online-quality-of-life-improver/releases). The plugin writes details to `SSO-visibility.log` beside its file.

To uninstall, close the game and remove the plugin file you installed and its INI. Keep any files belonging to ReShade or another loader.
