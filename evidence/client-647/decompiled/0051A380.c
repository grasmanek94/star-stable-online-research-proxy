char __fastcall sub_14051A380(_DWORD *a1, _QWORD *a2)
{
  unsigned __int64 v4; // rbp
  float v5; // xmm0_4
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbx
  float v8; // xmm0_4
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rbx
  void *v14; // rcx
  void *v16; // rax
  _QWORD *v17; // rdi
  _QWORD *v18; // rbx
  _BYTE v19[16]; // [rsp+20h] [rbp-58h] BYREF
  LPVOID lpMem[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v21; // [rsp+40h] [rbp-38h]
  int v22; // [rsp+88h] [rbp+10h] BYREF

  if ( a2[2] > 0xFFFFu )
    return 0;
  LOWORD(v22) = a2[2];
  if ( sub_1402D2B10(a1, a2: &v22) == 0 )
    return 0;
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1) == 0 )
  {
    v17 = (_QWORD *)a2[1];
    v18 = (_QWORD *)*v17;
    if ( (_QWORD *)*v17 != v17 )
    {
      while ( 1 )
      {
        v22 = *((_DWORD *)v18 + 4);
        if ( sub_1401D0820(a1, a2: &v22) == 0 )
          break;
        *((_DWORD *)v18 + 4) = v22;
        if ( sub_1402B82C0(a1, a2: v18 + 3) == 0 )
          break;
        v18 = (_QWORD *)*v18;
        if ( v18 == v17 )
          return 1;
      }
      return 0;
    }
    return 1;
  }
  sub_140527AC0(a1: a2);
  v4 = (unsigned __int16)v22;
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
    sub_14005F600(a1: a2);
  v11 = 0;
  *(_OWORD *)lpMem = 0;
  v12 = 0;
  v21 = 0;
  v13 = 0;
  if ( (_WORD)v22 != 0 )
  {
    while ( 1 )
    {
      v22 = v11;
      if ( sub_1401D0820(a1, a2: &v22) == 0 || sub_1402B82C0(a1, a2: (__int64 *)lpMem) == 0 )
        break;
      sub_14051EE30(a1: a2, a2: v19, a3: &v22, a4: lpMem);
      if ( ++v13 >= v4 )
      {
        v12 = v21;
        goto LABEL_20;
      }
      v11 = v22;
    }
    if ( lpMem[0] == nullptr )
      return 0;
    if ( (unsigned __int64)(4 * ((signed __int64)(v21 - (unsigned __int64)lpMem[0]) >> 2)) < 0x1000 )
    {
      v16 = lpMem[0];
LABEL_29:
      sub_1409DB4C0(lpMem: v16);
      return 0;
    }
    v16 = *((void **)lpMem[0] - 1);
    if ( (unsigned __int64)((char *)lpMem[0] - (char *)v16 - 8) <= 0x1F )
      goto LABEL_29;
LABEL_31:
    __fastfail(5u);
  }
LABEL_20:
  if ( lpMem[0] == nullptr )
    return 1;
  if ( (unsigned __int64)(4 * ((signed __int64)(v12 - (unsigned __int64)lpMem[0]) >> 2)) >= 0x1000 )
  {
    v14 = *((void **)lpMem[0] - 1);
    if ( (unsigned __int64)((char *)lpMem[0] - (char *)v14 - 8) <= 0x1F )
    {
      sub_1409DB4C0(lpMem: v14);
      return 1;
    }
    goto LABEL_31;
  }
  sub_1409DB4C0(lpMem: lpMem[0]);
  return 1;
}