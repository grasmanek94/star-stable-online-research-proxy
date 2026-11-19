"""Validate the delivered static reference's coverage and evidence links.

This checks document/data consistency, not live packet compatibility.
"""
from pathlib import Path
import argparse
import hashlib
import json
import re


def validate(root):
    data = root / "data"
    records = {p.name: json.loads(p.read_text(encoding="utf-8")) for p in data.glob("*.json")}
    ids = records["message-ids.json"]
    rpc = records["rpc-bindings-enriched.json"]
    raw = records["raw-reader-bindings.json"]
    procedures = records["procedure-index.json"]
    coverage = records["coverage.json"]
    document = root / "SSO-NETWORK-PROTOCOL-647.md"
    body = document.read_text(encoding="utf-8")

    assert sorted(x["id"] for x in ids) == list(range(436))
    assert len({x["id"] for x in rpc}) == len(rpc) == 175
    assert len({x["stub_rva"] for x in rpc}) == 154
    assert {x["id"] for x in raw} == {331,333,335,337,339,341,343,358,360}
    assert not ({x["id"] for x in raw} & {x["id"] for x in rpc})

    anchors = re.findall(r'<a id="([^"]+)"></a>', body)
    assert len(anchors) == len(set(anchors)), "Duplicate explicit anchors"
    for target in re.findall(r'\]\(#(fn-[0-9a-f]+|packet-\d+)\)', body):
        assert target in anchors, f"Broken evidence anchor: {target}"
    assert {f'packet-{b["id"]}' for b in rpc} <= set(anchors)
    assert {p["anchor"] for p in procedures} <= set(anchors)

    catalog = body.split("## Complete message ID catalog", 1)[1].split("## Incoming RPC payload catalog", 1)[0]
    catalog_ids = [int(x) for x in re.findall(r"^\|\s*(\d+)\s*\|", catalog, re.M)]
    assert catalog_ids == list(range(436)), "Missing/reordered ID catalog rows"
    for item in ids:
        assert item["name"] in catalog

    blocks = {}
    for match in re.finditer(r'<a id="(fn-[^"]+)"></a>\s*### [^\n]+\s*(?:Incoming RPC IDs:[^\n]+\s*)?```cpp\n(.*?)\n```', body, re.S):
        blocks[match[1]] = match[2]
    assert len(blocks) == len(procedures), "Procedure block/index mismatch"
    for p in procedures:
        text = blocks[p["anchor"]].strip()
        assert hashlib.sha256(text.encode()).hexdigest() == p["pseudocode_sha256"]
        header = text.split("{", 1)[0]
        name = re.search(r"sub_140([0-9A-F]+)\(", header)
        assert name and int(name[1], 16) == int(p["rva"], 16), f"Wrong function body for {p['rva']}"
    for b in rpc:
        assert f'fn-{int(b["execute_rva"],16):08x}' in blocks
        assert b["tuple_cpp"] in body

    fences = [line for line in body.splitlines() if line.startswith("```")]
    assert len(fences) % 2 == 0
    open_fence = False
    diagrams = 0
    for line in fences:
        if open_fence:
            assert line == "```", "Nested/unclosed code fence"
        else:
            diagrams += line == "```mermaid"
        open_fence = not open_fence
    assert diagrams == coverage["mermaid_diagrams"] == 10

    layout = records["compound-member-layouts.json"]
    player = {x["host_offset"]: x["wire"] for x in layout["PlayerCreateSharedMessage"]}
    horse = {x["host_offset"]: x["wire"] for x in layout["HorseCreateMasterMessage"]}
    assert all(player[x] == "u8" for x in range(76,85))
    assert player[88] == player[92] == "varu32"
    assert horse[0] == "varu32" and horse[8] == "byte string"
    assert horse[172].startswith("zigzag32") and horse[180].startswith("zigzag32")
    short_horse = {x["host_offset"]:x["wire"] for x in layout["HorseBase"]}
    assert 200 not in short_horse and horse[200] == "16 raw bytes"
    assert horse[216] == horse[220] == "varu32"

    assert coverage["message_ids"] == len(ids)
    assert coverage["rpc_registrations"] == len(rpc)
    assert coverage["raw_callback_registrations"] == len(raw)
    assert coverage["procedure_appendix_functions"] == len(procedures)
    assert document.stat().st_size == coverage["document_bytes"]
    assert hashlib.sha256(document.read_bytes()).hexdigest() == coverage["document_sha256"]
    checks = records["ida-cross-check.json"]
    assert checks["errors"] == []
    assert checks["checked_input_sha256"] == coverage["sha256"]
    assert checks["id_jump_table_entries"] == len(ids)
    assert checks["rpc_id_words_and_vtable_slots"] == len(rpc)
    assert records["serializer-dependencies.json"]["missing"] == []
    libraries = records["library-identification.json"]
    assert libraries["sha256"] == coverage["sha256"]
    assert len(libraries["components"]) == 7
    assert len(libraries["selected_string_evidence"]) == 26
    assert "## Library identification and format examples" in body
    assert "96 01" in body and "9E 02" in body
    assert "50 48 65 6C 6C 6F" in body
    assert (root / "LIBRARY_IDENTIFICATION.md").is_file()
    actor_schema = records["actor-wire-schemas.json"]
    assert actor_schema["sha256"] == coverage["sha256"]
    assert set(map(int,actor_schema["push284_subtypes"])) == set(range(1,13))
    assert "HorseBase" in actor_schema["schemas"] and "HorseMaster" in actor_schema["schemas"]
    assert actor_schema["schemas"]["RemoteSpawn"][-1]["wire"] == "HorseBase"
    assert actor_schema["push284_subtypes"]["5"] == actor_schema["push284_subtypes"]["6"] == "HorseMaster"
    evidence = records["actor-lifecycle-evidence.json"]
    assert evidence["sha256"] == coverage["sha256"]
    assert {f'fn-{int(rv,16):08x}' for rv in evidence["procedure_rvas"]} <= set(blocks)
    assert (root / "ACTOR_LIFECYCLE.md").is_file()
    auth = records["authentication-evidence.json"]
    assert auth["sha256"] == coverage["sha256"]
    assert auth["launcher"]["package_version"] == "2.60.0"
    assert len(auth["launcher"]["sources"]) == 18
    assert {f'fn-{int(rv,16):08x}' for rv in auth["procedure_rvas"]} <= set(blocks)
    indexed_hashes = {int(p["rva"],16):p["pseudocode_sha256"] for p in procedures}
    assert all(indexed_hashes[int(rv,16)] == digest for rv,digest in auth["procedure_sha256"].items())
    assert [x["name"] for x in auth["login6_wire_order"]] == [
        "optional_record", "username", "game_server_ticket", "machine_identifier",
        "queue_token", "user_id", "constant_one", "pack_metadata"]
    assert auth["transport_crypto"]["cycles"] == 8
    assert auth["transport_crypto"]["bootstrap_context_hex"] == "3a190000a2a6000062070000ca0100003ea60000d00b000002fb00007a010000"
    assert "## Launcher handoff, authentication and traffic decryption" in body
    assert "POST with zero body length" in body
    assert (root / "AUTHENTICATION.md").is_file()
    auth_schema = records["authentication-wire-schemas.json"]
    assert auth_schema["sha256"] == coverage["sha256"]
    assert set(auth_schema["messages"]) == {"6", "7"}
    assert auth_schema["feature_policy"]["duplicate_names"].startswith("accepted")
    assert [x["name"] for x in auth_schema["schemas"]["PackMetadata"]] == ["filename", "size_bytes", "crc32"]
    assert auth["followup"]["crc32_table"]["entries_verified"] == 256
    assert auth["followup"]["http_options"]["minimum_tls"] == "1.2"
    assert (root / "MISSING_ITEMS.md").is_file()
    endpoints = records["endpoint-evidence.json"]
    assert endpoints["sha256"] == coverage["sha256"]
    assert endpoints["primary_game_https_host"] == "lb-pub.prod.starstable.com"
    assert endpoints["launcher"]["sha256"] == auth["launcher"]["sha256"]
    assert endpoints["gameplay_udp"]["assigned_hostname"] is None
    assert endpoints["gameplay_udp"]["socket_type"] == 2
    assert endpoints["gameplay_udp"]["fallback_port"] == 18971
    assert all(indexed_hashes[int(rv,16)] == digest for rv,digest in endpoints["procedure_sha256"].items())
    assert "## Server domains and endpoint selection" in body
    assert all(row["url"] in body for row in endpoints["game_https_requests"])
    assert (root / "ENDPOINTS.md").is_file()
    for name in ["JOURNAL.md", "README.md"]:
        assert (root / name).is_file()
    return {"status":"passed", "json_files":len(records), "ids":len(ids),
            "typed_rpcs":len(rpc), "raw_callbacks":len(raw),
            "procedure_blocks":len(blocks), "mermaid_blocks":diagrams,
            "identified_component_records":len(libraries["components"]),
            "actor_update_subtypes":len(actor_schema["push284_subtypes"]),
            "launcher_source_records":len(auth["launcher"]["sources"]),
            "limit":"Static evidence/document consistency; no live or server acceptance test; Mermaid syntax not rendered."}


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--input", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--receipt", type=Path)
    args = parser.parse_args()
    result = validate(args.input)
    if args.receipt:
        args.receipt.write_text(json.dumps(result, indent=2) + "\n", encoding="utf-8")
    print(json.dumps(result))
