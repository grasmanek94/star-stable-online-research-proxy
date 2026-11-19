char __fastcall sub_1407A8190(_DWORD *a1, __int64 *a2)
{
  __int64 v4; // r9
  __int64 v5; // r10
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // rbx
  char v12; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v13; // [rsp+50h] [rbp+18h] BYREF

  if ( (unsigned __int64)((a2[1] - *a2) / 56) >= 0xFFFFFFFF && (unsigned __int8)sub_140059CA0(a1: off_141016660) != 0 )
    __debugbreak();
  v13 = (a2[1] - *a2) / 56;
  if ( sub_1401D0820(a1, a2: &v13) == 0 || v13 > 0x3E80 )
    return 0;
  v4 = a2[1];
  v5 = *a2;
  v6 = v13;
  v7 = (v4 - *a2) / 56;
  if ( v13 >= v7 )
  {
    if ( v13 > v7 )
    {
      if ( v13 <= (unsigned __int64)((a2[2] - v5) / 56) )
        a2[1] = sub_1407AE890(a1: v4, a2: v13 - v7, a3: a2);
      else
        sub_1407AD7D0(a1: a2, a2: v13, a3: &v12);
    }
  }
  else
  {
    v8 = v5 + 56LL * v13;
    sub_1407AB790(a1: v8, a2: v4, a3: a2);
    a2[1] = v8;
  }
  v9 = *a2;
  v10 = 0;
  if ( v13 == 0 )
    return 1;
  while ( sub_1402B4D00(a1, a2: (__int64 *)(56 * v10 + v9)) != 0
       && (unsigned __int8)sub_1407AAD60(a1, a2: 56 * v10 + v9 + 32) != 0 )
  {
    if ( ++v10 >= v6 )
      return 1;
  }
  return 0;
}