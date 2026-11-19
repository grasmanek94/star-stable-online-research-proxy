// Baseline 645.348067; IDA base 0x140000000.
float __fastcall sub_1400B3260(__int64 a1, float *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  float *v6; // rax
  float v7; // xmm0_4
  float v8; // xmm2_4
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = sub_1400B5440(a1, a2);
  sub_1400CC650(a1, a2: v10, a3: v4);
  v7 = v6[1] - a2[84];
  v8 = (float)((float)((float)(*v6 - a2[83]) * (float)(*v6 - a2[83])) + (float)(v7 * v7))
     + (float)((float)(v6[2] - a2[85]) * (float)(v6[2] - a2[85]));
  if ( v8 < 0.0 )
    return sub_140A00700(a1: v5);
  else
    return fsqrt(v8);
}
