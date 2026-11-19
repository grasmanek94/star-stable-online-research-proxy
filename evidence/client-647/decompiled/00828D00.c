char __fastcall sub_140828D00(_DWORD *a1, __int64 *a2)
{
  unsigned int v4; // ebp
  __int64 v5; // rdx
  _QWORD *v6; // rsi
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r15
  _QWORD *v9; // r12
  _QWORD *i; // rdi
  __int64 v11; // r14
  __int64 v12; // rbp
  __int64 v13; // rdi
  __int64 v14; // rsi
  unsigned int v16; // [rsp+68h] [rbp+10h] BYREF
  _DWORD *v17; // [rsp+70h] [rbp+18h] BYREF

  if ( (unsigned __int64)(a2[1] - *a2) >= 0x3FFFFFFFC0LL && (unsigned __int8)sub_140059CA0(a1: off_141025B10) != 0 )
    __debugbreak();
  v16 = (a2[1] - *a2) >> 6;
  if ( sub_1401D0820(a1, a2: &v16) == 0 )
    return 0;
  v4 = v16;
  if ( v16 > 0x3E80 )
    return 0;
  v5 = *a2;
  v6 = (_QWORD *)a2[1];
  v7 = ((__int64)v6 - *a2) >> 6;
  v8 = v16;
  if ( v16 >= v7 )
  {
    if ( v16 > v7 )
    {
      if ( v16 <= (unsigned __int64)((a2[2] - v5) >> 6) )
        a2[1] = sub_14082A5B0(a1: v6, a2: v16 - v7, a3: a2);
      else
        sub_14082A120(a1: a2, a2: v16, a3: &v16);
    }
  }
  else
  {
    v9 = (_QWORD *)(v5 + ((unsigned __int64)v16 << 6));
    for ( i = v9; i != v6; i += 8 )
    {
      sub_14001B5A0(a1: i);
      *i = 19937;
      i[2] = 0;
      i[3] = 31;
    }
    a2[1] = (__int64)v9;
  }
  if ( v4 == 0 )
    return 1;
  v11 = *a2;
  v12 = 0;
  while ( 1 )
  {
    v17 = a1;
    v13 = v12 << 6;
    v14 = (v12 << 6) + v11;
    if ( sub_1402B4D00(a1, a2: (__int64 *)v14) == 0 )
      break;
    v16 = *(_DWORD *)(v14 + 32);
    if ( sub_1401D0820(a1, a2: &v16) == 0 )
      break;
    *(_DWORD *)(v14 + 32) = v16;
    v16 = *(_DWORD *)(v14 + 36);
    if ( sub_1401D0820(a1, a2: &v16) == 0 )
      break;
    *(_DWORD *)(v14 + 36) = v16;
    v16 = *(_DWORD *)(v14 + 40);
    if ( sub_1401D0820(a1, a2: &v16) == 0 )
      break;
    *(_DWORD *)(v14 + 40) = v16;
    if ( sub_1402B7CD0(a1: &v17, a2: (int *)(v13 + v11 + 44)) == 0
      || sub_1402B7CD0(a1: &v17, a2: (int *)(v13 + v11 + 48)) == 0
      || (*(unsigned __int8 (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a1 + 16LL))(
           a1,
           a2: v13 + v11 + 52,
           a3: 4) == 0
      || (*(unsigned __int8 (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a1 + 16LL))(
           a1,
           a2: v13 + v11 + 56,
           a3: 4) == 0 )
    {
      break;
    }
    if ( ++v12 >= v8 )
      return 1;
  }
  return 0;
}