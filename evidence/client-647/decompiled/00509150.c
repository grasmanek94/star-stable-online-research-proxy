char __fastcall sub_140509150(__int64 a1)
{
  int *v2; // r12
  int *v3; // rax
  char *v5; // rcx
  char *v6; // rdi
  char v7; // dl
  __int64 v8; // r8
  int v9; // ebx
  char v10; // r13
  signed __int64 v11; // r15
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // r14
  _QWORD *v17; // rsi
  __int64 v18; // rax
  unsigned __int64 v19; // r15
  char *v20; // rdx
  char *v21; // rcx
  char *v22; // r8
  void *v23; // rax
  _BYTE *v24; // rcx
  _BYTE *v25; // rdx
  int v26; // r14d
  unsigned __int64 v27; // rsi
  _DWORD *v28; // rdi
  __int64 v29; // rbx
  __int64 v30; // rdx
  char (__fastcall *v31)(__int64, __int64, __int64); // r9
  char v32; // bl
  void *v33; // r8
  LPVOID lpMem[2]; // [rsp+20h] [rbp-69h] BYREF
  char *v35; // [rsp+30h] [rbp-59h]
  _QWORD v36[3]; // [rsp+38h] [rbp-51h] BYREF
  int v37; // [rsp+50h] [rbp-39h]
  __int16 v38; // [rsp+58h] [rbp-31h]
  _BYTE v39[32]; // [rsp+60h] [rbp-29h] BYREF
  __int16 v40; // [rsp+80h] [rbp-9h] BYREF
  char v41[32]; // [rsp+88h] [rbp-1h] BYREF
  char v42; // [rsp+A8h] [rbp+1Fh]
  __int64 v43; // [rsp+F0h] [rbp+67h] BYREF
  unsigned __int64 v44; // [rsp+F8h] [rbp+6Fh]
  int *v45; // [rsp+100h] [rbp+77h]

  v43 = a1;
  if ( (unsigned __int8)sub_140503750(a1: a1 + 216) == 0 )
    return 0;
  v2 = *(int **)(a1 + 704);
  v3 = *(int **)(a1 + 712);
  v45 = v3;
  if ( v2 == v3 )
    return 0;
  if ( *(_BYTE *)(a1 + 241) != 0 )
    return 1;
  *(_OWORD *)lpMem = 0;
  v5 = nullptr;
  v35 = nullptr;
  v6 = nullptr;
  v7 = HIBYTE(v43);
  v8 = *(unsigned __int16 *)((char *)&v43 + 5);
  do
  {
    v9 = *v2;
    v10 = *((_BYTE *)v2 + 4);
    if ( v6 == v5 )
    {
      v11 = v6 - (char *)lpMem[0];
      v12 = (v6 - (char *)lpMem[0]) >> 3;
      if ( v12 == 0x1FFFFFFFFFFFFFFFLL )
        sub_14001B6A0(a1: v5, a2: 0x1FFFFFFFFFFFFFFFLL, a3: v8, a4: 0x1FFFFFFFFFFFFFFFLL);
      v13 = (v5 - (char *)lpMem[0]) >> 3;
      v14 = v13 >> 1;
      if ( v13 > 0x1FFFFFFFFFFFFFFFLL - (v13 >> 1) )
        goto LABEL_55;
      v44 = ++v12;
      v15 = v12;
      if ( v14 + v13 >= v12 )
        v15 = v14 + v13;
      if ( v15 > 0x1FFFFFFFFFFFFFFFLL )
      {
LABEL_55:
        sub_14001B170(a1: v13, a2: v12, a3: v14, a4: 0x1FFFFFFFFFFFFFFFLL);
        JUMPOUT(0x14050959ALL);
      }
      v16 = 8 * v15;
      if ( v16 != 0 )
      {
        if ( v16 < 0x1000 )
        {
          v17 = (_QWORD *)sub_1409DB470(a1: v16);
        }
        else
        {
          v13 = v16 + 39;
          if ( v16 + 39 < v16 )
            goto LABEL_55;
          v18 = sub_1409DB470(a1: v13);
          if ( v18 == 0 )
LABEL_41:
            __fastfail(5u);
          v17 = (_QWORD *)((v18 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
          *(v17 - 1) = v18;
        }
      }
      else
      {
        v17 = nullptr;
      }
      v19 = v11 & 0xFFFFFFFFFFFFFFF8uLL;
      *(_DWORD *)((char *)v17 + v19) = v9;
      *((_BYTE *)v17 + v19 + 4) = v10;
      *(_WORD *)((char *)v17 + v19 + 5) = *(_WORD *)((char *)&v43 + 5);
      *((_BYTE *)v17 + v19 + 7) = HIBYTE(v43);
      v20 = (char *)lpMem[0];
      v21 = (char *)v17;
      if ( v6 == lpMem[1] )
      {
        v22 = (char *)((char *)lpMem[1] - (char *)lpMem[0]);
      }
      else
      {
        sub_140E82100(a1: v17, a2: lpMem[0], a3: v6 - (char *)lpMem[0]);
        v22 = (char *)((char *)lpMem[1] - (char *)v6);
        v21 = (char *)v17 + v19 + 8;
        v20 = v6;
      }
      sub_140E82100(a1: v21, a2: v20, a3: v22);
      if ( lpMem[0] != nullptr )
      {
        if ( (unsigned __int64)(8 * ((v35 - (char *)lpMem[0]) >> 3)) < 0x1000 )
        {
          v23 = lpMem[0];
        }
        else
        {
          v23 = *((void **)lpMem[0] - 1);
          if ( (unsigned __int64)((char *)lpMem[0] - (char *)v23 - 8) > 0x1F )
            goto LABEL_41;
        }
        sub_1409DB4C0(lpMem: v23);
      }
      lpMem[0] = v17;
      v6 = (char *)&v17[v44];
      v5 = (char *)&v17[v16 / 8];
      v35 = (char *)&v17[v16 / 8];
      v3 = v45;
      v7 = HIBYTE(v43);
      v8 = *(unsigned __int16 *)((char *)&v43 + 5);
    }
    else
    {
      *(_DWORD *)v6 = v9;
      v6[4] = v10;
      *(_WORD *)(v6 + 5) = v8;
      v6[7] = v7;
      v6 = (char *)lpMem[1] + 8;
      v5 = v35;
    }
    lpMem[1] = v6;
    v2 += 2;
  }
  while ( v2 != v3 );
  v36[1] = 0;
  v36[2] = 0;
  v37 = 0;
  v36[0] = &PXEngine::ByteStreamWriter::`vftable';
  sub_140A25890(a1: v36, a2: v43 + 224, a3: 1);
  v24 = lpMem[1];
  v25 = lpMem[0];
  if ( (LPVOID)((char *)lpMem[1] - (char *)lpMem[0]) >= (LPVOID)0x7FFFFFFF8LL )
  {
    if ( (unsigned __int8)sub_140059CA0(a1: off_140FB8F50) != 0 )
      __debugbreak();
    v24 = lpMem[1];
    v25 = lpMem[0];
  }
  LODWORD(v43) = (v24 - v25) >> 3;
  if ( sub_1401D0820(a1: v36, a2: &v43) != 0 )
  {
    v26 = v43;
    if ( (unsigned int)v43 <= 0x3E80 )
    {
      v27 = (unsigned int)v43;
      sub_140500010(a1: lpMem, a2: (unsigned int)v43, a3: &v43);
      v28 = lpMem[0];
      v29 = 0;
      if ( v26 == 0 )
      {
LABEL_44:
        v38 = word_141314148;
        sub_140A255B0(a1: v39, a2: v36);
        v40 = v38;
        sub_140A255B0(a1: v41, a2: v39);
        v42 = 1;
        sub_140A25690(a1: v39);
        goto LABEL_46;
      }
      while ( 1 )
      {
        LODWORD(v43) = v28[2 * v29];
        if ( sub_1401D0820(a1: v36, a2: &v43) == 0 )
          break;
        v30 = (__int64)&v28[2 * v29 + 1];
        v28[2 * v29] = v43;
        v31 = *(char (__fastcall **)(__int64, __int64, __int64))(v36[0] + 16LL);
        if ( v31 == sub_1401F6C10 )
        {
          sub_140A25890(a1: v36, a2: v30, a3: 1);
        }
        else if ( v31(a1: (__int64)v36, a2: v30, a3: 1) == 0 )
        {
          break;
        }
        if ( ++v29 >= v27 )
          goto LABEL_44;
      }
    }
  }
  v42 = 0;
LABEL_46:
  sub_140A25690(a1: v36);
  v32 = sub_1407EE6B0(a1: &v40);
  if ( lpMem[0] == nullptr )
    return v32;
  if ( (unsigned __int64)(8 * ((v35 - (char *)lpMem[0]) >> 3)) < 0x1000 )
  {
    sub_1409DB4C0(lpMem: lpMem[0]);
    return v32;
  }
  v33 = *((void **)lpMem[0] - 1);
  if ( (unsigned __int64)((char *)lpMem[0] - (char *)v33 - 8) > 0x1F )
    __fastfail(5u);
  sub_1409DB4C0(lpMem: v33);
  return v32;
}