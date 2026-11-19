__int64 __fastcall sub_1404B44D0(__int64 a1, _DWORD *a2)
{
  __int64 v3; // r14
  unsigned __int64 v4; // rdi
  _QWORD *v5; // rax
  signed __int64 v6; // rbx
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // r14
  _QWORD *v15; // rbx
  unsigned __int64 v16; // rcx
  void *v17; // rcx
  unsigned __int64 v18; // rcx
  __int64 v19; // rbx
  unsigned __int8 v20; // bl
  void *v21; // rcx
  LPVOID lpMem[2]; // [rsp+20h] [rbp-40h] BYREF
  char *v24; // [rsp+30h] [rbp-30h]
  _QWORD v25[5]; // [rsp+38h] [rbp-28h] BYREF
  unsigned int v27; // [rsp+98h] [rbp+38h] BYREF

  v3 = a1;
  *(_OWORD *)lpMem = 0;
  v24 = nullptr;
  v27 = 0;
  if ( sub_1401D0820(a1: a2, a2: &v27) == 0 || v27 > 0x3E80 )
    goto LABEL_35;
  v4 = v27;
  v5 = lpMem[1];
  v6 = (char *)lpMem[1] - (char *)lpMem[0];
  v7 = ((char *)lpMem[1] - (char *)lpMem[0]) >> 4;
  if ( v27 < v7 )
  {
    v5 = (char *)lpMem[0] + 16 * v27;
LABEL_30:
    lpMem[1] = v5;
    goto LABEL_31;
  }
  if ( v27 <= v7 )
    goto LABEL_31;
  v8 = (v24 - (char *)lpMem[0]) >> 4;
  if ( v27 <= v8 )
  {
    v18 = v27 - v7;
    if ( v27 != v7 )
    {
      do
      {
        *v5 = 0;
        v5[1] = 0;
        v5 += 2;
        --v18;
      }
      while ( v18 != 0 );
    }
    goto LABEL_30;
  }
  v9 = v8 >> 1;
  if ( v8 > 0xFFFFFFFFFFFFFFFLL - (v8 >> 1) )
    goto LABEL_43;
  v10 = v9 + v8;
  if ( v9 + v8 >= v27 )
  {
    if ( v10 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_43;
  }
  else
  {
    v10 = v27;
  }
  v11 = 16 * v10;
  if ( v11 != 0 )
  {
    if ( v11 < 0x1000 )
    {
      v12 = sub_1409DB470(a1: v11);
      goto LABEL_18;
    }
    if ( v11 + 39 >= v11 )
    {
      v13 = sub_1409DB470(a1: v11 + 39);
      if ( v13 == 0 )
        goto LABEL_24;
      v14 = (_QWORD *)((v13 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *(v14 - 1) = v13;
      goto LABEL_19;
    }
LABEL_43:
    sub_14001B170();
    JUMPOUT(0x1404B477FLL);
  }
  v12 = 0;
LABEL_18:
  v14 = (_QWORD *)v12;
LABEL_19:
  v15 = (_QWORD *)((char *)v14 + (v6 & 0xFFFFFFFFFFFFFFF0uLL));
  v16 = v4 - v7;
  if ( v4 != v7 )
  {
    do
    {
      *v15 = 0;
      v15[1] = 0;
      v15 += 2;
      --v16;
    }
    while ( v16 != 0 );
  }
  sub_140E82100(a1: v14, a2: lpMem[0], a3: (char *)lpMem[1] - (char *)lpMem[0]);
  if ( lpMem[0] != nullptr )
  {
    if ( ((v24 - (char *)lpMem[0]) & 0xFFFFFFFFFFFFFFF0uLL) < 0x1000 )
    {
      v17 = lpMem[0];
    }
    else
    {
      v17 = *((void **)lpMem[0] - 1);
      if ( (unsigned __int64)((char *)lpMem[0] - (char *)v17 - 8) > 0x1F )
LABEL_24:
        __fastfail(5u);
    }
    sub_1409DB4C0(lpMem: v17);
  }
  lpMem[0] = v14;
  lpMem[1] = &v14[2 * v4];
  v24 = (char *)&v14[v11 / 8];
  v3 = a1;
LABEL_31:
  v19 = 0;
  if ( v27 == 0 )
  {
LABEL_34:
    (*(void (__fastcall **)(_QWORD, LPVOID *))(v3 + 8))(a1: *(_QWORD *)(v3 + 16), a2: lpMem);
    v20 = 1;
    goto LABEL_36;
  }
  while ( 1 )
  {
    v25[0] = (char *)lpMem[0] + 16 * v19 + 12;
    v25[1] = (char *)lpMem[0] + 16 * v19 + 8;
    v25[2] = (char *)lpMem[0] + 16 * v19 + 4;
    v25[3] = (char *)lpMem[0] + 16 * v19;
    if ( (unsigned __int8)sub_1402EA660(a1: a2, a2: v25) == 0 )
      break;
    if ( ++v19 >= v4 )
      goto LABEL_34;
  }
LABEL_35:
  v20 = 0;
LABEL_36:
  if ( lpMem[0] != nullptr )
  {
    if ( ((v24 - (char *)lpMem[0]) & 0xFFFFFFFFFFFFFFF0uLL) < 0x1000 )
    {
      v21 = lpMem[0];
    }
    else
    {
      v21 = *((void **)lpMem[0] - 1);
      if ( (unsigned __int64)((char *)lpMem[0] - (char *)v21 - 8) > 0x1F )
        __fastfail(5u);
    }
    sub_1409DB4C0(lpMem: v21);
  }
  return v20;
}