char __fastcall sub_1402B4880(_DWORD *a1, __int64 *a2)
{
  __int64 v4; // r9
  _QWORD *v5; // rbp
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // r8
  _QWORD *v8; // r15
  _QWORD *i; // rdi
  __int64 v10; // rdi
  __int64 v11; // r14
  __int64 v12; // rbx
  unsigned int v13; // ebp
  __int64 v14; // r15
  unsigned __int64 v16; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v17; // [rsp+60h] [rbp+18h] BYREF

  if ( (unsigned __int64)((a2[1] - *a2) / 56) >= 0xFFFFFFFF && (unsigned __int8)sub_140059CA0(a1: off_140F64700) != 0 )
    __debugbreak();
  v17 = (a2[1] - *a2) / 56;
  if ( sub_1401D0820(a1, a2: &v17) == 0 || v17 > 0x3E80 )
    return 0;
  v4 = *a2;
  v5 = (_QWORD *)a2[1];
  v6 = v17;
  v7 = ((__int64)v5 - *a2) / 56;
  if ( v17 >= v7 )
  {
    if ( v17 > v7 )
    {
      if ( v17 <= (unsigned __int64)((a2[2] - v4) / 56) )
        a2[1] = sub_1402B55F0(a1: v5, a2: v17 - v7, a3: a2);
      else
        sub_1402B5360(a1: a2, a2: v17, a3: &v16);
    }
  }
  else
  {
    v8 = (_QWORD *)(v4 + 56LL * v17);
    for ( i = v8; i != v5; i += 7 )
    {
      sub_14001B5A0(a1: i + 3);
      i[3] = 19937;
      i[5] = 0;
      i[6] = 31;
    }
    a2[1] = (__int64)v8;
  }
  v10 = *a2;
  v11 = 0;
  if ( v17 == 0 )
    return 1;
  while ( 1 )
  {
    v12 = 56 * v11;
    LODWORD(v16) = *(_DWORD *)(v10 + 56 * v11);
    if ( sub_1401D0820(a1, a2: &v16) == 0 )
      break;
    *(_DWORD *)(v10 + 56 * v11) = v16;
    LODWORD(v16) = *(_DWORD *)(v10 + v12 + 4);
    if ( sub_1401D0820(a1, a2: &v16) == 0 )
      break;
    *(_DWORD *)(v10 + v12 + 4) = v16;
    LODWORD(v16) = *(_DWORD *)(v10 + v12 + 8);
    if ( sub_1401D0820(a1, a2: &v16) == 0 )
      break;
    *(_DWORD *)(v10 + v12 + 8) = v16;
    v16 = *(_QWORD *)(v10 + v12 + 16);
    if ( sub_1402AF380(a1, a2: &v16) == 0 )
      break;
    *(_QWORD *)(v10 + v12 + 16) = v16;
    if ( *(_QWORD *)(v10 + v12 + 40) >= 0xFFFFFFFF && (unsigned __int8)sub_140059CA0(a1: off_140F64800) != 0 )
      __debugbreak();
    LODWORD(v16) = *(_DWORD *)(v10 + v12 + 40);
    if ( sub_1401D0820(a1, a2: &v16) == 0 )
      break;
    v13 = v16;
    if ( (unsigned int)v16 > 0x1FA0 )
      break;
    v14 = v12 + v10 + 24;
    sub_14005A6C0(a1: v14, a2: (unsigned int)v16, a3: 0);
    if ( *(_QWORD *)(v10 + v12 + 48) > 0xFu )
      v14 = *(_QWORD *)(v10 + v12 + 24);
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, __int64, _QWORD))(*(_QWORD *)a1 + 16LL))(a1, a2: v14, a3: v13) == 0 )
      break;
    if ( ++v11 >= v6 )
      return 1;
  }
  return 0;
}