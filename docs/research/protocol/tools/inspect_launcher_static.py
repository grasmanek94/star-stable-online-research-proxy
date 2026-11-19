"""Extract selected installed launcher CODE, never user storage or process arguments.

Reads an Electron ASAR archive without executing JavaScript. Keep output local and
ignored: it contains installed application sources, not redistribution assets.
"""
import argparse
import hashlib
import json
from pathlib import Path
import struct
from urllib.parse import urlsplit, urlunsplit


SOURCES = [
    "dist/services/Account/account.js",
    "dist/services/Account/helpers/apiClient.js",
    "dist/services/Session/session.js",
    "dist/utils/fetch.js",
    "dist/utils/cli.js",
    "dist/windows/game/helpers/executable.js",
    "dist/windows/game/helpers/gameStart.js",
    "dist/windows/game/helpers/loginQueue.js",
    "dist/windows/game/helpers/apiClient.js",
    "dist/windows/game/index.js",
    "node_modules/@ssol-common/constants/dist/cjs/endpoints.js",
    "node_modules/@ssol-common/constants/dist/cjs/platform.js",
    "dist/index.js",
    "dist/utils/deviceId.js",
    "dist/utils/systeminfo.js",
    "node_modules/node-machine-id/index.js",
    "node_modules/node-machine-id/dist/index.js",
    "dist/utils/config.js",
]


def endpoint_defaults(raw):
    """Select public endpoint defaults from packaged build config, never its other keys."""
    selected = []
    allowed = {"API_ENDPOINT", "API_GATEWAY_ENDPOINT", "AUTO_UPDATE_URL", "PRODUCTION"}
    for number, line in enumerate(raw.decode("utf-8").splitlines(), 1):
        if "=" not in line or line.lstrip().startswith("#"):
            continue
        key, value = line.split("=", 1)
        key, value = key.strip(), value.strip().strip("\"'")
        if key not in allowed:
            continue
        if key != "PRODUCTION":
            parsed = urlsplit(value)
            if parsed.scheme not in {"https", "http"} or not parsed.hostname or parsed.username or parsed.password:
                raise ValueError(f"Unexpected endpoint format for {key}; value omitted")
            value = urlunsplit((parsed.scheme, parsed.netloc, parsed.path, "", ""))
        selected.append({"key": key, "value": value, "line": number})
    return {"path": "dist/.env", "sha256": hashlib.sha256(raw).hexdigest(),
            "endpoint_allowlist_only": True, "entries": selected}


def extract(archive, output):
    output.mkdir(parents=True, exist_ok=True)
    with archive.open("rb") as file:
        prefix = file.read(16)
        if len(prefix) != 16:
            raise ValueError("Truncated ASAR header")
        first, header_size, pickle_size, json_size = struct.unpack("<4I", prefix)
        if not (first == 4 and 0 < json_size <= header_size < 32 * 1024 * 1024):
            raise ValueError("Unsupported ASAR header")
        header = json.loads(file.read(json_size))
        payload_offset = 8 + header_size

        def read(name):
            item = header
            for part in name.split("/"):
                item = item["files"][part]
            if item.get("unpacked") or "link" in item:
                raise ValueError(f"Source is outside the packed archive: {name}")
            size = int(item["size"])
            offset = payload_offset + int(item["offset"])
            if not (0 <= size <= 32 * 1024 * 1024 and
                    payload_offset <= offset <= archive.stat().st_size - size):
                raise ValueError(f"Invalid source bounds: {name}")
            file.seek(offset)
            result = file.read(size)
            if len(result) != size:
                raise ValueError("Truncated source")
            return result

        package = json.loads(read("package.json"))
        configuration = endpoint_defaults(read("dist/.env"))
        records = []
        for index, name in enumerate(SOURCES):
            raw = read(name)
            target = f"source-{index:02d}.js"
            (output / target).write_bytes(raw)
            records.append({"path": name, "local_file": target, "size": len(raw),
                            "sha256": hashlib.sha256(raw).hexdigest(),
                            "lines": len(raw.decode("utf-8").splitlines())})
    with archive.open("rb") as file:
        digest = hashlib.file_digest(file, "sha256").hexdigest()
    result = {"file": "app.asar", "sha256": digest,
              "size": archive.stat().st_size, "package_name": package["name"],
              "package_version": package["version"], "main": package["main"],
              "purpose": "Static installed application code only; no user storage or live credentials read",
              "sources": records, "configuration_endpoints": configuration}
    (output / "identity.json").write_text(json.dumps(result, indent=2) + "\n", encoding="utf-8")
    return result


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--archive", type=Path, required=True)
    parser.add_argument("--output", type=Path, required=True)
    args = parser.parse_args()
    result = extract(args.archive, args.output)
    print(json.dumps({k: result[k] for k in ("file", "package_version", "sha256", "size")}))
