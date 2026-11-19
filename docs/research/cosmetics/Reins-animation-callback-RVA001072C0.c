// Hex-Rays export; callback target set by CPXReinsSimulator registration.
void __fastcall sub_1401072C0(__int64 a1)
{
  __int64 v2; // rdi
  float v3; // xmm9_4
  float v4; // xmm10_4
  float v5; // xmm11_4
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  float v12; // eax
  __int64 v13; // rcx
  double v14; // xmm0_8
  int v15; // xmm6_4
  float v16; // xmm0_4
  float v17; // eax
  float v18; // xmm9_4
  float v19; // xmm10_4
  float v20; // xmm11_4
  __int64 v21; // rax
  float *v22; // rax
  float *v23; // rbx
  float *v24; // rax
  __m128 v25; // xmm6
  __m128 v26; // xmm7
  float v27; // xmm8_4
  unsigned __int64 *v28; // rax
  __m128 si128; // xmm15
  __m128 v30; // xmm13
  float v31; // xmm14_4
  float v32; // xmm7_4
  __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  float *v38; // rax
  __m128 v39; // xmm0
  __int64 v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  float *v47; // rax
  float v48; // xmm1_4
  float v49; // xmm0_4
  __int64 v50; // rax
  float *v51; // rax
  float *v52; // rdi
  __int64 v53; // rbx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rcx
  float *v58; // rax
  float v59; // xmm0_4
  float v60; // xmm2_4
  float v61; // xmm0_4
  __int64 v62; // rbx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rax
  float v67; // ecx
  unsigned int v68; // xmm10_4
  unsigned int v69; // xmm9_4
  float v70; // xmm11_4
  __int64 v71; // rax
  __int64 v72; // rax
  float v73; // xmm6_4
  float *v74; // rbx
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  float v78; // xmm6_4
  __int64 v79; // r8
  unsigned int v80; // xmm10_4
  unsigned int v81; // xmm9_4
  float v82; // xmm11_4
  __int64 v83; // rax
  __int64 v84; // rax
  float v85; // xmm6_4
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  float v89; // xmm6_4
  float *v90; // rbx
  __int64 v91; // r8
  unsigned __int64 v92; // [rsp+40h] [rbp-C0h] BYREF
  float v93; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v94; // [rsp+50h] [rbp-B0h] BYREF
  float v95; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v96; // [rsp+60h] [rbp-A0h] BYREF
  float v97; // [rsp+68h] [rbp-98h]
  unsigned __int64 v98; // [rsp+70h] [rbp-90h] BYREF
  __int32 v99; // [rsp+78h] [rbp-88h]
  _BYTE v100[12]; // [rsp+7Ch] [rbp-84h] BYREF
  float v101[10]; // [rsp+88h] [rbp-78h] BYREF

  v2 = sub_1405F8CF0(a1: a1 + 208);
  if ( v2 != 0
    && sub_1401065F0(a1) != 0
    && sub_1405F8CF0(a1: a1 + 360) != 0
    && sub_1405F8CF0(a1: a1 + 312) != 0
    && sub_1405F8CF0(a1: a1 + 552) != 0
    && sub_1405F8CF0(a1: a1 + 504) != 0
    && *(_QWORD *)(a1 + 632) != *(_QWORD *)(a1 + 640)
    && *(_QWORD *)(a1 + 656) != *(_QWORD *)(a1 + 664) )
  {
    v3 = *(float *)(a1 + 696);
    v4 = *(float *)(a1 + 692);
    v5 = *(float *)(a1 + 700);
    sub_140107020(a1);
    if ( *(_BYTE *)(a1 + 166) != 0 )
    {
      v8 = sub_1401065F0(a1);
      v11 = sub_1400B5440(a1: v10, a2: v9);
      sub_1400CC650(a1: v8, a2: &v96, a3: v11);
      if ( *(float *)(a1 + 680) == 0.0 && *(float *)(a1 + 684) == 0.0 && *(float *)(a1 + 688) == 0.0 )
      {
        v12 = v97;
        *(_QWORD *)(a1 + 680) = v96;
        *(float *)(a1 + 688) = v12;
      }
      v4 = *(float *)&v96 - *(float *)(a1 + 680);
      v3 = *((float *)&v96 + 1) - *(float *)(a1 + 684);
      v5 = v97 - *(float *)(a1 + 688);
      if ( sub_1400B4560(a1) > 0.0000099999997
        && (float)((float)((float)(v4 * v4) + (float)(v3 * v3)) + (float)(v5 * v5)) < 0.0 )
      {
        sub_140A00700(a1: v13);
      }
      v14 = ((double (*)(void))sub_1400A0E60)();
      v15 = LODWORD(v14);
      v16 = sub_1400A0E60();
      v17 = v97;
      *(float *)(a1 + 156) = v16;
      *(_QWORD *)(a1 + 680) = v96;
      *(float *)(a1 + 688) = v17;
      *(_DWORD *)(a1 + 152) = v15;
    }
    v94 = 0;
    v95 = 0.0;
    v92 = 0;
    v93 = 0.0;
    v18 = (float)((float)(v3 * 59.999996) * 0.5) - 0.89999998;
    v19 = (float)(v4 * 59.999996) * 0.5;
    v20 = (float)(v5 * 59.999996) * 0.5;
    v21 = sub_1400B5440(a1: v7, a2: v6);
    sub_1400CC650(a1: v2, a2: &v98, a3: v21);
    v23 = v22;
    v24 = (float *)sub_1400CA820(a1: v2, a2: &v96);
    v25 = (__m128)*(unsigned __int64 *)v23;
    v26 = (__m128)*(unsigned __int64 *)v24;
    v27 = (float)(v24[2] * 0.2) + v23[2];
    v28 = (unsigned __int64 *)sub_1400CCA80(a1: v2, a2: v100);
    si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_140EF3040);
    v30 = _mm_add_ps(
            _mm_mul_ps(_mm_xor_ps((__m128)*v28, si128), (__m128)xmmword_140EFED80),
            _mm_add_ps(v25, _mm_mul_ps(v26, (__m128)xmmword_140EFED90)));
    v31 = (float)(COERCE_FLOAT(*((_DWORD *)v28 + 2) ^ si128.m128_i32[0]) * 0.1) + v27;
    v32 = _mm_shuffle_ps(v30, v30, 85).m128_f32[0];
    if ( sub_1405F8CF0(a1: a1 + 408) == 0 || *(_BYTE *)(a1 + 164) != 0 )
    {
      v38 = (float *)sub_1400CC6C0(a1: v2, a2: v100);
      v39 = 0;
      v39.m128_u64[0] = v30.m128_u64[0];
      v39.m128_u64[0] = _mm_sub_ps(v39, _mm_mul_ps((__m128)*(unsigned __int64 *)v38, (__m128)xmmword_140EFEDA0)).m128_u64[0];
      v95 = v31 - (float)(v38[2] * 0.25);
      v94 = v39.m128_u64[0];
    }
    else
    {
      v33 = sub_1405F8CF0(a1: a1 + 408);
      v36 = sub_1400B5440(a1: v35, a2: v34);
      sub_1400CC650(a1: v33, a2: v100, a3: v36);
      v94 = *(_QWORD *)v37;
      v95 = *(float *)(v37 + 8);
    }
    if ( sub_1405F8CF0(a1: a1 + 456) == 0 || *(_BYTE *)(a1 + 165) != 0 )
    {
      v47 = (float *)sub_1400CC6C0(a1: v2, a2: v100);
      v48 = (float)(v47[2] * 0.25) + v31;
      v49 = (float)(*v47 * 0.25) + v30.m128_f32[0];
      *((float *)&v92 + 1) = v32 + (float)(v47[1] * 0.25);
      v93 = v48;
      *(float *)&v92 = v49;
    }
    else
    {
      v40 = sub_1405F8CF0(a1: a1 + 456);
      v43 = sub_1400B5440(a1: v42, a2: v41);
      sub_1400CC650(a1: v40, a2: v100, a3: v43);
      v92 = *(_QWORD *)v46;
      v93 = *(float *)(v46 + 8);
    }
    if ( *(float *)(a1 + 160) <= 0.0 )
    {
      v50 = sub_1400B5440(a1: v45, a2: v44);
      sub_1400CC650(a1: v2, a2: v100, a3: v50);
      v52 = v51;
      v53 = sub_1401065F0(a1);
      v56 = sub_1400B5440(a1: v55, a2: v54);
      sub_1400CC650(a1: v53, a2: &v98, a3: v56);
      v59 = v52[1] - v58[1];
      v60 = (float)((float)((float)(*v52 - *v58) * (float)(*v52 - *v58)) + (float)(v59 * v59))
          + (float)((float)(v52[2] - v58[2]) * (float)(v52[2] - v58[2]));
      if ( v60 < 0.0 )
        v61 = sub_140A00700(a1: v57);
      else
        v61 = fsqrt(v60);
      *(float *)(a1 + 160) = (float)(v61 / 1.726513) * 0.315;
    }
    sub_140106260((float *)a1, a2: (__int64)v101);
    if ( *(_BYTE *)(a1 + 167) != 0 && sub_1405F8CF0(a1: a1 + 264) != 0 )
    {
      v62 = sub_1405F8CF0(a1: a1 + 264);
      v65 = sub_1400B5440(a1: v64, a2: v63);
      sub_1400CC650(a1: v62, a2: v100, a3: v65);
      v94 = *(_QWORD *)v66;
      v67 = *(float *)(v66 + 8);
      v92 = v94;
      *(float *)&v68 = v19 * 0.016666668;
      v95 = v67;
      *(float *)&v69 = v18 * 0.016666668;
      v93 = v67;
      v70 = v20 * 0.016666668;
      v96 = __PAIR64__(v69, v68);
      v97 = v70;
      v71 = sub_1401065F0(a1);
      v72 = sub_1400CC6C0(a1: v71, a2: v100);
      v73 = *(float *)(a1 + 160);
      v74 = (float *)v72;
      v75 = sub_1405F8CF0(a1: a1 + 360);
      sub_140107BA0(a1, a2: (__int64 *)(a1 + 656), a3: v75, a4: &v92, a5: v101, a6: v73, a7: v74, a8: (float *)&v96);
      v96 = __PAIR64__(v69, v68);
      v97 = v70;
      v76 = sub_1401065F0(a1);
      v77 = sub_1400CC6C0(a1: v76, a2: v100);
      v78 = *(float *)(a1 + 160);
      v98 = *(_QWORD *)v77 ^ 0x8000000080000000uLL;
      v99 = *(_DWORD *)(v77 + 8) ^ si128.m128_i32[0];
      v79 = sub_1405F8CF0(a1: a1 + 312);
      sub_140107BA0(
        a1,
        a2: (__int64 *)(a1 + 632),
        a3: v79,
        a4: &v94,
        a5: v101,
        a6: v78,
        a7: (float *)&v98,
        a8: (float *)&v96);
    }
    else
    {
      *(float *)&v80 = v19 * 0.016666668;
      *(float *)&v81 = v18 * 0.016666668;
      v82 = v20 * 0.016666668;
      v96 = __PAIR64__(v81, v80);
      v97 = v82;
      v83 = sub_1401065F0(a1);
      v84 = sub_1400CC6C0(a1: v83, a2: v100);
      v85 = *(float *)(a1 + 160);
      v98 = *(_QWORD *)v84 ^ 0x8000000080000000uLL;
      v99 = *(_DWORD *)(v84 + 8) ^ si128.m128_i32[0];
      v86 = sub_1405F8CF0(a1: a1 + 312);
      sub_140107BA0(
        a1,
        a2: (__int64 *)(a1 + 632),
        a3: v86,
        a4: &v94,
        a5: v101,
        a6: v85,
        a7: (float *)&v98,
        a8: (float *)&v96);
      v96 = __PAIR64__(v81, v80);
      v97 = v82;
      v87 = sub_1401065F0(a1);
      v88 = sub_1400CC6C0(a1: v87, a2: v100);
      v89 = *(float *)(a1 + 160);
      v90 = (float *)v88;
      v91 = sub_1405F8CF0(a1: a1 + 360);
      sub_140107BA0(a1, a2: (__int64 *)(a1 + 656), a3: v91, a4: &v92, a5: v101, a6: v89, a7: v90, a8: (float *)&v96);
    }
  }
}