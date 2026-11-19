// Read-only Hex-Rays export, client 645.348067.
__int64 __fastcall sub_14010CCB0(__int64 a1, __int64 a2, __int64 a3)
{
  __m128 *v4; // rbx
  _OWORD *v5; // rcx
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int64 result; // rax
  __m128 v14; // xmm5
  __m128 v15; // xmm6
  __m128 v16; // xmm7
  __m128 v17; // xmm8
  __m128 v18; // xmm9
  float v19; // xmm13_4
  __m128 v20; // xmm4
  float v21; // xmm15_4
  float v22; // xmm12_4
  __m128 v23; // xmm3
  float v24; // xmm1_4
  __m128 v25; // xmm6
  float v26; // xmm2_4
  __m128 v27; // xmm5
  __m128 v28; // xmm0
  float v29; // xmm14_4
  float v30; // xmm14_4
  float v31; // xmm10_4
  __m128 v32; // xmm4
  float v33; // xmm11_4
  __m128 v34; // xmm3
  __m128 v35; // xmm8
  float v36; // xmm11_4
  float v37; // xmm1_4
  __m128 v38; // xmm6
  float v39; // xmm2_4
  __m128 v40; // xmm5
  __m128 v41; // xmm4
  float v42; // xmm10_4
  float v43; // xmm2_4
  __m128 v44; // xmm5
  float v45; // xmm2_4
  __m128 v46; // xmm0
  __m128 v47; // xmm1
  __m128 v48; // xmm0
  __m128 v49; // xmm0
  __m128 v50; // xmm1
  __m128 v51; // xmm1
  __m128 v52; // xmm0
  __m128 v53; // xmm1
  __m128 v54; // [rsp+20h] [rbp-128h]
  __m128 v55; // [rsp+30h] [rbp-118h]
  __m128 v56; // [rsp+50h] [rbp-F8h]
  __m128 v57; // [rsp+60h] [rbp-E8h]
  __m128 v58; // [rsp+70h] [rbp-D8h]
  __m128 v59; // [rsp+80h] [rbp-C8h]
  __m128 v60; // [rsp+90h] [rbp-B8h]
  float v61; // [rsp+150h] [rbp+8h]
  float v62; // [rsp+150h] [rbp+8h]
  float v63; // [rsp+160h] [rbp+18h]
  float v64; // [rsp+168h] [rbp+20h]

  v4 = (__m128 *)(a1 + 232);
  v5 = (_OWORD *)(a1 + 296);
  if ( (*(_BYTE *)(a1 + 728) & 1) != 0 )
  {
    v6 = *(_OWORD *)(a1 + 184);
    *v5 = *(_OWORD *)(a1 + 168);
    v7 = *(_OWORD *)(a1 + 200);
    v5[1] = v6;
    v8 = *(_OWORD *)(a1 + 216);
    v5[2] = v7;
    v9 = xmmword_1412FF640;
    v5[3] = v8;
    v10 = xmmword_1412FF650;
    *v4 = (__m128)v9;
    v11 = xmmword_1412FF660;
    v4[1] = (__m128)v10;
    v12 = xmmword_1412FF670;
    v4[2] = (__m128)v11;
    v4[3] = (__m128)v12;
  }
  else
  {
    *v4 = *(__m128 *)(a2 + 492);
    v4[1] = *(__m128 *)(a2 + 508);
    v4[2] = *(__m128 *)(a2 + 524);
    v4[3] = *(__m128 *)(a2 + 540);
    if ( v5 == nullptr )
      sub_14005A4C0(a1: 0, a2, a3);
    result = sub_14009E480(a1: v5, a2: v4);
    if ( (*(_BYTE *)(a1 + 728) & 8) != 0 )
    {
      v14 = (__m128)*(unsigned int *)(a1 + 180);
      v15 = (__m128)*(unsigned int *)(a1 + 176);
      v16 = (__m128)*(unsigned int *)(a1 + 168);
      v17 = (__m128)*(unsigned int *)(a1 + 172);
      v18 = (__m128)*(unsigned __int64 *)(a1 + 284);
      v61 = *(float *)(a1 + 248);
      v19 = *(float *)(a1 + 276);
      v55 = (__m128)*(unsigned __int64 *)(a1 + 252);
      v20 = _mm_mul_ps(v18, _mm_shuffle_ps(v14, v14, 0));
      v21 = *(float *)(a1 + 292);
      v56 = (__m128)*(unsigned __int64 *)(a1 + 268);
      v54 = (__m128)*(unsigned __int64 *)(a1 + 236);
      v22 = *(float *)(a1 + 244);
      v64 = (float)((float)((float)(v61 * v17.m128_f32[0]) + (float)(v4->m128_f32[0] * v16.m128_f32[0]))
                  + (float)(*(float *)(a1 + 264) * v15.m128_f32[0]))
          + (float)(*(float *)(a1 + 280) * v14.m128_f32[0]);
      v23 = _mm_mul_ps(v56, _mm_shuffle_ps(v15, v15, 0));
      v24 = v19 * v15.m128_f32[0];
      v25 = (__m128)*(unsigned int *)(a1 + 192);
      v26 = v21 * v14.m128_f32[0];
      v27 = (__m128)*(unsigned int *)(a1 + 196);
      v28 = _mm_add_ps(
              _mm_add_ps(_mm_mul_ps(v55, _mm_shuffle_ps(v17, v17, 0)), _mm_mul_ps(v54, _mm_shuffle_ps(v16, v16, 0))),
              v23);
      v63 = *(float *)(a1 + 260);
      v29 = v63 * v17.m128_f32[0];
      v17.m128_i32[0] = *(_DWORD *)(a1 + 188);
      *(unsigned __int64 *)((char *)v57.m128_u64 + 4) = _mm_add_ps(v28, v20).m128_u64[0];
      v28.m128_f32[0] = v22 * v16.m128_f32[0];
      v16.m128_i32[0] = *(_DWORD *)(a1 + 184);
      v30 = (float)((float)(v29 + v28.m128_f32[0]) + v24) + v26;
      v31 = v63 * v17.m128_f32[0];
      v32 = _mm_mul_ps(v18, _mm_shuffle_ps(v27, v27, 0));
      v33 = (float)((float)(v61 * v17.m128_f32[0]) + (float)(v4->m128_f32[0] * v16.m128_f32[0]))
          + (float)(*(float *)(a1 + 264) * v25.m128_f32[0]);
      v34 = _mm_mul_ps(v56, _mm_shuffle_ps(v25, v25, 0));
      v35 = (__m128)*(unsigned int *)(a1 + 204);
      v36 = v33 + (float)(*(float *)(a1 + 280) * v27.m128_f32[0]);
      v37 = v19 * v25.m128_f32[0];
      v38 = (__m128)*(unsigned int *)(a1 + 208);
      v39 = v21 * v27.m128_f32[0];
      v40 = (__m128)*(unsigned int *)(a1 + 212);
      *(unsigned __int64 *)((char *)v58.m128_u64 + 4) = _mm_add_ps(
                                                          _mm_add_ps(
                                                            _mm_add_ps(
                                                              _mm_mul_ps(
                                                                v55,
                                                                _mm_shuffle_ps(
                                                                  (__m128)*(unsigned int *)(a1 + 188),
                                                                  (__m128)*(unsigned int *)(a1 + 188),
                                                                  0)),
                                                              _mm_mul_ps(
                                                                v54,
                                                                _mm_shuffle_ps(
                                                                  (__m128)v16.m128_u32[0],
                                                                  (__m128)v16.m128_u32[0],
                                                                  0))),
                                                            v34),
                                                          v32).m128_u64[0];
      v28.m128_f32[0] = v22 * v16.m128_f32[0];
      v16.m128_i32[0] = *(_DWORD *)(a1 + 200);
      v41 = _mm_mul_ps(v18, _mm_shuffle_ps(v40, v40, 0));
      v42 = (float)((float)(v31 + v28.m128_f32[0]) + v37) + v39;
      v18.m128_f32[0] = (float)((float)((float)(v61 * v35.m128_f32[0]) + (float)(v4->m128_f32[0] * v16.m128_f32[0]))
                              + (float)(*(float *)(a1 + 264) * v38.m128_f32[0]))
                      + (float)(*(float *)(a1 + 280) * v40.m128_f32[0]);
      v43 = v21 * v40.m128_f32[0];
      *(unsigned __int64 *)((char *)v59.m128_u64 + 4) = _mm_add_ps(
                                                          _mm_add_ps(
                                                            _mm_add_ps(
                                                              _mm_mul_ps(v55, _mm_shuffle_ps(v35, v35, 0)),
                                                              _mm_mul_ps(
                                                                v54,
                                                                _mm_shuffle_ps(
                                                                  (__m128)v16.m128_u32[0],
                                                                  (__m128)v16.m128_u32[0],
                                                                  0))),
                                                            _mm_mul_ps(v56, _mm_shuffle_ps(v38, v38, 0))),
                                                          v41).m128_u64[0];
      v44 = (__m128)*(unsigned int *)(a1 + 220);
      v38.m128_f32[0] = (float)((float)((float)(v63 * v35.m128_f32[0]) + (float)(v22 * v16.m128_f32[0]))
                              + (float)(v19 * v38.m128_f32[0]))
                      + v43;
      v45 = *(float *)(a1 + 216);
      v41.m128_i32[0] = *(_DWORD *)(a1 + 224);
      v34.m128_i32[0] = *(_DWORD *)(a1 + 228);
      v62 = (float)((float)((float)(v61 * v44.m128_f32[0]) + (float)(v4->m128_f32[0] * v45))
                  + (float)(*(float *)(a1 + 264) * v41.m128_f32[0]))
          + (float)(*(float *)(a1 + 280) * v34.m128_f32[0]);
      *(unsigned __int64 *)((char *)v60.m128_u64 + 4) = _mm_add_ps(
                                                          _mm_add_ps(
                                                            _mm_add_ps(
                                                              _mm_mul_ps(v55, _mm_shuffle_ps(v44, v44, 0)),
                                                              _mm_mul_ps(
                                                                v54,
                                                                _mm_shuffle_ps(
                                                                  (__m128)LODWORD(v45),
                                                                  (__m128)LODWORD(v45),
                                                                  0))),
                                                            _mm_mul_ps(
                                                              v56,
                                                              _mm_shuffle_ps(
                                                                (__m128)v41.m128_u32[0],
                                                                (__m128)v41.m128_u32[0],
                                                                0))),
                                                          _mm_mul_ps(
                                                            (__m128)*(unsigned __int64 *)(a1 + 284),
                                                            _mm_shuffle_ps(
                                                              (__m128)v34.m128_u32[0],
                                                              (__m128)v34.m128_u32[0],
                                                              0))).m128_u64[0];
      v46 = v57;
      v46.m128_f32[0] = v64;
      v47 = v58;
      v48 = _mm_shuffle_ps(v46, v46, 147);
      v47.m128_f32[0] = v36;
      v48.m128_f32[0] = v30;
      *v4 = _mm_shuffle_ps(v48, v48, 57);
      v49 = v59;
      v50 = _mm_shuffle_ps(v47, v47, 147);
      v50.m128_f32[0] = v42;
      v49.m128_f32[0] = v18.m128_f32[0];
      v4[1] = _mm_shuffle_ps(v50, v50, 57);
      v51 = v60;
      v52 = _mm_shuffle_ps(v49, v49, 147);
      v52.m128_f32[0] = v38.m128_f32[0];
      v4[2] = _mm_shuffle_ps(v52, v52, 57);
      v51.m128_f32[0] = v62;
      v53 = _mm_shuffle_ps(v51, v51, 147);
      v53.m128_f32[0] = (float)((float)((float)(v63 * v44.m128_f32[0]) + (float)(v22 * v45))
                              + (float)(v19 * v41.m128_f32[0]))
                      + (float)(v21 * v34.m128_f32[0]);
      v4[3] = _mm_shuffle_ps(v53, v53, 57);
    }
  }
  return result;
}