__int64 __fastcall sub_1407A9470(__int64 a1, unsigned __int16 *a2)
{
  char v4; // al
  char *v5; // rdi
  char *v6; // rbx
  __int64 v7; // rax
  unsigned __int8 v8; // bl
  char *v10; // rsi
  char *v11; // rdi
  char *v12; // rcx
  char *v13; // rbx
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  void *v16; // r8
  _BYTE *v17; // rcx
  __int64 v18; // r12
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 v25; // r14
  LPVOID *v26; // r13
  _QWORD *v27; // rsi
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rax
  __int64 v32; // rax
  int v33; // eax
  unsigned __int8 v34; // cl
  _QWORD *v35; // rdx
  unsigned __int64 v36; // rax
  void *v37; // rcx
  LPVOID lpMem[2]; // [rsp+20h] [rbp-59h] BYREF
  _BYTE *v39; // [rsp+30h] [rbp-49h]
  unsigned __int16 *v40; // [rsp+38h] [rbp-41h]
  __int64 v41; // [rsp+40h] [rbp-39h]
  __int128 v42; // [rsp+48h] [rbp-31h] BYREF
  unsigned __int64 v43; // [rsp+58h] [rbp-21h]
  __int64 v44; // [rsp+60h] [rbp-19h]
  unsigned __int8 v45; // [rsp+68h] [rbp-11h]
  LPVOID v46[2]; // [rsp+70h] [rbp-9h] BYREF
  unsigned __int64 v47; // [rsp+80h] [rbp+7h]
  unsigned __int64 v48; // [rsp+88h] [rbp+Fh]

  v40 = a2;
  v41 = a1;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  *(_OWORD *)lpMem = 0;
  v39 = nullptr;
  if ( v4 == 0 )
  {
    v10 = (char *)sub_1409DB470(a1: 600);
    v11 = (char *)lpMem[1];
    v12 = v10;
    v13 = (char *)lpMem[0];
    if ( lpMem[0] != lpMem[1] )
    {
      do
      {
        *(_OWORD *)v12 = 0;
        *((_QWORD *)v12 + 2) = 0;
        *((_QWORD *)v12 + 3) = 0;
        *(_OWORD *)v12 = *(_OWORD *)v13;
        *((_OWORD *)v12 + 1) = *((_OWORD *)v13 + 1);
        *((_QWORD *)v13 + 2) = 0;
        *((_QWORD *)v13 + 3) = 15;
        *v13 = 0;
        v12[32] = v13[32];
        v12 += 40;
        v13 += 40;
      }
      while ( v13 != v11 );
      v11 = (char *)lpMem[1];
      v13 = (char *)lpMem[0];
    }
    if ( v13 != nullptr )
    {
      if ( v13 != v11 )
      {
        do
        {
          v14 = *((_QWORD *)v13 + 3);
          if ( v14 > 0xF )
          {
            v15 = *(_QWORD *)v13;
            if ( v14 + 1 < 0x1000 )
            {
              v16 = *(void **)v13;
            }
            else
            {
              v16 = *(void **)(v15 - 8);
              if ( (unsigned __int64)(v15 - (_QWORD)v16 - 8) > 0x1F )
                goto LABEL_63;
            }
            sub_1409DB4C0(lpMem: v16);
          }
          *(_QWORD *)v13 = 19937;
          *((_QWORD *)v13 + 2) = 0;
          *((_QWORD *)v13 + 3) = 31;
          v13 += 40;
        }
        while ( v13 != v11 );
        v13 = (char *)lpMem[0];
      }
      if ( (unsigned __int64)(40 * ((v39 - v13) / 40)) < 0x1000 )
      {
        v17 = v13;
      }
      else
      {
        v17 = *((_BYTE **)v13 - 1);
        if ( (unsigned __int64)(v13 - v17 - 8) > 0x1F )
LABEL_63:
          __fastfail(5u);
      }
      sub_1409DB4C0(lpMem: v17);
    }
    lpMem[0] = v10;
    lpMem[1] = v10;
    v39 = v10 + 600;
    v18 = 0;
    while ( 1 )
    {
      v19 = sub_1407FEC10(a1: v18);
      *(_OWORD *)v46 = 0;
      v47 = 0;
      v48 = 0;
      v20 = sub_140E82CD0(a1: v19);
      sub_14000D7F0(a1: v46, a2: v19, a3: v20);
      v42 = 0;
      v43 = 0;
      v44 = 0;
      v25 = v47;
      v26 = v46;
      v27 = v46[0];
      if ( v48 > 0xF )
        v26 = (LPVOID *)v46[0];
      if ( v47 > 0x7FFFFFFFFFFFFFFFLL )
        sub_14001B680(a1: v22, a2: v21);
      if ( v47 > 0xF )
        break;
      v43 = v47;
      v28 = 15;
      v44 = 15;
      v42 = *(_OWORD *)v26;
      v29 = v42;
LABEL_46:
      v33 = *v40;
      v34 = _bittest(&v33, (unsigned __int8)v18);
      v45 = v34;
      v35 = lpMem[1];
      if ( lpMem[1] == v39 )
      {
        sub_1407ABD40(a1: lpMem, a2: lpMem[1], a3: &v42);
        v36 = v44;
      }
      else
      {
        *(_QWORD *)lpMem[1] = v29;
        v35[1] = *((_QWORD *)&v42 + 1);
        v35[2] = v25;
        v35[3] = v28;
        v36 = 15;
        LOBYTE(v42) = 0;
        *((_BYTE *)v35 + 32) = v34;
        lpMem[1] = (char *)lpMem[1] + 40;
      }
      if ( v36 > 0xF )
      {
        v37 = (void *)v42;
        if ( v36 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v42 - *(_QWORD *)(v42 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v37 = *(void **)(v42 - 8);
        }
        sub_1409DB4C0(lpMem: v37);
      }
      if ( v48 > 0xF )
      {
        if ( v48 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)v27 - *(v27 - 1) - 8 > 0x1F )
            goto LABEL_63;
          v27 = (_QWORD *)*(v27 - 1);
        }
        sub_1409DB4C0(lpMem: v27);
      }
      if ( (unsigned __int64)++v18 >= 0xF )
      {
        v8 = sub_1407A6A60(a1: v41, a2: lpMem);
        goto LABEL_9;
      }
    }
    v28 = v47 | 0xF;
    if ( (v47 | 0xF) > 0x7FFFFFFFFFFFFFFFLL )
    {
      v28 = 0x7FFFFFFFFFFFFFFFLL;
      v30 = 0x8000000000000027uLL;
LABEL_42:
      v32 = sub_1409DB470(a1: v30);
      if ( v32 == 0 )
        __fastfail(5u);
      v29 = (v32 + 39) & 0xFFFFFFFFFFFFFFE0uLL;
      *(_QWORD *)(v29 - 8) = v32;
      goto LABEL_45;
    }
    if ( v28 < 0x16 )
      v28 = 22;
    v31 = v28 + 1;
    if ( v28 == -1 )
    {
      v29 = 0;
    }
    else
    {
      if ( v31 >= 0x1000 )
      {
        v30 = v28 + 40;
        if ( v28 + 40 <= v31 )
        {
          sub_14001B170(a1: v30, a2: v21, a3: v23, a4: v24);
          __debugbreak();
        }
        goto LABEL_42;
      }
      v29 = sub_1409DB470(a1: v28 + 1);
    }
LABEL_45:
    *(_QWORD *)&v42 = v29;
    v43 = v25;
    v44 = v28;
    sub_140E82100(a1: v29, a2: v26, a3: v25 + 1);
    goto LABEL_46;
  }
  if ( (unsigned __int8)sub_1407A6A60(a1, a2: lpMem) == 0
    || (v5 = (char *)lpMem[1],
        v6 = (char *)lpMem[0],
        (unsigned __int64)(((char *)lpMem[1] - (char *)lpMem[0]) / 40) < 0xF) )
  {
LABEL_8:
    v8 = 0;
    goto LABEL_9;
  }
  if ( lpMem[0] != lpMem[1] )
  {
    do
    {
      v7 = sub_1407FECF0(a1: v6);
      if ( v7 == 15 )
        goto LABEL_8;
      *a2 = *a2 & ~(1 << v7) | ((v6[32] != 0) << v7);
      v6 += 40;
    }
    while ( v6 != v5 );
  }
  v8 = 1;
LABEL_9:
  sub_140018080(a1: lpMem);
  return v8;
}