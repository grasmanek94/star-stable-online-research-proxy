_UNKNOWN **__fastcall sub_1403D1520(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _UNKNOWN **result; // rax
  bool v6; // r13
  __int64 *v7; // rbx
  _QWORD *v8; // r14
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdi
  __int128 v11; // xmm6
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // r14d
  __int64 v18; // rax
  __int128 v19; // xmm7
  __int64 v20; // r8
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rdx
  void *v24; // rcx
  _BYTE *v25; // rax
  __int64 *i; // rax
  int v27; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v28; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v29; // [rsp+40h] [rbp-C8h]
  __int64 v30; // [rsp+48h] [rbp-C0h]
  __int64 v31; // [rsp+50h] [rbp-B8h]
  _QWORD v32[6]; // [rsp+58h] [rbp-B0h] BYREF
  __int16 v33; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v34[32]; // [rsp+90h] [rbp-78h] BYREF
  char v35; // [rsp+B0h] [rbp-58h]
  __int128 v36; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v37; // [rsp+C8h] [rbp-40h]
  _UNKNOWN *retaddr; // [rsp+150h] [rbp+48h] BYREF

  result = &retaddr;
  if ( *(_QWORD *)(a1 + 192) == 0 )
    result = (_UNKNOWN **)sub_1403D0F80(a1);
  if ( *(_QWORD *)(a1 + 208) != 0 )
    return result;
  v6 = *(_QWORD *)&nExitCode != 0;
  v28 = 0;
  v29 = 0;
  v7 = **(__int64 ***)(a1 + 184);
  if ( *((_BYTE *)v7 + 25) != 0 )
    return (_UNKNOWN **)sub_140018080(a1: &v28);
  do
  {
    v8 = v7 + 4;
    v36 = 0;
    v37 = 0u;
    v9 = v7[6];
    if ( (unsigned __int64)v7[7] > 0xF )
      v8 = (_QWORD *)*v8;
    if ( v9 > 0x7FFFFFFFFFFFFFFFLL )
      sub_14001B680(a1: 0, a2: 22);
    if ( v9 > 0xF )
    {
      v10 = v9 | 0xF;
      if ( (v9 | 0xF) > 0x7FFFFFFFFFFFFFFFLL )
      {
        v10 = 0x7FFFFFFFFFFFFFFFLL;
        v12 = 0x8000000000000027uLL;
LABEL_18:
        v15 = sub_1409DB470(a1: v12);
        v16 = v15;
        if ( v15 == 0 )
          __fastfail(5u);
        v14 = (v15 + 39) & 0xFFFFFFFFFFFFFFE0uLL;
        *(_QWORD *)(v14 - 8) = v16;
        goto LABEL_21;
      }
      if ( v10 < 0x16 )
        v10 = 22;
      v13 = v10 + 1;
      if ( v10 == -1 )
      {
        v14 = 0;
      }
      else
      {
        if ( v13 >= 0x1000 )
        {
          v12 = v10 + 40;
          if ( v10 + 40 <= v13 )
          {
            sub_14001B170(a1: v12, a2: 22, a3, a4);
            JUMPOUT(0x1403D1918LL);
          }
          goto LABEL_18;
        }
        v14 = sub_1409DB470(a1: v10 + 1);
      }
LABEL_21:
      *(_QWORD *)&v36 = v14;
      *(_QWORD *)&v37 = v9;
      *((_QWORD *)&v37 + 1) = v10;
      sub_140E82100(a1: v14, a2: v8, a3: v9 + 1);
      v11 = v36;
      goto LABEL_22;
    }
    *(_QWORD *)&v37 = v7[6];
    v10 = 15;
    *((_QWORD *)&v37 + 1) = 15;
    v11 = *(_OWORD *)v8;
    v36 = *(_OWORD *)v8;
LABEL_22:
    v17 = sub_1403D06C0(a1, a2: &v36, a3: 0);
    v27 = v17;
    v18 = sub_14005AB40(a1: a1 + 200, a2: v32, a3: &v36);
    v19 = *(_OWORD *)v18;
    v20 = *(_QWORD *)(v18 + 16);
    if ( *(_BYTE *)(v20 + 25) != 0 || (unsigned __int8)sub_14005C290(a1: a1 + 200, a2: &v36, a3: v20 + 32) != 0 )
    {
      if ( *(_QWORD *)(a1 + 208) == 0x38E38E38E38E38ELL )
        sub_14005A5D0();
      v21 = *(_QWORD *)(a1 + 200);
      v30 = a1 + 200;
      v31 = 0;
      v22 = sub_1409DB470(a1: 72);
      v31 = v22;
      sub_140016F80(a1: v22 + 32, a2: &v36);
      *(_DWORD *)(v22 + 64) = v17;
      *(_QWORD *)v22 = v21;
      *(_QWORD *)(v22 + 8) = v21;
      *(_QWORD *)(v22 + 16) = v21;
      *(_WORD *)(v22 + 24) = 0;
      v31 = 0;
      *(_OWORD *)v32 = v19;
      sub_14005A200(a1: a1 + 200, a2: v32, a3: v22);
      v10 = *((_QWORD *)&v37 + 1);
      v11 = v36;
    }
    if ( v6 )
    {
      v23 = *((_QWORD *)&v28 + 1);
      if ( *((_QWORD *)&v28 + 1) == v29 )
      {
        sub_1403CF0F0(a1: &v28, a2: *((_QWORD *)&v28 + 1), a3: &v36, a4: &v27);
        v10 = *((_QWORD *)&v37 + 1);
      }
      else
      {
        **((_OWORD **)&v28 + 1) = v11;
        *(_OWORD *)(v23 + 16) = v37;
        v10 = 15;
        LOBYTE(v36) = 0;
        *(_DWORD *)(v23 + 32) = v17;
        *((_QWORD *)&v28 + 1) += 40LL;
      }
    }
    if ( v10 > 0xF )
    {
      v24 = (void *)v36;
      if ( v10 + 1 >= 0x1000 )
      {
        if ( (unsigned __int64)(v36 - *(_QWORD *)(v36 - 8) - 8) > 0x1F )
          __fastfail(5u);
        v24 = *(void **)(v36 - 8);
      }
      sub_1409DB4C0(lpMem: v24);
    }
    v25 = (_BYTE *)v7[2];
    if ( v25[25] != 0 )
    {
      for ( i = (__int64 *)v7[1]; *((_BYTE *)i + 25) == 0; i = (__int64 *)i[1] )
      {
        if ( v7 != (__int64 *)i[2] )
          break;
        v7 = i;
      }
      v7 = i;
    }
    else
    {
      v7 = (__int64 *)v7[2];
      if ( *(_BYTE *)(*(_QWORD *)v25 + 25LL) == 0 )
      {
        do
          v7 = (__int64 *)*v7;
        while ( *(_BYTE *)(*v7 + 25) == 0 );
      }
    }
  }
  while ( *((_BYTE *)v7 + 25) == 0 );
  if ( (_QWORD)v28 != *((_QWORD *)&v28 + 1) )
  {
    *((_QWORD *)&v36 + 1) = 0;
    *(_QWORD *)&v37 = 0;
    DWORD2(v37) = 0;
    *(_QWORD *)&v36 = &PXEngine::ByteStreamWriter::`vftable';
    if ( (unsigned __int8)sub_1403CE360(a1: &v36, a2: &v28) != 0 )
    {
      LOWORD(v32[0]) = word_141313D34;
      sub_140A255B0(a1: &v32[1], a2: &v36);
      v33 = v32[0];
      sub_140A255B0(a1: v34, a2: &v32[1]);
      v35 = 1;
      sub_140A25690(a1: &v32[1]);
    }
    else
    {
      v35 = 0;
    }
    sub_140A25690(a1: &v36);
    sub_1407EE6B0(a1: &v33);
  }
  return (_UNKNOWN **)sub_140018080(a1: &v28);
}