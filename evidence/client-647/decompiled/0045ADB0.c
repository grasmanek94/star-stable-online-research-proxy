char __fastcall sub_14045ADB0(__int64 a1, __int64 *a2)
{
  __int64 *v4; // rbx
  __int64 v5; // rax
  unsigned int v6; // edx
  __int64 *v7; // rcx
  __int64 *v8; // rax
  __int64 *v9; // rax
  __int64 v10; // rax
  int v11; // r14d
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // r15
  unsigned int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rax
  _QWORD *v19; // r8
  void *v20; // rcx
  char **v22; // rcx
  void **v23; // [rsp+40h] [rbp-C0h] BYREF
  int v24; // [rsp+48h] [rbp-B8h]
  int v25; // [rsp+4Ch] [rbp-B4h]
  _QWORD v26[3]; // [rsp+50h] [rbp-B0h] BYREF
  int v27; // [rsp+68h] [rbp-98h]
  __int16 v28; // [rsp+70h] [rbp-90h]
  _BYTE v29[32]; // [rsp+78h] [rbp-88h] BYREF
  __int16 v30; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v31[40]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v32[3]; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int64 v33; // [rsp+E0h] [rbp-20h]
  _QWORD v34[4]; // [rsp+E8h] [rbp-18h] BYREF
  int v35; // [rsp+108h] [rbp+8h]
  _BYTE v36[16]; // [rsp+110h] [rbp+10h] BYREF

  if ( (sub_140453060() & 2) == 0 )
    return 0;
  if ( *a2 == a2[1] )
    return 0;
  v4 = *(__int64 **)(a1 + 1176);
  if ( v4 == nullptr )
    return 0;
  v5 = sub_1405F1EE0(a1: (__int64)&off_141313B68);
  if ( v5 == 0 )
    goto LABEL_37;
  v6 = *(_DWORD *)(v5 + 1720);
  v7 = (__int64 *)*v4;
  v8 = *(__int64 **)(*v4 + 8);
  if ( *((_BYTE *)v8 + 25) != 0 )
  {
    v9 = (__int64 *)*v4;
  }
  else
  {
    do
    {
      if ( *((_DWORD *)v8 + 8) >= v6 )
      {
        v7 = v8;
        v8 = (__int64 *)*v8;
      }
      else
      {
        v8 = (__int64 *)v8[2];
      }
    }
    while ( *((_BYTE *)v8 + 25) == 0 );
    v9 = (__int64 *)*v4;
  }
  if ( *((_BYTE *)v7 + 25) != 0 || v6 < *((_DWORD *)v7 + 8) || v7 == v9 || (v10 = v7[5]) == 0 )
    v11 = 0;
  else
    v11 = *(_DWORD *)(v10 + 24);
  v12 = sub_140087C10(a1: v36, a2: 0);
  sub_140087CE0(a1: v12, a2: v32);
  memset(v34, 0, sizeof(v34));
  v35 = 0;
  v13 = *a2;
  v14 = a2[1];
  if ( *a2 != v14 )
  {
    do
    {
      v15 = *(_DWORD *)(v13 + 32);
      if ( v15 >= 9 )
      {
        v22 = off_140F98DA0;
        goto LABEL_45;
      }
      *((_DWORD *)v34 + v15) = *(_DWORD *)(v13 + 36);
      v16 = qword_14138A6F0;
      if ( qword_14138A6F0 == 0 )
      {
        if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
          __debugbreak();
        sub_1409E29B8(a1: 999);
        __debugbreak();
      }
      v17 = sub_1405FD2E0(a1: qword_14138A6F0, a2: v26, a3: "MetricsManager");
      if ( (unsigned __int8)sub_1406006A0(a1: v16, a2: v17, a3: 238) != 0 )
      {
        sub_1405F1D60(a1: &v23, a2: *(unsigned int *)(v17 + 12), a3: *(unsigned int *)(v17 + 8));
      }
      else
      {
        v24 = 0;
        v25 = 195948557;
      }
      v23 = &PXEngine::SafeActorPtrAs<CPXMetricsManager>::`vftable';
      v18 = sub_1405F1EE0(a1: (__int64)&v23);
      if ( v18 == 0 )
      {
        while ( 1 )
        {
          v22 = off_140F98EB0;
LABEL_45:
          if ( (unsigned __int8)sub_140059CA0(a1: v22) != 0 )
            __debugbreak();
          sub_1409E29B8(a1: 999);
LABEL_37:
          if ( (unsigned __int8)sub_140059CA0(a1: off_140F4EF78) != 0 )
            __debugbreak();
          sub_1409E29B8(a1: 999);
        }
      }
      v19 = v32;
      if ( v33 > 0xF )
        v19 = (_QWORD *)v32[0];
      sub_14060F030(
        a1: v18,
        a2: "ClubRolePermissionsChanged",
        a3: v19,
        a4: *(unsigned int *)(*(_QWORD *)(a1 + 1176) + 264LL),
        a5: v11,
        a6: *(_DWORD *)(v13 + 32),
        a7: *(_DWORD *)(v13 + 36));
      v13 += 40;
    }
    while ( v13 != v14 );
  }
  v26[1] = 0;
  v26[2] = 0;
  v27 = 0;
  v26[0] = &PXEngine::ByteStreamWriter::`vftable';
  sub_140A25890(a1: v26, a2: v34, a3: 36);
  v28 = word_141313CCC;
  sub_140A255B0(a1: v29, a2: v26);
  v30 = v28;
  sub_140A255B0(a1: v31, a2: v29);
  v31[32] = 1;
  sub_140A25690(a1: v29);
  sub_140A25690(a1: v26);
  sub_1407EE6B0(a1: &v30);
  if ( v33 > 0xF )
  {
    v20 = (void *)v32[0];
    if ( v33 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v32[0] - *(_QWORD *)(v32[0] - 8LL) - 8LL) > 0x1F )
        __fastfail(5u);
      v20 = *(void **)(v32[0] - 8LL);
    }
    sub_1409DB4C0(lpMem: v20);
  }
  return 1;
}