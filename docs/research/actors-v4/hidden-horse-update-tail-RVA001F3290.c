// Hex-Rays pseudocode exported through Official IDA MCP Server.
// Baseline SSOClient.exe 645.348067; IDA base 0x140000000.
// Descriptive filename is an analysis label, not a recovered private function name.

void __fastcall sub_1401F3290(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  int v4; // eax
  __int64 v5; // rsi
  int v6; // r14d
  __int64 v7; // rax
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  float v10; // xmm1_4
  float v11; // xmm2_4
  float v12; // xmm0_4
  float v13; // xmm1_4
  float v14; // xmm2_4
  float v15; // xmm0_4
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  float v25; // xmm2_4
  float v26; // xmm1_4
  float v27; // xmm0_4
  float v28; // xmm2_4
  float v29; // eax
  __m128 v30; // xmm8
  __int64 v31; // r8
  __m128 v32; // xmm9
  float v33; // xmm14_4
  float v34; // xmm4_4
  float v35; // xmm5_4
  float v36; // xmm15_4
  float v37; // xmm10_4
  double v38; // xmm0_8
  float v39; // xmm6_4
  __m128 v40; // xmm0
  __m128 v41; // xmm0
  double v42; // xmm3_8
  __m128 v43; // xmm0
  unsigned __int64 v44; // xmm2_8
  __int64 v45; // rdx
  __int64 v46; // rcx
  float v47; // xmm0_4
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rcx
  float v51; // xmm0_4
  int v52; // xmm1_4
  int *v53; // rax
  __int64 v54; // rbx
  __int64 v55; // rdx
  char v56; // cl
  __m128 v57; // xmm0
  __m128 v58; // xmm8
  __m128 v59; // xmm9
  float v60; // xmm3_4
  float v61; // xmm10_4
  double v62; // xmm0_8
  float v63; // xmm6_4
  __m128 v64; // xmm0
  __m128 v65; // xmm0
  __m128 v66; // xmm8
  __int64 v67; // [rsp+28h] [rbp-E0h] BYREF
  float v68; // [rsp+30h] [rbp-D8h]
  _QWORD v69[4]; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v70; // [rsp+58h] [rbp-B0h]
  __int64 v71; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v72; // [rsp+78h] [rbp-90h] BYREF
  float v73; // [rsp+170h] [rbp+68h] BYREF
  int v74; // [rsp+178h] [rbp+70h]

  if ( qword_14137A240 == 0 )
  {
    if ( (unsigned __int8)sub_140059A00(a1: off_140EFE650) != 0 )
      __debugbreak();
    sub_1409E7D98(a1: 999);
    __debugbreak();
  }
  if ( (unsigned __int8)sub_14060F350(a1: qword_14137A240, a2: 3) != 0 )
  {
    if ( *(_DWORD *)(a1 + 2880) != 0 )
    {
      v4 = *(_DWORD *)(a1 + 2828);
      if ( (unsigned int)v4 <= 0x7D0 )
      {
        v5 = *(_QWORD *)(a1 + 64);
        if ( v5 != 0 )
        {
          LOBYTE(v6) = 0;
          BYTE8(v70) = 0;
          *(float *)(a1 + 2724) = (float)v4 / 1000.0;
          if ( *(_BYTE *)(a1 + 2968) == 0 )
          {
            v7 = sub_1401ED760(a1, a2: (__int64)&v72);
            v6 = *(_DWORD *)(v7 + 40);
            v8 = *(_OWORD *)(v7 + 16);
            *(_OWORD *)v69 = *(_OWORD *)v7;
            v9 = *(_OWORD *)(v7 + 32);
            *(_OWORD *)&v69[2] = v8;
            v70 = v9;
          }
          v10 = *(float *)(a1 + 2724);
          v11 = *(float *)(a1 + 2884);
          *(_BYTE *)(a1 + 2968) = *(_BYTE *)(a1 + 2968) == 0;
          if ( v10 <= v11 )
          {
            sub_1401E60C0(a1: &v67, a2: v2, a3: v3, a4: a1 + 2988);
            v25 = *(float *)(a1 + 3060);
            if ( v25 > 0.0 )
            {
              v26 = *(float *)&v67 + (float)(v25 * *(float *)(a1 + 3048));
              v27 = v25 * *(float *)(a1 + 3052);
              v28 = v25 * *(float *)(a1 + 3056);
              *(float *)&v67 = v26;
              *((float *)&v67 + 1) = *((float *)&v67 + 1) + v27;
              v68 = v68 + v28;
              *(float *)(a1 + 3060) = fmaxf(*(float *)(a1 + 3060) - (float)(sub_1400B4560(a1) * 3.0), 0.0);
            }
            v29 = v68;
            *(_QWORD *)(v5 + 24) = v67;
            *(float *)(v5 + 32) = v29;
            v30 = (__m128)*(unsigned int *)(a1 + 2724);
            v30.m128_f32[0] = fminf(v30.m128_f32[0] / *(float *)(a1 + 2884), 1.0);
            if ( *(_BYTE *)(a1 + 2965) != 0 )
            {
              if ( (float)((float)((float)(*(float *)(a1 + 2924) * *(float *)(a1 + 2924))
                                 + (float)(*(float *)(a1 + 2920) * *(float *)(a1 + 2920)))
                         + (float)(*(float *)(a1 + 2928) * *(float *)(a1 + 2928))) < 0.0 )
                sub_140A00700(a1: v24);
              if ( (unsigned __int8)sub_14009F960() == 0 && (_BYTE)v6 != 0 )
                sub_1401E8AD0(a1, a2: a1 + 2740, a3: v31, a4: v69);
            }
            v32 = (__m128)0x3F800000u;
            v32.m128_f32[0] = 1.0 - v30.m128_f32[0];
            v33 = *(float *)(a1 + 2740);
            v34 = *(float *)(a1 + 2768);
            v35 = *(float *)(a1 + 2752);
            v36 = *(float *)(a1 + 2780);
            v37 = (float)((float)((float)(*(float *)(a1 + 2744) * *(float *)(a1 + 2772)) + (float)(v33 * v34))
                        + (float)(*(float *)(a1 + 2748) * *(float *)(a1 + 2776)))
                + (float)(v35 * v36);
            if ( (float)(1.0 - fabs(v37)) >= 0.0099999998 )
            {
              sub_1409FF720();
              v38 = sub_140A003B0();
              v39 = *(float *)&v38;
              *(double *)v40.m128_u64 = sub_140A003B0();
              v32 = v40;
              v32.m128_f32[0] = v40.m128_f32[0] / v39;
              *(double *)v41.m128_u64 = sub_140A003B0();
              v34 = *(float *)(a1 + 2768);
              v30 = v41;
              v35 = *(float *)(a1 + 2752);
              v30.m128_f32[0] = v41.m128_f32[0] / v39;
            }
            *(_QWORD *)&v42 = _mm_shuffle_ps(v30, v30, 0).m128_u64[0];
            if ( v37 < 0.0 )
              v32 = _mm_xor_ps(v32, (__m128)xmmword_140EF3040);
            v43 = 0;
            *(double *)v43.m128_u64 = v42;
            v44 = _mm_add_ps(
                    _mm_mul_ps((__m128)*(unsigned __int64 *)(a1 + 2772), v43),
                    _mm_mul_ps((__m128)*(unsigned __int64 *)(a1 + 2744), _mm_shuffle_ps(v32, v32, 0))).m128_u64[0];
            *(float *)(v5 + 8) = (float)(v33 * v32.m128_f32[0]) + (float)(v34 * v30.m128_f32[0]);
            *(float *)(v5 + 20) = (float)(v36 * v30.m128_f32[0]) + (float)(v35 * v32.m128_f32[0]);
            *(_QWORD *)(v5 + 12) = v44;
          }
          else
          {
            v12 = sub_1400B4560(a1);
            v13 = (float)(v12 * *(float *)(a1 + 3028)) + *(float *)(v5 + 28);
            v14 = (float)(v12 * *(float *)(a1 + 3032)) + *(float *)(v5 + 32);
            v15 = (float)(v12 * *(float *)(a1 + 3024)) + *(float *)(v5 + 24);
            *(float *)(v5 + 28) = v13;
            *(float *)(v5 + 32) = v14;
            *(float *)(v5 + 24) = v15;
            v73 = sub_1400B4560(a1);
            v18 = sub_1400B5440(a1: v17, a2: v16);
            v19 = sub_1400CC730(a1, a2: &v67, a3: v18);
            *(_OWORD *)(v5 + 8) = *(_OWORD *)sub_1401E6C00(a1: &v71, a2: v19, a3: a1 + 3036, a4: &v73);
            if ( (_BYTE)v6 != 0 )
            {
              *(float *)(v5 + 28) = sub_1401E5E90(a1, a2: v69);
            }
            else
            {
              *(_QWORD *)(a1 + 2976) = 0x3F80000000000000LL;
              *(_DWORD *)(a1 + 2984) = 0;
              v22 = sub_1400B5440(a1: v21, a2: v20);
              sub_1400CC650(a1, a2: &v67, a3: v22);
              *(_DWORD *)(v5 + 28) = *(_DWORD *)(v23 + 4);
            }
          }
          if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 1032LL))(a1) != 7 || *(_BYTE *)(a1 + 2966) != 0 )
          {
            if ( (_BYTE)v6 != 0 )
            {
              v47 = sub_1401E5E90(a1, a2: v69);
            }
            else
            {
              *(_QWORD *)(a1 + 2976) = 0x3F80000000000000LL;
              *(_DWORD *)(a1 + 2984) = 0;
              v48 = sub_1400B5440(a1: v46, a2: v45);
              sub_1400CC650(a1, a2: &v67, a3: v48);
              v47 = *(float *)(v49 + 4);
            }
            *(float *)(v5 + 28) = v47;
          }
          LOBYTE(v45) = 1;
          sub_1400CCAF0(a1, a2: v45);
          if ( (float)((float)((float)(*(float *)(a1 + 2924) * *(float *)(a1 + 2924))
                             + (float)(*(float *)(a1 + 2920) * *(float *)(a1 + 2920)))
                     + (float)(*(float *)(a1 + 2928) * *(float *)(a1 + 2928))) < 0.0 )
            sub_140A00700(a1: v50);
          if ( (unsigned __int8)sub_14009F960() == 0 )
          {
            v51 = sub_1400A0E60();
            v52 = -1073741824;
            v73 = 2.0;
            v74 = -1073741824;
            *(float *)(a1 + 308) = v51;
            if ( v51 >= -2.0 )
            {
              v53 = (int *)&v73;
              if ( v51 <= 2.0 )
                v53 = (int *)(a1 + 308);
              v52 = *v53;
            }
            *(_DWORD *)(a1 + 308) = v52;
          }
          *(float *)(a1 + 304) = sub_1400A0E30();
        }
      }
    }
  }
  else
  {
    v54 = *(_QWORD *)(a1 + 64);
    if ( v54 != 0 )
    {
      v57.m128_f32[0] = sub_1400B4560(a1);
      v56 = *(_BYTE *)(a1 + 440);
      v57.m128_f32[0] = fminf((float)(v57.m128_f32[0] + v57.m128_f32[0]) + *(float *)(a1 + 2724), 2.0);
      *(_DWORD *)(a1 + 2724) = v57.m128_i32[0];
      if ( (v56 & 0xF7) == 0 || (v58 = v57, v58.m128_f32[0] = v57.m128_f32[0] * 0.5, v56 == 9) )
      {
        v58 = v57;
        v58.m128_f32[0] = fminf(v57.m128_f32[0], 1.0);
        *(_DWORD *)(a1 + 2724) = v58.m128_i32[0];
      }
      v59 = (__m128)0x3F800000u;
      v59.m128_f32[0] = 1.0 - v58.m128_f32[0];
      v60 = (float)((float)(*(float *)(a1 + 2764) - *(float *)(a1 + 2736)) * v58.m128_f32[0]) + *(float *)(a1 + 2736);
      *(_QWORD *)(v54 + 24) = _mm_add_ps(
                                _mm_mul_ps(
                                  _mm_sub_ps(
                                    (__m128)*(unsigned __int64 *)(a1 + 2756),
                                    (__m128)*(unsigned __int64 *)(a1 + 2728)),
                                  _mm_shuffle_ps(v58, v58, 0)),
                                (__m128)*(unsigned __int64 *)(a1 + 2728)).m128_u64[0];
      *(float *)(v54 + 32) = v60;
      v61 = (float)((float)((float)(*(float *)(a1 + 2744) * *(float *)(a1 + 2772))
                          + (float)(*(float *)(a1 + 2768) * *(float *)(a1 + 2740)))
                  + (float)(*(float *)(a1 + 2748) * *(float *)(a1 + 2776)))
          + (float)(*(float *)(a1 + 2752) * *(float *)(a1 + 2780));
      if ( (float)(1.0 - fabs(v61)) >= 0.0099999998 )
      {
        sub_1409FF720();
        v62 = sub_140A003B0();
        v63 = *(float *)&v62;
        *(double *)v64.m128_u64 = sub_140A003B0();
        v59 = v64;
        v59.m128_f32[0] = v64.m128_f32[0] / v63;
        *(double *)v65.m128_u64 = sub_140A003B0();
        v58 = v65;
        v58.m128_f32[0] = v65.m128_f32[0] / v63;
      }
      v66 = _mm_shuffle_ps(v58, v58, 0);
      if ( v61 < 0.0 )
        v59 = _mm_xor_ps(v59, (__m128)xmmword_140EF3040);
      LOBYTE(v55) = 1;
      *(__m128 *)(v54 + 8) = _mm_add_ps(
                               _mm_mul_ps(*(__m128 *)(a1 + 2740), _mm_shuffle_ps(v59, v59, 0)),
                               _mm_mul_ps(*(__m128 *)(a1 + 2768), v66));
      sub_1400CCAF0(a1, a2: v55);
      *(float *)(a1 + 308) = sub_1400A0E60();
    }
  }
}
