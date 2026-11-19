__int64 __fastcall sub_1407D2930(__int64 a1, unsigned int a2, char a3, char a4, unsigned int a5)
{
  __int64 *v5; // r10
  __int64 *v9; // rdx
  __int64 *i; // rax
  __int64 result; // rax
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // rdi
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdi
  __int64 v20; // rsi
  int v21; // esi
  int v22; // r9d
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rdx
  char **v26; // rcx
  void **v27; // [rsp+30h] [rbp-30h] BYREF
  int v28; // [rsp+38h] [rbp-28h]
  int v29; // [rsp+3Ch] [rbp-24h]
  void **v30; // [rsp+40h] [rbp-20h] BYREF
  int v31; // [rsp+48h] [rbp-18h]
  int v32; // [rsp+4Ch] [rbp-14h]
  _BYTE v33[16]; // [rsp+50h] [rbp-10h] BYREF

  v5 = *(__int64 **)(a1 + 1912);
  v9 = v5;
  for ( i = (__int64 *)v5[1]; *((_BYTE *)i + 25) == 0; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 8) >= a2 )
      v9 = i;
    else
      i += 2;
  }
  if ( *((_BYTE *)v9 + 25) != 0 || a2 < *((_DWORD *)v9 + 8) || v9 == v5 )
  {
    v28 = 0;
    v29 = 195948557;
  }
  else
  {
    sub_1405F1D40(a1: (__int64)&v27, a2: (__int64)(v9 + 5));
  }
  v27 = &PXEngine::SafeActorPtrAs<CPXPlayerTPNet>::`vftable';
  result = sub_1405F1EE0(a1: (__int64)&v27);
  v12 = result;
  if ( result == 0 )
    return result;
  v13 = 0;
  if ( a5 != 0 )
  {
    v14 = qword_14138A6F0;
    if ( qword_14138A6F0 == 0 )
    {
      if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
        __debugbreak();
      sub_1409E29B8(a1: 999);
      __debugbreak();
    }
    v15 = sub_1405FD2E0(a1: (_QWORD *)qword_14138A6F0, a2: (__int64)v33, a3: (__int64)"PlayerItemManager");
    if ( (unsigned __int8)sub_1406006A0(a1: v14, a2: v15, a3: 163) != 0 )
    {
      sub_1405F1D60(a1: (__int64)&v30, a2: *(_DWORD *)(v15 + 12), a3: *(_DWORD *)(v15 + 8));
    }
    else
    {
      v31 = 0;
      v32 = 195948557;
    }
    v30 = &PXEngine::SafeActorPtrAs<CPXPlayerItemManager>::`vftable';
    v16 = sub_1405F1EE0(a1: (__int64)&v30);
    if ( v16 == 0 )
    {
      if ( (unsigned __int8)sub_140059CA0(a1: off_141011DE8) != 0 )
        __debugbreak();
      sub_1409E29B8(a1: 999);
      __debugbreak();
    }
    v13 = sub_1401E0840(a1: v16, a2: a5, a3: v17, a4: v18);
  }
  v19 = qword_14138A6F0;
  if ( qword_14138A6F0 == 0 )
  {
    v26 = off_140F35058;
    goto LABEL_44;
  }
  v20 = sub_1405FD2E0(a1: (_QWORD *)qword_14138A6F0, a2: (__int64)v33, a3: (__int64)"EquipmentManager");
  if ( (unsigned __int8)sub_1406006A0(a1: v19, a2: v20, a3: 342) != 0 )
  {
    sub_1405F1D60(a1: (__int64)&v30, a2: *(_DWORD *)(v20 + 12), a3: *(_DWORD *)(v20 + 8));
  }
  else
  {
    v31 = 0;
    v32 = 195948557;
  }
  v30 = &PXEngine::SafeActorPtrAs<PXEngine::EquipmentManager>::`vftable';
  result = sub_1405F1EE0(a1: (__int64)&v30);
  v21 = result;
  if ( result == 0 )
  {
    v26 = off_140F40268;
LABEL_44:
    if ( (unsigned __int8)sub_140059CA0(a1: v26) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  if ( a3 == 1 )
  {
    sub_1405F1D40(a1: (__int64)v33, a2: v12 + 120);
    v22 = 1;
    return sub_140485D90(a1: v21, a2: (unsigned int)v33, a3: a2, a4: v22, a5: a4, a6: v13);
  }
  if ( a3 == 2 )
  {
    result = sub_1405F1EE0(a1: v12 + 1608);
    v23 = result;
    if ( result != 0 )
    {
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 152LL))(a1: result);
      if ( (_DWORD)result == 120 )
      {
        v24 = sub_14005D330();
        result = sub_140645790(a1: v23, a2: 120, a3: v24);
        v25 = 0;
        if ( (_BYTE)result != 0 )
          v25 = v23;
        if ( v25 != 0 )
        {
          sub_1405F1D40(a1: (__int64)v33, a2: v25 + 120);
          v22 = 2;
          return sub_140485D90(a1: v21, a2: (unsigned int)v33, a3: a2, a4: v22, a5: a4, a6: v13);
        }
      }
    }
  }
  return result;
}