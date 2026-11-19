char __fastcall sub_140614190(__int64 a1, __int64 a2, const char *a3, unsigned __int8 a4)
{
  const char *v4; // rbx
  __m128i si128; // xmm6
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  void *v12; // rcx
  __int64 v13; // rdx
  void *v14; // rcx
  __int64 v15; // rsi
  __int128 *v16; // r15
  __int64 v17; // r14
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int128 *v21; // rdi
  __int64 v22; // rax
  __int128 *v23; // r8
  __int128 *v24; // r8
  __int64 v25; // rdi
  __int64 v26; // rdx
  unsigned __int64 v27; // rbx
  __int64 v28; // rax
  _QWORD *v29; // rcx
  void *v30; // rcx
  __int64 v31; // rax
  __int128 *v32; // rdx
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rcx
  int v36; // ecx
  __int64 v37; // rax
  void *v38; // rcx
  void *v39; // rcx
  void *v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdi
  __int64 v45; // rax
  __int64 *v46; // r15
  __int64 *v47; // r14
  unsigned __int8 v48; // bl
  __int64 v49; // rcx
  __int64 v50; // r9
  _QWORD *v51; // r8
  __int64 v52; // rdx
  void *v53; // rcx
  __int64 v54; // rdx
  void *v55; // rcx
  int v56; // eax
  int v57; // edi
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rsi
  __int64 v61; // rax
  __int64 v62; // r14
  __int64 v63; // rdi
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int128 *v68; // rdx
  unsigned __int64 v69; // rax
  __int64 v70; // r9
  __int64 v71; // rdx
  __int64 v72; // rax
  int v73; // edi
  int v74; // eax
  __int64 v75; // rdi
  void *v76; // rdi
  void *v77; // rcx
  char v78; // bl
  const char *v79; // rdx
  __int64 v80; // rdi
  __int64 v81; // rbx
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rcx
  __int64 v89; // rax
  __int64 v90; // rax
  void *v91; // rcx
  __int64 v92; // rbx
  _BYTE *v93; // rdx
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  void *v98; // rdi
  __int64 *v99; // rax
  __int64 v100; // rcx
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // rax
  void *v104; // rcx
  void *v105; // rcx
  void *v106; // rcx
  char v107[8]; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID lpMem; // [rsp+48h] [rbp-B8h] BYREF
  const char *v109; // [rsp+50h] [rbp-B0h]
  __int64 v110; // [rsp+58h] [rbp-A8h]
  __int64 v111; // [rsp+60h] [rbp-A0h]
  __int64 *v112; // [rsp+68h] [rbp-98h]
  __int64 v113; // [rsp+78h] [rbp-88h]
  __int128 v114; // [rsp+80h] [rbp-80h] BYREF
  __int128 v115; // [rsp+90h] [rbp-70h]
  __int128 v116; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v117; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v118; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v119; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v120; // [rsp+D8h] [rbp-28h]
  __int128 v121; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v122; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v123; // [rsp+F8h] [rbp-8h]
  __int128 v124; // [rsp+100h] [rbp+0h] BYREF
  __int128 v125; // [rsp+110h] [rbp+10h]
  __int64 v126; // [rsp+120h] [rbp+20h] BYREF
  __int64 v127; // [rsp+128h] [rbp+28h]
  __int64 v128; // [rsp+130h] [rbp+30h]
  unsigned __int64 v129; // [rsp+138h] [rbp+38h]
  int v130; // [rsp+140h] [rbp+40h]
  int v131; // [rsp+144h] [rbp+44h]
  __int128 v132; // [rsp+160h] [rbp+60h] BYREF
  __int128 v133; // [rsp+170h] [rbp+70h]
  __int128 v134; // [rsp+180h] [rbp+80h] BYREF
  __int128 v135; // [rsp+190h] [rbp+90h]
  __int128 v136; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v137; // [rsp+1B0h] [rbp+B0h]
  __int64 v138; // [rsp+1B8h] [rbp+B8h]
  __int64 v139; // [rsp+1C0h] [rbp+C0h]
  __int64 v140; // [rsp+1C8h] [rbp+C8h]
  __int64 v141; // [rsp+1D0h] [rbp+D0h]
  __int64 v142; // [rsp+1D8h] [rbp+D8h]
  __m128i v143; // [rsp+1E0h] [rbp+E0h]
  __int64 v144; // [rsp+1F0h] [rbp+F0h]
  _QWORD v145[3]; // [rsp+200h] [rbp+100h] BYREF
  unsigned __int64 v146; // [rsp+218h] [rbp+118h]
  _BYTE v147[32]; // [rsp+220h] [rbp+120h] BYREF
  void **v148; // [rsp+240h] [rbp+140h] BYREF
  int v149; // [rsp+248h] [rbp+148h]
  __m128i v150; // [rsp+250h] [rbp+150h] BYREF
  __int64 v151; // [rsp+260h] [rbp+160h]
  _BYTE v152[64]; // [rsp+280h] [rbp+180h] BYREF
  _BYTE v153[32]; // [rsp+2C0h] [rbp+1C0h] BYREF
  _BYTE v154[32]; // [rsp+2E0h] [rbp+1E0h] BYREF
  _BYTE v155[512]; // [rsp+300h] [rbp+200h] BYREF

  v107[0] = a4;
  v4 = a3;
  v109 = a3;
  v110 = a2;
  LODWORD(lpMem) = 0;
  if ( *(_QWORD *)(a1 + 72) != *(_QWORD *)(a1 + 80) )
  {
    sub_14000D680(a1: a3, a2: "PackFileArchive already opened", a3: 30);
    if ( *((_QWORD *)v4 + 3) > 0xFu )
      v4 = *(const char **)v4;
    if ( (unsigned __int8)sub_140059D90(a1: off_140FE0A18, a2: "%s", v4) != 0 )
      __debugbreak();
    return 1;
  }
  sub_14004FFF0(a1: a1 + 8, a2);
  si128 = _mm_load_si128((const __m128i *)&xmmword_140EEE200);
  while ( 1 )
  {
    v114 = 0;
    *(_QWORD *)&v115 = 3;
    *((_QWORD *)&v115 + 1) = 15;
    LODWORD(v114) = 6386531;
    v121 = 0;
    v122 = 1;
    v123 = 15;
    LOWORD(v121) = 112;
    sub_1400691F0(
      a1: v155,
      a2: 512,
      a3: "%s_%08d.%s",
      (const char *)&v121,
      (*(_QWORD *)(a1 + 80) - *(_QWORD *)(a1 + 72)) / 88LL,
      (const char *)&v114);
    v118 = 0;
    v119 = 0;
    v120 = 0;
    v8 = sub_140E82CD0(a1: v155);
    sub_14000D7F0(a1: &v118, a2: v155, a3: v8);
    if ( v123 > 0xF )
    {
      v12 = (void *)v121;
      if ( v123 + 1 >= 0x1000 )
      {
        if ( (unsigned __int64)(v121 - *(_QWORD *)(v121 - 8) - 8) > 0x1F )
          __fastfail(5u);
        v12 = *(void **)(v121 - 8);
      }
      sub_1409DB4C0(lpMem: v12);
    }
    *(_QWORD *)&v121 = 19937;
    v122 = 0;
    v123 = 31;
    v13 = *((_QWORD *)&v115 + 1);
    if ( *((_QWORD *)&v115 + 1) > 0xFu )
    {
      v14 = (void *)v114;
      if ( (unsigned __int64)(*((_QWORD *)&v115 + 1) + 1LL) >= 0x1000 )
      {
        if ( (unsigned __int64)(v114 - *(_QWORD *)(v114 - 8) - 8) > 0x1F )
          goto LABEL_77;
        v14 = *(void **)(v114 - 8);
      }
      sub_1409DB4C0(lpMem: v14);
    }
    *(_QWORD *)&v114 = 19937;
    *(_QWORD *)&v115 = 0;
    *((_QWORD *)&v115 + 1) = 31;
    v15 = v119;
    if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v119) < 6 )
      sub_14001B680(a1: v9, a2: v13);
    v16 = &v118;
    if ( v120 > 0xF )
      v16 = (__int128 *)v118;
    v116 = 0;
    v117 = 0u;
    v17 = v119 + 6;
    if ( (unsigned __int64)(v119 + 6) <= 0xF )
    {
      v18 = 15;
      v21 = &v116;
    }
    else
    {
      v18 = v17 | 0xF;
      if ( (v17 | 0xFuLL) <= 0x7FFFFFFFFFFFFFFFLL )
      {
        if ( v18 < 0x16 )
          v18 = 22;
        v20 = v18 + 1;
        if ( v18 == -1 )
        {
          v21 = nullptr;
          *(_QWORD *)&v116 = 0;
          goto LABEL_34;
        }
        if ( v20 < 0x1000 )
        {
          v21 = (__int128 *)sub_1409DB470(a1: v18 + 1);
          *(_QWORD *)&v116 = v21;
          goto LABEL_34;
        }
        v19 = v18 + 40;
        if ( v18 + 40 <= v20 )
        {
          sub_14001B170(a1: v19, a2: v13, a3: v10, a4: v11);
          goto LABEL_199;
        }
      }
      else
      {
        v18 = 0x7FFFFFFFFFFFFFFFLL;
        v19 = 0x8000000000000027uLL;
      }
      v22 = sub_1409DB470(a1: v19);
      if ( v22 == 0 )
        __fastfail(5u);
      v21 = (__int128 *)((v22 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *((_QWORD *)v21 - 1) = v22;
      *(_QWORD *)&v116 = v21;
    }
LABEL_34:
    *(_QWORD *)&v117 = v15 + 6;
    *((_QWORD *)&v117 + 1) = v18;
    sub_140E82100(a1: v21, a2: v16, a3: v15);
    strcpy((char *)v21 + v15, "header");
    v23 = &v116;
    if ( *((_QWORD *)&v117 + 1) > 0xFu )
      v23 = (__int128 *)v116;
    sub_14004F6B0(a1: v152, a2: v110, a3: v23, a4: 0);
    if ( (unsigned __int8)sub_14006C9C0(a1: v152, a2: 0) == 0 )
      break;
    v24 = &v118;
    if ( v120 > 0xF )
      v24 = (__int128 *)v118;
    sub_14004F6B0(a1: &v148, a2: v110, a3: v24, a4: 0);
    v25 = (*(__int64 (__fastcall **)(_QWORD, void ***, const char *))(**(_QWORD **)(a1 + 96) + 8LL))(
            a1: *(_QWORD *)(a1 + 96),
            a2: &v148,
            a3: "rb");
    if ( v25 == 0 )
    {
      sub_140018D50(a1: v109, a2: "Could open the header but not the data file");
      sub_1406137D0(a1);
      sub_14004FE80(a1: &v148);
      sub_14004FE80(a1: v152);
      sub_140017B20(a1: &v116);
      sub_140017B20(a1: &v118);
      return 2;
    }
    v136 = 0;
    v137 = 0;
    v138 = 15;
    LOBYTE(v136) = 0;
    v139 = 0;
    v140 = 0;
    v141 = 1;
    v142 = 0;
    v143 = 0;
    v144 = 0;
    v26 = *(_QWORD *)(a1 + 80);
    if ( v26 == *(_QWORD *)(a1 + 88) )
    {
      sub_140612790(a1: a1 + 72, a2: v26, a3: &v136);
      v28 = v144;
      v29 = (_QWORD *)v143.m128i_i64[0];
      v27 = v138;
    }
    else
    {
      *(_OWORD *)v26 = v136;
      *(_QWORD *)(v26 + 16) = 0;
      *(_QWORD *)(v26 + 24) = 15;
      v137 = 0;
      v27 = 15;
      LOBYTE(v136) = 0;
      *(_QWORD *)(v26 + 32) = 0;
      *(_QWORD *)(v26 + 40) = 0;
      *(_QWORD *)(v26 + 48) = 1;
      *(_QWORD *)(v26 + 56) = 0;
      v28 = 0;
      v143.m128i_i64[1] = 0;
      v29 = nullptr;
      *(_QWORD *)(v26 + 64) = 0;
      *(_QWORD *)(v26 + 72) = 0;
      *(_QWORD *)(v26 + 80) = 0;
      *(_QWORD *)(a1 + 80) += 88LL;
    }
    if ( v29 != nullptr )
    {
      if ( (unsigned __int64)(8 * ((v28 - (__int64)v29) >> 3)) >= 0x1000 )
      {
        if ( (unsigned __int64)v29 - *(v29 - 1) - 8 > 0x1F )
          goto LABEL_78;
        v29 = (_QWORD *)*(v29 - 1);
      }
      sub_1409DB4C0(lpMem: v29);
    }
    v143 = si128;
    v144 = 19937;
    if ( v27 > 0xF )
    {
      v30 = (void *)v136;
      if ( v27 + 1 >= 0x1000 )
      {
        if ( (unsigned __int64)(v136 - *(_QWORD *)(v136 - 8) - 8) > 0x1F )
          goto LABEL_78;
        v30 = *(void **)(v136 - 8);
      }
      sub_1409DB4C0(lpMem: v30);
    }
    *(_QWORD *)&v136 = 19937;
    v137 = 0;
    v138 = 31;
    v31 = *(_QWORD *)(a1 + 80);
    if ( *(_QWORD *)(a1 + 72) == v31 )
      goto LABEL_78;
    if ( (__int128 *)(v31 - 88) != &v118 )
    {
      v32 = &v118;
      if ( v120 > 0xF )
        v32 = (__int128 *)v118;
      sub_14000D680(a1: v31 - 88, a2: v32, a3: v119);
    }
    if ( (v33 = *(_QWORD *)(a1 + 80), *(_QWORD *)(a1 + 72) == v33)
      || (*(_QWORD *)(v33 - 56) = v25,
          v34 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 96) + 136LL))(
                  a1: *(_QWORD *)(a1 + 96),
                  a2: v25),
          v35 = *(_QWORD *)(a1 + 80),
          *(_QWORD *)(a1 + 72) == v35)
      || ((*(_DWORD *)(v35 - 32) = v34, v107[0] == 0)
        ? (v36 = 0)
        : (v36 = sub_14006CA30(a1: *(_QWORD *)(a1 + 96), a2: v25)),
          v37 = *(_QWORD *)(a1 + 80),
          *(_QWORD *)(a1 + 72) == v37) )
    {
LABEL_78:
      __fastfail(5u);
    }
    *(_DWORD *)(v37 - 28) = v36;
    sub_14004FE80(a1: &v148);
    sub_14004FE80(a1: v152);
    if ( *((_QWORD *)&v117 + 1) > 0xFu )
    {
      v38 = (void *)v116;
      if ( (unsigned __int64)(*((_QWORD *)&v117 + 1) + 1LL) >= 0x1000 )
      {
        if ( (unsigned __int64)(v116 - *(_QWORD *)(v116 - 8) - 8) > 0x1F )
LABEL_77:
          __fastfail(5u);
        v38 = *(void **)(v116 - 8);
      }
      sub_1409DB4C0(lpMem: v38);
    }
    *(_QWORD *)&v116 = 19937;
    *(_QWORD *)&v117 = 0;
    *((_QWORD *)&v117 + 1) = 31;
    if ( v120 > 0xF )
    {
      v39 = (void *)v118;
      if ( v120 + 1 >= 0x1000 )
      {
        if ( (unsigned __int64)(v118 - *(_QWORD *)(v118 - 8) - 8) > 0x1F )
          goto LABEL_194;
        v39 = *(void **)(v118 - 8);
      }
      sub_1409DB4C0(lpMem: v39);
    }
    LODWORD(lpMem) = (unsigned int)lpMem | 3;
  }
  sub_14004FE80(a1: v152);
  sub_140017B20(a1: &v116);
  if ( v120 > 0xF )
  {
    v40 = (void *)v118;
    if ( v120 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v118 - *(_QWORD *)(v118 - 8) - 8) > 0x1F )
        goto LABEL_194;
      v40 = *(void **)(v118 - 8);
    }
    sub_1409DB4C0(lpMem: v40);
  }
  *(_QWORD *)&v118 = 19937;
  v119 = 0;
  v120 = 31;
  if ( *(_QWORD *)(a1 + 72) == *(_QWORD *)(a1 + 80) )
  {
    v41 = sub_140054AA0(a1: v110);
    v42 = sub_1400565C0(a1: &v132, a2: "No header files could be found in the target directory (", a3: v41);
    v43 = sub_140056550(a1: v147, a2: v42, a3: ")");
    sub_140018C70(a1: v109, a2: v43);
    sub_140017B20(a1: v147);
    sub_140017B20(a1: &v132);
    sub_1406137D0(a1);
    return 3;
  }
  sub_140618FE0(a1: a1 + 72);
  v44 = a1 + 248;
  v45 = sub_1406190F0(a1: a1 + 72);
  sub_140618E70(a1: a1 + 248, a2: 2 * v45);
  v46 = *(__int64 **)(a1 + 72);
  v47 = *(__int64 **)(a1 + 80);
  v112 = v47;
  if ( v46 == v47 )
    return 0;
  v48 = v107[0];
  while ( 1 )
  {
    v49 = v46[2];
    if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v49) < 6 )
      sub_14001B680(a1: v49, a2: &dword_140FE0B88);
    if ( (unsigned __int64)v46[3] <= 0xF )
      LODWORD(v50) = (_DWORD)v46;
    else
      v50 = *v46;
    sub_1400249F0(
      a1: (unsigned int)v145,
      a2: v48,
      a3: (_DWORD)v46,
      a4: v50,
      a5: v49,
      a6: (__int64)&dword_140FE0B88,
      a7: 6);
    v51 = v145;
    if ( v146 > 0xF )
      v51 = (_QWORD *)v145[0];
    sub_14004F6B0(a1: v152, a2: v110, a3: v51, a4: 0);
    sub_14006BAB0(a1: v155, a2: 0);
    if ( (unsigned __int8)sub_14006CFF0(a1: v155, a2: v152) == 0 )
    {
      v99 = (__int64 *)sub_140054AA0(a1: v152);
      v101 = v99[2];
      if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v101) < 0x15 )
        sub_14001B680(a1: v100, a2: v101);
      if ( (unsigned __int64)v99[3] <= 0xF )
        v102 = (__int64)v99;
      else
        v102 = *v99;
      sub_1400249F0(
        a1: (unsigned int)&v124,
        a2: (unsigned __int8)v107[0],
        a3: (_DWORD)v99,
        a4: (unsigned int)"Could not open file '",
        a5: 21,
        a6: v102,
        a7: v99[2]);
      v103 = sub_14004E5C0(a1: &v124, a2: "'", a3: 1);
      v132 = *(_OWORD *)v103;
      v133 = *(_OWORD *)(v103 + 16);
      *(_QWORD *)(v103 + 16) = 0;
      *(_QWORD *)(v103 + 24) = 15;
      *(_BYTE *)v103 = 0;
      sub_140018C70(a1: v109, a2: &v132);
      if ( *((_QWORD *)&v133 + 1) > 0xFu )
      {
        v104 = (void *)v132;
        if ( (unsigned __int64)(*((_QWORD *)&v133 + 1) + 1LL) >= 0x1000 )
        {
          if ( (unsigned __int64)(v132 - *(_QWORD *)(v132 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v104 = *(void **)(v132 - 8);
        }
        sub_1409DB4C0(lpMem: v104);
      }
      if ( *((_QWORD *)&v125 + 1) > 0xFu )
      {
        v105 = (void *)v124;
        if ( (unsigned __int64)(*((_QWORD *)&v125 + 1) + 1LL) >= 0x1000 )
        {
          if ( (unsigned __int64)(v124 - *(_QWORD *)(v124 - 8) - 8) > 0x1F )
LABEL_193:
            __fastfail(5u);
          v105 = *(void **)(v124 - 8);
        }
        sub_1409DB4C0(lpMem: v105);
      }
      sub_1406137D0(a1);
      v78 = 5;
      goto LABEL_186;
    }
    sub_140016F80(a1: &v126, a2: v145);
    v130 = sub_14006CDD0(a1: v155);
    v131 = sub_14006CB10(a1: v155);
    v52 = *(_QWORD *)(a1 + 256);
    if ( v52 == *(_QWORD *)(a1 + 264) )
    {
      sub_1406125A0(a1: v44, a2: v52, a3: &v126);
    }
    else
    {
      *(_OWORD *)v52 = 0;
      *(_QWORD *)(v52 + 16) = 0;
      *(_QWORD *)(v52 + 24) = 0;
      *(_QWORD *)v52 = v126;
      *(_QWORD *)(v52 + 8) = v127;
      *(_QWORD *)(v52 + 16) = v128;
      *(_QWORD *)(v52 + 24) = v129;
      v128 = 0;
      v129 = 15;
      LOBYTE(v126) = 0;
      *(_DWORD *)(v52 + 32) = v130;
      *(_DWORD *)(v52 + 36) = v131;
      *(_QWORD *)(a1 + 256) += 40LL;
    }
    if ( v129 > 0xF )
    {
      v53 = (void *)v126;
      if ( v129 + 1 >= 0x1000 )
      {
        if ( (unsigned __int64)(v126 - *(_QWORD *)(v126 - 8) - 8) > 0x1F )
          goto LABEL_193;
        v53 = *(void **)(v126 - 8);
      }
      sub_1409DB4C0(lpMem: v53);
    }
    v126 = 19937;
    v128 = 0;
    v129 = 31;
    sub_14006DA50(a1: v155);
    sub_140016F80(a1: &v126, a2: v46);
    v130 = *((_DWORD *)v46 + 14);
    v131 = *((_DWORD *)v46 + 15);
    v54 = *(_QWORD *)(a1 + 256);
    if ( v54 == *(_QWORD *)(a1 + 264) )
    {
      sub_1406125A0(a1: v44, a2: v54, a3: &v126);
    }
    else
    {
      *(_OWORD *)v54 = 0;
      *(_QWORD *)(v54 + 16) = 0;
      *(_QWORD *)(v54 + 24) = 0;
      *(_QWORD *)v54 = v126;
      *(_QWORD *)(v54 + 8) = v127;
      *(_QWORD *)(v54 + 16) = v128;
      *(_QWORD *)(v54 + 24) = v129;
      v128 = 0;
      v129 = 15;
      LOBYTE(v126) = 0;
      *(_DWORD *)(v54 + 32) = v130;
      *(_DWORD *)(v54 + 36) = v131;
      *(_QWORD *)(a1 + 256) += 40LL;
    }
    if ( v129 > 0xF )
    {
      v55 = (void *)v126;
      if ( v129 + 1 >= 0x1000 )
      {
        if ( (unsigned __int64)(v126 - *(_QWORD *)(v126 - 8) - 8) > 0x1F )
          goto LABEL_193;
        v55 = *(void **)(v126 - 8);
      }
      sub_1409DB4C0(lpMem: v55);
    }
    v126 = 19937;
    v128 = 0;
    v129 = 31;
    lpMem = nullptr;
    v56 = sub_140A24F50(a1: v155, a2: &lpMem);
    v57 = v56;
    if ( v56 != 0 )
      break;
    *(_QWORD *)&v114 = &CSA_HEADER::`vftable';
    *((_QWORD *)&v114 + 1) = 0;
    v115 = 0u;
    sub_1406171E0(a1: &v114, a2: lpMem);
    if ( HIDWORD(v115) != *((_DWORD *)v46 + 14) )
    {
      v78 = 9;
      v79 = "Incorrect size";
      goto LABEL_160;
    }
    if ( v107[0] != (_BYTE)v57 && DWORD2(v115) != *((_DWORD *)v46 + 15) )
    {
      v78 = 10;
      v79 = "Incorrect hash";
LABEL_160:
      sub_140018D50(a1: v109, a2: v79);
      goto LABEL_161;
    }
    *((_DWORD *)v46 + 10) = HIDWORD(v114);
    *((_DWORD *)v46 + 11) = v115;
    *((_DWORD *)v46 + 12) = WORD3(v115);
    sub_140613100(a1: &v148);
    sub_140615940(a1: &v148, a2: lpMem);
    *((_DWORD *)v46 + 13) = v149;
    sub_1406157D0(a1: v46);
    v111 = v150.m128i_i64[1];
    v60 = v150.m128i_i64[0];
    if ( v150.m128i_i64[0] == v150.m128i_i64[1] )
      goto LABEL_136;
    do
    {
      v61 = *(_QWORD *)(v60 + 32);
      v62 = v60 + 16;
      if ( *(_QWORD *)(v60 + 40) > 0xFu )
        v62 = *(_QWORD *)(v60 + 16);
      if ( v61 != 0 )
      {
        v63 = v61 + v62;
        LOBYTE(v58) = 47;
        v64 = sub_1409D1F00(a1: v62, a2: v61 + v62, a3: v58, a4: v59);
        if ( v64 != v63
          && v64 - v62 != -1
          && (unsigned __int8)sub_140059D90(
                                a1: off_140FE0B08,
                                a2: "PackedFile paths should not contain forward slashes!") != 0 )
        {
          __debugbreak();
        }
      }
      sub_14004F770(a1: &v136, a2: v60 + 16);
      v65 = sub_1400512B0(a1: &v136, a2: &v126);
      v66 = sub_140054AA0(a1: v65);
      v67 = sub_140016F80(a1: v147, a2: v66);
      sub_140069540(a1: &v121, a2: v67);
      sub_14004FE80(a1: &v126);
      v68 = &v121;
      if ( v123 > 0xF )
        v68 = (__int128 *)v121;
      v69 = 0;
      v70 = 0xCBF29CE484222325uLL;
      if ( v122 != 0 )
      {
        do
          v70 = 0x100000001B3LL * (*((unsigned __int8 *)v68 + v69++) ^ (unsigned __int64)v70);
        while ( v69 < v122 );
        v48 = v107[0];
      }
      if ( *(_QWORD *)(sub_140023780(a1: a1 + 184, a2: &v116, a3: &v121, a4: v70) + 8) != 0 )
      {
        v88 = *(_QWORD *)(v60 + 32);
        if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v88) >= 0x10 )
        {
          if ( *(_QWORD *)(v60 + 40) <= 0xFu )
            v89 = v60 + 16;
          else
            v89 = *(_QWORD *)(v60 + 16);
          sub_1400249F0(
            a1: (unsigned int)&v132,
            a2: (unsigned __int8)v107[0],
            a3: v60 + 16,
            a4: (unsigned int)"Duplicate file '",
            a5: 16,
            a6: v89,
            a7: *(_QWORD *)(v60 + 32));
          v90 = sub_14004E5C0(a1: &v132, a2: "' found in archive. This archive is corrupt.", a3: 44);
          v124 = *(_OWORD *)v90;
          v125 = *(_OWORD *)(v90 + 16);
          *(_QWORD *)(v90 + 16) = 0;
          *(_QWORD *)(v90 + 24) = 15;
          *(_BYTE *)v90 = 0;
          sub_140018C70(a1: v109, a2: &v124);
          if ( *((_QWORD *)&v125 + 1) > 0xFu )
          {
            v91 = (void *)v124;
            if ( (unsigned __int64)(*((_QWORD *)&v125 + 1) + 1LL) >= 0x1000 )
            {
              if ( (unsigned __int64)(v124 - *(_QWORD *)(v124 - 8) - 8) > 0x1F )
                __fastfail(5u);
              v91 = *(void **)(v124 - 8);
            }
            sub_1409DB4C0(lpMem: v91);
          }
          sub_14001B5A0(a1: &v132);
          sub_1406137D0(a1);
          v78 = 7;
LABEL_157:
          sub_14001B5A0(a1: &v121);
          *(_QWORD *)&v121 = 19937;
          v122 = 0;
          v123 = 31;
          sub_14004FE80(a1: &v136);
          sub_14004D190(a1: &v150);
          v150 = si128;
          v151 = 19937;
          v148 = &IPXSerializable::`vftable';
LABEL_161:
          *(_QWORD *)&v114 = &IPXSerializable::`vftable';
          goto LABEL_168;
        }
LABEL_199:
        sub_14001B680(a1: v88, a2: v71);
      }
      if ( *(_DWORD *)(v60 + 12) > 0xC800000u )
      {
        v80 = sub_14005A770(a1: &v126, a2: 209715200);
        v81 = sub_14005A770(a1: v154, a2: *(unsigned int *)(v60 + 12));
        v82 = sub_1400565C0(a1: v153, a2: "'", a3: v60 + 16);
        v83 = sub_140056550(a1: &v116, a2: v82, a3: "' File size is above the maximum allowed value! Size = ");
        v84 = sub_1400564B0(a1: &v134, a2: v83, a3: v81);
        v85 = sub_140056550(a1: &v124, a2: v84, a3: " bytes (max = ");
        v86 = sub_1400564B0(a1: &v132, a2: v85, a3: v80);
        v87 = sub_140056550(a1: v147, a2: v86, a3: " bytes), This archive is corrupt.");
        sub_140018C70(a1: v109, a2: v87);
        sub_140017B20(a1: v147);
        sub_140017B20(a1: &v132);
        sub_140017B20(a1: &v124);
        sub_140017B20(a1: &v134);
        sub_140017B20(a1: &v116);
        sub_140017B20(a1: v153);
        sub_140017B20(a1: v154);
        sub_140017B20(a1: &v126);
        sub_1406137D0(a1);
        v78 = 8;
        goto LABEL_157;
      }
      v72 = sub_1409DB470(a1: 56);
      v73 = v72;
      v113 = v72;
      if ( v72 != 0 )
      {
        v74 = sub_14001CF30(a1: v60 + 16);
        v75 = sub_140613120(
                a1: v73,
                a2: (_DWORD)v46,
                a3: v74,
                a4: *(_DWORD *)(v60 + 8),
                a5: *(_DWORD *)(v60 + 12),
                a6: *(_DWORD *)(v60 + 56));
      }
      else
      {
        v75 = 0;
      }
      sub_1406135C0(a1: v46, a2: v75);
      *(_QWORD *)sub_140613480(a1: a1 + 184, a2: &v121) = v75;
      sub_140017B20(a1: &v121);
      sub_14004FE80(a1: &v136);
      v60 += 64;
    }
    while ( v60 != v111 );
    v47 = v112;
LABEL_136:
    sub_14006BF10(a1: v155);
    sub_14004D190(a1: &v150);
    v150 = si128;
    v151 = 19937;
    v148 = &IPXSerializable::`vftable';
    *(_QWORD *)&v114 = &IPXSerializable::`vftable';
    v76 = lpMem;
    if ( lpMem != nullptr )
    {
      sub_140084AA0(a1: lpMem);
      sub_1409DB4C0(lpMem: v76);
    }
    lpMem = (LPVOID)19937;
    sub_14006BD90(a1: v155);
    sub_14004FE80(a1: v152);
    if ( v146 > 0xF )
    {
      v77 = (void *)v145[0];
      if ( v146 + 1 >= 0x1000 )
      {
        if ( (unsigned __int64)(v145[0] - *(_QWORD *)(v145[0] - 8LL) - 8LL) > 0x1F )
          goto LABEL_194;
        v77 = *(void **)(v145[0] - 8LL);
      }
      sub_1409DB4C0(lpMem: v77);
    }
    v46 += 11;
    if ( v46 == v47 )
      return 0;
    v44 = a1 + 248;
  }
  if ( (unsigned __int8)sub_140059D90(a1: off_140FE0AE0, a2: "Load packfile header returned error code %d", v56) != 0 )
    __debugbreak();
  v92 = sub_140054AA0(a1: v152);
  if ( v57 >= 0 )
  {
    v93 = (_BYTE *)sub_140057AF0(a1: (char *)&v117 + 5, a2: (unsigned int)v57);
  }
  else
  {
    v93 = (_BYTE *)(sub_140057AF0(a1: (char *)&v117 + 5, a2: (unsigned int)-v57) - 1);
    *v93 = 45;
  }
  sub_140056380(a1: v147, a2: v93, a3: (char *)&v117 + 5, a4: v107);
  v94 = sub_140010C20(a1: v147, a2: 0, a3: "Load packfile header returned error code ", a4: 41);
  v124 = 0;
  v125 = 0u;
  v124 = *(_OWORD *)v94;
  v125 = *(_OWORD *)(v94 + 16);
  *(_QWORD *)(v94 + 16) = 0;
  *(_QWORD *)(v94 + 24) = 15;
  *(_BYTE *)v94 = 0;
  v95 = sub_14004E5C0(a1: &v124, a2: " for file '", a3: 11);
  v134 = 0;
  v135 = 0u;
  v134 = *(_OWORD *)v95;
  v135 = *(_OWORD *)(v95 + 16);
  *(_QWORD *)(v95 + 16) = 0;
  *(_QWORD *)(v95 + 24) = 15;
  *(_BYTE *)v95 = 0;
  v96 = sub_1400564E0(a1: &v132, a2: &v134, a3: v92);
  v97 = sub_14004E5C0(a1: v96, a2: "'", a3: 1);
  v116 = *(_OWORD *)v97;
  v117 = *(_OWORD *)(v97 + 16);
  *(_QWORD *)(v97 + 16) = 0;
  *(_QWORD *)(v97 + 24) = 15;
  *(_BYTE *)v97 = 0;
  sub_140018C70(a1: v109, a2: &v116);
  sub_14001B5A0(a1: &v116);
  sub_14001B5A0(a1: &v132);
  *(_QWORD *)&v132 = 19937;
  *(_QWORD *)&v133 = 0;
  *((_QWORD *)&v133 + 1) = 31;
  sub_14001B5A0(a1: &v134);
  *(_QWORD *)&v134 = 19937;
  *(_QWORD *)&v135 = 0;
  *((_QWORD *)&v135 + 1) = 31;
  sub_14001B5A0(a1: &v124);
  *(_QWORD *)&v124 = 19937;
  *(_QWORD *)&v125 = 0;
  *((_QWORD *)&v125 + 1) = 31;
  sub_14001B5A0(a1: v147);
  sub_1406137D0(a1);
  v78 = 6;
LABEL_168:
  v98 = lpMem;
  if ( lpMem != nullptr )
  {
    sub_140084AA0(a1: lpMem);
    sub_1409DB4C0(lpMem: v98);
  }
  lpMem = (LPVOID)19937;
LABEL_186:
  sub_14006BD90(a1: v155);
  sub_14004FE80(a1: v152);
  if ( v146 <= 0xF )
    return v78;
  v106 = (void *)v145[0];
  if ( v146 + 1 >= 0x1000 )
  {
    if ( (unsigned __int64)(v145[0] - *(_QWORD *)(v145[0] - 8LL) - 8LL) > 0x1F )
LABEL_194:
      __fastfail(5u);
    v106 = *(void **)(v145[0] - 8LL);
  }
  sub_1409DB4C0(lpMem: v106);
  return v78;
}