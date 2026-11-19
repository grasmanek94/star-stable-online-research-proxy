bool __fastcall sub_1407AAA70(_DWORD *a1, __int64 a2)
{
  bool result; // al
  int v5; // [rsp+30h] [rbp+8h] BYREF
  _DWORD *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a1;
  result = false;
  if ( sub_1402B4D00(a1, (__int64 *)a2) != 0 && sub_1402B4D00(a1, a2: (__int64 *)(a2 + 32)) != 0 )
  {
    v5 = *(_DWORD *)(a2 + 64);
    if ( sub_1401D0820(a1, a2: &v5) != 0 )
    {
      *(_DWORD *)(a2 + 64) = v5;
      v5 = *(_DWORD *)(a2 + 68);
      if ( sub_1401D0820(a1, a2: &v5) != 0 )
      {
        *(_DWORD *)(a2 + 68) = v5;
        if ( sub_1402B7CD0(a1: &v6, a2: (int *)(a2 + 72)) != 0
          && sub_1402B7CD0(a1: &v6, a2: (int *)(a2 + 76)) != 0
          && sub_1402B7CD0(a1: &v6, a2: (int *)(a2 + 80)) != 0 )
        {
          return true;
        }
      }
    }
  }
  return result;
}