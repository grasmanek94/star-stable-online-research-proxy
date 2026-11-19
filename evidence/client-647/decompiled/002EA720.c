char __fastcall sub_1402EA720(_DWORD *a1, _QWORD *a2)
{
  float v5; // xmm0_4
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbx
  float v8; // xmm0_4
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbp
  int v12; // ecx
  __int64 v13; // rbx
  _QWORD *v14; // rsi
  _QWORD *v15; // rbx
  _BYTE v16[16]; // [rsp+20h] [rbp-28h] BYREF
  int v17; // [rsp+58h] [rbp+10h] BYREF

  if ( a2[2] > 0xFFFFu )
    return 0;
  LOWORD(v17) = a2[2];
  if ( sub_1402D2B10(a1, a2: &v17) == 0 )
    return 0;
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1) == 0 )
  {
    v14 = (_QWORD *)a2[1];
    v15 = (_QWORD *)*v14;
    if ( (_QWORD *)*v14 != v14 )
    {
      while ( 1 )
      {
        v17 = *((_DWORD *)v15 + 4);
        if ( sub_1401D0820(a1, a2: &v17) == 0 )
          break;
        *((_DWORD *)v15 + 4) = v17;
        v15 = (_QWORD *)*v15;
        if ( v15 == v14 )
          return 1;
      }
      return 0;
    }
    return 1;
  }
  sub_1402FCD30(a1: a2);
  v5 = sub_1409E3810();
  v6 = 0;
  if ( v5 >= 9.223372e18 )
  {
    v5 = v5 - 9.223372e18;
    if ( v5 < 9.223372e18 )
      v6 = 0x8000000000000000uLL;
  }
  v7 = v6 + (unsigned int)(int)v5;
  v8 = sub_1409E3810();
  v9 = 0;
  if ( v8 >= 9.223372e18 )
  {
    v8 = v8 - 9.223372e18;
    if ( v8 < 9.223372e18 )
      v9 = 0x8000000000000000uLL;
  }
  v10 = v9 + (unsigned int)(int)v8;
  if ( v10 < v7 )
    v10 = v7;
  if ( v10 > a2[7] )
    sub_1402FC920(a1: a2);
  v11 = (unsigned __int16)v17;
  v12 = 0;
  v13 = 0;
  if ( (_WORD)v17 == 0 )
    return 1;
  while ( 1 )
  {
    v17 = v12;
    if ( sub_1401D0820(a1, a2: &v17) == 0 )
      break;
    sub_1402EC110(a1: a2, a2: v16, a3: &v17);
    if ( ++v13 >= v11 )
      return 1;
    v12 = v17;
  }
  return 0;
}