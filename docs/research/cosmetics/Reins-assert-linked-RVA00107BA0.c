// Hex-Rays export; function matched through nearby assertion-record references; confirm role in the text.
void __fastcall sub_140107BA0(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        _QWORD *a4,
        float *a5,
        float a6,
        float *a7,
        float *a8)
{
  __int64 v8; // rbx
  _QWORD *v9; // rsi
  __int64 v10; // rdi
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // r8
  __m128 v15; // xmm9
  unsigned int v16; // esi
  __m128 v17; // xmm8
  __int64 v18; // rcx
  float *v19; // rbx
  float v20; // xmm0_4
  float v21; // xmm2_4
  float v22; // xmm6_4
  float v23; // xmm0_4
  float v24; // xmm6_4
  float v25; // xmm3_4
  float v26; // xmm0_4
  __m128 v27; // xmm1
  unsigned __int64 v28; // xmm0_8
  float v29; // xmm0_4
  float v30; // xmm2_4
  float v31; // xmm0_4
  __m128 v32; // xmm1
  unsigned __int64 v33; // xmm0_8
  float v34; // xmm2_4
  float v35; // xmm0_4
  __m128 v36; // xmm1
  float v37; // xmm6_4
  unsigned __int64 v38; // xmm0_8
  __int64 v39; // rax
  __int64 v40; // r9
  __int64 v41; // rsi
  unsigned int v42; // ebx
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r12
  float *v48; // rsi
  unsigned __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // r9
  double v53; // xmm0_8
  float v54; // xmm4_4
  float v55; // xmm0_4
  float v56; // xmm1_4
  float v57; // xmm4_4
  float v58; // xmm2_4
  float v59; // xmm0_4
  float v60; // xmm6_4
  int v61; // esi
  __int64 v62; // rax
  __int64 v63; // r12
  float *v64; // r13
  unsigned __int64 v65; // rdx
  unsigned __int64 v66; // rcx
  __int64 v67; // rbx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 *v71; // rdx
  __int64 *v72; // rax
  __int64 v73; // r9
  double v74; // xmm0_8
  float v75; // xmm4_4
  float v76; // xmm0_4
  float v77; // xmm2_4
  float v78; // xmm4_4
  float v79; // xmm1_4
  float v80; // xmm0_4
  __int64 v81; // rdx
  unsigned int v82; // esi
  __int64 v83; // r8
  __m128 v84; // xmm8
  __m128 v85; // xmm9
  __int64 v86; // rcx
  float *v87; // rbx
  float v88; // xmm6_4
  float v89; // xmm2_4
  float v90; // xmm0_4
  __m128 v91; // xmm1
  unsigned __int64 v92; // xmm0_8
  float v93; // xmm2_4
  float v94; // xmm0_4
  __m128 v95; // xmm1
  unsigned __int64 v96; // xmm0_8
  float v97; // xmm2_4
  float v98; // xmm0_4
  __m128 v99; // xmm1
  float v100; // xmm6_4
  unsigned __int64 v101; // xmm0_8
  _QWORD *v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rcx
  _QWORD *v105; // rdi
  __int64 v106; // rbx
  __int64 v107; // rax
  __int128 *v108; // rax
  __int64 v109; // rdi
  __int64 i; // r14
  _QWORD *v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rcx
  _QWORD *v114; // rsi
  __int64 v115; // rbx
  __int64 v116; // rax
  float *v117; // rax
  __int128 v118; // xmm1
  __int128 v119; // xmm0
  __int128 v120; // xmm1
  __int64 v121; // [rsp+20h] [rbp-E0h] BYREF
  float v122; // [rsp+28h] [rbp-D8h]
  __int128 v123; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v124; // [rsp+40h] [rbp-C0h]
  __int128 v125; // [rsp+50h] [rbp-B0h]
  __int128 v126; // [rsp+60h] [rbp-A0h]
  __int64 v127; // [rsp+70h] [rbp-90h] BYREF
  int v128; // [rsp+78h] [rbp-88h]
  __int128 v129; // [rsp+80h] [rbp-80h] BYREF
  __int128 v130; // [rsp+90h] [rbp-70h]
  __int128 v131; // [rsp+A0h] [rbp-60h]
  __int128 v132; // [rsp+B0h] [rbp-50h]
  _BYTE v133[16]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v135; // [rsp+1C8h] [rbp+C8h]

  v8 = *a2;
  v9 = a4;
  v10 = a2[1];
  v12 = a1;
  if ( *a2 != v10 )
  {
    do
    {
      if ( (unsigned __int8)sub_1405F8C30(a1: v8) == 0 )
        return;
      v8 += 16;
    }
    while ( v8 != v10 );
    v13 = a2[1];
    v14 = *a2;
    if ( (v13 - *a2) >> 4 != 1 )
    {
      v15 = (__m128)LODWORD(a6);
      v17 = (__m128)LODWORD(a6);
      v15.m128_f32[0] = a6 * 0.64999998;
      v16 = 0;
      v17.m128_f32[0] = a6 * 1.25;
      do
      {
        if ( v16 >= (unsigned __int64)((v13 - v14) >> 4) )
          goto LABEL_74;
        v19 = *(float **)(sub_1405F8CF0(a1: v14 + 16LL * v16) + 64);
        v20 = v19[7];
        v21 = v19[6] + *a8;
        v22 = v19[8];
        v19[6] = v21;
        v23 = v20 + a8[1];
        v19[7] = v23;
        v24 = v22 + a8[2];
        v19[8] = v24;
        v25 = (float)((float)((float)(a5[4] - v23) * (float)(a5[4] - v23))
                    + (float)((float)(a5[3] - v21) * (float)(a5[3] - v21)))
            + (float)((float)(a5[5] - v24) * (float)(a5[5] - v24));
        if ( v25 < 0.0 )
          v26 = sub_140A00700(a1: v18);
        else
          v26 = fsqrt(v25);
        if ( a6 > v26 )
        {
          v27 = (__m128)LODWORD(a6);
          v27.m128_f32[0] = a6 - v26;
          v24 = v24 + (float)((float)(a6 - v26) * a7[2]);
          v28 = _mm_add_ps(
                  (__m128)*((unsigned __int64 *)v19 + 3),
                  _mm_mul_ps((__m128)*(unsigned __int64 *)a7, _mm_shuffle_ps(v27, v27, 0))).m128_u64[0];
          v19[8] = v24;
          *((_QWORD *)v19 + 3) = v28;
        }
        v29 = a5[6] - v19[6];
        v30 = (float)((float)((float)(a5[7] - v19[7]) * (float)(a5[7] - v19[7])) + (float)(v29 * v29))
            + (float)((float)(a5[8] - v24) * (float)(a5[8] - v24));
        if ( v30 < 0.0 )
          v31 = sub_140A00700(a1: v18);
        else
          v31 = fsqrt(v30);
        if ( v15.m128_f32[0] > v31 )
        {
          v32 = v15;
          v32.m128_f32[0] = v15.m128_f32[0] - v31;
          v24 = v24 + (float)((float)(v15.m128_f32[0] - v31) * a7[2]);
          v33 = _mm_add_ps(
                  (__m128)*((unsigned __int64 *)v19 + 3),
                  _mm_mul_ps((__m128)*(unsigned __int64 *)a7, _mm_shuffle_ps(v32, v32, 0))).m128_u64[0];
          v19[8] = v24;
          *((_QWORD *)v19 + 3) = v33;
        }
        v34 = (float)((float)((float)(a5[1] - v19[7]) * (float)(a5[1] - v19[7]))
                    + (float)((float)(*a5 - v19[6]) * (float)(*a5 - v19[6])))
            + (float)((float)(a5[2] - v24) * (float)(a5[2] - v24));
        if ( v34 < 0.0 )
          v35 = sub_140A00700(a1: v18);
        else
          v35 = fsqrt(v34);
        if ( v17.m128_f32[0] > v35 )
        {
          v36 = v17;
          v36.m128_f32[0] = v17.m128_f32[0] - v35;
          v37 = v24 + (float)((float)(v17.m128_f32[0] - v35) * a7[2]);
          v38 = _mm_add_ps(
                  (__m128)*((unsigned __int64 *)v19 + 3),
                  _mm_mul_ps((__m128)*(unsigned __int64 *)a7, _mm_shuffle_ps(v36, v36, 0))).m128_u64[0];
          v19[8] = v37;
          *((_QWORD *)v19 + 3) = v38;
        }
        v13 = a2[1];
        ++v16;
        v14 = *a2;
      }
      while ( v16 < (unsigned __int64)(((v13 - *a2) >> 4) - 1) );
      v9 = a4;
    }
    if ( v14 == v13 )
LABEL_74:
      __fastfail(5u);
    v39 = sub_1405F8CF0(a1: v13 - 16);
    LOBYTE(v40) = 1;
    (*(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)v39 + 680LL))(
      a1: v39,
      a2: v9,
      a3: 1,
      a4: v40);
    v41 = a2[1];
    v42 = 0;
    v43 = *a2;
    if ( (v41 - *a2) >> 4 != 1 )
    {
      do
      {
        if ( v42 >= (unsigned __int64)((v41 - v43) >> 4) )
          goto LABEL_74;
        v44 = sub_1405F8CF0(a1: v43 + 16LL * v42);
        v47 = v44;
        if ( v44 != 0 )
        {
          v48 = *(float **)(v44 + 64);
          if ( v42 != 0 )
          {
            v49 = v42 - 1;
            if ( v49 >= (a2[1] - *a2) >> 4 )
              goto LABEL_74;
            v50 = sub_1405F8CF0(a1: *a2 + 16 * v49);
          }
          else
          {
            v50 = a3;
          }
          v135 = v50;
          v121 = 0;
          v122 = 0.0;
          if ( v50 == 0 )
          {
            if ( (unsigned __int8)sub_140059A00(a1: off_140EFE8B0) != 0 )
              __debugbreak();
            sub_1409E7D98(a1: 999);
            __debugbreak();
          }
          v51 = sub_1400B5440(a1: v46, a2: v45);
          sub_1400CC650(a1: v135, a2: v133, a3: v51);
          v53 = sub_140094CA0(a1: v48 + 6, a2: v133, a3: &v121);
          v54 = *(float *)&v53;
          v55 = *(float *)(a1 + 152);
          if ( v54 > v55 )
          {
            v56 = *(float *)(a1 + 156);
            v57 = v54 - v55;
            v58 = (float)((float)(*((float *)&v121 + 1) * v57) * v56) + v48[7];
            v59 = (float)((float)(*(float *)&v121 * v57) * v56) + v48[6];
            v48[8] = (float)((float)(v122 * v57) * v56) + v48[8];
            v48[7] = v58;
            v48[6] = v59;
          }
          LOBYTE(v52) = 1;
          (*(void (__fastcall **)(__int64, float *, __int64, __int64))(*(_QWORD *)v47 + 680LL))(
            a1: v47,
            a2: v48 + 6,
            a3: 1,
            a4: v52);
        }
        v41 = a2[1];
        ++v42;
        v43 = *a2;
      }
      while ( v42 < (unsigned __int64)(((v41 - *a2) >> 4) - 1) );
      v12 = a1;
    }
    v60 = 1.0;
    v61 = ((v41 - v43) >> 4) - 2;
    v127 = 0;
    v128 = 0;
    if ( v61 >= 0 )
    {
      do
      {
        if ( (unsigned int)v61 >= (unsigned __int64)((a2[1] - *a2) >> 4) )
          goto LABEL_74;
        v62 = sub_1405F8CF0(a1: *a2 + 16LL * (unsigned int)v61);
        v63 = v62;
        if ( v62 == 0 )
        {
          if ( (unsigned __int8)sub_140059A00(a1: off_140EFE908) != 0 )
            __debugbreak();
          sub_1409E7D98(a1: 999);
          __debugbreak();
        }
        v64 = *(float **)(v62 + 64);
        v65 = (a2[1] - *a2) >> 4;
        if ( v61 >= (int)v65 - 2 )
        {
          v71 = a4;
        }
        else
        {
          v66 = (unsigned int)v61 + 1LL;
          if ( v66 >= v65 )
            goto LABEL_74;
          v67 = sub_1405F8CF0(a1: *a2 + 16 * v66);
          v70 = sub_1400B5440(a1: v69, a2: v68);
          sub_1400CC650(a1: v67, a2: v133, a3: v70);
          v71 = &v127;
          v127 = *v72;
          v128 = *((_DWORD *)v72 + 2);
        }
        v121 = 0;
        v122 = 0.0;
        v74 = sub_140094CA0(a1: v64 + 6, a2: v71, a3: &v121);
        v75 = *(float *)&v74;
        v76 = *(float *)(a1 + 152);
        if ( v75 > v76 )
        {
          v77 = *(float *)(a1 + 156);
          v78 = v75 - v76;
          v79 = (float)((float)((float)(*((float *)&v121 + 1) * v78) * v60) * v77) + v64[7];
          v80 = (float)((float)((float)(*(float *)&v121 * v78) * v60) * v77) + v64[6];
          v64[8] = (float)((float)((float)(v122 * v78) * v60) * v77) + v64[8];
          v64[7] = v79;
          v64[6] = v80;
        }
        LOBYTE(v73) = 1;
        v60 = v60 + -0.1;
        (*(void (__fastcall **)(__int64, float *, __int64, __int64))(*(_QWORD *)v63 + 680LL))(
          a1: v63,
          a2: v64 + 6,
          a3: 1,
          a4: v73);
        --v61;
      }
      while ( v61 >= 0 );
      v12 = a1;
    }
    v81 = a2[1];
    v82 = 0;
    v83 = *a2;
    v84 = (__m128)LODWORD(a6);
    v85 = (__m128)LODWORD(a6);
    v84.m128_f32[0] = a6 * 1.25;
    v85.m128_f32[0] = a6 * 0.64999998;
    if ( (v81 - *a2) >> 4 != 1 )
    {
      while ( v82 < (unsigned __int64)((v81 - v83) >> 4) )
      {
        v87 = *(float **)(sub_1405F8CF0(a1: v83 + 16LL * v82) + 64);
        v88 = v87[8];
        v89 = (float)((float)((float)(a5[4] - v87[7]) * (float)(a5[4] - v87[7]))
                    + (float)((float)(a5[3] - v87[6]) * (float)(a5[3] - v87[6])))
            + (float)((float)(a5[5] - v88) * (float)(a5[5] - v88));
        if ( v89 < 0.0 )
          v90 = sub_140A00700(a1: v86);
        else
          v90 = fsqrt(v89);
        if ( a6 > v90 )
        {
          v91 = (__m128)LODWORD(a6);
          v91.m128_f32[0] = a6 - v90;
          v88 = v88 + (float)((float)(a6 - v90) * a7[2]);
          v92 = _mm_add_ps(
                  (__m128)*((unsigned __int64 *)v87 + 3),
                  _mm_mul_ps((__m128)*(unsigned __int64 *)a7, _mm_shuffle_ps(v91, v91, 0))).m128_u64[0];
          v87[8] = v88;
          *((_QWORD *)v87 + 3) = v92;
        }
        v93 = (float)((float)((float)(a5[7] - v87[7]) * (float)(a5[7] - v87[7]))
                    + (float)((float)(a5[6] - v87[6]) * (float)(a5[6] - v87[6])))
            + (float)((float)(a5[8] - v88) * (float)(a5[8] - v88));
        if ( v93 < 0.0 )
          v94 = sub_140A00700(a1: v86);
        else
          v94 = fsqrt(v93);
        if ( v85.m128_f32[0] > v94 )
        {
          v95 = v85;
          v95.m128_f32[0] = v85.m128_f32[0] - v94;
          v88 = v88 + (float)((float)(v85.m128_f32[0] - v94) * a7[2]);
          v96 = _mm_add_ps(
                  (__m128)*((unsigned __int64 *)v87 + 3),
                  _mm_mul_ps((__m128)*(unsigned __int64 *)a7, _mm_shuffle_ps(v95, v95, 0))).m128_u64[0];
          v87[8] = v88;
          *((_QWORD *)v87 + 3) = v96;
        }
        v97 = (float)((float)((float)(a5[1] - v87[7]) * (float)(a5[1] - v87[7]))
                    + (float)((float)(*a5 - v87[6]) * (float)(*a5 - v87[6])))
            + (float)((float)(a5[2] - v88) * (float)(a5[2] - v88));
        if ( v97 < 0.0 )
          v98 = sub_140A00700(a1: v86);
        else
          v98 = fsqrt(v97);
        if ( v84.m128_f32[0] > v98 )
        {
          v99 = v84;
          v99.m128_f32[0] = v84.m128_f32[0] - v98;
          v100 = v88 + (float)((float)(v84.m128_f32[0] - v98) * a7[2]);
          v101 = _mm_add_ps(
                   (__m128)*((unsigned __int64 *)v87 + 3),
                   _mm_mul_ps((__m128)*(unsigned __int64 *)a7, _mm_shuffle_ps(v99, v99, 0))).m128_u64[0];
          v87[8] = v100;
          *((_QWORD *)v87 + 3) = v101;
        }
        v81 = a2[1];
        ++v82;
        v83 = *a2;
        if ( v82 >= (unsigned __int64)(((v81 - *a2) >> 4) - 1) )
          goto LABEL_67;
      }
      goto LABEL_74;
    }
LABEL_67:
    v102 = (_QWORD *)sub_1405F8CF0(a1: v12 + 616);
    v105 = v102;
    if ( v102 == nullptr )
    {
      if ( (unsigned __int8)sub_140059A00(a1: off_140EFE940) != 0 )
        __debugbreak();
      sub_1409E7D98(a1: 999);
      __debugbreak();
    }
    if ( v102[44] != 0 )
    {
      v106 = *v102;
      v107 = sub_1400B5440(a1: v104, a2: v103);
      v108 = (__int128 *)(*(__int64 (__fastcall **)(_QWORD *, __int64))(v106 + 696))(a1: v105, a2: v107);
      v123 = *v108;
      v124 = v108[1];
      v125 = v108[2];
      v126 = v108[3];
      sub_14009E480(a1: &v123, a2: &v123);
      v109 = *a2;
      for ( i = a2[1]; v109 != i; v109 += 16 )
      {
        v111 = (_QWORD *)sub_1405F8CF0(a1: v109);
        v114 = v111;
        if ( v111 != nullptr )
        {
          v115 = *v111;
          v116 = sub_1400B5440(a1: v113, a2: v112);
          v117 = (float *)(*(__int64 (__fastcall **)(_QWORD *, __int64))(v115 + 696))(a1: v114, a2: v116);
          v129 = 0;
          v130 = 0;
          v131 = 0;
          v132 = 0;
          *(float *)&v129 = (float)((float)((float)(*(float *)&v123 * *v117) + (float)(*(float *)&v124 * v117[1]))
                                  + (float)(*(float *)&v125 * v117[2]))
                          + (float)(*(float *)&v126 * v117[3]);
          *((float *)&v129 + 1) = (float)((float)((float)(*((float *)&v123 + 1) * *v117)
                                                + (float)(*((float *)&v124 + 1) * v117[1]))
                                        + (float)(*((float *)&v125 + 1) * v117[2]))
                                + (float)(*((float *)&v126 + 1) * v117[3]);
          *((float *)&v129 + 2) = (float)((float)((float)(*((float *)&v123 + 2) * *v117)
                                                + (float)(*((float *)&v124 + 2) * v117[1]))
                                        + (float)(*((float *)&v125 + 2) * v117[2]))
                                + (float)(*((float *)&v126 + 2) * v117[3]);
          *((float *)&v129 + 3) = (float)((float)((float)(*((float *)&v123 + 3) * *v117)
                                                + (float)(*((float *)&v124 + 3) * v117[1]))
                                        + (float)(*((float *)&v125 + 3) * v117[2]))
                                + (float)(*((float *)&v126 + 3) * v117[3]);
          *(float *)&v130 = (float)((float)((float)(*(float *)&v123 * v117[4]) + (float)(*(float *)&v124 * v117[5]))
                                  + (float)(*(float *)&v125 * v117[6]))
                          + (float)(*(float *)&v126 * v117[7]);
          *((float *)&v130 + 1) = (float)((float)((float)(*((float *)&v123 + 1) * v117[4])
                                                + (float)(*((float *)&v124 + 1) * v117[5]))
                                        + (float)(*((float *)&v125 + 1) * v117[6]))
                                + (float)(*((float *)&v126 + 1) * v117[7]);
          *((float *)&v130 + 2) = (float)((float)((float)(*((float *)&v123 + 2) * v117[4])
                                                + (float)(*((float *)&v124 + 2) * v117[5]))
                                        + (float)(*((float *)&v125 + 2) * v117[6]))
                                + (float)(*((float *)&v126 + 2) * v117[7]);
          *((float *)&v130 + 3) = (float)((float)((float)(*((float *)&v123 + 3) * v117[4])
                                                + (float)(*((float *)&v124 + 3) * v117[5]))
                                        + (float)(*((float *)&v125 + 3) * v117[6]))
                                + (float)(*((float *)&v126 + 3) * v117[7]);
          *(float *)&v131 = (float)((float)((float)(*(float *)&v123 * v117[8]) + (float)(*(float *)&v124 * v117[9]))
                                  + (float)(*(float *)&v125 * v117[10]))
                          + (float)(*(float *)&v126 * v117[11]);
          *((float *)&v131 + 1) = (float)((float)((float)(*((float *)&v123 + 1) * v117[8])
                                                + (float)(*((float *)&v124 + 1) * v117[9]))
                                        + (float)(*((float *)&v125 + 1) * v117[10]))
                                + (float)(*((float *)&v126 + 1) * v117[11]);
          *((float *)&v131 + 2) = (float)((float)((float)(*((float *)&v123 + 2) * v117[8])
                                                + (float)(*((float *)&v124 + 2) * v117[9]))
                                        + (float)(*((float *)&v125 + 2) * v117[10]))
                                + (float)(*((float *)&v126 + 2) * v117[11]);
          *((float *)&v131 + 3) = (float)((float)((float)(*((float *)&v123 + 3) * v117[8])
                                                + (float)(*((float *)&v124 + 3) * v117[9]))
                                        + (float)(*((float *)&v125 + 3) * v117[10]))
                                + (float)(*((float *)&v126 + 3) * v117[11]);
          *(float *)&v132 = (float)((float)((float)(*(float *)&v123 * v117[12]) + (float)(*(float *)&v124 * v117[13]))
                                  + (float)(*(float *)&v125 * v117[14]))
                          + (float)(*(float *)&v126 * v117[15]);
          *((float *)&v132 + 1) = (float)((float)((float)(*((float *)&v123 + 1) * v117[12])
                                                + (float)(*((float *)&v124 + 1) * v117[13]))
                                        + (float)(*((float *)&v125 + 1) * v117[14]))
                                + (float)(*((float *)&v126 + 1) * v117[15]);
          *((float *)&v132 + 2) = (float)((float)((float)(*((float *)&v123 + 2) * v117[12])
                                                + (float)(*((float *)&v124 + 2) * v117[13]))
                                        + (float)(*((float *)&v125 + 2) * v117[14]))
                                + (float)(*((float *)&v126 + 2) * v117[15]);
          *((float *)&v132 + 3) = (float)((float)((float)(*((float *)&v123 + 3) * v117[12])
                                                + (float)(*((float *)&v124 + 3) * v117[13]))
                                        + (float)(*((float *)&v125 + 3) * v117[14]))
                                + (float)(*((float *)&v126 + 3) * v117[15]);
          sub_14009F170(a1: &v129, a2: &v129);
          v118 = v130;
          *(_OWORD *)((char *)v114 + 156) = v129;
          v119 = v131;
          *(_OWORD *)((char *)v114 + 172) = v118;
          v120 = v132;
          *(_OWORD *)((char *)v114 + 188) = v119;
          *(_OWORD *)((char *)v114 + 204) = v120;
        }
      }
    }
  }
}