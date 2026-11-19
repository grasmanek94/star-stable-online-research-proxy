__int64 __fastcall sub_1401DAB30(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned __int8 a6, char a7)
{
  __int64 v9; // rdx
  __int64 *v10; // rbx
  __int64 v11; // rdi
  void ***v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // r13
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rdi
  char v19; // al
  _DWORD *v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // rbx
  __int64 v23; // rcx
  _QWORD *v24; // rdx
  _OWORD *v25; // r15
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // xmm0_8
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int128 v53; // xmm0
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rcx
  int *v61; // rcx
  int *v62; // rdx
  int v63; // eax
  int v64; // edx
  int v65; // xmm0_4
  int *v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // r8
  __int64 v70; // rdx
  char v71; // r13
  _DWORD *v72; // rbx
  __int64 v73; // r8
  int v74; // ebx
  __int64 v75; // rax
  __int64 v76; // rdx
  char v77; // al
  __int64 v78; // r8
  __int64 v79; // rdx
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rbx
  __int64 v83; // rdx
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rax
  __int64 v87; // r8
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 *v90; // rbx
  __int64 v91; // rbx
  _QWORD *v92; // rax
  __int64 v93; // rcx
  _QWORD *v94; // r13
  __int64 v95; // rbx
  __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // rax
  __int64 v100; // r8
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 *v104; // rbx
  __int64 v105; // rax
  _QWORD *v106; // rax
  __int64 v107; // rcx
  _QWORD *v108; // rsi
  __int64 v109; // rbx
  __int64 v110; // rax
  __int64 v111; // rdx
  __int64 v112; // rax
  __int64 v113; // rdx
  __int64 v114; // rbx
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // r8
  char **v120; // rcx
  char v121; // al
  int v122; // [rsp+28h] [rbp-E0h]
  int v123; // [rsp+28h] [rbp-E0h]
  int v124; // [rsp+38h] [rbp-D0h]
  int v125; // [rsp+38h] [rbp-D0h]
  int v126; // [rsp+58h] [rbp-B0h] BYREF
  int v127; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v128; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v129; // [rsp+68h] [rbp-A0h]
  _QWORD v130[2]; // [rsp+70h] [rbp-98h] BYREF
  void **v131; // [rsp+80h] [rbp-88h] BYREF
  int v132; // [rsp+88h] [rbp-80h]
  int v133; // [rsp+8Ch] [rbp-7Ch]
  void **v134; // [rsp+90h] [rbp-78h] BYREF
  int v135; // [rsp+98h] [rbp-70h]
  int v136; // [rsp+9Ch] [rbp-6Ch]
  __int64 v137; // [rsp+A0h] [rbp-68h]
  void **v138; // [rsp+A8h] [rbp-60h] BYREF
  int v139; // [rsp+B0h] [rbp-58h]
  int v140; // [rsp+B4h] [rbp-54h]
  void **v141; // [rsp+B8h] [rbp-50h] BYREF
  int v142; // [rsp+C0h] [rbp-48h]
  int v143; // [rsp+C4h] [rbp-44h]
  void **v144; // [rsp+C8h] [rbp-40h] BYREF
  int v145; // [rsp+D0h] [rbp-38h]
  int v146; // [rsp+D4h] [rbp-34h]
  void **v147; // [rsp+D8h] [rbp-30h] BYREF
  int v148; // [rsp+E0h] [rbp-28h]
  int v149; // [rsp+E4h] [rbp-24h]
  _QWORD v150[2]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v151[16]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v152[16]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v153[16]; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v154[16]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v155[16]; // [rsp+138h] [rbp+30h] BYREF
  char v156[16]; // [rsp+148h] [rbp+40h] BYREF
  char v157[16]; // [rsp+158h] [rbp+50h] BYREF
  char v158[16]; // [rsp+168h] [rbp+60h] BYREF
  char v159[16]; // [rsp+178h] [rbp+70h] BYREF
  char v160[16]; // [rsp+188h] [rbp+80h] BYREF
  char v161[16]; // [rsp+198h] [rbp+90h] BYREF
  char v162[16]; // [rsp+1A8h] [rbp+A0h] BYREF
  char v163[16]; // [rsp+1B8h] [rbp+B0h] BYREF

  if ( *(_QWORD *)&nExitCode == 0 )
    return 0;
  v9 = *(_QWORD *)&nExitCode + 120LL;
  v10 = (__int64 *)qword_14138A6F0;
  if ( a1 == 2 )
  {
    v138 = &PXEngine::SafeActorPtr::`vftable';
    v139 = 0;
    v140 = 195948557;
    sub_1405F1D40(a1: (__int64)v151, a2: v9);
    v141 = &PXEngine::SafeActorPtr::`vftable';
    v142 = 0;
    v143 = 195948557;
    v11 = sub_1405FD6C0(
            a1: v10,
            a2: (__int64)v157,
            a3: (__int64)v151,
            a4: "global/NetworkObjects/HorseSlave",
            a5: (__int64)&v141,
            a6: (__int64)&v138,
            a7: nullptr,
            a8: 0,
            a9: 0);
    if ( (unsigned __int8)sub_1406006A0(a1: v10, a2: v11, a3: 120) != 0 )
      sub_1405F1D60(a1: (__int64)v130, a2: *(_DWORD *)(v11 + 12), a3: *(_DWORD *)(v11 + 8));
    else
      v130[1] = 0xBADF00D00000000LL;
    v130[0] = &PXEngine::SafeActorPtrAs<CPXHorse>::`vftable';
    v12 = (void ***)v130;
  }
  else
  {
    v144 = &PXEngine::SafeActorPtr::`vftable';
    v145 = 0;
    v146 = 195948557;
    sub_1405F1D40(a1: (__int64)v152, a2: v9);
    v147 = &PXEngine::SafeActorPtr::`vftable';
    v148 = 0;
    v149 = 195948557;
    v13 = sub_1405FD6C0(
            a1: v10,
            a2: (__int64)v158,
            a3: (__int64)v152,
            a4: "global/NetworkObjects/Horse",
            a5: (__int64)&v147,
            a6: (__int64)&v144,
            a7: nullptr,
            a8: 0,
            a9: 0);
    if ( (unsigned __int8)sub_1406006A0(a1: v10, a2: v13, a3: 120) != 0 )
    {
      sub_1405F1D60(a1: (__int64)&v131, a2: *(_DWORD *)(v13 + 12), a3: *(_DWORD *)(v13 + 8));
    }
    else
    {
      v132 = 0;
      v133 = 195948557;
    }
    v131 = &PXEngine::SafeActorPtrAs<CPXHorse>::`vftable';
    v12 = &v131;
  }
  v14 = sub_1405F1EE0(a1: (__int64)v12);
  if ( v14 == 0 || a4 == 0 )
  {
    v120 = off_140F4E650;
    goto LABEL_171;
  }
  v15 = sub_14005D330();
  v16 = sub_1400AC1A0(a1: v14, a2: a4, a3: 0, a4: 0, a5: 0, a6: -1, a7: 0);
  v17 = v16;
  if ( v16 != 0 )
  {
    v19 = sub_140645790(a1: v16, a2: 120, a3: v15);
    v18 = 0;
    if ( v19 != 0 )
      v18 = v17;
  }
  else
  {
    v18 = 0;
  }
  if ( *(_QWORD *)(v18 + 80) == 0 )
  {
    v120 = off_140F4E6A8;
LABEL_171:
    v121 = sub_140059CA0(a1: v120);
LABEL_172:
    if ( v121 != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  if ( a1 != 0 )
  {
    if ( a1 == 1 )
      *(_BYTE *)(v18 + 3543) |= 0x20u;
  }
  else
  {
    sub_1400C28E0(a1: v18);
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 168LL))(a1: v18, a2: a5);
  sub_1405F1D40(a1: (__int64)v150, a2: a3);
  v150[0] = &PXEngine::SafeActorPtrAs<CPXPlayerTPNet>::`vftable';
  sub_1401D00E0(a1: v18, a2: v150);
  v20 = (_DWORD *)(v18 + 224);
  v21 = v18 + 228;
  v22 = (_QWORD *)(v18 + 232);
  if ( v18 == 0 )
    v20 = nullptr;
  *v20 = *(_DWORD *)a2;
  if ( v18 == 0 )
    v21 = 4;
  *(_DWORD *)v21 = *(_DWORD *)(a2 + 4);
  v23 = v18 + 232;
  if ( v18 == 0 )
    v23 = 8;
  if ( v20 != (_DWORD *)a2 )
  {
    v24 = (_QWORD *)(a2 + 8);
    if ( *(_QWORD *)(a2 + 32) > 0xFu )
      v24 = (_QWORD *)*v24;
    sub_14000D680(a1: v23, a2: v24, a3: *(_QWORD *)(a2 + 24));
  }
  v25 = (_OWORD *)(a2 + 48);
  v26 = v18 + 264;
  if ( v18 == 0 )
    v26 = 40;
  *(_DWORD *)v26 = *(_DWORD *)(a2 + 40);
  v27 = v18 + 268;
  if ( v18 == 0 )
    v27 = 44;
  *(_BYTE *)v27 = *(_BYTE *)(a2 + 44);
  v28 = v18 + 272;
  if ( v18 == 0 )
    v28 = 48;
  v29 = v18 + 296;
  *(_OWORD *)v28 = *v25;
  *(_QWORD *)(v28 + 16) = *(_QWORD *)(a2 + 64);
  if ( v18 == 0 )
    v29 = 72;
  *(_DWORD *)v29 = *(_DWORD *)(a2 + 72);
  v30 = v18 + 300;
  if ( v18 == 0 )
    v30 = 76;
  *(_DWORD *)v30 = *(_DWORD *)(a2 + 76);
  v31 = v18 + 304;
  if ( v18 == 0 )
    v31 = 80;
  *(_DWORD *)v31 = *(_DWORD *)(a2 + 80);
  v32 = v18 + 308;
  if ( v18 == 0 )
    v32 = 84;
  *(_DWORD *)v32 = *(_DWORD *)(a2 + 84);
  v33 = v18 + 312;
  if ( v18 == 0 )
    v33 = 88;
  *(_BYTE *)v33 = *(_BYTE *)(a2 + 88);
  v34 = v18 + 313;
  if ( v18 == 0 )
    v34 = 89;
  *(_BYTE *)v34 = *(_BYTE *)(a2 + 89);
  v35 = v18 + 314;
  if ( v18 == 0 )
    v35 = 90;
  *(_BYTE *)v35 = *(_BYTE *)(a2 + 90);
  v36 = v18 + 315;
  if ( v18 == 0 )
    v36 = 91;
  *(_BYTE *)v36 = *(_BYTE *)(a2 + 91);
  v37 = v18 + 316;
  if ( v18 == 0 )
    v37 = 92;
  *(_DWORD *)v37 = *(_DWORD *)(a2 + 92);
  v38 = v18 + 320;
  if ( v18 == 0 )
    v38 = 96;
  *(_DWORD *)v38 = *(_DWORD *)(a2 + 96);
  v39 = v18 + 324;
  if ( v18 == 0 )
    v39 = 100;
  *(_DWORD *)v39 = *(_DWORD *)(a2 + 100);
  v40 = v18 + 328;
  if ( v18 == 0 )
    v40 = 104;
  *(_DWORD *)v40 = *(_DWORD *)(a2 + 104);
  v41 = v18 + 332;
  if ( v18 == 0 )
    v41 = 108;
  *(_DWORD *)v41 = *(_DWORD *)(a2 + 108);
  v42 = v18 + 336;
  if ( v18 == 0 )
    v42 = 112;
  *(_DWORD *)v42 = *(_DWORD *)(a2 + 112);
  v43 = v18 + 340;
  if ( v18 == 0 )
    v43 = 116;
  *(_DWORD *)v43 = *(_DWORD *)(a2 + 116);
  v44 = v18 + 344;
  if ( v18 == 0 )
    v44 = 120;
  *(_DWORD *)v44 = *(_DWORD *)(a2 + 120);
  v45 = v18 + 348;
  if ( v18 == 0 )
    v45 = 124;
  *(_DWORD *)v45 = *(_DWORD *)(a2 + 124);
  v46 = v18 + 352;
  if ( v18 == 0 )
    v46 = 128;
  *(_DWORD *)v46 = *(_DWORD *)(a2 + 128);
  v47 = v18 + 356;
  if ( v18 == 0 )
    v47 = 132;
  *(_QWORD *)v47 = *(_QWORD *)(a2 + 132);
  *(_DWORD *)(v47 + 8) = *(_DWORD *)(a2 + 140);
  *(_BYTE *)(v47 + 12) = *(_BYTE *)(a2 + 144);
  v48 = v18 + 376;
  if ( v18 == 0 )
    v48 = 152;
  sub_1401D4D40(a1: v48, a2: a2 + 152);
  v49 = v18 + 440;
  if ( v18 == 0 )
    v49 = 216;
  *(_BYTE *)v49 = *(_BYTE *)(a2 + 216);
  v50 = *(_QWORD *)(a2 + 220);
  v51 = v18 + 444;
  if ( v18 == 0 )
    v51 = 220;
  v129 = a2 + 220;
  *(_QWORD *)v51 = v50;
  *(_DWORD *)(v51 + 8) = *(_DWORD *)(a2 + 228);
  v52 = v18 + 456;
  if ( v18 == 0 )
    v52 = 232;
  *(_QWORD *)v52 = *(_QWORD *)(a2 + 232);
  *(_DWORD *)(v52 + 8) = *(_DWORD *)(a2 + 240);
  v53 = *(_OWORD *)(a2 + 244);
  v137 = a2 + 244;
  v54 = v18 + 468;
  if ( v18 == 0 )
    v54 = 244;
  *(_OWORD *)v54 = v53;
  v55 = v18 + 484;
  if ( v18 == 0 )
    v55 = 260;
  v56 = v18 + 500;
  *(_OWORD *)v55 = *(_OWORD *)(a2 + 260);
  if ( v18 == 0 )
    v56 = 276;
  *(_QWORD *)v56 = *(_QWORD *)(a2 + 276);
  *(_DWORD *)(v56 + 8) = *(_DWORD *)(a2 + 284);
  v57 = v18 + 512;
  if ( v18 == 0 )
    v57 = 288;
  *(_DWORD *)v57 = *(_DWORD *)(a2 + 288);
  v58 = v18 + 516;
  if ( v18 == 0 )
    v58 = 292;
  *(_WORD *)v58 = *(_WORD *)(a2 + 292);
  v59 = v18 + 518;
  if ( v18 == 0 )
    v59 = 294;
  *(_BYTE *)v59 = *(_BYTE *)(a2 + 294);
  v60 = v18 + 519;
  if ( v18 == 0 )
    v60 = 295;
  *(_BYTE *)v60 = *(_BYTE *)(a2 + 295);
  sub_1400787F0(a1: v18 + 536, a2: &String2);
  sub_14007E430(a1: v18 + 536, a2: 65001);
  if ( *(_QWORD *)(v18 + 256) > 0xFu )
    v22 = (_QWORD *)*v22;
  sub_140078700(a1: v18 + 536, a2: v22);
  sub_14007E430(a1: v18 + 536, a2: 0);
  v61 = (int *)(v18 + 332);
  *(_DWORD *)(v18 + 16) = *(_DWORD *)a2;
  v62 = (int *)(v18 + 328);
  *(float *)(v18 + 1716) = (float)*(int *)(a2 + 112);
  *(float *)(v18 + 1748) = (float)*(int *)(a2 + 116);
  *(float *)(v18 + 1780) = (float)*(int *)(a2 + 120);
  *(float *)(v18 + 1844) = (float)*(int *)(a2 + 124);
  *(float *)(v18 + 1812) = (float)*(int *)(a2 + 128);
  if ( v18 != -332 && v18 != -328 && *v61 < (unsigned int)*v62 )
    *v61 = *v62;
  *(_DWORD *)(v18 + 1696) = *(_DWORD *)(v18 + 1692);
  v63 = *v62;
  v64 = *v61;
  if ( *v61 <= (unsigned int)v63 )
  {
    v65 = 1065353216;
  }
  else
  {
    v127 = 1065353216;
    v65 = 0;
    *(float *)&v128 = (float)((float)*(int *)(v18 + 316) - (float)v63) / (float)((float)v64 - (float)v63);
    if ( *(float *)&v128 >= 0.0 )
    {
      v66 = &v127;
      if ( *(float *)&v128 <= 1.0 )
        v66 = (int *)&v128;
      v65 = *v66;
    }
  }
  *(_DWORD *)(v18 + 1692) = v65;
  v67 = sub_140487E00(a1: v159);
  v68 = sub_1405F1EE0(a1: v67);
  if ( v68 == 0 )
  {
    v121 = sub_140059D90(a1: off_140F4E6E8, a2: "Equipment Manager is not available in PXHorse::CreateHorse");
    goto LABEL_172;
  }
  sub_140488ED0(a1: v68, a2, a3: v18);
  if ( qword_14138AA70 == 0 )
  {
    v120 = off_140F38D30;
    goto LABEL_171;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 104LL))(a1: v18);
  sub_1401F6DF0(a1: v18, a2: *(unsigned int *)(a2 + 4), a3: 0);
  *(_BYTE *)(v18 + 3546) &= ~4u;
  *(_BYTE *)(v18 + 3546) |= 4 * (a7 ^ 1);
  if ( (unsigned __int8)sub_1400AE640(a1: v18) != 0 || (*(_BYTE *)(v18 + 3543) & 0x20) != 0 )
  {
    v77 = sub_1400AE640(a1: v18);
    v79 = *(unsigned int *)(a2 + 288);
    if ( v77 != 0 )
    {
      sub_1401F86B0(a1: v18, a2: v79, a3: 0);
      v82 = sub_1400AF100(a1: v81, a2: v80);
      sub_1405F1D40(a1: (__int64)v153, a2: v18 + 120);
      sub_1405FFBA0(a1: v82, a2: a5, a3: v153);
      sub_1401D00F0(a1: v18);
      LOBYTE(v83) = 1;
      sub_1400C72E0(a1: v18, a2: v83);
      v86 = sub_1400AF100(a1: v85, a2: v84);
      sub_1400CC2F0(a1: v18, a2: v86);
      LOBYTE(v87) = 1;
      LOBYTE(v124) = (*(_BYTE *)(v18 + 3546) & 4) != 0;
      LOBYTE(v122) = 1;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD, int, _QWORD, int))(*(_QWORD *)v18 + 1056LL))(
        a1: v18,
        a2: *(unsigned __int8 *)(a2 + 44),
        a3: v87,
        a4: 0,
        a5: v122,
        a6: 0,
        a7: v124);
    }
    else
    {
      LOBYTE(v78) = 1;
      sub_1401F86B0(a1: v18, a2: v79, a3: v78);
      v90 = (__int64 *)sub_1400AF100(a1: v89, a2: v88);
      sub_1405F1D40(a1: (__int64)v154, a2: v14 + 120);
      v91 = sub_1405FADF0(
              a1: v90,
              a2: (__int64)v160,
              a3: (__int64)v154,
              a4: (int)"HorseSaddleItem",
              a5: -1,
              a6: -1,
              a7: -1,
              a8: 1);
      if ( (unsigned __int8)sub_1405F1F70(a1: v91, a2: 126) != 0 )
      {
        sub_1405F1D60(a1: (__int64)&v134, a2: *(_DWORD *)(v91 + 12), a3: *(_DWORD *)(v91 + 8));
      }
      else
      {
        v135 = 0;
        v136 = 195948557;
      }
      v134 = &PXEngine::SafeActorPtrAs<CPXQuestItem>::`vftable';
      v92 = (_QWORD *)sub_1405F1EE0(a1: (__int64)&v134);
      v94 = v92;
      if ( v92 != nullptr )
      {
        v95 = *v92;
        v96 = sub_1400FBAF0(a1: v93);
        (*(void (__fastcall **)(_QWORD *, __int64, int *, _QWORD, __int64))(v95 + 24))(
          a1: v94,
          a2: 126048,
          a3: &dword_141310688,
          a4: 0,
          a5: v96);
      }
      sub_1400CC300(a1: v18);
      *(_BYTE *)(*(_QWORD *)(v18 + 80) + 80LL) &= ~1u;
      *(_BYTE *)(*(_QWORD *)(v18 + 80) + 80LL) &= ~4u;
      v99 = sub_1400AF100(a1: v98, a2: v97);
      sub_1400CC2F0(a1: v18, a2: v99);
      sub_1400C72E0(a1: v18, a2: 0);
      LOBYTE(v100) = 1;
      LOBYTE(v125) = 0;
      LOBYTE(v123) = 1;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD, int, _QWORD, int))(*(_QWORD *)v18 + 1056LL))(
        a1: v18,
        a2: *(unsigned __int8 *)(a2 + 44),
        a3: v100,
        a4: 0,
        a5: v123,
        a6: 0,
        a7: v125);
    }
    if ( qword_14138AA70 == 0 )
    {
      if ( (unsigned __int8)sub_140059CA0(a1: off_140F38D30) != 0 )
        __debugbreak();
      sub_1409E29B8(a1: 999);
      __debugbreak();
    }
    v101 = sub_140619130(a1: qword_14138AA70);
    v102 = sub_1401D09F0(a1: v101, a2: v161);
    v103 = sub_1405F1EE0(a1: v102);
    v71 = a7;
    if ( a7 == 0 && *(_BYTE *)(a2 + 91) == 0 && v103 != 0 )
    {
      sub_1403C2240(a1: v103, a2: *(_DWORD *)a2);
      sub_1405F1EE0(a1: (__int64)&off_141310F50);
      goto LABEL_143;
    }
  }
  else
  {
    LOBYTE(v69) = 1;
    sub_1401F86B0(a1: v18, a2: *(unsigned int *)(a2 + 288), a3: v69);
    LOBYTE(v70) = 1;
    sub_1400C72E0(a1: v18, a2: v70);
    v71 = a7;
  }
  v72 = (_DWORD *)sub_1405F1EE0(a1: (__int64)&off_141310F50);
  if ( v71 == 0
    || (unsigned __int8)sub_1400AE640(a1: v18) != 0
    || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v18 + 1064LL))(a1: v18) != 1
    || v72 == nullptr
    || (v72[4] != *(_DWORD *)(v18 + 16)
     || (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)v72 + 1064LL))(a1: v72) != 1)
    && v72[4] == *(_DWORD *)(v18 + 16) )
  {
    if ( *(_BYTE *)(a2 + 44) == 2 )
    {
      v74 = 1;
      do
      {
        v75 = *(_QWORD *)v18;
        v76 = *(unsigned __int8 *)(a2 + 44);
        LOBYTE(v124) = 0;
        LOBYTE(v73) = 1;
        LOBYTE(v126) = 0;
        LOBYTE(v122) = a7 ^ 1;
        (*(void (__fastcall **)(__int64, __int64, __int64, _OWORD *, int, int *, int))(v75 + 1056))(
          a1: v18,
          a2: v76,
          a3: v73,
          a4: v25,
          a5: v122,
          a6: &v126,
          a7: v124);
        if ( (_BYTE)v126 != 0 )
          v74 = 0;
        v25 = (_OWORD *)((char *)v25 + 12);
      }
      while ( v25 != (_OWORD *)(a2 + 72) );
      if ( v74 == 0 )
        goto LABEL_144;
    }
    else
    {
      LOBYTE(v124) = 0;
      LOBYTE(v73) = 1;
      LOBYTE(v122) = 1;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD, int, _QWORD, int))(*(_QWORD *)v18 + 1056LL))(
        a1: v18,
        a2: *(unsigned __int8 *)(a2 + 44),
        a3: v73,
        a4: 0,
        a5: v122,
        a6: 0,
        a7: v124);
    }
  }
LABEL_143:
  sub_1401E1CB0(a1: v18);
LABEL_144:
  v104 = (__int64 *)qword_14138A6F0;
  if ( qword_14138A6F0 == 0 )
  {
    if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  sub_1405F1D40(a1: (__int64)v155, a2: v18 + 120);
  v105 = sub_1405FADF0(
           a1: v104,
           a2: (__int64)v162,
           a3: (__int64)v155,
           a4: (int)"StarRiderStar",
           a5: -1,
           a6: -1,
           a7: -1,
           a8: 1);
  v106 = (_QWORD *)sub_1405F1EE0(a1: v105);
  v108 = v106;
  if ( v106 != nullptr )
  {
    v109 = *v106;
    v110 = sub_1400FBAF0(a1: v107);
    (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(v109 + 632))(a1: v108, a2: a6, a3: v110);
  }
  if ( *(_DWORD *)(v18 + 300) != 0 && ((unsigned __int8)v71 | (unsigned __int8)sub_1400AE640(a1: v18)) == 0 )
  {
    v111 = *(unsigned int *)(v18 + 300);
    if ( (_DWORD)v111 != 3 )
      sub_1401D58F0(a1: v18, a2: v111);
  }
  v112 = sub_1400FBAF0(a1: v107);
  sub_1400B0190(a1: v18, a2: v112);
  LOBYTE(v113) = 1;
  sub_1400C63A0(a1: v18, a2: v113);
  v114 = v129;
  sub_1400C6FF0(a1: v18, a2: v129, a3: v137, a4: 1);
  v115 = sub_1400C40D0(a1: v18, a2: v156);
  *(float *)(v18 + 728) = sub_14008CD90(a1: v115);
  *(_QWORD *)(v18 + 732) = 0;
  if ( (unsigned __int8)sub_1400AE640(a1: v18) != 0 )
  {
    if ( qword_14138A6F0 == 0 )
    {
      if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
        __debugbreak();
      sub_1409E29B8(a1: 999);
      __debugbreak();
    }
    v116 = sub_1403C4670(a1: v163, a2: qword_14138A6F0);
    v117 = sub_1405F1EE0(a1: v116);
    if ( v117 != 0 )
    {
      LOBYTE(v118) = 1;
      sub_1403C4EB0(a1: v117, a2: v114, a3: v118);
    }
  }
  return v18;
}