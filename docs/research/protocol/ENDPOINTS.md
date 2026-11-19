## Server domains and endpoint selection

Identified 2026-11-19 from installed launcher2.60.0 and the SHA256-bound client647.349716. **The configured production hostname for the game's HTTPS bootstrap is `lb-pub.prod.starstable.com`.** The gameplay UDP host is selected separately by the server; the current input does not establish one universal gameplay hostname.

This is a configured-destination finding, not a live packet observation. No SSOClient process was running during this endpoint check. A filtered local DNS-cache query returned no matching Star Stable entries. Those observations do not prove a service is unavailable or that a particular historical session used a different host. No tokens, authenticated requests, packet capture, memory inspection or connection to these services was used to obtain the domains.

### Destination inventory

| Domain / value source | Role and transport | Evidence / confidence |
|---|---|---|
| **lb-pub.prod.starstable.com** | Game-service HTTPS, normally TCP443. Native game-server data and ticket requests. | Verified packaged production default and launcher→native URL-construction path; not a claim of an observed live connection. |
| Response field **game_server_address** | Actual login/game endpoint, custom encrypted UDP; fallback port18971 unless configured otherwise. May be a hostname or numeric address. | Verified response handling→initializer+240→native resolver. Its actual per-account/server value was not collected. Do not substitute the HTTPS API hostname. |
| **sentry.io** | Native client's configured Sentry crash/error reporting DSN host, HTTPS. | Verified two DSN literals at RVAs0xFFF728/0xFFF768, chosen in initialization0x720EF0 and passed to SDK configuration0x900E50. Separate from gameplay. No live upload was observed. |
| MetricsServer from **remoteConfig.metricsUrl** | Optional metrics endpoint passed by the launcher. | GameWindow source line905 sets metricsUrl from fetched remote configuration; formatter emits MetricsServer; native entry stores it separately. No concrete metrics hostname is established by the packaged defaults reviewed here. |
| Response field **report_a_player_server**, or explicit ReportPlayerServer | Optional reporting endpoint. | Native data handler copies the optional response string to initializer+520. Its actual server-provided value was not collected. |
| **launcher-release-prod.starstable.com** | Launcher self-update origin. | Verified packaged AUTO_UPDATE_URL; included to distinguish launcher-only traffic. It is not evidence of SSOClient gameplay or ticket traffic. |

The game's HTTPS hostname is not literally embedded as a starstable.com URL in the reviewed executable string inventory: it is supplied through the launch arguments. The native Sentry DSNs are embedded. String presence alone is not proof a path ran; the role labels above follow the callers and configuration flow. Domains in generic bundled HTTP diagnostics are not automatically SSO destinations.

### Exact production URLs and source chain

Packaged `resources/app.asar` SHA256 `390abe5340bfc5dc665bd8f5894b3e77af5f3d92cdea105f712d87bfd40f6b20` contains static build configuration `dist/.env`:

```text
line4 API_ENDPOINT=https://lb-pub.prod.starstable.com/proxy-launcher
line5 API_GATEWAY_ENDPOINT=https://lb-pub.prod.starstable.com/api-gateway/1.0
line7 AUTO_UPDATE_URL=https://launcher-release-prod.starstable.com
line11 PRODUCTION=true
```

This is the application's packaged build configuration, not a user credential/session file. Its SHA256 is `a0a02f0fbd0c18da12cef22b628fc267cd11db7de2bd1722e63c185e58d69101`. Only the four allowlisted values above are exported; unrelated environment/configuration keys are not copied into the research output.

`dist/utils/config.js` SHA256 `18c0398799dbc44ee5235c276d0b0ac8a9b81533d9c2b55e15598dcdfcf9882f` selects packaged `../.env` when Electron reports app.isPackaged, loads it with dotenv, and maps API_ENDPOINT/API_GATEWAY_ENDPOINT into config. This reader is not an authenticated API request. Native values can differ when a different environment/configuration or explicit CLI override is used; these are installed production defaults, not an immutable domain allowlist.

`dist/index.js` lines113–118 prefers a nonempty explicit CLI endpoint override, otherwise the configured endpoint. Lines188–189 select API/gateway bases. `dist/windows/game/index.js` line535 then passes **`new URL(this.gatewayEndpoint).origin`**, dropping the gateway path. `executable.js` emits:

```text
-ServiceBaseUrl="https://lb-pub.prod.starstable.com"
-NetworkLauncherServer="https://lb-pub.prod.starstable.com/proxy-launcher"
```

Only ServiceBaseUrl's native consumption is established here; emission of NetworkLauncherServer does not prove another game request uses that argument.

Native Windows entry0x1D770 stores ServiceBaseUrl at StudioInitialize+208. Setup0x380120 copies it to CPXPlayerSetup+160. Request builders append their own paths, yielding:

```text
POST https://lb-pub.prod.starstable.com/api-gateway/1.0/game-server/data
POST https://lb-pub.prod.starstable.com/api-gateway/1.0/game-server/ticket
```

Both requests have zero-length bodies and use the launcher's access token as an Authorization Bearer credential, as detailed in the authentication section. The `.env` API_GATEWAY_ENDPOINT's existing path must not be appended twice: the formatter's origin operation is what prevents that duplication.

Launcher account/queue calls share the production DNS host but are distinct operations:

```text
POST https://lb-pub.prod.starstable.com/api-gateway/1.0/session/create
POST https://lb-pub.prod.starstable.com/api-gateway/1.0/session/refresh
POST https://lb-pub.prod.starstable.com/proxy-launcher/launcher/auth/initialize
POST https://lb-pub.prod.starstable.com/proxy-launcher/launcher/login-queue/v2/desktop/token
GET/DELETE https://lb-pub.prod.starstable.com/proxy-launcher/launcher/login-queue/token
```

These follow the already recovered launcher templates and packaged bases. They are not evidence that SSOClient sends the initial email/password request itself. All URLs here are static constructions; no account endpoint was probed.

### How the gameplay destination is assigned

1. Native0x3803E0 requests game-server/data from the HTTPS origin above.
2. Result handler0x37F2A0 validates the JSON and copies `game_server_address` to StudioInitialize+240. It also validates user_id; the server address is not derived from a local region-name guess.
3. LoginServerConnect0x7C1800 copies that string, has a diagnostic format `ServerHostname: '%s'`, and uses initializer+272 for port or18971 when zero. The separate `ServerPort: '%u'` diagnostic reflects the selected port.
4. It passes hostname/port to resolver0xA4B7B0. Its hints set socket type2 (**SOCK_DGRAM**), with IPv4/IPv6/unspecified selection according to the caller's family selector. Subsequent ProcessConnect/UDP transport code uses the resolved endpoint.

The server-provided hostname/address can change independently of the launcher or client binary. Numeric IPs, CNAME targets, selected region/world/dispatcher destinations and reconnects cannot be reconstructed from the static API origin alone. The response schema accepts a string; it does not constrain that field to a fixed starstable.com suffix. A future proxy should retain the received address and endpoint/connection provenance instead of pinning a guessed hostname or current IP.

To establish an actual assigned hostname in a later authorized session, the relevant evidence is **only** the `game_server_address` field of a decoded game-server/data response, a hostname-only native diagnostic if available, or the corresponding narrowly scoped runtime field. Full launcher command lines/log dumps are unnecessary because they may contain access tokens. No such live value was available or collected in this check.

### Reproduction and update handling

The static ASAR reader now includes config.js and exports only the packaged endpoint allowlist, alongside source hashes:

```powershell
python docs/research/protocol/tools/inspect_launcher_static.py --archive "<installation>/resources/app.asar" --output out/protocol-647/launcher-reviewed
```

Read its identity.json configuration_endpoints field; do not execute extracted JavaScript or copy a user's actual process environment. The curated [data/endpoint-evidence.json](data/endpoint-evidence.json) contains hostname roles, full public URL constructions, native roots, static source identities and the no-live-session limitation. It deliberately omits the Sentry DSN key component, since the requested evidence is its hostname.

For an update, recheck archive/client hashes, packaged defaults, CLI origin formatting and the data-result→resolver path. Do not infer every SSOClient connection from one DNS host, and do not treat launcher updater/crash telemetry as gameplay. No fixed hostname/IP list is claimed for all users or future releases.
