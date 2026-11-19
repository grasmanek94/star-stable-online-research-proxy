// Hex-Rays export, baseline 645.348067; descriptive analysis label.
void __fastcall sub_1401383F0(__int64 a1, __int64 a2, float *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  float v10; // xmm2_4
  float v11; // xmm6_4
  __m128 v12; // xmm0
  __m128 v13; // xmm8
  __int64 v14; // rcx
  float v15; // xmm7_4
  float v16; // xmm1_4
  float v17; // xmm2_4
  __m128 v18; // xmm14
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  int v24; // r8d
  float v25; // xmm0_4
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  float v32; // xmm1_4
  float v33; // xmm0_4
  float v34; // xmm1_4
  float v35; // xmm1_4
  float v36; // xmm1_4
  __int64 v37; // rcx
  float v38; // xmm0_4
  __m128 v39; // xmm14
  __int64 v40; // rax
  __int64 v41; // rcx
  float v42; // xmm6_4
  float v43; // xmm8_4
  float v44; // xmm9_4
  float v45; // xmm2_4
  float v46; // xmm0_4
  float v47; // xmm5_4
  float v48; // xmm4_4
  float v49; // xmm8_4
  float v50; // xmm13_4
  float v51; // xmm12_4
  float v52; // xmm11_4
  float v53; // xmm10_4
  float v54; // xmm9_4
  float v55; // xmm7_4
  float v56; // xmm6_4
  float v57; // xmm2_4
  float v58; // xmm3_4
  float v59; // xmm5_4
  float v60; // xmm13_4
  float v61; // xmm12_4
  float v62; // xmm11_4
  float v63; // xmm10_4
  float v64; // xmm9_4
  float v65; // xmm1_4
  float v66; // xmm14_4
  float v67; // xmm14_4
  unsigned int v68; // xmm3_4
  unsigned int v69; // xmm2_4
  float v70; // xmm0_4
  int v71; // eax
  int v72; // r9d
  __int128 v73; // xmm1
  __int128 v74; // xmm0
  __int128 v75; // xmm1
  __int128 v76; // xmm0
  __int128 v77; // xmm1
  __int128 v78; // xmm0
  float v79; // xmm2_4
  int v80; // eax
  int v81; // r9d
  __int64 v82; // rcx
  float v83; // xmm1_4
  float v84; // xmm2_4
  float v85; // xmm4_4
  float v86; // xmm3_4
  float v87; // xmm2_4
  float v88; // xmm0_4
  float v89; // xmm1_4
  float v90; // xmm4_4
  int v91; // eax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rax
  __int64 v95; // rcx
  int v96; // r9d
  float v97; // xmm8_4
  __m128 v98; // xmm12
  __m128 v99; // xmm13
  float v100; // xmm9_4
  float v101; // xmm6_4
  float v102; // xmm2_4
  float v103; // xmm0_4
  __int64 v104; // rax
  __int64 v105; // xmm4_8
  float v106; // xmm3_4
  float v107; // xmm3_4
  float v108; // xmm0_4
  __m128 v109; // xmm3
  __int64 v110; // rdx
  float v111; // xmm8_4
  float v112; // xmm6_4
  float v113; // xmm9_4
  float v114; // xmm10_4
  float v115; // xmm14_4
  float v116; // xmm3_4
  float v117; // xmm8_4
  float v118; // xmm6_4
  float v119; // xmm2_4
  float v120; // xmm0_4
  float v121; // xmm4_4
  float v122; // xmm5_4
  float v123; // xmm1_4
  float v124; // xmm2_4
  unsigned __int64 v125; // xmm0_8
  float v126; // xmm3_4
  float v127; // xmm12_4
  float v128; // xmm10_4
  float v129; // xmm13_4
  float v130; // xmm2_4
  float v131; // xmm1_4
  float v132; // xmm3_4
  __int64 v133; // [rsp+80h] [rbp-80h] BYREF
  float v134; // [rsp+88h] [rbp-78h]
  __m128 v135; // [rsp+90h] [rbp-70h] BYREF
  float v136; // [rsp+A0h] [rbp-60h] BYREF
  float v137; // [rsp+A4h] [rbp-5Ch]
  float v138; // [rsp+A8h] [rbp-58h]
  __int128 v139; // [rsp+B0h] [rbp-50h] BYREF
  float v140; // [rsp+C0h] [rbp-40h] BYREF
  float v141; // [rsp+C4h] [rbp-3Ch]
  float v142; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v143; // [rsp+D0h] [rbp-30h] BYREF
  float v144; // [rsp+D8h] [rbp-28h]
  float v145; // [rsp+E0h] [rbp-20h]
  float v146[4]; // [rsp+E8h] [rbp-18h] BYREF
  float v147[4]; // [rsp+F8h] [rbp-8h] BYREF
  float v148[4]; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v149[2]; // [rsp+118h] [rbp+18h] BYREF
  __int64 v150; // [rsp+128h] [rbp+28h] BYREF
  __int128 v151; // [rsp+130h] [rbp+30h]
  __int64 v152; // [rsp+140h] [rbp+40h]
  char v153; // [rsp+148h] [rbp+48h]
  _BYTE v154[16]; // [rsp+150h] [rbp+50h] BYREF
  float v155; // [rsp+240h] [rbp+140h]
  float v156; // [rsp+240h] [rbp+140h]
  float v157; // [rsp+258h] [rbp+158h]

  if ( (*(_BYTE *)(a1 + 144) & 0x40) != 0 )
  {
    if ( sub_1400CF220(a1) )
    {
      v8 = sub_1400B5440(a1: v7, a2: v6);
      sub_1400CC650(a1, a2: &v133, a3: v8);
      v10 = (float)((float)((float)(a3[80] - *(float *)&v133) * (float)(a3[80] - *(float *)&v133))
                  + (float)((float)(a3[81] - *((float *)&v133 + 1)) * (float)(a3[81] - *((float *)&v133 + 1))))
          + (float)((float)(a3[82] - v134) * (float)(a3[82] - v134));
      if ( v10 < 0.0 )
        v11 = sub_140A00700(a1: v9);
      else
        v11 = fsqrt(v10);
      v155 = v11;
      *(double *)v12.m128_u64 = (*(double (__fastcall **)(__int64))(*(_QWORD *)a1 + 720LL))(a1);
      v13 = _mm_shuffle_ps(v12, v12, 0);
      v145 = v13.m128_f32[0];
      sub_1400CA820(a1, a2: &v136);
      v14 = *(_QWORD *)(a1 + 160);
      v15 = 0.0;
      if ( v14 != 0 && (unsigned __int8)sub_1406529A0(a1: v14) != 0 )
      {
        v16 = *(float *)(a1 + 216);
        if ( v16 > v11 )
        {
          v17 = *(float *)(a1 + 212);
          v18 = (__m128)0x3F800000u;
          if ( v11 > v17 )
            v18.m128_f32[0] = 1.0 - (float)((float)(v11 - v17) / (float)(v16 - v17));
          if ( *(_BYTE *)(a1 + 610) != 0 )
          {
            if ( sub_1406214A0(a1: a2) != 0 )
            {
              sub_1406214A0(a1: a2);
              v19 = *(_QWORD *)a1;
              v22 = sub_1400B5440(a1: v21, a2: v20);
              v23 = (*(__int64 (__fastcall **)(__int64, __int64))(v19 + 696))(a1, a2: v22);
              sub_1406A24C0(a1: (_DWORD)a3, a2: v23, a3: v24, a4: (unsigned int)sub_14013B830, a5: a1);
            }
          }
          else if ( *(_BYTE *)(a1 + 609) != 0 )
          {
            v25 = sub_1400B4560(a1) + *(float *)(a1 + 224);
            *(float *)(a1 + 224) = v25;
            if ( v25 > 0.25 )
            {
              *(_DWORD *)(a1 + 224) = 0;
              if ( *(_BYTE *)(a1 + 611) == 0 )
              {
                *(_DWORD *)(a1 + 152) = 1;
                v150 = 0;
                v151 = 0;
                v152 = 0;
                v153 = 0;
                v26 = sub_1406214C0(a1: a2);
                v27 = sub_1406288D0(a1: v26);
                v28 = sub_1405D2000(a1: v27);
                if ( v28 != 0 )
                {
                  sub_1405F8B50(a1: v149, a2: v28 + 32);
                  v149[0] = &PXEngine::SafeActorPtrAs<CPXSpace>::`vftable';
                  v29 = sub_1405F8CF0(a1: (__int64)v149);
                  if ( v29 != 0
                    && (unsigned int)sub_140177580(
                                       a1: v29,
                                       a2: a1,
                                       a3: (__int64)&v133,
                                       a4: (__int64)(a3 + 80),
                                       a5: 1u,
                                       a6: 0,
                                       a7: &v150,
                                       a8: 1,
                                       a9: 0,
                                       a10: 0) != 0 )
                  {
                    *(_DWORD *)(a1 + 152) = 0;
                  }
                }
              }
            }
          }
          else
          {
            *(_DWORD *)(a1 + 152) = 1;
          }
          if ( sub_1406214A0(a1: a2) != 0 )
            sub_1406214A0(a1: a2);
          if ( *(_DWORD *)(a1 + 152) != 0 )
          {
            v32 = sub_1400B4560(a1);
            v33 = *(float *)(a1 + 220);
            v34 = v32 + *(float *)(a1 + 156);
            *(float *)(a1 + 156) = v34;
            if ( v34 > v33 )
            {
              *(float *)(a1 + 156) = v33;
              v34 = v33;
            }
            v35 = v34 / v33;
          }
          else
          {
            v36 = *(float *)(a1 + 156) - sub_1400B4560(a1);
            *(float *)(a1 + 156) = v36;
            if ( v36 < 0.0 )
            {
              *(_DWORD *)(a1 + 156) = 0;
              v36 = 0.0;
            }
            v35 = v36 / *(float *)(a1 + 220);
          }
          v18.m128_f32[0] = v18.m128_f32[0] * v35;
          if ( v18.m128_f32[0] > 0.0 )
          {
            *(float *)(a1 + 228) = (float)(sub_1400B4560(a1) * 20.0) + *(float *)(a1 + 228);
            v38 = (float)(sub_140A003B0(a1: v37) * 0.050000001) + v18.m128_f32[0];
            v18 = (__m128)0x3F800000u;
            v18.m128_f32[0] = fminf(1.0, fmaxf(0.0, v38));
          }
          v39 = _mm_shuffle_ps(v18, v18, 0);
          if ( *(_BYTE *)(a1 + 610) != 0 )
          {
            v40 = sub_1400B5440(a1: v31, a2: v30);
            sub_1400CC650(a1, a2: v147, a3: v40);
            v42 = a3[80] - v147[0];
            v43 = a3[81] - v147[1];
            v44 = a3[82] - v147[2];
            v45 = (float)((float)(v42 * v42) + (float)(v43 * v43)) + (float)(v44 * v44);
            if ( v45 < 0.0 )
              v46 = sub_140A00700(a1: v41);
            else
              v46 = fsqrt(v45);
            if ( v46 >= 1.0e14 || v46 <= 0.0 )
            {
              v48 = 0.0;
              v47 = 0.0;
            }
            else
            {
              v47 = (float)(1.0 / v46) * v44;
              v48 = (float)(1.0 / v46) * v43;
              v15 = (float)(1.0 / v46) * v42;
            }
            v49 = (float)(*(float *)(a1 + 208) * 100.0) * 4.0;
            v50 = (float)(v48 * 0.0) - (float)(v47 * 1.0);
            v51 = (float)(v47 * 0.0) - (float)(v15 * 0.0);
            v52 = (float)(v15 * 1.0) - (float)(v48 * 0.0);
            v53 = (float)(v47 * v51) - (float)(v48 * v52);
            v54 = (float)(v15 * v52) - (float)(v47 * v50);
            v157 = (float)(v48 * v50) - (float)(v15 * v51);
            v55 = (float)((float)-v50 * v49) + *(float *)&v133;
            v56 = (float)((float)-v51 * v49) + *((float *)&v133 + 1);
            v57 = v53 * v49;
            v58 = v54 * v49;
            v59 = (float)((float)-v52 * v49) + v134;
            *(float *)(a1 + 252) = v55 + (float)(v53 * v49);
            *(float *)(a1 + 256) = v56 + (float)(v54 * v49);
            *(float *)(a1 + 260) = v59 + (float)(v157 * v49);
            v60 = (float)(v50 * v49) + *(float *)&v133;
            v61 = (float)(v51 * v49) + *((float *)&v133 + 1);
            v62 = (float)(v52 * v49) + v134;
            v63 = (float)-v53 * v49;
            v64 = (float)-v54 * v49;
            *(float *)(a1 + 276) = v57 + v60;
            *(float *)(a1 + 280) = v58 + v61;
            *(float *)(a1 + 284) = (float)(v157 * v49) + v62;
            v65 = (float)-v157 * v49;
            v13.m128_f32[0] = v145;
            v66 = v39.m128_f32[0] * v145;
            *(float *)(a1 + 300) = v55 + v63;
            *(float *)(a1 + 304) = v56 + v64;
            *(float *)(a1 + 308) = v65 + v59;
            *(float *)(a1 + 324) = v63 + v60;
            *(float *)(a1 + 328) = v64 + v61;
            *(float *)(a1 + 332) = v65 + v62;
            v67 = v66 * *(float *)(a1 + 248);
            *(float *)&v68 = (float)(*(float *)(a1 + 236) * 0.80000001) * v67;
            *(float *)&v69 = (float)(*(float *)(a1 + 240) * 0.80000001) * v67;
            v70 = *(float *)(a1 + 244) * 0.80000001;
            *(float *)&v139 = (float)(*(float *)(a1 + 232) * 0.80000001) * v67;
            *(_QWORD *)((char *)&v139 + 4) = __PAIR64__(v69, v68);
            *((float *)&v139 + 3) = v70;
            v71 = sub_14008FC40(a1: &v139);
            *(_DWORD *)(a1 + 264) = v71;
            *(_DWORD *)(a1 + 288) = v71;
            *(_DWORD *)(a1 + 312) = v71;
            *(_DWORD *)(a1 + 336) = v71;
            if ( v67 > 0.050000001 )
            {
              LOBYTE(v72) = 5;
              sub_14069C5F0(
                a1: (_DWORD)a3,
                a2: a1 + 252,
                a3: 322,
                a4: v72,
                a5: 2,
                a6: 0,
                a7: *(_QWORD *)(a1 + 160),
                a8: 0,
                a9: 0,
                a10: 1065353216,
                a11: 0,
                a12: 0,
                a13: 11,
                a14: 1,
                a15: 0);
            }
            v73 = *(_OWORD *)(a1 + 268);
            *(_OWORD *)(a1 + 348) = *(_OWORD *)(a1 + 252);
            v74 = *(_OWORD *)(a1 + 284);
            *(_OWORD *)(a1 + 364) = v73;
            v75 = *(_OWORD *)(a1 + 300);
            *(_OWORD *)(a1 + 380) = v74;
            v76 = *(_OWORD *)(a1 + 316);
            *(_OWORD *)(a1 + 396) = v75;
            v77 = *(_OWORD *)(a1 + 332);
            *(_OWORD *)(a1 + 412) = v76;
            v78 = *(_OWORD *)(a1 + 232);
            *(_OWORD *)(a1 + 428) = v77;
            v139 = v78;
            v79 = v13.m128_f32[0] * *(float *)(a1 + 248);
            *(float *)&v139 = *(float *)&v78 * v79;
            *((float *)&v139 + 2) = *((float *)&v78 + 2) * v79;
            *((float *)&v139 + 1) = *((float *)&v78 + 1) * v79;
            v80 = sub_14008FC40(a1: &v139);
            LOBYTE(v81) = 5;
            *(_DWORD *)(a1 + 360) = v80;
            *(_DWORD *)(a1 + 384) = v80;
            *(_DWORD *)(a1 + 408) = v80;
            *(_DWORD *)(a1 + 432) = v80;
            sub_14069C5F0(
              a1: (_DWORD)a3,
              a2: a1 + 348,
              a3: 322,
              a4: v81,
              a5: 2,
              a6: 0,
              a7: *(_QWORD *)(a1 + 160),
              a8: 0,
              a9: 0,
              a10: 1065353216,
              a11: 0,
              a12: 0,
              a13: 3,
              a14: 1,
              a15: 0);
            v15 = 0.0;
          }
          else if ( v39.m128_f32[0] > 0.0 )
          {
            v104 = sub_1406A4970(a1: a3, a2: v154, a3: &v133);
            v105 = *(_QWORD *)v104;
            v133 = *(_QWORD *)v104;
            v134 = *(float *)(v104 + 8);
            if ( v134 < 1.0 )
            {
              v106 = *(float *)(a1 + 208);
              v135 = _mm_mul_ps(
                       _mm_mul_ps(_mm_mul_ps(*(__m128 *)(a1 + 232), v39), v13),
                       _mm_shuffle_ps((__m128)*(unsigned int *)(a1 + 248), (__m128)*(unsigned int *)(a1 + 248), 0));
              v107 = (float)((float)(v106 * 148.0) * 1.0) * 0.5;
              v146[0] = *(float *)&v105 - v107;
              v146[2] = v107 + *(float *)&v105;
              v146[1] = *((float *)&v133 + 1) - v107;
              v146[3] = v107 + *((float *)&v133 + 1);
              if ( *(_BYTE *)(a1 + 608) != 0 )
              {
                sub_1406A3E50(a1: a3, a2: &v140);
                v109 = (__m128)LODWORD(v136);
                v109.m128_f32[0] = v136 * (float)-v140;
                v140 = -v140;
                v108 = v137 * (float)-v141;
                v141 = -v141;
                v142 = -v142;
                v109.m128_f32[0] = (float)(v109.m128_f32[0] + v108) + (float)(v138 * v142);
                if ( v109.m128_f32[0] >= 0.0 )
                {
                  v110 = *(_QWORD *)(a1 + 160);
                  v109.m128_f32[0] = v109.m128_f32[0] + v109.m128_f32[0];
                  v135 = _mm_mul_ps(v135, _mm_shuffle_ps(v109, v109, 0));
                  sub_1406A1070(
                    a1: (_DWORD)a3,
                    a2: v110,
                    a3: (unsigned int)v146,
                    a4: (unsigned int)&v135,
                    a5: 1065353216,
                    a6: 0,
                    a7: -1,
                    a8: 0);
                }
              }
              else
              {
                sub_1406A1070(
                  a1: (_DWORD)a3,
                  a2: *(_QWORD *)(a1 + 160),
                  a3: (unsigned int)v146,
                  a4: (unsigned int)&v135,
                  a5: 1065353216,
                  a6: 0,
                  a7: -1,
                  a8: 0);
              }
            }
          }
        }
      }
      v82 = *(_QWORD *)(a1 + 448);
      if ( v82 != 0 && (unsigned __int8)sub_1406529A0(a1: v82) != 0 )
      {
        v83 = *(float *)(a1 + 508);
        if ( v83 > v155 )
        {
          v84 = *(float *)(a1 + 504);
          v85 = 1.0;
          if ( v155 > v84 )
            v85 = 1.0 - (float)((float)(v155 - v84) / (float)(v83 - v84));
          v86 = *(float *)(a1 + 248);
          v87 = (float)(v85 * *(float *)(a1 + 236)) * v13.m128_f32[0];
          v88 = v86 * (float)((float)(v85 * *(float *)(a1 + 232)) * v13.m128_f32[0]);
          v89 = v85 * *(float *)(a1 + 240);
          v90 = v85 * *(float *)(a1 + 244);
          v148[0] = v88;
          v148[1] = v86 * v87;
          v148[2] = v86 * (float)(v89 * v13.m128_f32[0]);
          v148[3] = v86 * (float)(v90 * v13.m128_f32[0]);
          v91 = sub_14008FC40(a1: v148);
          *(_DWORD *)(a1 + 596) = v91;
          *(_DWORD *)(a1 + 572) = v91;
          *(_DWORD *)(a1 + 548) = v91;
          *(_DWORD *)(a1 + 524) = v91;
          v94 = sub_1400B5440(a1: v93, a2: v92);
          sub_1400CC650(a1, a2: &v143, a3: v94);
          v97 = a3[82] - v144;
          v98 = (__m128)(unsigned int)v143;
          v99 = (__m128)HIDWORD(v143);
          v100 = a3[80] - *(float *)&v143;
          v101 = a3[81] - *((float *)&v143 + 1);
          v102 = (float)((float)(v100 * v100) + (float)(v101 * v101)) + (float)(v97 * v97);
          if ( v102 < 0.0 )
            v103 = sub_140A00700(a1: v95);
          else
            v103 = fsqrt(v102);
          if ( v103 >= 1.0e14 || v103 <= 0.0 )
          {
            v112 = 0.0;
            v111 = 0.0;
            v113 = 0.0;
          }
          else
          {
            v111 = v97 * (float)(1.0 / v103);
            v112 = v101 * (float)(1.0 / v103);
            v113 = v100 * (float)(1.0 / v103);
          }
          v114 = v138;
          v115 = (float)(v111 * v137) - (float)(v112 * v138);
          v116 = (float)(v113 * v138) - (float)(v111 * v136);
          v117 = v137;
          v156 = v116;
          v118 = (float)(v112 * v136) - (float)(v113 * v137);
          v119 = (float)((float)(v115 * v115) + (float)(v116 * v116)) + (float)(v118 * v118);
          if ( v119 < 0.0 )
          {
            v120 = sub_140A00700(a1: v95);
            v116 = v156;
          }
          else
          {
            v120 = fsqrt(v119);
          }
          if ( v120 >= 1.0e14 || v120 <= 0.0 )
          {
            v121 = 0.0;
            v122 = 0.0;
          }
          else
          {
            v121 = (float)(1.0 / v120) * v118;
            v122 = (float)(1.0 / v120) * v116;
            v15 = (float)(1.0 / v120) * v115;
          }
          v123 = v136;
          v99.m128_f32[0] = v99.m128_f32[0] - v117;
          v98.m128_f32[0] = v98.m128_f32[0] - v136;
          v124 = v144 - v114;
          LOBYTE(v96) = 4;
          v125 = _mm_unpacklo_ps(v98, v99).m128_u64[0];
          *(_QWORD *)(a1 + 512) = v125;
          v143 = v125;
          *(float *)(a1 + 520) = v124;
          LODWORD(v125) = *(_DWORD *)(a1 + 496);
          v126 = *(float *)(a1 + 500);
          v144 = v124;
          v127 = v98.m128_f32[0] + (float)(v123 * *(float *)&v125);
          v128 = (float)(v114 * *(float *)&v125) + v124;
          v129 = v99.m128_f32[0] + (float)(v117 * *(float *)&v125);
          v130 = v122 * v126;
          *(float *)&v125 = v127 + (float)(v15 * v126);
          v131 = v121 * v126;
          v132 = -v126;
          *(_DWORD *)(a1 + 536) = v125;
          *(float *)(a1 + 540) = v129 + v130;
          *(float *)(a1 + 544) = v128 + v131;
          *(float *)(a1 + 560) = v127 + (float)(v15 * v132);
          *(float *)(a1 + 564) = v129 + (float)(v122 * v132);
          *(float *)(a1 + 568) = v128 + (float)(v121 * v132);
          sub_14069C5F0(
            a1: (_DWORD)a3,
            a2: a1 + 512,
            a3: 322,
            a4: v96,
            a5: 1,
            a6: 0,
            a7: *(_QWORD *)(a1 + 448),
            a8: 0,
            a9: 0,
            a10: 1065353216,
            a11: 0,
            a12: 0,
            a13: -1,
            a14: 1,
            a15: 0);
        }
      }
    }
    sub_1400B3390(a1, a2, a3);
  }
}