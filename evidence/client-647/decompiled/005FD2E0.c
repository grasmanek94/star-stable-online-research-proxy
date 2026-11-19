__int64 __fastcall sub_1405FD2E0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdi
  __int64 v7; // r14
  __int64 v8; // r12
  _QWORD *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 *v14; // r12
  __int64 *v15; // rbx
  __int64 *v16; // rbp
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // rsi
  LPVOID *v19; // r14
  _QWORD *v20; // rcx
  LPVOID *v21; // rdx
  unsigned __int64 v22; // rdi
  int v23; // eax
  char v24; // al
  __int64 v25; // rdx
  _QWORD *v26; // rdx
  unsigned __int64 v27; // rbx
  LPVOID *v28; // rcx
  int v29; // eax
  char v30; // al
  LPVOID lpMem[2]; // [rsp+28h] [rbp-60h] BYREF
  unsigned __int64 v34; // [rsp+38h] [rbp-50h]
  unsigned __int64 v35; // [rsp+40h] [rbp-48h]

  v6 = 0;
  v7 = a1[32];
  if ( (a1[33] - v7) / 48 != 0 )
  {
    v8 = a1[33];
    while ( 1 )
    {
      if ( (unsigned int)v6 >= (unsigned __int64)((v8 - v7) / 48) )
        goto LABEL_49;
      v9 = (_QWORD *)(v7 + 48 * v6);
      v10 = sub_140E82CD0(a1: a3);
      v11 = v9[2];
      v12 = v9[3] <= 0xFu ? v7 + 48 * v6 : *v9;
      if ( v11 == v10 && (v11 == 0 || (unsigned int)sub_140E82B50(a1: v12, a2: a3) == 0) )
        break;
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= (unsigned __int64)((v8 - v7) / 48) )
        goto LABEL_11;
    }
    v25 = (__int64)(v9 + 4);
    goto LABEL_51;
  }
LABEL_11:
  *(_OWORD *)lpMem = 0;
  v34 = 0;
  v35 = 0;
  v13 = sub_140E82CD0(a1: a3);
  sub_14000D7F0(a1: lpMem, a2: a3, a3: v13);
  v14 = (__int64 *)a1[30];
  v15 = (__int64 *)v14[1];
  v16 = v14;
  v17 = v35;
  v18 = v34;
  v19 = (LPVOID *)lpMem[0];
  while ( *((_BYTE *)v15 + 25) == 0 )
  {
    v20 = v15 + 4;
    v21 = lpMem;
    if ( v17 > 0xF )
      v21 = v19;
    v22 = v15[6];
    if ( (unsigned __int64)v15[7] > 0xF )
      v20 = (_QWORD *)*v20;
    v23 = sub_140E82B50(a1: v20, a2: v21);
    if ( v23 != 0 )
    {
      if ( v23 >= 0 )
        v24 = 1;
      else
        v24 = -1;
    }
    else if ( v22 >= v18 )
    {
      if ( v22 <= v18 )
        goto LABEL_26;
      v24 = 1;
    }
    else
    {
      v24 = -1;
    }
    if ( v24 >= 0 )
    {
LABEL_26:
      v16 = v15;
      v15 = (__int64 *)*v15;
      continue;
    }
    v15 = (__int64 *)v15[2];
  }
  if ( *((_BYTE *)v16 + 25) != 0 )
    goto LABEL_41;
  v26 = v16 + 4;
  v27 = v16[6];
  if ( (unsigned __int64)v16[7] > 0xF )
    v26 = (_QWORD *)*v26;
  v28 = lpMem;
  if ( v17 > 0xF )
    v28 = v19;
  v29 = sub_140E82B50(a1: v28, a2: v26);
  if ( v29 != 0 )
  {
    v30 = v29 >= 0 ? 1 : -1;
  }
  else if ( v18 >= v27 )
  {
    if ( v18 <= v27 )
      goto LABEL_42;
    v30 = 1;
  }
  else
  {
    v30 = -1;
  }
  if ( v30 < 0 )
LABEL_41:
    v16 = v14;
LABEL_42:
  if ( v17 > 0xF )
  {
    if ( v17 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)((char *)v19 - (_BYTE *)*(v19 - 1) - 8) > 0x1F )
LABEL_49:
        __fastfail(5u);
      v19 = (LPVOID *)*(v19 - 1);
    }
    sub_1409DB4C0(lpMem: v19);
  }
  if ( v16 != (__int64 *)a1[30] )
  {
    v25 = (__int64)(v16 + 8);
LABEL_51:
    sub_1405F1D40(a1: a2, a2: v25);
    return a2;
  }
  *(_QWORD *)a2 = &PXEngine::SafeActorPtr::`vftable';
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 12) = 195948557;
  return a2;
}