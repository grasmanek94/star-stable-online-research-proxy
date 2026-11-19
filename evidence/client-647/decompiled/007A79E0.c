char __fastcall sub_1407A79E0(_DWORD *a1, __int64 *a2)
{
  __int64 v4; // r9
  _QWORD *v5; // rbp
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r8
  _QWORD *v8; // r13
  _QWORD *i; // rdi
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rdi
  int v14; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v15; // [rsp+60h] [rbp+18h] BYREF

  if ( (unsigned __int64)((a2[1] - *a2) / 40) >= 0xFFFFFFFF && (unsigned __int8)sub_140059CA0(a1: off_1410168B0) != 0 )
    __debugbreak();
  v15 = (a2[1] - *a2) / 40;
  if ( sub_1401D0820(a1, a2: &v15) == 0 || v15 > 0x3E80 )
    return 0;
  v4 = *a2;
  v5 = (_QWORD *)a2[1];
  v6 = v15;
  v7 = ((__int64)v5 - *a2) / 40;
  if ( v15 >= v7 )
  {
    if ( v15 > v7 )
    {
      if ( v15 <= (unsigned __int64)((a2[2] - v4) / 40) )
        a2[1] = sub_1407AE840(a1: v5, a2: v15 - v7, a3: a2);
      else
        sub_1407ACF90(a1: a2, a2: v15, a3: &v14);
    }
  }
  else
  {
    v8 = (_QWORD *)(v4 + 40LL * v15);
    for ( i = v8; i != v5; i += 5 )
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
  if ( v15 == 0 )
    return 1;
  while ( 1 )
  {
    v12 = v10 + 40 * v11;
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a1 + 16LL))(a1, a2: v12, a3: 1) == 0 )
      break;
    v14 = *(_DWORD *)(v12 + 4);
    if ( sub_1401D0820(a1, a2: &v14) == 0 )
      break;
    *(_DWORD *)(v12 + 4) = v14;
    if ( sub_1402B4D00(a1, a2: (__int64 *)(v10 + 8 + 40 * v11)) == 0 )
      break;
    if ( ++v11 >= v6 )
      return 1;
  }
  return 0;
}