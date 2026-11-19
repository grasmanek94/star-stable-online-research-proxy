// Hex-Rays export, baseline 645.348067; descriptive analysis label.
__int64 __fastcall sub_1402415D0(__int64 a1, float *a2)
{
  float *v2; // r12
  __int64 v3; // r14
  unsigned __int64 v5; // rdx
  float v6; // xmm0_4
  __int64 v7; // r8
  __int64 v8; // rdi
  float v9; // xmm0_4
  __int64 v10; // r8
  __int64 result; // rax
  __int64 v12; // rax
  unsigned int v13; // ecx
  __int64 v14; // r15
  __int64 v15; // rbx
  float *v16; // rdi
  float v17; // xmm0_4
  __int64 v18; // r8
  __int64 v19; // rcx
  float v20; // xmm4_4
  __int64 v21; // rcx
  float v22; // xmm3_4
  float v23; // xmm5_4
  float v24; // xmm4_4
  int v25; // ebx
  float v26; // xmm6_4
  float v27; // xmm11_4
  float v28; // xmm6_4
  float v29; // xmm12_4
  float v30; // xmm8_4
  float v31; // xmm7_4
  float v32; // xmm10_4
  float v33; // xmm2_4
  float v34; // xmm0_4
  float v35; // xmm7_4
  float v36; // xmm8_4
  float v37; // xmm10_4
  float v38; // xmm6_4
  float v39; // xmm6_4
  float v40; // xmm7_4
  __int64 v41; // rdi
  __int64 v42; // rcx
  float v43; // xmm8_4
  __int64 v44; // rcx
  float v45; // xmm0_4
  float v46; // xmm2_4
  float v47; // xmm1_4
  int v48; // eax
  float v49; // xmm0_4
  __m128 v50; // xmm3
  __m128 v51; // xmm1
  __int64 v52; // rdi
  __int64 v53; // rbx
  __int64 v54; // r15
  unsigned int v55; // r13d
  unsigned int v56; // r14d
  unsigned int v57; // r12d
  char v58; // al
  float v59; // xmm0_4
  float v60; // xmm11_4
  float *v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rax
  unsigned int v64; // r14d
  float v65; // xmm6_4
  float v66; // xmm5_4
  float v67; // xmm4_4
  float v68; // xmm8_4
  float v69; // xmm10_4
  float v70; // xmm11_4
  float v71; // xmm7_4
  float v72; // xmm12_4
  float v73; // xmm8_4
  float v74; // xmm13_4
  float v75; // xmm10_4
  float v76; // xmm11_4
  float v77; // xmm12_4
  float v78; // xmm13_4
  float v79; // xmm2_4
  float v80; // xmm0_4
  float v81; // xmm7_4
  float v82; // xmm8_4
  float v83; // xmm10_4
  float v84; // xmm0_4
  float v85; // xmm10_4
  float v86; // xmm7_4
  int v87; // eax
  float v88; // xmm8_4
  float v89; // xmm3_4
  float v90; // xmm4_4
  float v91; // xmm5_4
  float v92; // xmm13_4
  float v93; // xmm10_4
  float v94; // xmm11_4
  int v95; // xmm12_4
  int v96; // xmm13_4
  int v97; // eax
  float v98; // xmm0_4
  float v99; // xmm8_4
  float v100; // xmm7_4
  float v101; // xmm1_4
  float v102; // xmm11_4
  float v103; // xmm2_4
  float v104; // xmm10_4
  float v105; // xmm1_4
  float v106; // xmm0_4
  float v107; // xmm8_4
  float v108; // xmm0_4
  unsigned int v109; // eax
  __int64 v110; // r14
  __int64 v111; // r15
  __int64 v112; // r12
  char v113; // al
  float v114; // xmm1_4
  float v115; // xmm0_4
  float *v116; // rax
  __int64 v117; // r8
  __int64 v118; // rdx
  float v119; // xmm6_4
  float v120; // xmm1_4
  float v121; // xmm8_4
  float v122; // xmm7_4
  float v123; // xmm5_4
  float v124; // xmm0_4
  float v125; // xmm3_4
  float v126; // xmm2_4
  float v127; // xmm6_4
  float v128; // xmm15_4
  float v129; // xmm2_4
  float v130; // xmm0_4
  float v131; // xmm6_4
  float v132; // xmm2_4
  float v133; // xmm4_4
  float v134; // xmm0_4
  float v135; // xmm15_4
  float v136; // xmm3_4
  float v137; // xmm2_4
  float v138; // xmm0_4
  int v139; // eax
  float v140; // xmm8_4
  float v141; // xmm2_4
  float v142; // xmm15_4
  float v143; // xmm5_4
  float v144; // xmm4_4
  float v145; // xmm7_4
  float v146; // xmm3_4
  float v147; // xmm8_4
  float v148; // xmm6_4
  float v149; // xmm0_4
  float v150; // xmm15_4
  float v151; // xmm2_4
  float v152; // xmm0_4
  float v153; // xmm0_4
  int v154; // ecx
  unsigned int v155; // [rsp+28h] [rbp-E0h]
  float v156; // [rsp+28h] [rbp-E0h]
  float v157; // [rsp+28h] [rbp-E0h]
  float v158; // [rsp+2Ch] [rbp-DCh] BYREF
  float v159; // [rsp+30h] [rbp-D8h]
  float v160; // [rsp+34h] [rbp-D4h]
  float v161; // [rsp+38h] [rbp-D0h]
  float v162; // [rsp+3Ch] [rbp-CCh]
  int v163; // [rsp+40h] [rbp-C8h]
  float v164; // [rsp+44h] [rbp-C4h]
  float v165; // [rsp+48h] [rbp-C0h]
  float v166; // [rsp+4Ch] [rbp-BCh]
  __int64 v167; // [rsp+50h] [rbp-B8h]
  __int64 v168; // [rsp+58h] [rbp-B0h]
  float v169; // [rsp+60h] [rbp-A8h] BYREF
  float v170; // [rsp+64h] [rbp-A4h]
  float v171; // [rsp+68h] [rbp-A0h]
  float v172; // [rsp+70h] [rbp-98h]
  float v173; // [rsp+74h] [rbp-94h]
  float v174; // [rsp+78h] [rbp-90h]
  float v175; // [rsp+7Ch] [rbp-8Ch]
  int v176; // [rsp+80h] [rbp-88h] BYREF
  int v177; // [rsp+84h] [rbp-84h] BYREF
  float v178; // [rsp+88h] [rbp-80h]
  float v179; // [rsp+8Ch] [rbp-7Ch]
  float v180; // [rsp+90h] [rbp-78h]
  __int64 v181; // [rsp+98h] [rbp-70h]
  __int64 v182; // [rsp+A0h] [rbp-68h]
  float *v183; // [rsp+A8h] [rbp-60h]
  float v184; // [rsp+B0h] [rbp-58h] BYREF
  unsigned __int64 v185; // [rsp+B4h] [rbp-54h]
  __int128 v186; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v187; // [rsp+D8h] [rbp-30h] BYREF
  int v188; // [rsp+E0h] [rbp-28h]
  char v189; // [rsp+E4h] [rbp-24h]
  int v190; // [rsp+E8h] [rbp-20h]
  char *v191; // [rsp+F0h] [rbp-18h]
  __int64 v192; // [rsp+F8h] [rbp-10h]
  __int64 v193; // [rsp+100h] [rbp-8h]
  __int64 v194; // [rsp+108h] [rbp+0h]
  int v195; // [rsp+110h] [rbp+8h]
  __int128 v196; // [rsp+118h] [rbp+10h]
  int v197; // [rsp+128h] [rbp+20h]
  int v198; // [rsp+12Ch] [rbp+24h]
  __int64 v199; // [rsp+130h] [rbp+28h]
  unsigned int v200; // [rsp+218h] [rbp+110h]
  int v202; // [rsp+230h] [rbp+128h]

  v2 = a2;
  v3 = 0;
  v5 = (*(_QWORD *)(a1 + 416) - *(_QWORD *)(a1 + 408)) / 40LL;
  if ( v5 != 0 )
  {
    while ( 1 )
    {
      v6 = sub_1400B4560(a1);
      v7 = *(_QWORD *)(a1 + 408);
      if ( (unsigned int)v3 >= (unsigned __int64)((*(_QWORD *)(a1 + 416) - v7) / 40) )
        break;
      v8 = 5 * v3;
      *(float *)(v7 + 40 * v3 + 32) = v6 + *(float *)(v7 + 40 * v3 + 32);
      v9 = sub_1400B4560(a1);
      v10 = *(_QWORD *)(a1 + 408);
      if ( (unsigned int)v3 >= (unsigned __int64)((*(_QWORD *)(a1 + 416) - v10) / 40) )
        break;
      v3 = (unsigned int)(v3 + 1);
      *(float *)(v10 + 8 * v8 + 36) = (float)(v9 * 0.5) + *(float *)(v10 + 8 * v8 + 36);
      v5 = (*(_QWORD *)(a1 + 416) - *(_QWORD *)(a1 + 408)) / 40LL;
      if ( (unsigned int)v3 >= v5 )
        goto LABEL_5;
    }
LABEL_107:
    __fastfail(5u);
  }
LABEL_5:
  *(float *)(a1 + 460) = sub_140635B00(a1: *(_QWORD *)&nExitCode, a2: v5) + *(float *)(a1 + 460);
  result = sub_1400B41D0(a1: *(_QWORD *)&nExitCode + 1072LL);
  if ( *(float *)(a1 + 460) > 0.066600002 || (_DWORD)result == 4 )
  {
    *(_DWORD *)(a1 + 460) = 0;
    v12 = sub_1405F8CF0(a1: a1 + 152);
    if ( v12 == 0 )
    {
      if ( (unsigned __int8)sub_140059A00(a1: off_140F142E0) != 0 )
        __debugbreak();
      sub_1409E7D98(a1: 999);
      __debugbreak();
    }
    v13 = *(_DWORD *)(v12 + 220);
    v14 = *(_QWORD *)(v12 + 224);
    v15 = *(_QWORD *)(v12 + 248);
    v16 = *(float **)(v12 + 240);
    v174 = *(float *)(v12 + 152);
    v200 = v13;
    v173 = *(float *)(v12 + 156);
    v17 = *(float *)(v12 + 160);
    *(_DWORD *)(a1 + 456) = 0;
    v18 = *(_QWORD *)(a1 + 408);
    v19 = *(_QWORD *)(a1 + 416) - v18;
    v172 = v17;
    v168 = v14;
    v182 = v15;
    v183 = v16;
    if ( v19 / 40 == 0 )
      goto LABEL_107;
    v175 = *(float *)(v18 + 32) + *(float *)(v18 + 36);
    sub_1406A3E50(a1: v2, a2: &v169);
    result = 0;
    v20 = v2[81];
    v21 = v200;
    v202 = 0;
    v22 = v2[80] - (float)(v169 * 2.0);
    v23 = v2[82] - (float)(v171 * 2.0);
    v178 = v22;
    v24 = v20 - (float)(v170 * 2.0);
    v180 = v23;
    v179 = v24;
    if ( v200 != 0 )
    {
      while ( 1 )
      {
        v25 = *(_DWORD *)(v15 + 4);
        if ( (v25 & 0xFFFFC000) == 0 )
          goto LABEL_103;
        v26 = v16[1];
        if ( v26 < 20.0 )
          goto LABEL_103;
        v27 = (float)(v16[3] + *v16) * 0.5;
        v28 = (float)(v26 + v16[4]) * 0.5;
        v29 = (float)(v16[2] + v16[5]) * 0.5;
        if ( (float)((float)((float)((float)((float)(v28 * v2[129]) + (float)(v27 * v2[125])) + (float)(v29 * v2[133]))
                           + v2[137])
                   + 4.0) < 0.0 )
          goto LABEL_103;
        v30 = v28 - v24;
        v31 = v27 - v22;
        v32 = v29 - v23;
        v33 = (float)((float)(v30 * v30) + (float)(v31 * v31)) + (float)(v32 * v32);
        if ( v33 < 0.0 )
        {
          v34 = sub_140A00700(a1: v21);
          LODWORD(result) = v202;
          v21 = v200;
        }
        else
        {
          v34 = fsqrt(v33);
        }
        if ( v34 >= 1.0e14 || v34 <= 0.0 )
        {
          v35 = 0.0;
          v36 = 0.0;
          v37 = 0.0;
        }
        else
        {
          v35 = v31 * (float)(1.0 / v34);
          v36 = v30 * (float)(1.0 / v34);
          v37 = v32 * (float)(1.0 / v34);
        }
        if ( (float)((float)((float)(v35 * v169) + (float)(v36 * v170)) + (float)(v37 * v171)) < 0.60000002 )
          goto LABEL_103;
        v38 = (float)((float)((float)(v28 - v173) * (float)(v28 - v173))
                    + (float)((float)(v27 - v174) * (float)(v27 - v174)))
            + (float)((float)(v29 - v172) * (float)(v29 - v172));
        v39 = v38 < 0.0 ? sub_140A00700(a1: v21) : fsqrt(v38);
        v40 = *(float *)(a1 + 516);
        if ( v39 <= v40 )
          break;
LABEL_102:
        LODWORD(result) = v202;
        v21 = v200;
LABEL_103:
        result = (unsigned int)(result + 1);
        v22 = v178;
        v15 = v182 + 12;
        v24 = v179;
        v14 += 36;
        v23 = v180;
        v16 += 6;
        v202 = result;
        v168 = v14;
        v182 += 12;
        v183 = v16;
        if ( (unsigned int)result >= (unsigned int)v21 )
          goto LABEL_104;
      }
      result = (unsigned int)(*(_DWORD *)(a1 + 456) + 12);
      if ( (unsigned int)result >= *(_DWORD *)(a1 + 436) )
        goto LABEL_104;
      v41 = *(_QWORD *)(a1 + 408);
      v42 = *(_QWORD *)(a1 + 416) - v41;
      v181 = v41;
      if ( v42 / 40 == 0 )
        goto LABEL_107;
      v43 = sub_140A003B0(a1: v42) * 0.050000001;
      v164 = v43;
      v45 = sub_140A003B0(a1: v44) * 0.079999998;
      *(float *)&v167 = v45;
      if ( (v25 & 0x4000) != 0 )
        v159 = 0.80000001;
      else
        v159 = 0.89999998;
      if ( (v25 & 0x30000) != 0 )
        v159 = 0.44999999;
      v46 = *(float *)(a1 + 512);
      v165 = -v45;
      v47 = 1.0;
      v166 = -v43;
      v186 = *(_OWORD *)(v41 + 8);
      if ( v39 > v46 )
        v47 = 1.0 - (float)((float)(v39 - v46) / (float)(v40 - v46));
      *((float *)&v186 + 3) = v47 * 0.80000001;
      v48 = sub_14008FC40(a1: &v186);
      v49 = *(float *)(v14 + 12) + *(float *)v14;
      v50 = (__m128)*(unsigned __int64 *)(v14 + 16);
      v51 = (__m128)*(unsigned __int64 *)(v14 + 28);
      v52 = *(_QWORD *)(a1 + 448);
      v163 = v48;
      v53 = 9LL * (unsigned int)(3 * *(_DWORD *)(a1 + 456));
      v184 = (float)(v49 + *(float *)(v14 + 24)) * 0.33333334;
      v185 = _mm_mul_ps(
               _mm_add_ps(v51, _mm_add_ps(v50, (__m128)*(unsigned __int64 *)(v14 + 4))),
               (__m128)xmmword_140F1AF30).m128_u64[0];
      v54 = ((unsigned __int8)sub_140240D30(a1: &v184, a2: 12) & 7u) / 3;
      v55 = v54 + 1;
      if ( (unsigned int)(v54 + 1) < 3 )
      {
        v57 = v54 + 2;
        v155 = 0;
        v56 = v54 + 1;
        if ( (unsigned int)(v54 + 2) >= 3 )
          goto LABEL_38;
      }
      else
      {
        v56 = 0;
        v57 = 1;
      }
      v155 = v57;
LABEL_38:
      v58 = sub_140240D30(a1: &v184, a2: 12);
      v176 = 1060320051;
      v162 = 0.30000001;
      v59 = (float)(v58 & 0x64) * 0.0099999998;
      v158 = v59;
      if ( v59 >= 0.30000001 )
      {
        v61 = (float *)&v176;
        if ( v59 <= 0.69999999 )
          v61 = &v158;
        v60 = *v61;
      }
      else
      {
        v60 = 0.30000001;
      }
      v62 = 3 * v54;
      v63 = v56;
      v64 = v155;
      v158 = v60;
      v14 = v168;
      v65 = (float)((float)(*(float *)(v168 + 12 * v63) - *(float *)(v168 + 4 * v62)) * v60)
          + *(float *)(v168 + 4 * v62);
      v66 = (float)((float)(*(float *)(v168 + 12 * v63 + 4) - *(float *)(v168 + 4 * v62 + 4)) * v60)
          + *(float *)(v168 + 4 * v62 + 4);
      v67 = (float)((float)(*(float *)(v168 + 12 * v63 + 8) - *(float *)(v168 + 4 * v62 + 8)) * v60)
          + *(float *)(v168 + 4 * v62 + 8);
      v68 = (float)((float)(*(float *)(v168 + 12LL * v155 + 4) - *(float *)(v168 + 12 * v63 + 4)) * v60)
          + *(float *)(v168 + 12 * v63 + 4);
      v69 = (float)((float)(*(float *)(v168 + 12LL * v155 + 8) - *(float *)(v168 + 12 * v63 + 8)) * v60)
          + *(float *)(v168 + 12 * v63 + 8);
      v70 = (float)((float)(*(float *)(v168 + 12LL * v155) - *(float *)(v168 + 12 * v63)) * v60)
          + *(float *)(v168 + 12 * v63);
      v71 = v70 - v65;
      v72 = v68;
      v73 = v68 - v66;
      v74 = v69;
      v75 = v69 - v67;
      v76 = (float)(v70 + v65) * 0.5;
      v77 = (float)(v72 + v66) * 0.5;
      v78 = (float)(v74 + v67) * 0.5;
      v79 = (float)((float)(v73 * v73) + (float)(v71 * v71)) + (float)(v75 * v75);
      if ( v79 < 0.0 )
        v80 = sub_140A00700(a1: 3LL * v155);
      else
        v80 = fsqrt(v79);
      if ( v80 >= 1.0e14 || v80 <= 0.0 )
      {
        v81 = 0.0;
        v82 = 0.0;
        v83 = 0.0;
      }
      else
      {
        v81 = v71 * (float)(1.0 / v80);
        v82 = v73 * (float)(1.0 / v80);
        v83 = v75 * (float)(1.0 / v80);
      }
      v84 = *(float *)(v181 + 28);
      v85 = v83 * v84;
      v86 = v81 * v84;
      v87 = *(_DWORD *)(v182 + 4);
      v88 = v82 * v84;
      v89 = v86 + v76;
      v90 = v88 + v77;
      v91 = v85 + v78;
      v92 = v78 - v85;
      v93 = 0.0;
      v156 = v76 - v86;
      v94 = 0.25;
      v161 = v92;
      v160 = v77 - v88;
      if ( (v87 & 0x4000) == 0 )
      {
        v95 = 0;
        v96 = 1056964608;
        if ( (v87 & 0x10000) != 0 )
        {
          v94 = 0.375;
          v93 = 0.25;
LABEL_82:
          *(float *)(v52 + 4 * v53) = v89;
          *(float *)(v52 + 4 * v53 + 4) = v90;
          *(float *)(v52 + 4 * v53 + 8) = v91;
          *(_DWORD *)(v52 + 4 * v53 + 28) = v95;
          *(_QWORD *)(v52 + 4 * v53 + 12) = 0x3F80000000000000LL;
          v97 = v163;
          *(_DWORD *)(v52 + 4 * v53 + 24) = v163;
          *(_DWORD *)(v52 + 4 * v53 + 20) = 0;
          v98 = v89 + v164;
          v99 = v159;
          v100 = v160;
          v101 = v90 + v159;
          v102 = v94 * 0.5;
          v103 = v156 + v166;
          v104 = v93 * 0.5;
          *(float *)(v52 + 4 * v53 + 32) = v102;
          *(float *)(v52 + 4 * v53 + 36) = v98;
          *(float *)(v52 + 4 * v53 + 40) = v101;
          *(_QWORD *)(v52 + 4 * v53 + 48) = 0x3F80000000000000LL;
          v105 = v100 + v99;
          v106 = v91 + v165;
          *(_DWORD *)(v52 + 4 * v53 + 64) = v95;
          *(float *)(v52 + 4 * v53 + 68) = v104;
          *(_DWORD *)(v52 + 4 * v53 + 60) = v97;
          *(_DWORD *)(v52 + 4 * v53 + 56) = 0;
          *(float *)(v52 + 4 * v53 + 44) = v106;
          v107 = v161;
          *(_QWORD *)(v52 + 4 * v53 + 84) = 0x3F80000000000000LL;
          v108 = v107 + *(float *)&v167;
          *(float *)(v52 + 4 * v53 + 72) = v103;
          *(float *)(v52 + 4 * v53 + 76) = v105;
          *(_DWORD *)(v52 + 4 * v53 + 100) = v96;
          *(float *)(v52 + 4 * v53 + 104) = v104;
          *(float *)(v52 + 4 * v53 + 80) = v108;
          *(_DWORD *)(v52 + 4 * v53 + 96) = v97;
          *(_DWORD *)(v52 + 4 * v53 + 92) = 0;
          ++*(_DWORD *)(a1 + 456);
          *(_QWORD *)(v52 + 4 * v53 + 120) = 0x3F80000000000000LL;
          *(_DWORD *)(v52 + 4 * v53 + 128) = 0;
          *(float *)(v52 + 4 * v53 + 108) = v89;
          *(float *)(v52 + 4 * v53 + 112) = v90;
          *(float *)(v52 + 4 * v53 + 116) = v91;
          *(_DWORD *)(v52 + 4 * v53 + 136) = v95;
          *(float *)(v52 + 4 * v53 + 140) = v102;
          *(_DWORD *)(v52 + 4 * v53 + 132) = v97;
          *(_QWORD *)(v52 + 4 * v53 + 156) = 0x3F80000000000000LL;
          *(_DWORD *)(v52 + 4 * v53 + 164) = 0;
          *(float *)(v52 + 4 * v53 + 144) = v103;
          *(float *)(v52 + 4 * v53 + 148) = v105;
          *(float *)(v52 + 4 * v53 + 152) = v108;
          *(_DWORD *)(v52 + 4 * v53 + 172) = v96;
          *(float *)(v52 + 4 * v53 + 176) = v104;
          *(_DWORD *)(v52 + 4 * v53 + 168) = v97;
          *(_QWORD *)(v52 + 4 * v53 + 192) = 0x3F80000000000000LL;
          *(_DWORD *)(v52 + 4 * v53 + 200) = 0;
          *(float *)(v52 + 4 * v53 + 180) = v156;
          *(float *)(v52 + 4 * v53 + 184) = v100;
          *(float *)(v52 + 4 * v53 + 188) = v107;
          *(_DWORD *)(v52 + 4 * v53 + 208) = v96;
          *(float *)(v52 + 4 * v53 + 212) = v102;
          *(_DWORD *)(v52 + 4 * v53 + 204) = v97;
          ++*(_DWORD *)(a1 + 456);
          if ( *(_DWORD *)(a1 + 440) > 1u )
          {
            v109 = v64 + 1;
            v110 = 0;
            if ( v55 < 3 )
              v110 = v55;
            v111 = 0;
            if ( v57 < 3 )
              v111 = v57;
            v112 = 0;
            if ( v109 < 3 )
              v112 = v109;
            v113 = sub_140240D30(a1: &v184, a2: 12);
            v114 = 0.30000001;
            v177 = 1060320051;
            v162 = 0.30000001;
            v115 = (float)(v113 & 0x32) * 0.0099999998;
            v158 = v115;
            if ( v115 >= 0.30000001 )
            {
              v116 = (float *)&v177;
              if ( v115 <= 0.69999999 )
                v116 = &v158;
              v114 = *v116;
            }
            v117 = v181;
            v118 = 3 * v111;
            v14 = v168;
            v158 = v114;
            v119 = *(float *)(v181 + 28) * v114;
            v120 = *(float *)(v168 + 4 * v118 + 8);
            v121 = (float)((float)(*(float *)(v168 + 4 * v118) - *(float *)(v168 + 12 * v110)) * v119)
                 + *(float *)(v168 + 12 * v110);
            v122 = (float)((float)(*(float *)(v168 + 4 * v118 + 4) - *(float *)(v168 + 12 * v110 + 4)) * v119)
                 + *(float *)(v168 + 12 * v110 + 4);
            v123 = (float)((float)(v120 - *(float *)(v168 + 12 * v110 + 8)) * v119) + *(float *)(v168 + 12 * v110 + 8);
            v124 = (float)((float)(*(float *)(v168 + 12 * v112 + 4) - *(float *)(v168 + 4 * v118 + 4)) * v119)
                 + *(float *)(v168 + 4 * v118 + 4);
            v125 = v124 - v122;
            v126 = (float)(*(float *)(v168 + 12 * v112 + 8) - v120) * v119;
            v127 = (float)((float)(*(float *)(v168 + 12 * v112) - *(float *)(v168 + 4 * v118)) * v119)
                 + *(float *)(v168 + 4 * v118);
            v128 = v127 - v121;
            v129 = v126 + v120;
            v157 = v124 - v122;
            v160 = (float)(v124 + v122) * 0.5;
            v130 = v129 + v123;
            v131 = (float)(v127 + v121) * 0.5;
            v132 = v129 - v123;
            v161 = v132;
            v162 = v130 * 0.5;
            v133 = (float)((float)(v125 * v125) + (float)(v128 * v128)) + (float)(v132 * v132);
            if ( v133 < 0.0 )
            {
              v134 = sub_140A00700(a1: 3 * v112);
              v125 = v157;
              v132 = v161;
              v117 = v181;
            }
            else
            {
              v134 = fsqrt(v133);
            }
            if ( v134 >= 1.0e14 || v134 <= 0.0 )
            {
              v135 = 0.0;
              v136 = 0.0;
              v137 = 0.0;
            }
            else
            {
              v135 = v128 * (float)(1.0 / v134);
              v136 = v125 * (float)(1.0 / v134);
              v137 = v132 * (float)(1.0 / v134);
            }
            v138 = *(float *)(v117 + 28);
            *(_DWORD *)(v52 + 4 * v53 + 244) = v95;
            *(float *)(v52 + 4 * v53 + 248) = v102;
            v139 = v163;
            *(_DWORD *)(v52 + 4 * v53 + 240) = v163;
            v140 = v162;
            v141 = v137 * v138;
            v142 = v135 * v138;
            v143 = v142 + v131;
            v144 = (float)(v136 * v138) + v160;
            v145 = v160 - (float)(v136 * v138);
            v146 = v141 + v162;
            *(float *)(v52 + 4 * v53 + 216) = v142 + v131;
            v147 = v140 - v141;
            v148 = v131 - v142;
            *(_QWORD *)(v52 + 4 * v53 + 228) = 0x3F80000000000000LL;
            *(float *)(v52 + 4 * v53 + 220) = v144;
            *(float *)(v52 + 4 * v53 + 224) = v146;
            *(_DWORD *)(v52 + 4 * v53 + 236) = 0;
            v149 = v143 + v164;
            v150 = v159;
            *(_QWORD *)(v52 + 4 * v53 + 264) = 0x3F80000000000000LL;
            *(_DWORD *)(v52 + 4 * v53 + 280) = v95;
            v151 = v148 + v166;
            *(float *)(v52 + 4 * v53 + 252) = v149;
            v152 = v146 + v165;
            *(float *)(v52 + 4 * v53 + 256) = v144 + v150;
            *(float *)(v52 + 4 * v53 + 284) = v104;
            *(_DWORD *)(v52 + 4 * v53 + 276) = v139;
            *(float *)(v52 + 4 * v53 + 260) = v152;
            v153 = v147 + *(float *)&v167;
            *(_DWORD *)(v52 + 4 * v53 + 272) = 0;
            *(_QWORD *)(v52 + 4 * v53 + 300) = 0x3F80000000000000LL;
            *(float *)(v52 + 4 * v53 + 288) = v151;
            *(float *)(v52 + 4 * v53 + 292) = v145 + v150;
            *(float *)(v52 + 4 * v53 + 296) = v153;
            *(_DWORD *)(v52 + 4 * v53 + 316) = v96;
            *(float *)(v52 + 4 * v53 + 320) = v104;
            *(_DWORD *)(v52 + 4 * v53 + 312) = v139;
            *(_DWORD *)(v52 + 4 * v53 + 308) = 0;
            ++*(_DWORD *)(a1 + 456);
            *(_QWORD *)(v52 + 4 * v53 + 336) = 0x3F80000000000000LL;
            *(_DWORD *)(v52 + 4 * v53 + 344) = 0;
            *(float *)(v52 + 4 * v53 + 324) = v143;
            *(float *)(v52 + 4 * v53 + 328) = v144;
            *(float *)(v52 + 4 * v53 + 332) = v146;
            *(_DWORD *)(v52 + 4 * v53 + 352) = v95;
            *(float *)(v52 + 4 * v53 + 356) = v102;
            *(_DWORD *)(v52 + 4 * v53 + 348) = v139;
            *(_QWORD *)(v52 + 4 * v53 + 372) = 0x3F80000000000000LL;
            *(_DWORD *)(v52 + 4 * v53 + 380) = 0;
            *(float *)(v52 + 4 * v53 + 360) = v151;
            *(float *)(v52 + 4 * v53 + 364) = v145 + v150;
            *(float *)(v52 + 4 * v53 + 368) = v153;
            *(_DWORD *)(v52 + 4 * v53 + 388) = v96;
            *(float *)(v52 + 4 * v53 + 392) = v104;
            *(_DWORD *)(v52 + 4 * v53 + 384) = v139;
            *(float *)(v52 + 4 * v53 + 396) = v148;
            *(float *)(v52 + 4 * v53 + 400) = v145;
            *(float *)(v52 + 4 * v53 + 404) = v147;
            *(_DWORD *)(v52 + 4 * v53 + 424) = v96;
            *(float *)(v52 + 4 * v53 + 428) = v102;
            *(_DWORD *)(v52 + 4 * v53 + 420) = v139;
            *(_QWORD *)(v52 + 4 * v53 + 408) = 0x3F80000000000000LL;
            *(_DWORD *)(v52 + 4 * v53 + 416) = 0;
            ++*(_DWORD *)(a1 + 456);
          }
          v2 = a2;
          v16 = v183;
          goto LABEL_102;
        }
        if ( (v87 & 0x20000) != 0 )
        {
          v93 = 0.375;
          v94 = 0.5;
          goto LABEL_82;
        }
        if ( (v87 & 0x40000) != 0 )
        {
          v93 = 0.25;
          v94 = 0.5;
        }
        else
        {
          if ( (v87 & 0x80000) != 0 )
          {
            v94 = 0.75;
            v96 = 1056964608;
            v93 = 0.5;
            goto LABEL_82;
          }
          if ( (v87 & 0x100000) != 0 )
          {
            v94 = 0.75;
            v93 = 0.5;
          }
          else
          {
            if ( (v87 & 0x200000) != 0 )
            {
              v93 = 0.75;
              v96 = 1056964608;
              v94 = 1.0;
              goto LABEL_82;
            }
            if ( (v87 & 0x400000) != 0 )
            {
              v94 = 1.25;
              v96 = 1056964608;
              v93 = 1.0;
              goto LABEL_82;
            }
            if ( (v87 & 0x800000) != 0 )
            {
              v94 = 1.25;
              v93 = 1.0;
            }
            else
            {
              if ( (v87 & 0x1000000) != 0 )
              {
                v93 = 1.25;
                v96 = 1056964608;
                v94 = 1.5;
                goto LABEL_82;
              }
              if ( (v87 & 0x2000000) != 0 )
              {
                v93 = 1.25;
                v94 = 1.5;
              }
              else
              {
                if ( (v87 & 0x4000000) != 0 )
                {
                  v93 = 1.5;
                  v96 = 1056964608;
                  v94 = 1.75;
                  goto LABEL_82;
                }
                if ( (v87 & 0x8000000) != 0 )
                {
                  v93 = 1.5;
                  v94 = 1.75;
                }
                else
                {
                  if ( (v87 & 0x10000000) != 0 )
                  {
                    v93 = 1.75;
                    v96 = 1056964608;
                    v94 = 2.0;
                    goto LABEL_82;
                  }
                  if ( (v87 & 0x20000000) != 0 )
                  {
                    v93 = 0.75;
                    v94 = 1.0;
                  }
                  else
                  {
                    if ( (v87 & 0x40000000) == 0 )
                      goto LABEL_82;
                    v93 = 1.75;
                    v94 = 2.0;
                  }
                }
              }
            }
          }
        }
      }
      v96 = 1065353216;
      v95 = 1056964608;
      goto LABEL_82;
    }
  }
LABEL_104:
  v154 = *(_DWORD *)(a1 + 456);
  if ( v154 != 0 )
  {
    v187 = *(_QWORD *)(a1 + 448);
    v190 = v154;
    v191 = byte_1412FF640;
    v192 = *(_QWORD *)(a1 + 464);
    v188 = 338;
    v189 = 4;
    v193 = 0;
    v194 = 0;
    v195 = 1065353216;
    v196 = 0;
    v197 = -1;
    v198 = 1;
    v199 = 0;
    return sub_14069C570(a1: v2, a2: &v187);
  }
  return result;
}