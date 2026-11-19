char __fastcall sub_14044C050(_DWORD *a1, __int64 *a2)
{
  __int64 v4; // r9
  _QWORD *v5; // rbp
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r8
  _QWORD *v8; // r13
  _QWORD *i; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rbx
  int v14; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v15; // [rsp+60h] [rbp+18h] BYREF

  if ( (unsigned __int64)((a2[1] - *a2) / 48) >= 0xFFFFFFFF && (unsigned __int8)sub_140059CA0(a1: off_140F9A4E0) != 0 )
    __debugbreak();
  v15 = (a2[1] - *a2) / 48;
  if ( sub_1401D0820(a1, a2: &v15) == 0 || v15 > 0x3E80 )
    return 0;
  v4 = *a2;
  v5 = (_QWORD *)a2[1];
  v6 = v15;
  v7 = ((__int64)v5 - *a2) / 48;
  if ( v15 >= v7 )
  {
    if ( v15 > v7 )
    {
      if ( v15 <= (unsigned __int64)((a2[2] - v4) / 48) )
        a2[1] = sub_14044EFC0(a1: v5, a2: v15 - v7, a3: a2);
      else
        sub_14044E160(a1: a2, a2: v15, a3: &v14);
    }
  }
  else
  {
    v8 = (_QWORD *)(v4 + 48LL * v15);
    for ( i = v8; i != v5; i += 6 )
    {
      sub_14001B5A0(a1: i + 1);
      i[1] = 19937;
      i[3] = 0;
      i[4] = 31;
    }
    a2[1] = (__int64)v8;
  }
  if ( v15 == 0 )
    return 1;
  v10 = *a2;
  v11 = 0;
  while ( 1 )
  {
    v12 = 48 * v11;
    v14 = *(_DWORD *)(v10 + 48 * v11);
    if ( sub_1401D0820(a1, a2: &v14) == 0 )
      break;
    *(_DWORD *)(v10 + 48 * v11) = v14;
    if ( sub_1402B4D00(a1, a2: (__int64 *)(v10 + (v12 | 8))) == 0
      || sub_1402D2DB0(a1, a2: (int *)(v12 + v10 + 40)) == 0
      || (*(unsigned __int8 (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a1 + 16LL))(
           a1,
           a2: v12 + v10 + 44,
           a3: 1) == 0 )
    {
      break;
    }
    if ( ++v11 >= v6 )
      return 1;
  }
  return 0;
}