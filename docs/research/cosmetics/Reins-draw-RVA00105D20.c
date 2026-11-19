// Hex-Rays export, baseline 645.348067; descriptive analysis label.
void __fastcall sub_140105D20(int a1, __int64 *a2)
{
  __int64 v2; // r9
  __int64 v4; // r8
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  int v8; // r9d
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // r9d
  __int64 v15; // rax
  float *v16; // rax
  float v17; // xmm9_4
  float v18; // xmm6_4
  float v19; // xmm7_4
  float v20; // xmm3_4
  float v21; // xmm8_4
  float v22; // xmm5_4
  float v23; // xmm10_4
  float v24; // xmm2_4
  float v25; // xmm0_4
  float v26; // xmm11_4
  float v27; // xmm12_4
  float v28; // xmm10_4
  float v29; // xmm2_4
  float v30; // xmm0_4
  float v31; // xmm11_4
  float v32; // xmm12_4
  float v33; // xmm10_4
  __int64 v34; // [rsp+40h] [rbp-E8h] BYREF
  float v35; // [rsp+48h] [rbp-E0h]
  float v36[4]; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v37; // [rsp+60h] [rbp-C8h] BYREF
  int v38; // [rsp+68h] [rbp-C0h]

  v2 = *a2;
  v4 = a2[1];
  if ( *a2 != v4 )
  {
    v6 = 0;
    if ( (v4 - v2) >> 4 != 0 )
    {
      do
      {
        if ( v6 >= (v4 - v2) >> 4 )
          __fastfail(5u);
        v7 = sub_1405F8CF0(a1: v2 + 16 * v6);
        v9 = v7;
        if ( v7 == 0 )
        {
          if ( (unsigned __int8)sub_140059A00(a1: off_140EFEA80) != 0 )
            __debugbreak();
          sub_1409E7D98(a1: 999);
          __debugbreak();
        }
        v10 = *(_QWORD *)(v7 + 64);
        ++v6;
        v11 = *a2;
        v34 = *(_QWORD *)(v10 + 24);
        v35 = *(float *)(v10 + 32);
        v12 = (a2[1] - v11) >> 4;
        if ( v6 < v12 )
        {
          v13 = sub_1405F8CF0(a1: v11 + 16 * v6);
          if ( v13 == 0 )
          {
            if ( (unsigned __int8)sub_140059A00(a1: off_140EFEAB8) != 0 )
              __debugbreak();
            sub_1409E7D98(a1: 999);
            __debugbreak();
          }
          v15 = *(_QWORD *)(v13 + 64);
          v37 = *(_QWORD *)(v15 + 24);
          v38 = *(_DWORD *)(v15 + 32);
          sub_14069D860(
            a1,
            a2: (unsigned int)&v37,
            a3: (unsigned int)&v34,
            a4: v14,
            a5: (__int64)&unk_140EF3D90,
            a6: 1,
            a7: 0);
        }
        v16 = *(float **)(v9 + 64);
        v17 = v16[3];
        v18 = v16[5];
        v19 = v16[4];
        v20 = -v16[2];
        v21 = (float)((float)(v17 * 0.0) + (float)(v18 * 0.0)) - (float)(v19 * -1.0);
        v22 = (float)((float)(v18 * -1.0) + (float)(v19 * 0.0)) - (float)(v16[2] * 0.0);
        v23 = (float)((float)(v16[2] * -1.0) + (float)(v18 * 0.0)) - (float)(v17 * 0.0);
        v24 = (float)((float)(v20 * 0.0) - (float)(v17 * -1.0)) - (float)(v19 * 0.0);
        v25 = v16[2];
        v26 = (float)((float)((float)(v21 * v18) - (float)(v25 * v24)) - (float)(v22 * v19))
            - (float)((float)-v17 * v23);
        v27 = (float)((float)((float)(v22 * v18) - (float)(v24 * v17)) - (float)(v25 * v23))
            - (float)((float)-v19 * v21);
        v28 = (float)((float)((float)(v23 * v18) - (float)(v24 * v19)) - (float)(v21 * v17)) - (float)(v20 * v22);
        v29 = (float)((float)(v27 * v27) + (float)(v26 * v26)) + (float)(v28 * v28);
        if ( v29 < 0.0 )
          v30 = sub_140A00700(a1: v12);
        else
          v30 = fsqrt(v29);
        if ( v30 >= 1.0e14 || v30 <= 0.0 )
        {
          v31 = 0.0;
          v32 = 0.0;
          v33 = 0.0;
        }
        else
        {
          v31 = v26 * (float)(1.0 / v30);
          v32 = v27 * (float)(1.0 / v30);
          v33 = v28 * (float)(1.0 / v30);
        }
        v36[0] = *(float *)&v34 + (float)(v31 * 0.30000001);
        v36[1] = *((float *)&v34 + 1) + (float)(v32 * 0.30000001);
        v36[2] = v35 + (float)(v33 * 0.30000001);
        sub_14069D860(
          a1,
          a2: (unsigned int)&v34,
          a3: (unsigned int)v36,
          a4: v8,
          a5: (__int64)&xmmword_140EF3D80,
          a6: 1,
          a7: 0);
        v4 = a2[1];
        v2 = *a2;
      }
      while ( v6 < (v4 - *a2) >> 4 );
    }
  }
}