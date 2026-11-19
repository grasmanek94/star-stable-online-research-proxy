char __fastcall sub_140346B80(_DWORD *a1, __int64 *a2)
{
  __int64 v4; // r9
  __int64 v5; // rbp
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  __int64 v8; // r12
  __int64 i; // rbx
  __int64 v10; // rsi
  __int64 v11; // rbx
  char v13; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v14; // [rsp+60h] [rbp+18h] BYREF

  if ( (unsigned __int64)((a2[1] - *a2) / 232) >= 0xFFFFFFFF && (unsigned __int8)sub_140059CA0(a1: off_140F78DC0) != 0 )
    __debugbreak();
  v14 = (a2[1] - *a2) / 232;
  if ( sub_1401D0820(a1, a2: &v14) == 0 || v14 > 0x3E80 )
    return 0;
  v4 = *a2;
  v5 = a2[1];
  v6 = v14;
  v7 = (v5 - *a2) / 232;
  if ( v14 >= v7 )
  {
    if ( v14 > v7 )
    {
      if ( v14 <= (unsigned __int64)((a2[2] - v4) / 232) )
        a2[1] = sub_140349210(a1: v5, a2: v14 - v7, a3: a2);
      else
        sub_140348A30(a1: a2, a2: v14, a3: &v13);
    }
  }
  else
  {
    v8 = v4 + 232LL * v14;
    for ( i = v8; i != v5; i += 232 )
      sub_14034BD00(a1: i);
    a2[1] = v8;
  }
  v10 = *a2;
  v11 = 0;
  if ( v14 == 0 )
    return 1;
  while ( (unsigned __int8)sub_1403474B0(a1, a2: v10 + 232 * v11) != 0 )
  {
    if ( ++v11 >= v6 )
      return 1;
  }
  return 0;
}