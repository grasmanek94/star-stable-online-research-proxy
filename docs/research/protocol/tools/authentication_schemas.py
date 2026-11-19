"""Reviewed login6/7 wire grammar, from client647 concrete readers/writer.

This is a byte grammar. Server credential policy and unnamed optional-field
semantics are not inferred from their position. All examples are synthetic.
"""
from actor_schemas import field, optional, raw, vector


GAME_FEATURES = [
    "validate_quest_update", "decouple_activities_from_groups",
    "kick_player_on_item_release_validation_fail", "new_slave_synchronization",
    "enable_archive_horse", "enable_event_outbox", "enable_crafting_system",
    "enable_mystable_grids", "enable_refactored_achievement_system",
]
CLIENT_FEATURES = [
    "compile_script_on_load", "save_metric_on_disc", "use_report_player",
    "use_actor_refresh_delegates", "enable_quest_cleanup", "enable_actor_streaming",
    "enable_actors_on_demand", "enable_space_actors_unload",
    "physics_60_ticks_per_second", "enable_animation_driven_jousting",
    "enable_nebula", "enable_multiple_horse_locations", "enable_fashion_week",
    "enable_report_a_message", "enable_allow_jump_in_all_triggers",
]
SCHEMAS = {
    "LoginOptional": [field("text", "string", 0), field("f32", "varu32", 32),
                      field("f36", "u8", 36)],
    "PackMetadata": [field("filename", "string", 0), field("size_bytes", "varu32", 32),
                     field("crc32", "varu32", 36)],
    "LoginRequest": [
        field("optional_record", optional("LoginOptional")),
        field("username", "string"), field("game_server_ticket", "string"),
        field("machine_identifier", "string"), field("queue_token", optional(raw(16))),
        field("user_id", "varu32"), field("constant_one", "varu32"),
        field("pack_metadata", vector("PackMetadata")),
    ],
    "FeatureEntry": [field("name", "string", 0), field("enabled_byte", "u8", 32)],
    "LoginResponseData": [
        field("server_string", "string", 0),
        field("game_features", vector("FeatureEntry"), 32),
        field("client_features", vector("FeatureEntry"), 34),
        field("position", "Vec3", 36), field("orientation", "Normalized4", 48),
    ],
    "LoginResponse": [field("exit_code", "varu16"),
                      field("data", optional("LoginResponseData"))],
}
PACKETS = {6: "LoginRequest", 7: "LoginResponse"}
SPEC = {
    "client": "647.349716",
    "sha256": "62387b246a92a4874d20329caa6eaf06c7a29830263e94982a8bdad6b6110fe1",
    "input": "Decrypted, complete, header-free, reassembled application BODY",
    "schemas": SCHEMAS, "messages": PACKETS,
    "game_feature_names_in_bit_order": GAME_FEATURES,
    "client_feature_names_in_bit_order": CLIENT_FEATURES,
    "feature_policy": {"minimum_game_entries": 9, "minimum_client_entries": 15,
                       "maximum_entries": 16000, "unknown_names": "native reject",
                       "duplicate_names": "accepted, last enabled_byte wins",
                       "complete_unique_set_required": False},
    "limit": "Recovered client byte grammar and response handling; server policy/live acceptance untested",
}
