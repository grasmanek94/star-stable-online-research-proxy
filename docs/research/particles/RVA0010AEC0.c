// Read-only Hex-Rays export, client 645.348067.
__int64 __fastcall sub_14010AEC0(__int64 a1, __int64 a2, float *a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  float *v8; // rax
  float v9; // xmm0_4
  float v10; // xmm2_4
  float v11; // xmm0_4
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF

  v6 = sub_1400B5440(a1, a2);
  sub_1400CC650(a1, a2: v13, a3: v6);
  v9 = a3[81] - v8[1];
  v10 = (float)((float)((float)(a3[80] - *v8) * (float)(a3[80] - *v8)) + (float)(v9 * v9))
      + (float)((float)(a3[82] - v8[2]) * (float)(a3[82] - v8[2]));
  if ( v10 < 0.0 )
    v11 = sub_140A00700(a1: v7);
  else
    v11 = fsqrt(v10);
  *(float *)(a1 + 1208) = v11;
  sub_14010AF80(a1, a2, a3);
  return sub_1400B3390(a1, a2, a3);
}