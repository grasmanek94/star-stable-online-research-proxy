// Hex-Rays pseudocode from SSOClient.exe 645.348067; IDA base 0x140000000.
// Filename is the queried RVA and may be inside a larger function.
void __fastcall sub_140794310(_BYTE *a1, __int64 a2, float *a3)
{
  float *v3; // r14
  __int64 v4; // r13
  _BYTE *v5; // rsi
  float v6; // xmm6_4
  float *v7; // r15
  float v8; // xmm0_4
  int v9; // xmm1_4
  float *v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  _OWORD *v13; // rax
  float *v14; // r12
  float v15; // xmm0_4
  float v16; // xmm0_4
  __int64 v17; // rbx
  __int64 v18; // rax
  float *v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // rax
  float *v22; // rax
  float v23; // xmm8_4
  float v24; // xmm7_4
  float v25; // xmm6_4
  float *v26; // rax
  float v27; // xmm2_4
  __m128 v28; // xmm7
  float v29; // xmm12_4
  float v30; // xmm9_4
  float v31; // xmm11_4
  float v32; // xmm15_4
  float v33; // xmm8_4
  float v34; // xmm10_4
  float v35; // xmm13_4
  float v36; // xmm14_4
  __m128 v37; // xmm6
  float v38; // xmm12_4
  float v39; // xmm11_4
  float v40; // xmm9_4
  __m128 v41; // xmm10
  float v42; // xmm8_4
  float v43; // xmm4_4
  __m128 v44; // xmm5
  __m128 v45; // xmm1
  float v46; // xmm15_4
  __m128 v47; // xmm1
  __m128 v48; // xmm1
  __m128 v49; // xmm1
  __m128 v50; // xmm0
  __m128 v51; // xmm0
  __m128 v52; // xmm0
  __m128 v53; // xmm10
  __m128 v54; // xmm10
  __m128 v55; // xmm10
  __m128 v56; // xmm1
  __m128 v57; // xmm1
  __m128 v58; // xmm1
  float v59; // xmm0_4
  float v60; // xmm0_4
  int v61; // edi
  int v62; // eax
  float v63; // xmm6_4
  int v64; // xmm0_4
  float v65; // xmm6_4
  float *v66; // rcx
  bool v67; // cc
  float v68; // xmm6_4
  float v69; // xmm0_4
  int *v70; // rax
  int v71; // eax
  __int64 v72; // rdx
  float v73; // xmm0_4
  __m128 *v74; // rax
  __m128 *v75; // rbx
  char v76; // cl
  __int64 v77; // rbx
  __int64 v78; // rax
  __int64 v79; // rcx
  float v80; // xmm2_4
  float v81; // xmm11_4
  double v82; // xmm0_8
  __int64 v83; // rbx
  __int64 v84; // rdx
  __int64 v85; // rdi
  __int64 v86; // rax
  float v87; // xmm2_4
  float v88; // xmm1_4
  float v89; // xmm1_4
  float v90; // xmm15_4
  float v91; // xmm1_4
  __m128 v92; // xmm5
  __m128 v93; // xmm4
  __m128 v94; // xmm3
  int v95; // eax
  __int64 v96; // rcx
  float v97; // xmm3_4
  float v98; // xmm15_4
  __m128 v99; // xmm5
  __m128 v100; // xmm4
  float v101; // xmm6_4
  float v102; // xmm0_4
  float v103; // xmm15_4
  float v104; // xmm0_4
  float *v105; // rax
  char v106; // al
  __int64 v107; // rdi
  __int64 v108; // rax
  __int128 *v109; // r15
  __int64 v110; // rbx
  __int64 v111; // rdi
  __int64 v112; // rax
  int v113; // ebx
  float v114; // xmm0_4
  int v115; // eax
  __int64 v116; // rbx
  __int64 v117; // rax
  __int64 v118; // rbx
  __int64 v119; // rax
  __int64 v120; // rdx
  __int64 v121; // r8
  unsigned __int8 *v122; // rax
  __int64 *v123; // r8
  __int64 *v124; // rax
  __int64 *v125; // rcx
  __int64 v126; // rax
  __int64 v127; // rbx
  __int64 v128; // rax
  float v129; // [rsp+98h] [rbp-80h]
  float v130; // [rsp+98h] [rbp-80h]
  float v131; // [rsp+A8h] [rbp-70h] BYREF
  float v132; // [rsp+B8h] [rbp-60h] BYREF
  float v133; // [rsp+C8h] [rbp-50h]
  _BYTE v134[16]; // [rsp+D8h] [rbp-40h] BYREF
  float v135; // [rsp+E8h] [rbp-30h]
  float v136; // [rsp+F8h] [rbp-20h]
  unsigned __int64 v137; // [rsp+108h] [rbp-10h] BYREF
  float v138; // [rsp+110h] [rbp-8h]
  float v139; // [rsp+118h] [rbp+0h] BYREF
  _DWORD v140[2]; // [rsp+120h] [rbp+8h] BYREF
  int v141; // [rsp+128h] [rbp+10h]
  float v142; // [rsp+12Ch] [rbp+14h]
  __m128 v143; // [rsp+138h] [rbp+20h] BYREF
  float v144; // [rsp+148h] [rbp+30h] BYREF
  float v145[3]; // [rsp+14Ch] [rbp+34h] BYREF
  int v146; // [rsp+158h] [rbp+40h] BYREF
  _BYTE v147[4]; // [rsp+160h] [rbp+48h] BYREF
  float v148; // [rsp+164h] [rbp+4Ch]
  float v149; // [rsp+168h] [rbp+50h]
  void **v150; // [rsp+170h] [rbp+58h] BYREF
  int v151; // [rsp+178h] [rbp+60h]
  int v152; // [rsp+17Ch] [rbp+64h]
  void **v153; // [rsp+180h] [rbp+68h] BYREF
  int v154; // [rsp+188h] [rbp+70h]
  int v155; // [rsp+18Ch] [rbp+74h]
  __int128 v156; // [rsp+198h] [rbp+80h] BYREF
  __int128 v157; // [rsp+1A8h] [rbp+90h]
  __int128 v158; // [rsp+1B8h] [rbp+A0h]
  __int128 v159; // [rsp+1C8h] [rbp+B0h]
  __int64 v160; // [rsp+1D8h] [rbp+C0h] BYREF
  int v161; // [rsp+1E0h] [rbp+C8h]
  float v162; // [rsp+1E8h] [rbp+D0h] BYREF
  float v163; // [rsp+1ECh] [rbp+D4h]
  float v164; // [rsp+1F0h] [rbp+D8h]
  __int128 v165; // [rsp+1F8h] [rbp+E0h] BYREF
  __int128 v166; // [rsp+208h] [rbp+F0h]
  __int128 v167; // [rsp+218h] [rbp+100h]
  __int128 v168; // [rsp+228h] [rbp+110h]
  __int128 v169; // [rsp+238h] [rbp+120h] BYREF
  __int128 v170; // [rsp+248h] [rbp+130h]
  __int128 v171; // [rsp+258h] [rbp+140h]
  __int128 v172; // [rsp+268h] [rbp+150h]
  __int64 v173; // [rsp+278h] [rbp+160h] BYREF
  int v174; // [rsp+280h] [rbp+168h]
  float v175; // [rsp+284h] [rbp+16Ch]
  int v176; // [rsp+288h] [rbp+170h]
  int v177; // [rsp+28Ch] [rbp+174h]
  int v178; // [rsp+290h] [rbp+178h]
  int v179; // [rsp+294h] [rbp+17Ch]
  int v180; // [rsp+298h] [rbp+180h]
  int v181; // [rsp+29Ch] [rbp+184h]
  __m128 v182; // [rsp+2E8h] [rbp+1D0h] BYREF
  __m128 v183; // [rsp+2F8h] [rbp+1E0h]
  __m128 v184; // [rsp+308h] [rbp+1F0h]
  __m128 v185; // [rsp+318h] [rbp+200h]
  __m128 v186; // [rsp+328h] [rbp+210h] BYREF
  __m128 v187; // [rsp+338h] [rbp+220h]
  __m128 v188; // [rsp+348h] [rbp+230h]
  __m128 v189; // [rsp+358h] [rbp+240h]
  __m128 v190; // [rsp+368h] [rbp+250h] BYREF
  unsigned __int64 v191; // [rsp+378h] [rbp+260h]
  __m128 v192; // [rsp+388h] [rbp+270h] BYREF
  _QWORD v193[2]; // [rsp+398h] [rbp+280h] BYREF
  __int128 v194; // [rsp+3A8h] [rbp+290h] BYREF
  __int64 v195; // [rsp+3B8h] [rbp+2A0h]
  __int128 v196; // [rsp+3C0h] [rbp+2A8h] BYREF
  __int64 v197; // [rsp+3D0h] [rbp+2B8h]
  __int128 v198; // [rsp+3D8h] [rbp+2C0h] BYREF
  __int64 v199; // [rsp+3E8h] [rbp+2D0h] BYREF
  __int128 v200; // [rsp+3F0h] [rbp+2D8h]
  void *v201; // [rsp+400h] [rbp+2E8h]
  __int128 *v202; // [rsp+408h] [rbp+2F0h]
  __int128 *v203; // [rsp+410h] [rbp+2F8h]
  void *v204; // [rsp+418h] [rbp+300h]
  int v205; // [rsp+420h] [rbp+308h]
  __int128 v206; // [rsp+424h] [rbp+30Ch]
  float v207; // [rsp+434h] [rbp+31Ch]
  __m128 *v208; // [rsp+438h] [rbp+320h]
  int v209; // [rsp+440h] [rbp+328h]
  _BYTE v210[16]; // [rsp+448h] [rbp+330h] BYREF

  v3 = a3;
  v4 = a2;
  v5 = a1;
  if ( (a1[144] & 0x40) == 0 )
    return;
  if ( (a1[2384] & 2) != 0 )
  {
LABEL_151:
    sub_1400B3390(a1, a2, a3);
    return;
  }
  if ( (a1[2225] & 4) != 0 )
    return;
  if ( (unsigned __int8)sub_1400B4980(a1) != 0 )
  {
    if ( (v5[2383] & 8) != 0 )
      return;
    if ( (v5[2380] & 0x20) != 0 )
      v6 = 2.0;
    else
      v6 = -2.0;
    v7 = (float *)(v5 + 1508);
    v8 = (float)(sub_1400B4560(a1: v5) * v6) + *((float *)v5 + 377);
    *((float *)v5 + 377) = v8;
    v132 = 1.0;
    v176 = 0;
    if ( v8 >= 0.0 )
    {
      v10 = &v132;
      if ( v8 <= 1.0 )
        v10 = (float *)(v5 + 1508);
      v9 = *(_DWORD *)v10;
    }
    else
    {
      v9 = 0;
    }
    *(_DWORD *)v7 = v9;
    if ( (v5[2382] & 1) == 0 )
      *v7 = 1.0;
    if ( (_QWORD)xmmword_141399800 != 0
      && (unsigned __int8)sub_1405F8C30(a1: v5 + 528) != 0
      && (unsigned __int8)sub_1405F8C30(a1: v5 + 544) != 0
      && *v7 > 0.0 )
    {
      v11 = *(_QWORD *)v5;
      v12 = sub_1400B5440();
      v13 = (_OWORD *)(*(__int64 (__fastcall **)(_BYTE *, __int64))(v11 + 696))(a1: v5, a2: v12);
      v14 = (float *)(v5 + 1444);
      *(_OWORD *)(v5 + 1444) = *v13;
      *(_OWORD *)(v5 + 1460) = v13[1];
      *(_OWORD *)(v5 + 1476) = v13[2];
      *(_OWORD *)(v5 + 1492) = v13[3];
      if ( (v5[2382] & 1) != 0 && (v15 = *((float *)v5 + 378), (float)(*((float *)v5 + 374) + 0.050000001) > v15) )
        v16 = v15 + 0.050000001;
      else
        v16 = *((float *)v5 + 374) + 0.050000001;
      *((float *)v5 + 374) = v16;
      v17 = sub_1400EA9F0(a1: v5 + 528);
      v18 = sub_1400B5440();
      v19 = (float *)sub_1400CC650(a1: v17, a2: &v192, a3: v18);
      v20 = sub_1400EA9F0(a1: v5 + 544);
      v21 = sub_1400B5440();
      v22 = (float *)sub_1400CC650(a1: v20, a2: &v143, a3: v21);
      v23 = v19[2] - v22[2];
      v24 = v19[1] - v22[1];
      v25 = *v19 - *v22;
      v26 = (float *)sub_1400CA870(a1: v5);
      v27 = (float)((float)(v25 * v26[2]) + (float)(v24 * v26[6])) + (float)(v23 * v26[10]);
      v181 = 1065353216;
      v131 = (float)((float)(v24 * v26[4]) + (float)(v25 * *v26)) + (float)(v23 * v26[8]);
      v135 = 1.5;
      v180 = 1065353216;
      v133 = v27;
      v136 = (float)(fabs(v27) * 3.5) + 1.0;
      v156 = 0;
      v157 = 0;
      v158 = 0;
      v159 = 0;
      sub_14009D720(a1: &v156);
      v28 = (__m128)*((unsigned int *)v5 + 365);
      v143 = v28;
      v29 = *v14;
      v28.m128_f32[0] = (float)((float)((float)(v28.m128_f32[0] * *((float *)&v156 + 1))
                                      + (float)(*v14 * *(float *)&v156))
                              + (float)(*((float *)v5 + 369) * *((float *)&v156 + 2)))
                      + (float)(*((float *)v5 + 373) * *((float *)&v156 + 3));
      v192 = v28;
      v129 = *((float *)v5 + 366);
      v30 = *((float *)v5 + 362);
      v31 = *((float *)v5 + 370);
      v136 = (float)((float)((float)(v129 * *((float *)&v156 + 1)) + (float)(v30 * *(float *)&v156))
                   + (float)(v31 * *((float *)&v156 + 2)))
           + (float)(*((float *)v5 + 374) * *((float *)&v156 + 3));
      v132 = *((float *)v5 + 367);
      v32 = *((float *)v5 + 363);
      v33 = *((float *)v5 + 371);
      v34 = *((float *)v5 + 375);
      v135 = (float)((float)((float)(v132 * *((float *)&v156 + 1)) + (float)(v32 * *(float *)&v156))
                   + (float)(v33 * *((float *)&v156 + 2)))
           + (float)(v34 * *((float *)&v156 + 3));
      v131 = *((float *)v5 + 368);
      v35 = *((float *)v5 + 364);
      v36 = *((float *)v5 + 372);
      v28.m128_i32[0] = *((_DWORD *)v5 + 376);
      v133 = (float)((float)((float)(v131 * *((float *)&v156 + 1)) + (float)(v35 * *(float *)&v156))
                   + (float)(v36 * *((float *)&v156 + 2)))
           + (float)(v28.m128_f32[0] * *((float *)&v156 + 3));
      v37 = (__m128)v143.m128_u32[0];
      v37.m128_f32[0] = (float)((float)((float)(v143.m128_f32[0] * *((float *)&v157 + 1))
                                      + (float)(v29 * *(float *)&v157))
                              + (float)(*((float *)v5 + 369) * *((float *)&v157 + 2)))
                      + (float)(*((float *)v5 + 373) * *((float *)&v157 + 3));
      v190 = v37;
      v38 = (float)((float)((float)(v129 * *((float *)&v157 + 1)) + (float)(v30 * *(float *)&v157))
                  + (float)(v31 * *((float *)&v157 + 2)))
          + (float)(*((float *)v5 + 374) * *((float *)&v157 + 3));
      v39 = (float)((float)((float)(v132 * *((float *)&v157 + 1)) + (float)(v32 * *(float *)&v157))
                  + (float)(v33 * *((float *)&v157 + 2)))
          + (float)(v34 * *((float *)&v157 + 3));
      v40 = (float)((float)((float)(v131 * *((float *)&v157 + 1)) + (float)(v35 * *(float *)&v157))
                  + (float)(v36 * *((float *)&v157 + 2)))
          + (float)(v28.m128_f32[0] * *((float *)&v157 + 3));
      v41 = (__m128)v143.m128_u32[0];
      v41.m128_f32[0] = (float)((float)((float)(v143.m128_f32[0] * *((float *)&v158 + 1))
                                      + (float)(*v14 * *(float *)&v158))
                              + (float)(*((float *)v5 + 369) * *((float *)&v158 + 2)))
                      + (float)(*((float *)v5 + 373) * *((float *)&v158 + 3));
      v42 = (float)((float)((float)(v129 * *((float *)&v158 + 1)) + (float)(*((float *)v5 + 362) * *(float *)&v158))
                  + (float)(*((float *)v5 + 370) * *((float *)&v158 + 2)))
          + (float)(*((float *)v5 + 374) * *((float *)&v158 + 3));
      v28.m128_f32[0] = (float)((float)((float)(v132 * *((float *)&v158 + 1)) + (float)(v32 * *(float *)&v158))
                              + (float)(*((float *)v5 + 371) * *((float *)&v158 + 2)))
                      + (float)(*((float *)v5 + 375) * *((float *)&v158 + 3));
      v43 = *((float *)v5 + 376);
      v37.m128_f32[0] = (float)((float)((float)(v131 * *((float *)&v158 + 1)) + (float)(v35 * *(float *)&v158))
                              + (float)(v36 * *((float *)&v158 + 2)))
                      + (float)(v43 * *((float *)&v158 + 3));
      v44 = v143;
      v44.m128_f32[0] = v143.m128_f32[0] * *((float *)&v159 + 1);
      v143 = v44;
      v45 = v44;
      v45.m128_f32[0] = (float)((float)(v44.m128_f32[0] + (float)(*v14 * *(float *)&v159))
                              + (float)(*((float *)v5 + 369) * *((float *)&v159 + 2)))
                      + (float)(*((float *)v5 + 373) * *((float *)&v159 + 3));
      v143 = v45;
      v130 = (float)((float)((float)(v129 * *((float *)&v159 + 1)) + (float)(*((float *)v5 + 362) * *(float *)&v159))
                   + (float)(*((float *)v5 + 370) * *((float *)&v159 + 2)))
           + (float)(*((float *)v5 + 374) * *((float *)&v159 + 3));
      v132 = (float)(v132 * *((float *)&v159 + 1)) + (float)(v32 * *(float *)&v159);
      v46 = (float)(v132 + (float)(*((float *)v5 + 371) * *((float *)&v159 + 2)))
          + (float)(*((float *)v5 + 375) * *((float *)&v159 + 3));
      v44.m128_f32[0] = (float)((float)((float)(v131 * *((float *)&v159 + 1)) + (float)(v35 * *(float *)&v159))
                              + (float)(v36 * *((float *)&v159 + 2)))
                      + (float)(v43 * *((float *)&v159 + 3));
      v47 = _mm_shuffle_ps(v192, v192, 225);
      v47.m128_f32[0] = v136;
      v48 = _mm_shuffle_ps(v47, v47, 198);
      v48.m128_f32[0] = v135;
      v49 = _mm_shuffle_ps(v48, v48, 39);
      v49.m128_f32[0] = v133;
      *(__m128 *)v14 = _mm_shuffle_ps(v49, v49, 57);
      v50 = _mm_shuffle_ps(v190, v190, 225);
      v50.m128_f32[0] = v38;
      v51 = _mm_shuffle_ps(v50, v50, 198);
      v51.m128_f32[0] = v39;
      v52 = _mm_shuffle_ps(v51, v51, 39);
      v52.m128_f32[0] = v40;
      *(__m128 *)(v5 + 1460) = _mm_shuffle_ps(v52, v52, 57);
      v53 = _mm_shuffle_ps(v41, v41, 225);
      v53.m128_f32[0] = v42;
      v54 = _mm_shuffle_ps(v53, v53, 198);
      v54.m128_f32[0] = v28.m128_f32[0];
      v55 = _mm_shuffle_ps(v54, v54, 39);
      v55.m128_f32[0] = v37.m128_f32[0];
      *(__m128 *)(v5 + 1476) = _mm_shuffle_ps(v55, v55, 57);
      v56 = _mm_shuffle_ps(v143, v143, 225);
      v56.m128_f32[0] = v130;
      v57 = _mm_shuffle_ps(v56, v56, 198);
      v57.m128_f32[0] = v46;
      v58 = _mm_shuffle_ps(v57, v57, 39);
      v58.m128_f32[0] = v44.m128_f32[0];
      *(__m128 *)(v5 + 1492) = _mm_shuffle_ps(v58, v58, 57);
      v59 = *((float *)v5 + 379);
      if ( v59 <= 0.80000001 )
        v60 = 0.0;
      else
        v60 = (float)(v59 - 0.80000001) / 0.2;
      sub_14069E540(
        a1: (_DWORD)v3,
        a2: xmmword_141399800,
        a3: (_DWORD)v5 + 1444,
        a4: 0,
        a5: 0,
        a6: (float)(v60 * *v7) * 0.80000001,
        a7: 0,
        a8: 0);
    }
    goto LABEL_59;
  }
  v179 = 0;
  v131 = 1.5;
  v61 = sub_1400B41D0(a1: *(_QWORD *)&nExitCode + 1072LL);
  if ( (unsigned __int8)sub_140799AD0(a1: v5) == 0 )
  {
    if ( v61 == 4 )
    {
      v64 = 1069547520;
      goto LABEL_44;
    }
    v68 = *((float *)v5 + 83);
    v69 = sub_1400B4560(a1: v5) + v68;
    v145[0] = v69;
    if ( v69 < 0.0 )
    {
      v64 = 0;
      goto LABEL_44;
    }
    v66 = v145;
    v67 = v69 <= 1.5;
    goto LABEL_41;
  }
  v62 = sub_1400D10E0(a1: v5, a2: 0);
  sub_1400D20B0(a1: v5, a2: 0, a3: v62 & 0xF3FFFFFF);
  v63 = *((float *)v5 + 83);
  if ( v63 == 0.0 )
  {
    sub_14079FDE0(a1: v5);
    return;
  }
  if ( v61 != 4 )
  {
    v65 = v63 - sub_1400B4560(a1: v5);
    v144 = v65;
    if ( v65 < 0.0 )
    {
      v64 = 0;
      goto LABEL_44;
    }
    v66 = &v144;
    v67 = v65 <= 1.5;
LABEL_41:
    v70 = (int *)&v131;
    if ( v67 )
      v70 = (int *)v66;
    v64 = *v70;
    goto LABEL_44;
  }
  v64 = 0;
LABEL_44:
  *((_DWORD *)v5 + 83) = v64;
  v71 = sub_1400D10E0(a1: v5, a2: 0);
  sub_1400D20B0(a1: v5, a2: 0, a3: v71 | 0xC000000u);
  sub_14079FDE0(a1: v5);
  v73 = sub_1400B4560(a1: v5) + *((float *)v5 + 64);
  *((float *)v5 + 64) = v73;
  switch ( v5[252] )
  {
    case 0x12:
      LOBYTE(v72) = 22;
      if ( (v5[2381] & 2) == 0 )
        LOBYTE(v72) = 21;
      goto LABEL_53;
    case 0x19:
      goto LABEL_48;
    case 0x1A:
      LOBYTE(v72) = 28;
      goto LABEL_53;
    case 0x1E:
LABEL_48:
      if ( v73 > *((float *)v5 + 65) )
      {
        v72 = 0;
LABEL_53:
        sub_140797C60(a1: v5, a2: v72, a3: 0, a4: 0xFFFFFFFFLL);
      }
      break;
    default:
      break;
  }
  if ( sub_1400B3260(a1: v5, a2: v3) > 128.0 )
    return;
  v74 = (__m128 *)sub_1405F8CF0(a1: v5 + 416);
  v75 = v74;
  if ( v74 != nullptr )
  {
    v190 = v74[41];
    v191 = v74[42].m128_u64[0];
    sub_1406A46E0(a1: v3, a2: &v190, a3: v5 + 152);
    v76 = 0;
    if ( v5[156] == 0 )
      v76 = 32;
    v75[53].m128_i8[12] = v75[53].m128_i8[12] & 0xDF | v76;
  }
LABEL_59:
  v77 = sub_1405F8CF0(a1: &off_141302F28);
  if ( v77 == 0 )
    goto LABEL_130;
  if ( v5[156] != 0 )
  {
    if ( (unsigned __int8)sub_1400B4980(a1: v5) != 0 )
    {
      v78 = sub_1400B5440();
      sub_1400CC650(a1: v5, a2: &v162, a3: v78);
      v80 = (float)((float)((float)(v163 - v3[81]) * (float)(v163 - v3[81]))
                  + (float)((float)(v162 - v3[80]) * (float)(v162 - v3[80])))
          + (float)((float)(v164 - v3[82]) * (float)(v164 - v3[82]));
      if ( v80 >= 0.0 )
      {
        v81 = fsqrt(v80);
        goto LABEL_67;
      }
      *(float *)&v82 = sub_140A00700(a1: v79);
    }
    else
    {
      v82 = sub_1400B3110(a1: v5, a2: v77);
    }
    v81 = *(float *)&v82;
LABEL_67:
    v83 = sub_1405F8CF0(a1: v5 + 416);
    if ( (unsigned __int8)sub_1400B4980(a1: v5) == 0 && v83 != 0 )
    {
      LOBYTE(v84) = v81 > 30.0;
      sub_1400C8D90(a1: v83, a2: v84);
      if ( *((float *)v5 + 83) < 0.5 )
        return;
      sub_1401FEAF0(a1: v83);
    }
    *((float *)v5 + 460) = sub_1400B4560(a1: v5) + *((float *)v5 + 460);
    v85 = sub_1405F8CF0(a1: v5 + 592);
    if ( v85 != 0 && v81 < 20.0 )
    {
      v86 = sub_1400B5440();
      sub_1400CC650(a1: v85, a2: &v137, a3: v86);
      *((float *)&v137 + 1) = *((float *)&v137 + 1) + 0.46000001;
      if ( v81 >= 15.0 || *((float *)v5 + 460) >= 6.0 || byte_141379E50 != 0 )
      {
        if ( (unsigned __int8)sub_1400B4980(a1: v5) == 0 && byte_141302F20 != 0 && byte_141379E50 == 0 )
        {
          *((float *)&v137 + 1) = *((float *)&v137 + 1) + -0.15000001;
          v97 = (float)((float)((float)(v3[81] - *((float *)&v137 + 1)) * (float)(v3[81] - *((float *)&v137 + 1)))
                      + (float)((float)(v3[80] - *(float *)&v137) * (float)(v3[80] - *(float *)&v137)))
              + (float)((float)(v3[82] - v138) * (float)(v3[82] - v138));
          if ( v97 < 0.0 )
            v98 = sub_140A00700(a1: v96);
          else
            v98 = fsqrt(v97);
          v186 = 0;
          v187 = 0;
          v188 = 0;
          v189 = 0;
          sub_14009EAB0(a1: &v186, a2: v3 + 80, a3: &v137, a4: &qword_140EF4CF0);
          v169 = 0;
          v170 = 0;
          v171 = 0;
          v172 = 0;
          sub_14009D7F0(a1: &v169);
          v99 = _mm_add_ps(
                  _mm_add_ps(
                    _mm_add_ps(
                      _mm_mul_ps(v186, _mm_shuffle_ps((__m128)(unsigned int)v170, (__m128)(unsigned int)v170, 0)),
                      _mm_mul_ps(v187, _mm_shuffle_ps((__m128)DWORD1(v170), (__m128)DWORD1(v170), 0))),
                    _mm_mul_ps(v188, _mm_shuffle_ps((__m128)DWORD2(v170), (__m128)DWORD2(v170), 0))),
                  _mm_mul_ps(v189, _mm_shuffle_ps((__m128)HIDWORD(v170), (__m128)HIDWORD(v170), 0)));
          v100 = _mm_add_ps(
                   _mm_add_ps(
                     _mm_add_ps(
                       _mm_mul_ps(v186, _mm_shuffle_ps((__m128)(unsigned int)v171, (__m128)(unsigned int)v171, 0)),
                       _mm_mul_ps(v187, _mm_shuffle_ps((__m128)DWORD1(v171), (__m128)DWORD1(v171), 0))),
                     _mm_mul_ps(v188, _mm_shuffle_ps((__m128)DWORD2(v171), (__m128)DWORD2(v171), 0))),
                   _mm_mul_ps(v189, _mm_shuffle_ps((__m128)HIDWORD(v171), (__m128)HIDWORD(v171), 0)));
          v186 = _mm_add_ps(
                   _mm_add_ps(
                     _mm_add_ps(
                       _mm_mul_ps(v186, _mm_shuffle_ps((__m128)(unsigned int)v169, (__m128)(unsigned int)v169, 0)),
                       _mm_mul_ps(v187, _mm_shuffle_ps((__m128)DWORD1(v169), (__m128)DWORD1(v169), 0))),
                     _mm_mul_ps(v188, _mm_shuffle_ps((__m128)DWORD2(v169), (__m128)DWORD2(v169), 0))),
                   _mm_mul_ps(v189, _mm_shuffle_ps((__m128)HIDWORD(v169), (__m128)HIDWORD(v169), 0)));
          v187 = v99;
          v188 = v100;
          v189 = _mm_movelh_ps((__m128)v137, _mm_unpacklo_ps((__m128)LODWORD(v138), (__m128)0x3F800000u));
          v198 = 0;
          v101 = 1.0;
          if ( v81 > 6.0 )
            v101 = 1.0 - (float)((float)(v81 - 6.0) / 14.0);
          v102 = sub_1400B4560(a1: v5) + *((float *)v5 + 461);
          *((float *)v5 + 461) = v102;
          if ( v102 < 0.5 )
            v101 = v101 * (float)(v102 + v102);
          if ( v98 < 3.0 )
          {
            v146 = 1065353216;
            v177 = 0;
            v103 = v98 - 2.0;
            v139 = v103;
            if ( v103 >= 0.0 )
            {
              v105 = (float *)&v146;
              if ( v103 <= 1.0 )
                v105 = &v139;
              v104 = *v105;
            }
            else
            {
              v104 = 0.0;
            }
            v101 = v101 * v104;
          }
          v140[0] = 1065353216;
          v140[1] = 1065353216;
          v141 = 1065353216;
          v142 = v101 * 0.80000001;
          v106 = v5[2382];
          if ( (v106 & 0x10) != 0 )
          {
            qmemcpy(v140, "ff&?33s?", sizeof(v140));
          }
          else if ( (v106 & 0x20) != 0 )
          {
            v140[1] = 1064178811;
            v141 = 1059816735;
          }
          else if ( (v106 & 8) != 0 )
          {
            v140[0] = 1061158912;
            v141 = 1061158912;
          }
          if ( (unsigned int)sub_1400B41D0(a1: *(_QWORD *)&nExitCode + 1072LL) == 2 && v83 != 0 )
          {
            if ( (unsigned __int8)sub_1405F8D80(a1: v5 + 1608, a2: 120) != 0 )
            {
              sub_1405F8B70(a1: &v153, a2: *((unsigned int *)v5 + 405), a3: *((unsigned int *)v5 + 404));
            }
            else
            {
              v154 = 0;
              v155 = 195948557;
            }
            v153 = &PXEngine::SafeActorPtrAs<CPXHorse>::`vftable';
            v107 = sub_1405F8CF0(a1: &v153);
            if ( v107 != 0 && (unsigned __int8)sub_140796A30(a1: v5) != 0 )
            {
              v108 = sub_1401E62C0(a1: v107);
              v194 = *(_OWORD *)(v108 + 656);
              v195 = *(_QWORD *)(v108 + 672);
              v109 = &v194;
            }
            else
            {
              v196 = *(_OWORD *)(v83 + 656);
              v197 = *(_QWORD *)(v83 + 672);
              v109 = &v196;
            }
            v110 = sub_140621240(a1: v4);
            v111 = sub_1406040E0(a1: v110, a2: v210, a3: "World");
            if ( (unsigned __int8)sub_140607410(a1: v110, a2: v111, a3: 60) != 0 )
            {
              sub_1405F8B70(a1: &v150, a2: *(unsigned int *)(v111 + 12), a3: *(unsigned int *)(v111 + 8));
            }
            else
            {
              v151 = 0;
              v152 = 195948557;
            }
            v150 = &PXEngine::SafeActorPtrAs<CPXTerrain>::`vftable';
            v112 = sub_1405F8CF0(a1: &v150);
            v113 = 32836;
            if ( v112 != 0 )
            {
              v160 = *(_QWORD *)v109;
              v161 = *((_DWORD *)v109 + 2);
              v114 = sub_1401A7810(a1: v112, a2: &v160);
              if ( (float)(*((float *)&v160 + 1) - v114) > 0.0 )
                v113 = 98372;
            }
            v115 = sub_1400891B0(a1: v5 + 1760, a2: 0);
            sub_1406A1D20(
              a1: (_DWORD)v3,
              a2: xmmword_141399810,
              a3: v115,
              a4: (unsigned int)&v198,
              a5: (__int64)v140,
              a6: 1065353216,
              a7: -1073741824,
              a8: 0,
              a9: 1065353216,
              a10: 1065353216,
              a11: 0,
              a12: 0,
              a13: v113,
              a14: (__int64)&v186,
              a15: 0,
              a16: 0,
              a17: 0);
          }
        }
      }
      else
      {
        *((_DWORD *)v5 + 461) = 0;
        sub_1406A4970(a1: v3, a2: v147, a3: &v137);
        if ( v149 < 1.0 )
        {
          v148 = sub_140A04FE0();
          v182 = 0;
          v183 = 0;
          v184 = 0;
          v185 = 0;
          sub_14009D750(a1: &v182, a2: v147);
          v87 = 1.0;
          if ( v81 > 12.0 )
            v87 = 1.0 - (float)((float)(v81 - 12.0) / 10.0);
          v88 = *((float *)v5 + 460);
          if ( v88 >= 0.5 )
          {
            if ( v88 > 5.5 )
              v87 = (float)((float)(6.0 - v88) + (float)(6.0 - v88)) * v87;
            v89 = v87;
          }
          else
          {
            v89 = (float)(v88 + v88) * v87;
          }
          if ( v81 >= 2.0 )
            v90 = v89;
          else
            v90 = (float)(v81 * 0.5) * v89;
          if ( v81 > 6.0 )
          {
            v91 = 1.0 - (float)((float)(v81 - 6.0) * 0.25);
            v145[2] = v91;
            if ( v91 < 1.0 )
            {
              v165 = 0;
              v166 = 0;
              v167 = 0;
              v168 = 0;
              v145[1] = 1.0;
              v178 = 1056964608;
              sub_14009D7F0(a1: &v165);
              v92 = _mm_add_ps(
                      _mm_add_ps(
                        _mm_add_ps(
                          _mm_mul_ps(_mm_shuffle_ps((__m128)(unsigned int)v166, (__m128)(unsigned int)v166, 0), v182),
                          _mm_mul_ps(_mm_shuffle_ps((__m128)DWORD1(v166), (__m128)DWORD1(v166), 0), v183)),
                        _mm_mul_ps(_mm_shuffle_ps((__m128)DWORD2(v166), (__m128)DWORD2(v166), 0), v184)),
                      _mm_mul_ps(_mm_shuffle_ps((__m128)HIDWORD(v166), (__m128)HIDWORD(v166), 0), v185));
              v93 = _mm_add_ps(
                      _mm_add_ps(
                        _mm_add_ps(
                          _mm_mul_ps(_mm_shuffle_ps((__m128)(unsigned int)v167, (__m128)(unsigned int)v167, 0), v182),
                          _mm_mul_ps(_mm_shuffle_ps((__m128)DWORD1(v167), (__m128)DWORD1(v167), 0), v183)),
                        _mm_mul_ps(_mm_shuffle_ps((__m128)DWORD2(v167), (__m128)DWORD2(v167), 0), v184)),
                      _mm_mul_ps(_mm_shuffle_ps((__m128)HIDWORD(v167), (__m128)HIDWORD(v167), 0), v185));
              v94 = _mm_add_ps(
                      _mm_add_ps(
                        _mm_add_ps(
                          _mm_mul_ps(_mm_shuffle_ps((__m128)(unsigned int)v168, (__m128)(unsigned int)v168, 0), v182),
                          _mm_mul_ps(_mm_shuffle_ps((__m128)DWORD1(v168), (__m128)DWORD1(v168), 0), v183)),
                        _mm_mul_ps(_mm_shuffle_ps((__m128)DWORD2(v168), (__m128)DWORD2(v168), 0), v184)),
                      _mm_mul_ps(_mm_shuffle_ps((__m128)HIDWORD(v168), (__m128)HIDWORD(v168), 0), v185));
              v182 = _mm_add_ps(
                       _mm_add_ps(
                         _mm_add_ps(
                           _mm_mul_ps(_mm_shuffle_ps((__m128)(unsigned int)v165, (__m128)(unsigned int)v165, 0), v182),
                           _mm_mul_ps(_mm_shuffle_ps((__m128)DWORD1(v165), (__m128)DWORD1(v165), 0), v183)),
                         _mm_mul_ps(_mm_shuffle_ps((__m128)DWORD2(v165), (__m128)DWORD2(v165), 0), v184)),
                       _mm_mul_ps(_mm_shuffle_ps((__m128)HIDWORD(v165), (__m128)HIDWORD(v165), 0), v185));
              v183 = v92;
              v184 = v93;
              v185 = v94;
            }
          }
          v199 = *((_QWORD *)v5 + 228);
          v200 = *((_OWORD *)v5 + 112);
          v201 = &unk_140FD0AC0;
          v202 = &xmmword_140EF4FD8;
          v203 = &xmmword_140EF4FD8;
          v204 = &unk_140FD0AD0;
          v205 = 0;
          v206 = xmmword_140EF3D70;
          v207 = v90;
          v208 = &v182;
          v209 = -1;
          sub_14069CD50(a1: v3, a2: &v199);
          v173 = 0;
          v174 = 0;
          v175 = v90;
          v95 = sub_1400891B0(a1: v5 + 1776, a2: 0);
          sub_1406A1D20(
            a1: (_DWORD)v3,
            a2: xmmword_141399820,
            a3: v95,
            a4: (_DWORD)v5 + 1808,
            a5: (__int64)&v173,
            a6: 1065353216,
            a7: 0,
            a8: 0,
            a9: 1065353216,
            a10: 1065353216,
            a11: 0,
            a12: 0,
            a13: 148,
            a14: (__int64)&v182,
            a15: 0,
            a16: 0,
            a17: 0);
        }
      }
    }
LABEL_130:
    if ( v5[156] != 0
      && ((v5[2385] & 2) == 0 || (unsigned __int8)sub_140796A30(a1: v5) != 0)
      && ((v5[2225] & 1) == 0
       || (unsigned __int8)sub_1400B4990(a1: v5) != 0 && (byte_1413997B0 == 0 || (v5[2225] & 2) == 0)
       || (unsigned __int8)sub_140796A30(a1: v5) == 0) )
    {
      if ( (unsigned __int8)sub_1400B4980(a1: v5) != 0 )
      {
        v116 = *(_QWORD *)v5;
        v117 = sub_1400B5440();
        (*(void (__fastcall **)(_BYTE *, __int64))(v116 + 696))(a1: v5, a2: v117);
        v118 = sub_140621240(a1: v4);
        sub_1405F8B50(a1: v193, a2: v5 + 32);
        v193[0] = &PXEngine::SafeActorPtrAs<CPXSpace>::`vftable';
        v119 = sub_1405F8CF0(a1: v193);
        v122 = (unsigned __int8 *)sub_1401A4650(a1: v134, a2: v120, a3: v121, a4: v119);
        sub_14060C1E0(a1: v118, a2: *v122);
      }
      if ( *(_QWORD *)&nExitCode != 0 )
      {
        v123 = *((__int64 **)v5 + 274);
        v124 = (__int64 *)v123[1];
        v125 = v123;
        while ( *((_BYTE *)v124 + 25) == 0 )
        {
          if ( *((_BYTE *)v124 + 32) >= v5[2184] )
          {
            v125 = v124;
            v124 = (__int64 *)*v124;
          }
          else
          {
            v124 = (__int64 *)v124[2];
          }
        }
        if ( *((_BYTE *)v125 + 25) == 0 && v5[2184] >= *((_BYTE *)v125 + 32) && v125 != v123 )
          (*(void (__fastcall **)(__int64, __int64, float *))(*(_QWORD *)v125[5] + 24LL))(a1: v125[5], a2: v4, a3: v3);
      }
      a3 = v3;
      a2 = v4;
      a1 = v5;
      goto LABEL_151;
    }
  }
  v126 = sub_1405F8CF0(a1: v5 + 416);
  v127 = v126;
  if ( v126 != 0 && (*(_BYTE *)(v126 + 860) & 2) != 0 )
  {
    sub_1400B4560(a1: v5);
    sub_1400FCF00(a1: v127);
  }
  v128 = sub_1405F8CF0(a1: v5 + 1608);
  if ( v128 != 0 )
    sub_140200350(a1: v128, a2: 1);
}
