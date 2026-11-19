// Hex-Rays export, baseline 645.348067; descriptive analysis label.
__int64 __fastcall sub_1402427F0(__int64 a1, float *a2)
{
  float *v2; // r15
  float v4; // xmm11_4
  float v5; // xmm7_4
  float v6; // xmm12_4
  float v7; // xmm8_4
  float v8; // xmm9_4
  float v9; // xmm10_4
  int v10; // r9d
  float v11; // xmm0_4
  int v12; // ecx
  float v13; // xmm6_4
  float v14; // xmm7_4
  unsigned int v15; // edi
  float v16; // xmm11_4
  float v17; // xmm12_4
  float v18; // xmm8_4
  float v19; // xmm7_4
  __int64 v20; // rax
  float v21; // xmm1_4
  float v22; // xmm2_4
  __int64 v23; // rax
  float v24; // xmm2_4
  float v25; // xmm3_4
  float v26; // xmm0_4
  float v27; // xmm6_4
  float v28; // xmm9_4
  __int64 result; // rax
  int v30; // r9d
  __int64 v31; // r12
  unsigned int v32; // r13d
  int v33; // ecx
  unsigned int v34; // edx
  unsigned int v35; // ebp
  float v36; // xmm9_4
  __int64 v37; // rsi
  float v38; // xmm1_4
  int v39; // edx
  int v40; // edx
  unsigned int v41; // eax
  __int64 v42; // rdx
  int v43; // r13d
  __int64 v44; // r12
  float v45; // xmm6_4
  int v46; // eax
  float v47; // xmm0_4
  float v48; // xmm1_4
  float v49; // xmm7_4
  float v50; // xmm4_4
  float v51; // xmm0_4
  float v52; // xmm5_4
  float v53; // xmm2_4
  float v54; // xmm3_4
  float v55; // xmm1_4
  __int64 v56; // rax
  __int64 v57; // rax
  float v58; // xmm4_4
  float v59; // xmm3_4
  __int64 v60; // rax
  float v61; // xmm2_4
  float v62; // xmm1_4
  char **v63; // rcx
  __int64 v64; // [rsp+80h] [rbp-118h]
  float v65; // [rsp+88h] [rbp-110h] BYREF
  float v66; // [rsp+8Ch] [rbp-10Ch]
  float v67; // [rsp+90h] [rbp-108h]
  float v68[48]; // [rsp+98h] [rbp-100h] BYREF
  unsigned int v69; // [rsp+1A0h] [rbp+8h]
  int v70; // [rsp+1A8h] [rbp+10h]
  unsigned int v71; // [rsp+1B0h] [rbp+18h]
  __int64 v72; // [rsp+1B8h] [rbp+20h]

  v70 = (int)a2;
  v2 = a2;
  sub_1406A3E50(a1: a2, a2: v68);
  sub_1406A3E70(a1: v2, a2: &v65);
  v4 = v2[80];
  v5 = v2[81];
  v6 = v2[82];
  v7 = v68[0] * 8.0;
  v8 = v68[1] * 8.0;
  v9 = v68[2] * 8.0;
  v11 = sub_1400B4560(a1);
  v12 = *(_DWORD *)(a1 + 232);
  if ( 3 * v12 != 0 )
  {
    v13 = v11 * *(float *)(a1 + 248);
    v14 = v5 + v8;
    v15 = 0;
    v16 = v4 + v7;
    v17 = v6 + v9;
    v18 = v14 + 2.0;
    v19 = v14 - 1.0;
    do
    {
      *(float *)(*(_QWORD *)(a1 + 224) + 24LL * v15 + 4) = *(float *)(*(_QWORD *)(a1 + 224) + 24LL * v15 + 4) - v13;
      *(float *)(*(_QWORD *)(a1 + 224) + 24LL * (v15 + 1) + 4) = *(float *)(*(_QWORD *)(a1 + 224) + 24LL * (v15 + 1) + 4)
                                                               - v13;
      *(float *)(*(_QWORD *)(a1 + 224) + 24LL * (v15 + 2) + 4) = *(float *)(*(_QWORD *)(a1 + 224) + 24LL * (v15 + 2) + 4)
                                                               - v13;
      if ( v19 > *(float *)(*(_QWORD *)(a1 + 224) + 24LL * v15 + 4) )
      {
        *(float *)(*(_QWORD *)(a1 + 224) + 24LL * v15 + 4) = (float)((float)((float)(int)sub_1409E7DA4() / 16383.0) - 1.0)
                                                           + v18;
        *(float *)(*(_QWORD *)(a1 + 224) + 24LL * v15) = (float)((float)((float)((float)(int)sub_1409E7DA4() / 16383.0)
                                                                       - 1.0)
                                                               * 6.0)
                                                       + v16;
        *(float *)(*(_QWORD *)(a1 + 224) + 24LL * v15 + 8) = (float)((float)((float)((float)(int)sub_1409E7DA4()
                                                                                   / 16383.0)
                                                                           - 1.0)
                                                                   * 6.0)
                                                           + v17;
        v20 = *(_QWORD *)(a1 + 224);
        v21 = (float)(v67 * 0.039999999) + *(float *)(v20 + 24LL * v15 + 8);
        v22 = (float)(v66 * 0.039999999) + *(float *)(v20 + 24LL * v15 + 4);
        *(float *)(v20 + 24LL * (v15 + 1)) = (float)(v65 * 0.039999999) + *(float *)(v20 + 24LL * v15);
        *(float *)(v20 + 24LL * (v15 + 1) + 4) = v22;
        *(float *)(v20 + 24LL * (v15 + 1) + 8) = v21;
        *(float *)(*(_QWORD *)(a1 + 224) + 24LL * (v15 + 1) + 4) = *(float *)(*(_QWORD *)(a1 + 224)
                                                                            + 24LL * (v15 + 1)
                                                                            + 4)
                                                                 - 1.2;
        v23 = *(_QWORD *)(a1 + 224);
        v24 = *(float *)(v23 + 24LL * v15 + 8) - (float)(v67 * 0.039999999);
        v25 = *(float *)(v23 + 24LL * v15 + 4) - (float)(v66 * 0.039999999);
        *(float *)(v23 + 24LL * (v15 + 2)) = *(float *)(v23 + 24LL * v15) - (float)(v65 * 0.039999999);
        *(float *)(v23 + 24LL * (v15 + 2) + 4) = v25;
        *(float *)(v23 + 24LL * (v15 + 2) + 8) = v24;
        *(float *)(*(_QWORD *)(a1 + 224) + 24LL * (v15 + 2) + 4) = *(float *)(*(_QWORD *)(a1 + 224)
                                                                            + 24LL * (v15 + 2)
                                                                            + 4)
                                                                 - 1.6;
        *(_DWORD *)(*(_QWORD *)(a1 + 224) + 24LL * v15 + 12) = 872415231;
        *(_DWORD *)(*(_QWORD *)(a1 + 224) + 24LL * (v15 + 1) + 12) = 872415231;
        *(_DWORD *)(*(_QWORD *)(a1 + 224) + 24LL * (v15 + 2) + 12) = 872415231;
        *(_DWORD *)(*(_QWORD *)(a1 + 224) + 24LL * v15 + 16) = 1056964608;
        *(_DWORD *)(*(_QWORD *)(a1 + 224) + 24LL * v15 + 20) = 0;
        *(_DWORD *)(*(_QWORD *)(a1 + 224) + 24LL * (v15 + 1) + 16) = 1065353216;
        *(_DWORD *)(*(_QWORD *)(a1 + 224) + 24LL * (v15 + 1) + 20) = 1065353216;
        *(_DWORD *)(*(_QWORD *)(a1 + 224) + 24LL * (v15 + 2) + 16) = 0;
        *(_DWORD *)(*(_QWORD *)(a1 + 224) + 24LL * (v15 + 2) + 20) = 1065353216;
      }
      v12 = *(_DWORD *)(a1 + 232);
      v15 += 3;
    }
    while ( v15 < 3 * v12 );
  }
  LOBYTE(v10) = 4;
  sub_14069C5F0(
    a1: (_DWORD)v2,
    a2: *(_QWORD *)(a1 + 224),
    a3: 322,
    a4: v10,
    a5: v12,
    a6: (__int64)byte_1412FF640,
    a7: *(_QWORD *)(a1 + 176),
    a8: 0,
    a9: 0,
    a10: 1065353216,
    a11: 0,
    a12: 0,
    a13: -1,
    a14: 1,
    a15: 0);
  v26 = sub_1400B4560(a1);
  v27 = *(float *)(a1 + 248);
  v28 = v26;
  result = sub_1405F8CF0(a1: a1 + 152);
  v64 = result;
  v31 = result;
  if ( result == 0 )
    return result;
  v32 = *(_DWORD *)(result + 220);
  v71 = v32;
  if ( v32 == 0 )
    return result;
  v33 = *(_DWORD *)(a1 + 312);
  v34 = 0;
  v35 = 0;
  v72 = *(_QWORD *)(result + 232);
  v69 = 0;
  v36 = (float)(v28 * v27) * 0.30000001;
  if ( 3 * v33 == 0 )
    goto LABEL_27;
  while ( 1 )
  {
    v37 = v34;
    *(float *)(*(_QWORD *)(a1 + 240) + 4LL * v34) = *(float *)(*(_QWORD *)(a1 + 240) + 4LL * v34) - v36;
    v38 = *(float *)(*(_QWORD *)(a1 + 240) + 4LL * v34);
    if ( v38 < 1.0 )
    {
      if ( v38 > 0.0 )
        v39 = (int)(float)((float)(v38 * 255.0) + 0.5);
      else
        v39 = 0;
    }
    else
    {
      v39 = 255;
    }
    v40 = (v39 << 24) | 0xFFFFFF;
    *(_DWORD *)(*(_QWORD *)(a1 + 304) + 24LL * v35 + 12) = v40;
    *(_DWORD *)(*(_QWORD *)(a1 + 304) + 24LL * (v35 + 1) + 12) = v40;
    *(_DWORD *)(*(_QWORD *)(a1 + 304) + 24LL * (v35 + 2) + 12) = v40;
    if ( *(float *)(*(_QWORD *)(a1 + 240) + 4 * v37) > 0.0 )
      goto LABEL_22;
    v41 = sub_1409E7DA4();
    if ( v72 == 0 )
    {
      v63 = off_140F1AB50;
      goto LABEL_31;
    }
    v42 = v41 % v32;
    v43 = v42;
    if ( *(float *)(v72 + 12 * v42 + 4) >= 0.60000002 )
    {
      v44 = *(_QWORD *)(v31 + 224);
      if ( v44 != 0 )
      {
        v45 = (float)(int)sub_1409E7DA4() / 32767.0;
        v46 = sub_1409E7DA4();
        v47 = *(float *)(v44 + 12LL * (unsigned int)(3 * v43));
        v48 = *(float *)(v44 + 12LL * (unsigned int)(3 * v43) + 4);
        v49 = (float)v46 / 32767.0;
        v50 = (float)((float)(*(float *)(v44 + 12LL * (unsigned int)(3 * v43) + 12) - v47) * v45) + v47;
        v51 = *(float *)(v44 + 12LL * (unsigned int)(3 * v43) + 8);
        v52 = (float)((float)(*(float *)(v44 + 12LL * (unsigned int)(3 * v43) + 16) - v48) * v45) + v48;
        v53 = (float)((float)(*(float *)(v44 + 12LL * (unsigned int)(3 * v43) + 20) - v51) * v45) + v51;
        v54 = (float)((float)(*(float *)(v44 + 12LL * (unsigned int)(3 * v43) + 24) - v50) * v49) + v50;
        v55 = (float)((float)(*(float *)(v44 + 12LL * (unsigned int)(3 * v43) + 32) - v53) * v49) + v53;
        *(float *)(*(_QWORD *)(a1 + 304) + 24LL * v35 + 4) = (float)((float)(*(float *)(v44
                                                                                      + 12LL * (unsigned int)(3 * v43)
                                                                                      + 28)
                                                                           - v52)
                                                                   * v49)
                                                           + v52;
        *(float *)(*(_QWORD *)(a1 + 304) + 24LL * v35) = v54;
        *(float *)(*(_QWORD *)(a1 + 304) + 24LL * v35 + 8) = v55;
        if ( *(_BYTE *)(a1 + 524) != 0 )
        {
          v56 = *(_QWORD *)(a1 + 304);
          if ( *(float *)(v56 + 24LL * v35 + 4) < 20.0 )
            *(_DWORD *)(v56 + 24LL * v35 + 4) = 1101004800;
        }
        v57 = *(_QWORD *)(a1 + 304);
        v31 = v64;
        v58 = *(float *)(v57 + 24LL * v35 + 4) - (float)(v66 * 0.2);
        v59 = *(float *)(v57 + 24LL * v35 + 8) - (float)(v67 * 0.2);
        *(float *)(v57 + 24LL * (v35 + 1)) = *(float *)(v57 + 24LL * v35) - (float)(v65 * 0.2);
        *(float *)(v57 + 24LL * (v35 + 1) + 4) = v58;
        *(float *)(v57 + 24LL * (v35 + 1) + 8) = v59;
        *(float *)(*(_QWORD *)(a1 + 304) + 24LL * (v35 + 1) + 4) = *(float *)(*(_QWORD *)(a1 + 304)
                                                                            + 24LL * (v35 + 1)
                                                                            + 4)
                                                                 + 0.2;
        v60 = *(_QWORD *)(a1 + 304);
        v61 = (float)(v66 * 0.2) + *(float *)(v60 + 24LL * v35 + 4);
        v62 = (float)(v67 * 0.2) + *(float *)(v60 + 24LL * v35 + 8);
        *(float *)(v60 + 24LL * (v35 + 2)) = (float)(v65 * 0.2) + *(float *)(v60 + 24LL * v35);
        *(float *)(v60 + 24LL * (v35 + 2) + 4) = v61;
        *(float *)(v60 + 24LL * (v35 + 2) + 8) = v62;
        *(float *)(*(_QWORD *)(a1 + 304) + 24LL * (v35 + 2) + 4) = *(float *)(*(_QWORD *)(a1 + 304)
                                                                            + 24LL * (v35 + 2)
                                                                            + 4)
                                                                 + 0.2;
        *(_DWORD *)(*(_QWORD *)(a1 + 304) + 24LL * v35 + 16) = 1060320051;
        *(_DWORD *)(*(_QWORD *)(a1 + 304) + 24LL * v35 + 20) = 1065353216;
        *(_DWORD *)(*(_QWORD *)(a1 + 304) + 24LL * (v35 + 1) + 16) = 0;
        *(_DWORD *)(*(_QWORD *)(a1 + 304) + 24LL * (v35 + 1) + 20) = 0;
        *(_DWORD *)(*(_QWORD *)(a1 + 304) + 24LL * (v35 + 2) + 16) = 1065353216;
        *(_DWORD *)(*(_QWORD *)(a1 + 304) + 24LL * (v35 + 2) + 20) = 0;
        *(_DWORD *)(*(_QWORD *)(a1 + 240) + 4 * v37) = 1056964608;
LABEL_22:
        v34 = ++v69;
        goto LABEL_24;
      }
      v63 = off_140F1AC30;
LABEL_31:
      if ( (unsigned __int8)sub_140059A00(a1: v63) != 0 )
        __debugbreak();
      sub_1409E7D98(a1: 999);
      __debugbreak();
    }
    v34 = v69;
LABEL_24:
    v33 = *(_DWORD *)(a1 + 312);
    v35 += 3;
    if ( v35 >= 3 * v33 )
      break;
    v32 = v71;
  }
  LODWORD(v2) = v70;
LABEL_27:
  LOBYTE(v30) = 4;
  return sub_14069C5F0(
           a1: (_DWORD)v2,
           a2: *(_QWORD *)(a1 + 304),
           a3: 322,
           a4: v30,
           a5: v33,
           a6: (__int64)byte_1412FF640,
           a7: *(_QWORD *)(a1 + 256),
           a8: 0,
           a9: 0,
           a10: 1065353216,
           a11: 0,
           a12: 0,
           a13: -1,
           a14: 1,
           a15: 0);
}