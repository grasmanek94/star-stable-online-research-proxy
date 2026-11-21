# Star Stable Online protocol research

Protocol specifications, reverse-engineering journals, static evidence, and a Windows TCP and UDP forwarding proxy with protocol inspectors for controlled endpoints.

## Start here

| Document | Contents |
|---|---|
| [Protocol reference](docs/research/protocol/SSO-NETWORK-PROTOCOL-647.md) | Transport, encryption, serialization, all436 message names, incoming RPCs and490 procedure excerpts |
| [Authentication](docs/research/protocol/AUTHENTICATION.md) | Launcher token handoff, HTTPS ticket exchange, login messages and encryption layers |
| [Endpoints](docs/research/protocol/ENDPOINTS.md) | Production HTTPS domain, dynamic gameplay-server assignment and separate reporting/update roles |
| [Player, horse and pet messages](docs/research/protocol/ACTOR_LIFECYCLE.md) | Spawn/update/removal, ownership, local identity and byte layouts |
| [Libraries and encodings](docs/research/protocol/LIBRARY_IDENTIFICATION.md) | Custom engine protocol versus libcurl/Schannel, LZ4, JSON and crash-reporting components |
| [Research journal](docs/research/protocol/JOURNAL.md) | Discovery steps, exact addresses, failed hypotheses and corrections |
| [Remaining items](docs/research/protocol/MISSING_ITEMS.md) | Resolved items and the limits of current evidence |
| [Session handoff](docs/SESSION_HANDOFF.md) | How to resume work in this repository |

The gameplay protocol recovered here uses custom reliable/encrypted **UDP**. HTTPS account/ticket requests use a separate TCP/TLS stack. The installed production API default is `lb-pub.prod.starstable.com`; the gameplay destination comes from a server response.

## Scope

The primary reference is Windows client **647.349716**, SHA256 `62387b246a92a4874d20329caa6eaf06c7a29830263e94982a8bdad6b6110fe1`, and launcher **2.60.0**. Addresses identify that executable, not arbitrary future versions.

Findings are based on static analysis and synthetic checks. Tests exercise both transports and decode local TLS 1.2, TLS 1.3 and encrypted UDP exchanges. Live game compatibility remains unverified. The message catalog supplies names while the focused schemas define the layouts and field meanings established so far.

## Build the proxy

Use CMake 3.20 or newer and a Windows C++20 compiler. Install Python 3.11 or newer to run the inspector and enable the loopback test at configure time.

```powershell
cmake -S . -B out/proxy -A x64
cmake --build out/proxy --config Release
ctest --test-dir out/proxy -C Release --output-on-failure
```

CTest includes the TLS smoke test when TShark and the OpenSSL command line are available at configure time. Set `SSO_TSHARK` and `SSO_OPENSSL` to their executable paths for a custom installation.

## Forward UDP

Start a UDP test server at `127.0.0.1:19000`, run the relay, and point a test client at `127.0.0.1:18971`.

```powershell
.\out\proxy\Release\sso-proxy.exe --upstream 127.0.0.1:19000
```

Use `--listen 127.0.0.1:PORT` or `--listen [::1]:PORT` to choose the local endpoint. The relay resolves `--upstream HOST:PORT` once before binding, prints the selected numeric address on stderr, and uses a separate connected upstream socket for each client endpoint. It forwards datagram bytes in both directions and logs length, direction, timestamp and the Winsock send outcome as JSON lines. UDP delivery still depends on the network and peers. Up to 256 client endpoints are retained, and sockets expire after five minutes of inactivity.

For a controlled client647 test exchange, store its eight little-endian context words in a 32-byte binary file. Pass that file to the inspector and pipe the opt-in trace into it.

```powershell
.\out\proxy\Release\sso-proxy.exe --upstream 127.0.0.1:19000 --trace |
    python docs/research/protocol/tools/inspect_udp_trace.py --context-file .\private\test-context.bin
```

`--trace` emits full wire bytes. The inspector takes one explicit context, verifies the envelope, labels ACKs, assembles supported fragments, and uses the reviewed login and actor body schemas. It includes readable numeric transforms and UTF-8 text where the bytes support it. The output omits raw datagrams and redacts login identifiers, tickets and response 2 context words. Catalog-only payloads are reported as unsupported and unidentified fields retain their recorded labels. The relay sends before queuing the log, and `log_overflow` reports skipped observations when the sink falls behind. Stop the relay with Ctrl+C.

## Forward TCP and inspect TLS

To run TCP by itself, point a test client at `127.0.0.1:18443` and set `--tcp-upstream HOST:PORT` to its upstream. Use `--tcp-listen 127.0.0.1:PORT` or `--tcp-listen [::1]:PORT` to change the local address. The TCP relay forwards each byte stream in both directions, including half-closes. It preserves end-to-end TLS between the client and upstream. TCP metadata includes a connection ID and an offset for each direction.

To inspect both transports, start a UDP test server at `127.0.0.1:19000` and a TLS test server at `127.0.0.1:19443`. Point the clients at the corresponding loopback listeners. The inspector accepts one supplied UDP context and a TLS session key log in NSS format. Install a recent TShark with Wireshark or pass `--tshark` with its executable path. [Wireshark TLS key log support](https://wiki.wireshark.org/TLS)

```powershell
.\out\proxy\Release\sso-proxy.exe --upstream 127.0.0.1:19000 --tcp-upstream 127.0.0.1:19443 --trace |
    python docs/research/protocol/tools/inspect_proxy_trace.py --udp-context-file .\private\udp.bin --tls-key-log .\private\tls.keys
```

Either context option can be used on its own. For TLS, start the trace before the handshake and make matching secrets available in the supplied key log. The inspector pipes a reconstructed TCP capture to TShark in memory. Its HTTP/1.x and HTTP/2 records include methods, response status codes, recognized route paths, and the available request-frame or HTTP/2 stream identifiers. Each decoded record groups fields from one reconstructed frame. Headers carrying authorization or cookies, queries, and bodies are excluded from the output. Arbitrary paths are labeled `unrecognized`. UDP inspection uses the same reviewed message readers as the standalone decoder.

Keep `--trace` connected directly to the inspector when you want decoded logs. The outgoing inspector JSON omits wire bytes. A TCP observation gap ends inspection of the affected TLS stream while forwarding continues. `tls_inspection_complete` reports the number of emitted HTTP records when the input closes. The proxy and inspector use the supplied addresses and context files and leave the game process and certificate settings untouched.

## Temporarily redirect hostnames on Windows

In an elevated PowerShell window, start the proxy with `--redirect-hosts`. Replace `api.example.test` with a resolvable hostname for a server you control.

```powershell
.\out\proxy\Release\sso-proxy.exe --tcp-upstream api.example.test:443 --redirect-hosts
```

The proxy resolves all configured upstreams and opens its listeners before adding a marked entry for each upstream hostname. In this mode the listener defaults to `127.0.0.1` and the upstream port. An explicit `--listen` or `--tcp-listen` must use that same port and can select `[::1]`. The change applies to hostname lookups on the Windows machine. The proxy rejects hostnames already mapped in the hosts file. One proxy redirect can be active at a time.

Wait for `Windows hosts redirect applied` before connecting clients. To undo the redirect while keeping the relay open, run this in another elevated terminal:

```powershell
.\out\proxy\Release\sso-proxy.exe --restore-hosts
```

Ctrl+C and normal console closure also trigger restoration. The proxy removes its marked entries and keeps unrelated hosts edits. It attempts to flush the Windows DNS cache after each change. Use `--restore-hosts` to recover after a crash or a forced stop. The option requires DNS hostnames for all configured upstreams. Gameplay assignments that use an IP literal require a separate routing mechanism. [Windows DNS cache behavior](https://learn.microsoft.com/windows-server/administration/windows-commands/ipconfig)

## Run the offline checks

Use Python3.11 or newer from the repository root. These scripts use the standard library; no game, IDA, Cheat Engine or third-party Python package is required.

```powershell
python docs/research/protocol/tools/validate_reference.py
python docs/research/protocol/tools/verify_actor_payloads.py
python docs/research/protocol/tools/verify_datagram_codec.py
python docs/research/protocol/tools/verify_authentication_payloads.py
```

The standalone decoders process local bytes. Actor/login decoders expect complete, decrypted, header-free, reassembled application bodies. The datagram codec handles the UDP envelope and header. The relay inspector links these readers and observes reliability metadata while the endpoints perform delivery and retries.

## Regenerate the specification

Reviewed static IDA text/JSON exports are tracked under [evidence/client-647](evidence/client-647/README.md). Canonical prose sections and grammar modules live under `docs/research/protocol/`.

```powershell
python docs/research/protocol/tools/build_reference.py
python docs/research/protocol/tools/validate_reference.py
```

The builder uses tracked evidence by default and writes the generated reference/data. Markdown output uses LF line endings so its recorded byte count and SHA256 remain consistent across Windows/Linux checkouts. New binary analysis still requires a matching local executable and IDA.

## Historical research

Earlier CPU profiling, visual-hiding investigations, privacy/protection notes and implementation journals are retained under `docs/`. [The import record](docs/IMPORT_PROVENANCE.md) explains their origins. Visibility-plugin build/install guides under `docs/archive/visibility-runtime/` describe the separate [visibility project](https://github.com/grasmanek94/star-stable-online-quality-of-life-improver), not a native proxy build in this repository. Historical paths, process IDs and heap addresses are evidence, not current bindings.

Local binaries, IDA databases, raw captures, launcher archives, credentials and build products belong in ignored directories such as `out/` or `private/`. The repository contains static research exports and synthetic examples, not a user's live session values.
