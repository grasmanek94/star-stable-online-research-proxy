# Loader adapters and lifecycle

All four outputs share the same native controller. `SSO_HOST` selects the adapter at CMake configuration time; `build.cmd -Loader <name>` chooses a separate build directory. Plugin targets use a small C++17 ABI translation unit, without a ReShade SDK build dependency. All initialization occurs through an explicit call outside DllMain.

## OpenGL proxy

`PROXY` builds `opengl32.dll`, forwarding 368 exports by name and ordinal to an absolute System32 OpenGL path. The first forwarded call resolves the export table, completes its initialization lock, then starts the common host. DllMain only records the module and exit state. This adapter cannot occupy the same filename as another OpenGL proxy; arbitrary chaining is not implemented.

## ReShade

`RESHADE` builds `SSOVisibility.addon64`. Use x64 ReShade with full addon support, whose loader calls `bool AddonInit(HMODULE addon, HMODULE reshade)` after loading the DLL, and `void AddonUninit(HMODULE addon, HMODULE reshade)` before unloading it. This post-load contract is visible in the [official addon manager source](https://github.com/crosire/reshade/blob/main/source/addon_manager.cpp).

The shim resolves `ReShadeRegisterAddon` and `ReShadeUnregisterAddon` from the supplied host module. It negotiates registration API level 1 and exports NAME/DESCRIPTION. No graphics events or renderer interfaces are used. Current official registration accepts positive supported levels within the same major range; failed negotiation returns false. See the [official registration header](https://github.com/crosire/reshade/blob/main/include/reshade.hpp). Older loaders that only expect registration inside DllMain are outside this adapter's contract.

Place the addon and INI in the configured addon search directory. Keep ReShade's existing graphics DLL. This is a loader integration for SSO's native visibility hooks; it is not a ReShade postprocessing effect and does not infer actors from draw calls. Host negotiation is tested using a helper exporting the registration ABI; actual ReShade/game integration still needs a live check.

## ASI

`ASI` builds `SSOVisibility.asi`, exporting `void InitializeASI()` as an alias for common initialization. The loader must call it after LoadLibrary returns, outside the Windows loader lock. [Ultimate ASI Loader documents this contract](https://github.com/ThirteenAG/Ultimate-ASI-Loader#writing-plugins); retain its `DontLoadFromDllMain=1` setting. Its readme also documents the plugin search paths. The loader is not bundled or installed by this project.

LoadLibrary-only ASI loaders will map this module but will not start its controller. They require a bridge that calls the explicit initialization export. Merely changing a filename does not create another shader plugin's API. There is no claim of universal loader compatibility.

## Explicit DLL host

`PLUGIN` builds `SSOVisibility.dll`. A host may use these undecorated C exports on Windows x64:

```cpp
HMODULE module = LoadLibraryW(L"SSOVisibility.dll");
auto start = reinterpret_cast<BOOL (*)()>(GetProcAddress(module, "SSOVisibilityInitialize"));
auto stop = reinterpret_cast<void (*)()>(GetProcAddress(module, "SSOVisibilityShutdown"));
// Verify module/start/stop, then invoke start outside DllMain.
// Call stop outside DllMain before releasing the host's module reference.
```

The plugin also exports the ASI and ReShade entry points; the three plugin filenames use the same shim. The PROXY build has only the original OpenGL export surface. A successful initialization return means the host entry was accepted; a non-SSO executable deliberately runs no game controller. F5 performs actual game-layout validation.

## Common ownership, settings and shutdown

Only `SSOClient.exe` starts a controller. A named per-process mutex (`Local\SSOVisibility.Controller.<pid>`) permits one owner; a second adapter remains inactive. Install one adapter to avoid ambiguous configuration. Settings/logs live beside the adapter that owns control. There is no shared global AppData configuration.

The game module is pinned until process exit, retaining wrappers for in-flight calls. F6 restores behavior and original instructions; it does not unload code. Explicit shutdown stops/joins the input worker and attempts exact restoration. DllMain detach only requests stop; it does not wait, restore patches, allocate, log or perform ReShade registration. Restart the game for a binary replacement. The common host can restart its input worker after explicit shutdown while retaining state and ownership.

The INI is read once at startup, then on F7. Startup selects DefaultPreset (8) with the master off. F7 reapplies the current preset while preserving master state. Selecting Ctrl+Numpad0–9 applies and enables that preset. The same semantics apply to every adapter.

These contracts were checked against the linked official primary sources on 2026-11-15. Future loader API changes may require an adapter update, independently of SSO object-layout changes.
