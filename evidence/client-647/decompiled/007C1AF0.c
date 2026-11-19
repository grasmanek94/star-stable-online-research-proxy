__int64 __fastcall sub_1407C1AF0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  _QWORD *v4; // rdx
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rax
  __int128 *v9; // rsi
  int v10; // ebx
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  LPVOID *v14; // rax
  __int64 v15; // rax
  void **v16; // rbx
  void **v17; // rdi
  unsigned __int64 v18; // rcx
  char *v19; // rax
  char *v20; // r8
  void *v21; // rcx
  void *v22; // rcx
  void *v23; // rcx
  _QWORD *v25; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v26[3]; // [rsp+28h] [rbp-D8h] BYREF
  int v27; // [rsp+40h] [rbp-C0h]
  _BYTE v28[40]; // [rsp+50h] [rbp-B0h] BYREF
  char v29; // [rsp+78h] [rbp-88h]
  __int128 v30; // [rsp+80h] [rbp-80h] BYREF
  __int64 v31; // [rsp+90h] [rbp-70h]
  unsigned __int64 v32; // [rsp+98h] [rbp-68h]
  __int128 v33; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v34; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v35; // [rsp+B8h] [rbp-48h]
  __int128 v36; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v37; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v38; // [rsp+D8h] [rbp-28h]
  __int128 v39; // [rsp+E0h] [rbp-20h] BYREF
  char v40; // [rsp+F0h] [rbp-10h]
  int v41; // [rsp+F4h] [rbp-Ch] BYREF
  int v42; // [rsp+F8h] [rbp-8h] BYREF
  LPVOID lpMem[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v44; // [rsp+110h] [rbp+10h]
  __int128 v45; // [rsp+120h] [rbp+20h] BYREF
  __int64 v46; // [rsp+130h] [rbp+30h]
  unsigned __int64 v47; // [rsp+138h] [rbp+38h]
  _QWORD v48[2]; // [rsp+140h] [rbp+40h] BYREF
  int *v49; // [rsp+150h] [rbp+50h]
  __int64 v50; // [rsp+158h] [rbp+58h]
  __int128 *v51; // [rsp+160h] [rbp+60h]
  __int128 *v52; // [rsp+168h] [rbp+68h]
  __int128 *v53; // [rsp+170h] [rbp+70h]
  _BYTE *v54; // [rsp+178h] [rbp+78h]
  _QWORD v55[3]; // [rsp+180h] [rbp+80h] BYREF
  unsigned __int64 v56; // [rsp+198h] [rbp+98h]

  LODWORD(v25) = 0;
  v3 = *(_QWORD *)(a2 + 688);
  if ( *(_DWORD *)(a1 + 312) != 7 )
  {
    *(_DWORD *)(a1 + 312) = 7;
    if ( *(_BYTE *)(a1 + 3024) == 2 )
    {
      if ( *(_QWORD *)&nExitCode == 0 )
        goto LABEL_82;
      sub_1407B75D0(a1, a2: *(_QWORD *)&nExitCode, a3: 7);
    }
  }
  ++*(_BYTE *)(a1 + 448);
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 15;
  LOBYTE(v30) = 0;
  v33 = 0;
  v34 = 0;
  v35 = 15;
  LOBYTE(v33) = 0;
  v36 = 0;
  v37 = 0;
  v38 = 15;
  LOBYTE(v36) = 0;
  v40 = 0;
  v41 = -1;
  v42 = 0;
  *(_OWORD *)lpMem = 0;
  v44 = 0;
  v4 = (_QWORD *)(v3 + 280);
  if ( &v30 != (__int128 *)(v3 + 280) )
  {
    if ( *(_QWORD *)(v3 + 304) > 0xFu )
      v4 = (_QWORD *)*v4;
    sub_14000D680(a1: &v30, a2: v4, a3: *(_QWORD *)(v3 + 296));
  }
  v41 = *(_DWORD *)(v3 + 312);
  v5 = (_QWORD *)(v3 + 320);
  if ( &v33 != (__int128 *)(v3 + 320) )
  {
    if ( *(_QWORD *)(v3 + 344) > 0xFu )
      v5 = (_QWORD *)*v5;
    sub_14000D680(a1: &v33, a2: v5, a3: *(_QWORD *)(v3 + 336));
  }
  if ( *(_QWORD *)(v3 + 448) != 0 )
  {
    v9 = (__int128 *)sub_140016F80(a1: v55, a2: v3 + 432);
    v10 = 4;
    LODWORD(v25) = 4;
    if ( &v36 == v9 )
      goto LABEL_24;
  }
  else
  {
    v6 = (_QWORD *)sub_140A4C0A0(a1: v48);
    v7 = v6;
    LODWORD(v25) = 1;
    if ( v6[3] > 0xFu )
      v7 = (_QWORD *)*v6;
    v45 = 0;
    v46 = 0;
    v47 = 0;
    v8 = sub_140E82CD0(a1: v7);
    sub_14000D7F0(a1: &v45, a2: v7, a3: v8);
    v9 = &v45;
    v10 = 3;
    LODWORD(v25) = 3;
  }
  if ( v38 > 0xF )
  {
    v11 = (void *)v36;
    if ( v38 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v36 - *(_QWORD *)(v36 - 8) - 8) > 0x1F )
        goto LABEL_52;
      v11 = *(void **)(v36 - 8);
    }
    sub_1409DB4C0(lpMem: v11);
  }
  v37 = 0;
  v38 = 15;
  LOBYTE(v36) = 0;
  v36 = *v9;
  v37 = *((_QWORD *)v9 + 2);
  v38 = *((_QWORD *)v9 + 3);
  *((_QWORD *)v9 + 2) = 0;
  *((_QWORD *)v9 + 3) = 15;
  *(_BYTE *)v9 = 0;
LABEL_24:
  if ( (v10 & 4) == 0 )
    goto LABEL_31;
  v10 &= ~4u;
  LODWORD(v25) = v10;
  if ( v56 > 0xF )
  {
    v12 = (void *)v55[0];
    if ( v56 + 1 < 0x1000 )
    {
LABEL_29:
      sub_1409DB4C0(lpMem: v12);
      goto LABEL_30;
    }
    if ( (unsigned __int64)(v55[0] - *(_QWORD *)(v55[0] - 8LL) - 8LL) <= 0x1F )
    {
      v12 = *(void **)(v55[0] - 8LL);
      goto LABEL_29;
    }
LABEL_52:
    __fastfail(5u);
  }
LABEL_30:
  v55[0] = 19937;
  v55[2] = 0;
  v56 = 31;
LABEL_31:
  if ( (v10 & 2) != 0 )
  {
    v10 &= ~2u;
    LODWORD(v25) = v10;
    if ( v47 > 0xF )
    {
      v13 = (void *)v45;
      if ( v47 + 1 >= 0x1000 )
      {
        if ( (unsigned __int64)(v45 - *(_QWORD *)(v45 - 8) - 8) > 0x1F )
          __fastfail(5u);
        v13 = *(void **)(v45 - 8);
      }
      sub_1409DB4C0(lpMem: v13);
    }
    *(_QWORD *)&v45 = 19937;
    v47 = 31;
  }
  if ( (v10 & 1) != 0 )
  {
    LODWORD(v25) = v10 & 0xFFFFFFFE;
    sub_14001B5A0(a1: v48);
    v48[0] = 19937;
    v49 = nullptr;
    v50 = 31;
  }
  v42 = 1;
  v14 = (LPVOID *)sub_14063DC00(a1: v3);
  if ( lpMem != v14 )
    sub_1407AB620(a1: lpMem, a2: *v14, a3: ((_BYTE *)v14[1] - (_BYTE *)*v14) / 40);
  v15 = sub_14063DBF0(a1: v3);
  if ( (unsigned __int8)sub_140A43D70(a1: v15) != 0 )
  {
    v39 = *(_OWORD *)sub_14063DBF0(a1: v3);
    if ( v40 == 0 )
      v40 = 1;
  }
  v26[1] = 0;
  v26[2] = 0;
  v27 = 0;
  v26[0] = &PXEngine::ByteStreamWriter::`vftable';
  v48[0] = lpMem;
  v48[1] = &v42;
  v49 = &v41;
  v50 = (__int64)&v39;
  v51 = &v36;
  v52 = &v33;
  v53 = &v30;
  v54 = v28;
  v25 = v26;
  if ( sub_1407AF880(a1: (__int64)v48, a2: &v25) == 0 )
  {
    while ( 1 )
    {
      if ( (unsigned __int8)sub_140059D90(a1: off_1410140A8, a2: "Serialize ServerLoginMessage failed!") != 0 )
        __debugbreak();
      sub_1409E29B8(a1: 999);
LABEL_82:
      if ( (unsigned __int8)sub_140059CA0(a1: off_140F34FA8) != 0 )
        __debugbreak();
      sub_1409E29B8(a1: 999);
    }
  }
  sub_1407D5600(a1, a2: 6, a3: (__int64)v26);
  sub_140A25690(a1: (__int64)v26);
  v16 = (void **)lpMem[0];
  if ( lpMem[0] != nullptr )
  {
    v17 = (void **)lpMem[1];
    if ( lpMem[0] != lpMem[1] )
    {
      do
      {
        v18 = (unsigned __int64)v16[3];
        if ( v18 > 0xF )
        {
          v19 = (char *)*v16;
          if ( v18 + 1 < 0x1000 )
          {
            v20 = (char *)*v16;
          }
          else
          {
            v20 = *((char **)v19 - 1);
            if ( (unsigned __int64)(v19 - v20 - 8) > 0x1F )
              goto LABEL_80;
          }
          sub_1409DB4C0(lpMem: v20);
        }
        *v16 = (void *)19937;
        v16[2] = nullptr;
        v16[3] = (void *)31;
        v16 += 5;
      }
      while ( v16 != v17 );
      v16 = (void **)lpMem[0];
    }
    if ( (unsigned __int64)(40 * ((v44 - (__int64)v16) / 40)) >= 0x1000 )
    {
      if ( (unsigned __int64)((char *)v16 - (_BYTE *)*(v16 - 1) - 8) > 0x1F )
        goto LABEL_80;
      v16 = (void **)*(v16 - 1);
    }
    sub_1409DB4C0(lpMem: v16);
  }
  *(__m128i *)lpMem = _mm_load_si128((const __m128i *)&xmmword_140EEE200);
  v44 = 19937;
  if ( v38 > 0xF )
  {
    v21 = (void *)v36;
    if ( v38 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v36 - *(_QWORD *)(v36 - 8) - 8) > 0x1F )
        goto LABEL_80;
      v21 = *(void **)(v36 - 8);
    }
    sub_1409DB4C0(lpMem: v21);
  }
  *(_QWORD *)&v36 = 19937;
  v37 = 0;
  v38 = 31;
  if ( v35 > 0xF )
  {
    v22 = (void *)v33;
    if ( v35 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v33 - *(_QWORD *)(v33 - 8) - 8) > 0x1F )
        goto LABEL_80;
      v22 = *(void **)(v33 - 8);
    }
    sub_1409DB4C0(lpMem: v22);
  }
  *(_QWORD *)&v33 = 19937;
  v34 = 0;
  v35 = 31;
  if ( v32 > 0xF )
  {
    v23 = (void *)v30;
    if ( v32 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v30 - *(_QWORD *)(v30 - 8) - 8) <= 0x1F )
      {
        v23 = *(void **)(v30 - 8);
        goto LABEL_76;
      }
LABEL_80:
      __fastfail(5u);
    }
LABEL_76:
    sub_1409DB4C0(lpMem: v23);
  }
  *(_QWORD *)&v30 = 19937;
  v31 = 0;
  v32 = 31;
  if ( v29 != 0 )
    sub_14001B5A0(a1: v28);
  return 1;
}