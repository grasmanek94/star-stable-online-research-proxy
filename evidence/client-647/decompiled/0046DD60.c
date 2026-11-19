char __fastcall sub_14046DD60(_DWORD *a1, __int64 *a2)
{
  __int64 v5; // r9
  __int64 v6; // r8
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rbx
  char v12; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v13; // [rsp+50h] [rbp+18h] BYREF

  if ( (unsigned __int64)(a2[1] - *a2) >= 0x3FFFFFFFC0LL && (unsigned __int8)sub_140059CA0(a1: off_140F9E850) != 0 )
    __debugbreak();
  v13 = (a2[1] - *a2) >> 6;
  if ( sub_1401D0820(a1, a2: &v13) == 0 || v13 > 0x3E80 )
    return 0;
  v5 = a2[1];
  v6 = *a2;
  v7 = v13;
  v8 = (v5 - *a2) >> 6;
  if ( v13 >= v8 )
  {
    if ( v13 > v8 )
    {
      if ( v13 <= (unsigned __int64)((a2[2] - v6) >> 6) )
        a2[1] = sub_14046E840(a1: v5, a2: v13 - v8, a3: a2);
      else
        sub_14046E310(a1: a2, a2: v13, a3: &v12);
    }
  }
  else
  {
    v9 = v6 + ((unsigned __int64)v13 << 6);
    sub_14046E210(a1: v9, a2: v5, a3: a2);
    a2[1] = v9;
  }
  v10 = *a2;
  v11 = 0;
  if ( v13 == 0 )
    return 1;
  while ( sub_14046DAD0(a1, a2: v10 + (v11 << 6)) )
  {
    if ( ++v11 >= v7 )
      return 1;
  }
  return 0;
}