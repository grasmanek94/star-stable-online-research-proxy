// Baseline 645.348067; IDA base 0x140000000. Exported through Official IDA MCP.
_UNKNOWN **__fastcall sub_14028BF90(__int64 *a1, __int64 a2, float *a3)
{
  _UNKNOWN **result; // rax
  __int64 v7; // rcx
  __m128 v8; // xmm11
  float v9; // xmm8_4
  __int64 v10; // rcx
  float v11; // xmm9_4
  int *v12; // rax
  float v13; // xmm9_4
  float v14; // xmm0_4
  int *v15; // rax
  float v16; // xmm0_4
  float v17; // xmm7_4
  __int64 v18; // rcx
  __int64 v19; // r14
  _QWORD *v20; // rax
  int v21; // ebx
  __int64 v22; // rax
  __int64 v23; // rax
  bool v24; // r14
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rax
  __m128 *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  bool v33; // cc
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  float *v45; // rcx
  float v46; // xmm2_4
  int v47; // xmm12_4
  float *v48; // rax
  __int64 v49; // rbx
  __int64 v50; // rax
  __m128 *v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rbx
  __int64 v56; // rax
  __m128 *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax
  _QWORD *v61; // r8
  __int64 v62; // rax
  __int64 v63; // rbx
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rdx
  __int64 v67; // rbx
  __int64 v68; // rax
  __int64 v69; // rbx
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 *v73; // r14
  __int64 v74; // rcx
  __int64 v75; // rbx
  __int64 v76; // rax
  _QWORD *v77; // r8
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rbx
  __int64 v83; // rax
  __m128 *v84; // rax
  __int64 v85; // rbx
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rax
  __int64 v89; // rax
  __m128 v90; // xmm7
  float v91; // xmm12_4
  float v92; // xmm9_4
  float v93; // xmm11_4
  float v94; // xmm15_4
  float v95; // xmm8_4
  float v96; // xmm10_4
  float v97; // xmm13_4
  float v98; // xmm14_4
  __m128 v99; // xmm6
  float v100; // xmm12_4
  float v101; // xmm11_4
  float v102; // xmm9_4
  __m128 v103; // xmm10
  float v104; // xmm8_4
  float v105; // xmm4_4
  __m128 v106; // xmm5
  __m128 v107; // xmm1
  float v108; // xmm15_4
  __m128 v109; // xmm1
  __m128 v110; // xmm1
  __m128 v111; // xmm1
  __m128 v112; // xmm0
  __m128 v113; // xmm0
  __m128 v114; // xmm0
  __m128 v115; // xmm10
  __m128 v116; // xmm10
  __m128 v117; // xmm10
  __m128 v118; // xmm1
  __m128 v119; // xmm1
  __m128 v120; // xmm1
  __int64 v121; // rax
  __int64 *v122; // r14
  __int64 v123; // rcx
  __int64 v124; // rbx
  __int64 v125; // rax
  __int64 v126; // rdx
  __int64 v127; // rax
  unsigned int *v128; // r14
  __int64 v129; // xmm7_8
  int v130; // ebx
  __m128 v131; // xmm6
  float *v132; // rax
  float v133; // xmm2_4
  __int64 v134; // rax
  float v135; // xmm12_4
  float v136; // xmm0_4
  __int64 v137; // rdx
  __int64 v138; // rcx
  __int64 v139; // rax
  float v140; // xmm0_4
  float v141; // xmm6_4
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // rax
  float *v145; // rax
  __int64 v146; // rcx
  float v147; // xmm11_4
  float v148; // xmm13_4
  float v149; // xmm14_4
  float v150; // xmm10_4
  float v151; // xmm8_4
  float v152; // xmm12_4
  float v153; // xmm7_4
  float v154; // xmm9_4
  float v155; // xmm5_4
  float v156; // xmm3_4
  float v157; // xmm12_4
  __m128 v158; // xmm6
  __m128 v159; // xmm5
  float v160; // xmm12_4
  float *v161; // rax
  int v162; // eax
  __int64 v163; // rdx
  __int64 v164; // rcx
  __int64 v165; // rax
  __int64 v166; // rcx
  float v167; // xmm0_4
  float v168; // xmm3_4
  float v169; // xmm13_4
  __m128 v170; // xmm5
  __m128 v171; // xmm4
  float v172; // xmm13_4
  float v173; // xmm0_4
  float *v174; // rax
  int v175; // eax
  __m128 v176; // [rsp+98h] [rbp-80h] BYREF
  float v177[4]; // [rsp+A8h] [rbp-70h] BYREF
  float v178; // [rsp+B8h] [rbp-60h]
  __m128 v179; // [rsp+C8h] [rbp-50h] BYREF
  __m128 v180; // [rsp+D8h] [rbp-40h] BYREF
  __m128 v181; // [rsp+E8h] [rbp-30h] BYREF
  __m128 v182; // [rsp+F8h] [rbp-20h]
  __m128 v183; // [rsp+108h] [rbp-10h]
  __m128 v184; // [rsp+118h] [rbp+0h]
  float v185; // [rsp+128h] [rbp+10h] BYREF
  __m128 v186; // [rsp+138h] [rbp+20h] BYREF
  __m128 v187; // [rsp+148h] [rbp+30h]
  __m128 v188; // [rsp+158h] [rbp+40h]
  __m128 v189; // [rsp+168h] [rbp+50h]
  int v190; // [rsp+178h] [rbp+60h] BYREF
  int v191; // [rsp+17Ch] [rbp+64h] BYREF
  float v192; // [rsp+188h] [rbp+70h]
  float v193; // [rsp+198h] [rbp+80h]
  float v194; // [rsp+1A8h] [rbp+90h]
  __int128 v195; // [rsp+1B8h] [rbp+A0h] BYREF
  _BYTE v196[176]; // [rsp+1C8h] [rbp+B0h] BYREF
  _UNKNOWN *retaddr; // [rsp+2A0h] [rbp+188h] BYREF
  unsigned int v198; // [rsp+2A8h] [rbp+190h] BYREF
  int v199; // [rsp+2C0h] [rbp+1A8h] BYREF

  result = &retaddr;
  *(float *)&v198 = 0.0;
  if ( (a1[18] & 0x40) != 0 )
  {
    v7 = a1[52];
    if ( v7 != 0 )
    {
      (*(void (__fastcall **)(__int64, float *))(*(_QWORD *)v7 + 40LL))(a1: v7, a2: a3);
      v8 = (__m128)0x3F800000u;
      if ( (unsigned __int8)sub_1405DC1F0(a1: a1[52], a2: "MoveTask") != 0 )
      {
        v199 = *((_DWORD *)a1 + 86);
        goto LABEL_7;
      }
    }
    else
    {
      v8 = (__m128)0x3F800000u;
    }
    v199 = v8.m128_i32[0];
LABEL_7:
    v9 = sub_1400B3260(a1, a2: a3);
    v185 = v9;
    if ( sub_1406214A0(a1: a2) != 0 )
    {
      sub_1406214A0(a1: a2);
      if ( a1[50] != 0 )
      {
        v190 = 1065353216;
        if ( *(float *)&dword_1412FF68C >= 0.1 )
        {
          v12 = &v190;
          if ( *(float *)&dword_1412FF68C <= v8.m128_f32[0] )
            v12 = &dword_1412FF68C;
          v11 = *(float *)v12;
        }
        else
        {
          v11 = 0.1;
        }
        v13 = v11 * 20.0;
        v191 = 1065353216;
        if ( *(float *)&dword_1412FF68C >= 0.1 )
        {
          v15 = &v191;
          if ( *(float *)&dword_1412FF68C <= v8.m128_f32[0] )
            v15 = &dword_1412FF68C;
          v14 = *(float *)v15;
        }
        else
        {
          v14 = 0.1;
        }
        v16 = v14 * 60.0;
        v17 = v13 + 40.0;
        if ( (float)(v13 + 40.0) <= v16 )
          v17 = v16;
        if ( *((_BYTE *)a1 + 476) != 0 )
        {
          if ( *((_BYTE *)a1 + 476) == 1 )
          {
            if ( v9 <= (float)(v17 + 20.0) )
            {
              if ( (*((_BYTE *)a1 + 522) & 1) == 0 && (float)(v17 + 10.0) > v9 )
              {
                v61 = a1 + 48;
                if ( (unsigned __int64)a1[51] > 0xF )
                  v61 = (_QWORD *)*v61;
                v62 = sub_1400B62E0(a1, a2: &v180, a3: v61, a4: 2);
                sub_1400B1720(a1: a1 + 46, a2: v62);
                sub_14064F3F0(a1: v180.m128_u64[1]);
                *((_BYTE *)a1 + 522) |= 1u;
                *((_BYTE *)a1 + 476) = 2;
              }
            }
            else
            {
              sub_14064F3F0(a1: a1[47]);
              a1[46] = 0;
              a1[47] = 0;
              *((_BYTE *)a1 + 522) &= ~1u;
              *((_BYTE *)a1 + 476) = 0;
            }
          }
          else
          {
            if ( *((_BYTE *)a1 + 476) == 2 )
            {
              v43 = a1[46];
              if ( v43 != 0 && (unsigned __int8)sub_1406529A0(a1: v43) != 0 )
              {
                if ( v9 <= (float)(v17 * 0.89999998) )
                {
                  v55 = *a1;
                  v56 = sub_1400B5440(a1: v45, a2: v44);
                  v57 = (__m128 *)(*(__int64 (__fastcall **)(__int64 *, __int64))(v55 + 696))(a1, a2: v56);
                  v186 = *v57;
                  v187 = v57[1];
                  v188 = v57[2];
                  v189 = v57[3];
                  if ( (*((_BYTE *)a1 + 521) & 8) != 0 )
                  {
                    sub_140096450(a1: &v180);
                    v60 = sub_1400B5440(a1: v59, a2: v58);
                    sub_1400CC650(a1, a2: &v176, a3: v60);
                    sub_14009D930(a1: &v186, a2: &v180, a3: &v176);
                  }
                  sub_14069E540(
                    a1: (_DWORD)a3,
                    a2: a1[46],
                    a3: (unsigned int)&v186,
                    a4: 0,
                    a5: 0,
                    a6: v8.m128_i32[0],
                    a7: 0,
                    a8: 0);
                }
                else
                {
                  v46 = v8.m128_f32[0] - (float)((float)(v9 - (float)(v17 * 0.89999998)) / (float)(v17 * 0.1));
                  v177[0] = v46;
                  *(float *)&v198 = 1.0;
                  if ( v46 >= 0.0 )
                  {
                    v48 = (float *)&v198;
                    v45 = v177;
                    if ( v46 <= v8.m128_f32[0] )
                      v48 = v177;
                    v47 = *(_DWORD *)v48;
                  }
                  else
                  {
                    v47 = 0;
                  }
                  v49 = *a1;
                  v50 = sub_1400B5440(a1: v45, a2: v44);
                  v51 = (__m128 *)(*(__int64 (__fastcall **)(__int64 *, __int64))(v49 + 696))(a1, a2: v50);
                  v186 = *v51;
                  v187 = v51[1];
                  v188 = v51[2];
                  v189 = v51[3];
                  if ( (*((_BYTE *)a1 + 521) & 8) != 0 )
                  {
                    sub_140096450(a1: &v180);
                    v54 = sub_1400B5440(a1: v53, a2: v52);
                    sub_1400CC650(a1, a2: &v176, a3: v54);
                    sub_14009D930(a1: &v186, a2: &v180, a3: &v176);
                  }
                  sub_14069E540(
                    a1: (_DWORD)a3,
                    a2: a1[46],
                    a3: (unsigned int)&v186,
                    a4: 0,
                    a5: 0,
                    a6: v47,
                    a7: 0,
                    a8: 0);
                }
              }
              if ( v9 > (float)(v17 + 20.0) )
              {
                *((_BYTE *)a1 + 476) = 1;
                goto LABEL_111;
              }
              v33 = (float)(v13 + 10.0) <= v9;
              goto LABEL_68;
            }
            v18 = (unsigned int)*((unsigned __int8 *)a1 + 476) - 3;
            if ( *((_BYTE *)a1 + 476) != 3 )
            {
              if ( *((_BYTE *)a1 + 476) != 5 )
                goto LABEL_111;
              v19 = sub_1400EAA20(a1: a1 + 44);
              v20 = (_QWORD *)sub_1400EA230(a1: v19, a2: &v179);
              v21 = 1;
              v198 = 1;
              v24 = (*v20 == 0
                  || (v22 = sub_1400EA230(a1: v19, a2: &v180),
                      v21 = 3,
                      v198 = 3,
                      v23 = sub_1400E4F70(a1: v22),
                      (unsigned __int8)sub_1406529A0(a1: v23) == 0))
                 && a1[46] != 0;
              if ( (v21 & 2) != 0 )
              {
                v198 = v21 & 0xFFFFFFFD;
                sub_14064F3F0(a1: v180.m128_u64[1]);
              }
              sub_14064F3F0(a1: v179.m128_u64[1]);
              if ( v24 )
              {
                v27 = *a1;
                v28 = sub_1400B5440(a1: v26, a2: v25);
                v29 = (__m128 *)(*(__int64 (__fastcall **)(__int64 *, __int64))(v27 + 696))(a1, a2: v28);
                v186 = *v29;
                v187 = v29[1];
                v188 = v29[2];
                v189 = v29[3];
                if ( (*((_BYTE *)a1 + 521) & 8) != 0 )
                {
                  sub_140096450(a1: &v180);
                  v32 = sub_1400B5440(a1: v31, a2: v30);
                  sub_1400CC650(a1, a2: &v176, a3: v32);
                  sub_14009D930(a1: &v186, a2: &v180, a3: &v176);
                }
                sub_14069E540(
                  a1: (_DWORD)a3,
                  a2: a1[46],
                  a3: (unsigned int)&v186,
                  a4: 0,
                  a5: 0,
                  a6: v8.m128_i32[0],
                  a7: 0,
                  a8: 0);
              }
              v33 = v9 <= (float)(v13 + 20.0);
LABEL_68:
              if ( !v33 )
                *((_BYTE *)a1 + 476) = 3;
              goto LABEL_111;
            }
            if ( (*((_BYTE *)a1 + 522) & 0x20) != 0 )
            {
              if ( (*((_BYTE *)a1 + 236) & 2) != 0 )
              {
                v34 = *a1;
                v35 = sub_140101B20(a1: v18);
                (*(void (__fastcall **)(__int64 *, __int64, _QWORD, __int64 *, __int64))(v34 + 24))(
                  a1,
                  a2: 58011,
                  a3: 0,
                  a4: a1,
                  a5: v35);
              }
              v36 = *a1;
              v37 = sub_140101B20(a1: v18);
              (*(void (__fastcall **)(__int64 *, __int64))(v36 + 208))(a1, a2: v37);
              *((_BYTE *)a1 + 476) = 2;
            }
            else if ( (unsigned __int8)sub_1405F8C30(a1: a1 + 44) != 0 )
            {
              if ( *((_DWORD *)a1 + 72) != -1 || *((_DWORD *)a1 + 73) != -1 )
              {
                v39 = *a1;
                v40 = sub_140101B20(a1: v38);
                (*(void (__fastcall **)(__int64 *, __int64, _QWORD, __int64 *, __int64))(v39 + 24))(
                  a1,
                  a2: 58010,
                  a3: 0,
                  a4: a1,
                  a5: v40);
                v41 = *((unsigned int *)a1 + 72);
                if ( (_DWORD)v41 != -1 && (a1[65] & 8) == 0 )
                  sub_1400D0D00(a1, a2: v41, a3: 0);
                v42 = *((unsigned int *)a1 + 73);
                if ( (_DWORD)v42 != -1 && (a1[65] & 0x10) == 0 )
                  sub_1400D0D00(a1, a2: v42, a3: 0);
              }
              (*(void (__fastcall **)(__int64 *))(*a1 + 904))(a1);
              *((_BYTE *)a1 + 476) = 5;
            }
          }
        }
        else if ( (float)(v17 + 10.0) > v9 )
        {
          *((_BYTE *)a1 + 476) = 1;
        }
      }
      else if ( (*((_BYTE *)a1 + 522) & 0x20) != 0 )
      {
        if ( v9 > 90.0 )
        {
          if ( (*((_BYTE *)a1 + 236) & 2) != 0 )
          {
            v67 = *a1;
            v68 = sub_140101B20(a1: v10);
            (*(void (__fastcall **)(__int64 *, __int64, _QWORD, __int64 *, __int64))(v67 + 24))(
              a1,
              a2: 58011,
              a3: 0,
              a4: a1,
              a5: v68);
          }
          v69 = *a1;
          v70 = sub_140101B20(a1: v10);
          (*(void (__fastcall **)(__int64 *, __int64))(v69 + 208))(a1, a2: v70);
        }
      }
      else if ( v9 < 75.0 )
      {
        if ( *((_DWORD *)a1 + 72) != -1 || *((_DWORD *)a1 + 73) != -1 )
        {
          v63 = *a1;
          v64 = sub_140101B20(a1: v10);
          (*(void (__fastcall **)(__int64 *, __int64, _QWORD, __int64 *, __int64))(v63 + 24))(
            a1,
            a2: 58010,
            a3: 0,
            a4: a1,
            a5: v64);
          v65 = *((unsigned int *)a1 + 72);
          if ( (_DWORD)v65 != -1 && (a1[65] & 8) == 0 )
            sub_1400D0D00(a1, a2: v65, a3: 0);
          v66 = *((unsigned int *)a1 + 73);
          if ( (_DWORD)v66 != -1 && (a1[65] & 0x10) == 0 )
            sub_1400D0D00(a1, a2: v66, a3: 0);
        }
        (*(void (__fastcall **)(__int64 *))(*a1 + 904))(a1);
      }
    }
    else
    {
      v71 = (__int64)(a1 + 44);
      if ( *((char *)a1 + 522) >= 0 )
      {
        v121 = sub_1405F8CF0(a1: v71);
        v122 = (__int64 *)v121;
        if ( v121 != 0 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v121 + 640LL))(a1: v121) == 0 )
        {
          v124 = *v122;
          v125 = sub_140101B20(a1: v123);
          LOBYTE(v126) = 1;
          (*(void (__fastcall **)(__int64 *, __int64, __int64))(v124 + 632))(a1: v122, a2: v126, a3: v125);
        }
      }
      else
      {
        v72 = sub_1405F8CF0(a1: v71);
        v73 = (__int64 *)v72;
        if ( v72 != 0 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v72 + 640LL))(a1: v72) != 0 )
        {
          v75 = *v73;
          v76 = sub_140101B20(a1: v74);
          (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(v75 + 632))(a1: v73, a2: 0, a3: v76);
        }
        if ( (*((_BYTE *)a1 + 522) & 1) != 0 )
        {
          if ( a1[46] != 0 )
          {
            v79 = sub_1400D3900(a1: a1 + 46);
            if ( (unsigned __int8)sub_1406529A0(a1: v79) != 0 )
            {
              v82 = *a1;
              v83 = sub_1400B5440(a1: v81, a2: v80);
              v84 = (__m128 *)(*(__int64 (__fastcall **)(__int64 *, __int64))(v82 + 696))(a1, a2: v83);
              v181 = *v84;
              v182 = v84[1];
              v183 = v84[2];
              v184 = v84[3];
              if ( (*((_BYTE *)a1 + 521) & 8) != 0 )
              {
                sub_14009D650(a1: &v181);
                v85 = *a1;
                v88 = sub_1400B5440(a1: v87, a2: v86);
                v89 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v85 + 696))(a1, a2: v88);
                v90 = (__m128)*(unsigned int *)(v89 + 16);
                v179 = v90;
                v91 = *(float *)v89;
                v90.m128_f32[0] = (float)((float)((float)(v90.m128_f32[0] * v181.m128_f32[1])
                                                + (float)(*(float *)v89 * v181.m128_f32[0]))
                                        + (float)(*(float *)(v89 + 32) * v181.m128_f32[2]))
                                + (float)(*(float *)(v89 + 48) * v181.m128_f32[3]);
                v180 = v90;
                v198 = *(unsigned int *)(v89 + 20);
                v92 = *(float *)(v89 + 4);
                v93 = *(float *)(v89 + 36);
                v192 = (float)((float)((float)(*(float *)&v198 * v181.m128_f32[1]) + (float)(v92 * v181.m128_f32[0]))
                             + (float)(v93 * v181.m128_f32[2]))
                     + (float)(*(float *)(v89 + 52) * v181.m128_f32[3]);
                v178 = *(float *)(v89 + 24);
                v94 = *(float *)(v89 + 8);
                v95 = *(float *)(v89 + 40);
                v96 = *(float *)(v89 + 56);
                v193 = (float)((float)((float)(v178 * v181.m128_f32[1]) + (float)(v94 * v181.m128_f32[0]))
                             + (float)(v95 * v181.m128_f32[2]))
                     + (float)(v96 * v181.m128_f32[3]);
                v177[0] = *(float *)(v89 + 28);
                v97 = *(float *)(v89 + 12);
                v98 = *(float *)(v89 + 44);
                v90.m128_i32[0] = *(_DWORD *)(v89 + 60);
                v194 = (float)((float)((float)(v177[0] * v181.m128_f32[1]) + (float)(v97 * v181.m128_f32[0]))
                             + (float)(v98 * v181.m128_f32[2]))
                     + (float)(v90.m128_f32[0] * v181.m128_f32[3]);
                v99 = (__m128)v179.m128_u32[0];
                v99.m128_f32[0] = (float)((float)((float)(v179.m128_f32[0] * v182.m128_f32[1])
                                                + (float)(v91 * v182.m128_f32[0]))
                                        + (float)(*(float *)(v89 + 32) * v182.m128_f32[2]))
                                + (float)(*(float *)(v89 + 48) * v182.m128_f32[3]);
                v176 = v99;
                v100 = (float)((float)((float)(*(float *)&v198 * v182.m128_f32[1]) + (float)(v92 * v182.m128_f32[0]))
                             + (float)(v93 * v182.m128_f32[2]))
                     + (float)(*(float *)(v89 + 52) * v182.m128_f32[3]);
                v101 = (float)((float)((float)(v178 * v182.m128_f32[1]) + (float)(v94 * v182.m128_f32[0]))
                             + (float)(v95 * v182.m128_f32[2]))
                     + (float)(v96 * v182.m128_f32[3]);
                v102 = (float)((float)((float)(v177[0] * v182.m128_f32[1]) + (float)(v97 * v182.m128_f32[0]))
                             + (float)(v98 * v182.m128_f32[2]))
                     + (float)(v90.m128_f32[0] * v182.m128_f32[3]);
                v103 = (__m128)v179.m128_u32[0];
                v103.m128_f32[0] = (float)((float)((float)(v179.m128_f32[0] * v183.m128_f32[1])
                                                 + (float)(*(float *)v89 * v183.m128_f32[0]))
                                         + (float)(*(float *)(v89 + 32) * v183.m128_f32[2]))
                                 + (float)(*(float *)(v89 + 48) * v183.m128_f32[3]);
                v104 = (float)((float)((float)(*(float *)&v198 * v183.m128_f32[1])
                                     + (float)(*(float *)(v89 + 4) * v183.m128_f32[0]))
                             + (float)(*(float *)(v89 + 36) * v183.m128_f32[2]))
                     + (float)(*(float *)(v89 + 52) * v183.m128_f32[3]);
                v90.m128_f32[0] = (float)((float)((float)(v178 * v183.m128_f32[1]) + (float)(v94 * v183.m128_f32[0]))
                                        + (float)(*(float *)(v89 + 40) * v183.m128_f32[2]))
                                + (float)(*(float *)(v89 + 56) * v183.m128_f32[3]);
                v105 = *(float *)(v89 + 60);
                v106 = v179;
                v106.m128_f32[0] = v179.m128_f32[0] * v184.m128_f32[1];
                v179 = v106;
                v107 = v106;
                v107.m128_f32[0] = (float)((float)(v106.m128_f32[0] + (float)(*(float *)v89 * v184.m128_f32[0]))
                                         + (float)(*(float *)(v89 + 32) * v184.m128_f32[2]))
                                 + (float)(*(float *)(v89 + 48) * v184.m128_f32[3]);
                v179 = v107;
                *(float *)&v198 = (float)((float)((float)(*(float *)&v198 * v184.m128_f32[1])
                                                + (float)(*(float *)(v89 + 4) * v184.m128_f32[0]))
                                        + (float)(*(float *)(v89 + 36) * v184.m128_f32[2]))
                                + (float)(*(float *)(v89 + 52) * v184.m128_f32[3]);
                v178 = (float)(v178 * v184.m128_f32[1]) + (float)(v94 * v184.m128_f32[0]);
                v108 = (float)(v178 + (float)(*(float *)(v89 + 40) * v184.m128_f32[2]))
                     + (float)(*(float *)(v89 + 56) * v184.m128_f32[3]);
                v109 = _mm_shuffle_ps(v180, v180, 225);
                v109.m128_f32[0] = v192;
                v110 = _mm_shuffle_ps(v109, v109, 198);
                v110.m128_f32[0] = v193;
                v111 = _mm_shuffle_ps(v110, v110, 39);
                v111.m128_f32[0] = v194;
                v186 = _mm_shuffle_ps(v111, v111, 57);
                v181 = v186;
                v112 = _mm_shuffle_ps(v176, v176, 225);
                v112.m128_f32[0] = v100;
                v113 = _mm_shuffle_ps(v112, v112, 198);
                v113.m128_f32[0] = v101;
                v114 = _mm_shuffle_ps(v113, v113, 39);
                v114.m128_f32[0] = v102;
                v187 = _mm_shuffle_ps(v114, v114, 57);
                v182 = v187;
                v115 = _mm_shuffle_ps(v103, v103, 225);
                v115.m128_f32[0] = v104;
                v116 = _mm_shuffle_ps(v115, v115, 198);
                v116.m128_f32[0] = v90.m128_f32[0];
                v117 = _mm_shuffle_ps(v116, v116, 39);
                v117.m128_f32[0] = (float)((float)((float)(v177[0] * v183.m128_f32[1]) + (float)(v97 * v183.m128_f32[0]))
                                         + (float)(v98 * v183.m128_f32[2]))
                                 + (float)(v105 * v183.m128_f32[3]);
                v188 = _mm_shuffle_ps(v117, v117, 57);
                v183 = v188;
                v118 = _mm_shuffle_ps(v179, v179, 225);
                v118.m128_f32[0] = *(float *)&v198;
                v119 = _mm_shuffle_ps(v118, v118, 198);
                v119.m128_f32[0] = v108;
                v120 = _mm_shuffle_ps(v119, v119, 39);
                v120.m128_f32[0] = (float)((float)((float)(v177[0] * v184.m128_f32[1]) + (float)(v97 * v184.m128_f32[0]))
                                         + (float)(v98 * v184.m128_f32[2]))
                                 + (float)(v105 * v184.m128_f32[3]);
                v189 = _mm_shuffle_ps(v120, v120, 57);
                v184 = v189;
                v8 = (__m128)0x3F800000u;
                v9 = v185;
              }
              sub_14069E540(
                a1: (_DWORD)a3,
                a2: a1[46],
                a3: (unsigned int)&v181,
                a4: 0,
                a5: 0,
                a6: v8.m128_i32[0],
                a7: 0,
                a8: 0);
            }
          }
        }
        else
        {
          v77 = a1 + 48;
          if ( (unsigned __int64)a1[51] > 0xF )
            v77 = (_QWORD *)*v77;
          v78 = sub_1400B62E0(a1, a2: &v180, a3: v77, a4: 2);
          sub_1400B1720(a1: a1 + 46, a2: v78);
          sub_14064F3F0(a1: v180.m128_u64[1]);
          *((_BYTE *)a1 + 522) |= 1u;
        }
      }
    }
LABEL_111:
    v127 = sub_1405F8CF0(a1: (__int64)(a1 + 44));
    v128 = (unsigned int *)v127;
    if ( v127 != 0 )
      sub_1400EA230(a1: v127, a2: &v195);
    else
      v195 = 0;
    if ( (a1[65] & 0x40) == 0
      && (*((_BYTE *)a1 + 522) & 0x22) == 0x22
      && (_QWORD)v195 != 0
      && (unsigned __int8)sub_1406529A0(a1: v195) != 0 )
    {
      sub_1400B4560(a1);
      sub_1400FCF00(a1: v128);
    }
    if ( sub_1406214A0(a1: a2) != 0 )
    {
      sub_1406214A0(a1: a2);
      if ( *((float *)a1 + 70) < v9 || (*((_BYTE *)a1 + 522) & 0x20) == 0 || (*((_BYTE *)a1 + 145) & 0x40) == 0 )
      {
        *((_BYTE *)a1 + 520) &= ~4u;
        return (_UNKNOWN **)sub_14064F3F0(a1: *((_QWORD *)&v195 + 1));
      }
      *((_BYTE *)a1 + 520) |= 4u;
      if ( (*((_BYTE *)a1 + 522) & 8) != 0
        && v128 != nullptr
        && (*(unsigned __int8 (__fastcall **)(unsigned int *))(*(_QWORD *)v128 + 640LL))(a1: v128) != 0 )
      {
        v129 = a1[41];
        v130 = *((_DWORD *)a1 + 84);
        v131 = (__m128)v128[172];
        v132 = (float *)sub_1400CA820(a1, a2: &v179);
        v133 = v131.m128_f32[0] * v132[2];
        v176.m128_u64[0] = _mm_mul_ps((__m128)*(unsigned __int64 *)v132, _mm_shuffle_ps(v131, v131, 0)).m128_u64[0];
        v176.m128_f32[2] = v133;
        sub_1400C9E00(a1, a2: &v176);
        a1[41] = v129;
        *((_DWORD *)a1 + 84) = v130;
      }
    }
    if ( byte_141379E50 == 0 )
    {
      v134 = sub_1406214C0(a1: a2);
      if ( (unsigned int)sub_1400B41D0(a1: v134 + 1072) == 2
        && v9 < 10.0
        && ((*(unsigned int (__fastcall **)(__int64 *))(*a1 + 944))(a1) != 0
         || (*(unsigned int (__fastcall **)(__int64 *))(*a1 + 952))(a1) != 0) )
      {
        v181 = 0;
        v182 = 0;
        v183 = 0;
        v184 = 0;
        sub_14009D7F0(a1: &v181);
        v180 = 0;
        v135 = v8.m128_f32[0];
        if ( v9 > 6.0 )
          v135 = v8.m128_f32[0] - (float)((float)(v9 - 6.0) * 0.25);
        *(float *)&v198 = v135;
        v136 = sub_1400B4560(a1) + *((float *)a1 + 68);
        *((float *)a1 + 68) = v136;
        if ( v136 < 0.5 )
        {
          v135 = v135 * (float)(v136 + v136);
          *(float *)&v198 = v135;
        }
        if ( (*(unsigned int (__fastcall **)(__int64 *))(*a1 + 944))(a1) != 0 )
        {
          v139 = sub_1400B5440(a1: v138, a2: v137);
          sub_1400CC650(a1, a2: &v176, a3: v139);
          v140 = (*(float (__fastcall **)(__int64 *))(*a1 + 960))(a1);
          v176.m128_f32[1] = v176.m128_f32[1] + v140;
          v141 = *((float *)a1 + 77);
          v144 = sub_1400B5440(a1: v143, a2: v142);
          v145 = (float *)sub_1400CC730(a1, a2: v196, a3: v144);
          v147 = v145[2];
          v148 = v145[1];
          v149 = v145[3];
          v150 = (float)((float)(v141 * v148) + (float)(v149 * 0.0)) - (float)(v147 * 0.0);
          v151 = *v145;
          v152 = (float)((float)(v149 * 0.0) + (float)(v147 * 0.0)) - (float)(v141 * *v145);
          v153 = (float)((float)(v141 * v149) + (float)(*v145 * 0.0)) - (float)(v148 * 0.0);
          v154 = -*v145;
          v155 = (float)((float)(v154 * 0.0) - (float)(v148 * 0.0)) - (float)(v141 * v147);
          v176.m128_f32[0] = v176.m128_f32[0]
                           + (float)((float)((float)((float)(v149 * v150) - (float)(*v145 * v155)) - (float)(v147 * v152))
                                   - (float)((float)-v148 * v153));
          v176.m128_f32[1] = v176.m128_f32[1]
                           + (float)((float)((float)((float)(v149 * v152) - (float)(v148 * v155)) - (float)(v151 * v153))
                                   - (float)((float)-v147 * v150));
          v176.m128_f32[2] = v176.m128_f32[2]
                           + (float)((float)((float)((float)(v149 * v153) - (float)(v147 * v155)) - (float)(v148 * v150))
                                   - (float)(v154 * v152));
          v156 = (float)((float)((float)(a3[81] - v176.m128_f32[1]) * (float)(a3[81] - v176.m128_f32[1]))
                       + (float)((float)(a3[80] - v176.m128_f32[0]) * (float)(a3[80] - v176.m128_f32[0])))
               + (float)((float)(a3[82] - v176.m128_f32[2]) * (float)(a3[82] - v176.m128_f32[2]));
          if ( v156 < 0.0 )
            v157 = sub_140A00700(a1: v146);
          else
            v157 = fsqrt(v156);
          v186 = 0;
          v187 = 0;
          v188 = 0;
          v189 = 0;
          sub_14009EAB0(a1: &v186, a2: a3 + 80, a3: &v176, a4: &qword_140EF4CF0);
          v158 = _mm_add_ps(
                   _mm_add_ps(
                     _mm_add_ps(
                       _mm_mul_ps(v187, _mm_shuffle_ps((__m128)v182.m128_u32[1], (__m128)v182.m128_u32[1], 0)),
                       _mm_mul_ps(v186, _mm_shuffle_ps((__m128)v182.m128_u32[0], (__m128)v182.m128_u32[0], 0))),
                     _mm_mul_ps(v188, _mm_shuffle_ps((__m128)v182.m128_u32[2], (__m128)v182.m128_u32[2], 0))),
                   _mm_mul_ps(v189, _mm_shuffle_ps((__m128)v182.m128_u32[3], (__m128)v182.m128_u32[3], 0)));
          v159 = _mm_add_ps(
                   _mm_add_ps(
                     _mm_add_ps(
                       _mm_mul_ps(v187, _mm_shuffle_ps((__m128)v183.m128_u32[1], (__m128)v183.m128_u32[1], 0)),
                       _mm_mul_ps(v186, _mm_shuffle_ps((__m128)v183.m128_u32[0], (__m128)v183.m128_u32[0], 0))),
                     _mm_mul_ps(v188, _mm_shuffle_ps((__m128)v183.m128_u32[2], (__m128)v183.m128_u32[2], 0))),
                   _mm_mul_ps(v189, _mm_shuffle_ps((__m128)v183.m128_u32[3], (__m128)v183.m128_u32[3], 0)));
          v186 = _mm_add_ps(
                   _mm_add_ps(
                     _mm_add_ps(
                       _mm_mul_ps(v187, _mm_shuffle_ps((__m128)v181.m128_u32[1], (__m128)v181.m128_u32[1], 0)),
                       _mm_mul_ps(v186, _mm_shuffle_ps((__m128)v181.m128_u32[0], (__m128)v181.m128_u32[0], 0))),
                     _mm_mul_ps(v188, _mm_shuffle_ps((__m128)v181.m128_u32[2], (__m128)v181.m128_u32[2], 0))),
                   _mm_mul_ps(v189, _mm_shuffle_ps((__m128)v181.m128_u32[3], (__m128)v181.m128_u32[3], 0)));
          v187 = v158;
          v188 = v159;
          v8 = (__m128)0x3F800000u;
          v189 = _mm_movelh_ps((__m128)v176.m128_u64[0], _mm_unpacklo_ps((__m128)v176.m128_u32[2], (__m128)0x3F800000u));
          if ( v157 >= 3.0 )
          {
            v135 = *(float *)&v198;
          }
          else
          {
            v199 = 1065353216;
            v160 = v157 - 2.0;
            v185 = v160;
            if ( v160 >= 0.0 )
            {
              v161 = (float *)&v199;
              if ( v160 <= 1.0 )
                v161 = &v185;
              v135 = *(float *)&v198 * *v161;
            }
            else
            {
              v135 = *(float *)&v198 * 0.0;
            }
          }
          v179.m128_u64[0] = 0x3F28F5C33F28F5C3LL;
          v179.m128_i32[2] = 1059648963;
          v179.m128_f32[3] = v135 * 0.80000001;
          v162 = sub_1400891B0(a1: a1 + 30, a2: 0);
          sub_1406A1D20(
            a1: (_DWORD)a3,
            a2: xmmword_14137C780,
            a3: v162,
            a4: (unsigned int)&v180,
            a5: (__int64)&v179,
            a6: 1065353216,
            a7: 0,
            a8: 0,
            a9: 1065353216,
            a10: 1065353216,
            a11: 0,
            a12: 0,
            a13: 98372,
            a14: (__int64)&v186,
            a15: 0,
            a16: 0,
            a17: 0);
        }
        if ( (*(unsigned int (__fastcall **)(__int64 *))(*a1 + 952))(a1) != 0 )
        {
          v165 = sub_1400B5440(a1: v164, a2: v163);
          sub_1400CC650(a1, a2: &v176, a3: v165);
          v167 = (*(float (__fastcall **)(__int64 *))(*a1 + 968))(a1);
          v176.m128_f32[1] = v176.m128_f32[1] + v167;
          v168 = (float)((float)((float)(a3[81] - v176.m128_f32[1]) * (float)(a3[81] - v176.m128_f32[1]))
                       + (float)((float)(a3[80] - v176.m128_f32[0]) * (float)(a3[80] - v176.m128_f32[0])))
               + (float)((float)(a3[82] - v176.m128_f32[2]) * (float)(a3[82] - v176.m128_f32[2]));
          if ( v168 < 0.0 )
            v169 = sub_140A00700(a1: v166);
          else
            v169 = fsqrt(v168);
          v186 = 0;
          v187 = 0;
          v188 = 0;
          v189 = 0;
          sub_14009EAB0(a1: &v186, a2: a3 + 80, a3: &v176, a4: &qword_140EF4CF0);
          v170 = _mm_add_ps(
                   _mm_add_ps(
                     _mm_add_ps(
                       _mm_mul_ps(_mm_shuffle_ps((__m128)v182.m128_u32[1], (__m128)v182.m128_u32[1], 0), v187),
                       _mm_mul_ps(_mm_shuffle_ps((__m128)v182.m128_u32[0], (__m128)v182.m128_u32[0], 0), v186)),
                     _mm_mul_ps(_mm_shuffle_ps((__m128)v182.m128_u32[2], (__m128)v182.m128_u32[2], 0), v188)),
                   _mm_mul_ps(_mm_shuffle_ps((__m128)v182.m128_u32[3], (__m128)v182.m128_u32[3], 0), v189));
          v171 = _mm_add_ps(
                   _mm_add_ps(
                     _mm_add_ps(
                       _mm_mul_ps(_mm_shuffle_ps((__m128)v183.m128_u32[1], (__m128)v183.m128_u32[1], 0), v187),
                       _mm_mul_ps(_mm_shuffle_ps((__m128)v183.m128_u32[0], (__m128)v183.m128_u32[0], 0), v186)),
                     _mm_mul_ps(_mm_shuffle_ps((__m128)v183.m128_u32[2], (__m128)v183.m128_u32[2], 0), v188)),
                   _mm_mul_ps(_mm_shuffle_ps((__m128)v183.m128_u32[3], (__m128)v183.m128_u32[3], 0), v189));
          v186 = _mm_add_ps(
                   _mm_add_ps(
                     _mm_add_ps(
                       _mm_mul_ps(_mm_shuffle_ps((__m128)v181.m128_u32[1], (__m128)v181.m128_u32[1], 0), v187),
                       _mm_mul_ps(_mm_shuffle_ps((__m128)v181.m128_u32[0], (__m128)v181.m128_u32[0], 0), v186)),
                     _mm_mul_ps(_mm_shuffle_ps((__m128)v181.m128_u32[2], (__m128)v181.m128_u32[2], 0), v188)),
                   _mm_mul_ps(_mm_shuffle_ps((__m128)v181.m128_u32[3], (__m128)v181.m128_u32[3], 0), v189));
          v187 = v170;
          v188 = v171;
          v189 = _mm_movelh_ps((__m128)v176.m128_u64[0], _mm_unpacklo_ps((__m128)v176.m128_u32[2], v8));
          if ( v169 < 3.0 )
          {
            *(float *)&v198 = 1.0;
            v172 = v169 - 2.0;
            v199 = LODWORD(v172);
            if ( v172 >= 0.0 )
            {
              v174 = (float *)&v198;
              if ( v172 <= v8.m128_f32[0] )
                v174 = (float *)&v199;
              v173 = *v174;
            }
            else
            {
              v173 = 0.0;
            }
            v135 = v135 * v173;
          }
          v179.m128_u64[0] = 0x3F28F5C33F28F5C3LL;
          v179.m128_i32[2] = 1059648963;
          v179.m128_f32[3] = v135 * 0.80000001;
          v175 = sub_1400891B0(a1: a1 + 32, a2: 0);
          sub_1406A1D20(
            a1: (_DWORD)a3,
            a2: xmmword_14137C780,
            a3: v175,
            a4: (unsigned int)&v180,
            a5: (__int64)&v179,
            a6: v8.m128_i32[0],
            a7: 0,
            a8: 0,
            a9: v8.m128_i32[0],
            a10: v8.m128_i32[0],
            a11: 0,
            a12: 0,
            a13: 98372,
            a14: (__int64)&v186,
            a15: 0,
            a16: 0,
            a17: 0);
        }
      }
    }
    sub_1400D6040(a1, a2, a3);
    return (_UNKNOWN **)sub_14064F3F0(a1: *((_QWORD *)&v195 + 1));
  }
  return result;
}
