__int64 *__fastcall sub_1400603F0(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdi
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 i; // rdi
  const char *v14; // rdi
  __int64 v15; // r8
  unsigned __int64 v16; // rcx
  __int64 v17; // r14
  __int64 v18; // rax
  char *v19; // rdx
  unsigned __int8 v21; // [rsp+80h] [rbp+8h]

  v21 = (unsigned __int8)a1;
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  v6 = a2[1] - *a2;
  if ( (unsigned __int64)v6 < 0x20 )
  {
    v9 = 0;
    goto LABEL_15;
  }
  v7 = v6 >> 5;
  if ( v7 > 0x7FFFFFFFFFFFFFFLL )
    goto LABEL_36;
  v8 = 32 * v7;
  if ( v8 != 0 )
  {
    if ( v8 < 0x1000 )
    {
      v9 = sub_1409DB470(a1: v8);
      goto LABEL_11;
    }
    v10 = v8 + 39;
    if ( v8 + 39 >= v8 )
    {
      v11 = sub_1409DB470(a1: v10);
      if ( v11 == 0 )
        __fastfail(5u);
      v9 = (v11 + 39) & 0xFFFFFFFFFFFFFFE0uLL;
      *(_QWORD *)(v9 - 8) = v11;
      goto LABEL_11;
    }
    sub_14001B170(a1: v10, a2, a3, a4);
LABEL_36:
    sub_14001B6A0(a1, a2, a3, a4);
  }
  v9 = 0;
LABEL_11:
  *a1 = v9;
  a1[1] = v9;
  a1[2] = v8 + v9;
  v12 = a2[1];
  for ( i = *a2; i != v12; i += 32 )
  {
    sub_140016F80(a1: v9, a2: i);
    v9 += 32LL;
  }
  a1[1] = v9;
LABEL_15:
  v14 = (const char *)*a1;
  if ( *a1 != v9 )
  {
    if ( (__int64)(v9 - (_QWORD)v14) >> 5 == 0 )
      __fastfail(5u);
    v15 = *((_QWORD *)v14 + 2);
    v16 = *((_QWORD *)v14 + 3);
    if ( v16 - v15 < 5 )
    {
      sub_1400126B0(a1: (_DWORD)v14, a2: 5, a3: v21, a4: 0, a5: (__int64)"-exe=", a6: 5);
    }
    else
    {
      *((_QWORD *)v14 + 2) = v15 + 5;
      if ( v16 > 0xF )
        v14 = *(const char **)v14;
      if ( "" <= v14 || "-exe=" > &v14[v15] )
      {
        v17 = 5;
      }
      else if ( v14 > "-exe=" )
      {
        v17 = v14 - "-exe=";
      }
      else
      {
        v17 = 0;
      }
      sub_140E82100(a1: v14 + 5, a2: v14, a3: v15 + 1);
      sub_140E82100(a1: v14, a2: "-exe=", a3: v17);
      sub_140E82100(a1: &v14[v17], a2: &aExe[v17 + 5], a3: 5 - v17);
    }
    if ( (unsigned __int8)sub_140060730(a1, a2: (__int64)"uri") != 0
      && (unsigned __int8)sub_140060730(a1, a2: (__int64)"uriname") == 0 )
    {
      v18 = sub_140060BB0(a1, a2: "uri");
      v19 = &byte_140EEC5C5;
      if ( v18 != 0 )
        v19 = (char *)v18;
      sub_140061090(a1, a2: v19);
    }
  }
  return a1;
}