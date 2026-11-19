// Read-only Hex-Rays export, client 645.348067.
char __fastcall sub_140136AF0(__int64 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **v3; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // esi
  __int64 v11; // rbx
  __int64 v12; // rax
  _QWORD *v13; // rcx
  unsigned int v14; // ecx
  __int64 v15; // r9
  float v16; // xmm9_4
  float *v17; // rbx
  double v18; // xmm0_8
  float v19; // xmm8_4
  unsigned int v20; // esi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r9
  float v25; // xmm15_4
  float v26; // xmm6_4
  float v27; // xmm7_4
  float v28; // xmm3_4
  float v29; // xmm2_4
  float v30; // xmm4_4
  float v31; // xmm1_4
  __int64 v32; // rcx
  int v33; // r8d
  int v34; // edx
  int v35; // eax
  int v36; // ecx
  __int64 v37; // rcx
  int v38; // r8d
  int v39; // edx
  int v40; // eax
  int v41; // ecx
  float *v42; // rax
  float v43; // xmm0_4
  float v44; // xmm8_4
  float v45; // xmm12_4
  float v46; // xmm10_4
  float v47; // xmm9_4
  float v48; // xmm8_4
  float v49; // xmm12_4
  float v50; // xmm10_4
  float v51; // xmm4_4
  __int64 v52; // rcx
  float v53; // xmm13_4
  float v54; // xmm15_4
  float v55; // xmm3_4
  float v56; // xmm2_4
  float v57; // xmm0_4
  float v58; // xmm7_4
  float v59; // xmm2_4
  float v60; // xmm6_4
  float v61; // xmm1_4
  float v62; // xmm0_4
  float v63; // xmm7_4
  float v64; // xmm13_4
  float v65; // xmm6_4
  float v66; // xmm2_4
  float v67; // xmm0_4
  float v68; // xmm7_4
  float v69; // xmm13_4
  float v70; // xmm2_4
  float v71; // xmm0_4
  float v72; // xmm10_4
  __int64 v73; // rcx
  float v74; // xmm4_4
  int v75; // r9d
  int v76; // r8d
  int v77; // eax
  int v78; // ecx
  float v79; // xmm0_4
  float v80; // xmm2_4
  float v81; // xmm1_4
  __int64 v82; // rax
  float v83; // xmm3_4
  float v84; // xmm2_4
  __int64 v85; // rax
  int v86; // r9d
  int v87; // r8d
  int v88; // eax
  int v89; // ecx
  float v90; // xmm2_4
  float v91; // xmm3_4
  int v92; // r8d
  int v93; // edx
  int v94; // eax
  int v95; // ecx
  float v97; // [rsp+80h] [rbp-E8h]
  float v98; // [rsp+84h] [rbp-E4h]
  float v99; // [rsp+88h] [rbp-E0h]
  __int64 v100; // [rsp+90h] [rbp-D8h] BYREF
  float v101; // [rsp+98h] [rbp-D0h]
  _UNKNOWN *retaddr; // [rsp+168h] [rbp+0h] BYREF
  float v103; // [rsp+170h] [rbp+8h]
  float v104; // [rsp+188h] [rbp+20h]

  v3 = &retaddr;
  if ( (*(_BYTE *)(a1 + 144) & 0x40) == 0 )
    return (char)v3;
  LOBYTE(v3) = sub_1400CF220(a1);
  if ( (_BYTE)v3 == 0 )
    goto LABEL_172;
  if ( *(_QWORD *)(a1 + 264) == 0 )
  {
    LODWORD(v3) = *(_DWORD *)(a1 + 200);
    if ( (_DWORD)v3 != 0 )
    {
      v7 = (unsigned int)v3;
      v8 = sub_1409E12E0(a1: saturated_mul((unsigned int)v3, 0x50u));
      if ( v8 != 0 )
      {
        v9 = v8;
        do
        {
          *(_QWORD *)v9 = 0;
          *(_QWORD *)(v9 + 8) = 0;
          *(_QWORD *)(v9 + 16) = 0;
          *(_QWORD *)(v9 + 24) = 0;
          *(_QWORD *)(v9 + 32) = 0;
          *(_QWORD *)(v9 + 40) = 0;
          *(_QWORD *)(v9 + 48) = 0;
          *(_QWORD *)(v9 + 56) = 0;
          *(_QWORD *)(v9 + 64) = 0;
          *(_DWORD *)(v9 + 72) = 0;
          v9 += 80;
          --v7;
        }
        while ( v7 != 0 );
      }
      else
      {
        v8 = 0;
      }
      *(_QWORD *)(a1 + 264) = v8;
      v10 = 2 * *(_DWORD *)(a1 + 200) + 2;
      v11 = v10;
      v12 = sub_1409E12E0(a1: saturated_mul(v10, 0x18u));
      if ( v12 != 0 )
      {
        v13 = (_QWORD *)v12;
        if ( v10 != 0 )
        {
          do
          {
            *v13 = 0;
            v13[1] = 0;
            v13[2] = 0;
            v13 += 3;
            --v11;
          }
          while ( v11 != 0 );
        }
      }
      else
      {
        v12 = 0;
      }
      *(_QWORD *)(a1 + 256) = v12;
      v3 = *(_UNKNOWN ***)(a1 + 264);
      *(_QWORD *)(a1 + 280) = v3;
      v14 = 0;
      if ( *(_DWORD *)(a1 + 200) != 1 )
      {
        do
        {
          v15 = v14 + 1;
          *(_QWORD *)(*(_QWORD *)(a1 + 264) + 80LL * v14++) = *(_QWORD *)(a1 + 264) + 80 * v15;
          LODWORD(v3) = *(_DWORD *)(a1 + 200) - 1;
        }
        while ( (unsigned int)v15 < (unsigned int)v3 );
      }
      *(_QWORD *)(a1 + 272) = 0;
    }
  }
  if ( *(_QWORD *)(a1 + 152) == 0 )
    return (char)v3;
  v16 = sub_1400B4560(a1);
  v104 = v16;
  *(float *)(a1 + 252) = v16 + *(float *)(a1 + 252);
  sub_1401364D0(a1);
  *(_DWORD *)(a1 + 252) = 0;
  v17 = *(float **)(a1 + 272);
  if ( v17 == nullptr )
    goto LABEL_172;
  v18 = (*(double (__fastcall **)(__int64))(*(_QWORD *)a1 + 720LL))(a1);
  v19 = *(float *)&v18;
  v99 = *(float *)&v18;
  v20 = 0;
  v23 = sub_1400B5440(a1: v22, a2: v21);
  sub_1400CC650(a1, a2: &v100, a3: v23);
  v25 = 0.0;
  v26 = 1.0;
  v27 = 0.0;
  v103 = 0.0;
  if ( *(_BYTE *)(a1 + 300) != 3 )
  {
    v28 = *(float *)(a1 + 220);
    v29 = *(float *)(a1 + 224);
    v30 = *(float *)(a1 + 228);
    v31 = v19 * *(float *)(a1 + 232);
    v32 = *(_QWORD *)(a1 + 256);
    *(_QWORD *)v32 = v100;
    *(float *)(v32 + 8) = v101;
    *(_DWORD *)(*(_QWORD *)(a1 + 256) + 16LL) = 0;
    *(_DWORD *)(*(_QWORD *)(a1 + 256) + 20LL) = 1065353216;
    if ( v28 < 1.0 )
    {
      if ( v28 > 0.0 )
        v33 = (int)(float)((float)(v28 * 255.0) + 0.5);
      else
        v33 = 0;
    }
    else
    {
      v33 = 255;
    }
    if ( v29 < 1.0 )
    {
      if ( v29 > 0.0 )
        v34 = (int)(float)((float)(v29 * 255.0) + 0.5);
      else
        v34 = 0;
    }
    else
    {
      v34 = 255;
    }
    if ( v30 < 1.0 )
    {
      if ( v30 > 0.0 )
        v35 = (int)(float)((float)(v30 * 255.0) + 0.5);
      else
        v35 = 0;
    }
    else
    {
      v35 = 255;
    }
    if ( v31 < 1.0 )
    {
      if ( v31 > 0.0 )
        v36 = (int)(float)((float)(v31 * 255.0) + 0.5);
      else
        v36 = 0;
    }
    else
    {
      v36 = 255;
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 256) + 12LL) = v35 | ((v34 | ((v33 | (v36 << 8)) << 8)) << 8);
    v37 = *(_QWORD *)(a1 + 256);
    *(_QWORD *)(v37 + 24) = v100;
    *(float *)(v37 + 32) = v101;
    *(_DWORD *)(*(_QWORD *)(a1 + 256) + 40LL) = 0;
    *(_DWORD *)(*(_QWORD *)(a1 + 256) + 44LL) = 0;
    if ( v28 < 1.0 )
    {
      if ( v28 > 0.0 )
        v38 = (int)(float)((float)(v28 * 255.0) + 0.5);
      else
        v38 = 0;
    }
    else
    {
      v38 = 255;
    }
    if ( v29 < 1.0 )
    {
      if ( v29 > 0.0 )
        v39 = (int)(float)((float)(v29 * 255.0) + 0.5);
      else
        v39 = 0;
    }
    else
    {
      v39 = 255;
    }
    if ( v30 < 1.0 )
    {
      if ( v30 > 0.0 )
        v40 = (int)(float)((float)(v30 * 255.0) + 0.5);
      else
        v40 = 0;
    }
    else
    {
      v40 = 255;
    }
    if ( v31 < 1.0 )
    {
      if ( v31 > 0.0 )
        v41 = (int)(float)((float)(v31 * 255.0) + 0.5);
      else
        v41 = 0;
    }
    else
    {
      v41 = 255;
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 256) + 36LL) = v40 | ((v39 | ((v38 | (v41 << 8)) << 8)) << 8);
    v20 = 2;
  }
  v42 = nullptr;
  while ( 1 )
  {
    v43 = v16 + v17[8];
    v17[8] = v43;
    if ( v43 > *(float *)(a1 + 208) )
      break;
    v44 = v16 * v17[14];
    v45 = v16 * v17[15];
    v46 = v16 * v17[16];
    v47 = (float)(v16 * v17[13]) + v17[9];
    v17[9] = v47;
    v48 = v44 + v17[10];
    v17[10] = v48;
    v49 = v45 + v17[11];
    v17[11] = v49;
    v50 = v46 + v17[12];
    v17[12] = v50;
    v51 = (float)(v104 * v17[18]) + v17[17];
    v98 = v51;
    v17[17] = v51;
    if ( v42 == nullptr )
    {
      v52 = *(unsigned __int8 *)(a1 + 300);
      if ( *(_BYTE *)(a1 + 300) != 0 )
      {
        v52 = (unsigned int)(v52 - 1);
        if ( (_DWORD)v52 != 0 )
        {
          v52 = (unsigned int)(v52 - 1);
          if ( (_DWORD)v52 != 0 )
          {
            if ( (_DWORD)v52 == 1 )
            {
              v25 = v17[5];
              v26 = v17[6];
              v27 = v17[7];
            }
            goto LABEL_89;
          }
          v53 = *(float *)&v100 - v17[2];
          v54 = *((float *)&v100 + 1) - v17[3];
          v97 = v101 - v17[4];
          v55 = v97;
          v56 = (float)((float)(v53 * v53) + (float)(v54 * v54)) + (float)(v55 * v55);
          if ( v56 < 0.0 )
          {
            v57 = sub_140A00700(a1: v52);
            v55 = v97;
          }
          else
          {
            v57 = fsqrt(v56);
          }
          if ( v57 >= 1.0e14 || v57 <= 0.0 )
          {
            v58 = 0.0;
            v59 = 0.0;
            v60 = 0.0;
          }
          else
          {
            v58 = (float)(1.0 / v57) * v53;
            v59 = (float)(1.0 / v57) * v54;
            v60 = (float)(1.0 / v57) * v55;
          }
          v25 = (float)(v59 * 0.0) - (float)(v60 * 1.0);
          v61 = v58;
          v62 = 0.0;
          v27 = (float)(v58 * 1.0) - (float)(v59 * 0.0);
LABEL_88:
          v26 = (float)(v60 * v62) - (float)(v61 * 0.0);
        }
        else
        {
          v25 = *(float *)&v100 - v17[2];
          v26 = *((float *)&v100 + 1) - v17[3];
          v27 = v101 - v17[4];
        }
LABEL_89:
        v70 = (float)((float)(v26 * v26) + (float)(v25 * v25)) + (float)(v27 * v27);
        if ( v70 < 0.0 )
          v71 = sub_140A00700(a1: v52);
        else
          v71 = fsqrt(v70);
        if ( v71 >= 1.0e14 || v71 <= 0.0 )
        {
          v25 = 0.0;
          v26 = 0.0;
          v27 = 0.0;
        }
        else
        {
          v25 = v25 * (float)(1.0 / v71);
          v26 = v26 * (float)(1.0 / v71);
          v27 = v27 * (float)(1.0 / v71);
        }
        v51 = v98;
        goto LABEL_97;
      }
      v63 = *(float *)&v100 - v17[2];
      v64 = *((float *)&v100 + 1) - v17[3];
      v65 = v101 - v17[4];
      v66 = (float)((float)(v63 * v63) + (float)(v64 * v64)) + (float)(v65 * v65);
      if ( v66 < 0.0 )
        v67 = sub_140A00700(a1: v52);
      else
        v67 = fsqrt(v66);
      if ( v67 >= 1.0e14 || v67 <= 0.0 )
      {
        v68 = 0.0;
        v69 = 0.0;
        v60 = 0.0;
      }
      else
      {
        v68 = v63 * (float)(1.0 / v67);
        v69 = v64 * (float)(1.0 / v67);
        v60 = v65 * (float)(1.0 / v67);
      }
      v25 = (float)(v69 * 0.0) - (float)(v60 * 0.0);
      v61 = v68;
      v62 = 1.0;
      v27 = (float)(v68 * 0.0) - (float)(v69 * 1.0);
      goto LABEL_88;
    }
    v25 = v17[5];
    v26 = v17[6];
    v27 = v17[7];
LABEL_97:
    if ( *(_QWORD *)v17 != 0 )
    {
      v72 = v50 * v99;
    }
    else
    {
      v47 = 0.0;
      v48 = 0.0;
      v49 = 0.0;
      v72 = 0.0;
    }
    if ( *(_BYTE *)(a1 + 300) == 3 )
    {
      v73 = *(_QWORD *)(a1 + 256);
      *(_QWORD *)(v73 + 24LL * v20) = *((_QWORD *)v17 + 1);
      *(float *)(v73 + 24LL * v20 + 8) = v17[4];
      v74 = v103;
      *(float *)(*(_QWORD *)(a1 + 256) + 24LL * v20 + 16) = v103;
      *(_DWORD *)(*(_QWORD *)(a1 + 256) + 24LL * v20 + 20) = 1065353216;
      if ( v47 < 1.0 )
      {
        if ( v47 > 0.0 )
          v75 = (int)(float)((float)(v47 * 255.0) + 0.5);
        else
          v75 = 0;
      }
      else
      {
        v75 = 255;
      }
      if ( v48 < 1.0 )
      {
        if ( v48 > 0.0 )
          v76 = (int)(float)((float)(v48 * 255.0) + 0.5);
        else
          v76 = 0;
      }
      else
      {
        v76 = 255;
      }
      if ( v49 < 1.0 )
      {
        if ( v49 > 0.0 )
          v77 = (int)(float)((float)(v49 * 255.0) + 0.5);
        else
          v77 = 0;
      }
      else
      {
        v77 = 255;
      }
      if ( v72 < 1.0 )
      {
        if ( v72 > 0.0 )
          v78 = (int)(float)((float)(v72 * 255.0) + 0.5);
        else
          v78 = 0;
      }
      else
      {
        v78 = 255;
      }
      *(_DWORD *)(*(_QWORD *)(a1 + 256) + 24LL * v20 + 12) = v77 | ((v76 | ((v75 | (v78 << 8)) << 8)) << 8);
      v79 = v17[17];
      v80 = (float)((float)(v26 * v79) + (float)(v26 * v79)) + v17[3];
      v81 = (float)((float)(v27 * v79) + (float)(v27 * v79)) + v17[4];
      v24 = 3LL * (v20 + 1);
      v82 = *(_QWORD *)(a1 + 256);
      *(float *)(v82 + 8 * v24) = (float)((float)(v25 * v79) + (float)(v25 * v79)) + v17[2];
      *(float *)(v82 + 8 * v24 + 4) = v80;
    }
    else
    {
      v83 = v17[3] - (float)(v26 * v51);
      v84 = v17[4] - (float)(v27 * v51);
      v85 = *(_QWORD *)(a1 + 256);
      *(float *)(v85 + 24LL * v20) = v17[2] - (float)(v25 * v51);
      *(float *)(v85 + 24LL * v20 + 4) = v83;
      *(float *)(v85 + 24LL * v20 + 8) = v84;
      v74 = v103;
      *(float *)(*(_QWORD *)(a1 + 256) + 24LL * v20 + 16) = v103;
      *(_DWORD *)(*(_QWORD *)(a1 + 256) + 24LL * v20 + 20) = 1065353216;
      if ( v47 < 1.0 )
      {
        if ( v47 > 0.0 )
          v86 = (int)(float)((float)(v47 * 255.0) + 0.5);
        else
          v86 = 0;
      }
      else
      {
        v86 = 255;
      }
      if ( v48 < 1.0 )
      {
        if ( v48 > 0.0 )
          v87 = (int)(float)((float)(v48 * 255.0) + 0.5);
        else
          v87 = 0;
      }
      else
      {
        v87 = 255;
      }
      if ( v49 < 1.0 )
      {
        if ( v49 > 0.0 )
          v88 = (int)(float)((float)(v49 * 255.0) + 0.5);
        else
          v88 = 0;
      }
      else
      {
        v88 = 255;
      }
      if ( v72 < 1.0 )
      {
        if ( v72 > 0.0 )
          v89 = (int)(float)((float)(v72 * 255.0) + 0.5);
        else
          v89 = 0;
      }
      else
      {
        v89 = 255;
      }
      *(_DWORD *)(*(_QWORD *)(a1 + 256) + 24LL * v20 + 12) = v88 | ((v87 | ((v86 | (v89 << 8)) << 8)) << 8);
      v90 = v17[17];
      v91 = (float)(v26 * v90) + v17[3];
      v81 = (float)(v27 * v90) + v17[4];
      v24 = 3LL * (v20 + 1);
      v82 = *(_QWORD *)(a1 + 256);
      *(float *)(v82 + 8 * v24) = (float)(v25 * v90) + v17[2];
      *(float *)(v82 + 8 * v24 + 4) = v91;
    }
    *(float *)(v82 + 8 * v24 + 8) = v81;
    *(float *)(*(_QWORD *)(a1 + 256) + 8 * v24 + 16) = v74;
    *(_DWORD *)(*(_QWORD *)(a1 + 256) + 8 * v24 + 20) = 0;
    if ( v47 < 1.0 )
    {
      if ( v47 > 0.0 )
        v92 = (int)(float)((float)(v47 * 255.0) + 0.5);
      else
        v92 = 0;
    }
    else
    {
      v92 = 255;
    }
    if ( v48 < 1.0 )
    {
      if ( v48 > 0.0 )
        v93 = (int)(float)((float)(v48 * 255.0) + 0.5);
      else
        v93 = 0;
    }
    else
    {
      v93 = 255;
    }
    if ( v49 < 1.0 )
    {
      if ( v49 > 0.0 )
        v94 = (int)(float)((float)(v49 * 255.0) + 0.5);
      else
        v94 = 0;
    }
    else
    {
      v94 = 255;
    }
    if ( v72 < 1.0 )
    {
      if ( v72 > 0.0 )
        v95 = (int)(float)((float)(v72 * 255.0) + 0.5);
      else
        v95 = 0;
    }
    else
    {
      v95 = 255;
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 256) + 8 * v24 + 12) = v94 | ((v93 | ((v92 | (v95 << 8)) << 8)) << 8);
    v20 += 2;
    v103 = v74 + 1.0;
    v42 = v17;
    v17 = *(float **)v17;
    v16 = v104;
    if ( v17 == nullptr )
      goto LABEL_170;
  }
  if ( v17 == *(float **)(a1 + 272) )
    *(_QWORD *)(a1 + 272) = 0;
  if ( v42 != nullptr )
    *(_QWORD *)v42 = 0;
  *(_QWORD *)v17 = *(_QWORD *)(a1 + 280);
  *(_QWORD *)(a1 + 280) = v17;
LABEL_170:
  if ( v20 > 2 )
  {
    LOBYTE(v24) = 5;
    sub_14069C5F0(
      a1: a3,
      a2: *(_QWORD *)(a1 + 256),
      a3: 322,
      a4: v24,
      a5: v20 - 2,
      a6: (__int64)&xmmword_1412FF640,
      a7: *(_QWORD *)(a1 + 152),
      a8: 0,
      a9: 0,
      a10: 1065353216,
      a11: 0,
      a12: 0,
      a13: -1,
      a14: 1,
      a15: 0);
  }
LABEL_172:
  LOBYTE(v3) = sub_1400B3390(a1, a2, a3);
  return (char)v3;
}