// Hex-Rays export, baseline 645.348067; descriptive analysis label.
_UNKNOWN **__fastcall sub_140112970(__int64 a1, __int64 a2, float *a3)
{
  _UNKNOWN **result; // rax
  float *v4; // rbx
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r9
  _QWORD *v9; // r12
  __int64 v10; // r8
  unsigned int v11; // r13d
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rsi
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // r15
  unsigned __int64 v17; // rcx
  __int64 v18; // rbx
  unsigned __int64 v19; // rbx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  double v29; // xmm0_8
  bool v30; // zf
  float v31; // xmm10_4
  __int64 v32; // rbx
  __int64 v33; // rax
  float *v34; // rax
  __int64 v35; // rcx
  float v36; // xmm7_4
  float v37; // xmm6_4
  float v38; // xmm8_4
  float v39; // xmm2_4
  float v40; // xmm15_4
  __int64 v41; // r14
  unsigned __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // r12
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // r8
  unsigned __int64 i; // rbx
  _QWORD *v48; // r8
  __int64 v49; // r9
  unsigned __int64 v50; // rsi
  __int64 v51; // r14
  unsigned __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // r12
  _QWORD *v55; // rdx
  unsigned __int64 v56; // r8
  unsigned __int64 j; // rbx
  float v58; // xmm6_4
  float v59; // xmm14_4
  unsigned int v60; // r15d
  __int64 v61; // rsi
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // r14
  __int64 v65; // rdx
  __int64 v66; // rcx
  int v67; // r12d
  float v68; // xmm10_4
  __int64 v69; // rbx
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rbx
  float v73; // xmm8_4
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rax
  float v77; // xmm7_4
  float v78; // xmm9_4
  double v79; // xmm0_8
  __int64 v80; // r9
  __int64 v81; // r8
  float v82; // xmm2_4
  unsigned __int64 v83; // r10
  float v84; // xmm9_4
  __int64 v85; // r9
  __int64 v86; // rcx
  unsigned __int64 v87; // r10
  __int64 v88; // r9
  __int64 v89; // rcx
  unsigned __int64 v90; // r10
  __int64 v91; // r9
  __int64 v92; // rax
  float v93; // xmm1_4
  unsigned __int64 v94; // rsi
  __int64 v95; // r10
  unsigned __int64 v96; // rdx
  unsigned __int64 v97; // r9
  __int64 v98; // rbx
  __int64 v99; // rsi
  __int64 v100; // r14
  __int64 v101; // r14
  __int64 v102; // r14
  __int64 v103; // r9
  unsigned __int64 v104; // r10
  unsigned __int64 v105; // rdx
  __int64 v106; // r10
  __int64 v107; // rbx
  __int64 v108; // rbx
  __int64 v109; // rbx
  int v110; // r14d
  __int64 v111; // rbx
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rcx
  __int64 v115; // rax
  float v116; // xmm6_4
  float v117; // xmm7_4
  float v118; // xmm12_4
  float v119; // xmm13_4
  float v120; // xmm14_4
  float v121; // xmm15_4
  __int64 v122; // rbx
  __int64 v123; // r13
  __int64 v124; // rsi
  int v125; // r12d
  int v126; // eax
  float v127; // xmm5_4
  int v128; // r15d
  float v129; // xmm10_4
  float v130; // xmm0_4
  float v131; // xmm3_4
  float v132; // xmm2_4
  float v133; // xmm4_4
  __int64 v134; // rcx
  float v135; // xmm7_4
  double v136; // xmm0_8
  float v137; // xmm6_4
  __int64 v138; // r8
  __int64 v139; // rcx
  float v140; // xmm7_4
  unsigned __int64 v141; // r9
  float v142; // xmm6_4
  float v143; // xmm1_4
  float v144; // xmm0_4
  __int64 v145; // r8
  __int64 v146; // rcx
  float v147; // xmm3_4
  float v148; // xmm1_4
  float v149; // xmm0_4
  unsigned __int64 v150; // r9
  __int64 v151; // r8
  __int64 v152; // rcx
  float v153; // xmm4_4
  float v154; // xmm1_4
  float v155; // xmm0_4
  unsigned __int64 v156; // r10
  __int64 v157; // r8
  unsigned __int64 v158; // rdx
  unsigned __int64 v159; // rax
  __int64 v160; // r10
  __int64 v161; // r14
  __int64 v162; // r14
  __int64 v163; // r14
  __int64 v164; // r8
  unsigned __int64 v165; // r10
  unsigned __int64 v166; // rdx
  unsigned __int64 v167; // rax
  __int64 v168; // r10
  __int64 v169; // r14
  __int64 v170; // r14
  __int64 v171; // r14
  unsigned __int64 v172; // r9
  __int64 v173; // r8
  __int64 v174; // rax
  float v175; // xmm7_4
  float v176; // xmm6_4
  float v177; // xmm0_4
  _OWORD *v178; // rax
  __int64 v179; // rcx
  __int64 v180; // rax
  char v181; // al
  __int64 v182; // [rsp+28h] [rbp-E0h] BYREF
  float v183; // [rsp+30h] [rbp-D8h]
  float v184; // [rsp+38h] [rbp-D0h]
  float v185; // [rsp+3Ch] [rbp-CCh]
  float v186; // [rsp+40h] [rbp-C8h]
  float v187; // [rsp+44h] [rbp-C4h]
  float v188; // [rsp+48h] [rbp-C0h]
  float v189; // [rsp+4Ch] [rbp-BCh]
  float v190; // [rsp+50h] [rbp-B8h]
  __int128 v191; // [rsp+58h] [rbp-B0h]
  __int128 v192; // [rsp+68h] [rbp-A0h]
  __m256i v193; // [rsp+78h] [rbp-90h]
  __int128 v194; // [rsp+A8h] [rbp-60h]
  __int64 v195; // [rsp+B8h] [rbp-50h] BYREF
  int v196; // [rsp+C0h] [rbp-48h]
  __int128 v197; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v198; // [rsp+D8h] [rbp-30h]
  __m256i v199; // [rsp+E8h] [rbp-20h]
  __int128 v200; // [rsp+108h] [rbp+0h]
  __int128 v201; // [rsp+118h] [rbp+10h]
  char v202; // [rsp+128h] [rbp+20h]
  _BYTE v203[16]; // [rsp+138h] [rbp+30h] BYREF
  __int128 v204; // [rsp+148h] [rbp+40h] BYREF
  __int64 v205; // [rsp+158h] [rbp+50h]
  _QWORD v206[6]; // [rsp+168h] [rbp+60h] BYREF
  __int128 v207; // [rsp+198h] [rbp+90h]
  _BYTE v208[8]; // [rsp+1A8h] [rbp+A0h] BYREF
  _UNKNOWN *retaddr; // [rsp+2A0h] [rbp+198h] BYREF
  int v210; // [rsp+2A8h] [rbp+1A0h]
  float v211; // [rsp+2A8h] [rbp+1A0h]
  float v214; // [rsp+2C0h] [rbp+1B8h]

  result = &retaddr;
  v4 = a3;
  if ( (*(_BYTE *)(a1 + 144) & 0x40) != 0 )
  {
    if ( !sub_1400CF220(a1) )
      return (_UNKNOWN **)sub_1400B3390(a1, a2, a3: v4);
    v8 = *(_QWORD *)(a1 + 208);
    v9 = (_QWORD *)(a1 + 200);
    v10 = *(_QWORD *)(a1 + 200);
    v11 = 0;
    if ( v10 != v8 )
    {
LABEL_18:
      v23 = sub_1400B5440(a1: v7, a2: v6);
      sub_1400CC650(a1, a2: v203, a3: v23);
      sub_1400CA820(a1, a2: &v195);
      if ( (*(_BYTE *)(a1 + 484) & 2) != 0 )
      {
        v24 = sub_1400CC6C0(a1, a2: &v182);
        v195 = *(_QWORD *)v24;
        v196 = *(_DWORD *)(v24 + 8);
      }
      sub_1400B4560(a1);
      sub_1401176C0(a1, a2: v25, a3: v203, a4: &v195);
      v26 = *(_QWORD *)a1;
      v204 = xmmword_1412FF620;
      v205 = qword_1412FF630;
      v29 = (*(double (__fastcall **)(__int64))(v26 + 720))(a1);
      v30 = (*(_BYTE *)(a1 + 484) & 2) == 0;
      v31 = *(float *)&v29;
      v202 = 0;
      qmemcpy(v206, byte_1412FF640, sizeof(v206));
      v207 = xmmword_1412FF670;
      v214 = *(float *)&v29;
      if ( v30 )
      {
        v116 = v4[128];
        v117 = v4[129];
        v118 = v4[123];
        v119 = v4[124];
        v120 = v4[125];
        v121 = v4[127];
        v211 = v4[131];
        v185 = v4[132];
        v187 = v4[133];
        v184 = v4[135];
        v186 = v4[136];
        v188 = v4[137];
        v189 = v116;
        v190 = v117;
        sub_14009E480(a1: v206, a2: v4 + 123);
        v122 = *v9;
        v182 = 0;
        v183 = 0.0;
        v123 = *(_QWORD *)(a1 + 208);
        if ( v122 != v123 )
        {
          v124 = 0;
          v125 = 0;
          do
          {
            if ( *(float *)(v122 + 68) > 0.0 )
            {
              *(float *)(v122 + 48) = v31 * *(float *)(v122 + 84);
              v126 = sub_14008FC40(a1: v122 + 36);
              v127 = *(float *)(v122 + 16);
              v128 = v126;
              v129 = *(float *)(v122 + 76);
              v130 = *(float *)(v122 + 12) * v119;
              v131 = *(float *)(v122 + 12) * v120;
              v132 = *(float *)(v122 + 20) * v185;
              v133 = *(float *)(v122 + 20) * v187;
              *(float *)&v182 = (float)((float)((float)(v127 * v121) + (float)(*(float *)(v122 + 12) * v118))
                                      + (float)(*(float *)(v122 + 20) * v211))
                              + v184;
              *((float *)&v182 + 1) = (float)((float)((float)(v127 * v116) + v130) + v132) + v186;
              v183 = (float)((float)((float)(v127 * v117) + v131) + v133) + v188;
              v135 = sub_140A003B0(a1: v134);
              v136 = sub_1409FFE20();
              v137 = *(float *)&v136;
              sub_140096CB0(a1: &v204, a2: &v182);
              v138 = *(_QWORD *)(a1 + 224);
              if ( (unsigned int)v124 >= (unsigned __int64)((*(_QWORD *)(a1 + 232) - v138) / 24) )
                goto LABEL_103;
              v139 = 3 * v124;
              v140 = v135 * v129;
              v141 = (unsigned int)(v124 + 1);
              v142 = v137 * v129;
              v143 = *((float *)&v182 + 1) - v140;
              v144 = *(float *)&v182 - v142;
              *(float *)(v138 + 8 * v139 + 8) = v183 + 0.0;
              *(float *)(v138 + 8 * v139 + 4) = v143;
              *(_DWORD *)(v138 + 8 * v139 + 12) = v128;
              *(float *)(v138 + 8 * v139) = v144;
              *(_DWORD *)(v138 + 8 * v139 + 16) = *(_DWORD *)(v122 + 112);
              *(_DWORD *)(v138 + 8 * v139 + 20) = *(_DWORD *)(v122 + 116);
              v145 = *(_QWORD *)(a1 + 224);
              if ( v141 >= (*(_QWORD *)(a1 + 232) - v145) / 24 )
                goto LABEL_103;
              v146 = 3 * v141;
              v147 = *(float *)&v182 - v140;
              v148 = v183 + 0.0;
              v149 = v142 + *((float *)&v182 + 1);
              *(_DWORD *)(v145 + 8 * v146 + 12) = v128;
              v150 = (unsigned int)(v124 + 2);
              *(float *)(v145 + 8 * v146) = v147;
              *(float *)(v145 + 8 * v146 + 8) = v148;
              *(float *)(v145 + 8 * v146 + 4) = v149;
              *(float *)(v145 + 8 * v146 + 16) = *(float *)(v122 + 112) + 1.0;
              *(_DWORD *)(v145 + 8 * v146 + 20) = *(_DWORD *)(v122 + 116);
              v151 = *(_QWORD *)(a1 + 224);
              if ( v150 >= (*(_QWORD *)(a1 + 232) - v151) / 24 )
                goto LABEL_103;
              v152 = 3 * v150;
              v153 = *((float *)&v182 + 1) - v142;
              v154 = v183 + 0.0;
              v155 = v140 + *(float *)&v182;
              *(_DWORD *)(v151 + 8 * v152 + 12) = v128;
              v156 = (unsigned int)(v124 + 3);
              *(float *)(v151 + 8 * v152 + 4) = v153;
              *(float *)(v151 + 8 * v152 + 8) = v154;
              *(float *)(v151 + 8 * v152) = v155;
              *(_DWORD *)(v151 + 8 * v152 + 16) = *(_DWORD *)(v122 + 112);
              *(float *)(v151 + 8 * v152 + 20) = *(float *)(v122 + 116) + 1.0;
              v157 = *(_QWORD *)(a1 + 224);
              v158 = (*(_QWORD *)(a1 + 232) - v157) / 24;
              if ( v156 >= v158 )
                goto LABEL_103;
              v159 = (unsigned int)(v124 + 2);
              if ( v159 >= v158 )
                goto LABEL_103;
              v160 = 3 * v156;
              *(_QWORD *)(v157 + 8 * v160) = *(_QWORD *)(v157 + 24 * v159);
              *(_DWORD *)(v157 + 8 * v160 + 8) = *(_DWORD *)(v157 + 24 * v159 + 8);
              v161 = *(_QWORD *)(a1 + 224);
              if ( v159 >= (*(_QWORD *)(a1 + 232) - v161) / 24 )
                goto LABEL_103;
              *(_DWORD *)(v157 + 8 * v160 + 12) = *(_DWORD *)(v161 + 24 * v159 + 12);
              v162 = *(_QWORD *)(a1 + 224);
              if ( v159 >= (*(_QWORD *)(a1 + 232) - v162) / 24 )
                goto LABEL_103;
              *(_DWORD *)(v157 + 8 * v160 + 16) = *(_DWORD *)(v162 + 24 * v159 + 16);
              v163 = *(_QWORD *)(a1 + 224);
              if ( v159 >= (*(_QWORD *)(a1 + 232) - v163) / 24 )
                goto LABEL_103;
              *(_DWORD *)(v157 + 8 * v160 + 20) = *(_DWORD *)(v163 + 24 * v159 + 20);
              v164 = *(_QWORD *)(a1 + 224);
              v165 = (unsigned int)(v124 + 4);
              v166 = (*(_QWORD *)(a1 + 232) - v164) / 24;
              if ( v165 >= v166 )
                goto LABEL_103;
              v167 = (unsigned int)(v124 + 1);
              if ( v167 >= v166 )
                goto LABEL_103;
              v168 = 3 * v165;
              *(_QWORD *)(v164 + 8 * v168) = *(_QWORD *)(v164 + 24 * v167);
              *(_DWORD *)(v164 + 8 * v168 + 8) = *(_DWORD *)(v164 + 24 * v167 + 8);
              v169 = *(_QWORD *)(a1 + 224);
              if ( v167 >= (*(_QWORD *)(a1 + 232) - v169) / 24
                || (*(_DWORD *)(v164 + 8 * v168 + 12) = *(_DWORD *)(v169 + 24 * v167 + 12),
                    v170 = *(_QWORD *)(a1 + 224),
                    v167 >= (*(_QWORD *)(a1 + 232) - v170) / 24)
                || (*(_DWORD *)(v164 + 8 * v168 + 16) = *(_DWORD *)(v170 + 24 * v167 + 16),
                    v171 = *(_QWORD *)(a1 + 224),
                    v167 >= (*(_QWORD *)(a1 + 232) - v171) / 24)
                || (v172 = (unsigned int)(v124 + 5),
                    *(_DWORD *)(v164 + 8 * v168 + 20) = *(_DWORD *)(v171 + 24 * v167 + 20),
                    v173 = *(_QWORD *)(a1 + 224),
                    v172 >= (*(_QWORD *)(a1 + 232) - v173) / 24) )
              {
LABEL_103:
                __fastfail(5u);
              }
              v174 = 3 * v172;
              v175 = v140 + *((float *)&v182 + 1);
              v176 = v142 + *(float *)&v182;
              v31 = v214;
              v177 = v183 + 0.0;
              *(_DWORD *)(v173 + 8 * v174 + 12) = v128;
              v124 = (unsigned int)(v124 + 6);
              v125 += 2;
              *(float *)(v173 + 8 * v174 + 4) = v175;
              v117 = v190;
              *(float *)(v173 + 8 * v174 + 8) = v177;
              *(float *)(v173 + 8 * v174) = v176;
              v116 = v189;
              *(float *)(v173 + 8 * v174 + 16) = *(float *)(v122 + 112) + 1.0;
              *(float *)(v173 + 8 * v174 + 20) = *(float *)(v122 + 116) + 1.0;
            }
            v122 += 120;
          }
          while ( v122 != v123 );
          if ( v125 != 0 )
          {
            v178 = (_OWORD *)sub_140096DC0(a1: &v204, a2: v208);
            v30 = (*(_BYTE *)(a1 + 484) & 1) == 0;
            *(_OWORD *)(a1 + 276) = *v178;
            if ( v30 )
              v179 = qword_14137A4E0[2 * *(unsigned int *)(a1 + 272)];
            else
              v179 = *(_QWORD *)(a1 + 152);
            v180 = *(_QWORD *)(a1 + 224);
            *(_OWORD *)&v193.m256i_u64[1] = 0;
            *(_QWORD *)&v191 = v180;
            *((_QWORD *)&v192 + 1) = v206;
            v181 = v202;
            DWORD2(v191) = 322;
            BYTE12(v191) = 4;
            LODWORD(v192) = v125;
            v193.m256i_i64[0] = v179;
            v193.m256i_i32[6] = 1065353216;
            v194 = 0x1FFFFFFFFuLL;
            v200 = 0;
            v197 = v191;
            v198 = v192;
            v199 = v193;
            v201 = 0x1FFFFFFFFuLL;
            if ( v202 == 0 )
            {
              v181 = 1;
              v202 = 1;
            }
            v199.m256i_i32[6] = 1065353216;
            *(_QWORD *)&v200 = a1 + 276;
LABEL_109:
            if ( v181 == 0 )
            {
              v4 = a3;
              return (_UNKNOWN **)sub_1400B3390(a1, a2, a3: v4);
            }
            goto LABEL_110;
          }
        }
      }
      else
      {
        v32 = *(_QWORD *)a1;
        v33 = sub_1400B5440(a1: v28, a2: v27);
        v34 = (float *)(*(__int64 (__fastcall **)(__int64, __int64))(v32 + 696))(a1, a2: v33);
        v36 = v34[4];
        v37 = v34[5];
        v38 = v34[6];
        v39 = (float)((float)(v34[1] * v34[1]) + (float)(*v34 * *v34)) + (float)(v34[2] * v34[2]);
        if ( v39 < 0.0 )
          v40 = sub_140A00700(a1: v35);
        else
          v40 = fsqrt(v39);
        v58 = (float)((float)(v37 * v37) + (float)(v36 * v36)) + (float)(v38 * v38);
        if ( v58 < 0.0 )
          v59 = sub_140A00700(a1: v35);
        else
          v59 = fsqrt(v58);
        if ( *(_DWORD *)(a1 + 324) != 0 )
        {
          v60 = 0;
          v210 = 0;
          do
          {
            v61 = *v9;
            v62 = *(_QWORD *)(a1 + 208) - *v9;
            v63 = v62 / 120;
            if ( v11 >= (unsigned __int64)(v62 / 120) )
              goto LABEL_103;
            v64 = 120LL * v11;
            if ( *(float *)(v64 + v61 + 68) <= 0.0 )
            {
              v110 = v210;
            }
            else
            {
              *(float *)(v64 + v61 + 48) = v31 * *(float *)(v64 + v61 + 84);
              v67 = sub_14008FC40(a1: v64 + v61 + 36);
              v68 = *(float *)(v64 + v61 + 76);
              if ( (*(_BYTE *)(a1 + 484) & 8) != 0 )
              {
                v69 = *(_QWORD *)a1;
                v70 = sub_1400B5440(a1: v66, a2: v65);
                v71 = (*(__int64 (__fastcall **)(__int64, __int64))(v69 + 696))(a1, a2: v70);
                v72 = *(_QWORD *)a1;
                v73 = *(float *)(v71 + 52) + *(float *)(v64 + v61 + 16);
                v76 = sub_1400B5440(a1: v75, a2: v74);
                v77 = *(float *)((*(__int64 (__fastcall **)(__int64, __int64))(v72 + 696))(a1, a2: v76) + 48)
                    + *(float *)(v64 + v61 + 12);
              }
              else
              {
                v77 = *(float *)(v64 + v61 + 12);
                v73 = *(float *)(v64 + v61 + 16);
              }
              v78 = sub_140A003B0(a1: v66);
              v79 = sub_1409FFE20();
              v80 = *(_QWORD *)(a1 + 248);
              if ( v60 >= (unsigned __int64)((*(_QWORD *)(a1 + 256) - v80) / 28) )
                goto LABEL_103;
              v81 = 28LL * v60;
              v82 = (float)(*(float *)&v79 * v68) * v59;
              v83 = v60 + 1;
              v84 = (float)(v78 * v68) * v40;
              *(_DWORD *)(v80 + v81 + 8) = 1065353216;
              *(_DWORD *)(v80 + v81 + 12) = 1065353216;
              *(_DWORD *)(v80 + v81 + 16) = v67;
              *(float *)(v80 + v81) = v84 + v77;
              *(float *)(v80 + v81 + 4) = v73 - v82;
              *(_DWORD *)(v80 + v81 + 20) = *(_DWORD *)(v64 + v61 + 112);
              *(float *)(v80 + v81 + 24) = *(float *)(v64 + v61 + 116) + 1.0;
              v85 = *(_QWORD *)(a1 + 248);
              if ( v83 >= (*(_QWORD *)(a1 + 256) - v85) / 28 )
                goto LABEL_103;
              v86 = 28 * v83;
              v87 = v60 + 2;
              *(float *)(v85 + v86) = v77 - v84;
              *(float *)(v85 + v86 + 4) = v82 + v73;
              *(_DWORD *)(v85 + v86 + 8) = 1065353216;
              *(_DWORD *)(v85 + v86 + 12) = 1065353216;
              *(_DWORD *)(v85 + v86 + 16) = v67;
              *(float *)(v85 + v86 + 20) = *(float *)(v64 + v61 + 112) + 1.0;
              *(_DWORD *)(v85 + v86 + 24) = *(_DWORD *)(v64 + v61 + 116);
              v88 = *(_QWORD *)(a1 + 248);
              if ( v87 >= (*(_QWORD *)(a1 + 256) - v88) / 28 )
                goto LABEL_103;
              v89 = 28 * v87;
              v90 = v60 + 3;
              *(float *)(v88 + v89) = v77 - v82;
              *(float *)(v88 + v89 + 4) = v73 - v84;
              *(_DWORD *)(v88 + v89 + 8) = 1065353216;
              *(_DWORD *)(v88 + v89 + 12) = 1065353216;
              *(_DWORD *)(v88 + v89 + 16) = v67;
              *(_DWORD *)(v88 + v89 + 20) = *(_DWORD *)(v64 + v61 + 112);
              *(_DWORD *)(v88 + v89 + 24) = *(_DWORD *)(v64 + v61 + 116);
              v91 = *(_QWORD *)(a1 + 248);
              if ( v90 >= (*(_QWORD *)(a1 + 256) - v91) / 28 )
                goto LABEL_103;
              v92 = 28 * v90;
              *(_DWORD *)(v91 + v92 + 16) = v67;
              *(float *)(v91 + v92) = v82 + v77;
              *(float *)(v91 + v92 + 4) = v84 + v73;
              *(_DWORD *)(v91 + v92 + 8) = 1065353216;
              *(_DWORD *)(v91 + v92 + 12) = 1065353216;
              *(float *)(v91 + v92 + 20) = *(float *)(v64 + v61 + 112) + 1.0;
              v93 = *(float *)(v64 + v61 + 116);
              v94 = v60 + 4;
              *(float *)(v91 + v92 + 24) = v93 + 1.0;
              v95 = *(_QWORD *)(a1 + 248);
              v96 = (*(_QWORD *)(a1 + 256) - v95) / 28;
              if ( v94 >= v96 )
                goto LABEL_103;
              v97 = v60 + 1;
              if ( v97 >= v96 )
                goto LABEL_103;
              v98 = 28 * v97;
              v99 = 28 * v94;
              *(_OWORD *)(v95 + v99) = *(_OWORD *)(v95 + 28 * v97);
              v100 = *(_QWORD *)(a1 + 248);
              if ( v97 >= (*(_QWORD *)(a1 + 256) - v100) / 28 )
                goto LABEL_103;
              *(_DWORD *)(v95 + v99 + 16) = *(_DWORD *)(v100 + v98 + 16);
              v101 = *(_QWORD *)(a1 + 248);
              if ( v97 >= (*(_QWORD *)(a1 + 256) - v101) / 28 )
                goto LABEL_103;
              *(_DWORD *)(v95 + v99 + 20) = *(_DWORD *)(v101 + v98 + 20);
              v102 = *(_QWORD *)(a1 + 248);
              if ( v97 >= (*(_QWORD *)(a1 + 256) - v102) / 28 )
                goto LABEL_103;
              *(_DWORD *)(v95 + v99 + 24) = *(_DWORD *)(v102 + v98 + 24);
              v103 = *(_QWORD *)(a1 + 248);
              v104 = v60 + 5;
              v105 = (*(_QWORD *)(a1 + 256) - v103) / 28;
              if ( v104 >= v105 )
                goto LABEL_103;
              if ( v60 >= v105 )
                goto LABEL_103;
              v106 = 28 * v104;
              *(_OWORD *)(v103 + v106) = *(_OWORD *)(v103 + 28LL * v60);
              v107 = *(_QWORD *)(a1 + 248);
              if ( v60 >= (unsigned __int64)((*(_QWORD *)(a1 + 256) - v107) / 28) )
                goto LABEL_103;
              *(_DWORD *)(v103 + v106 + 16) = *(_DWORD *)(v107 + v81 + 16);
              v108 = *(_QWORD *)(a1 + 248);
              if ( v60 >= (unsigned __int64)((*(_QWORD *)(a1 + 256) - v108) / 28) )
                goto LABEL_103;
              *(_DWORD *)(v103 + v106 + 20) = *(_DWORD *)(v108 + v81 + 20);
              v109 = *(_QWORD *)(a1 + 248);
              v62 = *(_QWORD *)(a1 + 256) - v109;
              v63 = v62 / 28;
              if ( v60 >= (unsigned __int64)(v62 / 28) )
                goto LABEL_103;
              v9 = (_QWORD *)(a1 + 200);
              v60 += 6;
              v31 = v214;
              v110 = v210 + 2;
              v210 += 2;
              *(_DWORD *)(v103 + v106 + 24) = *(_DWORD *)(v109 + v81 + 24);
            }
            ++v11;
          }
          while ( v11 < *(_DWORD *)(a1 + 324) );
          if ( v110 != 0 )
          {
            v111 = *(_QWORD *)a1;
            v112 = sub_1400B5440(a1: v62, a2: v63);
            v113 = (*(__int64 (__fastcall **)(__int64, __int64))(v111 + 696))(a1, a2: v112);
            v30 = (*(_BYTE *)(a1 + 484) & 1) == 0;
            DWORD2(v207) = *(_DWORD *)(v113 + 56);
            if ( v30 )
              v114 = qword_14137A4E0[2 * *(unsigned int *)(a1 + 272)];
            else
              v114 = *(_QWORD *)(a1 + 152);
            v115 = *(_QWORD *)(a1 + 248);
            *(_OWORD *)&v193.m256i_u64[1] = 0;
            *(_QWORD *)&v191 = v115;
            *((_QWORD *)&v192 + 1) = v206;
            DWORD2(v191) = 324;
            BYTE12(v191) = 4;
            LODWORD(v192) = v110;
            v193.m256i_i64[0] = v114;
            v193.m256i_i32[6] = 1065353216;
            v194 = 0x1FFFFFFFFuLL;
            v200 = 0;
            v197 = v191;
            v198 = v192;
            v199 = v193;
            v201 = 0x1FFFFFFFFuLL;
            if ( v202 == 0 )
              v202 = 1;
LABEL_110:
            v4 = a3;
            sub_14069C570(a1: a3, a2: &v197);
            return (_UNKNOWN **)sub_1400B3390(a1, a2, a3: v4);
          }
        }
      }
      v181 = v202;
      goto LABEL_109;
    }
    v12 = *(unsigned int *)(a1 + 324);
    v13 = (v8 - v10) / 120;
    if ( v12 >= v13 )
    {
      if ( v12 <= v13 )
      {
LABEL_14:
        v19 = (unsigned int)(6 * *(_DWORD *)(a1 + 324));
        if ( (*(_BYTE *)(a1 + 484) & 2) != 0 )
        {
          v20 = *(_QWORD *)(a1 + 256);
          v21 = *(_QWORD *)(a1 + 248);
          v7 = v20 - v21;
          v6 = (unsigned __int128)((v20 - v21) * (__int128)0x4924924924924925LL) >> 64;
          v22 = (v20 - v21) / 28;
          if ( v19 >= v22 )
          {
            if ( v19 > v22 )
            {
              v7 = *(_QWORD *)(a1 + 264) - v21;
              v6 = v7 / 28;
              if ( v19 <= v7 / 28 )
              {
                for ( i = v19 - v22; i != 0; --i )
                {
                  *(_QWORD *)v20 = 0;
                  *(_QWORD *)(v20 + 8) = 0;
                  *(_QWORD *)(v20 + 16) = 0;
                  *(_DWORD *)(v20 + 24) = 0;
                  v20 += 28;
                }
                *(_QWORD *)(a1 + 256) = v20;
              }
              else
              {
                v41 = 0x924924924924924LL;
                v42 = v6 >> 1;
                if ( v6 <= 0x924924924924924LL - (v6 >> 1) )
                {
                  v41 = v42 + v6;
                  if ( v42 + v6 < v19 )
                    v41 = (unsigned int)(6 * *(_DWORD *)(a1 + 324));
                }
                v43 = sub_14004D680(a1: a1 + 248, a2: v41);
                v44 = v43;
                v45 = v43 + 28 * v22;
                v46 = v19 - v22;
                if ( v19 != v22 )
                {
                  do
                  {
                    *(_QWORD *)v45 = 0;
                    *(_QWORD *)(v45 + 8) = 0;
                    *(_QWORD *)(v45 + 16) = 0;
                    *(_DWORD *)(v45 + 24) = 0;
                    v45 += 28LL;
                    --v46;
                  }
                  while ( v46 != 0 );
                }
                sub_140E79060(a1: v43, a2: *(_QWORD *)(a1 + 248), a3: *(_QWORD *)(a1 + 256) - *(_QWORD *)(a1 + 248));
                sub_140118C00(a1: a1 + 248, a2: v44, a3: v19, a4: v41);
                v9 = (_QWORD *)(a1 + 200);
              }
            }
          }
          else
          {
            *(_QWORD *)(a1 + 256) = v21 + 28 * v19;
          }
        }
        else
        {
          v48 = *(_QWORD **)(a1 + 232);
          v49 = *(_QWORD *)(a1 + 224);
          v7 = (__int64)v48 - v49;
          v6 = (unsigned __int128)(((__int64)v48 - v49) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
          v50 = ((__int64)v48 - v49) / 24;
          if ( v19 >= v50 )
          {
            if ( v19 > v7 / 24 )
            {
              v7 = *(_QWORD *)(a1 + 240) - v49;
              v6 = v7 / 24;
              if ( v19 <= v7 / 24 )
              {
                for ( j = v19 - v50; j != 0; --j )
                {
                  *v48 = 0;
                  v48[1] = 0;
                  v48[2] = 0;
                  v48 += 3;
                }
                *(_QWORD *)(a1 + 232) = v48;
              }
              else
              {
                v51 = 0xAAAAAAAAAAAAAAALL;
                v52 = v6 >> 1;
                if ( v6 <= 0xAAAAAAAAAAAAAAALL - (v6 >> 1) )
                {
                  v51 = v52 + v6;
                  if ( v52 + v6 < v19 )
                    v51 = (unsigned int)(6 * *(_DWORD *)(a1 + 324));
                }
                v53 = sub_14004D6F0(a1: a1 + 224, a2: v51);
                v54 = v53;
                v55 = (_QWORD *)(v53 + 24 * v50);
                v56 = v19 - v50;
                if ( v19 != v50 )
                {
                  do
                  {
                    *v55 = 0;
                    v55[1] = 0;
                    v55[2] = 0;
                    v55 += 3;
                    --v56;
                  }
                  while ( v56 != 0 );
                }
                sub_140E79060(a1: v53, a2: *(_QWORD *)(a1 + 224), a3: *(_QWORD *)(a1 + 232) - *(_QWORD *)(a1 + 224));
                sub_140118CA0(a1: a1 + 224, a2: v54, a3: v19, a4: v51);
                v9 = (_QWORD *)(a1 + 200);
              }
            }
          }
          else
          {
            v7 = v49 + 24 * v19;
            *(_QWORD *)(a1 + 232) = v7;
          }
        }
        v4 = a3;
        goto LABEL_18;
      }
      v15 = (*(_QWORD *)(a1 + 216) - v10) / 120;
      if ( v12 > v15 )
      {
        v16 = 0x222222222222222LL;
        v17 = v15 >> 1;
        if ( v15 <= 0x222222222222222LL - (v15 >> 1) )
        {
          v16 = v17 + v15;
          if ( v17 + v15 < v12 )
            v16 = *(unsigned int *)(a1 + 324);
        }
        v18 = sub_14004D7E0(a1: a1 + 200, a2: v16);
        sub_1401125E0(a1: v18 + 120 * v13, a2: v12 - v13, a3: a1 + 200);
        sub_140E79060(a1: v18, a2: *v9, a3: *(_QWORD *)(a1 + 208) - *v9);
        sub_140118D40(a1: a1 + 200, a2: v18, a3: v12, a4: v16);
        goto LABEL_14;
      }
      v14 = sub_1401125E0(a1: *(_QWORD *)(a1 + 208), a2: v12 - v13, a3: a1 + 200);
    }
    else
    {
      v14 = v10 + 120 * v12;
    }
    *(_QWORD *)(a1 + 208) = v14;
    goto LABEL_14;
  }
  return result;
}