# PE version resources — 2026-11-15

Every project executable, shared DLL and module target configured by sso_configure_target receives a generated Windows VERSIONINFO resource. This includes opengl32.dll, SSOVisibility.addon64, SSOVisibility.asi, SSOVisibility.dll and all native helper/test EXE/DLL outputs. COFF objects/import libraries, PDBs, maps and ZIPs are not PE images with Windows file properties.

## Requested identity

| Field | Value |
|---|---|
| ProductName | Star Stable Online Frame Rate / Performance Fixer |
| FileDescription | Star Stable Online Frame Rate / Performance Fixer - https://github.com/grasmanek94/star-stable-online-quality-of-life-improver |
| CompanyName | grasmanek94 |
| Author / Authors | grasmanek94 (explicit string-resource aliases) |
| LegalCopyright | Copyright (c) 2026-&lt;UTC build year&gt; grasmanek94 |
| Comments | Repository: https://github.com/grasmanek94/star-stable-online-quality-of-life-improver |
| RepositoryURL | https://github.com/grasmanek94/star-stable-online-quality-of-life-improver |
| FileVersion / ProductVersion | Four components from the CMake project version; currently1.2.1.0 |
| OriginalFilename / InternalName | Actual target filename / filename without extension |

The description contains the exact requested title followed by the repository URL. ProductName contains the title alone. The author is also CompanyName because that is a standard field shown by Windows file properties; Author/Authors are available to tools querying the explicit strings. In2026 the requested range is2026–2026. The English/Unicode string table uses0409/1200. EXE versus DLL resource type and Debug flag match the actual target/configuration.

## Generation and incremental behavior

- cmake/VersionResources.cmake attaches one generated resource to every configured PE target. Filename generator expressions resolve the final OUTPUT_NAME/SUFFIX, including .asi/.addon64. Resources live under each build directory's version/&lt;configuration&gt;/ and are not committed.
- cmake/GenerateVersionResource.cmake runs as a build dependency, including ordinary incremental builds. It reads the current UTC year when invoked, independently of SOURCE_DATE_EPOCH, with2026 as the lower bound. A rebuild in a later year updates the range without editing/reconfiguring source.
- cmake/version.rc.in defines numeric/string versions, requested identity, original filename, file type and configuration flags. No version-resource fields are loaded from the game or Cheat Engine.
- configure_file changes the generated RC only when its contents differ. An unchanged build keeps its RC timestamp and binary hash; the metadata check does not force a relink by itself.
- Windows SDK's resource compiler links the resource into each PE. No new DLL imports or runtime calls are added to the application.

The build wrapper runs tools/verify_pe_metadata.ps1 after compilation. It uses Windows version-information APIs and .NET hashing to inspect files without loading/executing them, checks all requested strings, original filename, version and Debug flag, and records validation/pe-metadata.json. The standalone command is:

```powershell
.\tools\verify_pe_metadata.ps1 -BuildDirectory out/build/vs2026-x64/bin/Release
```

tools/record_validation.py also verifies these reports cover every PE in each recorded configuration and that their hashes match current files. Any resource/link change regenerates the normal DLL hash-bound symbol metadata; old private RVAs/hashes remain invalid for a newly linked module.

## Implementation journal and validation

The user requested repository URL in FileDescription, the exact product title, author grasmanek94, an automatically maintained2026-to-build-year copyright range, and a commit/push after completion. Implemented shared CMake build-time RC generation, rather than hand-maintaining resources per adapter/helper. Enabled RC alongside MASM and attached the resource through the existing common target configuration.

Built the seven local configurations: PROXY Release/Debug/RelWithDebInfo, RESHADE Release/Debug, ASI Release and PLUGIN Release. All42 existing CTest suite executions passed. Independently verified all35 PE images, including custom Author/Authors/RepositoryURL strings, true original suffixes and Debug flags. A repeated unchanged proxy build preserved both the generated resource timestamp and the linked DLL hash. The build-wrapper checker initially used Get-FileHash, whose script function was unavailable in the nested Windows PowerShell environment; replaced it with .NET SHA256 and verified the actual wrapper succeeds.

This is metadata/build tooling only. Visibility defaults, native filtering decisions, loader contracts and disabled GitHub workflow remain unchanged. No game was started/played/modified for this task. Existing unrelated uncommitted research/privacy notes were preserved and excluded from the metadata commit and committed-source archive.

Reference contracts: [Microsoft VERSIONINFO resource](https://learn.microsoft.com/en-us/windows/win32/menurc/versioninfo-resource), [CMake custom targets and byproducts](https://cmake.org/cmake/help/latest/command/add_custom_target.html), [CMake configure_file incremental behavior](https://cmake.org/cmake/help/latest/command/configure_file.html).
