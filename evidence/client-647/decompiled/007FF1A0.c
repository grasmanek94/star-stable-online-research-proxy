__int64 __fastcall sub_1407FF1A0(const char *a1)
{
  unsigned __int64 v1; // rsi
  const char *v2; // rbx
  __int64 v3; // rdi
  const char *v5; // rcx
  const char *v6; // rcx
  const char *v7; // rcx
  const char *v8; // rax
  __int64 v9; // rcx
  const char *v10; // rcx
  const char *v11; // rcx
  __int64 v12; // rsi
  const char *v13; // rcx
  unsigned __int64 v14; // rdi
  const char *v15; // rcx

  v1 = *((_QWORD *)a1 + 3);
  v2 = a1;
  v3 = *((_QWORD *)a1 + 2);
  if ( v1 > 0xF )
    a1 = *(const char **)a1;
  if ( v3 == 21 && (unsigned int)sub_140E82B50(a1, a2: "validate_quest_update") == 0 )
    return 0;
  v5 = v2;
  if ( v1 > 0xF )
    v5 = *(const char **)v2;
  if ( v3 == 31 && (unsigned int)sub_140E82B50(a1: v5, a2: "decouple_activities_from_groups") == 0 )
    return 1;
  v6 = v2;
  if ( v1 > 0xF )
    v6 = *(const char **)v2;
  if ( v3 == 43 && (unsigned int)sub_140E82B50(a1: v6, a2: "kick_player_on_item_release_validation_fail") == 0 )
    return 2;
  v7 = v2;
  if ( v1 > 0xF )
    v7 = *(const char **)v2;
  if ( v3 == 25 && (unsigned int)sub_140E82B50(a1: v7, a2: "new_slave_synchronization") == 0 )
    return 3;
  v8 = v2;
  if ( v1 > 0xF )
    v8 = *(const char **)v2;
  if ( v3 == 20 )
  {
    v9 = *(_QWORD *)v8 - 0x615F656C62616E65LL;
    if ( *(_QWORD *)v8 == 0x615F656C62616E65LL )
    {
      v9 = *((_QWORD *)v8 + 1) - 0x685F657669686372LL;
      if ( *((_QWORD *)v8 + 1) == 0x685F657669686372LL )
        v9 = *((unsigned int *)v8 + 4) - 1702064751LL;
    }
    if ( v9 == 0 )
      return 4;
  }
  v10 = v2;
  if ( v1 > 0xF )
    v10 = *(const char **)v2;
  if ( v3 == 19 && (unsigned int)sub_140E82B50(a1: v10, a2: "enable_event_outbox") == 0 )
    return 5;
  v11 = v2;
  if ( v1 > 0xF )
    v11 = *(const char **)v2;
  if ( v3 == 22 && (unsigned int)sub_140E82B50(a1: v11, a2: "enable_crafting_system") == 0 )
    return 6;
  v12 = v3;
  v13 = v2;
  v14 = *((_QWORD *)v2 + 3);
  if ( v14 > 0xF )
    v13 = *(const char **)v2;
  if ( v12 == 21 && (unsigned int)sub_140E82B50(a1: v13, a2: "enable_mystable_grids") == 0 )
    return 7;
  v15 = v2;
  if ( v14 > 0xF )
    v15 = *(const char **)v2;
  if ( v12 == 36 && (unsigned int)sub_140E82B50(a1: v15, a2: "enable_refactored_achievement_system") == 0 )
    return 8;
  if ( v14 > 0xF )
    v2 = *(const char **)v2;
  if ( (unsigned __int8)sub_140059D90(a1: off_14101A6A0, a2: "Unknown feature server lock string received %s", v2) != 0 )
    __debugbreak();
  return 9;
}