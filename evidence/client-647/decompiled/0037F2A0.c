__int64 __fastcall sub_14037F2A0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  char v9; // bl
  void *v10; // rcx
  _DWORD *v11; // rax
  int v12; // ebx
  __int64 v13; // rcx
  void *v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rcx
  __int128 *v20; // rcx
  char v21; // bl
  void *v22; // rcx
  __int64 v23; // rcx
  void *v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rax
  void *v27; // rcx
  int v28; // ebx
  int v29; // eax
  __int64 v30; // rcx
  void *v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  float v38; // xmm1_4
  __int64 v39; // rbx
  __int64 v40; // rax
  void *v41; // rcx
  _QWORD v42[2]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v43[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v44; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v45; // [rsp+48h] [rbp-B8h]
  char v46; // [rsp+50h] [rbp-B0h]
  _BYTE v47[64]; // [rsp+60h] [rbp-A0h] BYREF
  char v48; // [rsp+A0h] [rbp-60h]
  _BYTE v49[16]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v50; // [rsp+C0h] [rbp-40h]
  __int64 v51; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v52; // [rsp+D0h] [rbp-30h]
  __int64 v53; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v54; // [rsp+E0h] [rbp-20h]
  _QWORD v55[4]; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v56; // [rsp+110h] [rbp+10h] BYREF
  __int64 v57; // [rsp+120h] [rbp+20h]
  unsigned __int64 v58; // [rsp+128h] [rbp+28h]
  _QWORD v59[3]; // [rsp+130h] [rbp+30h] BYREF
  unsigned __int64 v60; // [rsp+148h] [rbp+48h]
  __int128 *v61; // [rsp+150h] [rbp+50h]
  __int64 v62; // [rsp+158h] [rbp+58h]

  v50 = a3;
  v6 = sub_14037EAC0(a1: v59, a2: a3);
  sub_14037E6B0(a1: v47, a2: v6);
  if ( v48 == 0 )
  {
    v7 = (_QWORD *)sub_140099930(a1: v47, a2: &v56);
    v55[0] = 0;
    if ( v7[3] <= 0xFu )
      v8 = v7;
    else
      v8 = (_QWORD *)*v7;
    v55[1] = v8;
    v55[2] = v7[2];
    v55[0] = 0xC000000000000000uLL;
    v51 = 1;
    v52 = (__int64)v55;
    v42[0] = "HandleGameServerDataResult: '{}'";
    v42[1] = 32;
    v9 = sub_140059F60(a1: off_140F7CBE8, a2: v42, a3: &v51);
    if ( v58 > 0xF )
    {
      v10 = (void *)v56;
      if ( v58 + 1 >= 0x1000 )
      {
        if ( (unsigned __int64)(v56 - *(_QWORD *)(v56 - 8) - 8) > 0x1F )
          goto LABEL_24;
        v10 = *(void **)(v56 - 8);
      }
      sub_1409DB4C0(lpMem: v10);
    }
    *(_QWORD *)&v56 = 19937;
    v57 = 0;
    v58 = 31;
    if ( v9 != 0 )
      __debugbreak();
    if ( (unsigned __int8)sub_1400996F0(a1: v47) != 0 )
    {
      v11 = (_DWORD *)sub_1400995E0(a1: v47, a2: &v51);
    }
    else
    {
      v12 = 1000;
      if ( (unsigned __int8)sub_140099700(a1: v47) == 0 )
      {
LABEL_17:
        LODWORD(v52) = v12;
        v51 = 0x2000000000000000LL;
        v42[0] = "# {}";
        v42[1] = 4;
        v55[0] = 1;
        v55[1] = &v51;
        sub_140058310(a1: &v56, a2: v42, a3: v55);
        sub_140018C70(a1: a1 + 28, a2: &v56);
        if ( v58 <= 0xF )
          goto LABEL_22;
        v14 = (void *)v56;
        if ( v58 + 1 < 0x1000 )
        {
LABEL_21:
          sub_1409DB4C0(lpMem: v14);
LABEL_22:
          v15 = *a1;
          v16 = sub_1400FBAF0(a1: v13);
          (*(void (__fastcall **)(__int64 *, __int64, _QWORD, __int64))(v15 + 776))(a1, a2: 176002, a3: 0, a4: v16);
          if ( v48 != 0 )
            sub_140A278A0(a1: v47);
          else
            sub_140099450(a1: v47);
          if ( *(_BYTE *)(a3 + 64) == 0 )
            return sub_140099450(a1: a3);
          goto LABEL_84;
        }
        if ( (unsigned __int64)(v56 - *(_QWORD *)(v56 - 8) - 8) <= 0x1F )
        {
          v14 = *(void **)(v56 - 8);
          goto LABEL_21;
        }
LABEL_24:
        __fastfail(5u);
      }
      v11 = (_DWORD *)sub_140099650(a1: v47);
    }
    v12 = *v11 + 1000;
    goto LABEL_17;
  }
  sub_140A32850(
    a1: v49,
    a2: "{\n"
    "  \"type\": \"object\",\n"
    "  \"properties\": {\n"
    "    \"exchange_rate\": {\n"
    "      \"type\": \"object\",\n"
    "      \"properties\": {\n"
    "        \"format_string\": { \"type\": \"string\" },\n"
    "        \"price_per_100_sc\": { \"type\": \"string\" }\n"
    "      },\n"
    "      \"required\": [\"format_string\", \"price_per_100_sc\"]\n"
    "    },\n"
    "    \"game_server_address\": { \"type\": \"string\" },\n"
    "    \"region_id\": { \"type\": \"integer\", \"minimum\": 0, \"maximum\": 255 },\n"
    "    \"report_a_player_server\": { \"type\": \"string\" },\n"
    "    \"user_id\": { \"type\": \"integer\", \"minimum\": 0 }\n"
    "  },\n"
    "  \"required\": [\n"
    "    \"exchange_rate\",\n"
    "    \"game_server_address\",\n"
    "    \"region_id\",\n"
    "    \"user_id\"\n"
    "  ]\n"
    "}");
  sub_140A43660(a1: v49, a2: v43, a3: v47);
  if ( (unsigned __int8)sub_140A32FB0(a1: v43) == 0 )
  {
    v56 = 0;
    v57 = 0;
    v58 = 15;
    LOBYTE(v56) = 0;
    sub_140A288B0(a1: v47, a2: &v56);
    v18 = (_QWORD *)sub_140A43880(a1: v43, a2: &v51);
    if ( v18[3] <= 0xFu )
      v19 = v18;
    else
      v19 = (_QWORD *)*v18;
    v59[2] = v19;
    v60 = v18[2];
    v59[0] = 0xC000000000000000uLL;
    v20 = &v56;
    if ( v58 > 0xF )
      v20 = (__int128 *)v56;
    v61 = v20;
    v62 = v57;
    v59[1] = 0xC000000000000010uLL;
    v55[0] = 2;
    v55[1] = v59;
    v42[0] = "HandleGameServerDataResult: Json validation failed: '{}'. '{}'";
    v42[1] = 62;
    v21 = sub_140059F60(a1: off_140F7CC40, a2: v42, a3: v55);
    if ( v54 > 0xF )
    {
      v22 = (void *)v51;
      if ( v54 + 1 >= 0x1000 )
      {
        if ( (unsigned __int64)(v51 - *(_QWORD *)(v51 - 8) - 8) > 0x1F )
          goto LABEL_53;
        v22 = *(void **)(v51 - 8);
      }
      sub_1409DB4C0(lpMem: v22);
    }
    v51 = 19937;
    v53 = 0;
    v54 = 31;
    if ( v21 != 0 )
      __debugbreak();
    LODWORD(v52) = 1000;
    v51 = 0x2000000000000000LL;
    v55[0] = "# {}";
    v55[1] = 4;
    v42[0] = 1;
    v42[1] = &v51;
    sub_140058310(a1: v59, a2: v55, a3: v42);
    sub_140018C70(a1: a1 + 28, a2: v59);
    if ( v60 <= 0xF )
      goto LABEL_46;
    v24 = (void *)v59[0];
    if ( v60 + 1 < 0x1000 )
    {
LABEL_45:
      sub_1409DB4C0(lpMem: v24);
LABEL_46:
      v25 = *a1;
      v26 = sub_1400FBAF0(a1: v23);
      (*(void (__fastcall **)(__int64 *, __int64, _QWORD, __int64))(v25 + 776))(a1, a2: 176002, a3: 0, a4: v26);
      if ( v58 <= 0xF )
      {
LABEL_51:
        *(_QWORD *)&v56 = 19937;
        v57 = 0;
        v58 = 31;
        if ( v46 == 0 )
          goto LABEL_79;
        sub_14001B5A0(a1: v43);
        goto LABEL_78;
      }
      v27 = (void *)v56;
      if ( v58 + 1 < 0x1000 )
      {
LABEL_50:
        sub_1409DB4C0(lpMem: v27);
        goto LABEL_51;
      }
      if ( (unsigned __int64)(v56 - *(_QWORD *)(v56 - 8) - 8) <= 0x1F )
      {
        v27 = *(void **)(v56 - 8);
        goto LABEL_50;
      }
LABEL_67:
      __fastfail(5u);
    }
    if ( (unsigned __int64)(v59[0] - *(_QWORD *)(v59[0] - 8LL) - 8LL) <= 0x1F )
    {
      v24 = *(void **)(v59[0] - 8LL);
      goto LABEL_45;
    }
LABEL_53:
    __fastfail(5u);
  }
  if ( *(_DWORD *)(a2 + 312) == 0
    || (v28 = *(_DWORD *)(a2 + 312)) == (unsigned int)sub_140A28EE0(a1: v47, a2: "user_id") )
  {
    v34 = sub_140A28E70(a1: v47, a2: "game_server_address");
    v35 = sub_140E82CD0(a1: v34);
    sub_14000D680(a1: a2 + 240, a2: v34, a3: v35);
    *(_DWORD *)(a2 + 312) = sub_140A28EE0(a1: v47, a2: "user_id");
    *(_BYTE *)(a2 + 385) = sub_140A28EE0(a1: v47, a2: "region_id");
    sub_140A28B10(a1: v47, a2: &v51, a3: "report_a_player_server");
    if ( (unsigned __int8)sub_140A29430(a1: &v51) == 0 )
    {
      v36 = sub_140A28EC0(a1: &v51);
      sub_140018D50(a1: a2 + 520, a2: v36);
    }
    v37 = sub_140A28E70(a1: v47, a2: "exchange_rate/price_per_100_sc");
    v38 = sub_1400694D0(a1: v37);
    *(float *)(a2 + 584) = v38;
    v39 = sub_140A28E70(a1: v47, a2: "exchange_rate/format_string");
    v40 = sub_140E82CD0(a1: v39);
    sub_14000D680(a1: a2 + 552, a2: v39, a3: v40);
    sub_140380770(a1, a2);
    if ( v46 == 0 )
    {
LABEL_79:
      sub_140A32CF0(a1: v49);
      if ( v48 != 0 )
        sub_140A278A0(a1: v47);
      else
        sub_140099450(a1: v47);
      if ( *(_BYTE *)(a3 + 64) == 0 )
        return sub_140099450(a1: a3);
LABEL_84:
      sub_140099290(a1: a3 + 32);
      return sub_140018220(a1: a3 + 8);
    }
    if ( v45 > 0xF )
    {
      v41 = (void *)v43[0];
      if ( v45 + 1 >= 0x1000 )
      {
        if ( (unsigned __int64)(v43[0] - *(_QWORD *)(v43[0] - 8LL) - 8LL) > 0x1F )
          __fastfail(5u);
        v41 = *(void **)(v43[0] - 8LL);
      }
      sub_1409DB4C0(lpMem: v41);
    }
LABEL_78:
    v43[0] = 19937;
    v44 = 0;
    v45 = 31;
    v46 = 0;
    goto LABEL_79;
  }
  v29 = sub_140A28EE0(a1: v47, a2: "user_id");
  LODWORD(v53) = *(_DWORD *)(a2 + 312);
  v51 = 0x2000000000000000LL;
  HIDWORD(v53) = v29;
  v52 = 0x2000000000000004LL;
  v55[0] = 2;
  v55[1] = &v51;
  v42[0] = "User Id mismatch. Expected {}, got {}";
  v42[1] = 37;
  if ( (unsigned __int8)sub_140059F60(a1: off_140F7CC68, a2: v42, a3: v55) != 0 )
    __debugbreak();
  LODWORD(v52) = 1600;
  v51 = 0x2000000000000000LL;
  v55[0] = "# {}";
  v55[1] = 4;
  v42[0] = 1;
  v42[1] = &v51;
  sub_140058310(a1: v59, a2: v55, a3: v42);
  sub_140018C70(a1: a1 + 28, a2: v59);
  if ( v60 > 0xF )
  {
    v31 = (void *)v59[0];
    if ( v60 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v59[0] - *(_QWORD *)(v59[0] - 8LL) - 8LL) > 0x1F )
        goto LABEL_67;
      v31 = *(void **)(v59[0] - 8LL);
    }
    sub_1409DB4C0(lpMem: v31);
  }
  v32 = *a1;
  v33 = sub_1400FBAF0(a1: v30);
  (*(void (__fastcall **)(__int64 *, __int64, _QWORD, __int64))(v32 + 776))(a1, a2: 176002, a3: 0, a4: v33);
  if ( v46 != 0 )
  {
    sub_14001B5A0(a1: v43);
    v43[0] = 19937;
    v44 = 0;
    v45 = 31;
    v46 = 0;
  }
  sub_140A32CF0(a1: v49);
  if ( v48 != 0 )
    sub_140A278A0(a1: v47);
  else
    sub_140099450(a1: v47);
  return sub_1400994B0(a1: a3);
}