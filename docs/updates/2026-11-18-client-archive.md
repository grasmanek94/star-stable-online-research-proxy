# Release and executable archive — 2026-11-18

Published [release1.3.0](https://github.com/grasmanek94/star-stable-online-quality-of-life-improver/releases/tag/1.3.0) from commit `3fa0fc0a85567de9ff76e2dd107a8afd2110e1bf`. Verified all7 uploaded assets by GitHub's SHA256 digests and confirmed1.3.0 is the latest public release. It includes4 minimal loader ZIPs, the8-file combined bundle, the build-only multilingual source ZIP and separate manifest. The42-suite build matrix is in build-validation.json. The user's successful hiding test preceded this release; the native hiding policy is unchanged.

Only after publication was verified, ran tools/cache_client.ps1 against the installed client. The local backup is under:

```text
Documents/Codex/cache/SSO-FPS/clients/
  647.349716/
    62387b246a92a4874d20329caa6eaf06c7a29830263e94982a8bdad6b6110fe1/
      SSOClient.exe
      manifest.json
```

Identity: file version647.349716, product Stellar647,21,492,112 bytes, PE timestamp0x6AF719CF, image size0x14C1000. SHA256 is the full folder name above. Source and copy hashes match. The local manifest records the source path and capture timestamp; the cache is outside this repository and has its own ignore file. Repeating the helper returns `created:false`, verifies the existing hash and reuses the archive without overwriting it. The local cache README provides the future capture command.

Searched the project workspace for SSOClient executable copies. The only existing copy found was the same647 client in ignored out/client-647; no old645 executable was recovered. Keep the new cache when cleaning build outputs. The earlier IDA excerpts/site windows remain separate historical evidence, not a substitute for an original complete645 PE file.

After each future game update, run the helper before another update replaces the installed executable. Different versions or hashes get separate directories. Compare the newest and preceding archived binaries in IDA, verify native semantics/ownership/layout as well as AOB uniqueness, then update canonical data and tests. No automatic update watcher was installed. The helper does not start the game, execute cached binaries, patch files, or upload anything. Never add these executable archives or local manifests to Git or release ZIPs.
