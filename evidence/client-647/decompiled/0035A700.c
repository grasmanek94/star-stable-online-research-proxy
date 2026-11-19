void __fastcall sub_14035A700(__int64 *a1, int a2, char a3)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // r8
  void **v15; // rdi
  void **v16; // r15
  __int64 v17; // r12
  unsigned __int8 v18; // bl
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // rdx
  char (__fastcall *v23)(__int64, __int64, __int64); // r9
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rax
  void **v27; // [rsp+20h] [rbp-79h] BYREF
  void **v28; // [rsp+28h] [rbp-71h]
  __int64 v29; // [rsp+30h] [rbp-69h]
  int v30; // [rsp+38h] [rbp-61h]
  _BYTE v31[16]; // [rsp+40h] [rbp-59h] BYREF
  __int16 v32; // [rsp+50h] [rbp-49h]
  _BYTE v33[32]; // [rsp+58h] [rbp-41h] BYREF
  __int16 v34; // [rsp+78h] [rbp-21h] BYREF
  char v35[32]; // [rsp+80h] [rbp-19h] BYREF
  char v36; // [rsp+A0h] [rbp+7h]
  char v37[72]; // [rsp+A8h] [rbp+Fh] BYREF
  char v38; // [rsp+110h] [rbp+77h] BYREF
  int v39; // [rsp+118h] [rbp+7Fh] BYREF

  v38 = a3;
  if ( *(_QWORD *)&nExitCode == 0 )
    return;
  if ( a3 == 0 )
  {
LABEL_28:
    v28 = nullptr;
    v29 = 0;
    v30 = 0;
    v27 = &PXEngine::ByteStreamWriter::`vftable';
    v39 = a2;
    if ( sub_1401D0820(a1: &v27, a2: &v39) != 0 )
    {
      v23 = (char (__fastcall *)(__int64, __int64, __int64))v27[2];
      if ( v23 == sub_1401F6C10 )
      {
        sub_140A25890(a1: &v27, a2: &v38, a3: 1);
LABEL_35:
        v32 = word_141313CF8;
        sub_140A255B0(a1: v33, a2: &v27);
        v34 = v32;
        sub_140A255B0(a1: v35, a2: v33);
        v36 = 1;
        sub_140A25690(a1: v33);
LABEL_37:
        sub_140A25690(a1: &v27);
        sub_1407EE6B0(a1: &v34);
        return;
      }
      if ( v23(a1: (__int64)&v27, a2: (__int64)&v38, a3: 1) != 0 )
        goto LABEL_35;
    }
    v36 = 0;
    goto LABEL_37;
  }
  v5 = sub_14034FB90();
  v6 = v5;
  if ( v5 == 0 )
  {
    if ( (unsigned __int8)sub_140059D90(
                            a1: off_140F78270,
                            a2: "CPXMyStable::RequestSetArchiveHorse: Could not get horse with id %u",
                            a2) != 0 )
      __debugbreak();
LABEL_20:
    v9 = *a1;
    v10 = sub_1400FBAF0(a1: v7);
    (*(void (__fastcall **)(__int64 *, __int64, _QWORD, __int64))(v9 + 776))(a1, a2: 168026, a3: 0, a4: v10);
    return;
  }
  if ( (unsigned __int8)sub_1401E8870(a1: v5) == 0 )
  {
    if ( (unsigned __int8)sub_140059D90(
                            a1: off_140F782C0,
                            a2: "CPXMyStable::RequestSetArchiveHorse: Cannot archived horse that isn't owned, horse id %u",
                            a2) != 0 )
      __debugbreak();
    goto LABEL_20;
  }
  if ( *(_BYTE *)(v6 + 312) != 0 )
  {
    if ( (unsigned __int8)sub_140059D90(
                            a1: off_140F782E8,
                            a2: "CPXMyStable::RequestSetArchiveHorse: Cannot archived original starting horse, horse id %u",
                            a2) != 0 )
      __debugbreak();
    goto LABEL_20;
  }
  v8 = sub_1405F1EE0(a1: (__int64)&off_141313B68);
  if ( v6 == sub_14018FA40() && v8 != 0 && (unsigned __int8)sub_140787480(a1: v8) != 0 )
  {
    if ( (unsigned __int8)sub_140059D90(
                            a1: off_140F78310,
                            a2: "CPXMyStable::RequestSetArchiveHorse: Cannot archive horse when player is mounted.") != 0 )
      __debugbreak();
    goto LABEL_20;
  }
  v11 = sub_1400AF100();
  v12 = sub_14014F9D0(a1: v11, a2: v37);
  v13 = sub_140152830(a1: v12);
  LOBYTE(v14) = 2;
  sub_140488180(a1: v13, a2: &v27, a3: v14);
  v15 = v27;
  v16 = v28;
  if ( v27 == v28 )
  {
LABEL_27:
    sub_1401D4910(a1: &v27);
    goto LABEL_28;
  }
  v17 = v6 + 120;
  while ( 1 )
  {
    v18 = *((_BYTE *)v15 + 8);
    sub_1405F1D40(a1: v31, a2: v17);
    v19 = sub_1404882D0(a1: v13, a2: v31, a3: v18);
    v21 = v19;
    if ( v19 != 0 )
    {
      LOBYTE(v20) = 28;
      if ( (unsigned __int8)sub_14025F400(a1: v19, a2: v20) == 0 )
      {
        LOBYTE(v22) = 27;
        if ( (unsigned __int8)sub_14025F400(a1: v21, a2: v22) == 0 )
          break;
      }
    }
    v15 += 9;
    if ( v15 == v16 )
      goto LABEL_27;
  }
  if ( (unsigned __int8)sub_140059D90(
                          a1: off_140F78338,
                          a2: "CPXMyStable::RequestSetArchiveHorse: Cannot archive horse when it has items equipped.") != 0 )
    __debugbreak();
  v25 = *a1;
  v26 = sub_1400FBAF0(a1: v24);
  (*(void (__fastcall **)(__int64 *, __int64, _QWORD, __int64))(v25 + 776))(a1, a2: 168026, a3: 0, a4: v26);
  sub_1401D4910(a1: &v27);
}