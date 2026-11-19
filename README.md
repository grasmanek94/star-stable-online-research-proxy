# Star Stable Online protocol research

Protocol specifications, reverse-engineering journals, static evidence and offline decoders for Star Stable Online. This repository is the research foundation for a future traffic-inspection proxy. A forwarding/filtering proxy is not implemented here.

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

Findings are based on static analysis and synthetic checks. Complete message-name coverage does not mean every server payload or field meaning is known. No captured golden login session, server acceptance, functioning relay or live TLS decryption is claimed. The documents label unknowns and corrections.

## Run the offline checks

Use Python3.11 or newer from the repository root. These scripts use the standard library; no game, IDA, Cheat Engine or third-party Python package is required.

```powershell
python docs/research/protocol/tools/validate_reference.py
python docs/research/protocol/tools/verify_actor_payloads.py
python docs/research/protocol/tools/verify_datagram_codec.py
python docs/research/protocol/tools/verify_authentication_payloads.py
```

The decoders process local bytes only. Actor/login decoders expect complete, decrypted, header-free, reassembled application bodies. The datagram codec handles the envelope/header and does not supply a live capture, TLS interceptor or reliability-aware relay.

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
