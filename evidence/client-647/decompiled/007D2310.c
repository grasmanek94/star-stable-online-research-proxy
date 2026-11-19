__int64 __fastcall sub_1407D2310(__int64 a1, _DWORD *a2)
{
  __int64 *v4; // r8
  __int64 *v5; // rax
  __int64 *v6; // rdx
  __int64 result; // rax
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rdx
  void *v11; // rcx
  int v12; // [rsp+20h] [rbp-58h] BYREF
  void **v13; // [rsp+28h] [rbp-50h] BYREF
  int v14; // [rsp+30h] [rbp-48h]
  int v15; // [rsp+34h] [rbp-44h]
  unsigned int v16; // [rsp+38h] [rbp-40h]
  __int128 v17; // [rsp+40h] [rbp-38h] BYREF
  __int64 v18; // [rsp+50h] [rbp-28h]
  unsigned __int64 v19; // [rsp+58h] [rbp-20h]

  v16 = -1;
  v17 = 0;
  v18 = 0;
  v19 = 15;
  LOBYTE(v17) = 0;
  v12 = -1;
  if ( sub_1401D0820(a1: a2, a2: &v12) != 0 && (v16 = v12, sub_1402B4D00(a1: a2, a2: (__int64 *)&v17) != 0) )
  {
    v4 = *(__int64 **)(a1 + 1912);
    v5 = (__int64 *)v4[1];
    v6 = v4;
    while ( *((_BYTE *)v5 + 25) == 0 )
    {
      if ( *((_DWORD *)v5 + 8) >= v16 )
      {
        v6 = v5;
        v5 = (__int64 *)*v5;
      }
      else
      {
        v5 = (__int64 *)v5[2];
      }
    }
    if ( *((_BYTE *)v6 + 25) != 0 || v16 < *((_DWORD *)v6 + 8) || v6 == v4 )
    {
      v14 = 0;
      v15 = 195948557;
    }
    else
    {
      sub_1405F1D40(a1: (__int64)&v13, a2: (__int64)(v6 + 5));
    }
    v13 = &PXEngine::SafeActorPtrAs<CPXPlayerTPNet>::`vftable';
    result = sub_1405F1EE0(a1: (__int64)&v13);
    v8 = result;
    if ( result != 0 )
    {
      result = sub_1405F1EE0(a1: result + 1608);
      v9 = result;
      if ( result != 0 )
      {
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 152LL))(a1: result);
        if ( (_DWORD)result == 120 )
          result = sub_1401F6D50(a1: v9, a2: &v17);
      }
      v10 = *(unsigned int *)(a1 + 1100);
      if ( (_DWORD)v10 == *(_DWORD *)(v8 + 1720) )
        result = sub_1407D48B0(a1, a2: v10);
    }
  }
  else
  {
    result = sub_140059D90(a1: off_1410149F8, a2: "Failed to deserialize HorseNameChangePushMessage!");
    if ( (_BYTE)result != 0 )
      __debugbreak();
  }
  if ( v19 > 0xF )
  {
    v11 = (void *)v17;
    if ( v19 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v17 - *(_QWORD *)(v17 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v11 = *(void **)(v17 - 8);
    }
    return sub_1409DB4C0(lpMem: v11);
  }
  return result;
}