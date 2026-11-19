char __fastcall sub_140346D30(_DWORD *a1, _QWORD *a2)
{
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // rbp
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r14
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rsi
  __int64 v14; // rax
  unsigned __int64 v15; // rbp
  __int64 v16; // rsi
  unsigned __int64 v17; // rbx
  unsigned int v19; // [rsp+58h] [rbp+10h] BYREF

  if ( a2[1] - *a2 >= 0x3FFFFFFFCuLL && (unsigned __int8)sub_140059CA0(a1: off_140F78D98) != 0 )
    __debugbreak();
  v19 = (__int64)(a2[1] - *a2) >> 2;
  if ( sub_1401D0820(a1, a2: &v19) == 0 || v19 > 0x3E80 )
    return 0;
  v4 = a2[1];
  v5 = *a2;
  v6 = v4 - *a2;
  v7 = v19;
  v8 = v6 >> 2;
  if ( v19 < (unsigned __int64)(v6 >> 2) )
  {
    v9 = v5 + 4LL * v19;
LABEL_26:
    a2[1] = v9;
    goto LABEL_27;
  }
  if ( v19 <= v8 )
    goto LABEL_27;
  v10 = (a2[2] - v5) >> 2;
  if ( v19 <= v10 )
  {
    v9 = sub_140349280(a1: v4, a2: v19 - v8, a3: a2);
    goto LABEL_26;
  }
  v11 = v10 >> 1;
  if ( v10 > 0x3FFFFFFFFFFFFFFFLL - (v10 >> 1) )
    goto LABEL_34;
  v12 = v11 + v10;
  if ( v11 + v10 >= v19 )
  {
    if ( v12 > 0x3FFFFFFFFFFFFFFFLL )
      goto LABEL_34;
  }
  else
  {
    v12 = v19;
  }
  v10 = 4 * v12;
  if ( 4 * v12 != 0 )
  {
    if ( v10 < 0x1000 )
    {
      v13 = sub_1409DB470(a1: v10);
      goto LABEL_22;
    }
    if ( v10 + 39 >= v10 )
    {
      v14 = sub_1409DB470(a1: v10 + 39);
      if ( v14 == 0 )
        __fastfail(5u);
      v13 = (v14 + 39) & 0xFFFFFFFFFFFFFFE0uLL;
      *(_QWORD *)(v13 - 8) = v14;
      goto LABEL_22;
    }
LABEL_34:
    sub_14001B170(a1: v10, a2: v11, a3: 0x3FFFFFFFFFFFFFFFLL, a4: v4);
    JUMPOUT(0x140346F3DLL);
  }
  v13 = 0;
LABEL_22:
  v15 = v13 + (v6 & 0xFFFFFFFFFFFFFFFCuLL);
  if ( v7 != v8 )
    sub_140E827B0(a1: v15, a2: 0xFFFFFFFFLL, a3: 4 * (v7 - v8));
  sub_140E82100(a1: v13, a2: *a2, a3: a2[1] - *a2);
  sub_14004BDF0(a1: a2, a2: v13, a3: v7, a4: v12);
LABEL_27:
  v16 = *a2;
  v17 = 0;
  if ( v19 == 0 )
    return 1;
  while ( 1 )
  {
    v19 = *(_DWORD *)(v16 + 4 * v17);
    if ( sub_1401D0820(a1, a2: &v19) == 0 )
      break;
    *(_DWORD *)(v16 + 4 * v17++) = v19;
    if ( v17 >= v7 )
      return 1;
  }
  return 0;
}