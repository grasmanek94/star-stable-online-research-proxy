__int64 __fastcall sub_140060730(__int64 *a1, __int64 a2)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  unsigned __int64 v6; // r14
  LPVOID *v7; // r15
  __int64 v8; // r13
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rcx
  _QWORD *v12; // rsi
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int128 *v21; // rax
  void *v22; // rcx
  __int128 *v23; // rdi
  char *v24; // rbx
  __int64 v25; // rax
  __int128 *v26; // rdi
  char *v27; // rbx
  __int64 v28; // rax
  __int128 *v29; // r8
  char *v30; // r8
  char *v31; // rax
  __int128 *v32; // rax
  char *v33; // r8
  __int128 *v34; // rax
  char *v35; // rax
  __int128 *v36; // rdx
  _QWORD *v37; // rbx
  unsigned __int64 v38; // rdi
  LPVOID *v39; // rcx
  unsigned __int8 v40; // bl
  __int64 v42; // [rsp+20h] [rbp-49h]
  __int128 v43; // [rsp+28h] [rbp-41h] BYREF
  __m128i v44; // [rsp+38h] [rbp-31h]
  LPVOID lpMem[2]; // [rsp+48h] [rbp-21h] BYREF
  __m128i v46; // [rsp+58h] [rbp-11h]
  LPVOID v47[2]; // [rsp+68h] [rbp-1h] BYREF
  __int64 v48; // [rsp+78h] [rbp+Fh]
  unsigned __int64 v49; // [rsp+80h] [rbp+17h]

  v42 = (a1[1] - *a1) >> 5;
  v4 = v42;
  *(_OWORD *)v47 = 0;
  v48 = 0;
  v49 = 0;
  v5 = sub_140E82CD0(a1: a2);
  sub_14000D7F0(a1: v47, a2, a3: v5);
  v6 = 0;
  v7 = (LPVOID *)v47[0];
  if ( v42 == 0 )
  {
LABEL_84:
    v40 = 0;
    goto LABEL_85;
  }
  v8 = v48;
  while ( 1 )
  {
    v9 = 22;
    v10 = 0x7FFFFFFFFFFFFFFFLL;
    v11 = *a1;
    if ( v6 >= (a1[1] - *a1) >> 5 )
      goto LABEL_83;
    v12 = (_QWORD *)(v11 + 32 * v6);
    v43 = 0;
    v44 = 0u;
    v13 = v12[2];
    if ( v12[3] > 0xFu )
      v12 = (_QWORD *)*v12;
    if ( v13 > 0x7FFFFFFFFFFFFFFFLL )
      sub_14001B680(a1: v11, a2: 0);
    if ( v13 <= 0xF )
    {
      v44.m128i_i64[0] = v13;
      v14 = 15;
      v44.m128i_i64[1] = 15;
      v43 = *(_OWORD *)v12;
      goto LABEL_21;
    }
    v15 = v13 | 0xF;
    if ( (v13 | 0xF) > 0x7FFFFFFFFFFFFFFFLL )
    {
      v15 = 0x7FFFFFFFFFFFFFFFLL;
      v16 = 0x8000000000000027uLL;
LABEL_17:
      v19 = sub_1409DB470(a1: v16);
      v20 = v19;
      if ( v19 == 0 )
        __fastfail(5u);
      v18 = (v19 + 39) & 0xFFFFFFFFFFFFFFE0uLL;
      *(_QWORD *)(v18 - 8) = v20;
      goto LABEL_20;
    }
    if ( v15 < 0x16 )
      v15 = 22;
    v17 = v15 + 1;
    if ( v15 == -1 )
    {
      v18 = 0;
    }
    else
    {
      if ( v17 >= 0x1000 )
      {
        v16 = v15 + 40;
        if ( v15 + 40 <= v17 )
        {
          sub_14001B170(a1: v16, a2: 0, a3: 0x7FFFFFFFFFFFFFFFLL, a4: 22);
          JUMPOUT(0x140060BA1LL);
        }
        goto LABEL_17;
      }
      v18 = sub_1409DB470(a1: v15 + 1);
    }
LABEL_20:
    *(_QWORD *)&v43 = v18;
    v44.m128i_i64[0] = v13;
    v44.m128i_i64[1] = v15;
    sub_140E82100(a1: v18, a2: v12, a3: v13 + 1);
    v14 = v44.m128i_u64[1];
    v13 = v44.m128i_i64[0];
    v4 = v42;
LABEL_21:
    v21 = &v43;
    v22 = (void *)v43;
    if ( v14 > 0xF )
      v21 = (__int128 *)v43;
    if ( *(_BYTE *)v21 == 45 )
      break;
    if ( v14 > 0xF )
    {
      if ( v14 + 1 >= 0x1000 )
      {
        if ( (unsigned __int64)(v43 - *(_QWORD *)(v43 - 8) - 8) > 0x1F )
          goto LABEL_83;
        v22 = *(void **)(v43 - 8);
      }
      sub_1409DB4C0(lpMem: v22);
    }
LABEL_73:
    if ( ++v6 >= v4 )
      goto LABEL_84;
  }
  v23 = &v43;
  if ( v14 > 0xF )
    v23 = (__int128 *)v43;
  if ( v13 != 0 )
  {
    v24 = (char *)v23 + v13;
    LOBYTE(v10) = 61;
    v25 = sub_1409D1F00(a1: v23, a2: v24, a3: v10, a4: v9);
    v10 = v25;
    if ( (char *)v25 != v24 )
    {
      v10 = v25 - (_QWORD)v23;
      if ( v25 - (_QWORD)v23 != -1 )
      {
        v14 = v44.m128i_u64[1];
        v22 = (void *)v43;
        goto LABEL_48;
      }
    }
    v14 = v44.m128i_u64[1];
    v13 = v44.m128i_i64[0];
    v22 = (void *)v43;
  }
  v26 = &v43;
  if ( v14 > 0xF )
    v26 = (__int128 *)v22;
  if ( v13 != 0 )
  {
    v27 = (char *)v26 + v13;
    LOBYTE(v10) = 32;
    v28 = sub_1409D1F00(a1: v26, a2: v27, a3: v10, a4: v9);
    if ( (char *)v28 != v27 )
    {
      v10 = v28 - (_QWORD)v26;
      if ( v28 - (_QWORD)v26 != -1 )
      {
        v14 = v44.m128i_u64[1];
        v22 = (void *)v43;
        goto LABEL_48;
      }
    }
    v14 = v44.m128i_u64[1];
    v13 = v44.m128i_i64[0];
    v22 = (void *)v43;
  }
  v29 = &v43;
  if ( v14 > 0xF )
    v29 = (__int128 *)v22;
  v30 = (char *)v29 + v13;
  v31 = (char *)&v43;
  if ( v14 > 0xF )
    v31 = (char *)v22;
  v10 = v30 - v31;
LABEL_48:
  v32 = &v43;
  if ( v14 > 0xF )
    v32 = (__int128 *)v22;
  v33 = (char *)v32 + v10;
  v34 = &v43;
  if ( v14 > 0xF )
    v34 = (__int128 *)v22;
  v35 = (char *)v34 + 1;
  *(_OWORD *)lpMem = 0;
  v46 = 0u;
  if ( v35 == v33 )
  {
    v46.m128i_i64[0] = 0;
    v46.m128i_i64[1] = 15;
    LOBYTE(lpMem[0]) = 0;
  }
  else
  {
    sub_14000D7F0(a1: lpMem, a2: v35, a3: v33 - v35);
    v14 = v44.m128i_u64[1];
    v22 = (void *)v43;
  }
  if ( v14 > 0xF )
  {
    if ( v14 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)v22 - *((_QWORD *)v22 - 1) - 8 > 0x1F )
        __fastfail(5u);
      v22 = *((void **)v22 - 1);
    }
    sub_1409DB4C0(lpMem: v22);
  }
  v43 = *(_OWORD *)lpMem;
  v44 = v46;
  v36 = &v43;
  v37 = lpMem[0];
  v38 = _mm_srli_si128(v46, 8).m128i_u64[0];
  if ( v38 > 0xF )
    v36 = (__int128 *)lpMem[0];
  v39 = v47;
  if ( v49 > 0xF )
    v39 = v7;
  if ( v8 != v46.m128i_i64[0] || v8 != 0 && (unsigned int)sub_140E82B50(a1: v39, a2: v36) != 0 )
  {
    if ( v38 > 0xF )
    {
      if ( v38 + 1 >= 0x1000 )
      {
        if ( (unsigned __int64)v37 - *(v37 - 1) - 8 > 0x1F )
          goto LABEL_83;
        v37 = (_QWORD *)*(v37 - 1);
      }
      sub_1409DB4C0(lpMem: v37);
    }
    v4 = v42;
    goto LABEL_73;
  }
  if ( v38 > 0xF )
  {
    if ( v38 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)v37 - *(v37 - 1) - 8 > 0x1F )
LABEL_83:
        __fastfail(5u);
      v37 = (_QWORD *)*(v37 - 1);
    }
    sub_1409DB4C0(lpMem: v37);
  }
  v40 = 1;
LABEL_85:
  if ( v49 > 0xF )
  {
    if ( v49 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)((char *)v7 - (_BYTE *)*(v7 - 1) - 8) > 0x1F )
        __fastfail(5u);
      v7 = (LPVOID *)*(v7 - 1);
    }
    sub_1409DB4C0(lpMem: v7);
  }
  return v40;
}