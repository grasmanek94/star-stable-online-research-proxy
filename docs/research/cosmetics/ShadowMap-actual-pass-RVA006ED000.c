// Hex-Rays export, baseline 645.348067; descriptive analysis label.
__int64 __fastcall sub_1406ED000(__int64 a1)
{
  __int64 v2; // r14
  float *v3; // rbx
  float *v4; // rax
  int v5; // xmm1_4
  int v6; // xmm0_4
  _DWORD *v7; // rcx
  _DWORD *v8; // rax
  int v9; // xmm0_4
  _DWORD *v10; // rcx
  float *v11; // rax
  __int64 v12; // rcx
  float v13; // xmm6_4
  float v14; // xmm7_4
  float v15; // xmm8_4
  float v16; // xmm2_4
  float v17; // xmm0_4
  __m128 v18; // xmm14
  float v19; // xmm2_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm2_4
  __int64 v23; // rax
  float *v24; // rax
  float v25; // xmm3_4
  float *v26; // rax
  float v27; // xmm3_4
  unsigned int v28; // eax
  unsigned int v29; // esi
  float *v30; // r12
  float v31; // xmm10_4
  unsigned int *v32; // rax
  __m128 v33; // xmm6
  __m128 v34; // xmm7
  __m128 v35; // xmm8
  __m128 v36; // xmm9
  float v37; // xmm13_4
  float v38; // xmm11_4
  float v39; // xmm14_4
  float v40; // xmm15_4
  float v41; // xmm10_4
  float v42; // xmm13_4
  float v43; // xmm12_4
  float v44; // xmm11_4
  float v45; // xmm10_4
  __m128 v46; // xmm7
  __m128 v47; // xmm6
  __m128 v48; // xmm5
  __m128 v49; // xmm4
  float v50; // xmm2_4
  __m128 v51; // xmm0
  __m128 v52; // xmm0
  __m128 v53; // xmm1
  __m128 v54; // xmm1
  __m128 v55; // xmm0
  __m128 v56; // xmm0
  __m128 v57; // xmm1
  __m128 v58; // xmm1
  __m128 *v59; // rax
  float *v60; // rax
  double v61; // xmm5_8
  double v62; // xmm6_8
  double v63; // xmm4_8
  double v64; // xmm7_8
  float v65; // xmm0_4
  float v66; // xmm0_4
  __m128 v67; // xmm7
  __m128 v68; // xmm9
  float v69; // xmm8_4
  float *v70; // rax
  double v71; // xmm0_8
  float v72; // xmm6_4
  int v73; // ebx
  float v74; // xmm8_4
  float *v75; // rax
  float v76; // xmm3_4
  float v77; // xmm2_4
  float v78; // xmm12_4
  int v79; // edx
  int v80; // r8d
  int v81; // r9d
  __m128 v82; // xmm10
  __m128 v83; // xmm9
  __m128 v84; // xmm8
  __m128 v85; // xmm11
  float v86; // xmm2_4
  float v87; // xmm0_4
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __m128 v91; // xmm7
  float v92; // xmm12_4
  float v93; // xmm8_4
  float v94; // xmm11_4
  float v95; // xmm14_4
  float v96; // xmm10_4
  float v97; // xmm13_4
  float v98; // xmm15_4
  float v99; // xmm9_4
  __m128 v100; // xmm6
  float v101; // xmm12_4
  float v102; // xmm11_4
  float v103; // xmm8_4
  __m128 v104; // xmm10
  float v105; // xmm9_4
  __m128 v106; // xmm5
  float v107; // xmm14_4
  float v108; // xmm4_4
  __m128 v109; // xmm1
  __m128 v110; // xmm1
  __m128 v111; // xmm1
  __m128 v112; // xmm0
  __m128 v113; // xmm0
  __m128 v114; // xmm0
  __m128 v115; // xmm10
  __m128 v116; // xmm10
  __m128 v117; // xmm10
  __m128 v118; // xmm0
  __m128 v119; // xmm0
  __m128 v120; // xmm0
  __m128 *v121; // rax
  __m128 v122; // xmm6
  __m128 v123; // xmm5
  __m128 v124; // xmm11
  float *v125; // rax
  float v126; // xmm12_4
  float v127; // xmm14_4
  float v128; // xmm9_4
  float v129; // xmm11_4
  float v130; // xmm13_4
  float v131; // xmm7_4
  float v132; // xmm8_4
  float v133; // xmm10_4
  float v134; // xmm6_4
  __m128 v135; // xmm3
  float v136; // xmm4_4
  float v137; // xmm6_4
  float v138; // xmm9_4
  float v139; // xmm14_4
  float v140; // xmm5_4
  float v141; // xmm11_4
  float v142; // xmm13_4
  float v143; // xmm15_4
  float v144; // xmm8_4
  float v145; // xmm10_4
  float v146; // xmm12_4
  __m128 v147; // xmm2
  float v148; // xmm9_4
  __m128 v149; // xmm7
  float v150; // xmm4_4
  __m128 v151; // xmm1
  __m128 *v152; // rax
  __m128 v153; // xmm1
  __m128 v154; // xmm1
  __m128 v155; // xmm1
  __m128 v156; // xmm0
  __m128 v157; // xmm0
  __m128 v158; // xmm0
  __m128 v159; // xmm7
  __m128 v160; // xmm7
  __m128 v161; // xmm7
  __m128 v162; // xmm1
  __m128 v163; // xmm1
  __m128 v164; // xmm1
  __int64 v165; // rdx
  float v167; // [rsp+38h] [rbp-D0h]
  float v168; // [rsp+3Ch] [rbp-CCh]
  float v169; // [rsp+40h] [rbp-C8h]
  float v170; // [rsp+48h] [rbp-C0h]
  float v171; // [rsp+48h] [rbp-C0h]
  float v172; // [rsp+48h] [rbp-C0h]
  float v173; // [rsp+58h] [rbp-B0h]
  float v174; // [rsp+5Ch] [rbp-ACh]
  float v175; // [rsp+60h] [rbp-A8h]
  float v176; // [rsp+68h] [rbp-A0h]
  float v177; // [rsp+68h] [rbp-A0h]
  float v178; // [rsp+68h] [rbp-A0h]
  float v179; // [rsp+78h] [rbp-90h]
  float v180; // [rsp+78h] [rbp-90h]
  float v181; // [rsp+78h] [rbp-90h]
  float v182; // [rsp+88h] [rbp-80h]
  float v183; // [rsp+88h] [rbp-80h]
  float v184; // [rsp+98h] [rbp-70h]
  float v185; // [rsp+98h] [rbp-70h]
  float v186; // [rsp+A8h] [rbp-60h]
  float v187; // [rsp+A8h] [rbp-60h]
  float v188; // [rsp+ACh] [rbp-5Ch]
  float v189; // [rsp+B0h] [rbp-58h]
  float v190; // [rsp+B4h] [rbp-54h]
  __m128 v191; // [rsp+B8h] [rbp-50h]
  __m128 v192; // [rsp+B8h] [rbp-50h]
  __m128 v193; // [rsp+B8h] [rbp-50h]
  __m128 v194; // [rsp+B8h] [rbp-50h]
  __m128 v195; // [rsp+B8h] [rbp-50h]
  float v196; // [rsp+C8h] [rbp-40h]
  float v197; // [rsp+CCh] [rbp-3Ch]
  float v198; // [rsp+D8h] [rbp-30h]
  float v199; // [rsp+E8h] [rbp-20h]
  __int128 v200; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v201; // [rsp+108h] [rbp+0h]
  __int128 v202; // [rsp+118h] [rbp+10h]
  __int128 v203; // [rsp+128h] [rbp+20h]
  __m128 v204[4]; // [rsp+138h] [rbp+30h] BYREF
  float v205; // [rsp+178h] [rbp+70h]
  __m128 v206; // [rsp+188h] [rbp+80h]
  float v207; // [rsp+198h] [rbp+90h]
  unsigned __int64 v208; // [rsp+1A8h] [rbp+A0h] BYREF
  float v209; // [rsp+1B0h] [rbp+A8h]
  __m128 v210; // [rsp+1B8h] [rbp+B0h] BYREF
  __m128 v211; // [rsp+1C8h] [rbp+C0h]
  __m128 v212; // [rsp+1D8h] [rbp+D0h]
  __m128 v213; // [rsp+1E8h] [rbp+E0h]
  __m128 v214; // [rsp+1F8h] [rbp+F0h]
  float v215[4]; // [rsp+208h] [rbp+100h] BYREF
  _QWORD v216[2]; // [rsp+218h] [rbp+110h] BYREF
  int v217; // [rsp+228h] [rbp+120h]
  int v218; // [rsp+22Ch] [rbp+124h]
  float v219[6]; // [rsp+230h] [rbp+128h] BYREF
  __m128 v220; // [rsp+248h] [rbp+140h]
  __m128 v221; // [rsp+258h] [rbp+150h]
  __m128 v222; // [rsp+268h] [rbp+160h]
  __m128 v223; // [rsp+278h] [rbp+170h]
  __m128 v224; // [rsp+288h] [rbp+180h]
  _QWORD v225[8]; // [rsp+358h] [rbp+250h] BYREF
  char v226[64]; // [rsp+398h] [rbp+290h] BYREF
  _BYTE v227[32]; // [rsp+3D8h] [rbp+2D0h] BYREF
  _QWORD v228[12]; // [rsp+3F8h] [rbp+2F0h] BYREF
  __m128i si128; // [rsp+458h] [rbp+350h]
  __m128i v230; // [rsp+468h] [rbp+360h]
  _QWORD v231[23]; // [rsp+478h] [rbp+370h] BYREF

  sub_14070E4B0(a1: v227, a2: "CPXRender::RenderShadowMap()");
  v2 = *(_QWORD *)(a1 + 9728);
  ++*(_DWORD *)(a1 + 10120);
  if ( v2 != 0 )
  {
    v3 = (float *)sub_1406A3EB0(a1: v2 + 8, a2: 0);
    if ( v3 != nullptr
      && ((unsigned int)sub_1400B41D0(a1: *(_QWORD *)&nExitCode + 1072LL) == 4
       || *(_DWORD *)(a1 + 10120) > 0x3E8u
       || (float)((float)((float)((float)((v4 = (float *)sub_14001CE50(a1: *(_QWORD *)(a1 + 149496) + 128LL))[1] - v3[39])
                                * (float)(v4[1] - v3[39]))
                        + (float)((float)(*v4 - v3[38]) * (float)(*v4 - v3[38])))
                + (float)((float)(v4[2] - v3[40]) * (float)(v4[2] - v3[40]))) > 0.2) )
    {
      v5 = *((_DWORD *)v3 + 40);
      v6 = *((_DWORD *)v3 + 39);
      v7 = *(_DWORD **)(a1 + 149496);
      v7[32] = *((_DWORD *)v3 + 38);
      v7[33] = v6;
      v7[34] = v5;
      v7[35] = 0;
      if ( *(float *)(sub_14001CE50(a1: *(_QWORD *)(a1 + 149496) + 128LL) + 4) > -0.80000001 )
      {
        v8 = (_DWORD *)sub_14001CE50(a1: *(_QWORD *)(a1 + 149496) + 128LL);
        v9 = v8[2];
        v10 = *(_DWORD **)(a1 + 149496);
        v10[32] = *v8;
        v10[33] = -1085485875;
        v10[34] = v9;
        v10[35] = 0;
      }
      *(_DWORD *)(a1 + 10120) = 0;
    }
  }
  v11 = (float *)sub_14001CE50(a1: *(_QWORD *)(a1 + 149496) + 128LL);
  v13 = v11[2];
  v14 = *v11;
  v15 = v11[1];
  v16 = (float)((float)(v15 * v15) + (float)(v14 * v14)) + (float)(v13 * v13);
  if ( v16 < 0.0 )
    v17 = sub_140A00700(a1: v12);
  else
    v17 = fsqrt(v16);
  v18 = 0;
  if ( v17 >= 1.0e14 || v17 <= 0.0 )
  {
    v20 = 0.0;
    v21 = 0.0;
    v22 = 0.0;
  }
  else
  {
    v19 = 1.0 / v17;
    v20 = (float)(1.0 / v17) * v14;
    v21 = (float)(1.0 / v17) * v15;
    v22 = v19 * v13;
  }
  v23 = *(_QWORD *)(a1 + 149496);
  *(float *)(v23 + 128) = v20;
  *(float *)(v23 + 132) = v21;
  *(float *)(v23 + 136) = v22;
  *(_DWORD *)(v23 + 140) = 0;
  v24 = (float *)sub_140A9F2E0(a1: a1 + 149360);
  v25 = (float)(*(float *)(a1 + 12396) * 32.0) + v24[2];
  *(_QWORD *)(a1 + 9760) = _mm_add_ps(
                             (__m128)*(unsigned __int64 *)v24,
                             _mm_mul_ps((__m128)*(unsigned __int64 *)(a1 + 12388), (__m128)xmmword_140FBD500)).m128_u64[0];
  *(float *)(a1 + 9768) = v25;
  v26 = (float *)sub_14001CE50(a1: *(_QWORD *)(a1 + 149496) + 128LL);
  v27 = (float)(v26[2] * -1600.0) + *(float *)(a1 + 9768);
  *(_QWORD *)(a1 + 9772) = _mm_add_ps(
                             (__m128)*(unsigned __int64 *)(a1 + 9760),
                             _mm_mul_ps((__m128)*(unsigned __int64 *)v26, (__m128)xmmword_140FBD510)).m128_u64[0];
  *(float *)(a1 + 9780) = v27;
  sub_1406F1A70(a1, a2: 0);
  sub_1406F2EC0(a1, a2: *(_QWORD *)(a1 + 9728) + 492LL);
  v28 = *(_DWORD *)(a1 + 10108);
  if ( v28 != 0 )
  {
    v29 = 0;
    v30 = (float *)(a1 + 9784);
    do
    {
      *(__m128i *)v228 = _mm_load_si128((const __m128i *)&xmmword_140FBD4A0);
      *(__m128i *)&v228[2] = _mm_load_si128((const __m128i *)&xmmword_140FBD490);
      *(__m128i *)&v228[4] = _mm_load_si128((const __m128i *)&xmmword_140FBD4B0);
      *(__m128i *)&v228[6] = _mm_load_si128((const __m128i *)&xmmword_140FBD4C0);
      *(__m128i *)&v228[8] = _mm_load_si128((const __m128i *)&xmmword_140FBD4D0);
      *(__m128i *)&v228[10] = _mm_load_si128((const __m128i *)&xmmword_140EF5A80);
      si128 = _mm_load_si128((const __m128i *)&xmmword_140FBD4E0);
      v230 = _mm_load_si128((const __m128i *)&xmmword_140FBD4F0);
      v210 = 0;
      v211 = 0;
      v212 = 0;
      v213 = 0;
      if ( v28 == 0 && (unsigned __int8)sub_140059A00(a1: off_140FBA048) != 0 )
        __debugbreak();
      v216[0] = 0;
      v216[1] = 0;
      v217 = -1082130432;
      v218 = 1065353216;
      v31 = (float)*(int *)(a1 + 10112) / (float)*(int *)(a1 + 10108);
      v176 = v31;
      if ( v29 == 0 )
      {
        v32 = (unsigned int *)sub_140087CC0(a1: a1 + 149360);
        v33 = (__m128)v32[3];
        v34 = (__m128)v32[2];
        v35 = (__m128)*v32;
        v36 = (__m128)v32[1];
        v37 = *(float *)(a1 + 9928);
        v38 = *(float *)(a1 + 9912);
        v182 = (float)((float)((float)(v37 * v36.m128_f32[0]) + (float)(v38 * v35.m128_f32[0]))
                     + (float)(*(float *)(a1 + 9944) * v34.m128_f32[0]))
             + (float)(*(float *)(a1 + 9960) * v33.m128_f32[0]);
        v191 = (__m128)*(unsigned __int64 *)(a1 + 9932);
        v220 = (__m128)*(unsigned __int64 *)(a1 + 9916);
        v206 = (__m128)*(unsigned __int64 *)(a1 + 9948);
        v214 = (__m128)*(unsigned __int64 *)(a1 + 9964);
        *(unsigned __int64 *)((char *)v221.m128_u64 + 4) = _mm_add_ps(
                                                             _mm_add_ps(
                                                               _mm_add_ps(
                                                                 _mm_mul_ps(v191, _mm_shuffle_ps(v36, v36, 0)),
                                                                 _mm_mul_ps(v220, _mm_shuffle_ps(v35, v35, 0))),
                                                               _mm_mul_ps(v206, _mm_shuffle_ps(v34, v34, 0))),
                                                             _mm_mul_ps(v214, _mm_shuffle_ps(v33, v33, 0))).m128_u64[0];
        v39 = *(float *)(a1 + 9924);
        v40 = *(float *)(a1 + 9956);
        v41 = *(float *)(a1 + 9972);
        v170 = (float)((float)((float)(*(float *)(a1 + 9940) * v36.m128_f32[0]) + (float)(v39 * v35.m128_f32[0]))
                     + (float)(v40 * v34.m128_f32[0]))
             + (float)(v41 * v33.m128_f32[0]);
        v36.m128_i32[0] = v32[7];
        v35.m128_i32[0] = v32[6];
        v34.m128_i32[0] = v32[4];
        v33.m128_i32[0] = v32[5];
        v42 = (float)((float)((float)(v37 * v33.m128_f32[0]) + (float)(v38 * v34.m128_f32[0]))
                    + (float)(*(float *)(a1 + 9944) * v35.m128_f32[0]))
            + (float)(*(float *)(a1 + 9960) * v36.m128_f32[0]);
        *(unsigned __int64 *)((char *)v222.m128_u64 + 4) = _mm_add_ps(
                                                             _mm_add_ps(
                                                               _mm_add_ps(
                                                                 _mm_mul_ps(
                                                                   v191,
                                                                   _mm_shuffle_ps(
                                                                     (__m128)v33.m128_u32[0],
                                                                     (__m128)v33.m128_u32[0],
                                                                     0)),
                                                                 _mm_mul_ps(
                                                                   v220,
                                                                   _mm_shuffle_ps(
                                                                     (__m128)v34.m128_u32[0],
                                                                     (__m128)v34.m128_u32[0],
                                                                     0))),
                                                               _mm_mul_ps(
                                                                 v206,
                                                                 _mm_shuffle_ps(
                                                                   (__m128)v35.m128_u32[0],
                                                                   (__m128)v35.m128_u32[0],
                                                                   0))),
                                                             _mm_mul_ps(
                                                               v214,
                                                               _mm_shuffle_ps(
                                                                 (__m128)v36.m128_u32[0],
                                                                 (__m128)v36.m128_u32[0],
                                                                 0))).m128_u64[0];
        v43 = (float)((float)((float)(*(float *)(a1 + 9940) * v33.m128_f32[0]) + (float)(v39 * v34.m128_f32[0]))
                    + (float)(v40 * v35.m128_f32[0]))
            + (float)(v41 * v36.m128_f32[0]);
        v36.m128_i32[0] = v32[11];
        v35.m128_i32[0] = v32[10];
        v34.m128_i32[0] = v32[8];
        v33.m128_i32[0] = v32[9];
        v44 = (float)((float)((float)(*(float *)(a1 + 9928) * v33.m128_f32[0])
                            + (float)(*(float *)(a1 + 9912) * v34.m128_f32[0]))
                    + (float)(*(float *)(a1 + 9944) * v35.m128_f32[0]))
            + (float)(*(float *)(a1 + 9960) * v36.m128_f32[0]);
        *(unsigned __int64 *)((char *)v223.m128_u64 + 4) = _mm_add_ps(
                                                             _mm_add_ps(
                                                               _mm_add_ps(
                                                                 _mm_mul_ps(
                                                                   v191,
                                                                   _mm_shuffle_ps(
                                                                     (__m128)v33.m128_u32[0],
                                                                     (__m128)v33.m128_u32[0],
                                                                     0)),
                                                                 _mm_mul_ps(
                                                                   v220,
                                                                   _mm_shuffle_ps(
                                                                     (__m128)v34.m128_u32[0],
                                                                     (__m128)v34.m128_u32[0],
                                                                     0))),
                                                               _mm_mul_ps(
                                                                 v206,
                                                                 _mm_shuffle_ps(
                                                                   (__m128)v35.m128_u32[0],
                                                                   (__m128)v35.m128_u32[0],
                                                                   0))),
                                                             _mm_mul_ps(
                                                               v214,
                                                               _mm_shuffle_ps(
                                                                 (__m128)v36.m128_u32[0],
                                                                 (__m128)v36.m128_u32[0],
                                                                 0))).m128_u64[0];
        v45 = (float)((float)(*(float *)(a1 + 9940) * v33.m128_f32[0]) + (float)(v39 * v34.m128_f32[0]))
            + (float)(v40 * v35.m128_f32[0]);
        v35.m128_i32[0] = *(_DWORD *)(a1 + 9972);
        v46 = (__m128)v32[15];
        v47 = (__m128)v32[14];
        v48 = (__m128)v32[12];
        v49 = (__m128)v32[13];
        v179 = (float)((float)((float)(*(float *)(a1 + 9928) * v49.m128_f32[0])
                             + (float)(*(float *)(a1 + 9912) * v48.m128_f32[0]))
                     + (float)(*(float *)(a1 + 9944) * v47.m128_f32[0]))
             + (float)(*(float *)(a1 + 9960) * v46.m128_f32[0]);
        *(unsigned __int64 *)((char *)v224.m128_u64 + 4) = _mm_add_ps(
                                                             _mm_add_ps(
                                                               _mm_add_ps(
                                                                 _mm_mul_ps(v191, _mm_shuffle_ps(v49, v49, 0)),
                                                                 _mm_mul_ps(v220, _mm_shuffle_ps(v48, v48, 0))),
                                                               _mm_mul_ps(v206, _mm_shuffle_ps(v47, v47, 0))),
                                                             _mm_mul_ps(v214, _mm_shuffle_ps(v46, v46, 0))).m128_u64[0];
        v50 = (float)((float)((float)(*(float *)(a1 + 9940) * v49.m128_f32[0]) + (float)(v39 * v48.m128_f32[0]))
                    + (float)(v40 * v47.m128_f32[0]))
            + (float)(v35.m128_f32[0] * v46.m128_f32[0]);
        v51 = v221;
        v51.m128_f32[0] = v182;
        v52 = _mm_shuffle_ps(v51, v51, 147);
        v52.m128_f32[0] = v170;
        v221 = _mm_shuffle_ps(v52, v52, 57);
        v210 = v221;
        v53 = v222;
        v53.m128_f32[0] = v42;
        v54 = _mm_shuffle_ps(v53, v53, 147);
        v54.m128_f32[0] = v43;
        v222 = _mm_shuffle_ps(v54, v54, 57);
        v211 = v222;
        v55 = v223;
        v55.m128_f32[0] = v44;
        v56 = _mm_shuffle_ps(v55, v55, 147);
        v56.m128_f32[0] = v45 + (float)(v35.m128_f32[0] * v36.m128_f32[0]);
        v223 = _mm_shuffle_ps(v56, v56, 57);
        v212 = v223;
        v57 = v224;
        v57.m128_f32[0] = v179;
        v58 = _mm_shuffle_ps(v57, v57, 147);
        v58.m128_f32[0] = v50;
        v224 = _mm_shuffle_ps(v58, v58, 57);
        v213 = v224;
        v31 = v176;
        sub_140A2BA70(
          a1: (unsigned int)v216,
          a2: 0,
          a3: 0,
          a4: (int)(float)((float)*(int *)(a1 + 10104) * v176),
          a5: *(_DWORD *)(a1 + 10104));
        v18 = 0;
      }
      (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a1 + 88LL))(a1, a2: v216);
      v59 = (__m128 *)sub_14009F840(a1: v226, a2: &v210);
      v210 = *v59;
      v211 = v59[1];
      v212 = v59[2];
      v213 = v59[3];
      sub_14009E480(a1: &v210, a2: &v210);
      v60 = (float *)v228;
      do
      {
        v61 = *v60;
        v62 = v60[1];
        v63 = v60[2];
        v64 = v213.m128_f32[1] * v62 + v213.m128_f32[0] * v61 + v213.m128_f32[2] * v63 + v213.m128_f32[3];
        v65 = (v210.m128_f32[1] * v62 + v210.m128_f32[0] * v61 + v210.m128_f32[2] * v63 + v210.m128_f32[3]) / v64;
        *v60 = v65;
        v66 = (v211.m128_f32[1] * v62 + v211.m128_f32[0] * v61 + v211.m128_f32[2] * v63 + v211.m128_f32[3]) / v64;
        v60[1] = v66;
        v60[2] = (v212.m128_f32[1] * v62 + v212.m128_f32[0] * v61 + v212.m128_f32[2] * v63 + v212.m128_f32[3]) / v64;
        v60[3] = 1.0;
        v60 += 4;
      }
      while ( v60 != (float *)v231 );
      v67 = v18;
      v68 = v18;
      v69 = v18.m128_f32[0];
      v70 = (float *)v228;
      do
      {
        v69 = v69 + v70[2];
        v68.m128_f32[0] = v68.m128_f32[0] + v70[1];
        v67.m128_f32[0] = v67.m128_f32[0] + *v70;
        v70 += 4;
      }
      while ( v70 != (float *)v231 );
      if ( (float)((float)((float)((float)(*((float *)v228 + 1) - *(float *)&si128.m128i_i32[1])
                                 * (float)(*((float *)v228 + 1) - *(float *)&si128.m128i_i32[1]))
                         + (float)((float)(*(float *)v228 - *(float *)si128.m128i_i32)
                                 * (float)(*(float *)v228 - *(float *)si128.m128i_i32)))
                 + (float)((float)(*(float *)&v228[1] - *(float *)&si128.m128i_i32[2])
                         * (float)(*(float *)&v228[1] - *(float *)&si128.m128i_i32[2]))) < 0.0 )
        sub_140A00700(a1: v231);
      v71 = ((double (*)(void))sub_140A04FE0)();
      v72 = *(float *)&v71;
      v73 = *(_DWORD *)(a1 + 10104);
      v67.m128_f32[0] = v67.m128_f32[0] * 0.125;
      v68.m128_f32[0] = v68.m128_f32[0] * 0.125;
      v74 = v69 * 0.125;
      v209 = v74;
      v208 = _mm_unpacklo_ps(v67, v68).m128_u64[0];
      *(_QWORD *)(a1 + 9772) = v208;
      *(float *)(a1 + 9780) = v74;
      v75 = (float *)sub_14001CE50(a1: *(_QWORD *)(a1 + 149496) + 128LL);
      v76 = v72 * v75[2];
      v77 = v72 * v75[1];
      v219[0] = *(float *)&v208 - (float)((float)(v72 * *v75) + (float)(v72 * *v75));
      v219[1] = *((float *)&v208 + 1) - (float)(v77 + v77);
      v219[2] = v209 - (float)(v76 + v76);
      v200 = 0;
      v201 = 0;
      v202 = 0;
      v203 = 0;
      memset(v204, 0, sizeof(v204));
      sub_14009EE00(a1: &v200, a2: v219, a3: &v208, a4: &qword_140EF4CF0);
      v78 = (float)((float)v73 * v31) * 0.5;
      v186 = v72 + v72;
      sub_14009EE30(a1: (unsigned int)v204, a2: v79, a3: v80, a4: v81, a5: v72 + v72);
      v82 = _mm_add_ps(
              _mm_add_ps(
                _mm_add_ps(
                  _mm_mul_ps(v204[1], _mm_shuffle_ps((__m128)DWORD1(v200), (__m128)DWORD1(v200), 0)),
                  _mm_mul_ps(v204[0], _mm_shuffle_ps((__m128)(unsigned int)v200, (__m128)(unsigned int)v200, 0))),
                _mm_mul_ps(v204[2], _mm_shuffle_ps((__m128)DWORD2(v200), (__m128)DWORD2(v200), 0))),
              _mm_mul_ps(v204[3], _mm_shuffle_ps((__m128)HIDWORD(v200), (__m128)HIDWORD(v200), 0)));
      v83 = _mm_add_ps(
              _mm_add_ps(
                _mm_add_ps(
                  _mm_mul_ps(v204[1], _mm_shuffle_ps((__m128)DWORD1(v201), (__m128)DWORD1(v201), 0)),
                  _mm_mul_ps(v204[0], _mm_shuffle_ps((__m128)(unsigned int)v201, (__m128)(unsigned int)v201, 0))),
                _mm_mul_ps(v204[2], _mm_shuffle_ps((__m128)DWORD2(v201), (__m128)DWORD2(v201), 0))),
              _mm_mul_ps(v204[3], _mm_shuffle_ps((__m128)HIDWORD(v201), (__m128)HIDWORD(v201), 0)));
      v84 = _mm_add_ps(
              _mm_add_ps(
                _mm_add_ps(
                  _mm_mul_ps(v204[1], _mm_shuffle_ps((__m128)DWORD1(v202), (__m128)DWORD1(v202), 0)),
                  _mm_mul_ps(v204[0], _mm_shuffle_ps((__m128)(unsigned int)v202, (__m128)(unsigned int)v202, 0))),
                _mm_mul_ps(v204[2], _mm_shuffle_ps((__m128)DWORD2(v202), (__m128)DWORD2(v202), 0))),
              _mm_mul_ps(v204[3], _mm_shuffle_ps((__m128)HIDWORD(v202), (__m128)HIDWORD(v202), 0)));
      v85 = _mm_add_ps(
              _mm_add_ps(
                _mm_add_ps(
                  _mm_mul_ps(v204[1], _mm_shuffle_ps((__m128)DWORD1(v203), (__m128)DWORD1(v203), 0)),
                  _mm_mul_ps(v204[0], _mm_shuffle_ps((__m128)(unsigned int)v203, (__m128)(unsigned int)v203, 0))),
                _mm_mul_ps(v204[2], _mm_shuffle_ps((__m128)DWORD2(v203), (__m128)DWORD2(v203), 0))),
              _mm_mul_ps(v204[3], _mm_shuffle_ps((__m128)HIDWORD(v203), (__m128)HIDWORD(v203), 0)));
      v86 = (float)((float)(_mm_shuffle_ps(v83, v83, 170).m128_f32[0] * v18.m128_f32[0])
                  + (float)(_mm_shuffle_ps(v82, v82, 170).m128_f32[0] * v18.m128_f32[0]))
          + (float)(_mm_shuffle_ps(v84, v84, 170).m128_f32[0] * v18.m128_f32[0]);
      v87 = _mm_shuffle_ps(v85, v85, 170).m128_f32[0];
      v215[2] = (float)(v86 + v87) - (float)(v86 + v87);
      v215[0] = (float)(sub_140A04FE0()
                      - (float)((float)((float)((float)((float)(v83.m128_f32[0] * v18.m128_f32[0])
                                                      + (float)(v82.m128_f32[0] * v18.m128_f32[0]))
                                              + (float)(v84.m128_f32[0] * v18.m128_f32[0]))
                                      + v85.m128_f32[0])
                              * v78))
              / v78;
      v215[1] = (float)(sub_140A04FE0()
                      - (float)((float)((float)((float)((float)(_mm_shuffle_ps(v83, v83, 85).m128_f32[0]
                                                              * v18.m128_f32[0])
                                                      + (float)(_mm_shuffle_ps(v82, v82, 85).m128_f32[0]
                                                              * v18.m128_f32[0]))
                                              + (float)(_mm_shuffle_ps(v84, v84, 85).m128_f32[0] * v18.m128_f32[0]))
                                      + _mm_shuffle_ps(v85, v85, 85).m128_f32[0])
                              * (float)((float)v73 * 0.5)))
              / (float)((float)v73 * 0.5);
      if ( a1 == -9784 )
        sub_14005A4C0(a1: v89, a2: v88, a3: v90);
      sub_14009D750(a1: a1 + 9784, a2: v215);
      v91 = (__m128)*(unsigned int *)(a1 + 9800);
      v192 = v91;
      v92 = *v30;
      v91.m128_f32[0] = (float)((float)((float)(v91.m128_f32[0] * v204[0].m128_f32[1])
                                      + (float)(*v30 * v204[0].m128_f32[0]))
                              + (float)(*(float *)(a1 + 9816) * v204[0].m128_f32[2]))
                      + (float)(*(float *)(a1 + 9832) * v204[0].m128_f32[3]);
      v214 = v91;
      v93 = *(float *)(a1 + 9788);
      v94 = *(float *)(a1 + 9820);
      v171 = (float)((float)((float)(*(float *)(a1 + 9804) * v204[0].m128_f32[1]) + (float)(v93 * v204[0].m128_f32[0]))
                   + (float)(v94 * v204[0].m128_f32[2]))
           + (float)(*(float *)(a1 + 9836) * v204[0].m128_f32[3]);
      v95 = *(float *)(a1 + 9792);
      v91.m128_i32[0] = *(_DWORD *)(a1 + 9824);
      v96 = *(float *)(a1 + 9840);
      v180 = (float)((float)((float)(*(float *)(a1 + 9808) * v204[0].m128_f32[1]) + (float)(v95 * v204[0].m128_f32[0]))
                   + (float)(v91.m128_f32[0] * v204[0].m128_f32[2]))
           + (float)(v96 * v204[0].m128_f32[3]);
      v97 = *(float *)(a1 + 9796);
      v98 = *(float *)(a1 + 9828);
      v99 = *(float *)(a1 + 9844);
      v177 = (float)((float)((float)(*(float *)(a1 + 9812) * v204[0].m128_f32[1]) + (float)(v97 * v204[0].m128_f32[0]))
                   + (float)(v98 * v204[0].m128_f32[2]))
           + (float)(v99 * v204[0].m128_f32[3]);
      v100 = (__m128)v192.m128_u32[0];
      v100.m128_f32[0] = (float)((float)((float)(v192.m128_f32[0] * v204[1].m128_f32[1])
                                       + (float)(v92 * v204[1].m128_f32[0]))
                               + (float)(*(float *)(a1 + 9816) * v204[1].m128_f32[2]))
                       + (float)(*(float *)(a1 + 9832) * v204[1].m128_f32[3]);
      v206 = v100;
      v101 = (float)((float)((float)(*(float *)(a1 + 9804) * v204[1].m128_f32[1]) + (float)(v93 * v204[1].m128_f32[0]))
                   + (float)(v94 * v204[1].m128_f32[2]))
           + (float)(*(float *)(a1 + 9836) * v204[1].m128_f32[3]);
      v102 = (float)((float)((float)(*(float *)(a1 + 9808) * v204[1].m128_f32[1]) + (float)(v95 * v204[1].m128_f32[0]))
                   + (float)(v91.m128_f32[0] * v204[1].m128_f32[2]))
           + (float)(v96 * v204[1].m128_f32[3]);
      v103 = (float)((float)((float)(*(float *)(a1 + 9812) * v204[1].m128_f32[1]) + (float)(v97 * v204[1].m128_f32[0]))
                   + (float)(v98 * v204[1].m128_f32[2]))
           + (float)(v99 * v204[1].m128_f32[3]);
      v104 = (__m128)v192.m128_u32[0];
      v104.m128_f32[0] = (float)((float)((float)(v192.m128_f32[0] * v204[2].m128_f32[1])
                                       + (float)(*v30 * v204[2].m128_f32[0]))
                               + (float)(*(float *)(a1 + 9816) * v204[2].m128_f32[2]))
                       + (float)(*(float *)(a1 + 9832) * v204[2].m128_f32[3]);
      v91.m128_f32[0] = (float)((float)((float)(*(float *)(a1 + 9804) * v204[2].m128_f32[1])
                                      + (float)(*(float *)(a1 + 9788) * v204[2].m128_f32[0]))
                              + (float)(*(float *)(a1 + 9820) * v204[2].m128_f32[2]))
                      + (float)(*(float *)(a1 + 9836) * v204[2].m128_f32[3]);
      v105 = (float)((float)((float)(*(float *)(a1 + 9808) * v204[2].m128_f32[1]) + (float)(v95 * v204[2].m128_f32[0]))
                   + (float)(*(float *)(a1 + 9824) * v204[2].m128_f32[2]))
           + (float)(*(float *)(a1 + 9840) * v204[2].m128_f32[3]);
      v100.m128_f32[0] = (float)((float)((float)(*(float *)(a1 + 9812) * v204[2].m128_f32[1])
                                       + (float)(v97 * v204[2].m128_f32[0]))
                               + (float)(v98 * v204[2].m128_f32[2]))
                       + (float)(*(float *)(a1 + 9844) * v204[2].m128_f32[3]);
      v106 = v192;
      v106.m128_f32[0] = (float)((float)((float)(v192.m128_f32[0] * v204[3].m128_f32[1])
                                       + (float)(*v30 * v204[3].m128_f32[0]))
                               + (float)(*(float *)(a1 + 9816) * v204[3].m128_f32[2]))
                       + (float)(*(float *)(a1 + 9832) * v204[3].m128_f32[3]);
      v193 = v106;
      v106.m128_f32[0] = (float)((float)((float)(*(float *)(a1 + 9804) * v204[3].m128_f32[1])
                                       + (float)(*(float *)(a1 + 9788) * v204[3].m128_f32[0]))
                               + (float)(*(float *)(a1 + 9820) * v204[3].m128_f32[2]))
                       + (float)(*(float *)(a1 + 9836) * v204[3].m128_f32[3]);
      v107 = (float)((float)((float)(*(float *)(a1 + 9808) * v204[3].m128_f32[1]) + (float)(v95 * v204[3].m128_f32[0]))
                   + (float)(*(float *)(a1 + 9824) * v204[3].m128_f32[2]))
           + (float)(*(float *)(a1 + 9840) * v204[3].m128_f32[3]);
      v108 = (float)((float)((float)(*(float *)(a1 + 9812) * v204[3].m128_f32[1]) + (float)(v97 * v204[3].m128_f32[0]))
                   + (float)(v98 * v204[3].m128_f32[2]))
           + (float)(*(float *)(a1 + 9844) * v204[3].m128_f32[3]);
      v109 = _mm_shuffle_ps(v214, v214, 225);
      v109.m128_f32[0] = v171;
      v110 = _mm_shuffle_ps(v109, v109, 198);
      v110.m128_f32[0] = v180;
      v111 = _mm_shuffle_ps(v110, v110, 39);
      v111.m128_f32[0] = v177;
      v204[0] = _mm_shuffle_ps(v111, v111, 57);
      v112 = _mm_shuffle_ps(v206, v206, 225);
      v112.m128_f32[0] = v101;
      v113 = _mm_shuffle_ps(v112, v112, 198);
      v113.m128_f32[0] = v102;
      v114 = _mm_shuffle_ps(v113, v113, 39);
      v114.m128_f32[0] = v103;
      v204[1] = _mm_shuffle_ps(v114, v114, 57);
      v115 = _mm_shuffle_ps(v104, v104, 225);
      v115.m128_f32[0] = v91.m128_f32[0];
      v116 = _mm_shuffle_ps(v115, v115, 198);
      v116.m128_f32[0] = v105;
      v117 = _mm_shuffle_ps(v116, v116, 39);
      v117.m128_f32[0] = v100.m128_f32[0];
      v204[2] = _mm_shuffle_ps(v117, v117, 57);
      v118 = _mm_shuffle_ps(v193, v193, 225);
      v118.m128_f32[0] = v106.m128_f32[0];
      v119 = _mm_shuffle_ps(v118, v118, 198);
      v119.m128_f32[0] = v107;
      v120 = _mm_shuffle_ps(v119, v119, 39);
      v120.m128_f32[0] = v108;
      v204[3] = _mm_shuffle_ps(v120, v120, 57);
      v204[2].m128_f32[2] = v105 / v186;
      v204[3].m128_f32[2] = v107 / v186;
      sub_1406F2EC0(a1, a2: &v200);
      qmemcpy(v225, v204, sizeof(v225));
      sub_140A9F380(a1: a1 + 149360, a2: v225);
      v121 = (__m128 *)sub_140A9F2F0(a1: a1 + 149360);
      v122 = _mm_add_ps(
               _mm_add_ps(
                 _mm_add_ps(
                   _mm_mul_ps(
                     v121[1],
                     _mm_shuffle_ps((__m128)*(unsigned int *)(a1 + 148772), (__m128)*(unsigned int *)(a1 + 148772), 0)),
                   _mm_mul_ps(
                     *v121,
                     _mm_shuffle_ps((__m128)*(unsigned int *)(a1 + 148768), (__m128)*(unsigned int *)(a1 + 148768), 0))),
                 _mm_mul_ps(
                   v121[2],
                   _mm_shuffle_ps((__m128)*(unsigned int *)(a1 + 148776), (__m128)*(unsigned int *)(a1 + 148776), 0))),
               _mm_mul_ps(
                 v121[3],
                 _mm_shuffle_ps((__m128)*(unsigned int *)(a1 + 148780), (__m128)*(unsigned int *)(a1 + 148780), 0)));
      v123 = _mm_add_ps(
               _mm_add_ps(
                 _mm_add_ps(
                   _mm_mul_ps(
                     v121[1],
                     _mm_shuffle_ps((__m128)*(unsigned int *)(a1 + 148788), (__m128)*(unsigned int *)(a1 + 148788), 0)),
                   _mm_mul_ps(
                     *v121,
                     _mm_shuffle_ps((__m128)*(unsigned int *)(a1 + 148784), (__m128)*(unsigned int *)(a1 + 148784), 0))),
                 _mm_mul_ps(
                   v121[2],
                   _mm_shuffle_ps((__m128)*(unsigned int *)(a1 + 148792), (__m128)*(unsigned int *)(a1 + 148792), 0))),
               _mm_mul_ps(
                 v121[3],
                 _mm_shuffle_ps((__m128)*(unsigned int *)(a1 + 148796), (__m128)*(unsigned int *)(a1 + 148796), 0)));
      v124 = _mm_add_ps(
               _mm_add_ps(
                 _mm_add_ps(
                   _mm_mul_ps(
                     v121[1],
                     _mm_shuffle_ps((__m128)*(unsigned int *)(a1 + 148804), (__m128)*(unsigned int *)(a1 + 148804), 0)),
                   _mm_mul_ps(
                     *v121,
                     _mm_shuffle_ps((__m128)*(unsigned int *)(a1 + 148800), (__m128)*(unsigned int *)(a1 + 148800), 0))),
                 _mm_mul_ps(
                   v121[2],
                   _mm_shuffle_ps((__m128)*(unsigned int *)(a1 + 148808), (__m128)*(unsigned int *)(a1 + 148808), 0))),
               _mm_mul_ps(
                 v121[3],
                 _mm_shuffle_ps((__m128)*(unsigned int *)(a1 + 148812), (__m128)*(unsigned int *)(a1 + 148812), 0)));
      *(__m128 *)(a1 + 148688) = _mm_add_ps(
                                   _mm_add_ps(
                                     _mm_add_ps(
                                       _mm_mul_ps(
                                         v121[1],
                                         _mm_shuffle_ps(
                                           (__m128)*(unsigned int *)(a1 + 148756),
                                           (__m128)*(unsigned int *)(a1 + 148756),
                                           0)),
                                       _mm_mul_ps(
                                         *v121,
                                         _mm_shuffle_ps(
                                           (__m128)*(unsigned int *)(a1 + 148752),
                                           (__m128)*(unsigned int *)(a1 + 148752),
                                           0))),
                                     _mm_mul_ps(
                                       v121[2],
                                       _mm_shuffle_ps(
                                         (__m128)*(unsigned int *)(a1 + 148760),
                                         (__m128)*(unsigned int *)(a1 + 148760),
                                         0))),
                                   _mm_mul_ps(
                                     v121[3],
                                     _mm_shuffle_ps(
                                       (__m128)*(unsigned int *)(a1 + 148764),
                                       (__m128)*(unsigned int *)(a1 + 148764),
                                       0)));
      *(__m128 *)(a1 + 148704) = v122;
      *(__m128 *)(a1 + 148720) = v123;
      *(__m128 *)(a1 + 148736) = v124;
      if ( v29 == 0 )
      {
        v125 = (float *)sub_140A9F2F0(a1: a1 + 149360);
        v196 = (float)((float)((float)(v125[4] * *((float *)&v200 + 1)) + (float)(*v125 * *(float *)&v200))
                     + (float)(v125[8] * *((float *)&v200 + 2)))
             + (float)(v125[12] * *((float *)&v200 + 3));
        v126 = v125[1];
        v127 = v125[9];
        v172 = (float)((float)((float)(v125[5] * *((float *)&v200 + 1)) + (float)(v126 * *(float *)&v200))
                     + (float)(v127 * *((float *)&v200 + 2)))
             + (float)(v125[13] * *((float *)&v200 + 3));
        v128 = v125[2];
        v129 = v125[10];
        v130 = v125[14];
        v181 = (float)((float)((float)(v125[6] * *((float *)&v200 + 1)) + (float)(v128 * *(float *)&v200))
                     + (float)(v129 * *((float *)&v200 + 2)))
             + (float)(v130 * *((float *)&v200 + 3));
        v131 = v125[3];
        v132 = v125[11];
        v133 = v125[15];
        v178 = (float)((float)((float)(v125[7] * *((float *)&v200 + 1)) + (float)(v131 * *(float *)&v200))
                     + (float)(v132 * *((float *)&v200 + 2)))
             + (float)(v133 * *((float *)&v200 + 3));
        v188 = (float)((float)((float)(v125[4] * *((float *)&v201 + 1)) + (float)(*v125 * *(float *)&v201))
                     + (float)(v125[8] * *((float *)&v201 + 2)))
             + (float)(v125[12] * *((float *)&v201 + 3));
        v134 = v125[13];
        v174 = (float)((float)((float)(v125[5] * *((float *)&v201 + 1)) + (float)(v126 * *(float *)&v201))
                     + (float)(v127 * *((float *)&v201 + 2)))
             + (float)(v134 * *((float *)&v201 + 3));
        v173 = (float)((float)((float)(v125[6] * *((float *)&v201 + 1)) + (float)(v128 * *(float *)&v201))
                     + (float)(v129 * *((float *)&v201 + 2)))
             + (float)(v130 * *((float *)&v201 + 3));
        v197 = (float)((float)((float)(v125[7] * *((float *)&v201 + 1)) + (float)(v131 * *(float *)&v201))
                     + (float)(v132 * *((float *)&v201 + 2)))
             + (float)(v133 * *((float *)&v201 + 3));
        v168 = (float)((float)((float)(v125[4] * *((float *)&v202 + 1)) + (float)(*v125 * *(float *)&v202))
                     + (float)(v125[8] * *((float *)&v202 + 2)))
             + (float)(v125[12] * *((float *)&v202 + 3));
        v167 = (float)((float)((float)(v125[5] * *((float *)&v202 + 1)) + (float)(v126 * *(float *)&v202))
                     + (float)(v127 * *((float *)&v202 + 2)))
             + (float)(v134 * *((float *)&v202 + 3));
        v169 = (float)((float)((float)(v125[6] * *((float *)&v202 + 1)) + (float)(v128 * *(float *)&v202))
                     + (float)(v129 * *((float *)&v202 + 2)))
             + (float)(v130 * *((float *)&v202 + 3));
        v175 = (float)((float)((float)(v125[7] * *((float *)&v202 + 1)) + (float)(v131 * *(float *)&v202))
                     + (float)(v132 * *((float *)&v202 + 2)))
             + (float)(v133 * *((float *)&v202 + 3));
        v190 = (float)((float)((float)(v125[4] * *((float *)&v203 + 1)) + (float)(*v125 * *(float *)&v203))
                     + (float)(v125[8] * *((float *)&v203 + 2)))
             + (float)(v125[12] * *((float *)&v203 + 3));
        v189 = (float)((float)((float)(v125[5] * *((float *)&v203 + 1)) + (float)(v126 * *(float *)&v203))
                     + (float)(v127 * *((float *)&v203 + 2)))
             + (float)(v134 * *((float *)&v203 + 3));
        v199 = (float)((float)((float)(v125[6] * *((float *)&v203 + 1)) + (float)(v128 * *(float *)&v203))
                     + (float)(v129 * *((float *)&v203 + 2)))
             + (float)(v130 * *((float *)&v203 + 3));
        v187 = (float)((float)((float)(v125[7] * *((float *)&v203 + 1)) + (float)(v131 * *(float *)&v203))
                     + (float)(v132 * *((float *)&v203 + 2)))
             + (float)(v133 * *((float *)&v203 + 3));
        v135 = (__m128)*(unsigned int *)(a1 + 9864);
        v194 = v135;
        v136 = *(float *)(a1 + 9848);
        v137 = *(float *)(a1 + 9880);
        v138 = *(float *)(a1 + 9896);
        v135.m128_f32[0] = (float)((float)((float)(v135.m128_f32[0] * v172) + (float)(v136 * v196))
                                 + (float)(v137 * v181))
                         + (float)(v138 * v178);
        v214 = v135;
        v184 = *(float *)(a1 + 9868);
        v139 = *(float *)(a1 + 9852);
        v135.m128_i32[0] = *(_DWORD *)(a1 + 9884);
        v140 = *(float *)(a1 + 9900);
        v205 = (float)((float)((float)(v184 * v172) + (float)(v139 * v196)) + (float)(v135.m128_f32[0] * v181))
             + (float)(v140 * v178);
        v198 = *(float *)(a1 + 9872);
        v141 = *(float *)(a1 + 9856);
        v142 = *(float *)(a1 + 9888);
        v143 = *(float *)(a1 + 9904);
        v207 = (float)((float)((float)(v198 * v172) + (float)(v141 * v196)) + (float)(v142 * v181))
             + (float)(v143 * v178);
        v183 = *(float *)(a1 + 9876);
        v144 = *(float *)(a1 + 9860);
        v145 = *(float *)(a1 + 9892);
        v146 = *(float *)(a1 + 9908);
        v147 = (__m128)v194.m128_u32[0];
        v147.m128_f32[0] = (float)((float)((float)(v194.m128_f32[0] * v174) + (float)(v136 * v188))
                                 + (float)(v137 * v173))
                         + (float)(v138 * v197);
        v206 = v147;
        v148 = (float)((float)((float)(v184 * v174) + (float)(v139 * v188)) + (float)(v135.m128_f32[0] * v173))
             + (float)(v140 * v197);
        v149 = (__m128)v194.m128_u32[0];
        v149.m128_f32[0] = (float)((float)((float)(v194.m128_f32[0] * v167) + (float)(v136 * v168))
                                 + (float)(*(float *)(a1 + 9880) * v169))
                         + (float)(*(float *)(a1 + 9896) * v175);
        v150 = (float)((float)((float)(v184 * v167) + (float)(v139 * v168)) + (float)(v135.m128_f32[0] * v169))
             + (float)(*(float *)(a1 + 9900) * v175);
        v151 = v194;
        v151.m128_f32[0] = (float)((float)((float)(v194.m128_f32[0] * v189) + (float)(*(float *)(a1 + 9848) * v190))
                                 + (float)(*(float *)(a1 + 9880) * v199))
                         + (float)(*(float *)(a1 + 9896) * v187);
        v195 = v151;
        v185 = (float)((float)((float)(v184 * v189) + (float)(v139 * v190)) + (float)(*(float *)(a1 + 9884) * v199))
             + (float)(*(float *)(a1 + 9900) * v187);
        v152 = *(__m128 **)(a1 + 149496);
        v153 = _mm_shuffle_ps(v214, v214, 225);
        v153.m128_f32[0] = v205;
        v154 = _mm_shuffle_ps(v153, v153, 198);
        v154.m128_f32[0] = v207;
        v155 = _mm_shuffle_ps(v154, v154, 39);
        v155.m128_f32[0] = (float)((float)((float)(v183 * v172) + (float)(v144 * v196)) + (float)(v145 * v181))
                         + (float)(v146 * v178);
        *v152 = _mm_shuffle_ps(v155, v155, 57);
        v156 = _mm_shuffle_ps(v206, v206, 225);
        v156.m128_f32[0] = v148;
        v157 = _mm_shuffle_ps(v156, v156, 198);
        v157.m128_f32[0] = (float)((float)((float)(v198 * v174) + (float)(v141 * v188)) + (float)(v142 * v173))
                         + (float)(v143 * v197);
        v158 = _mm_shuffle_ps(v157, v157, 39);
        v158.m128_f32[0] = (float)((float)((float)(v183 * v174) + (float)(v144 * v188)) + (float)(v145 * v173))
                         + (float)(v146 * v197);
        v152[1] = _mm_shuffle_ps(v158, v158, 57);
        v159 = _mm_shuffle_ps(v149, v149, 225);
        v159.m128_f32[0] = v150;
        v160 = _mm_shuffle_ps(v159, v159, 198);
        v160.m128_f32[0] = (float)((float)((float)(v198 * v167) + (float)(v141 * v168)) + (float)(v142 * v169))
                         + (float)(v143 * v175);
        v161 = _mm_shuffle_ps(v160, v160, 39);
        v161.m128_f32[0] = (float)((float)((float)(v183 * v167) + (float)(v144 * v168)) + (float)(v145 * v169))
                         + (float)(v146 * v175);
        v152[2] = _mm_shuffle_ps(v161, v161, 57);
        v162 = _mm_shuffle_ps(v195, v195, 225);
        v162.m128_f32[0] = v185;
        v163 = _mm_shuffle_ps(v162, v162, 198);
        v163.m128_f32[0] = (float)((float)((float)(v198 * v189) + (float)(v141 * v190)) + (float)(v142 * v199))
                         + (float)(v143 * v187);
        v164 = _mm_shuffle_ps(v163, v163, 39);
        v164.m128_f32[0] = (float)((float)((float)(v183 * v189) + (float)(v144 * v190)) + (float)(v145 * v199))
                         + (float)(v146 * v187);
        v152[3] = _mm_shuffle_ps(v164, v164, 57);
      }
      sub_140710130(a1: *(_QWORD *)(a1 + 147344), a2: 3);
      LOBYTE(v165) = 1;
      sub_1407102B0(a1: *(_QWORD *)(a1 + 147344), a2: v165);
      sub_1406ECAF0(a1, a2: v2 + 8, a3: v29, a4: 0);
      sub_1407102B0(a1: *(_QWORD *)(a1 + 147344), a2: 0);
      ++v29;
      v28 = *(_DWORD *)(a1 + 10108);
      v18 = 0;
    }
    while ( v29 < v28 );
  }
  return sub_14070E540(a1: v227);
}