__int64 __fastcall sub_1407FECF0(_QWORD *a1)
{
  unsigned __int64 v1; // rdi
  _QWORD *v2; // rbx
  __int64 v3; // rsi
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rcx
  _QWORD *v12; // rcx
  __int64 v13; // rdi
  _QWORD *v14; // rcx
  unsigned __int64 v15; // rsi
  _QWORD *v16; // rcx
  _QWORD *v17; // rcx
  _QWORD *v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rcx
  _QWORD *v21; // rcx
  _QWORD *v22; // rcx

  v1 = a1[3];
  v2 = a1;
  v3 = a1[2];
  if ( v1 > 0xF )
    a1 = (_QWORD *)*a1;
  if ( v3 == 22 && (unsigned int)sub_140E82B50(a1, a2: "compile_script_on_load") == 0 )
    return 0;
  v5 = v2;
  if ( v1 > 0xF )
    v5 = (_QWORD *)*v2;
  if ( v3 == 19 && (unsigned int)sub_140E82B50(a1: v5, a2: "save_metric_on_disc") == 0 )
    return 1;
  v6 = v2;
  if ( v1 > 0xF )
    v6 = (_QWORD *)*v2;
  if ( v3 == 17 )
  {
    v7 = *v6 - 0x6F7065725F657375LL;
    if ( *v6 == 0x6F7065725F657375LL )
    {
      v7 = v6[1] - 0x6579616C705F7472LL;
      if ( v6[1] == 0x6579616C705F7472LL )
        v7 = *((unsigned __int8 *)v6 + 16) - 114LL;
    }
    if ( v7 == 0 )
      return 2;
  }
  v8 = v2;
  if ( v1 > 0xF )
    v8 = (_QWORD *)*v2;
  if ( v3 == 27 && (unsigned int)sub_140E82B50(a1: v8, a2: "use_actor_refresh_delegates") == 0 )
    return 3;
  v9 = v2;
  if ( v1 > 0xF )
    v9 = (_QWORD *)*v2;
  if ( v3 == 20 )
  {
    v10 = *v9 - 0x715F656C62616E65LL;
    if ( *v9 == 0x715F656C62616E65LL )
    {
      v10 = v9[1] - 0x656C635F74736575LL;
      if ( v9[1] == 0x656C635F74736575LL )
        v10 = *((unsigned int *)v9 + 4) - 1886744161LL;
    }
    if ( v10 == 0 )
      return 4;
  }
  v11 = v2;
  if ( v1 > 0xF )
    v11 = (_QWORD *)*v2;
  if ( v3 == 22 && (unsigned int)sub_140E82B50(a1: v11, a2: "enable_actor_streaming") == 0 )
    return 5;
  v12 = v2;
  if ( v1 > 0xF )
    v12 = (_QWORD *)*v2;
  if ( v3 == 23 && (unsigned int)sub_140E82B50(a1: v12, a2: "enable_actors_on_demand") == 0 )
    return 6;
  v13 = v3;
  v14 = v2;
  v15 = v2[3];
  if ( v15 > 0xF )
    v14 = (_QWORD *)*v2;
  if ( v13 == 26 && (unsigned int)sub_140E82B50(a1: v14, a2: "enable_space_actors_unload") == 0 )
    return 7;
  v16 = v2;
  if ( v15 > 0xF )
    v16 = (_QWORD *)*v2;
  if ( v13 == 27 && (unsigned int)sub_140E82B50(a1: v16, a2: "physics_60_ticks_per_second") == 0 )
    return 8;
  v17 = v2;
  if ( v15 > 0xF )
    v17 = (_QWORD *)*v2;
  if ( v13 == 32 && (unsigned int)sub_140E82B50(a1: v17, a2: "enable_animation_driven_jousting") == 0 )
    return 9;
  v18 = v2;
  if ( v15 > 0xF )
    v18 = (_QWORD *)*v2;
  if ( v13 == 13 )
  {
    v19 = *v18 - 0x6E5F656C62616E65LL;
    if ( *v18 == 0x6E5F656C62616E65LL )
    {
      v19 = *((unsigned int *)v18 + 2) - 1819632229LL;
      if ( *((_DWORD *)v18 + 2) == 1819632229 )
        v19 = *((unsigned __int8 *)v18 + 12) - 97LL;
    }
    if ( v19 == 0 )
      return 10;
  }
  v20 = v2;
  if ( v15 > 0xF )
    v20 = (_QWORD *)*v2;
  if ( v13 == 31 && (unsigned int)sub_140E82B50(a1: v20, a2: "enable_multiple_horse_locations") == 0 )
    return 11;
  v21 = v2;
  if ( v15 > 0xF )
    v21 = (_QWORD *)*v2;
  if ( v13 == 19 && (unsigned int)sub_140E82B50(a1: v21, a2: "enable_fashion_week") == 0 )
    return 12;
  v22 = v2;
  if ( v15 > 0xF )
    v22 = (_QWORD *)*v2;
  if ( v13 == 23 && (unsigned int)sub_140E82B50(a1: v22, a2: "enable_report_a_message") == 0 )
    return 13;
  if ( v15 > 0xF )
    v2 = (_QWORD *)*v2;
  if ( v13 == 33 )
    return 15LL - ((unsigned int)sub_140E82B50(a1: v2, a2: "enable_allow_jump_in_all_triggers") == 0);
  else
    return 15;
}