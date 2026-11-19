unsigned __int64 __fastcall sub_14034E470(__int64 a1, _DWORD *a2)
{
  __int64 v2; // r9
  int v3; // r14d
  __int64 v4; // r8
  unsigned __int64 result; // rax
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // r9d
  __int64 v13; // r14
  __int64 v14; // r8
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdi
  char **v19; // rcx
  void **v20; // [rsp+30h] [rbp-58h] BYREF
  int v21; // [rsp+38h] [rbp-50h]
  int v22; // [rsp+3Ch] [rbp-4Ch]
  char v23; // [rsp+40h] [rbp-48h] BYREF
  int v24; // [rsp+90h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 184);
  v3 = (int)a2;
  v4 = *(_QWORD *)(a1 + 192) - v2;
  result = (unsigned __int64)((unsigned __int128)(v4 * (__int128)0x6666666666666667LL) >> 64) >> 63;
  if ( v4 / 320 != 0 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v7 >= (unsigned __int64)((*(_QWORD *)(a1 + 192) - v2) / 320) )
        goto LABEL_13;
      v8 = 320 * v7 + v2;
      if ( *(_DWORD *)(v8 + 8) == *a2 )
        break;
      v7 = (unsigned int)(v7 + 1);
      result = (unsigned int)v7;
      if ( (unsigned int)v7 >= (unsigned __int64)((*(_QWORD *)(a1 + 192) - v2) / 320) )
        return result;
    }
    v9 = sub_1405F1EE0(a1: v2 + 304 + 320 * v7);
    if ( v9 != 0
      || (v21 = 0,
          v22 = 195948557,
          v20 = &PXEngine::SafeActorPtrAs<CPXPlayerTPNet>::`vftable',
          result = sub_14034E340(a1, a2: v8 + 8, a3: &v20, a4: 0),
          LODWORD(v9) = result,
          result != 0) )
    {
      v24 = 0;
      v10 = sub_14034C350(
              a1: (unsigned int)&word_141313D3C,
              a2: (unsigned int)&v23,
              a3: v3,
              a4: (int)a1 + 704,
              a5: (__int64)&v24);
      sub_1407EE6B0(a1: v10);
      v11 = sub_1405F1EE0(a1: (__int64)&off_141311CD0);
      v13 = v11;
      if ( v11 != 0 )
      {
        LOBYTE(v12) = 1;
        sub_14034C770(a1: v11, a2: v9, a3: *(_DWORD *)(a1 + 704), a4: v12, a5: 0);
        v14 = *(_QWORD *)(a1 + 152);
        v15 = (*(_QWORD *)(a1 + 160) - v14) >> 4;
        v16 = (unsigned int)(v15 - 1);
        if ( v16 >= v15 )
LABEL_13:
          __fastfail(5u);
        v17 = sub_1405F1EE0(a1: v14 + 16 * v16);
        v18 = v17;
        if ( v17 != 0 )
        {
          sub_1401F7270(a1: v17, a2: 0);
          sub_14034C530(a1: v13, a2: 1, a3: v18);
          return sub_14035F700(a1: a1 + 184, a2: &v24, a3: *(_QWORD *)(a1 + 184) + 320LL * (int)v7);
        }
        v19 = off_140F77F58;
      }
      else
      {
        v19 = off_140F77EF8;
      }
      if ( (unsigned __int8)sub_140059CA0(a1: v19) != 0 )
        __debugbreak();
      sub_1409E29B8(a1: 999);
      __debugbreak();
    }
  }
  return result;
}