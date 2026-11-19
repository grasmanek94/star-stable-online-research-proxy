__int64 __fastcall sub_14037FB10(__int64 *a1, __int64 a2, __int64 a3)
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
  char v20; // bl
  void *v21; // rcx
  __int64 v22; // rcx
  void *v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rax
  void *v31; // rcx
  _QWORD v32[2]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v33[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v34; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v35; // [rsp+48h] [rbp-B8h]
  char v36; // [rsp+50h] [rbp-B0h]
  _BYTE v37[24]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v38[64]; // [rsp+70h] [rbp-90h] BYREF
  char v39; // [rsp+B0h] [rbp-50h]
  __int64 v40; // [rsp+C0h] [rbp-40h]
  _BYTE v41[80]; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int64 v42; // [rsp+118h] [rbp+18h] BYREF
  _QWORD *v43; // [rsp+120h] [rbp+20h]
  __int64 v44; // [rsp+128h] [rbp+28h]
  _QWORD v45[4]; // [rsp+130h] [rbp+30h] BYREF
  _QWORD v46[2]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v47; // [rsp+160h] [rbp+60h]
  unsigned __int64 v48; // [rsp+168h] [rbp+68h]

  v40 = a3;
  v6 = sub_14037EAC0(a1: v41, a2: a3);
  sub_14037E6B0(a1: v38, a2: v6);
  if ( v39 != 0 )
  {
    sub_140A32850(
      a1: v37,
      a2: "{\n"
      "  \"type\": \"object\",\n"
      "  \"properties\": {\n"
      "    \"ticket\": { \"type\": \"string\" }\n"
      "  },\n"
      "  \"required\": [\n"
      "    \"ticket\"\n"
      "  ]\n"
      "}");
    sub_140A43660(a1: v37, a2: v33, a3: v38);
    if ( (unsigned __int8)sub_140A32FB0(a1: v33) != 0 )
    {
      v26 = sub_140A28E70(a1: v38, a2: "ticket");
      v27 = sub_140E82CD0(a1: v26);
      sub_14000D680(a1: a2 + 320, a2: v26, a3: v27);
      v28 = *a1;
      v30 = sub_1400FBAF0(a1: v29);
      (*(void (__fastcall **)(__int64 *, __int64, _QWORD, __int64))(v28 + 776))(a1, a2: 176003, a3: 0, a4: v30);
      if ( v36 != 0 )
      {
        if ( v35 > 0xF )
        {
          v31 = (void *)v33[0];
          if ( v35 + 1 >= 0x1000 )
          {
            if ( (unsigned __int64)(v33[0] - *(_QWORD *)(v33[0] - 8LL) - 8LL) > 0x1F )
              __fastfail(5u);
            v31 = *(void **)(v33[0] - 8LL);
          }
          sub_1409DB4C0(lpMem: v31);
        }
        v33[0] = 19937;
        v34 = 0;
        v35 = 31;
        v36 = 0;
      }
      sub_140A32CF0(a1: v37);
      if ( v39 != 0 )
        sub_140A278A0(a1: v38);
      else
        sub_140099450(a1: v38);
      if ( *(_BYTE *)(a3 + 64) == 0 )
        return sub_140099450(a1: a3);
      goto LABEL_61;
    }
    v18 = (_QWORD *)sub_140A43880(a1: v33, a2: v46);
    v42 = 0;
    if ( v18[3] <= 0xFu )
      v19 = v18;
    else
      v19 = (_QWORD *)*v18;
    v43 = v19;
    v44 = v18[2];
    v42 = 0xC000000000000000uLL;
    v45[0] = 1;
    v45[1] = &v42;
    v32[0] = "HandleGameServerTicketResult: Json validation failed: '{}'";
    v32[1] = 58;
    v20 = sub_140059F60(a1: off_140F7CE78, a2: v32, a3: v45);
    if ( v48 > 0xF )
    {
      v21 = (void *)v46[0];
      if ( v48 + 1 >= 0x1000 )
      {
        if ( (unsigned __int64)(v46[0] - *(_QWORD *)(v46[0] - 8LL) - 8LL) > 0x1F )
          goto LABEL_48;
        v21 = *(void **)(v46[0] - 8LL);
      }
      sub_1409DB4C0(lpMem: v21);
    }
    v46[0] = 19937;
    v47 = 0;
    v48 = 31;
    if ( v20 != 0 )
      __debugbreak();
    LODWORD(v43) = 2000;
    v42 = 0x2000000000000000LL;
    v45[0] = "# {}";
    v45[1] = 4;
    v32[0] = 1;
    v32[1] = &v42;
    sub_140058310(a1: v46, a2: v45, a3: v32);
    sub_140018C70(a1: a1 + 28, a2: v46);
    if ( v48 <= 0xF )
    {
LABEL_44:
      v24 = *a1;
      v25 = sub_1400FBAF0(a1: v22);
      (*(void (__fastcall **)(__int64 *, __int64, _QWORD, __int64))(v24 + 776))(a1, a2: 176002, a3: 0, a4: v25);
      if ( v36 != 0 )
      {
        sub_14001B5A0(a1: v33);
        v33[0] = 19937;
        v34 = 0;
        v35 = 31;
        v36 = 0;
      }
      sub_140A32CF0(a1: v37);
      if ( v39 != 0 )
        goto LABEL_23;
      goto LABEL_25;
    }
    v23 = (void *)v46[0];
    if ( v48 + 1 < 0x1000 )
    {
LABEL_43:
      sub_1409DB4C0(lpMem: v23);
      goto LABEL_44;
    }
    if ( (unsigned __int64)(v46[0] - *(_QWORD *)(v46[0] - 8LL) - 8LL) <= 0x1F )
    {
      v23 = *(void **)(v46[0] - 8LL);
      goto LABEL_43;
    }
LABEL_48:
    __fastfail(5u);
  }
  v7 = (_QWORD *)sub_140099930(a1: v38, a2: v46);
  v45[0] = 0;
  if ( v7[3] <= 0xFu )
    v8 = v7;
  else
    v8 = (_QWORD *)*v7;
  v45[1] = v8;
  v45[2] = v7[2];
  v45[0] = 0xC000000000000000uLL;
  v42 = 1;
  v43 = v45;
  v32[0] = "HandleGameServerTicketResult: '{}'";
  v32[1] = 34;
  v9 = sub_140059F60(a1: off_140F7CE20, a2: v32, a3: &v42);
  if ( v48 > 0xF )
  {
    v10 = (void *)v46[0];
    if ( v48 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v46[0] - *(_QWORD *)(v46[0] - 8LL) - 8LL) > 0x1F )
        goto LABEL_24;
      v10 = *(void **)(v46[0] - 8LL);
    }
    sub_1409DB4C0(lpMem: v10);
  }
  v46[0] = 19937;
  v47 = 0;
  v48 = 31;
  if ( v9 != 0 )
    __debugbreak();
  if ( (unsigned __int8)sub_1400996F0(a1: v38) != 0 )
  {
    v11 = (_DWORD *)sub_1400995E0(a1: v38, a2: &v42);
  }
  else
  {
    v12 = 2000;
    if ( (unsigned __int8)sub_140099700(a1: v38) == 0 )
      goto LABEL_17;
    v11 = (_DWORD *)sub_140099650(a1: v38);
  }
  v12 = *v11 + 2000;
LABEL_17:
  LODWORD(v43) = v12;
  v42 = 0x2000000000000000LL;
  v32[0] = "# {}";
  v32[1] = 4;
  v45[0] = 1;
  v45[1] = &v42;
  sub_140058310(a1: v46, a2: v32, a3: v45);
  sub_140018C70(a1: a1 + 28, a2: v46);
  if ( v48 > 0xF )
  {
    v14 = (void *)v46[0];
    if ( v48 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v46[0] - *(_QWORD *)(v46[0] - 8LL) - 8LL) <= 0x1F )
      {
        v14 = *(void **)(v46[0] - 8LL);
        goto LABEL_21;
      }
LABEL_24:
      __fastfail(5u);
    }
LABEL_21:
    sub_1409DB4C0(lpMem: v14);
  }
  v15 = *a1;
  v16 = sub_1400FBAF0(a1: v13);
  (*(void (__fastcall **)(__int64 *, __int64, _QWORD, __int64))(v15 + 776))(a1, a2: 176002, a3: 0, a4: v16);
  if ( v39 != 0 )
  {
LABEL_23:
    sub_140A278A0(a1: v38);
    goto LABEL_26;
  }
LABEL_25:
  sub_140099450(a1: v38);
LABEL_26:
  if ( *(_BYTE *)(a3 + 64) == 0 )
    return sub_140099450(a1: a3);
LABEL_61:
  sub_140099290(a1: a3 + 32);
  return sub_140018220(a1: a3 + 8);
}