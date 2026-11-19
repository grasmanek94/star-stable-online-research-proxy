char __fastcall sub_1403CE360(_DWORD *a1, __int64 *a2)
{
  unsigned int v4; // r12d
  __int64 v5; // r9
  _QWORD *v6; // rbx
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // r8
  _QWORD *v9; // rbp
  _QWORD *i; // rdi
  unsigned __int64 v11; // rax
  __int64 v12; // rbp
  unsigned __int64 v13; // rdi
  __int64 v14; // rbx
  unsigned int v15; // esi
  __int64 v16; // rdx
  _DWORD v18[4]; // [rsp+20h] [rbp-48h] BYREF
  char v19; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v20; // [rsp+80h] [rbp+18h] BYREF
  unsigned int v21; // [rsp+88h] [rbp+20h] BYREF

  if ( (unsigned __int64)((a2[1] - *a2) / 40) >= 0xFFFFFFFF && (unsigned __int8)sub_140059CA0(a1: off_140F8A8D0) != 0 )
    __debugbreak();
  v20 = (a2[1] - *a2) / 40;
  if ( sub_1401D0820(a1, a2: &v20) == 0 )
    return 0;
  v4 = v20;
  if ( v20 > 0x3E80 )
    return 0;
  v5 = *a2;
  v6 = (_QWORD *)a2[1];
  v7 = v20;
  v8 = ((__int64)v6 - *a2) / 40;
  if ( v20 >= v8 )
  {
    if ( v20 > v8 )
    {
      if ( v20 <= (unsigned __int64)((a2[2] - v5) / 40) )
      {
        v11 = v20 - v8;
        if ( v20 != v8 )
        {
          do
          {
            v6[4] = 0;
            *(_OWORD *)v6 = 0;
            v6[2] = 0;
            v6[3] = 15;
            *(_BYTE *)v6 = 0;
            v6 += 5;
            --v11;
          }
          while ( v11 != 0 );
        }
        a2[1] = (__int64)v6;
      }
      else
      {
        sub_1403CF3D0(a1: a2, a2: v20, a3: &v19);
      }
    }
  }
  else
  {
    v9 = (_QWORD *)(v5 + 40LL * v20);
    for ( i = v9; i != v6; i += 5 )
    {
      sub_14001B5A0(a1: i);
      *i = 19937;
      i[2] = 0;
      i[3] = 31;
    }
    a2[1] = (__int64)v9;
  }
  v12 = *a2;
  v13 = 0;
  if ( v4 == 0 )
    return 1;
  while ( 1 )
  {
    v14 = v12 + 40 * v13;
    if ( *(_QWORD *)(v14 + 16) >= 0xFFFFFFFF && (unsigned __int8)sub_140059CA0(a1: off_140F64800) != 0 )
      __debugbreak();
    v21 = *(_DWORD *)(v14 + 16);
    if ( sub_1401D0820(a1, a2: &v21) == 0 )
      break;
    v15 = v21;
    if ( v21 > 0x1FA0 )
      break;
    sub_14005A6C0(a1: v12 + 40 * v13, a2: v21, a3: 0);
    v16 = *(_QWORD *)(v14 + 24) <= 0xFu ? v12 + 40 * v13 : *(_QWORD *)v14;
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, __int64, _QWORD))(*(_QWORD *)a1 + 16LL))(a1, a2: v16, a3: v15) == 0 )
      break;
    v18[0] = *(_DWORD *)(v14 + 32);
    if ( sub_1401D0820(a1, a2: v18) == 0 )
      break;
    ++v13;
    *(_DWORD *)(v14 + 32) = v18[0];
    if ( v13 >= v7 )
      return 1;
  }
  return 0;
}