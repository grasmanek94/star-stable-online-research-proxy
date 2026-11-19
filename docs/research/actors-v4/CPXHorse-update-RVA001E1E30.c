// Hex-Rays pseudocode from SSOClient.exe 645.348067; IDA base 0x140000000.
// Filename is the queried RVA and may be inside a larger function.
__int64 __fastcall sub_1401E1E30(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r14
  __int64 v5; // r13
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  float *v11; // rax
  float v12; // xmm8_4
  float v13; // xmm7_4
  float v14; // xmm6_4
  __int64 v15; // rax
  float v16; // xmm10_4
  __int64 v17; // rbx
  float *v18; // rax
  float v19; // xmm6_4
  float v20; // xmm2_4
  float v21; // xmm0_4
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rcx
  float *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rax
  float v29; // xmm6_4
  __int64 v30; // rdi
  int v31; // eax
  int v32; // r14d
  __int64 v33; // rax
  unsigned __int8 *v34; // rax
  unsigned int v35; // ebx
  unsigned int v36; // eax
  int v37; // ecx
  bool v38; // al
  float v39; // xmm1_4
  bool v40; // zf
  unsigned int v41; // ebx
  __int64 v42; // r11
  __int64 v43; // rdx
  __int128 *v44; // r10
  int v45; // r9d
  _QWORD *v46; // rdx
  unsigned int v47; // r9d
  __int128 v48; // xmm0
  unsigned int v49; // ebx
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int64 v52; // r8
  int v53; // edx
  __int64 v54; // rdx
  __int64 v55; // xmm0_8
  __int64 v56; // xmm0_8
  __int64 v57; // rax
  float *v58; // rax
  float v59; // xmm6_4
  float v60; // xmm8_4
  float v61; // xmm9_4
  float v62; // xmm2_4
  float v63; // xmm0_4
  __int64 v64; // rax
  float *v65; // r15
  int v66; // eax
  int v67; // xmm0_4
  float v68; // xmm1_4
  int *v69; // rax
  int v70; // eax
  double v71; // xmm0_8
  float v72; // xmm6_4
  char v73; // al
  __int64 v74; // r15
  __int64 v75; // r13
  __int64 v76; // rdi
  __int64 v77; // rbx
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rbx
  __int64 v86; // rax
  __int64 v87; // rdi
  char v88; // al
  __int64 v89; // rdi
  _QWORD *v90; // rax
  _QWORD *v91; // r15
  __int64 v92; // rbx
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // xmm1_8
  __int64 v96; // rdi
  __int64 v97; // rdi
  __int64 v98; // rbx
  __int64 v99; // rax
  volatile signed __int32 *v100; // rdx
  __int64 v101; // rbx
  signed __int32 v102; // eax
  signed __int32 v103; // ett
  int v104; // [rsp+38h] [rbp-D0h]
  __int128 v105; // [rsp+40h] [rbp-C8h] BYREF
  float v106[2]; // [rsp+50h] [rbp-B8h] BYREF
  float v107; // [rsp+58h] [rbp-B0h]
  float v108[4]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v109[3]; // [rsp+70h] [rbp-98h] BYREF
  int v110; // [rsp+88h] [rbp-80h]
  _QWORD v111[2]; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v112[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v113; // [rsp+B0h] [rbp-58h] BYREF
  int v114; // [rsp+B8h] [rbp-50h]
  __int64 v115; // [rsp+BCh] [rbp-4Ch]
  int v116; // [rsp+C4h] [rbp-44h]
  __int64 v117; // [rsp+C8h] [rbp-40h]
  int v118; // [rsp+D0h] [rbp-38h]
  __int64 v119; // [rsp+D4h] [rbp-34h]
  int v120; // [rsp+DCh] [rbp-2Ch]
  __int64 v121; // [rsp+E0h] [rbp-28h]
  int v122; // [rsp+E8h] [rbp-20h]
  _QWORD v123[3]; // [rsp+F0h] [rbp-18h] BYREF
  _QWORD v124[4]; // [rsp+108h] [rbp+0h] BYREF
  _QWORD v125[4]; // [rsp+128h] [rbp+20h] BYREF
  __int128 v126; // [rsp+148h] [rbp+40h]
  __int128 v127; // [rsp+158h] [rbp+50h]
  int v128; // [rsp+168h] [rbp+60h]
  _BYTE v129[8]; // [rsp+178h] [rbp+70h] BYREF
  _BYTE v130[16]; // [rsp+180h] [rbp+78h] BYREF
  __int128 v131; // [rsp+190h] [rbp+88h] BYREF
  __int64 v132; // [rsp+1A0h] [rbp+98h]
  _QWORD v133[10]; // [rsp+1A8h] [rbp+A0h] BYREF
  _BYTE v134[12]; // [rsp+1F8h] [rbp+F0h] BYREF
  _BYTE v135[12]; // [rsp+204h] [rbp+FCh] BYREF
  _BYTE v136[12]; // [rsp+210h] [rbp+108h] BYREF
  _BYTE v137[12]; // [rsp+21Ch] [rbp+114h] BYREF
  _BYTE v138[16]; // [rsp+228h] [rbp+120h] BYREF
  _BYTE v139[16]; // [rsp+238h] [rbp+130h] BYREF
  _BYTE v140[24]; // [rsp+248h] [rbp+140h] BYREF
  _UNKNOWN *retaddr; // [rsp+310h] [rbp+208h] BYREF
  __int64 v142; // [rsp+318h] [rbp+210h] BYREF
  __int64 v143; // [rsp+320h] [rbp+218h]
  __int64 v144; // [rsp+328h] [rbp+220h]
  float v145; // [rsp+330h] [rbp+228h] BYREF

  result = (__int64)&retaddr;
  v144 = a3;
  v143 = a2;
  v4 = a3;
  v5 = a2;
  if ( (*(_BYTE *)(a1 + 144) & 0x40) == 0 )
    return result;
  if ( *(char *)(a1 + 145) < 0 )
    return result;
  v7 = sub_1405F8CF0(a1: &off_141302F28);
  v8 = sub_1405F8CF0(a1: a1 + 152);
  if ( v8 != 0 )
  {
    result = sub_140799A60(a1: v8);
    if ( (_BYTE)result != 0 )
      return result;
  }
  if ( (unsigned __int8)sub_1400B4980(a1) != 0 && v7 != 0 )
  {
    result = sub_140799A60(a1: v7);
    if ( (_BYTE)result != 0 )
      return result;
  }
  if ( (*(_BYTE *)(a1 + 3545) & 1) != 0 )
  {
    sub_140200060(a1);
    v9 = sub_1405F8CF0(a1: a1 + 3504);
    if ( v9 != 0 )
    {
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v9 + 112LL))(a1: v9, a2: v5, a3: v4);
      return sub_1400B3390(a1, a2: v5, a3: v4);
    }
    return sub_1400B3390(a1, a2: v5, a3: v4);
  }
  if ( sub_1406214A0(a1: v5) != 0 )
  {
    sub_1406214A0(a1: v5);
    if ( v7 != 0 )
    {
      v10 = sub_1400B5440();
      v11 = (float *)sub_1400CC650(a1: v7, a2: v134, a3: v10);
    }
    else
    {
      v109[0] = 0;
      v11 = (float *)v109;
      LODWORD(v109[1]) = 0;
    }
    v12 = *v11;
    v13 = v11[1];
    v14 = v11[2];
    v15 = sub_1400B5440();
    sub_1400CC650(a1, a2: v106, a3: v15);
    if ( (float)((float)((float)((float)(v106[1] - v13) * (float)(v106[1] - v13))
                       + (float)((float)(v106[0] - v12) * (float)(v106[0] - v12)))
               + (float)((float)(v107 - v14) * (float)(v107 - v14))) < 0.0 )
      ((void (*)(void))sub_140A00700)();
    if ( (unsigned __int8)sub_1400B4980(a1) != 0 || (*(_BYTE *)(a1 + 3543) & 0x20) != 0 )
      sub_1401E2EE0(a1, a2: v4);
  }
  v16 = sub_1400B4560(a1);
  if ( (*(_BYTE *)(a1 + 3543) & 0x20) != 0 )
  {
    result = sub_1405F8CF0(a1: a1 + 1440);
    v17 = result;
    if ( result != 0 )
    {
      *(_DWORD *)(a1 + 304) = 1065353216;
      sub_1400F9820(a1: result);
      *(_BYTE *)(v17 + 860) &= ~2u;
      sub_1400FCF00(a1: v17);
      sub_140200060(a1);
      if ( *(_BYTE *)(*(_QWORD *)(sub_1406214C0(a1: v5) + 696) + 84LL) == 0 )
      {
        sub_1401E3170(a1, a2: v4);
        return sub_1400B3390(a1, a2: v5, a3: v4);
      }
      return sub_1400B3390(a1, a2: v5, a3: v4);
    }
    return result;
  }
  if ( sub_1406214A0(a1: v5) != 0 )
    sub_1406214A0(a1: v5);
  result = sub_1400B4980(a1);
  if ( (_BYTE)result != 0 )
  {
    if ( (*(_BYTE *)(a1 + 3543) & 0x40) != 0 )
      return result;
    if ( *(char *)(a1 + 3545) < 0 )
    {
      v18 = (float *)sub_1400D1680(a1, a2: v135);
      v19 = *(float *)(a1 + 3520) * 0.99000001;
      v20 = (float)((float)(v18[1] * v18[1]) + (float)(*v18 * *v18)) + (float)(v18[2] * v18[2]);
      v21 = v20 < 0.0 ? ((float (*)(void))sub_140A00700)() : fsqrt(v20);
      *(float *)(a1 + 3520) = (float)(v21 * 0.0099999998) + v19;
      v22 = sub_1406214C0(a1: v5);
      sub_14064BD50(a1: v23, a2: v22);
      sub_14064BD50(a1: v24, a2: v22);
      v25 = (float *)sub_1400D1680(a1, a2: v136);
      if ( (float)((float)((float)(v25[1] * v25[1]) + (float)(*v25 * *v25)) + (float)(v25[2] * v25[2])) < 0.0 )
        sub_140A00700(a1: v26);
    }
    v27 = sub_1405F8CF0(a1: a1 + 152);
    result = *(unsigned __int8 *)(a1 + 3545);
    if ( v27 != 0 )
    {
      if ( (result & 0x10) != 0 )
      {
        result = sub_140796A30(a1: v27);
        if ( (_BYTE)result == 0 )
          return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v27 + 112LL))(
                   a1: v27,
                   a2: v5,
                   a3: v4);
        return result;
      }
    }
    else if ( (result & 0x20) != 0 )
    {
      return result;
    }
    if ( *(_BYTE *)(*(_QWORD *)(sub_1406214C0(a1: v5) + 696) + 84LL) == 0 )
      sub_1401E3170(a1, a2: v4);
    sub_1401DC540(a1);
    return sub_1400B3390(a1, a2: v5, a3: v4);
  }
  v28 = sub_140101B60();
  v29 = 2.5;
  if ( (unsigned __int8)sub_14060F350(a1: v28, a2: 3) != 0 )
  {
    if ( *(_BYTE *)(a1 + 2796) != 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 1048LL))(a1, a2: 0);
      *(_BYTE *)(a1 + 2796) = 0;
    }
    v30 = *(_QWORD *)sub_140112410(a1: v129) / 1000000LL;
    v31 = *(_DWORD *)(a1 + 2832);
    if ( v31 != 0 )
    {
      v32 = v30 - v31;
      v33 = *(_QWORD *)(a1 + 2872);
      if ( v33 != 0 )
      {
        v35 = *(_DWORD *)(a1 + 3064);
        if ( v33 != 1 )
          v35 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 2848)
                                      + 8
                                      * ((*(_QWORD *)(a1 + 2864) + *(_QWORD *)(a1 + 2872) - 1LL)
                                       & (*(_QWORD *)(a1 + 2856) - 1LL)))
                          + 64LL)
              + v35
              - *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 2848)
                                      + 8 * (*(_QWORD *)(a1 + 2864) & (*(_QWORD *)(a1 + 2856) - 1LL)))
                          + 64LL);
        v34 = (unsigned __int8 *)sub_140205B70(a1: a1 + 2840);
      }
      else
      {
        v34 = (unsigned __int8 *)(a1 + 440);
        v35 = 0;
      }
      v36 = *v34;
      v38 = false;
      if ( (unsigned __int8)v36 <= 0x12u )
      {
        v37 = 265729;
        if ( _bittest(&v37, v36) )
          v38 = true;
      }
      if ( v35 >= 0xC8 )
      {
        if ( v35 <= 0x4B0 )
        {
          if ( v35 <= 0x2BC )
          {
            v29 = 1.0;
            if ( v35 > 0x15E && *(_DWORD *)(a1 + 3064) < 0x190u )
              v29 = 1.05;
          }
          else
          {
            v29 = 1.5;
          }
        }
      }
      else
      {
        v29 = v38 ? 1.0 : 0.75;
      }
      *(float *)(a1 + 2836) = v29;
      v39 = (float)((float)v32 * v29) + *(float *)(a1 + 3072);
      *(_DWORD *)(a1 + 2828) += (int)v39;
      *(float *)(a1 + 3072) = v39 - (float)(int)v39;
    }
    else
    {
      *(_DWORD *)(a1 + 2828) += (int)(float)(sub_1400B4560(a1) * 1000.0);
    }
    v40 = *(_QWORD *)(a1 + 2872) == 0;
    v41 = *(_DWORD *)(a1 + 2828);
    *(_DWORD *)(a1 + 2832) = v30;
    if ( !v40 )
    {
      v42 = *(_QWORD *)(a1 + 2864);
      v43 = *(_QWORD *)(a1 + 2848);
      v44 = *(__int128 **)(v43 + 8 * (v42 & (*(_QWORD *)(a1 + 2856) - 1LL)));
      v45 = *((_DWORD *)v44 + 16);
      if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(v43
                                                + 8
                                                * ((v42 + *(_QWORD *)(a1 + 2872) - 1LL) & (*(_QWORD *)(a1 + 2856) - 1LL)))
                                    + 64LL)
                        - v45) <= 0x9C4 )
      {
        v47 = v45 - *(_DWORD *)(a1 + 2952);
        if ( v41 < v47 )
          goto LABEL_85;
        v48 = *v44;
        v49 = v41 - v47;
        v123[0] = *(_QWORD *)(a1 + 2840);
        *(_OWORD *)v125 = v48;
        v50 = v44[1];
        v124[0] = v123[0];
        v123[1] = 0;
        *(_OWORD *)&v125[2] = v50;
        v51 = v44[2];
        v124[1] = 0;
        v124[2] = v42;
        v126 = v51;
        v127 = v44[3];
        v128 = *((_DWORD *)v44 + 16);
        v123[2] = v42 + 1;
        sub_140205E00(a1: a1 + 2840, a2: v140, a3: v124, a4: v123);
        v53 = v128;
        if ( *(_QWORD *)(a1 + 2872) != 0 )
        {
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 2848)
                                     + 8 * (*(_QWORD *)(a1 + 2864) & (*(_QWORD *)(a1 + 2856) - 1LL)))
                         + 64LL)
             - v128 < v49 )
            v49 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 2848)
                                        + 8 * (*(_QWORD *)(a1 + 2864) & (*(_QWORD *)(a1 + 2856) - 1LL)))
                            + 64LL)
                - v128;
        }
        else if ( v49 > 0x64 )
        {
          v49 = 100;
        }
        v40 = *(_BYTE *)(a1 + 2965) == 0;
        *(_DWORD *)(a1 + 2828) = v49;
        if ( !v40 )
        {
          v54 = (unsigned int)(v53 - *(_DWORD *)(a1 + 2952));
          v55 = *(_QWORD *)(a1 + 2892);
          v114 = *(_DWORD *)(a1 + 2900);
          v116 = *(_DWORD *)(a1 + 2928);
          v118 = HIDWORD(v125[1]);
          v113 = v55;
          v56 = *(_QWORD *)(a1 + 2920);
          v120 = DWORD2(v126);
          v122 = 0;
          v115 = v56;
          v117 = *(_QWORD *)((char *)v125 + 4);
          v119 = v126;
          v121 = 0;
          sub_1401E60C0(a1: v108, a2: v54, a3: v52, a4: &v113);
          v57 = sub_1400B5440();
          v58 = (float *)sub_1400CC650(a1, a2: v137, a3: v57);
          v59 = *v58 - v108[0];
          v60 = v58[1] - v108[1];
          v61 = v58[2] - v108[2];
          v62 = (float)((float)(v60 * v60) + (float)(v59 * v59)) + (float)(v61 * v61);
          v63 = v62 < 0.0 ? ((float (*)(void))sub_140A00700)() : fsqrt(v62);
          if ( v63 > 0.0099999998 )
          {
            *(float *)(a1 + 3048) = v59;
            *(float *)(a1 + 3052) = v60;
            *(float *)(a1 + 3056) = v61;
            *(_DWORD *)(a1 + 3060) = 1065353216;
          }
        }
        v46 = v125;
      }
      else
      {
        *(_DWORD *)(a1 + 2828) = 0;
        *(_DWORD *)(a1 + 3072) = 0;
        qmemcpy(v133, (const void *)sub_140205B70(a1: a1 + 2840), 68);
        sub_140205AB0(a1: a1 + 2840);
        v46 = v133;
      }
      (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a1 + 864LL))(a1, a2: v46);
    }
  }
LABEL_85:
  v64 = sub_1406214C0(a1: v5);
  v104 = sub_1400B41D0(a1: v64 + 1072);
  v65 = (float *)(a1 + 2792);
  if ( (unsigned __int8)sub_1401E6F50(a1) == 0 )
  {
    if ( v104 == 4 )
    {
      v67 = 1069547520;
      goto LABEL_98;
    }
    v67 = 0;
    v145 = v16 + *v65;
    v68 = v145;
    if ( v145 < 0.0 )
      goto LABEL_98;
    v69 = (int *)&v145;
    goto LABEL_95;
  }
  v66 = sub_1400D10E0(a1, a2: 0);
  sub_1400D20B0(a1, a2: 0, a3: v66 & 0xF3FFFFFF);
  v67 = 0;
  if ( *v65 == 0.0 )
    return sub_1401F3290(a1);
  if ( v104 != 4 )
  {
    v68 = *v65 - v16;
    *(float *)&v142 = v68;
    if ( v68 >= 0.0 )
    {
      v69 = (int *)&v142;
LABEL_95:
      if ( v68 > 1.5 )
        v69 = (int *)&unk_140F10354;
      v67 = *v69;
    }
  }
LABEL_98:
  *(_DWORD *)v65 = v67;
  v70 = sub_1400D10E0(a1, a2: 0);
  sub_1400D20B0(a1, a2: 0, a3: v70 | 0xC000000u);
  v71 = sub_1400B31B0(a1);
  v72 = *(float *)&v71;
  if ( *(float *)&v71 >= 30.0 || ((v73 = *(_BYTE *)(a1 + 3542)) & 0x10) != 0 )
  {
    if ( *(float *)&v71 <= 32.0 )
      goto LABEL_105;
    v88 = *(_BYTE *)(a1 + 3542);
    if ( (v88 & 0x10) == 0 )
      goto LABEL_105;
    *(_BYTE *)(a1 + 3542) = v88 & 0xEF;
    v89 = *(_QWORD *)(a1 + 2480);
    v142 = *(_QWORD *)(a1 + 2488);
    if ( v89 == v142 )
      goto LABEL_105;
    do
    {
      sub_1405F8B50(a1: v112, a2: v89);
      v112[0] = &PXEngine::SafeActorPtrAs<CPXFootstep>::`vftable';
      v90 = (_QWORD *)sub_1405F8CF0(a1: v112);
      v91 = v90;
      if ( v90 == nullptr )
      {
        if ( (unsigned __int8)sub_140059A00(a1: off_140F145D0) != 0 )
          __debugbreak();
        sub_1409E7D98(a1: 999);
        __debugbreak();
      }
      v92 = *v90;
      v93 = sub_140101B20();
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(v92 + 632))(a1: v91, a2: 0, a3: v93);
      v89 += 16;
    }
    while ( v89 != v142 );
  }
  else
  {
    *(_BYTE *)(a1 + 3542) = v73 | 0x10;
    v74 = *(_QWORD *)(a1 + 2480);
    if ( v74 != *(_QWORD *)(a1 + 2488) )
    {
      v75 = *(_QWORD *)(a1 + 2488);
      do
      {
        sub_1405F8B50(a1: v111, a2: v74);
        v111[0] = &PXEngine::SafeActorPtrAs<CPXFootstep>::`vftable';
        v76 = sub_1405F8CF0(a1: v111);
        v77 = *(_QWORD *)v76;
        v78 = sub_140101B20();
        LOBYTE(v79) = 1;
        (*(void (__fastcall **)(__int64, __int64, __int64))(v77 + 632))(a1: v76, a2: v79, a3: v78);
        v74 += 16;
        *(_BYTE *)(v76 + 375) = 1;
      }
      while ( v74 != v75 );
      v5 = v143;
    }
  }
  v65 = (float *)(a1 + 2792);
LABEL_105:
  if ( (*(_BYTE *)(a1 + 3542) & 0x10) != 0 )
    sub_1401DC540(a1);
  sub_140200060(a1);
  v80 = sub_140101B60();
  if ( (unsigned __int8)sub_14060F350(a1: v80, a2: 3) == 0 || v104 != 4 )
    sub_1401F3290(a1);
  if ( v72 <= 90.0 )
  {
    v81 = sub_1400B5440();
    v82 = sub_1400CC650(a1, a2: v138, a3: v81);
    v4 = v144;
    *(_QWORD *)((char *)&v109[1] + 4) = *(_QWORD *)v82;
    HIDWORD(v109[2]) = *(_DWORD *)(v82 + 8);
    v110 = 1075838976;
    if ( (unsigned int)sub_1406A3F70(a1: v144, a2: (unsigned int)&v109[1] + 4, a3: 0, a4: 1, a5: 1) != 0 )
    {
      v83 = sub_1405F8CF0(a1: a1 + 1440);
      v85 = v83;
      if ( v83 != 0 )
      {
        if ( v72 <= 30.0 )
        {
          sub_1400C8D90(a1: v83, a2: 0);
        }
        else
        {
          LOBYTE(v84) = 1;
          sub_1400C8D90(a1: v83, a2: v84);
          v86 = sub_1405F8CF0(a1: a1 + 792);
          v87 = v86;
          if ( v86 != 0 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v86 + 248LL))(a1: v86) != 0 )
            (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v87 + 112LL))(a1: v87, a2: v5, a3: v4);
        }
        sub_1401FFF50(a1, a2: v85);
        v94 = sub_140101B60();
        if ( (unsigned __int8)sub_14060F350(a1: v94, a2: 3) == 0 )
          *(float *)(a1 + 304) = sub_1400A0E60();
        sub_1400F9820(a1: v85);
        *(_BYTE *)(v85 + 860) &= ~2u;
        sub_1400FCF00(a1: v85);
        v95 = *(_QWORD *)(v85 + 672);
        v131 = *(_OWORD *)(v85 + 656);
        v132 = v95;
        result = sub_1406A46E0(a1: v4, a2: &v131, a3: a1 + 520);
        if ( (_BYTE)result != 0 )
          return result;
        v96 = sub_1405F8CF0(a1: a1 + 1456);
        if ( v96 != 0 )
        {
          sub_1400EA130(a1: v85);
          sub_1400F9820(a1: v96);
        }
        if ( *v65 < 0.5 )
        {
          result = sub_1405F8CF0(a1: a1 + 152);
          v97 = result;
          if ( result != 0 )
          {
            if ( (unsigned __int8)sub_1405F8C30(a1: a1 + 1456) == 0 )
            {
              v98 = sub_1400B5440();
              sub_1405F8B50(a1: v130, a2: v97 + 120);
              v99 = sub_140105170(a1: v98, a2: v139, a3: v130, a4: 1);
              *(_DWORD *)(a1 + 1464) = *(_DWORD *)(v99 + 8);
              *(_DWORD *)(a1 + 1468) = *(_DWORD *)(v99 + 12);
            }
            result = sub_1407969E0(a1: v97);
            if ( (_BYTE)result != 0 )
            {
              result = sub_1405F8CF0(a1: v97 + 1856);
              if ( result == a1 )
              {
                result = *(unsigned int *)v65;
                *(_DWORD *)(v97 + 332) = result;
              }
            }
          }
          return result;
        }
        sub_1401FEAF0(a1: v85);
      }
      return sub_1400B3390(a1, a2: v5, a3: v4);
    }
  }
  result = sub_1405F8CF0(a1: a1 + 1440);
  if ( result != 0 )
  {
    v100 = *(volatile signed __int32 **)(result + 648);
    v105 = 0;
    if ( v100 != nullptr )
    {
      v101 = *(_QWORD *)(result + 640);
      _InterlockedIncrement(v100 + 3);
      v102 = *((_DWORD *)v100 + 2);
      if ( v102 != 0 )
      {
        while ( 1 )
        {
          v103 = v102;
          v102 = _InterlockedCompareExchange(v100 + 2, v102 + 1, v102);
          if ( v103 == v102 )
            break;
          if ( v102 == 0 )
            goto LABEL_143;
        }
        *(_QWORD *)&v105 = v101;
        *((_QWORD *)&v105 + 1) = v100;
      }
      else
      {
LABEL_143:
        v101 = v105;
      }
      if ( _InterlockedExchangeAdd(v100 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v100 + 8LL))(a1: v100);
      if ( v101 != 0 )
        *(_BYTE *)(v101 + 208) = 0;
    }
    return sub_140029550(a1: &v105);
  }
  return result;
}
