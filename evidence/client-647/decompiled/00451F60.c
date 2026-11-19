__int64 __fastcall sub_140451F60(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  unsigned int v14; // eax
  unsigned int v15; // esi
  unsigned __int64 v16; // rdx
  __int128 *v17; // rax
  unsigned __int64 v18; // rdi
  __int128 *v19; // rbx
  char *v20; // rbx
  __int128 *v21; // rdx
  char (__fastcall *v22)(__int64, __int64, __int64); // r9
  unsigned int v23; // eax
  unsigned int v24; // esi
  unsigned __int64 v25; // rdx
  __int128 *v26; // rax
  unsigned __int64 v27; // rdi
  __int128 *v28; // rbx
  char *v29; // rbx
  __int128 *v30; // rdx
  char (__fastcall *v31)(__int64, __int64, __int64); // r9
  unsigned int v32; // eax
  unsigned int v33; // esi
  unsigned __int64 v34; // rdx
  __int128 *v35; // rax
  unsigned __int64 v36; // rdi
  __int128 *v37; // rbx
  char *v38; // rbx
  __int128 *v39; // rdx
  char (__fastcall *v40)(__int64, __int64, __int64); // r9
  void *v41; // rcx
  void *v42; // rcx
  void *v43; // rcx
  unsigned __int8 v44; // [rsp+30h] [rbp-D0h]
  unsigned int v45; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v46[3]; // [rsp+40h] [rbp-C0h] BYREF
  int v47; // [rsp+58h] [rbp-A8h]
  __int16 v48; // [rsp+60h] [rbp-A0h]
  _BYTE v49[32]; // [rsp+68h] [rbp-98h] BYREF
  __int16 v50; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v51[32]; // [rsp+90h] [rbp-70h] BYREF
  char v52; // [rsp+B0h] [rbp-50h]
  __int128 v53; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v54; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v55; // [rsp+D0h] [rbp-30h]
  __int128 v56; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int64 v57; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v58; // [rsp+F0h] [rbp-10h]
  __int128 v59; // [rsp+F8h] [rbp-8h] BYREF
  unsigned __int64 v60; // [rsp+108h] [rbp+8h]
  unsigned __int64 v61; // [rsp+110h] [rbp+10h]

  v2 = sub_1405F1EE0(a1: a1 + 936);
  v3 = sub_1405F1EE0(a1: a1 + 952);
  result = sub_1405F1EE0(a1: a1 + 968);
  v5 = result;
  if ( v2 == 0 )
    return result;
  if ( v3 == 0 )
    return result;
  if ( result == 0 )
    return result;
  result = sub_1405F1E20(a1: a1 + 984);
  if ( (_BYTE)result == 0 )
    return result;
  v6 = sub_1405F1EE0(a1: a1 + 1016);
  if ( v6 != 0 )
    sub_140148000(a1: v6, a2: 0);
  v7 = sub_1405F1EE0(a1: a1 + 1000);
  if ( v7 != 0 )
    sub_1400C2A20(a1: v7);
  v8 = sub_140139D60(a1: v2, a2: 65001);
  v59 = 0;
  v60 = 0;
  v61 = 0;
  v9 = sub_140E82CD0(a1: v8);
  sub_14000D7F0(a1: &v59, a2: v8, a3: v9);
  v10 = sub_140139D60(a1: v3, a2: 65001);
  v56 = 0;
  v57 = 0;
  v58 = 0;
  v11 = sub_140E82CD0(a1: v10);
  sub_14000D7F0(a1: &v56, a2: v10, a3: v11);
  v12 = sub_140139D60(a1: v5, a2: 65001);
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v13 = sub_140E82CD0(a1: v12);
  sub_14000D7F0(a1: &v53, a2: v12, a3: v13);
  v46[1] = 0;
  v46[2] = 0;
  v47 = 0;
  v46[0] = &PXEngine::ByteStreamWriter::`vftable';
  v14 = v60;
  if ( v60 >= 0xFFFFFFFF )
  {
    if ( (unsigned __int8)sub_140059CA0(a1: off_140F64800) != 0 )
      __debugbreak();
    v14 = v60;
  }
  v45 = v14;
  if ( sub_1401D0820(a1: v46, a2: &v45) == 0 )
    goto LABEL_70;
  v15 = v45;
  if ( v45 > 0x1FA0 )
    goto LABEL_70;
  v16 = v60;
  if ( v45 > v60 )
  {
    v18 = v45 - v60;
    if ( v18 > v61 - v60 )
    {
      sub_140057960(a1: (unsigned int)&v59, a2: v45 - v60, a3: v44, a4: v45 - v60, a5: 0);
    }
    else
    {
      v60 = v45;
      v19 = &v59;
      if ( v61 > 0xF )
        v19 = (__int128 *)v59;
      v20 = (char *)v19 + v16;
      sub_140E827B0(a1: v20, a2: 0, a3: v45 - v16);
      v20[v18] = 0;
    }
  }
  else
  {
    v60 = v45;
    v17 = &v59;
    if ( v61 > 0xF )
      v17 = (__int128 *)v59;
    *((_BYTE *)v17 + v45) = 0;
  }
  v21 = &v59;
  if ( v61 > 0xF )
    v21 = (__int128 *)v59;
  v22 = *(char (__fastcall **)(__int64, __int64, __int64))(v46[0] + 16LL);
  if ( v22 == sub_1401F6C10 )
  {
    sub_140A25890(a1: v46, a2: v21, a3: v15);
  }
  else if ( v22(a1: (__int64)v46, a2: (__int64)v21, a3: v15) == 0 )
  {
    goto LABEL_70;
  }
  v23 = v57;
  if ( v57 >= 0xFFFFFFFF )
  {
    if ( (unsigned __int8)sub_140059CA0(a1: off_140F64800) != 0 )
      __debugbreak();
    v23 = v57;
  }
  v45 = v23;
  if ( sub_1401D0820(a1: v46, a2: &v45) == 0 )
    goto LABEL_70;
  v24 = v45;
  if ( v45 > 0x1FA0 )
    goto LABEL_70;
  v25 = v57;
  if ( v45 > v57 )
  {
    v27 = v45 - v57;
    if ( v27 > v58 - v57 )
    {
      sub_140057960(a1: (unsigned int)&v56, a2: v45 - v57, a3: v44, a4: v45 - v57, a5: 0);
    }
    else
    {
      v57 = v45;
      v28 = &v56;
      if ( v58 > 0xF )
        v28 = (__int128 *)v56;
      v29 = (char *)v28 + v25;
      sub_140E827B0(a1: v29, a2: 0, a3: v45 - v25);
      v29[v27] = 0;
    }
  }
  else
  {
    v57 = v45;
    v26 = &v56;
    if ( v58 > 0xF )
      v26 = (__int128 *)v56;
    *((_BYTE *)v26 + v45) = 0;
  }
  v30 = &v56;
  if ( v58 > 0xF )
    v30 = (__int128 *)v56;
  v31 = *(char (__fastcall **)(__int64, __int64, __int64))(v46[0] + 16LL);
  if ( v31 == sub_1401F6C10 )
  {
    sub_140A25890(a1: v46, a2: v30, a3: v24);
  }
  else if ( v31(a1: (__int64)v46, a2: (__int64)v30, a3: v24) == 0 )
  {
    goto LABEL_70;
  }
  v32 = v54;
  if ( v54 >= 0xFFFFFFFF )
  {
    if ( (unsigned __int8)sub_140059CA0(a1: off_140F64800) != 0 )
      __debugbreak();
    v32 = v54;
  }
  v45 = v32;
  if ( sub_1401D0820(a1: v46, a2: &v45) == 0 )
    goto LABEL_70;
  v33 = v45;
  if ( v45 > 0x1FA0 )
    goto LABEL_70;
  v34 = v54;
  if ( v45 > v54 )
  {
    v36 = v45 - v54;
    if ( v36 > v55 - v54 )
    {
      sub_140057960(a1: (unsigned int)&v53, a2: v45 - v54, a3: v44, a4: v45 - v54, a5: 0);
    }
    else
    {
      v54 = v45;
      v37 = &v53;
      if ( v55 > 0xF )
        v37 = (__int128 *)v53;
      v38 = (char *)v37 + v34;
      sub_140E827B0(a1: v38, a2: 0, a3: v45 - v34);
      v38[v36] = 0;
    }
  }
  else
  {
    v54 = v45;
    v35 = &v53;
    if ( v55 > 0xF )
      v35 = (__int128 *)v53;
    *((_BYTE *)v35 + v45) = 0;
  }
  v39 = &v53;
  if ( v55 > 0xF )
    v39 = (__int128 *)v53;
  v40 = *(char (__fastcall **)(__int64, __int64, __int64))(v46[0] + 16LL);
  if ( v40 != sub_1401F6C10 )
  {
    if ( v40(a1: (__int64)v46, a2: (__int64)v39, a3: v33) != 0 )
      goto LABEL_69;
LABEL_70:
    v52 = 0;
    goto LABEL_71;
  }
  sub_140A25890(a1: v46, a2: v39, a3: v33);
LABEL_69:
  v48 = word_141313CB4;
  sub_140A255B0(a1: v49, a2: v46);
  v50 = v48;
  sub_140A255B0(a1: v51, a2: v49);
  v52 = 1;
  sub_140A25690(a1: v49);
LABEL_71:
  sub_140A25690(a1: v46);
  result = sub_1407EE6B0(a1: &v50);
  if ( v55 > 0xF )
  {
    v41 = (void *)v53;
    if ( v55 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v53 - *(_QWORD *)(v53 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v41 = *(void **)(v53 - 8);
    }
    result = sub_1409DB4C0(lpMem: v41);
  }
  *(_QWORD *)&v53 = 19937;
  v54 = 0;
  v55 = 31;
  if ( v58 > 0xF )
  {
    v42 = (void *)v56;
    if ( v58 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v56 - *(_QWORD *)(v56 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v42 = *(void **)(v56 - 8);
    }
    result = sub_1409DB4C0(lpMem: v42);
  }
  *(_QWORD *)&v56 = 19937;
  v57 = 0;
  v58 = 31;
  if ( v61 > 0xF )
  {
    v43 = (void *)v59;
    if ( v61 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v59 - *(_QWORD *)(v59 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v43 = *(void **)(v59 - 8);
    }
    return sub_1409DB4C0(lpMem: v43);
  }
  return result;
}