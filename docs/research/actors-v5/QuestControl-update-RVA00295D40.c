// Baseline 645.348067; IDA base 0x140000000. Exported through Official IDA MCP.
void __fastcall sub_140295D40(__int64 a1, __int64 a2, float *a3)
{
  __int64 *v6; // rax
  __int64 v7; // rcx
  __int64 *v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  char v12; // r12
  int v13; // r14d
  __int64 v14; // r8
  __int64 v15; // r8
  unsigned int v16; // eax
  unsigned __int64 v17; // r15
  __int64 v18; // r8
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  float v23; // xmm14_4
  float v24; // xmm0_4
  float v25; // xmm6_4
  float *v26; // rax
  float v27; // xmm12_4
  float v28; // xmm11_4
  float v29; // xmm9_4
  float v30; // xmm10_4
  float v31; // xmm5_4
  float v32; // xmm13_4
  float v33; // xmm8_4
  float v34; // xmm7_4
  float v35; // xmm4_4
  __int64 v36; // rcx
  float v37; // xmm2_4
  float v38; // xmm6_4
  float v39; // xmm3_4
  float v40; // xmm1_4
  float v41; // xmm1_4
  float v42; // xmm6_4
  float v43; // xmm12_4
  float *v44; // rax
  float v45; // xmm1_4
  __m128 v46; // xmm5
  __m128 v47; // xmm4
  __m128 v48; // xmm10
  int v49; // eax
  __int64 v50; // rax
  int v51; // [rsp+98h] [rbp-80h] BYREF
  float v52; // [rsp+A0h] [rbp-78h] BYREF
  float v53; // [rsp+A4h] [rbp-74h]
  float v54; // [rsp+A8h] [rbp-70h]
  float v55; // [rsp+B0h] [rbp-68h] BYREF
  __int128 v56; // [rsp+B8h] [rbp-60h] BYREF
  __int128 v57; // [rsp+C8h] [rbp-50h]
  _QWORD v58[4]; // [rsp+D8h] [rbp-40h] BYREF
  int v59; // [rsp+F8h] [rbp-20h]
  _BYTE v60[4]; // [rsp+100h] [rbp-18h] BYREF
  float v61; // [rsp+104h] [rbp-14h]
  float v62; // [rsp+108h] [rbp-10h]
  float v63[4]; // [rsp+110h] [rbp-8h] BYREF
  __int64 v64; // [rsp+120h] [rbp+8h] BYREF
  int v65; // [rsp+128h] [rbp+10h]
  float v66; // [rsp+12Ch] [rbp+14h]
  __m128 v67; // [rsp+138h] [rbp+20h] BYREF
  __m128 v68; // [rsp+148h] [rbp+30h]
  __m128 v69; // [rsp+158h] [rbp+40h]
  __m128 v70; // [rsp+168h] [rbp+50h]
  __int64 v71; // [rsp+178h] [rbp+60h] BYREF
  __int128 v72; // [rsp+180h] [rbp+68h]
  void *v73; // [rsp+190h] [rbp+78h]
  __int128 *v74; // [rsp+198h] [rbp+80h]
  __int128 *v75; // [rsp+1A0h] [rbp+88h]
  void *v76; // [rsp+1A8h] [rbp+90h]
  int v77; // [rsp+1B0h] [rbp+98h]
  __int128 v78; // [rsp+1B4h] [rbp+9Ch]
  float v79; // [rsp+1C4h] [rbp+ACh]
  __m128 *v80; // [rsp+1C8h] [rbp+B0h]
  int v81; // [rsp+1D0h] [rbp+B8h]

  v6 = (__int64 *)sub_140101670(a1);
  v8 = v6;
  if ( (*(_BYTE *)(a1 + 144) & 0x40) == 0 )
  {
    if ( v6 == nullptr )
      return;
    v9 = *v6;
LABEL_67:
    v50 = sub_140101B20(a1: v7);
    (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(v9 + 632))(a1: v8, a2: 0, a3: v50);
    return;
  }
  sub_14028BF90((__int64 *)a1, a2, a3);
  if ( (*(_BYTE *)(a1 + 520) & 4) == 0 || byte_141379E50 != 0 )
  {
    if ( v8 == nullptr )
      return;
    v9 = *v8;
    goto LABEL_67;
  }
  if ( sub_1402922F0(a1, a2: 0) != 0 && (*(_BYTE *)(*(_QWORD *)(a1 + 416) + 96LL) & 1) != 0
    || (*(_BYTE *)(a1 + 928) & 1) != 0 )
  {
    v12 = 0;
  }
  else
  {
    v12 = 1;
    if ( (unsigned __int8)sub_1405F8C30(a1: &off_141300CF0) != 0 || (*(_BYTE *)(a1 + 928) & 0x10) == 0 )
      goto LABEL_35;
    v13 = 0;
    if ( (*(_BYTE *)(a1 + 929) & 2) != 0 && *(_QWORD *)(a1 + 728) != 0 )
    {
      v13 = sub_140295000(a1, a2: a3);
      if ( v13 != 0 )
      {
        *(_QWORD *)&v56 = *(_QWORD *)(a1 + 728);
        if ( (_QWORD)v56 == 0 )
          sub_14005A4C0(a1: 0, a2: v10, a3: v14);
        v57 = 0;
        LODWORD(v58[0]) = 1065353216;
        *(_OWORD *)&v58[1] = 0;
        *((_QWORD *)&v56 + 1) = a1 + 584;
        sub_14069EBC0(a1: a3, a2: &v56);
      }
    }
    if ( a3 == nullptr )
      goto LABEL_35;
    if ( dword_1413004A0 == 0 )
      goto LABEL_35;
    v11 = *((_QWORD *)&xmmword_14137C858 + 1);
    v10 = xmmword_14137C858;
    if ( (_QWORD)xmmword_14137C858 == *((_QWORD *)&xmmword_14137C858 + 1) )
      goto LABEL_35;
    v15 = *(unsigned int *)(a1 + 680);
    if ( (*(_BYTE *)(a1 + 928) & 4) != 0 )
      v16 = v15 + ((unsigned __int64)((__int64)(*((_QWORD *)&xmmword_14137C858 + 1) - xmmword_14137C858) >> 4) >> 1);
    else
      v16 = *(_DWORD *)(a1 + 680);
    if ( v13 != 0 )
      goto LABEL_30;
    v17 = v16;
    v11 = (__int64)(*((_QWORD *)&xmmword_14137C858 + 1) - xmmword_14137C858) >> 4;
    if ( v16 < v11
      && *(_QWORD *)(xmmword_14137C858 + 16LL * v16 + 8) != 0
      && (unsigned int)sub_140295000(a1, a2: a3) != 0 )
    {
      if ( v17 >= (__int64)(*((_QWORD *)&xmmword_14137C858 + 1) - xmmword_14137C858) >> 4 )
        __fastfail(5u);
      *(_QWORD *)&v56 = *(_QWORD *)(xmmword_14137C858 + 16LL * (unsigned int)v17);
      if ( (_QWORD)v56 == 0 )
        sub_14005A4C0(a1: xmmword_14137C858, a2: v10, a3: v18);
      v57 = 0;
      LODWORD(v58[0]) = 1065353216;
      *(_OWORD *)&v58[1] = 0;
      *((_QWORD *)&v56 + 1) = a1 + 584;
      sub_14069EBC0(a1: a3, a2: &v56);
LABEL_30:
      if ( (_QWORD)xmmword_14137C870 != 0 && (*(_BYTE *)(a1 + 928) & 8) != 0 )
      {
        *(_QWORD *)&v56 = xmmword_14137C870;
        if ( (_QWORD)xmmword_14137C870 == 0 )
          sub_14005A4C0(a1: v11, a2: v10, a3: v15);
        v57 = 0;
        LODWORD(v58[0]) = 1065353216;
        *(_OWORD *)&v58[1] = 0;
        *((_QWORD *)&v56 + 1) = a1 + 584;
        sub_14069EBC0(a1: a3, a2: &v56);
      }
    }
  }
LABEL_35:
  if ( v8 != nullptr )
  {
    v19 = *v8;
    v20 = sub_140101B20(a1: v11);
    if ( v12 != 0 && *(char *)(a1 + 521) < 0 )
      LOBYTE(v21) = 1;
    else
      v21 = 0;
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(v19 + 632))(a1: v8, a2: v21, a3: v20);
  }
  v22 = sub_1400B5440(a1: v11, a2: v10);
  sub_1400CC650(a1, a2: v63, a3: v22);
  v23 = sub_1400B3260(a1, a2: a3);
  v24 = sub_1400B4560(a1) + *(float *)(a1 + 796);
  *(float *)(a1 + 796) = v24;
  if ( v23 < 12.0 && *(float *)(a1 + 792) > v24 )
  {
    v52 = v63[0];
    v54 = v63[2];
    v53 = (float)(*(float *)(a1 + 648) - 0.2) + v63[1];
    v25 = *(float *)(a1 + 652);
    v26 = (float *)sub_1400CC710(a1);
    v27 = v26[1];
    v28 = v26[3];
    v29 = v26[2];
    v30 = (float)((float)(v27 * v25) + (float)(v28 * 0.0)) - (float)(v29 * 0.0);
    v31 = *v26;
    v32 = (float)((float)(v28 * 0.0) + (float)(v29 * 0.0)) - (float)(*v26 * v25);
    v33 = (float)((float)(v28 * v25) + (float)(*v26 * 0.0)) - (float)(v27 * 0.0);
    v34 = -*v26;
    v35 = (float)((float)(v34 * 0.0) - (float)(v27 * 0.0)) - (float)(v29 * v25);
    v52 = v52
        + (float)((float)((float)((float)(v30 * v28) - (float)(v35 * *v26)) - (float)(v32 * v29))
                - (float)((float)-v27 * v33));
    v53 = v53
        + (float)((float)((float)((float)(v32 * v28) - (float)(v35 * v27)) - (float)(v33 * v31))
                - (float)((float)-v29 * v30));
    v54 = v54
        + (float)((float)((float)((float)(v33 * v28) - (float)(v35 * v29)) - (float)(v30 * v27)) - (float)(v32 * v34));
    sub_1406A4970(a1: a3, a2: v60, a3: &v52);
    if ( v62 < 1.0 )
    {
      v61 = sub_140A04FE0();
      v37 = (float)((float)((float)(a3[81] - v53) * (float)(a3[81] - v53))
                  + (float)((float)(a3[80] - v52) * (float)(a3[80] - v52)))
          + (float)((float)(a3[82] - v54) * (float)(a3[82] - v54));
      if ( v37 < 0.0 )
        v38 = sub_140A00700(a1: v36);
      else
        v38 = fsqrt(v37);
      v67 = 0;
      v68 = 0;
      v69 = 0;
      v70 = 0;
      sub_14009D750(a1: &v67, a2: v60);
      v39 = 1.0;
      if ( v23 > 6.0 )
        v39 = 1.0 - (float)((float)(v23 - 6.0) / 6.0);
      v40 = *(float *)(a1 + 796);
      if ( v40 >= 0.5 )
      {
        if ( v40 > (float)(*(float *)(a1 + 792) - 0.5) )
          v39 = (float)((float)(*(float *)(a1 + 792) - v40) + (float)(*(float *)(a1 + 792) - v40)) * v39;
        v41 = v39;
      }
      else
      {
        v41 = (float)(v40 + v40) * v39;
      }
      if ( v38 >= 3.0 )
      {
        v43 = v41;
      }
      else
      {
        v55 = 1.0;
        v59 = 0;
        v42 = v38 - 2.0;
        v51 = LODWORD(v42);
        if ( v42 >= 0.0 )
        {
          v44 = &v55;
          if ( v42 <= 1.0 )
            v44 = (float *)&v51;
          v43 = *v44 * v41;
        }
        else
        {
          v43 = 0.0 * v41;
        }
      }
      if ( v23 > 4.0 )
      {
        v45 = 1.0 - (float)((float)(v23 - 7.0) / 6.0);
        v55 = v45;
        if ( v45 < 1.0 )
        {
          v56 = 0;
          v57 = 0;
          memset(v58, 0, sizeof(v58));
          v51 = 1065353216;
          v59 = 1056964608;
          sub_14009D7F0(a1: &v56);
          v46 = _mm_add_ps(
                  _mm_add_ps(
                    _mm_add_ps(
                      _mm_mul_ps(v67, _mm_shuffle_ps((__m128)(unsigned int)v57, (__m128)(unsigned int)v57, 0)),
                      _mm_mul_ps(v68, _mm_shuffle_ps((__m128)DWORD1(v57), (__m128)DWORD1(v57), 0))),
                    _mm_mul_ps(v69, _mm_shuffle_ps((__m128)DWORD2(v57), (__m128)DWORD2(v57), 0))),
                  _mm_mul_ps(v70, _mm_shuffle_ps((__m128)HIDWORD(v57), (__m128)HIDWORD(v57), 0)));
          v47 = _mm_add_ps(
                  _mm_add_ps(
                    _mm_add_ps(
                      _mm_mul_ps(v67, _mm_shuffle_ps((__m128)LODWORD(v58[0]), (__m128)LODWORD(v58[0]), 0)),
                      _mm_mul_ps(v68, _mm_shuffle_ps((__m128)HIDWORD(v58[0]), (__m128)HIDWORD(v58[0]), 0))),
                    _mm_mul_ps(v69, _mm_shuffle_ps((__m128)LODWORD(v58[1]), (__m128)LODWORD(v58[1]), 0))),
                  _mm_mul_ps(v70, _mm_shuffle_ps((__m128)HIDWORD(v58[1]), (__m128)HIDWORD(v58[1]), 0)));
          v48 = _mm_add_ps(
                  _mm_add_ps(
                    _mm_add_ps(
                      _mm_mul_ps(v67, _mm_shuffle_ps((__m128)LODWORD(v58[2]), (__m128)LODWORD(v58[2]), 0)),
                      _mm_mul_ps(v68, _mm_shuffle_ps((__m128)HIDWORD(v58[2]), (__m128)HIDWORD(v58[2]), 0))),
                    _mm_mul_ps(v69, _mm_shuffle_ps((__m128)LODWORD(v58[3]), (__m128)LODWORD(v58[3]), 0))),
                  _mm_mul_ps(v70, _mm_shuffle_ps((__m128)HIDWORD(v58[3]), (__m128)HIDWORD(v58[3]), 0)));
          v67 = _mm_add_ps(
                  _mm_add_ps(
                    _mm_add_ps(
                      _mm_mul_ps(v67, _mm_shuffle_ps((__m128)(unsigned int)v56, (__m128)(unsigned int)v56, 0)),
                      _mm_mul_ps(v68, _mm_shuffle_ps((__m128)DWORD1(v56), (__m128)DWORD1(v56), 0))),
                    _mm_mul_ps(v69, _mm_shuffle_ps((__m128)DWORD2(v56), (__m128)DWORD2(v56), 0))),
                  _mm_mul_ps(v70, _mm_shuffle_ps((__m128)HIDWORD(v56), (__m128)HIDWORD(v56), 0)));
          v68 = v46;
          v69 = v47;
          v70 = v48;
        }
      }
      v71 = xmmword_14137C8D8;
      v72 = *(_OWORD *)(a1 + 760);
      v73 = &unk_1413009D8;
      v74 = &xmmword_140EF4FD8;
      v75 = &xmmword_140EF4FD8;
      v76 = &unk_1413009E8;
      v77 = 0;
      v78 = xmmword_140EF3D70;
      v79 = v43;
      v80 = &v67;
      v81 = -1;
      sub_14069CD50(a1: a3, a2: &v71);
      v64 = 0;
      v65 = 0;
      v66 = v43;
      v49 = sub_1400891B0(a1: a1 + 744, a2: 0);
      sub_1406A1D20(
        a1: (_DWORD)a3,
        a2: xmmword_14137C8C8,
        a3: v49,
        a4: a1 + 776,
        a5: (__int64)&v64,
        a6: 1065353216,
        a7: 0,
        a8: 0,
        a9: 1065353216,
        a10: 1065353216,
        a11: 0,
        a12: 0,
        a13: 148,
        a14: (__int64)&v67,
        a15: 0,
        a16: 0,
        a17: 0);
    }
  }
}
