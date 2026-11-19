__int64 __fastcall sub_140720EF0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 *a8)
{
  __int64 *v11; // rbx
  __int128 v12; // xmm2
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rcx
  int v17; // eax
  const char *v18; // rdx
  _QWORD *v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rax
  __int128 *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  void *v28; // rcx
  void *v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // rax
  __int64 v32; // r14
  __int64 i; // rbx
  __int64 v34; // rax
  int v35; // eax
  __int128 v36; // xmm1
  void *v37; // rcx
  void *v38; // rcx
  void *v39; // rcx
  void *v40; // rcx
  void *v41; // rcx
  void *v43; // rcx
  unsigned __int8 v44; // [rsp+20h] [rbp-E0h]
  __int64 v45; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v46; // [rsp+38h] [rbp-C8h]
  _QWORD v47[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v48; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v49; // [rsp+70h] [rbp-90h] BYREF
  __int128 v50; // [rsp+80h] [rbp-80h]
  _QWORD v51[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v52; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v53; // [rsp+A8h] [rbp-58h]
  __int128 v54; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v55; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v56; // [rsp+C8h] [rbp-38h]
  __int128 v57; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v58; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v59; // [rsp+E8h] [rbp-18h]
  _QWORD v60[2]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v61; // [rsp+100h] [rbp+0h]
  unsigned __int64 v62; // [rsp+108h] [rbp+8h]
  __int128 v63; // [rsp+110h] [rbp+10h] BYREF
  __int128 v64; // [rsp+120h] [rbp+20h]
  _BYTE v65[64]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v66[64]; // [rsp+170h] [rbp+70h] BYREF

  v45 = a4;
  *(_QWORD *)&v48 = a2;
  sub_14004F670(a1: v65, a2: a5);
  if ( (unsigned __int64)a1[3] <= 0xF )
    v11 = a1;
  else
    v11 = (__int64 *)*a1;
  *(_QWORD *)&v48 = v11;
  *((_QWORD *)&v48 + 1) = sub_140E82CD0(a1: v11);
  sub_14000DA20(a1: &v54, a2: &v48, a3: 0);
  sub_140050730(a1: v65, a2: &v54);
  sub_14001B610(a1: &v54);
  if ( (unsigned __int8)sub_14006C9C0(a1: v65, a2: 0) == 0 )
  {
    *((_QWORD *)&v49 + 1) = v65;
    *(_QWORD *)&v50 = sub_140010A00;
    *(_QWORD *)&v49 = 0xD000000000000000uLL;
    *(_QWORD *)&v48 = "Crash handler does not exist in expected path: {}";
    *((_QWORD *)&v48 + 1) = 49;
    v45 = 1;
    v46 = (__int64)&v49;
    *(_OWORD *)v47 = v48;
    sub_140058310(a1: &v63, a2: v47, a3: &v45);
    v12 = v64;
    *(_OWORD *)a2 = v63;
    *(_OWORD *)(a2 + 16) = v12;
    *(_BYTE *)(a2 + 32) = 0;
    *(_QWORD *)&v63 = 19937;
    *(_QWORD *)&v64 = 0;
    *((_QWORD *)&v64 + 1) = 31;
    goto LABEL_55;
  }
  v13 = sub_140900B60();
  v63 = 0;
  v64 = 0u;
  v14 = sub_140E82CD0(a1: a6);
  sub_14000D7F0(a1: &v63, a2: a6, a3: v14);
  v15 = sub_140016F80(a1: &v54, a2: &v63);
  sub_140720C50(a1: v51, a2: v15);
  v16 = v51;
  if ( v53 > 0xF )
    v16 = (_QWORD *)v51[0];
  if ( v52 != 4
    || (v17 = sub_140E82B50(a1: v16, a2: "Live"),
        v18 = "https://2db44162a1ce4acb9c69ae99005b7fc0@sentry.io/1474641",
        v17 != 0) )
  {
    v18 = "https://d6899ca5bc3f402ca4ccac66d43e3555@sentry.io/1474641";
  }
  sub_140900E50(a1: v13, a2: v18);
  v19 = v51;
  if ( v53 > 0xF )
    v19 = (_QWORD *)v51[0];
  sub_140900E80(a1: v13, a2: v19);
  v22 = sub_1409CB830(a1: v21, a2: v20);
  v57 = 0;
  v58 = 0;
  v59 = 0;
  v23 = sub_140E82CD0(a1: v22);
  sub_14000D7F0(a1: &v57, a2: v22, a3: v23);
  v24 = &v57;
  if ( v59 > 0xF )
    v24 = (__int128 *)v57;
  sub_140900F40(a1: v13, a2: v24);
  v25 = sub_140055230(a1: v65);
  sub_140900F10(a1: v13, a2: v25);
  sub_14004F670(a1: v66, a2: v45);
  v49 = 0;
  v50 = 0u;
  v26 = sub_140E82CD0(a1: a3);
  sub_14000D7F0(a1: &v49, a2: a3, a3: v26);
  v27 = sub_140020190(a1: &v54, a2: a1 + 4, a3: &word_140EF8F60);
  sub_1400584B0(a1: v60, a2: v44, a3: v27, a4: &v49);
  if ( v56 > 0xF )
  {
    v28 = (void *)v54;
    if ( v56 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v54 - *(_QWORD *)(v54 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v28 = *(void **)(v54 - 8);
    }
    sub_1409DB4C0(lpMem: v28);
  }
  *(_QWORD *)&v54 = 19937;
  v55 = 0;
  v56 = 31;
  if ( *((_QWORD *)&v50 + 1) > 0xFu )
  {
    v29 = (void *)v49;
    if ( (unsigned __int64)(*((_QWORD *)&v50 + 1) + 1LL) >= 0x1000 )
    {
      if ( (unsigned __int64)(v49 - *(_QWORD *)(v49 - 8) - 8) > 0x1F )
        goto LABEL_57;
      v29 = *(void **)(v49 - 8);
    }
    sub_1409DB4C0(lpMem: v29);
  }
  v30 = v60;
  if ( v62 > 0xF )
    v30 = (_QWORD *)v60[0];
  *(_QWORD *)&v48 = v30;
  *((_QWORD *)&v48 + 1) = v61;
  sub_14000DA20(a1: &v49, a2: &v48, a3: 0);
  sub_1400508F0(a1: v66, a2: &v49);
  sub_14001B610(a1: &v49);
  v31 = sub_140055230(a1: v66);
  sub_140900E20(a1: v13, a2: v31);
  v32 = a8[1];
  for ( i = *a8; i != v32; i += 64 )
  {
    v34 = sub_140055230(a1: i);
    sub_1409009E0(a1: v13, a2: v34);
  }
  v35 = sub_140901A90(a1: v13);
  if ( v35 == 0 )
  {
    *((_BYTE *)a1 + 64) = 1;
    sub_140901E70(a1: a3);
    sub_140901DF0(a1: 3);
    *(_OWORD *)a2 = 0;
    *(_OWORD *)(a2 + 16) = 0;
    *(_OWORD *)(a2 + 32) = 0;
    *(_BYTE *)a2 = 0;
    *(_BYTE *)(a2 + 32) = 1;
    if ( v62 <= 0xF )
      goto LABEL_40;
    v43 = (void *)v60[0];
    if ( v62 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v60[0] - *(_QWORD *)(v60[0] - 8LL) - 8LL) > 0x1F )
        goto LABEL_64;
      v43 = *(void **)(v60[0] - 8LL);
    }
    sub_1409DB4C0(lpMem: v43);
    goto LABEL_40;
  }
  DWORD2(v48) = v35;
  *(_QWORD *)&v48 = 0x1000000000000000LL;
  v45 = (__int64)"sentry_init failed with non-zero error code {}";
  v46 = 46;
  v47[0] = 1;
  v47[1] = &v48;
  sub_140058310(a1: &v49, a2: &v45, a3: v47);
  v54 = v49;
  v36 = v50;
  *(_QWORD *)&v50 = 0;
  *((_QWORD *)&v50 + 1) = 15;
  LOBYTE(v49) = 0;
  *(_OWORD *)a2 = v54;
  *(_OWORD *)(a2 + 16) = v36;
  v55 = 0;
  v56 = 15;
  LOBYTE(v54) = 0;
  *(_BYTE *)(a2 + 32) = 0;
  sub_14001B5A0(a1: &v54);
  if ( *((_QWORD *)&v50 + 1) > 0xFu )
  {
    v37 = (void *)v49;
    if ( (unsigned __int64)(*((_QWORD *)&v50 + 1) + 1LL) < 0x1000 )
    {
LABEL_34:
      sub_1409DB4C0(lpMem: v37);
      goto LABEL_35;
    }
    if ( (unsigned __int64)(v49 - *(_QWORD *)(v49 - 8) - 8) <= 0x1F )
    {
      v37 = *(void **)(v49 - 8);
      goto LABEL_34;
    }
LABEL_57:
    __fastfail(5u);
  }
LABEL_35:
  *(_QWORD *)&v49 = 19937;
  *(_QWORD *)&v50 = 0;
  *((_QWORD *)&v50 + 1) = 31;
  if ( v62 > 0xF )
  {
    v38 = (void *)v60[0];
    if ( v62 + 1 < 0x1000 )
    {
LABEL_39:
      sub_1409DB4C0(lpMem: v38);
      goto LABEL_40;
    }
    if ( (unsigned __int64)(v60[0] - *(_QWORD *)(v60[0] - 8LL) - 8LL) <= 0x1F )
    {
      v38 = *(void **)(v60[0] - 8LL);
      goto LABEL_39;
    }
LABEL_64:
    __fastfail(5u);
  }
LABEL_40:
  v62 = 31;
  v61 = 0;
  v60[0] = 19937;
  sub_14004FE80(a1: v66);
  if ( v59 > 0xF )
  {
    v39 = (void *)v57;
    if ( v59 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v57 - *(_QWORD *)(v57 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v39 = *(void **)(v57 - 8);
    }
    sub_1409DB4C0(lpMem: v39);
  }
  v59 = 31;
  v58 = 0;
  *(_QWORD *)&v57 = 19937;
  if ( v53 > 0xF )
  {
    v40 = (void *)v51[0];
    if ( v53 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v51[0] - *(_QWORD *)(v51[0] - 8LL) - 8LL) > 0x1F )
        __fastfail(5u);
      v40 = *(void **)(v51[0] - 8LL);
    }
    sub_1409DB4C0(lpMem: v40);
  }
  v51[0] = 19937;
  v52 = 0;
  v53 = 31;
  if ( *((_QWORD *)&v64 + 1) > 0xFu )
  {
    v41 = (void *)v63;
    if ( (unsigned __int64)(*((_QWORD *)&v64 + 1) + 1LL) >= 0x1000 )
    {
      if ( (unsigned __int64)(v63 - *(_QWORD *)(v63 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v41 = *(void **)(v63 - 8);
    }
    sub_1409DB4C0(lpMem: v41);
  }
LABEL_55:
  sub_14004FE80(a1: v65);
  return a2;
}