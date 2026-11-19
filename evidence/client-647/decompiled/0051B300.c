char __fastcall sub_14051B300(_DWORD *a1, _QWORD *a2)
{
  float v5; // xmm0_4
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbx
  float v8; // xmm0_4
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r14
  int v12; // ecx
  int v13; // ebx
  __int64 v14; // rdi
  _QWORD *v15; // rdi
  _QWORD *v16; // rbx
  _BYTE v17[16]; // [rsp+20h] [rbp-38h] BYREF
  int v18; // [rsp+68h] [rbp+10h] BYREF
  int v19; // [rsp+70h] [rbp+18h] BYREF

  if ( a2[2] > 0xFFFFu )
    return 0;
  LOWORD(v18) = a2[2];
  if ( sub_1402D2B10(a1, a2: &v18) == 0 )
    return 0;
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1) == 0 )
  {
    v15 = (_QWORD *)a2[1];
    v16 = (_QWORD *)*v15;
    if ( (_QWORD *)*v15 != v15 )
    {
      while ( 1 )
      {
        v18 = *((_DWORD *)v16 + 4);
        if ( sub_1401D0820(a1, a2: &v18) == 0 )
          break;
        *((_DWORD *)v16 + 4) = v18;
        v18 = *((_DWORD *)v16 + 5);
        if ( sub_1401D0820(a1, a2: &v18) == 0 )
          break;
        *((_DWORD *)v16 + 5) = v18;
        v16 = (_QWORD *)*v16;
        if ( v16 == v15 )
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
    sub_14035F430(a1: a2);
  v11 = (unsigned __int16)v18;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  if ( (_WORD)v18 == 0 )
    return 1;
  while ( 1 )
  {
    v18 = v12;
    if ( sub_1401D0820(a1, a2: &v18) == 0 )
      break;
    v19 = v18;
    v18 = v13;
    if ( sub_1401D0820(a1, a2: &v18) == 0 )
      break;
    v13 = v18;
    sub_14051EBB0(a1: a2, a2: v17, a3: &v19, a4: &v18);
    if ( ++v14 >= v11 )
      return 1;
    v12 = v19;
  }
  return 0;
}