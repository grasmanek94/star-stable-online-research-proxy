__int64 __fastcall sub_1407BAE00(__int64 a1, char a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rax
  _QWORD *v13; // rdi
  __int64 v14; // rdx
  unsigned int v15; // ebx
  __int64 v16; // r8
  unsigned int v17; // ecx
  __int64 *v18; // r8
  __int64 *v19; // rax
  __int64 *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 result; // rax
  __int64 v27; // rdx
  void **v28; // [rsp+50h] [rbp-B0h] BYREF
  int v29; // [rsp+58h] [rbp-A8h]
  int v30; // [rsp+5Ch] [rbp-A4h]
  void **v31; // [rsp+60h] [rbp-A0h] BYREF
  int v32; // [rsp+68h] [rbp-98h]
  int v33; // [rsp+6Ch] [rbp-94h]
  _QWORD v34[3]; // [rsp+70h] [rbp-90h] BYREF
  int v35; // [rsp+88h] [rbp-78h]
  void **v36; // [rsp+90h] [rbp-70h] BYREF
  int v37; // [rsp+98h] [rbp-68h]
  int v38; // [rsp+9Ch] [rbp-64h]
  _BYTE v39[16]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int16 v40; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v41[32]; // [rsp+B8h] [rbp-48h] BYREF
  char v42; // [rsp+D8h] [rbp-28h]
  __int16 v43; // [rsp+E0h] [rbp-20h]
  _BYTE v44[88]; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int16 *v45; // [rsp+150h] [rbp+50h] BYREF

  v4 = sub_1405F1EE0(a1: a1 + 1552);
  v5 = v4;
  if ( v4 != 0 && sub_1400C8AD0(a1: v4) )
    sub_1400C2A20(a1: v5);
  v34[1] = 0;
  v34[2] = 0;
  v35 = 0;
  v34[0] = &PXEngine::ByteStreamWriter::`vftable';
  LOBYTE(v45) = a2;
  sub_140A25890(a1: v34, a2: &v45, a3: 1);
  v43 = word_141313C44;
  sub_140A255B0(a1: v44, a2: v34);
  v40 = v43;
  sub_140A255B0(a1: v41, a2: v44);
  v42 = 1;
  sub_140A25690(a1: v44);
  sub_140A25690(a1: v34);
  v45 = &v40;
  if ( v42 != 0 )
  {
    sub_1407D5600(a1, a2: v40, a3: v41);
    if ( v42 != 0 )
    {
      sub_140A25690(a1: v41);
      v42 = 0;
    }
  }
  v6 = qword_14138A6F0;
  if ( qword_14138A6F0 == 0 )
  {
    if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  v7 = sub_1405FD2E0(a1: qword_14138A6F0, a2: v39, a3: "CompetitionManager");
  if ( (unsigned __int8)sub_1406006A0(a1: v6, a2: v7, a3: 155) != 0 )
  {
    sub_1405F1D60(a1: &v28, a2: *(unsigned int *)(v7 + 12), a3: *(unsigned int *)(v7 + 8));
  }
  else
  {
    v29 = 0;
    v30 = 195948557;
  }
  v28 = &PXEngine::SafeActorPtrAs<PXEngine::CompetitionManager>::`vftable';
  v8 = sub_1405F1EE0(a1: (__int64)&v28);
  v9 = v8;
  if ( v8 != 0 )
  {
    sub_1405F1D40(a1: &v31, a2: v8 + 368);
    v31 = &PXEngine::SafeActorPtrAs<PXEngine::Competition>::`vftable';
    if ( (unsigned __int8)sub_1405F1E20(a1: &v31) != 0 )
      sub_1402C9E50(a1: v9);
  }
  sub_1405F1D40(a1: v39, a2: a1 + 120);
  v10 = qword_14138A6F0;
  if ( qword_14138A6F0 == 0 )
  {
    if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  v36 = &PXEngine::SafeActorPtr::`vftable';
  v37 = 0;
  v38 = 195948557;
  v31 = &PXEngine::SafeActorPtr::`vftable';
  v32 = 0;
  v33 = 195948557;
  v11 = sub_1405FD6C0(
          a1: qword_14138A6F0,
          a2: (unsigned int)v34,
          a3: (unsigned int)v39,
          a4: (unsigned int)"global/GroupView",
          a5: (__int64)&v31,
          a6: (__int64)&v36,
          a7: 0,
          a8: 0,
          a9: 0);
  if ( (unsigned __int8)sub_1406006A0(a1: v10, a2: v11, a3: 40) != 0 )
  {
    sub_1405F1D60(a1: &v28, a2: *(unsigned int *)(v11 + 12), a3: *(unsigned int *)(v11 + 8));
  }
  else
  {
    v29 = 0;
    v30 = 195948557;
  }
  v28 = &PXEngine::SafeActorPtrAs<CPXView>::`vftable';
  v12 = sub_1405F1EE0(a1: (__int64)&v28);
  if ( v12 != 0 )
    sub_1400C2A20(a1: v12);
  v13 = (_QWORD *)(a1 + 1504);
  v14 = *(_QWORD *)(a1 + 1504);
  if ( v14 != 0 )
  {
    v15 = 0;
    if ( (__int64)(*(_QWORD *)(v14 + 72) - *(_QWORD *)(v14 + 64)) >> 3 != 0 )
    {
      do
      {
        v16 = *(_QWORD *)(v14 + 64);
        if ( v15 >= (unsigned __int64)((*(_QWORD *)(v14 + 72) - v16) >> 3) )
          __fastfail(5u);
        v17 = *(_DWORD *)(*(_QWORD *)(v16 + 8LL * v15) + 4LL);
        v18 = *(__int64 **)(a1 + 1912);
        v19 = (__int64 *)v18[1];
        v20 = v18;
        while ( *((_BYTE *)v19 + 25) == 0 )
        {
          if ( *((_DWORD *)v19 + 8) >= v17 )
          {
            v20 = v19;
            v19 = (__int64 *)*v19;
          }
          else
          {
            v19 = (__int64 *)v19[2];
          }
        }
        if ( *((_BYTE *)v20 + 25) != 0 || v17 < *((_DWORD *)v20 + 8) || v20 == v18 )
        {
          v29 = 0;
          v30 = 195948557;
        }
        else
        {
          sub_1405F1D40(a1: &v28, a2: v20 + 5);
        }
        v28 = &PXEngine::SafeActorPtrAs<CPXPlayerTPNet>::`vftable';
        v21 = sub_1405F1EE0(a1: (__int64)&v28);
        if ( v21 != 0 )
          *(_BYTE *)(v21 + 2382) &= ~0x10u;
        ++v15;
        v14 = *v13;
      }
      while ( v15 < (unsigned __int64)((__int64)(*(_QWORD *)(*v13 + 72LL) - *(_QWORD *)(*v13 + 64LL)) >> 3) );
    }
  }
  v23 = sub_1405F1EE0(a1: a1 + 896);
  if ( v23 != 0 )
  {
    v24 = sub_1400FBAF0(a1: v22);
    LOBYTE(v25) = 1;
    sub_140147330(a1: v23, a2: v25, a3: v24);
  }
  *(_DWORD *)(a1 + 1512) = 0;
  result = sub_140684540(a1: *(_QWORD *)(*(_QWORD *)&nExitCode + 1000LL), a2: 13, a3: *v13, a4: a1);
  v27 = *v13;
  *v13 = 0;
  if ( v27 != 0 )
    return sub_1407B4630(a1: a1 + 1504);
  return result;
}