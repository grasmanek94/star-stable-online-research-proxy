unsigned __int64 *__fastcall sub_14047D760(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int8 v3; // r12
  __int64 v5; // r13
  __int64 *v6; // rcx
  __int64 *v7; // rax
  _BYTE *v8; // r14
  _BYTE *v9; // rcx
  _BYTE *v10; // r15
  _BYTE *v11; // rax
  _BYTE *v12; // r8
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rsi
  __int64 v18; // rax
  _BYTE *v19; // r8
  _BYTE *v20; // rdx
  _BYTE *v21; // rcx
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rax
  void *v24; // rcx
  _BYTE *v26; // [rsp+70h] [rbp+8h]
  __int64 i; // [rsp+88h] [rbp+20h]

  v3 = a3;
  *a2 = 0;
  a2[1] = 0;
  a2[2] = 0;
  v5 = *(_QWORD *)(a1 + 152);
  for ( i = *(_QWORD *)(a1 + 160); v5 != i; v5 += 72 )
  {
    v6 = *(__int64 **)(v5 + 48);
    v7 = (__int64 *)v6[1];
    while ( *((_BYTE *)v7 + 25) == 0 )
    {
      if ( *((_BYTE *)v7 + 26) >= v3 )
      {
        v6 = v7;
        v7 = (__int64 *)*v7;
      }
      else
      {
        v7 = (__int64 *)v7[2];
      }
    }
    if ( *((_BYTE *)v6 + 25) == 0 && v3 >= *((_BYTE *)v6 + 26) )
    {
      v8 = (_BYTE *)a2[1];
      v9 = (_BYTE *)a2[2];
      if ( v8 == v9 )
      {
        v10 = (_BYTE *)*a2;
        v11 = &v8[-*a2];
        if ( v11 == (_BYTE *)0x7FFFFFFFFFFFFFFFLL )
          sub_14001B6A0(a1: v9, a2, a3, a4: 0x7FFFFFFFFFFFFFFFLL);
        v12 = v11 + 1;
        v26 = v11 + 1;
        v13 = v9 - v10;
        v14 = v13 >> 1;
        if ( v13 > 0x7FFFFFFFFFFFFFFFLL - (v13 >> 1) )
        {
          v15 = 0x7FFFFFFFFFFFFFFFLL;
          v16 = 0x8000000000000026uLL;
          goto LABEL_20;
        }
        v15 = (unsigned __int64)(v11 + 1);
        if ( v14 + v13 >= (unsigned __int64)v12 )
          v15 = v14 + v13;
        if ( v15 != 0 )
        {
          if ( v15 < 0x1000 )
          {
            v17 = sub_1409DB470(a1: v15);
          }
          else
          {
            v16 = v15 + 39;
            if ( v15 + 39 < v15 )
            {
              sub_14001B170(a1: v16, a2: v14, a3: v12, a4: 0x7FFFFFFFFFFFFFFFLL);
              __debugbreak();
            }
LABEL_20:
            v18 = sub_1409DB470(a1: v16);
            if ( v18 == 0 )
              goto LABEL_35;
            v17 = (v18 + 39) & 0xFFFFFFFFFFFFFFE0uLL;
            *(_QWORD *)(v17 - 8) = v18;
          }
        }
        else
        {
          v17 = 0;
        }
        *(_BYTE *)(v17 + v8 - v10) = *(_BYTE *)(v5 + 8);
        v19 = (_BYTE *)a2[1];
        v20 = (_BYTE *)*a2;
        v21 = (_BYTE *)v17;
        if ( v8 == v19 )
        {
          v22 = v19 - v20;
        }
        else
        {
          sub_140E82100(a1: v17, a2: v20, a3: v8 - v20);
          v21 = (_BYTE *)(v17 + v8 - v10 + 1);
          v22 = a2[1] - (_QWORD)v8;
          v20 = v8;
        }
        sub_140E82100(a1: v21, a2: v20, a3: v22);
        v23 = *a2;
        if ( *a2 != 0 )
        {
          if ( a2[2] - v23 < 0x1000 )
          {
            v24 = (void *)*a2;
          }
          else
          {
            v24 = *(void **)(v23 - 8);
            if ( v23 - (unsigned __int64)v24 - 8 > 0x1F )
LABEL_35:
              __fastfail(5u);
          }
          sub_1409DB4C0(lpMem: v24);
        }
        *a2 = v17;
        a2[1] = (unsigned __int64)&v26[v17];
        a2[2] = v15 + v17;
        continue;
      }
      *v8 = *(_BYTE *)(v5 + 8);
      ++a2[1];
    }
  }
  return a2;
}