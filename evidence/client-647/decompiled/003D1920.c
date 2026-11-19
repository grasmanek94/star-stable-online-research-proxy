__int64 __fastcall sub_1403D1920(__int64 a1, _DWORD *a2)
{
  _QWORD *v3; // rsi
  unsigned __int64 v4; // r13
  _QWORD *v5; // rax
  signed __int64 v6; // rbx
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  __int64 v12; // rax
  _QWORD *v13; // rbx
  unsigned __int64 v14; // rcx
  void *v15; // rcx
  unsigned __int64 v16; // rcx
  _DWORD *v17; // rsi
  unsigned __int64 v18; // rdi
  unsigned __int8 v19; // bl
  void *v20; // rcx
  LPVOID lpMem[2]; // [rsp+20h] [rbp-28h] BYREF
  char *v23; // [rsp+30h] [rbp-18h]
  unsigned int v25; // [rsp+98h] [rbp+50h] BYREF
  int v26; // [rsp+A0h] [rbp+58h] BYREF
  __int64 v27; // [rsp+A8h] [rbp+60h] BYREF

  *(_OWORD *)lpMem = 0;
  v3 = nullptr;
  v23 = nullptr;
  v25 = 0;
  if ( sub_1401D0820(a1: a2, a2: &v25) == 0 )
    goto LABEL_34;
  v4 = v25;
  if ( v25 > 0x3E80 )
    goto LABEL_34;
  v5 = lpMem[1];
  v6 = (char *)lpMem[1] - (char *)lpMem[0];
  v7 = ((char *)lpMem[1] - (char *)lpMem[0]) >> 4;
  if ( v25 < v7 )
  {
    v5 = (char *)lpMem[0] + 16 * v25;
LABEL_28:
    lpMem[1] = v5;
    goto LABEL_29;
  }
  if ( v25 <= v7 )
    goto LABEL_29;
  v8 = (v23 - (char *)lpMem[0]) >> 4;
  if ( v25 <= v8 )
  {
    v16 = v25 - v7;
    if ( v25 != v7 )
    {
      do
      {
        *v5 = 0;
        v5[1] = 0;
        v5 += 2;
        --v16;
      }
      while ( v16 != 0 );
    }
    goto LABEL_28;
  }
  v9 = v8 >> 1;
  if ( v8 > 0xFFFFFFFFFFFFFFFLL - (v8 >> 1) )
    goto LABEL_42;
  v10 = v9 + v8;
  if ( v9 + v8 >= v25 )
  {
    if ( v10 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_42;
  }
  else
  {
    v10 = v25;
  }
  v11 = 16 * v10;
  if ( v11 != 0 )
  {
    if ( v11 >= 0x1000 )
    {
      if ( v11 + 39 >= v11 )
      {
        v12 = sub_1409DB470(a1: v11 + 39);
        if ( v12 == 0 )
          goto LABEL_22;
        v3 = (_QWORD *)((v12 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *(v3 - 1) = v12;
        goto LABEL_17;
      }
LABEL_42:
      sub_14001B170();
      JUMPOUT(0x1403D1BCELL);
    }
    v3 = (_QWORD *)sub_1409DB470(a1: v11);
  }
LABEL_17:
  v13 = (_QWORD *)((char *)v3 + (v6 & 0xFFFFFFFFFFFFFFF0uLL));
  v14 = v4 - v7;
  if ( v4 != v7 )
  {
    do
    {
      *v13 = 0;
      v13[1] = 0;
      v13 += 2;
      --v14;
    }
    while ( v14 != 0 );
  }
  sub_140E82100(a1: v3, a2: lpMem[0], a3: (char *)lpMem[1] - (char *)lpMem[0]);
  if ( lpMem[0] != nullptr )
  {
    if ( ((v23 - (char *)lpMem[0]) & 0xFFFFFFFFFFFFFFF0uLL) < 0x1000 )
    {
      v15 = lpMem[0];
    }
    else
    {
      v15 = *((void **)lpMem[0] - 1);
      if ( (unsigned __int64)((char *)lpMem[0] - (char *)v15 - 8) > 0x1F )
LABEL_22:
        __fastfail(5u);
    }
    sub_1409DB4C0(lpMem: v15);
  }
  lpMem[0] = v3;
  lpMem[1] = &v3[2 * v4];
  v23 = (char *)&v3[v11 / 8];
LABEL_29:
  v17 = lpMem[0];
  v18 = 0;
  if ( (_DWORD)v4 == 0 )
  {
LABEL_33:
    (*(void (__fastcall **)(__int64, LPVOID *))(a1 + 8))(a1: a1 + 16, a2: lpMem);
    v19 = 1;
    goto LABEL_35;
  }
  while ( 1 )
  {
    v26 = v17[4 * v18];
    if ( sub_1401D0820(a1: a2, a2: &v26) == 0 )
      break;
    v17[4 * v18] = v26;
    v27 = *(_QWORD *)&v17[4 * v18 + 2];
    if ( (unsigned __int8)sub_1402AF380(a1: a2, a2: &v27) == 0 )
      break;
    *(_QWORD *)&v17[4 * v18++ + 2] = v27;
    if ( v18 >= v4 )
      goto LABEL_33;
  }
LABEL_34:
  v19 = 0;
LABEL_35:
  if ( lpMem[0] != nullptr )
  {
    if ( ((v23 - (char *)lpMem[0]) & 0xFFFFFFFFFFFFFFF0uLL) < 0x1000 )
    {
      v20 = lpMem[0];
    }
    else
    {
      v20 = *((void **)lpMem[0] - 1);
      if ( (unsigned __int64)((char *)lpMem[0] - (char *)v20 - 8) > 0x1F )
        __fastfail(5u);
    }
    sub_1409DB4C0(lpMem: v20);
  }
  return v19;
}