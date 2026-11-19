// Hex-Rays export, baseline 645.348067; descriptive analysis label.
__int64 __fastcall sub_140243140(__int64 a1, float *a2)
{
  float *v2; // rbx
  float v4; // xmm15_4
  float v5; // xmm10_4
  float v6; // xmm6_4
  float v7; // xmm7_4
  float v8; // xmm8_4
  float v9; // xmm0_4
  float v10; // xmm12_4
  float v11; // xmm9_4
  float v12; // xmm14_4
  int v13; // r9d
  float v14; // xmm0_4
  __int64 v15; // rcx
  float v16; // xmm11_4
  float v17; // xmm15_4
  float v18; // xmm6_4
  __int64 v19; // rdx
  unsigned int v20; // esi
  float v21; // xmm10_4
  float v22; // xmm9_4
  __int64 v23; // r13
  __int64 v24; // rbx
  float v25; // xmm0_4
  __int64 v26; // rax
  __int64 v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  int v37; // eax
  float v38; // xmm1_4
  float v39; // xmm2_4
  float v40; // xmm3_4
  float v41; // xmm4_4
  float v42; // xmm7_4
  float v43; // xmm8_4
  double v44; // xmm0_8
  float v46; // [rsp+80h] [rbp-118h]
  float v47; // [rsp+88h] [rbp-110h] BYREF
  float v48; // [rsp+8Ch] [rbp-10Ch]
  float v49; // [rsp+90h] [rbp-108h]
  float v50[48]; // [rsp+98h] [rbp-100h] BYREF
  float v51; // [rsp+1A0h] [rbp+8h]
  float v52; // [rsp+1A0h] [rbp+8h]
  int v53; // [rsp+1A8h] [rbp+10h]
  int v54; // [rsp+1B0h] [rbp+18h]
  float v55; // [rsp+1B8h] [rbp+20h]

  v53 = (int)a2;
  v2 = a2;
  sub_1406A3E50(a1: a2, a2: v50);
  sub_1406A3E70(a1: v2, a2: &v47);
  v4 = v2[80];
  v5 = v2[81];
  v6 = v50[0] * 8.0;
  v7 = v50[1] * 8.0;
  v8 = v50[2] * 8.0;
  v51 = v2[82];
  v9 = sub_1400B4560(a1);
  v10 = *(float *)(a1 + 392);
  v11 = v9;
  v12 = *(float *)(a1 + 404);
  v55 = *(float *)(a1 + 396);
  v46 = *(float *)(a1 + 400);
  v14 = sub_1400B4560(a1);
  v15 = *(unsigned int *)(a1 + 376);
  v16 = v14;
  if ( 3 * (_DWORD)v15 != 0 )
  {
    v17 = v4 + v6;
    v18 = v51 + v8;
    v19 = 0;
    v20 = 0;
    v21 = (float)(v5 + v7) + v12;
    v22 = v11 * v10;
    v52 = v51 + v8;
    v54 = 0;
    do
    {
      v23 = *(_QWORD *)(a1 + 384);
      v24 = *(_QWORD *)(a1 + 368);
      v25 = *(float *)(v23 + 4LL * (unsigned int)v19) - v16;
      v26 = v20 + 2;
      v27 = 9 * v26;
      *(float *)(v23 + 4LL * (unsigned int)v19) = v25;
      if ( v25 >= 0.0 )
      {
        *(float *)(v24 + 36LL * v20 + 4) = *(float *)(v24 + 36LL * v20 + 4) - v22;
        *(float *)(v24 + 36LL * (v20 + 1) + 4) = *(float *)(v24 + 36LL * (v20 + 1) + 4) - v22;
        *(float *)(v24 + 36 * v26 + 4) = *(float *)(v24 + 36 * v26 + 4) - v22;
        v42 = *(float *)(v24 + 36LL * v20);
        v43 = sub_140A003B0(a1: v15) * v22;
        v44 = sub_1409FFE20();
        v18 = v52;
        *(float *)(v24 + 36LL * v20) = v42 + v43;
        *(float *)(v24 + 36LL * (v20 + 1)) = v43 + *(float *)(v24 + 36LL * (v20 + 1));
        *(float *)(v24 + 4 * v27) = v43 + *(float *)(v24 + 4 * v27);
        *(float *)(v24 + 36LL * v20 + 8) = (float)(*(float *)&v44 * v22) + *(float *)(v24 + 36LL * v20 + 8);
        *(float *)(v24 + 36LL * (v20 + 1) + 8) = (float)(*(float *)&v44 * v22) + *(float *)(v24 + 36LL * (v20 + 1) + 8);
        *(float *)(v24 + 4 * v27 + 8) = (float)(*(float *)&v44 * v22) + *(float *)(v24 + 4 * v27 + 8);
      }
      else
      {
        *(float *)(v23 + 4LL * (unsigned int)v19) = (float)((float)((float)(int)sub_1409E7DA4(a1: v15, a2: v19, a3: 0)
                                                                  / 16383.0)
                                                          - 1.0)
                                                  + v55;
        *(float *)(v24 + 36LL * v20 + 4) = (float)((float)((float)((float)((float)(int)sub_1409E7DA4(
                                                                                         a1: v29,
                                                                                         a2: v28,
                                                                                         a3: v30)
                                                                         / 16383.0)
                                                                 - 1.0)
                                                         * v46)
                                                 * 0.5)
                                         + v21;
        *(float *)(v24 + 36LL * v20) = (float)((float)((float)((float)(int)sub_1409E7DA4(a1: v32, a2: v31, a3: v33)
                                                             / 16383.0)
                                                     - 1.0)
                                             * v46)
                                     + v17;
        v37 = sub_1409E7DA4(a1: v35, a2: v34, a3: v36);
        *(float *)(v24 + 36LL * v20 + 8) = (float)((float)((float)((float)v37 / 16383.0) - 1.0) * v46) + v18;
        v38 = v49 * 0.02;
        v39 = (float)(v48 * 0.02) + *(float *)(v24 + 36LL * v20 + 4);
        *(float *)(v24 + 36LL * (v20 + 1)) = (float)(v47 * 0.02) + *(float *)(v24 + 36LL * v20);
        *(float *)(v24 + 36LL * (v20 + 1) + 8) = v38
                                               + (float)((float)((float)((float)((float)v37 / 16383.0) - 1.0) * v46)
                                                       + v18);
        *(float *)(v24 + 36LL * (v20 + 1) + 4) = v39 - 0.039999999;
        v40 = *(float *)(v24 + 36LL * v20 + 8) - (float)(v49 * 0.02);
        v41 = (float)(*(float *)(v24 + 36LL * v20 + 4) - (float)(v48 * 0.02)) - 0.039999999;
        *(float *)(v24 + 4 * v27) = *(float *)(v24 + 36LL * v20) - (float)(v47 * 0.02);
        *(float *)(v24 + 4 * v27 + 8) = v40;
        *(float *)(v24 + 4 * v27 + 4) = v41;
        *(_DWORD *)(v24 + 36LL * v20 + 24) = -2130706433;
        *(_DWORD *)(v24 + 36LL * (v20 + 1) + 24) = -2130706433;
        *(_DWORD *)(v24 + 4 * v27 + 24) = -2130706433;
        *(_QWORD *)(v24 + 36LL * v20 + 12) = 0x3F80000000000000LL;
        *(_DWORD *)(v24 + 36LL * v20 + 20) = 0;
        *(_QWORD *)(v24 + 36LL * (v20 + 1) + 12) = 0x3F80000000000000LL;
        *(_DWORD *)(v24 + 36LL * (v20 + 1) + 20) = 0;
        *(_QWORD *)(v24 + 4 * v27 + 12) = 0x3F80000000000000LL;
        *(_DWORD *)(v24 + 4 * v27 + 20) = 0;
        *(_QWORD *)(v24 + 36LL * v20 + 28) = 1056964608;
        *(_DWORD *)(v24 + 36LL * (v20 + 1) + 28) = 1065353216;
        *(_DWORD *)(v24 + 36LL * (v20 + 1) + 32) = 1065353216;
        *(_DWORD *)(v24 + 4 * v27 + 28) = 0;
        *(_DWORD *)(v24 + 4 * v27 + 32) = 1065353216;
      }
      v20 += 3;
      v15 = *(unsigned int *)(a1 + 376);
      v19 = (unsigned int)++v54;
    }
    while ( v20 < 3 * (int)v15 );
    LODWORD(v2) = v53;
  }
  LOBYTE(v13) = 4;
  return sub_14069C5F0(
           a1: (_DWORD)v2,
           a2: *(_QWORD *)(a1 + 368),
           a3: 338,
           a4: v13,
           a5: v15,
           a6: (__int64)byte_1412FF640,
           a7: *(_QWORD *)(a1 + 320),
           a8: 0,
           a9: 0,
           a10: 1065353216,
           a11: 0,
           a12: 0,
           a13: -1,
           a14: 1,
           a15: 0);
}