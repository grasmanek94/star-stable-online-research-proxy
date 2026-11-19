"""Client647 actor payload grammar recovered from the listed IDA readers.

Anonymous f<offset> names are host member identities, never wire offsets.
HorseBase is an analysis alias; HorseMaster is the larger RTTI-named record.
"""
import json
from pathlib import Path


def field(name, wire, host=None):
    value = {"name": name, "wire": wire}
    if host is not None:
        value["host_offset"] = host
    return value


def raw(size):
    return {"kind": "raw", "size": size}


def optional(wire):
    return {"kind": "optional", "value": wire}


def vector(wire):
    return {"kind": "vector", "value": wire, "maximum_count": 16000}


SCHEMAS = {
    "Transform": [field("position", "Vec3"), field("orientation", "Normalized4")],
    "Activity": [field("value", "varu32", 0), field("f4", "u8", 4), field("f5", "u8", 5)],
    "PlayerShared": [
        field("player_id", "varu32", 0), field("user_id", "varu32", 4),
        field("name_part_a", "string", 8), field("name_part_b", "string", 40),
        field("f72", "varu32", 72),
        *[field(f"f{o}", "u8", o) for o in range(76, 85)],
        field("f88", "varu32", 88), field("f92", "varu32", 92),
        field("equipment", "equipment_map", 96), field("position", "Vec3", 160),
        field("orientation", "Normalized4", 172), field("f188", "varu32", 188),
        field("f192", "varu32", 192), field("f200", "string", 200),
        field("look_bytes", raw(8), 232), field("activity", "Activity", 240),
    ],
    "HorseBase": [
        field("horse_id", "varu32", 0), field("name", "string", 8),
        field("owner_player_id", "varu32", 40), field("f44", "varu32", 44),
        field("f48", "varu32", 48), field("position", "Vec3", 52),
        field("orientation", "Normalized4", 64), field("slot_state_bytes", raw(13), 80),
        field("equipment", "equipment_map", 96),
        *[field(f"f{o}", "varu32", o) for o in [160, 164, 168]],
        field("f172", "zigzag32", 172), field("f176", "varu32", 176),
        field("f180", "zigzag32", 180),
        *[field(f"f{o}", "u8", o) for o in range(184, 194)],
    ],
    "HorseMaster": [
        field("base", "HorseBase", 0), field("f200", raw(16), 200),
        field("f216", "varu32", 216), field("f220", "varu32", 220),
        *[field(f"f{o}", "u8", o) for o in range(224, 232)],
    ],
    "Movement0": [
        field("f0", "u8", 0), field("position", "Vec3", 4),
        field("orientation", "Normalized4", 16), field("velocity", "Vec3", 32),
        field("f44", raw(4), 44), field("f48", raw(4), 48),
        field("f52", "varu32", 52), field("f56", optional("varu32"), 56),
    ],
    "Movement1": [
        field("f0", "u8", 0), field("position", "Vec3", 4),
        field("orientation", "Normalized4", 16), field("velocity", "Vec3", 32),
        field("f44", "Vec3", 44), field("f56", raw(4), 56),
        field("f60", raw(4), 60), field("time_or_sequence", "varu32", 64),
    ],
    "PetMotion": [
        field("position", "Vec3", 0), field("orientation", "Normalized4", 12),
        field("f28", optional("varu32"), 28), field("f36", "u8", 36),
        field("ground_state", "u8", 37),
    ],
    "PlayerState": [
        field("actor_mode", "u8", 0), field("flags1", "u8", 1), field("flags2", "u8", 2),
        field("horse_id", "varu32", 12), field("transform", optional("Transform"), 16),
        field("movement", {"kind": "variant", "alternatives": ["Movement0", "Movement1"]}, 48),
        field("pet_motion", optional("PetMotion"), 120), field("flags164", "u8", 164),
        field("f168", "varu32", 168), field("f4", optional("varu32"), 4),
        field("f172", "varu32", 172),
    ],
    "PositionRecord": [field("player_id", "varu32"), field("state", "PlayerState")],
    "RemoteSpawn": [field("prefix_flag", "u8"), field("prefix_value", "varu32"),
                    field("player", "PlayerShared"), field("horse", "HorseBase")],
    "RemoteRemove": [field("player_id", "varu32")],
    "AppearancePair": [field("f0", "varu32"), field("f4", "zigzag32"), field("f8", "varu32")],
    "EquipmentPush": [field("player_id", "varu32"), field("item_id", "varu32"),
                      field("owner", "u8"), field("slot", "varu32")],
    "PetStatePush": [field("player_id", "varu32"), field("item_id", "varu32"),
                     field("owner", "u8"), field("slot", "varu32"), field("ground_state", "u8")],
    "HorseNamePush": [field("player_id", "varu32"), field("name", "string")],
    "RemoteActorPush": [field("actor_path", "string"), field("player_id", "varu32"),
                        field("argument", "varu32")],
    "HorseAppearancePush": [field("player_id", "varu32"), field("horse_id", "varu32"),
                            field("selector", "u8"),
                            field("appearance", optional({"kind": "array", "value": "AppearancePair", "count": 2}))],
    "HorseEffectPush": [field("player_id", "varu32"), field("effect_id", "varu32"),
                        field("horse_id", "varu32")],
    "PlayerMakeupPush": [field("player_id", "varu32"), field("makeup", "u8")],
    "PlayerAppearancePush": [field("player_id", "varu32"), field("values", raw(6))],
    "ActivityPush": [field("player_id", "varu32"), field("activity", "Activity")],
    "PetStateRequest": [field("item_id", "varu32"), field("owner", "u8"),
                        field("slot", "varu32"), field("horse_id", "varu32"),
                        field("ground_state", "u8")],
    "MasterDecompressed": [
        field("player", "PlayerShared", 0), field("f248", "string", 248),
        field("f280", "zigzag32", 280), field("f284", "zigzag32", 284),
        *[field(f"f{o}", "varu32", o) for o in [288, 292, 296, 300]],
        field("horse", "HorseMaster", 304), field("f536", "u8", 536),
        field("contained_stream", "blob"),
    ],
}

SUBTYPES = {1: "EquipmentPush", 2: "PetStatePush", 3: "HorseNamePush",
            4: "RemoteActorPush", 5: "HorseMaster", 6: "HorseMaster",
            7: "HorseAppearancePush", 8: "HorseEffectPush", 9: "HorseEffectPush",
            10: "PlayerMakeupPush", 11: "PlayerAppearancePush", 12: "ActivityPush"}
PACKETS = {
    203: "PetStateRequest", 280: [field("state", "PlayerState"), field("time", "varu32")],
    281: [field("state", "PlayerState"), field("time", "varu32")],
    285: "RemoteSpawn", 286: "RemoteRemove", 190: "HorseMaster", 192: "HorseMaster",
    187: vector("HorseMaster"), 189: vector("HorseMaster"),
    225: [field("value", "varu32"), field("horse", "HorseMaster"), field("value2", "varu32")],
    228: [field("value", "varu32"), field("horse_a", "HorseMaster"), field("horse_b", "HorseMaster")],
}
READERS = {
    "PlayerShared": ["0x7aa8f0", "0x7af3d0"], "HorseBase": ["0x347560", "0x349af0"],
    "HorseMaster": ["0x3474b0", "0x349dc0"], "PlayerState": ["0x80bfe0"],
    "Movement0": ["0x80bdb0"], "Movement1": ["0x80bce0"], "PetMotion": ["0x80bb90"],
    "RemoteSpawn": ["0x7d08d0"], "RemoteRemove": ["0x7d08d0"],
    "PlayerMakeupPush": ["0x7f3e10", "0x80b9f0"],
    "PlayerAppearancePush": ["0x7f3e10", "0x80b9f0"],
    "MasterDecompressed": ["0x7cb340", "0xa4bf80"], "PetStateRequest": ["0x2ee9f0"],
}
SPEC = {"client": "647.349716", "sha256": "62387b246a92a4874d20329caa6eaf06c7a29830263e94982a8bdad6b6110fe1",
        "scope": "Focused static body grammar, not a whole-protocol proxy or live compatibility test",
        "host_offsets_are_not_wire_offsets": True, "schemas": SCHEMAS,
        "push284_subtypes": SUBTYPES, "ordinary_packet_bodies": PACKETS,
        "special_packet_bodies": {"282": "PositionRecord repeated until body EOF; no count",
                                  "284": "u8 subtype, then SUBTYPES entry",
                                  "master": "MasterDecompressed after outer ID9 decompression"},
        "reader_rvas": READERS}

if __name__ == "__main__":
    destination = Path(__file__).resolve().parents[1] / "data/actor-wire-schemas.json"
    destination.write_text(json.dumps(SPEC, indent=2) + "\n", encoding="utf-8")
    print(destination)
