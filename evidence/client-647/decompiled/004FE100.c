char __fastcall sub_1404FE100(_DWORD *a1, __int64 *a2)
{
  __int64 v4; // r9
  __int64 v5; // rbp
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r8
  __int64 v8; // r12
  __int64 i; // rbx
  __int64 v10; // rdi
  __int64 v11; // rbp
  __int64 v12; // rbx
  int v14; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v15; // [rsp+60h] [rbp+18h] BYREF

  if ( (unsigned __int64)((a2[1] - *a2) / 112) >= 0xFFFFFFFF && (unsigned __int8)sub_140059CA0(a1: off_140FB8F90) != 0 )
    __debugbreak();
  v15 = (a2[1] - *a2) / 112;
  if ( sub_1401D0820(a1, a2: &v15) == 0 || v15 > 0x3E80 )
    return 0;
  v4 = *a2;
  v5 = a2[1];
  v6 = v15;
  v7 = (v5 - *a2) / 112;
  if ( v15 >= v7 )
  {
    if ( v15 > v7 )
    {
      if ( v15 <= (unsigned __int64)((a2[2] - v4) / 112) )
        a2[1] = sub_140500B90(a1: v5, a2: v15 - v7, a3: a2);
      else
        sub_1405005E0(a1: a2, a2: v15, a3: &v14);
    }
  }
  else
  {
    v8 = v4 + 112LL * v15;
    for ( i = v8; i != v5; i += 112 )
      sub_140502800(a1: i);
    a2[1] = v8;
  }
  if ( v15 == 0 )
    return 1;
  v10 = *a2;
  v11 = 0;
  while ( 1 )
  {
    v12 = 112 * v11;
    v14 = *(_DWORD *)(v10 + 112 * v11);
    if ( sub_1401D0820(a1, a2: &v14) == 0 )
      break;
    *(_DWORD *)(v10 + 112 * v11) = v14;
    if ( (unsigned __int8)sub_1404819E0(a1, a2: v10 + (v12 | 8)) == 0 )
      break;
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a1 + 16LL))(
           a1,
           a2: v12 + v10 + 32,
           a3: 8) == 0 )
      break;
    v14 = *(_DWORD *)(v10 + v12 + 40);
    if ( sub_1401D0820(a1, a2: &v14) == 0 )
      break;
    *(_DWORD *)(v10 + v12 + 40) = v14;
    if ( sub_1402B4D00(a1, a2: (__int64 *)(v12 + v10 + 48)) == 0
      || sub_1402B4D00(a1, a2: (__int64 *)(v12 + v10 + 80)) == 0 )
    {
      break;
    }
    if ( ++v11 >= v6 )
      return 1;
  }
  return 0;
}