char __fastcall sub_1408292E0(_DWORD *a1, _QWORD *a2)
{
  __int64 v4; // r9
  unsigned __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // r13
  unsigned __int64 v9; // rbp
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r12
  __int64 v14; // rbx
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  __int64 v17; // rsi
  unsigned __int64 v18; // rbx
  unsigned __int64 v20; // [rsp+58h] [rbp+10h] BYREF

  if ( a2[1] - *a2 >= 0x7FFFFFFF8uLL && (unsigned __int8)sub_140059CA0(a1: off_141025A40) != 0 )
    __debugbreak();
  LODWORD(v20) = (__int64)(a2[1] - *a2) >> 3;
  if ( sub_1401D0820(a1, a2: &v20) == 0 )
    return 0;
  v5 = (unsigned int)v20;
  if ( (unsigned int)v20 > 0x3E80 )
    return 0;
  v6 = *a2;
  v7 = a2[1];
  v8 = v7 - *a2;
  v9 = v8 >> 3;
  if ( (unsigned int)v20 >= (unsigned __int64)(v8 >> 3) )
  {
    if ( (unsigned int)v20 <= v9 )
      goto LABEL_25;
    v11 = (a2[2] - v6) >> 3;
    if ( (unsigned int)v20 <= v11 )
    {
      v16 = 8 * ((unsigned int)v20 - v9);
      sub_140E827B0(a1: v7, a2: 0, a3: v16);
      v10 = v16 + v7;
      goto LABEL_24;
    }
    v12 = v11 >> 1;
    if ( v11 <= 0x1FFFFFFFFFFFFFFFLL - (v11 >> 1) )
    {
      v13 = v12 + v11;
      if ( v12 + v11 >= (unsigned int)v20 )
      {
        if ( v13 > 0x1FFFFFFFFFFFFFFFLL )
          goto LABEL_37;
      }
      else
      {
        v13 = (unsigned int)v20;
      }
      v11 = 8 * v13;
      if ( 8 * v13 == 0 )
      {
        v14 = 0;
LABEL_22:
        sub_140E827B0(a1: v14 + (v8 & 0xFFFFFFFFFFFFFFF8uLL), a2: 0, a3: 8 * (v5 - v9));
        sub_140E82100(a1: v14, a2: *a2, a3: a2[1] - *a2);
        sub_1401B6F70(a1: a2, a2: v14, a3: v5, a4: v13);
        goto LABEL_25;
      }
      if ( v11 < 0x1000 )
      {
        v14 = sub_1409DB470(a1: v11);
        goto LABEL_22;
      }
      if ( v11 + 39 >= v11 )
      {
        v15 = sub_1409DB470(a1: v11 + 39);
        if ( v15 == 0 )
          __fastfail(5u);
        v14 = (v15 + 39) & 0xFFFFFFFFFFFFFFE0uLL;
        *(_QWORD *)(v14 - 8) = v15;
        goto LABEL_22;
      }
    }
LABEL_37:
    sub_14001B170(a1: v11, a2: v12, a3: 0x1FFFFFFFFFFFFFFFLL, a4: v4);
    JUMPOUT(0x14082954ALL);
  }
  v10 = v6 + 8LL * (unsigned int)v20;
LABEL_24:
  a2[1] = v10;
LABEL_25:
  v17 = *a2;
  v18 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1) == 0 )
  {
    if ( (_DWORD)v5 != 0 )
    {
      while ( 1 )
      {
        v20 = *(_QWORD *)(v17 + 8 * v18);
        if ( sub_1402AF380(a1, a2: &v20) == 0 )
          break;
        if ( ++v18 >= v5 )
          return 1;
      }
      return 0;
    }
    return 1;
  }
  if ( (_DWORD)v5 == 0 )
    return 1;
  while ( 1 )
  {
    v20 = 0;
    if ( sub_1402AF380(a1, a2: &v20) == 0 )
      break;
    *(_QWORD *)(v17 + 8 * v18++) = v20;
    if ( v18 >= v5 )
      return 1;
  }
  return 0;
}