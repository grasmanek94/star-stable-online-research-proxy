char __fastcall sub_14046D530(_DWORD *a1, __int64 *a2)
{
  __int64 v4; // r9
  _QWORD *v5; // rbp
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r8
  _QWORD *v8; // r12
  _QWORD *i; // rdi
  __int64 v10; // rdi
  __int64 v11; // rbx
  char v13; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v14; // [rsp+60h] [rbp+18h] BYREF

  if ( (unsigned __int64)((a2[1] - *a2) / 48) >= 0xFFFFFFFF && (unsigned __int8)sub_140059CA0(a1: off_140F9E828) != 0 )
    __debugbreak();
  v14 = (a2[1] - *a2) / 48;
  if ( sub_1401D0820(a1, a2: &v14) == 0 || v14 > 0x3E80 )
    return 0;
  v4 = *a2;
  v5 = (_QWORD *)a2[1];
  v6 = v14;
  v7 = ((__int64)v5 - *a2) / 48;
  if ( v14 >= v7 )
  {
    if ( v14 > v7 )
    {
      if ( v14 <= (unsigned __int64)((a2[2] - v4) / 48) )
        a2[1] = sub_14046E890(a1: v5, a2: v14 - v7, a3: a2);
      else
        sub_14046E560(a1: a2, a2: v14, a3: &v13);
    }
  }
  else
  {
    v8 = (_QWORD *)(v4 + 48LL * v14);
    for ( i = v8; i != v5; i += 6 )
    {
      sub_14001B5A0(a1: i + 1);
      i[1] = 19937;
      i[3] = 0;
      i[4] = 31;
    }
    a2[1] = (__int64)v8;
  }
  v10 = *a2;
  v11 = 0;
  if ( v14 == 0 )
    return 1;
  while ( (unsigned __int8)sub_1407F7890(a1, a2: v10 + 48 * v11) != 0 )
  {
    if ( ++v11 >= v6 )
      return 1;
  }
  return 0;
}