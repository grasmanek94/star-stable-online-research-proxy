__int64 __fastcall sub_140668E50(__int64 a1, _DWORD *a2)
{
  __int64 v4; // r12
  char v5; // al
  char v6; // al
  char v7; // al
  char v8; // al
  __int64 v9; // r14
  char v10; // al
  char v11; // al
  char v12; // al
  char v13; // al
  char v14; // al
  char v15; // al
  char v16; // al
  char v17; // al
  char v18; // al
  char v19; // al
  __int64 v20; // rax
  int v22; // eax
  __int64 *v23; // rax
  __int64 v24; // rsi
  _QWORD *v25; // rax
  int v26; // eax
  __int64 *v27; // rax
  __int64 v28; // rsi
  _QWORD *v29; // rax
  int v30; // eax
  __int64 *v31; // rax
  __int64 v32; // rsi
  _QWORD *v33; // rax
  int v34; // eax
  __int64 *v35; // rax
  __int64 v36; // rsi
  _QWORD *v37; // rax
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // r13
  __int128 *v44; // rdx
  __int64 v45; // rcx
  unsigned __int64 v46; // rsi
  unsigned __int64 v47; // rcx
  __int64 v48; // rax
  __int128 *v49; // r15
  __int64 v50; // rcx
  __int64 v51; // r9
  __int128 *v52; // rax
  __int64 v53; // rdx
  __int128 *v54; // rcx
  __int64 v55; // r13
  unsigned __int64 v56; // rsi
  unsigned __int64 v57; // rcx
  __int64 v58; // rax
  __int128 *v59; // r15
  __int64 v60; // rcx
  __int128 *v61; // rcx
  int v62; // eax
  void *v63; // rcx
  void *v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r9
  __int64 v68; // r13
  __int128 *v69; // rdx
  __int64 v70; // rcx
  unsigned __int64 v71; // rsi
  unsigned __int64 v72; // rcx
  __int64 v73; // rax
  __int128 *v74; // r15
  __int64 v75; // rcx
  __int64 v76; // r9
  __int128 *v77; // rax
  __int64 v78; // rdx
  __int128 *v79; // rcx
  __int64 v80; // r13
  unsigned __int64 v81; // rsi
  unsigned __int64 v82; // rcx
  __int64 v83; // rax
  __int128 *v84; // r15
  __int64 v85; // rcx
  __int128 *v86; // rcx
  int v87; // eax
  void *v88; // rcx
  void *v89; // rcx
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // r15
  __int128 *v95; // rdx
  __int64 v96; // r13
  unsigned __int64 v97; // rax
  __int64 v98; // rax
  unsigned __int64 v99; // rcx
  __int128 *v100; // rsi
  __int128 *v101; // rsi
  _QWORD *v102; // rax
  int v103; // eax
  void *v104; // rcx
  __int64 *v105; // rax
  __int64 v106; // rsi
  _QWORD *v107; // rax
  int v108; // eax
  __int64 *v109; // rax
  __int64 v110; // rsi
  _QWORD *v111; // rax
  int v112; // eax
  __int64 *v113; // rax
  __int64 v114; // rsi
  _QWORD *v115; // rax
  int v116; // eax
  __int64 *v117; // rax
  __int64 v118; // rsi
  _QWORD *v119; // rax
  int v120; // eax
  __int64 *v121; // rax
  __int64 v122; // rsi
  _QWORD *v123; // rax
  int v124; // eax
  __int64 *v125; // rax
  __int64 v126; // rsi
  _QWORD *v127; // rax
  int v128; // eax
  __int64 *v129; // rax
  __int64 v130; // rsi
  _QWORD *v131; // rax
  int v132; // eax
  __int64 *v133; // rax
  __int64 v134; // rsi
  _QWORD *v135; // rax
  int v136; // eax
  __int64 *v137; // rax
  __int64 v138; // rsi
  _QWORD *v139; // rax
  int v140; // eax
  __int64 *v141; // rax
  __int64 v142; // rsi
  _QWORD *v143; // rax
  int v144; // eax
  __int64 *v145; // rax
  __int64 v146; // rsi
  _QWORD *v147; // rax
  int v148; // eax
  __int64 *v149; // rax
  __int64 v150; // rsi
  _QWORD *v151; // rax
  int v152; // eax
  __int64 *v153; // rax
  __int64 v154; // rsi
  _QWORD *v155; // rax
  int v156; // eax
  __int64 *v157; // rax
  __int64 v158; // rsi
  _QWORD *v159; // rax
  int v160; // eax
  __int64 *v161; // rax
  __int64 v162; // rsi
  _QWORD *v163; // rax
  int v164; // eax
  __int64 *v165; // rax
  __int64 v166; // rsi
  _QWORD *v167; // rax
  int v168; // eax
  __int64 *v169; // rax
  __int64 v170; // rsi
  _QWORD *v171; // rax
  int v172; // eax
  __int64 *v173; // rax
  __int64 v174; // rsi
  _QWORD *v175; // rax
  __int64 v176; // [rsp+30h] [rbp-59h] BYREF
  __int128 *v177; // [rsp+38h] [rbp-51h]
  char *v178; // [rsp+48h] [rbp-41h]
  __int128 *v179; // [rsp+50h] [rbp-39h]
  __int128 v180; // [rsp+58h] [rbp-31h] BYREF
  __int64 v181; // [rsp+68h] [rbp-21h]
  unsigned __int64 v182; // [rsp+70h] [rbp-19h]
  __int128 v183; // [rsp+78h] [rbp-11h] BYREF
  __int64 v184; // [rsp+88h] [rbp-1h]
  unsigned __int64 v185; // [rsp+90h] [rbp+7h]

  v4 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  if ( dword_1413A9140 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413A9140);
    if ( dword_1413A9140 == -1 )
    {
      xmmword_1413A9120 = 0;
      qword_1413A9130 = 0;
      qword_1413A9138 = 0;
      sub_14000D7F0(a1: &xmmword_1413A9120, a2: "postEffectHandler.", a3: 18);
      sub_1409DB700(a1: sub_140EE1A20);
      sub_1409DBB40(a1: &dword_1413A9140);
    }
  }
  sub_1400BAD40(a1, a2);
  if ( dword_1413A9148 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413A9148);
    if ( dword_1413A9148 == -1 )
    {
      v23 = (__int64 *)sub_140020190(a1: &v183, a2: &xmmword_1413A9120, a3: "enablePostEffects");
      LODWORD(v24) = (_DWORD)v23;
      if ( (unsigned __int64)v23[3] > 0xF )
        v24 = *v23;
      v25 = (_QWORD *)sub_140020190(a1: &v180, a2: &xmmword_1413A9120, a3: "enablePostEffects");
      if ( v25[3] > 0xFu )
        v25 = (_QWORD *)*v25;
      v26 = sub_140062160(a1: v25);
      sub_140062D10(
        a1: (unsigned int)&dword_1413A9144,
        a2: v26,
        a3: v24,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\System\\i"
                      "nclude\\System/Studio/OpenGL/PXPostEffectHandler.h",
        a5: 282);
      sub_140017B20(a1: &v180);
      sub_140017B20(a1: &v183);
      sub_1409DBB40(a1: &dword_1413A9148);
    }
  }
  LODWORD(v176) = dword_1413A9144;
  if ( *a2 != 0 )
  {
    v178 = (char *)a2 + 62;
    if ( *(_BYTE *)(a1 + 440) != 0 )
    {
      v5 = sub_140076FF0();
      sub_140084F80(a1: (_DWORD)a2, a2: (unsigned int)&v176, a3: a1 + 440, a4: 1, a5: v5);
    }
    else
    {
      v178 = (char *)a2 + 62;
    }
  }
  else
  {
    if ( (unsigned __int8)sub_1400852F0(a1: (_DWORD)a2, a2: (int)a1 + 440, a3: (unsigned int)&v176, a4: 1, a5: 512) == 0 )
      *(_BYTE *)(a1 + 440) = 0;
    v178 = (char *)a2 + 62;
  }
  if ( dword_1413A9150 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413A9150);
    if ( dword_1413A9150 == -1 )
    {
      v27 = (__int64 *)sub_140020190(a1: &v183, a2: &xmmword_1413A9120, a3: "FXAA");
      LODWORD(v28) = (_DWORD)v27;
      if ( (unsigned __int64)v27[3] > 0xF )
        v28 = *v27;
      v29 = (_QWORD *)sub_140020190(a1: &v180, a2: &xmmword_1413A9120, a3: "FXAA");
      if ( v29[3] > 0xFu )
        v29 = (_QWORD *)*v29;
      v30 = sub_140062160(a1: v29);
      sub_140062D10(
        a1: (unsigned int)&dword_1413A914C,
        a2: v30,
        a3: v28,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\System\\i"
                      "nclude\\System/Studio/OpenGL/PXPostEffectHandler.h",
        a5: 283);
      sub_140017B20(a1: &v180);
      sub_140017B20(a1: &v183);
      sub_1409DBB40(a1: &dword_1413A9150);
    }
  }
  LODWORD(v176) = dword_1413A914C;
  if ( *a2 != 0 )
  {
    if ( *(_BYTE *)(a1 + 442) != 0 )
    {
      v6 = sub_140076FF0();
      sub_140084F80(a1: (_DWORD)a2, a2: (unsigned int)&v176, a3: a1 + 442, a4: 1, a5: v6);
    }
  }
  else if ( (unsigned __int8)sub_1400852F0(a1: (_DWORD)a2, a2: (int)a1 + 442, a3: (unsigned int)&v176, a4: 1, a5: 512) == 0 )
  {
    *(_BYTE *)(a1 + 442) = 0;
  }
  if ( dword_1413A9158 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413A9158);
    if ( dword_1413A9158 == -1 )
    {
      v31 = (__int64 *)sub_140020190(a1: &v183, a2: &xmmword_1413A9120, a3: "motionBlur");
      LODWORD(v32) = (_DWORD)v31;
      if ( (unsigned __int64)v31[3] > 0xF )
        v32 = *v31;
      v33 = (_QWORD *)sub_140020190(a1: &v180, a2: &xmmword_1413A9120, a3: "motionBlur");
      if ( v33[3] > 0xFu )
        v33 = (_QWORD *)*v33;
      v34 = sub_140062160(a1: v33);
      sub_140062D10(
        a1: (unsigned int)&dword_1413A9154,
        a2: v34,
        a3: v32,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\System\\i"
                      "nclude\\System/Studio/OpenGL/PXPostEffectHandler.h",
        a5: 284);
      sub_140017B20(a1: &v180);
      sub_140017B20(a1: &v183);
      sub_1409DBB40(a1: &dword_1413A9158);
    }
  }
  LODWORD(v176) = dword_1413A9154;
  if ( *a2 != 0 )
  {
    if ( *(_BYTE *)(a1 + 443) != 0 )
    {
      v7 = sub_140076FF0();
      sub_140084F80(a1: (_DWORD)a2, a2: (unsigned int)&v176, a3: a1 + 443, a4: 1, a5: v7);
    }
  }
  else if ( (unsigned __int8)sub_1400852F0(a1: (_DWORD)a2, a2: (int)a1 + 443, a3: (unsigned int)&v176, a4: 1, a5: 512) == 0 )
  {
    *(_BYTE *)(a1 + 443) = 0;
  }
  if ( dword_1413A9160 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413A9160);
    if ( dword_1413A9160 == -1 )
    {
      v35 = (__int64 *)sub_140020190(a1: &v183, a2: &xmmword_1413A9120, a3: "brightnessContrast");
      LODWORD(v36) = (_DWORD)v35;
      if ( (unsigned __int64)v35[3] > 0xF )
        v36 = *v35;
      v37 = (_QWORD *)sub_140020190(a1: &v180, a2: &xmmword_1413A9120, a3: "brightnessContrast");
      if ( v37[3] > 0xFu )
        v37 = (_QWORD *)*v37;
      v38 = sub_140062160(a1: v37);
      sub_140062D10(
        a1: (unsigned int)&dword_1413A915C,
        a2: v38,
        a3: v36,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\System\\i"
                      "nclude\\System/Studio/OpenGL/PXPostEffectHandler.h",
        a5: 285);
      sub_140017B20(a1: &v180);
      sub_140017B20(a1: &v183);
      sub_1409DBB40(a1: &dword_1413A9160);
    }
  }
  LODWORD(v176) = dword_1413A915C;
  if ( *a2 != 0 )
  {
    if ( *(_BYTE *)(a1 + 444) != 0 )
    {
      v8 = sub_140076FF0();
      sub_140084F80(a1: (_DWORD)a2, a2: (unsigned int)&v176, a3: a1 + 444, a4: 1, a5: v8);
    }
  }
  else if ( (unsigned __int8)sub_1400852F0(a1: (_DWORD)a2, a2: (int)a1 + 444, a3: (unsigned int)&v176, a4: 1, a5: 512) == 0 )
  {
    *(_BYTE *)(a1 + 444) = 0;
  }
  v9 = 0x7FFFFFFFFFFFFFFFLL;
  if ( dword_1413A9168 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413A9168);
    if ( dword_1413A9168 == -1 )
    {
      v43 = qword_1413A9130;
      if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_1413A9130) < 0x12 )
        sub_14001B680(a1: v40, a2: v39);
      v44 = &xmmword_1413A9120;
      if ( (unsigned __int64)qword_1413A9138 > 0xF )
        v44 = (__int128 *)xmmword_1413A9120;
      v176 = (__int64)v44;
      v180 = 0;
      v181 = 0;
      v182 = 0;
      v45 = qword_1413A9130 + 18;
      if ( (unsigned __int64)(qword_1413A9130 + 18) <= 0xF )
      {
        v46 = 15;
        v49 = &v180;
      }
      else
      {
        v46 = v45 | 0xF;
        if ( (v45 | 0xFuLL) <= 0x7FFFFFFFFFFFFFFFLL )
        {
          if ( v46 < 0x16 )
            v46 = 22;
          if ( v46 == -1 )
          {
            v49 = nullptr;
            *(_QWORD *)&v180 = 0;
            goto LABEL_150;
          }
          if ( v46 + 1 < 0x1000 )
          {
            v49 = (__int128 *)sub_1409DB470(a1: v46 + 1);
            v44 = (__int128 *)v176;
            v45 = v43 + 18;
            *(_QWORD *)&v180 = v49;
            goto LABEL_150;
          }
          v47 = v46 + 40;
          if ( v46 + 40 < v46 + 1 )
          {
            sub_14001B170(a1: v47, a2: v44, a3: v41, a4: v42);
            __debugbreak();
          }
        }
        else
        {
          v46 = 0x7FFFFFFFFFFFFFFFLL;
          v47 = 0x8000000000000027uLL;
        }
        v48 = sub_1409DB470(a1: v47);
        if ( v48 == 0 )
          __fastfail(5u);
        v49 = (__int128 *)((v48 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *((_QWORD *)v49 - 1) = v48;
        v44 = (__int128 *)v176;
        v45 = v43 + 18;
        *(_QWORD *)&v180 = v49;
      }
LABEL_150:
      v181 = v45;
      v182 = v46;
      sub_140E82100(a1: v49, a2: v44, a3: v43);
      strcpy((char *)v49 + v43, "chromaticAberation");
      v52 = &v180;
      if ( v182 > 0xF )
        v52 = (__int128 *)v180;
      v179 = v52;
      v53 = qword_1413A9130;
      v176 = qword_1413A9130;
      if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_1413A9130) < 0x12 )
        sub_14001B680(a1: v50, a2: qword_1413A9130);
      v54 = &xmmword_1413A9120;
      if ( (unsigned __int64)qword_1413A9138 > 0xF )
        v54 = (__int128 *)xmmword_1413A9120;
      v177 = v54;
      v183 = 0;
      v184 = 0;
      v185 = 0;
      v55 = qword_1413A9130 + 18;
      if ( (unsigned __int64)(qword_1413A9130 + 18) <= 0xF )
      {
        v56 = 15;
        v59 = &v183;
      }
      else
      {
        v56 = v55 | 0xF;
        if ( (v55 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
        {
          v56 = 0x7FFFFFFFFFFFFFFFLL;
          v57 = 0x8000000000000027uLL;
LABEL_159:
          v58 = sub_1409DB470(a1: v57);
          if ( v58 == 0 )
            __fastfail(5u);
          v59 = (__int128 *)((v58 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
          *((_QWORD *)v59 - 1) = v58;
          v53 = v176;
          v54 = v177;
          *(_QWORD *)&v183 = v59;
          goto LABEL_171;
        }
        if ( v56 < 0x16 )
          v56 = 22;
        if ( v56 == -1 )
        {
          v59 = nullptr;
          *(_QWORD *)&v183 = 0;
        }
        else
        {
          if ( v56 + 1 >= 0x1000 )
          {
            v57 = v56 + 40;
            if ( v56 + 40 < v56 + 1 )
            {
              sub_14001B170(a1: v57, a2: qword_1413A9130, a3: 0, a4: v51);
              __debugbreak();
            }
            goto LABEL_159;
          }
          v59 = (__int128 *)sub_1409DB470(a1: v56 + 1);
          v53 = v176;
          v54 = v177;
          *(_QWORD *)&v183 = v59;
        }
      }
LABEL_171:
      v184 = v55;
      v185 = v56;
      sub_140E82100(a1: v59, a2: v54, a3: v53);
      v60 = v176;
      *(__int128 *)((char *)v59 + v176) = xmmword_140FEB608;
      *(_WORD *)((char *)v59 + v60 + 16) = 28271;
      *((_BYTE *)v59 + v55) = 0;
      v61 = &v183;
      if ( v185 > 0xF )
        v61 = (__int128 *)v183;
      v62 = sub_140062160(a1: v61);
      sub_140062D10(
        a1: (unsigned int)&dword_1413A9164,
        a2: v62,
        a3: (_DWORD)v179,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\System\\i"
                      "nclude\\System/Studio/OpenGL/PXPostEffectHandler.h",
        a5: 286);
      if ( v185 > 0xF )
      {
        v63 = (void *)v183;
        if ( v185 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v183 - *(_QWORD *)(v183 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v63 = *(void **)(v183 - 8);
        }
        sub_1409DB4C0(lpMem: v63);
      }
      *(_QWORD *)&v183 = 19937;
      v184 = 0;
      v185 = 31;
      if ( v182 > 0xF )
      {
        v64 = (void *)v180;
        if ( v182 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v180 - *(_QWORD *)(v180 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v64 = *(void **)(v180 - 8);
        }
        sub_1409DB4C0(lpMem: v64);
      }
      sub_1409DBB40(a1: &dword_1413A9168);
    }
  }
  LODWORD(v176) = dword_1413A9164;
  if ( *a2 != 0 )
  {
    if ( *(_BYTE *)(a1 + 445) != 0 )
    {
      v10 = sub_140076FF0();
      sub_140084F80(a1: (_DWORD)a2, a2: (unsigned int)&v176, a3: a1 + 445, a4: 1, a5: v10);
    }
  }
  else if ( (unsigned __int8)sub_1400852F0(a1: (_DWORD)a2, a2: (int)a1 + 445, a3: (unsigned int)&v176, a4: 1, a5: 512) == 0 )
  {
    *(_BYTE *)(a1 + 445) = 0;
  }
  if ( dword_1413A9170 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413A9170);
    if ( dword_1413A9170 == -1 )
    {
      v68 = qword_1413A9130;
      if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_1413A9130) < 0x11 )
        sub_14001B680(a1: v66, a2: v65);
      v69 = &xmmword_1413A9120;
      if ( (unsigned __int64)qword_1413A9138 > 0xF )
        v69 = (__int128 *)xmmword_1413A9120;
      v177 = v69;
      v180 = 0;
      v181 = 0;
      v182 = 0;
      v70 = qword_1413A9130 + 17;
      if ( (unsigned __int64)(qword_1413A9130 + 17) <= 0xF )
      {
        v71 = 15;
        v74 = &v180;
      }
      else
      {
        v71 = v70 | 0xF;
        if ( (v70 | 0xFuLL) <= 0x7FFFFFFFFFFFFFFFLL )
        {
          if ( v71 < 0x16 )
            v71 = 22;
          if ( v71 == -1 )
          {
            v74 = nullptr;
            *(_QWORD *)&v180 = 0;
            goto LABEL_206;
          }
          if ( v71 + 1 < 0x1000 )
          {
            v74 = (__int128 *)sub_1409DB470(a1: v71 + 1);
            v69 = v177;
            v70 = v68 + 17;
            *(_QWORD *)&v180 = v74;
            goto LABEL_206;
          }
          v72 = v71 + 40;
          if ( v71 + 40 < v71 + 1 )
          {
            sub_14001B170(a1: v72, a2: v69, a3: 0, a4: v67);
            __debugbreak();
          }
        }
        else
        {
          v71 = 0x7FFFFFFFFFFFFFFFLL;
          v72 = 0x8000000000000027uLL;
        }
        v73 = sub_1409DB470(a1: v72);
        if ( v73 == 0 )
          __fastfail(5u);
        v74 = (__int128 *)((v73 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *((_QWORD *)v74 - 1) = v73;
        v69 = v177;
        v70 = v68 + 17;
        *(_QWORD *)&v180 = v74;
      }
LABEL_206:
      v181 = v70;
      v182 = v71;
      sub_140E82100(a1: v74, a2: v69, a3: v68);
      strcpy((char *)v74 + v68, "filmgrainVignette");
      v77 = &v180;
      if ( v182 > 0xF )
        v77 = (__int128 *)v180;
      v179 = v77;
      v78 = qword_1413A9130;
      v176 = qword_1413A9130;
      if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_1413A9130) < 0x11 )
        sub_14001B680(a1: v75, a2: qword_1413A9130);
      v79 = &xmmword_1413A9120;
      if ( (unsigned __int64)qword_1413A9138 > 0xF )
        v79 = (__int128 *)xmmword_1413A9120;
      v177 = v79;
      v183 = 0;
      v184 = 0;
      v185 = 0;
      v80 = qword_1413A9130 + 17;
      if ( (unsigned __int64)(qword_1413A9130 + 17) <= 0xF )
      {
        v81 = 15;
        v84 = &v183;
      }
      else
      {
        v81 = v80 | 0xF;
        if ( (v80 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
        {
          v81 = 0x7FFFFFFFFFFFFFFFLL;
          v82 = 0x8000000000000027uLL;
LABEL_215:
          v83 = sub_1409DB470(a1: v82);
          if ( v83 == 0 )
            __fastfail(5u);
          v84 = (__int128 *)((v83 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
          *((_QWORD *)v84 - 1) = v83;
          v78 = v176;
          v79 = v177;
          *(_QWORD *)&v183 = v84;
          goto LABEL_227;
        }
        if ( v81 < 0x16 )
          v81 = 22;
        if ( v81 == -1 )
        {
          v84 = nullptr;
          *(_QWORD *)&v183 = 0;
        }
        else
        {
          if ( v81 + 1 >= 0x1000 )
          {
            v82 = v81 + 40;
            if ( v81 + 40 < v81 + 1 )
            {
              sub_14001B170(a1: v82, a2: qword_1413A9130, a3: 0, a4: v76);
              __debugbreak();
            }
            goto LABEL_215;
          }
          v84 = (__int128 *)sub_1409DB470(a1: v81 + 1);
          v78 = v176;
          v79 = v177;
          *(_QWORD *)&v183 = v84;
        }
      }
LABEL_227:
      v184 = v80;
      v185 = v81;
      sub_140E82100(a1: v84, a2: v79, a3: v78);
      v85 = v176;
      *(__int128 *)((char *)v84 + v176) = xmmword_140FEB620;
      *((_BYTE *)v84 + v85 + 16) = 101;
      *((_BYTE *)v84 + v80) = 0;
      v86 = &v183;
      if ( v185 > 0xF )
        v86 = (__int128 *)v183;
      v87 = sub_140062160(a1: v86);
      sub_140062D10(
        a1: (unsigned int)&dword_1413A916C,
        a2: v87,
        a3: (_DWORD)v179,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\System\\i"
                      "nclude\\System/Studio/OpenGL/PXPostEffectHandler.h",
        a5: 287);
      if ( v185 > 0xF )
      {
        v88 = (void *)v183;
        if ( v185 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v183 - *(_QWORD *)(v183 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v88 = *(void **)(v183 - 8);
        }
        sub_1409DB4C0(lpMem: v88);
      }
      *(_QWORD *)&v183 = 19937;
      v184 = 0;
      v185 = 31;
      if ( v182 > 0xF )
      {
        v89 = (void *)v180;
        if ( v182 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v180 - *(_QWORD *)(v180 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v89 = *(void **)(v180 - 8);
        }
        sub_1409DB4C0(lpMem: v89);
      }
      sub_1409DBB40(a1: &dword_1413A9170);
    }
  }
  LODWORD(v176) = dword_1413A916C;
  if ( *a2 != 0 )
  {
    if ( *(_BYTE *)(a1 + 446) != 0 )
    {
      v11 = sub_140076FF0();
      sub_140084F80(a1: (_DWORD)a2, a2: (unsigned int)&v176, a3: a1 + 446, a4: 1, a5: v11);
    }
  }
  else if ( (unsigned __int8)sub_1400852F0(a1: (_DWORD)a2, a2: (int)a1 + 446, a3: (unsigned int)&v176, a4: 1, a5: 512) == 0 )
  {
    *(_BYTE *)(a1 + 446) = 0;
  }
  if ( dword_1413A9178 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413A9178);
    if ( dword_1413A9178 == -1 )
    {
      v94 = qword_1413A9130;
      if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_1413A9130) < 0x1C )
        sub_14001B680(a1: v91, a2: v90);
      v95 = &xmmword_1413A9120;
      if ( (unsigned __int64)qword_1413A9138 > 0xF )
        v95 = (__int128 *)xmmword_1413A9120;
      v177 = v95;
      v180 = 0;
      v181 = 0;
      v182 = 0;
      v96 = qword_1413A9130 + 28;
      if ( (unsigned __int64)(qword_1413A9130 + 28) <= 0xF )
      {
        v9 = 15;
        v100 = &v180;
      }
      else
      {
        if ( (v96 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
        {
          v97 = 0x8000000000000027uLL;
LABEL_250:
          v98 = sub_1409DB470(a1: v97);
          if ( v98 == 0 )
            __fastfail(5u);
          v100 = (__int128 *)((v98 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
          *((_QWORD *)v100 - 1) = v98;
          v95 = v177;
          *(_QWORD *)&v180 = v100;
          goto LABEL_262;
        }
        v9 = v96 | 0xF;
        if ( (v96 | 0xFuLL) < 0x16 )
          v9 = 22;
        v99 = v9 + 1;
        if ( v9 == -1 )
        {
          v100 = nullptr;
          *(_QWORD *)&v180 = 0;
        }
        else
        {
          if ( v99 >= 0x1000 )
          {
            v97 = v9 + 40;
            if ( v9 + 40 < (unsigned __int64)(v9 + 1) )
            {
              sub_14001B170(a1: v99, a2: v95, a3: v92, a4: v93);
              __debugbreak();
            }
            goto LABEL_250;
          }
          v100 = (__int128 *)sub_1409DB470(a1: v99);
          v95 = v177;
          *(_QWORD *)&v180 = v100;
        }
      }
LABEL_262:
      v181 = v94 + 28;
      v182 = v9;
      sub_140E82100(a1: v100, a2: v95, a3: v94);
      qmemcpy((char *)v100 + v94, "brightnessContrastSaturation", 28);
      *((_BYTE *)v100 + v96) = 0;
      v101 = &v180;
      if ( v182 > 0xF )
        LODWORD(v101) = v180;
      v102 = (_QWORD *)sub_140020190(a1: &v183, a2: &xmmword_1413A9120, a3: &xmmword_140FEB638);
      if ( v102[3] > 0xFu )
        v102 = (_QWORD *)*v102;
      v103 = sub_140062160(a1: v102);
      sub_140062D10(
        a1: (unsigned int)&dword_1413A9174,
        a2: v103,
        a3: (_DWORD)v101,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\System\\i"
                      "nclude\\System/Studio/OpenGL/PXPostEffectHandler.h",
        a5: 288);
      sub_140017B20(a1: &v183);
      if ( v182 > 0xF )
      {
        v104 = (void *)v180;
        if ( v182 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v180 - *(_QWORD *)(v180 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v104 = *(void **)(v180 - 8);
        }
        sub_1409DB4C0(lpMem: v104);
      }
      sub_1409DBB40(a1: &dword_1413A9178);
    }
  }
  LODWORD(v176) = dword_1413A9174;
  if ( *a2 != 0 )
  {
    if ( *(float *)(a1 + 332) != 0.0 || *(float *)(a1 + 336) != 0.0 || *(float *)(a1 + 340) != 0.0 )
    {
      v12 = sub_140076FC0();
      sub_140084DC0(a1: (_DWORD)a2, a2: (unsigned int)&v176, a3: a1 + 332, a4: 12, a5: v12, a6: 512);
    }
  }
  else if ( (unsigned __int8)sub_1400852F0(a1: (_DWORD)a2, a2: (int)a1 + 332, a3: (unsigned int)&v176, a4: 12, a5: 512) == 0 )
  {
    *(_QWORD *)(a1 + 332) = 0;
    *(_DWORD *)(a1 + 340) = 0;
  }
  if ( dword_1413A9180 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413A9180);
    if ( dword_1413A9180 == -1 )
    {
      v105 = (__int64 *)sub_140020190(a1: &v183, a2: &xmmword_1413A9120, a3: "aberationAmount");
      LODWORD(v106) = (_DWORD)v105;
      if ( (unsigned __int64)v105[3] > 0xF )
        v106 = *v105;
      v107 = (_QWORD *)sub_140020190(a1: &v180, a2: &xmmword_1413A9120, a3: "aberationAmount");
      if ( v107[3] > 0xFu )
        v107 = (_QWORD *)*v107;
      v108 = sub_140062160(a1: v107);
      sub_140062D10(
        a1: (unsigned int)&dword_1413A917C,
        a2: v108,
        a3: v106,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\System\\i"
                      "nclude\\System/Studio/OpenGL/PXPostEffectHandler.h",
        a5: 289);
      sub_140017B20(a1: &v180);
      sub_140017B20(a1: &v183);
      sub_1409DBB40(a1: &dword_1413A9180);
    }
  }
  LODWORD(v176) = dword_1413A917C;
  sub_140021DC0(a1: a2, a2: &v176, a3: a1 + 424);
  if ( dword_1413A9188 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413A9188);
    if ( dword_1413A9188 == -1 )
    {
      v109 = (__int64 *)sub_140020190(a1: &v183, a2: &xmmword_1413A9120, a3: "filmgrainVignetteAmount");
      LODWORD(v110) = (_DWORD)v109;
      if ( (unsigned __int64)v109[3] > 0xF )
        v110 = *v109;
      v111 = (_QWORD *)sub_140020190(a1: &v180, a2: &xmmword_1413A9120, a3: "filmgrainVignetteAmount");
      if ( v111[3] > 0xFu )
        v111 = (_QWORD *)*v111;
      v112 = sub_140062160(a1: v111);
      sub_140062D10(
        a1: (unsigned int)&dword_1413A9184,
        a2: v112,
        a3: v110,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\System\\i"
                      "nclude\\System/Studio/OpenGL/PXPostEffectHandler.h",
        a5: 290);
      sub_140017B20(a1: &v180);
      sub_140017B20(a1: &v183);
      sub_1409DBB40(a1: &dword_1413A9188);
    }
  }
  LODWORD(v176) = dword_1413A9184;
  if ( *a2 != 0 )
  {
    if ( *(float *)(a1 + 344) != 0.0 || *(float *)(a1 + 348) != 0.0 )
    {
      v13 = sub_140076FA0();
      sub_140084DC0(a1: (_DWORD)a2, a2: (unsigned int)&v176, a3: a1 + 344, a4: 8, a5: v13, a6: 512);
    }
  }
  else if ( (unsigned __int8)sub_1400852F0(a1: (_DWORD)a2, a2: (int)a1 + 344, a3: (unsigned int)&v176, a4: 8, a5: 512) == 0 )
  {
    *(_QWORD *)(a1 + 344) = 0;
  }
  if ( dword_1413A9190 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413A9190);
    if ( dword_1413A9190 == -1 )
    {
      v113 = (__int64 *)sub_140020190(a1: &v183, a2: &xmmword_1413A9120, a3: "DOF");
      LODWORD(v114) = (_DWORD)v113;
      if ( (unsigned __int64)v113[3] > 0xF )
        v114 = *v113;
      v115 = (_QWORD *)sub_140020190(a1: &v180, a2: &xmmword_1413A9120, a3: "DOF");
      if ( v115[3] > 0xFu )
        v115 = (_QWORD *)*v115;
      v116 = sub_140062160(a1: v115);
      sub_140062D10(
        a1: (unsigned int)&dword_1413A918C,
        a2: v116,
        a3: v114,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\System\\i"
                      "nclude\\System/Studio/OpenGL/PXPostEffectHandler.h",
        a5: 291);
      sub_140017B20(a1: &v180);
      sub_140017B20(a1: &v183);
      sub_1409DBB40(a1: &dword_1413A9190);
    }
  }
  LODWORD(v176) = dword_1413A918C;
  if ( *a2 != 0 )
  {
    if ( *(_BYTE *)(a1 + 449) != 0 )
    {
      v14 = sub_140076FF0();
      sub_140084F80(a1: (_DWORD)a2, a2: (unsigned int)&v176, a3: a1 + 449, a4: 1, a5: v14);
    }
  }
  else if ( (unsigned __int8)sub_1400852F0(a1: (_DWORD)a2, a2: (int)a1 + 449, a3: (unsigned int)&v176, a4: 1, a5: 512) == 0 )
  {
    *(_BYTE *)(a1 + 449) = 0;
  }
  if ( dword_1413A9198 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413A9198);
    if ( dword_1413A9198 == -1 )
    {
      v117 = (__int64 *)sub_140020190(a1: &v183, a2: &xmmword_1413A9120, a3: "DOFSamples");
      LODWORD(v118) = (_DWORD)v117;
      if ( (unsigned __int64)v117[3] > 0xF )
        v118 = *v117;
      v119 = (_QWORD *)sub_140020190(a1: &v180, a2: &xmmword_1413A9120, a3: "DOFSamples");
      if ( v119[3] > 0xFu )
        v119 = (_QWORD *)*v119;
      v120 = sub_140062160(a1: v119);
      sub_140062D10(
        a1: (unsigned int)&dword_1413A9194,
        a2: v120,
        a3: v118,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\System\\i"
                      "nclude\\System/Studio/OpenGL/PXPostEffectHandler.h",
        a5: 292);
      sub_140017B20(a1: &v180);
      sub_140017B20(a1: &v183);
      sub_1409DBB40(a1: &dword_1413A9198);
    }
  }
  LODWORD(v176) = dword_1413A9194;
  if ( *a2 != 0 )
  {
    if ( *(_DWORD *)(a1 + 384) != 0 )
    {
      v15 = sub_140076F50();
      sub_140084F80(a1: (_DWORD)a2, a2: (unsigned int)&v176, a3: a1 + 384, a4: 4, a5: v15);
    }
  }
  else if ( (unsigned __int8)sub_1400852F0(a1: (_DWORD)a2, a2: (int)a1 + 384, a3: (unsigned int)&v176, a4: 4, a5: 512) == 0 )
  {
    *(_DWORD *)(a1 + 384) = 0;
  }
  if ( dword_1413A91A0 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413A91A0);
    if ( dword_1413A91A0 == -1 )
    {
      v121 = (__int64 *)sub_140020190(a1: &v183, a2: &xmmword_1413A9120, a3: "DOFRings");
      LODWORD(v122) = (_DWORD)v121;
      if ( (unsigned __int64)v121[3] > 0xF )
        v122 = *v121;
      v123 = (_QWORD *)sub_140020190(a1: &v180, a2: &xmmword_1413A9120, a3: "DOFRings");
      if ( v123[3] > 0xFu )
        v123 = (_QWORD *)*v123;
      v124 = sub_140062160(a1: v123);
      sub_140062D10(
        a1: (unsigned int)&dword_1413A919C,
        a2: v124,
        a3: v122,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\System\\i"
                      "nclude\\System/Studio/OpenGL/PXPostEffectHandler.h",
        a5: 293);
      sub_140017B20(a1: &v180);
      sub_140017B20(a1: &v183);
      sub_1409DBB40(a1: &dword_1413A91A0);
    }
  }
  LODWORD(v176) = dword_1413A919C;
  if ( *a2 != 0 )
  {
    if ( *(_DWORD *)(a1 + 388) != 0 )
    {
      v16 = sub_140076F50();
      sub_140084F80(a1: (_DWORD)a2, a2: (unsigned int)&v176, a3: a1 + 388, a4: 4, a5: v16);
    }
  }
  else if ( (unsigned __int8)sub_1400852F0(a1: (_DWORD)a2, a2: (int)a1 + 388, a3: (unsigned int)&v176, a4: 4, a5: 512) == 0 )
  {
    *(_DWORD *)(a1 + 388) = 0;
  }
  if ( dword_1413A91A8 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413A91A8);
    if ( dword_1413A91A8 == -1 )
    {
      v125 = (__int64 *)sub_140020190(a1: &v183, a2: &xmmword_1413A9120, a3: "DOFAutoFocus");
      LODWORD(v126) = (_DWORD)v125;
      if ( (unsigned __int64)v125[3] > 0xF )
        v126 = *v125;
      v127 = (_QWORD *)sub_140020190(a1: &v180, a2: &xmmword_1413A9120, a3: "DOFAutoFocus");
      if ( v127[3] > 0xFu )
        v127 = (_QWORD *)*v127;
      v128 = sub_140062160(a1: v127);
      sub_140062D10(
        a1: (unsigned int)&dword_1413A91A4,
        a2: v128,
        a3: v126,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\System\\i"
                      "nclude\\System/Studio/OpenGL/PXPostEffectHandler.h",
        a5: 294);
      sub_140017B20(a1: &v180);
      sub_140017B20(a1: &v183);
      sub_1409DBB40(a1: &dword_1413A91A8);
    }
  }
  LODWORD(v176) = dword_1413A91A4;
  if ( *a2 != 0 )
  {
    if ( *(_BYTE *)(a1 + 450) != 0 )
    {
      v17 = sub_140076FF0();
      sub_140084F80(a1: (_DWORD)a2, a2: (unsigned int)&v176, a3: a1 + 450, a4: 1, a5: v17);
    }
  }
  else if ( (unsigned __int8)sub_1400852F0(a1: (_DWORD)a2, a2: (int)a1 + 450, a3: (unsigned int)&v176, a4: 1, a5: 512) == 0 )
  {
    *(_BYTE *)(a1 + 450) = 0;
  }
  if ( dword_1413A91B0 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413A91B0);
    if ( dword_1413A91B0 == -1 )
    {
      v129 = (__int64 *)sub_140020190(a1: &v183, a2: &xmmword_1413A9120, a3: "DOFFocalDepth");
      LODWORD(v130) = (_DWORD)v129;
      if ( (unsigned __int64)v129[3] > 0xF )
        v130 = *v129;
      v131 = (_QWORD *)sub_140020190(a1: &v180, a2: &xmmword_1413A9120, a3: "DOFFocalDepth");
      if ( v131[3] > 0xFu )
        v131 = (_QWORD *)*v131;
      v132 = sub_140062160(a1: v131);
      sub_140062D10(
        a1: (unsigned int)&dword_1413A91AC,
        a2: v132,
        a3: v130,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\System\\i"
                      "nclude\\System/Studio/OpenGL/PXPostEffectHandler.h",
        a5: 295);
      sub_140017B20(a1: &v180);
      sub_140017B20(a1: &v183);
      sub_1409DBB40(a1: &dword_1413A91B0);
    }
  }
  LODWORD(v176) = dword_1413A91AC;
  sub_140021DC0(a1: a2, a2: &v176, a3: a1 + 392);
  if ( dword_1413A91B8 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413A91B8);
    if ( dword_1413A91B8 == -1 )
    {
      v133 = (__int64 *)sub_140020190(a1: &v183, a2: &xmmword_1413A9120, a3: "DOFFocalRange");
      LODWORD(v134) = (_DWORD)v133;
      if ( (unsigned __int64)v133[3] > 0xF )
        v134 = *v133;
      v135 = (_QWORD *)sub_140020190(a1: &v180, a2: &xmmword_1413A9120, a3: "DOFFocalRange");
      if ( v135[3] > 0xFu )
        v135 = (_QWORD *)*v135;
      v136 = sub_140062160(a1: v135);
      sub_140062D10(
        a1: (unsigned int)&dword_1413A91B4,
        a2: v136,
        a3: v134,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\System\\i"
                      "nclude\\System/Studio/OpenGL/PXPostEffectHandler.h",
        a5: 296);
      sub_140017B20(a1: &v180);
      sub_140017B20(a1: &v183);
      sub_1409DBB40(a1: &dword_1413A91B8);
    }
  }
  LODWORD(v176) = dword_1413A91B4;
  sub_140021DC0(a1: a2, a2: &v176, a3: a1 + 396);
  if ( dword_1413A91C0 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413A91C0);
    if ( dword_1413A91C0 == -1 )
    {
      v137 = (__int64 *)sub_140020190(a1: &v183, a2: &xmmword_1413A9120, a3: "DOFMaxBlur");
      LODWORD(v138) = (_DWORD)v137;
      if ( (unsigned __int64)v137[3] > 0xF )
        v138 = *v137;
      v139 = (_QWORD *)sub_140020190(a1: &v180, a2: &xmmword_1413A9120, a3: "DOFMaxBlur");
      if ( v139[3] > 0xFu )
        v139 = (_QWORD *)*v139;
      v140 = sub_140062160(a1: v139);
      sub_140062D10(
        a1: (unsigned int)&dword_1413A91BC,
        a2: v140,
        a3: v138,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\System\\i"
                      "nclude\\System/Studio/OpenGL/PXPostEffectHandler.h",
        a5: 297);
      sub_140017B20(a1: &v180);
      sub_140017B20(a1: &v183);
      sub_1409DBB40(a1: &dword_1413A91C0);
    }
  }
  LODWORD(v176) = dword_1413A91BC;
  sub_140021DC0(a1: a2, a2: &v176, a3: a1 + 400);
  if ( dword_1413A91C8 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413A91C8);
    if ( dword_1413A91C8 == -1 )
    {
      v141 = (__int64 *)sub_140020190(a1: &v183, a2: &xmmword_1413A9120, a3: "DOFThreshold");
      LODWORD(v142) = (_DWORD)v141;
      if ( (unsigned __int64)v141[3] > 0xF )
        v142 = *v141;
      v143 = (_QWORD *)sub_140020190(a1: &v180, a2: &xmmword_1413A9120, a3: "DOFThreshold");
      if ( v143[3] > 0xFu )
        v143 = (_QWORD *)*v143;
      v144 = sub_140062160(a1: v143);
      sub_140062D10(
        a1: (unsigned int)&dword_1413A91C4,
        a2: v144,
        a3: v142,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\System\\i"
                      "nclude\\System/Studio/OpenGL/PXPostEffectHandler.h",
        a5: 298);
      sub_140017B20(a1: &v180);
      sub_140017B20(a1: &v183);
      sub_1409DBB40(a1: &dword_1413A91C8);
    }
  }
  LODWORD(v176) = dword_1413A91C4;
  sub_140021DC0(a1: a2, a2: &v176, a3: a1 + 404);
  if ( dword_1413A91D0 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413A91D0);
    if ( dword_1413A91D0 == -1 )
    {
      v145 = (__int64 *)sub_140020190(a1: &v183, a2: &xmmword_1413A9120, a3: "DOFGain");
      LODWORD(v146) = (_DWORD)v145;
      if ( (unsigned __int64)v145[3] > 0xF )
        v146 = *v145;
      v147 = (_QWORD *)sub_140020190(a1: &v180, a2: &xmmword_1413A9120, a3: "DOFGain");
      if ( v147[3] > 0xFu )
        v147 = (_QWORD *)*v147;
      v148 = sub_140062160(a1: v147);
      sub_140062D10(
        a1: (unsigned int)&dword_1413A91CC,
        a2: v148,
        a3: v146,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\System\\i"
                      "nclude\\System/Studio/OpenGL/PXPostEffectHandler.h",
        a5: 299);
      sub_140017B20(a1: &v180);
      sub_140017B20(a1: &v183);
      sub_1409DBB40(a1: &dword_1413A91D0);
    }
  }
  LODWORD(v176) = dword_1413A91CC;
  sub_140021DC0(a1: a2, a2: &v176, a3: a1 + 408);
  if ( dword_1413A91D8 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413A91D8);
    if ( dword_1413A91D8 == -1 )
    {
      v149 = (__int64 *)sub_140020190(a1: &v183, a2: &xmmword_1413A9120, a3: "DOFBias");
      LODWORD(v150) = (_DWORD)v149;
      if ( (unsigned __int64)v149[3] > 0xF )
        v150 = *v149;
      v151 = (_QWORD *)sub_140020190(a1: &v180, a2: &xmmword_1413A9120, a3: "DOFBias");
      if ( v151[3] > 0xFu )
        v151 = (_QWORD *)*v151;
      v152 = sub_140062160(a1: v151);
      sub_140062D10(
        a1: (unsigned int)&dword_1413A91D4,
        a2: v152,
        a3: v150,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\System\\i"
                      "nclude\\System/Studio/OpenGL/PXPostEffectHandler.h",
        a5: 300);
      sub_140017B20(a1: &v180);
      sub_140017B20(a1: &v183);
      sub_1409DBB40(a1: &dword_1413A91D8);
    }
  }
  LODWORD(v176) = dword_1413A91D4;
  sub_140021DC0(a1: a2, a2: &v176, a3: a1 + 412);
  if ( dword_1413A91E0 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413A91E0);
    if ( dword_1413A91E0 == -1 )
    {
      v153 = (__int64 *)sub_140020190(a1: &v183, a2: &xmmword_1413A9120, a3: "DOFFringe");
      LODWORD(v154) = (_DWORD)v153;
      if ( (unsigned __int64)v153[3] > 0xF )
        v154 = *v153;
      v155 = (_QWORD *)sub_140020190(a1: &v180, a2: &xmmword_1413A9120, a3: "DOFFringe");
      if ( v155[3] > 0xFu )
        v155 = (_QWORD *)*v155;
      v156 = sub_140062160(a1: v155);
      sub_140062D10(
        a1: (unsigned int)&dword_1413A91DC,
        a2: v156,
        a3: v154,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\System\\i"
                      "nclude\\System/Studio/OpenGL/PXPostEffectHandler.h",
        a5: 301);
      sub_140017B20(a1: &v180);
      sub_140017B20(a1: &v183);
      sub_1409DBB40(a1: &dword_1413A91E0);
    }
  }
  LODWORD(v176) = dword_1413A91DC;
  sub_140021DC0(a1: a2, a2: &v176, a3: a1 + 416);
  if ( dword_1413A91E8 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413A91E8);
    if ( dword_1413A91E8 == -1 )
    {
      v157 = (__int64 *)sub_140020190(a1: &v183, a2: &xmmword_1413A9120, a3: "DOFPentagonBokeh");
      LODWORD(v158) = (_DWORD)v157;
      if ( (unsigned __int64)v157[3] > 0xF )
        v158 = *v157;
      v159 = (_QWORD *)sub_140020190(a1: &v180, a2: &xmmword_1413A9120, a3: "DOFPentagonBokeh");
      if ( v159[3] > 0xFu )
        v159 = (_QWORD *)*v159;
      v160 = sub_140062160(a1: v159);
      sub_140062D10(
        a1: (unsigned int)&dword_1413A91E4,
        a2: v160,
        a3: v158,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\System\\i"
                      "nclude\\System/Studio/OpenGL/PXPostEffectHandler.h",
        a5: 302);
      sub_140017B20(a1: &v180);
      sub_140017B20(a1: &v183);
      sub_1409DBB40(a1: &dword_1413A91E8);
    }
  }
  LODWORD(v176) = dword_1413A91E4;
  if ( *a2 != 0 )
  {
    if ( *(_BYTE *)(a1 + 451) != 0 )
    {
      v18 = sub_140076FF0();
      sub_140084F80(a1: (_DWORD)a2, a2: (unsigned int)&v176, a3: a1 + 451, a4: 1, a5: v18);
    }
  }
  else if ( (unsigned __int8)sub_1400852F0(a1: (_DWORD)a2, a2: (int)a1 + 451, a3: (unsigned int)&v176, a4: 1, a5: 512) == 0 )
  {
    *(_BYTE *)(a1 + 451) = 0;
  }
  if ( dword_1413A91F0 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413A91F0);
    if ( dword_1413A91F0 == -1 )
    {
      v161 = (__int64 *)sub_140020190(a1: &v183, a2: &xmmword_1413A9120, a3: "DOFPentagonFeather");
      LODWORD(v162) = (_DWORD)v161;
      if ( (unsigned __int64)v161[3] > 0xF )
        v162 = *v161;
      v163 = (_QWORD *)sub_140020190(a1: &v180, a2: &xmmword_1413A9120, a3: "DOFPentagonFeather");
      if ( v163[3] > 0xFu )
        v163 = (_QWORD *)*v163;
      v164 = sub_140062160(a1: v163);
      sub_140062D10(
        a1: (unsigned int)&dword_1413A91EC,
        a2: v164,
        a3: v162,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\System\\i"
                      "nclude\\System/Studio/OpenGL/PXPostEffectHandler.h",
        a5: 303);
      sub_140017B20(a1: &v180);
      sub_140017B20(a1: &v183);
      sub_1409DBB40(a1: &dword_1413A91F0);
    }
  }
  LODWORD(v176) = dword_1413A91EC;
  sub_140021DC0(a1: a2, a2: &v176, a3: a1 + 420);
  if ( dword_1413A91F8 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413A91F8);
    if ( dword_1413A91F8 == -1 )
    {
      v165 = (__int64 *)sub_140020190(a1: &v183, a2: &xmmword_1413A9120, a3: "enableLookupTable");
      LODWORD(v166) = (_DWORD)v165;
      if ( (unsigned __int64)v165[3] > 0xF )
        v166 = *v165;
      v167 = (_QWORD *)sub_140020190(a1: &v180, a2: &xmmword_1413A9120, a3: "enableLookupTable");
      if ( v167[3] > 0xFu )
        v167 = (_QWORD *)*v167;
      v168 = sub_140062160(a1: v167);
      sub_140062D10(
        a1: (unsigned int)&dword_1413A91F4,
        a2: v168,
        a3: v166,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\System\\i"
                      "nclude\\System/Studio/OpenGL/PXPostEffectHandler.h",
        a5: 304);
      sub_140017B20(a1: &v180);
      sub_140017B20(a1: &v183);
      sub_1409DBB40(a1: &dword_1413A91F8);
    }
  }
  LODWORD(v176) = dword_1413A91F4;
  if ( *a2 != 0 )
  {
    if ( *(_BYTE *)(a1 + 447) != 0 )
    {
      v19 = sub_140076FF0();
      sub_140084F80(a1: (_DWORD)a2, a2: (unsigned int)&v176, a3: a1 + 447, a4: 1, a5: v19);
    }
  }
  else if ( (unsigned __int8)sub_1400852F0(a1: (_DWORD)a2, a2: (int)a1 + 447, a3: (unsigned int)&v176, a4: 1, a5: 512) == 0 )
  {
    *(_BYTE *)(a1 + 447) = 0;
  }
  if ( dword_1413A9200 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413A9200);
    if ( dword_1413A9200 == -1 )
    {
      v169 = (__int64 *)sub_140020190(a1: &v183, a2: &xmmword_1413A9120, a3: "lookupTables");
      LODWORD(v170) = (_DWORD)v169;
      if ( (unsigned __int64)v169[3] > 0xF )
        v170 = *v169;
      v171 = (_QWORD *)sub_140020190(a1: &v180, a2: &xmmword_1413A9120, a3: "lookupTables");
      if ( v171[3] > 0xFu )
        v171 = (_QWORD *)*v171;
      v172 = sub_140062160(a1: v171);
      sub_140062D10(
        a1: (unsigned int)&dword_1413A91FC,
        a2: v172,
        a3: v170,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\System\\i"
                      "nclude\\System/Studio/OpenGL/PXPostEffectHandler.h",
        a5: 305);
      sub_140017B20(a1: &v180);
      sub_140017B20(a1: &v183);
      sub_1409DBB40(a1: &dword_1413A9200);
    }
  }
  v20 = sub_14001D730(a1: a1 + 160);
  LODWORD(v176) = dword_1413A91FC;
  sub_140665F80(a1: a2, a2: &v176, a3: v20);
  if ( dword_1413A9208 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413A9208);
    if ( dword_1413A9208 == -1 )
    {
      v173 = (__int64 *)sub_140020190(a1: &v183, a2: &xmmword_1413A9120, a3: "photoModeLogoPath");
      LODWORD(v174) = (_DWORD)v173;
      if ( (unsigned __int64)v173[3] > 0xF )
        v174 = *v173;
      v175 = (_QWORD *)sub_140020190(a1: &v180, a2: &xmmword_1413A9120, a3: "photoModeLogoPath");
      if ( v175[3] > 0xFu )
        v175 = (_QWORD *)*v175;
      v22 = sub_140062160(a1: v175);
      sub_140062D10(
        a1: (unsigned int)&dword_1413A9204,
        a2: v22,
        a3: v174,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\System\\i"
                      "nclude\\System/Studio/OpenGL/PXPostEffectHandler.h",
        a5: 306);
      sub_140017B20(a1: &v180);
      sub_140017B20(a1: &v183);
      sub_1409DBB40(a1: &dword_1413A9208);
    }
  }
  LODWORD(v176) = dword_1413A9204;
  return sub_140085740(a1: a2, a2: &v176, a3: a1 + 256, a4: &byte_140EEC5C5);
}