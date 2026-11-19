char __fastcall sub_1407AABE0(_DWORD *a1, __int64 *a2)
{
  __int64 v5; // r9
  __int64 v6; // r10
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rbx
  char v12; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v13; // [rsp+50h] [rbp+18h] BYREF

  if ( (unsigned __int64)((a2[1] - *a2) / 88) >= 0xFFFFFFFF && (unsigned __int8)sub_140059CA0(a1: off_141016570) != 0 )
    __debugbreak();
  v13 = (a2[1] - *a2) / 88;
  if ( sub_1401D0820(a1, a2: &v13) == 0 || v13 > 0x3E80 )
    return 0;
  v5 = a2[1];
  v6 = *a2;
  v7 = v13;
  v8 = (v5 - *a2) / 88;
  if ( v13 >= v8 )
  {
    if ( v13 > v8 )
    {
      if ( v13 <= (unsigned __int64)((a2[2] - v6) / 88) )
        a2[1] = sub_1407AE9D0(a1: v5, a2: v13 - v8, a3: a2);
      else
        sub_1407AE3A0(a1: a2, a2: v13, a3: &v12);
    }
  }
  else
  {
    v9 = v6 + 88LL * v13;
    sub_1407AB880(a1: v9, a2: v5, a3: a2);
    a2[1] = v9;
  }
  v10 = *a2;
  v11 = 0;
  if ( v13 == 0 )
    return 1;
  while ( (unsigned __int8)sub_1407AAA70(a1, a2: v10 + 88 * v11) != 0 )
  {
    if ( ++v11 >= v7 )
      return 1;
  }
  return 0;
}