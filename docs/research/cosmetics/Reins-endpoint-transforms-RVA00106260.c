// Hex-Rays export, baseline 645.348067; descriptive analysis label.
__int64 __fastcall sub_140106260(float *a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  char v8; // al
  __int64 v9; // rax
  __m128 v10; // xmm6
  float v11; // xmm8_4
  float v12; // xmm7_4
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  float *v17; // rax
  float *v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  float *v23; // rax
  float v24; // xmm2_4
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  float *v29; // rax
  float *v30; // rdi
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  float *v35; // rax
  float v36; // xmm2_4
  __int64 v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  __m128 v42; // xmm3
  unsigned __int64 v43; // xmm0_8
  float v44; // xmm2_4
  float v45; // xmm1_4
  float v46; // xmm7_4
  __int64 v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  float *v51; // rax
  float *v52; // rdi
  __int64 v53; // rbx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rax
  float *v57; // rax
  float v59; // xmm3_4
  _BYTE v60[12]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v61[20]; // [rsp+2Ch] [rbp-7Ch] BYREF

  *(_QWORD *)a2 = 0;
  *(_QWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 24) = 0;
  *(_DWORD *)(a2 + 32) = 0;
  v4 = sub_14005D010(a1, a2);
  v5 = (*(__int64 (__fastcall **)(float *))(*(_QWORD *)a1 + 240LL))(a1);
  v6 = v5;
  if ( v5 != 0 )
  {
    v8 = sub_14064F360(a1: v5, a2: 1, a3: v4);
    v7 = 0;
    if ( v8 != 0 )
      v7 = v6;
  }
  else
  {
    v7 = 0;
  }
  v9 = sub_1400CA800(a1: v7);
  v10 = (__m128)*(unsigned __int64 *)(v9 + 4);
  v11 = *(float *)v9;
  v12 = _mm_shuffle_ps(v10, v10, 85).m128_f32[0];
  if ( sub_1405F8CF0(a1: (__int64)(a1 + 150)) != 0 )
  {
    v13 = sub_1405F8CF0(a1: (__int64)(a1 + 150));
    v16 = sub_1400B5440(a1: v15, a2: v14);
    sub_1400CC650(a1: v13, a2: v60, a3: v16);
    v18 = v17;
    v19 = sub_1405F8CF0(a1: (__int64)(a1 + 138));
    v22 = sub_1400B5440(a1: v21, a2: v20);
    sub_1400CC650(a1: v19, a2: v61, a3: v22);
    v24 = (float)((float)(v18[2] - v23[2]) * 0.25) + v23[2];
    *(_QWORD *)(a2 + 12) = _mm_add_ps(
                             _mm_mul_ps(
                               _mm_sub_ps((__m128)*(unsigned __int64 *)v18, (__m128)*(unsigned __int64 *)v23),
                               (__m128)xmmword_140EFEDA0),
                             (__m128)*(unsigned __int64 *)v23).m128_u64[0];
    *(float *)(a2 + 20) = v24;
    v25 = sub_1405F8CF0(a1: (__int64)(a1 + 150));
    v28 = sub_1400B5440(a1: v27, a2: v26);
    sub_1400CC650(a1: v25, a2: v61, a3: v28);
    v30 = v29;
    v31 = sub_1405F8CF0(a1: (__int64)(a1 + 138));
    v34 = sub_1400B5440(a1: v33, a2: v32);
    sub_1400CC650(a1: v31, a2: v60, a3: v34);
    v36 = (float)((float)(v30[2] - v35[2]) * 0.85000002) + v35[2];
    *(_QWORD *)(a2 + 24) = _mm_add_ps(
                             _mm_mul_ps(
                               _mm_sub_ps((__m128)*(unsigned __int64 *)v30, (__m128)*(unsigned __int64 *)v35),
                               (__m128)xmmword_140EFEDB0),
                             (__m128)*(unsigned __int64 *)v35).m128_u64[0];
    *(float *)(a2 + 32) = v36;
  }
  else
  {
    v37 = sub_1405F8CF0(a1: (__int64)(a1 + 138));
    v40 = sub_1400B5440(a1: v39, a2: v38);
    sub_1400CC650(a1: v37, a2: v61, a3: v40);
    *(_QWORD *)(a2 + 12) = *(_QWORD *)v41;
    *(_DWORD *)(a2 + 20) = *(_DWORD *)(v41 + 8);
    *(float *)(a2 + 16) = (float)(a1[40] * 0.1) + *(float *)(a2 + 16);
    v42 = (__m128)*((unsigned int *)a1 + 40);
    v43 = _mm_add_ps(
            (__m128)*(unsigned __int64 *)(a2 + 16),
            _mm_mul_ps(_mm_mul_ps(v10, _mm_shuffle_ps(v42, v42, 0)), (__m128)xmmword_140EFED70)).m128_u64[0];
    *(float *)(a2 + 12) = (float)((float)(v11 * v42.m128_f32[0]) * 0.075000003) + *(float *)(a2 + 12);
    *(_QWORD *)(a2 + 16) = v43;
    LODWORD(v41) = *(_DWORD *)(a2 + 20);
    *(_QWORD *)(a2 + 24) = *(_QWORD *)(a2 + 12);
    *(_DWORD *)(a2 + 32) = v41;
    v44 = (float)(a1[40] * 0.64999998) + *(float *)(a2 + 28);
    *(float *)(a2 + 28) = v44;
    v45 = a1[40];
    v46 = (float)((float)(v12 * v45) * 0.75) + *(float *)(a2 + 32);
    *(float *)(a2 + 24) = (float)((float)(v11 * v45) * 0.75) + *(float *)(a2 + 24);
    *(float *)(a2 + 28) = v44 + (float)((float)(v10.m128_f32[0] * v45) * 0.75);
    *(float *)(a2 + 32) = v46;
  }
  *(float *)(a2 + 16) = (float)(a1[40] * 0.25) + *(float *)(a2 + 16);
  v47 = sub_1405F8CF0(a1: (__int64)(a1 + 126));
  v50 = sub_1400B5440(a1: v49, a2: v48);
  sub_1400CC650(a1: v47, a2: v61, a3: v50);
  v52 = v51;
  v53 = sub_1405F8CF0(a1: (__int64)(a1 + 138));
  v56 = sub_1400B5440(a1: v55, a2: v54);
  sub_1400CC650(a1: v53, a2: v60, a3: v56);
  v59 = (float)((float)(v52[2] - v57[2]) * 0.5) + v57[2];
  *(_QWORD *)a2 = _mm_add_ps(
                    _mm_mul_ps(
                      _mm_sub_ps((__m128)*(unsigned __int64 *)v52, (__m128)*(unsigned __int64 *)v57),
                      (__m128)xmmword_140EF4EB0),
                    (__m128)*(unsigned __int64 *)v57).m128_u64[0];
  *(float *)(a2 + 8) = v59;
  *(float *)(a2 + 4) = *(float *)(a2 + 4) - (float)(a1[40] * 0.5);
  return a2;
}