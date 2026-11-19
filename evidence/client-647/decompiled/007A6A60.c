char __fastcall sub_1407A6A60(_DWORD *a1, __int64 *a2)
{
  __int64 v4; // r9
  _QWORD *v5; // rdi
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r8
  _QWORD *v8; // r12
  _QWORD *i; // rbx
  __int64 v10; // r15
  __int64 v11; // rbx
  char v13; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v14; // [rsp+60h] [rbp+18h] BYREF

  if ( (unsigned __int64)((a2[1] - *a2) / 40) >= 0xFFFFFFFF && (unsigned __int8)sub_140059CA0(a1: off_141016950) != 0 )
    __debugbreak();
  v14 = (a2[1] - *a2) / 40;
  if ( sub_1401D0820(a1, a2: &v14) == 0 || v14 > 0x3E80 )
    return 0;
  v4 = *a2;
  v5 = (_QWORD *)a2[1];
  v6 = v14;
  v7 = ((__int64)v5 - *a2) / 40;
  if ( v14 >= v7 )
  {
    if ( v14 > v7 )
    {
      if ( v14 <= (unsigned __int64)((a2[2] - v4) / 40) )
        a2[1] = sub_1407AE7A0(a1: v5, a2: v14 - v7, a3: a2);
      else
        sub_1407AC430(a1: a2, a2: v14, a3: &v13);
    }
  }
  else
  {
    v8 = (_QWORD *)(v4 + 40LL * v14);
    for ( i = v8; i != v5; i += 5 )
    {
      sub_14001B5A0(a1: i);
      *i = 19937;
      i[2] = 0;
      i[3] = 31;
    }
    a2[1] = (__int64)v8;
  }
  if ( v14 == 0 )
    return 1;
  v10 = *a2;
  v11 = 0;
  while ( sub_1402B4D00(a1, a2: (__int64 *)(v10 + 40 * v11)) != 0
       && (*(unsigned __int8 (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a1 + 16LL))(
            a1,
            a2: v10 + 32 + 40 * v11,
            a3: 1) != 0 )
  {
    if ( ++v11 >= v6 )
      return 1;
  }
  return 0;
}