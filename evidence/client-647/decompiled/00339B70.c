__int64 __fastcall sub_140339B70(__int64 a1, __int64 a2)
{
  __int64 v3; // r15
  __int64 v4; // r14
  char v5; // al
  __int64 v6; // rsi
  char v7; // al
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  int v16; // eax
  __int64 *v17; // rax
  __int64 v18; // rdi
  _QWORD *v19; // rax
  int v20; // eax
  __int64 *v21; // rax
  __int64 v22; // rdi
  _QWORD *v23; // rax
  int v24; // eax
  __int64 *v25; // rax
  __int64 v26; // rdi
  _QWORD *v27; // rax
  int v28; // eax
  __int64 *v29; // rax
  __int64 v30; // rdi
  _QWORD *v31; // rax
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r15
  char *v38; // r13
  __int64 v39; // r12
  unsigned __int64 v40; // rdi
  unsigned __int64 v41; // rcx
  __int64 v42; // rax
  __int128 *v43; // r14
  __int128 *v44; // rdi
  _QWORD *v45; // rax
  int v46; // eax
  __int64 *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // r15
  __int64 v53; // r13
  char *v54; // rcx
  __int64 v55; // r12
  unsigned __int64 v56; // rdi
  unsigned __int64 v57; // rcx
  __int64 v58; // rax
  __int128 *v59; // r14
  __int128 *v60; // rcx
  int v61; // eax
  void *v62; // rcx
  void *v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // r15
  char *v69; // r13
  __int64 v70; // r12
  unsigned __int64 v71; // rdi
  unsigned __int64 v72; // rcx
  __int64 v73; // rax
  __int128 *v74; // r14
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  char *v79; // rax
  __int64 v80; // r13
  char *v81; // r12
  __int64 v82; // r15
  unsigned __int64 v83; // rdi
  unsigned __int64 v84; // rcx
  __int64 v85; // rax
  __int128 *v86; // r14
  __int128 *v87; // rcx
  int v88; // eax
  void *v89; // rcx
  void *v90; // rcx
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // r15
  char *v96; // r13
  __int64 v97; // r12
  unsigned __int64 v98; // rdi
  unsigned __int64 v99; // rcx
  __int64 v100; // rax
  __int128 *v101; // r14
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  __int128 *v106; // r13
  __int64 v107; // r15
  char *v108; // r12
  __int64 v109; // r14
  unsigned __int64 v110; // rax
  __int64 v111; // rax
  unsigned __int64 v112; // rcx
  __int128 *v113; // rdi
  __int128 *v114; // rcx
  int v115; // eax
  void *v116; // rcx
  void *v117; // rcx
  __int64 *v118; // rax
  __int64 v119; // rdi
  _QWORD *v120; // rax
  int v121; // eax
  void *v122; // rcx
  void *v123; // rcx
  __int64 *v124; // rax
  __int64 v125; // rdi
  _QWORD *v126; // rax
  int v127; // eax
  void *v128; // rcx
  void *v129; // rcx
  __int64 *v130; // rax
  __int64 v131; // rdi
  _QWORD *v132; // rax
  int v133; // eax
  void *v134; // rcx
  __int64 *v135; // rax
  __int64 v136; // rdi
  _QWORD *v137; // rax
  int v138; // eax
  __int64 *v139; // rax
  __int64 v140; // rdi
  _QWORD *v141; // rax
  int v142; // eax
  __int64 *v143; // rax
  __int64 v144; // rdi
  _QWORD *v145; // rax
  int v146; // eax
  __int64 *v147; // rax
  __int64 v148; // rdi
  _QWORD *v149; // rax
  int v150; // eax
  __int64 *v151; // rax
  __int64 v152; // rdi
  _QWORD *v153; // rax
  int v154; // eax
  __int64 *v155; // rax
  __int64 v156; // rdi
  _QWORD *v157; // rax
  int v158; // eax
  __int64 *v159; // rax
  __int64 v160; // rdi
  _QWORD *v161; // rax
  int v162; // eax
  __int64 *v163; // rax
  __int64 v164; // rdi
  _QWORD *v165; // rax
  int v166; // eax
  __int64 *v167; // rax
  __int64 v168; // rdi
  _QWORD *v169; // rax
  int v170; // eax
  __int64 *v171; // rax
  __int64 v172; // rdi
  _QWORD *v173; // rax
  int v174; // eax
  __int64 *v175; // rax
  __int64 v176; // rdi
  _QWORD *v177; // rax
  int v178; // eax
  __int64 *v179; // rax
  __int64 v180; // rdi
  _QWORD *v181; // rax
  int v182; // eax
  __int64 *v183; // rax
  __int64 v184; // rdi
  _QWORD *v185; // rax
  int v186; // eax
  __int64 *v187; // rax
  __int64 v188; // rdi
  _QWORD *v189; // rax
  int v190; // eax
  __int64 *v191; // rax
  __int64 v192; // rdi
  _QWORD *v193; // rax
  int v194; // eax
  __int64 *v195; // rax
  __int64 v196; // rdi
  _QWORD *v197; // rax
  int v198; // eax
  __int64 *v199; // rax
  __int64 v200; // rdi
  _QWORD *v201; // rax
  int v202; // eax
  __int64 *v203; // rax
  __int64 v204; // rdi
  _QWORD *v205; // rax
  char *v206; // [rsp+30h] [rbp-39h] BYREF
  __int64 v207; // [rsp+38h] [rbp-31h]
  __int64 v208; // [rsp+40h] [rbp-29h]
  __int128 v209; // [rsp+48h] [rbp-21h] BYREF
  __int64 v210; // [rsp+58h] [rbp-11h]
  unsigned __int64 v211; // [rsp+60h] [rbp-9h]
  __int128 v212; // [rsp+68h] [rbp-1h] BYREF
  __int64 v213; // [rsp+78h] [rbp+Fh]
  unsigned __int64 v214; // [rsp+80h] [rbp+17h]

  v3 = a1;
  v208 = a1;
  v4 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  v207 = v4;
  if ( dword_14138DDB4 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_14138DDB4);
    if ( dword_14138DDB4 == -1 )
    {
      sub_1409DB700(a1: sub_140EDB590);
      sub_1409DBB40(a1: &dword_14138DDB4);
    }
  }
  sub_1400BAD40(a1: v3, a2);
  if ( dword_14138DDBC > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_14138DDBC);
    if ( dword_14138DDBC == -1 )
    {
      v17 = (__int64 *)sub_140020190(a1: &v212, a2: aHorsebreed_0, a3: "class");
      LODWORD(v18) = (_DWORD)v17;
      if ( (unsigned __int64)v17[3] > 0xF )
        v18 = *v17;
      v19 = (_QWORD *)sub_140020190(a1: &v209, a2: aHorsebreed_0, a3: "class");
      if ( v19[3] > 0xFu )
        v19 = (_QWORD *)*v19;
      v20 = sub_140062160(a1: v19);
      sub_140062D10(
        a1: (unsigned int)&dword_14138DDB8,
        a2: v20,
        a3: v18,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Game\\inc"
                      "lude\\Game/Actors/Horse/PXHorseBreed.h",
        a5: 260);
      sub_14001B5A0(a1: &v209);
      *(_QWORD *)&v209 = 19937;
      v210 = 0;
      v211 = 31;
      sub_14001B5A0(a1: &v212);
      sub_1409DBB40(a1: &dword_14138DDBC);
    }
  }
  LODWORD(v206) = dword_14138DDB8;
  if ( *(_DWORD *)a2 != 0 )
  {
    if ( *(_DWORD *)(v3 + 152) != 0 )
    {
      v5 = sub_140076F50();
      sub_140084F80(a1: a2, a2: (unsigned int)&v206, a3: v3 + 152, a4: 4, a5: v5);
    }
  }
  else if ( (unsigned __int8)sub_1400852F0(a1: a2, a2: (int)v3 + 152, a3: (unsigned int)&v206, a4: 4, a5: 512) == 0 )
  {
    *(_DWORD *)(v3 + 152) = 0;
  }
  if ( dword_14138DDC4 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_14138DDC4);
    if ( dword_14138DDC4 == -1 )
    {
      v21 = (__int64 *)sub_140020190(a1: &v212, a2: aHorsebreed_0, a3: "breed");
      LODWORD(v22) = (_DWORD)v21;
      if ( (unsigned __int64)v21[3] > 0xF )
        v22 = *v21;
      v23 = (_QWORD *)sub_140020190(a1: &v209, a2: aHorsebreed_0, a3: "breed");
      if ( v23[3] > 0xFu )
        v23 = (_QWORD *)*v23;
      v24 = sub_140062160(a1: v23);
      sub_140062D10(
        a1: (unsigned int)&dword_14138DDC0,
        a2: v24,
        a3: v22,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Game\\inc"
                      "lude\\Game/Actors/Horse/PXHorseBreed.h",
        a5: 261);
      sub_14001B5A0(a1: &v209);
      *(_QWORD *)&v209 = 19937;
      v210 = 0;
      v211 = 31;
      sub_14001B5A0(a1: &v212);
      sub_1409DBB40(a1: &dword_14138DDC4);
    }
  }
  LODWORD(v206) = dword_14138DDC0;
  sub_140085740(a1: a2, a2: &v206, a3: v3 + 240, a4: &byte_140EEC5C5);
  if ( dword_14138DDCC > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_14138DDCC);
    if ( dword_14138DDCC == -1 )
    {
      v25 = (__int64 *)sub_140020190(a1: &v212, a2: aHorsebreed_0, a3: "fileObjectPath");
      LODWORD(v26) = (_DWORD)v25;
      if ( (unsigned __int64)v25[3] > 0xF )
        v26 = *v25;
      v27 = (_QWORD *)sub_140020190(a1: &v209, a2: aHorsebreed_0, a3: "fileObjectPath");
      if ( v27[3] > 0xFu )
        v27 = (_QWORD *)*v27;
      v28 = sub_140062160(a1: v27);
      sub_140062D10(
        a1: (unsigned int)&dword_14138DDC8,
        a2: v28,
        a3: v26,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Game\\inc"
                      "lude\\Game/Actors/Horse/PXHorseBreed.h",
        a5: 262);
      sub_14001B5A0(a1: &v209);
      *(_QWORD *)&v209 = 19937;
      v210 = 0;
      v211 = 31;
      sub_14001B5A0(a1: &v212);
      sub_1409DBB40(a1: &dword_14138DDCC);
    }
  }
  LODWORD(v206) = dword_14138DDC8;
  sub_140085740(a1: a2, a2: &v206, a3: v3 + 272, a4: &byte_140EEC5C5);
  if ( dword_14138DDD4 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_14138DDD4);
    if ( dword_14138DDD4 == -1 )
    {
      v29 = (__int64 *)sub_140020190(a1: &v212, a2: aHorsebreed_0, a3: "magicFileObjectPath");
      LODWORD(v30) = (_DWORD)v29;
      if ( (unsigned __int64)v29[3] > 0xF )
        v30 = *v29;
      v31 = (_QWORD *)sub_140020190(a1: &v209, a2: aHorsebreed_0, a3: "magicFileObjectPath");
      if ( v31[3] > 0xFu )
        v31 = (_QWORD *)*v31;
      v32 = sub_140062160(a1: v31);
      sub_140062D10(
        a1: (unsigned int)&dword_14138DDD0,
        a2: v32,
        a3: v30,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Game\\inc"
                      "lude\\Game/Actors/Horse/PXHorseBreed.h",
        a5: 263);
      sub_14001B5A0(a1: &v209);
      *(_QWORD *)&v209 = 19937;
      v210 = 0;
      v211 = 31;
      sub_14001B5A0(a1: &v212);
      sub_1409DBB40(a1: &dword_14138DDD4);
    }
  }
  LODWORD(v206) = dword_14138DDD0;
  sub_140085740(a1: a2, a2: &v206, a3: v3 + 304, a4: &byte_140EEC5C5);
  v6 = 0x7FFFFFFFFFFFFFFFLL;
  if ( dword_14138DDDC > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_14138DDDC);
    if ( dword_14138DDDC == -1 )
    {
      v37 = qword_141311C80;
      if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141311C80) < 0xE )
        sub_14001B680(a1: v34, a2: v33);
      v38 = aHorsebreed_0;
      if ( (unsigned __int64)qword_141311C88 > 0xF )
        v38 = *(char **)aHorsebreed_0;
      v212 = 0;
      v213 = 0;
      v214 = 0;
      v39 = qword_141311C80 + 14;
      if ( (unsigned __int64)(qword_141311C80 + 14) <= 0xF )
      {
        v40 = 15;
        v43 = &v212;
      }
      else
      {
        v40 = v39 | 0xF;
        if ( (v39 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
        {
          v40 = 0x7FFFFFFFFFFFFFFFLL;
          v41 = 0x8000000000000027uLL;
LABEL_126:
          v42 = sub_1409DB470(a1: v41);
          if ( v42 == 0 )
            __fastfail(5u);
          v43 = (__int128 *)((v42 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
          *((_QWORD *)v43 - 1) = v42;
          *(_QWORD *)&v212 = v43;
          goto LABEL_138;
        }
        if ( v40 < 0x16 )
          v40 = 22;
        if ( v40 == -1 )
        {
          v43 = nullptr;
          *(_QWORD *)&v212 = 0;
        }
        else
        {
          if ( v40 + 1 >= 0x1000 )
          {
            v41 = v40 + 40;
            if ( v40 + 40 < v40 + 1 )
            {
              sub_14001B170(a1: v41, a2: v33, a3: v35, a4: v36);
              __debugbreak();
            }
            goto LABEL_126;
          }
          v43 = (__int128 *)sub_1409DB470(a1: v40 + 1);
          *(_QWORD *)&v212 = v43;
        }
      }
LABEL_138:
      v213 = v37 + 14;
      v214 = v40;
      sub_140E82100(a1: v43, a2: v38, a3: v37);
      qmemcpy((char *)v43 + v37, "magicBaseBreed", 14);
      *((_BYTE *)v43 + v39) = 0;
      v44 = &v212;
      if ( v214 > 0xF )
        LODWORD(v44) = v212;
      v45 = (_QWORD *)sub_140020190(a1: &v209, a2: aHorsebreed_0, a3: &qword_140F74268);
      if ( v45[3] > 0xFu )
        v45 = (_QWORD *)*v45;
      v46 = sub_140062160(a1: v45);
      sub_140062D10(
        a1: (unsigned int)&dword_14138DDD8,
        a2: v46,
        a3: (_DWORD)v44,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Game\\inc"
                      "lude\\Game/Actors/Horse/PXHorseBreed.h",
        a5: 264);
      sub_14001B5A0(a1: &v209);
      *(_QWORD *)&v209 = 19937;
      v210 = 0;
      v211 = 31;
      if ( v214 > 0xF )
        sub_14001A8F0(a1: &v212, a2: v212);
      sub_1409DBB40(a1: &dword_14138DDDC);
      v4 = v207;
      v3 = v208;
    }
  }
  LODWORD(v206) = dword_14138DDD8;
  if ( *(_DWORD *)a2 != 0 )
  {
    if ( *(_DWORD *)(v3 + 624) != 0 )
    {
      v7 = sub_140076F50();
      sub_140084F80(a1: a2, a2: (unsigned int)&v206, a3: v3 + 624, a4: 4, a5: v7);
    }
  }
  else if ( (unsigned __int8)sub_1400852F0(a1: a2, a2: (int)v3 + 624, a3: (unsigned int)&v206, a4: 4, a5: 512) == 0 )
  {
    *(_DWORD *)(v3 + 624) = 0;
  }
  if ( dword_14138DDE4 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_14138DDE4);
    if ( dword_14138DDE4 == -1 )
    {
      v47 = (__int64 *)sub_140020190(a1: &v209, a2: aHorsebreed_0, a3: "restrictedSubMeshes");
      LODWORD(v52) = (_DWORD)v47;
      if ( (unsigned __int64)v47[3] > 0xF )
        v52 = *v47;
      v53 = qword_141311C80;
      if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141311C80) < 0x13 )
        sub_14001B680(a1: v49, a2: v48);
      v54 = aHorsebreed_0;
      if ( (unsigned __int64)qword_141311C88 > 0xF )
        v54 = *(char **)aHorsebreed_0;
      v206 = v54;
      v212 = 0;
      v213 = 0;
      v214 = 0;
      v55 = qword_141311C80 + 19;
      if ( (unsigned __int64)(qword_141311C80 + 19) <= 0xF )
      {
        v56 = 15;
        v59 = &v212;
      }
      else
      {
        v56 = v55 | 0xF;
        if ( (v55 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
        {
          v56 = 0x7FFFFFFFFFFFFFFFLL;
          v57 = 0x8000000000000027uLL;
LABEL_155:
          v58 = sub_1409DB470(a1: v57);
          if ( v58 == 0 )
            __fastfail(5u);
          v59 = (__int128 *)((v58 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
          *((_QWORD *)v59 - 1) = v58;
          v54 = v206;
          *(_QWORD *)&v212 = v59;
          goto LABEL_167;
        }
        if ( v56 < 0x16 )
          v56 = 22;
        if ( v56 == -1 )
        {
          v59 = nullptr;
          *(_QWORD *)&v212 = 0;
        }
        else
        {
          if ( v56 + 1 >= 0x1000 )
          {
            v57 = v56 + 40;
            if ( v56 + 40 < v56 + 1 )
            {
              sub_14001B170(a1: v57, a2: v48, a3: v50, a4: v51);
              __debugbreak();
            }
            goto LABEL_155;
          }
          v59 = (__int128 *)sub_1409DB470(a1: v56 + 1);
          v54 = v206;
          *(_QWORD *)&v212 = v59;
        }
      }
LABEL_167:
      v213 = v53 + 19;
      v214 = v56;
      sub_140E82100(a1: v59, a2: v54, a3: v53);
      qmemcpy((char *)v59 + v53, "restrictedSubMeshes", 19);
      *((_BYTE *)v59 + v55) = 0;
      v60 = &v212;
      if ( v214 > 0xF )
        v60 = (__int128 *)v212;
      v61 = sub_140062160(a1: v60);
      sub_140062D10(
        a1: (unsigned int)&dword_14138DDE0,
        a2: v61,
        a3: v52,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Game\\inc"
                      "lude\\Game/Actors/Horse/PXHorseBreed.h",
        a5: 265);
      if ( v214 > 0xF )
      {
        v62 = (void *)v212;
        if ( v214 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v212 - *(_QWORD *)(v212 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v62 = *(void **)(v212 - 8);
        }
        sub_1409DB4C0(lpMem: v62);
      }
      *(_QWORD *)&v212 = 19937;
      v213 = 0;
      v214 = 31;
      if ( v211 > 0xF )
      {
        v63 = (void *)v209;
        if ( v211 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v209 - *(_QWORD *)(v209 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v63 = *(void **)(v209 - 8);
        }
        sub_1409DB4C0(lpMem: v63);
      }
      sub_1409DBB40(a1: &dword_14138DDE4);
      v4 = v207;
      v3 = v208;
    }
  }
  LODWORD(v206) = dword_14138DDE0;
  sub_140085740(a1: a2, a2: &v206, a3: v3 + 336, a4: &byte_140EEC5C5);
  if ( dword_14138DDEC <= *(_DWORD *)(v4 + 76) )
    goto LABEL_19;
  sub_1409DBBB0(a1: &dword_14138DDEC);
  if ( dword_14138DDEC != -1 )
    goto LABEL_19;
  v68 = qword_141311C80;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141311C80) < 0x12 )
    sub_14001B680(a1: v65, a2: v64);
  v69 = aHorsebreed_0;
  if ( (unsigned __int64)qword_141311C88 > 0xF )
    v69 = *(char **)aHorsebreed_0;
  v209 = 0;
  v210 = 0;
  v211 = 0;
  v70 = qword_141311C80 + 18;
  if ( (unsigned __int64)(qword_141311C80 + 18) <= 0xF )
  {
    v71 = 15;
    v74 = &v209;
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
        *(_QWORD *)&v209 = 0;
        goto LABEL_202;
      }
      if ( v71 + 1 < 0x1000 )
      {
        v74 = (__int128 *)sub_1409DB470(a1: v71 + 1);
        *(_QWORD *)&v209 = v74;
        goto LABEL_202;
      }
      v72 = v71 + 40;
      if ( v71 + 40 < v71 + 1 )
      {
        sub_14001B170(a1: v72, a2: v64, a3: v66, a4: v67);
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
    *(_QWORD *)&v209 = v74;
  }
LABEL_202:
  v210 = v68 + 18;
  v211 = v71;
  sub_140E82100(a1: v74, a2: v69, a3: v68);
  qmemcpy((char *)v74 + v68, "exclusiveSubMeshes", 18);
  *((_BYTE *)v74 + v70) = 0;
  v79 = (char *)&v209;
  if ( v211 > 0xF )
    v79 = (char *)v209;
  v206 = v79;
  v80 = qword_141311C80;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141311C80) < 0x12 )
    sub_14001B680(a1: v76, a2: v75);
  v81 = aHorsebreed_0;
  if ( (unsigned __int64)qword_141311C88 > 0xF )
    v81 = *(char **)aHorsebreed_0;
  v212 = 0;
  v213 = 0;
  v214 = 0;
  v82 = qword_141311C80 + 18;
  if ( (unsigned __int64)(qword_141311C80 + 18) <= 0xF )
  {
    v83 = 15;
    v86 = &v212;
  }
  else
  {
    v83 = v82 | 0xF;
    if ( (v82 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
    {
      v83 = 0x7FFFFFFFFFFFFFFFLL;
      v84 = 0x8000000000000027uLL;
LABEL_211:
      v85 = sub_1409DB470(a1: v84);
      if ( v85 == 0 )
        __fastfail(5u);
      v86 = (__int128 *)((v85 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *((_QWORD *)v86 - 1) = v85;
      *(_QWORD *)&v212 = v86;
      goto LABEL_223;
    }
    if ( v83 < 0x16 )
      v83 = 22;
    if ( v83 == -1 )
    {
      v86 = nullptr;
      *(_QWORD *)&v212 = 0;
    }
    else
    {
      if ( v83 + 1 >= 0x1000 )
      {
        v84 = v83 + 40;
        if ( v83 + 40 < v83 + 1 )
        {
          sub_14001B170(a1: v84, a2: v75, a3: v77, a4: v78);
          __debugbreak();
        }
        goto LABEL_211;
      }
      v86 = (__int128 *)sub_1409DB470(a1: v83 + 1);
      *(_QWORD *)&v212 = v86;
    }
  }
LABEL_223:
  v213 = v80 + 18;
  v214 = v83;
  sub_140E82100(a1: v86, a2: v81, a3: v80);
  qmemcpy((char *)v86 + v80, "exclusiveSubMeshes", 18);
  *((_BYTE *)v86 + v82) = 0;
  v87 = &v212;
  if ( v214 > 0xF )
    v87 = (__int128 *)v212;
  v88 = sub_140062160(a1: v87);
  sub_140062D10(
    a1: (unsigned int)&dword_14138DDE8,
    a2: v88,
    a3: (_DWORD)v206,
    a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Game\\include"
                  "\\Game/Actors/Horse/PXHorseBreed.h",
    a5: 266);
  if ( v214 > 0xF )
  {
    v89 = (void *)v212;
    if ( v214 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v212 - *(_QWORD *)(v212 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v89 = *(void **)(v212 - 8);
    }
    sub_1409DB4C0(lpMem: v89);
  }
  *(_QWORD *)&v212 = 19937;
  v213 = 0;
  v214 = 31;
  if ( v211 > 0xF )
  {
    v90 = (void *)v209;
    if ( v211 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v209 - *(_QWORD *)(v209 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v90 = *(void **)(v209 - 8);
    }
    sub_1409DB4C0(lpMem: v90);
  }
  sub_1409DBB40(a1: &dword_14138DDEC);
  v4 = v207;
  v3 = v208;
LABEL_19:
  LODWORD(v206) = dword_14138DDE8;
  sub_140085740(a1: a2, a2: &v206, a3: v3 + 392, a4: &byte_140EEC5C5);
  if ( dword_14138DDF4 <= *(_DWORD *)(v4 + 76) )
    goto LABEL_20;
  sub_1409DBBB0(a1: &dword_14138DDF4);
  if ( dword_14138DDF4 != -1 )
    goto LABEL_20;
  v95 = qword_141311C80;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141311C80) < 0xC )
    sub_14001B680(a1: v92, a2: v91);
  v96 = aHorsebreed_0;
  if ( (unsigned __int64)qword_141311C88 > 0xF )
    v96 = *(char **)aHorsebreed_0;
  v209 = 0;
  v210 = 0;
  v211 = 0;
  v97 = qword_141311C80 + 12;
  if ( (unsigned __int64)(qword_141311C80 + 12) <= 0xF )
  {
    v98 = 15;
    v101 = &v209;
  }
  else
  {
    v98 = v97 | 0xF;
    if ( (v97 | 0xFuLL) <= 0x7FFFFFFFFFFFFFFFLL )
    {
      if ( v98 < 0x16 )
        v98 = 22;
      if ( v98 == -1 )
      {
        v101 = nullptr;
        *(_QWORD *)&v209 = 0;
        goto LABEL_258;
      }
      if ( v98 + 1 < 0x1000 )
      {
        v101 = (__int128 *)sub_1409DB470(a1: v98 + 1);
        *(_QWORD *)&v209 = v101;
        goto LABEL_258;
      }
      v99 = v98 + 40;
      if ( v98 + 40 < v98 + 1 )
      {
        sub_14001B170(a1: v99, a2: v91, a3: v93, a4: v94);
        __debugbreak();
      }
    }
    else
    {
      v98 = 0x7FFFFFFFFFFFFFFFLL;
      v99 = 0x8000000000000027uLL;
    }
    v100 = sub_1409DB470(a1: v99);
    if ( v100 == 0 )
      __fastfail(5u);
    v101 = (__int128 *)((v100 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)v101 - 1) = v100;
    *(_QWORD *)&v209 = v101;
  }
LABEL_258:
  v210 = v95 + 12;
  v211 = v98;
  sub_140E82100(a1: v101, a2: v96, a3: v95);
  qmemcpy((char *)v101 + v95, "gaitTReverse", 12);
  *((_BYTE *)v101 + v97) = 0;
  v106 = &v209;
  if ( v211 > 0xF )
    LODWORD(v106) = v209;
  v107 = qword_141311C80;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141311C80) < 0xC )
    sub_14001B680(a1: v103, a2: v102);
  v108 = aHorsebreed_0;
  if ( (unsigned __int64)qword_141311C88 > 0xF )
    v108 = *(char **)aHorsebreed_0;
  v212 = 0;
  v213 = 0;
  v214 = 0;
  v109 = qword_141311C80 + 12;
  if ( (unsigned __int64)(qword_141311C80 + 12) <= 0xF )
  {
    v6 = 15;
    v113 = &v212;
  }
  else
  {
    if ( (v109 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
    {
      v110 = 0x8000000000000027uLL;
LABEL_267:
      v111 = sub_1409DB470(a1: v110);
      if ( v111 == 0 )
        __fastfail(5u);
      v113 = (__int128 *)((v111 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *((_QWORD *)v113 - 1) = v111;
      *(_QWORD *)&v212 = v113;
      goto LABEL_279;
    }
    v6 = v109 | 0xF;
    if ( (v109 | 0xFuLL) < 0x16 )
      v6 = 22;
    v112 = v6 + 1;
    if ( v6 == -1 )
    {
      v113 = nullptr;
      *(_QWORD *)&v212 = 0;
    }
    else
    {
      if ( v112 >= 0x1000 )
      {
        v110 = v6 + 40;
        if ( v6 + 40 < (unsigned __int64)(v6 + 1) )
        {
          sub_14001B170(a1: v112, a2: 0, a3: v104, a4: v105);
          __debugbreak();
        }
        goto LABEL_267;
      }
      v113 = (__int128 *)sub_1409DB470(a1: v112);
      *(_QWORD *)&v212 = v113;
    }
  }
LABEL_279:
  v213 = v107 + 12;
  v214 = v6;
  sub_140E82100(a1: v113, a2: v108, a3: v107);
  qmemcpy((char *)v113 + v107, "gaitTReverse", 12);
  *((_BYTE *)v113 + v109) = 0;
  v114 = &v212;
  if ( v214 > 0xF )
    v114 = (__int128 *)v212;
  v115 = sub_140062160(a1: v114);
  sub_140062D10(
    a1: (unsigned int)&dword_14138DDF0,
    a2: v115,
    a3: (_DWORD)v106,
    a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Game\\include"
                  "\\Game/Actors/Horse/PXHorseBreed.h",
    a5: 267);
  if ( v214 > 0xF )
  {
    v116 = (void *)v212;
    if ( v214 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v212 - *(_QWORD *)(v212 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v116 = *(void **)(v212 - 8);
    }
    sub_1409DB4C0(lpMem: v116);
  }
  *(_QWORD *)&v212 = 19937;
  v213 = 0;
  v214 = 31;
  if ( v211 > 0xF )
  {
    v117 = (void *)v209;
    if ( v211 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v209 - *(_QWORD *)(v209 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v117 = *(void **)(v209 - 8);
    }
    sub_1409DB4C0(lpMem: v117);
  }
  sub_1409DBB40(a1: &dword_14138DDF4);
  v4 = v207;
  v3 = v208;
LABEL_20:
  LODWORD(v206) = dword_14138DDF0;
  if ( *(_DWORD *)a2 != 0 )
  {
    sub_140084D50(a1: a2, a2: &v206);
  }
  else if ( sub_140030D50(a1: a2, a2: &v206, a3: 256) == 0 )
  {
    goto LABEL_27;
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v3 + 872) + 8LL))(a1: v3 + 872, a2);
  v8 = *(_QWORD *)(a2 + 24);
  if ( v8 == 0 )
    v8 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL);
  *(_QWORD *)(a2 + 40) = *(unsigned int *)(v8 + 12LL * *(_QWORD *)(a2 + 40) + 4);
LABEL_27:
  if ( dword_14138DDFC > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_14138DDFC);
    if ( dword_14138DDFC == -1 )
    {
      v118 = (__int64 *)sub_140020190(a1: &v212, a2: aHorsebreed_0, a3: "gaitWalk");
      LODWORD(v119) = (_DWORD)v118;
      if ( (unsigned __int64)v118[3] > 0xF )
        v119 = *v118;
      v120 = (_QWORD *)sub_140020190(a1: &v209, a2: aHorsebreed_0, a3: "gaitWalk");
      if ( v120[3] > 0xFu )
        v120 = (_QWORD *)*v120;
      v121 = sub_140062160(a1: v120);
      sub_140062D10(
        a1: (unsigned int)&dword_14138DDF8,
        a2: v121,
        a3: v119,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Game\\inc"
                      "lude\\Game/Actors/Horse/PXHorseBreed.h",
        a5: 268);
      if ( v211 > 0xF )
      {
        v122 = (void *)v209;
        if ( v211 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v209 - *(_QWORD *)(v209 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v122 = *(void **)(v209 - 8);
        }
        sub_1409DB4C0(lpMem: v122);
      }
      *(_QWORD *)&v209 = 19937;
      v210 = 0;
      v211 = 31;
      if ( v214 > 0xF )
      {
        v123 = (void *)v212;
        if ( v214 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v212 - *(_QWORD *)(v212 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v123 = *(void **)(v212 - 8);
        }
        sub_1409DB4C0(lpMem: v123);
      }
      sub_1409DBB40(a1: &dword_14138DDFC);
    }
  }
  LODWORD(v206) = dword_14138DDF8;
  if ( *(_DWORD *)a2 != 0 )
  {
    sub_140084D50(a1: a2, a2: &v206);
  }
  else if ( sub_140030D50(a1: a2, a2: &v206, a3: 256) == 0 )
  {
    goto LABEL_35;
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v3 + 672) + 8LL))(a1: v3 + 672, a2);
  v9 = *(_QWORD *)(a2 + 24);
  if ( v9 == 0 )
    v9 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL);
  *(_QWORD *)(a2 + 40) = *(unsigned int *)(v9 + 12LL * *(_QWORD *)(a2 + 40) + 4);
LABEL_35:
  if ( dword_14138DE04 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_14138DE04);
    if ( dword_14138DE04 == -1 )
    {
      v124 = (__int64 *)sub_140020190(a1: &v212, a2: aHorsebreed_0, a3: "gaitTrot");
      LODWORD(v125) = (_DWORD)v124;
      if ( (unsigned __int64)v124[3] > 0xF )
        v125 = *v124;
      v126 = (_QWORD *)sub_140020190(a1: &v209, a2: aHorsebreed_0, a3: "gaitTrot");
      if ( v126[3] > 0xFu )
        v126 = (_QWORD *)*v126;
      v127 = sub_140062160(a1: v126);
      sub_140062D10(
        a1: (unsigned int)&dword_14138DE00,
        a2: v127,
        a3: v125,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Game\\inc"
                      "lude\\Game/Actors/Horse/PXHorseBreed.h",
        a5: 269);
      if ( v211 > 0xF )
      {
        v128 = (void *)v209;
        if ( v211 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v209 - *(_QWORD *)(v209 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v128 = *(void **)(v209 - 8);
        }
        sub_1409DB4C0(lpMem: v128);
      }
      *(_QWORD *)&v209 = 19937;
      v210 = 0;
      v211 = 31;
      if ( v214 > 0xF )
      {
        v129 = (void *)v212;
        if ( v214 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v212 - *(_QWORD *)(v212 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v129 = *(void **)(v212 - 8);
        }
        sub_1409DB4C0(lpMem: v129);
      }
      sub_1409DBB40(a1: &dword_14138DE04);
    }
  }
  LODWORD(v206) = dword_14138DE00;
  if ( *(_DWORD *)a2 != 0 )
  {
    sub_140084D50(a1: a2, a2: &v206);
  }
  else if ( sub_140030D50(a1: a2, a2: &v206, a3: 256) == 0 )
  {
    goto LABEL_43;
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v3 + 712) + 8LL))(a1: v3 + 712, a2);
  v10 = *(_QWORD *)(a2 + 24);
  if ( v10 == 0 )
    v10 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL);
  *(_QWORD *)(a2 + 40) = *(unsigned int *)(v10 + 12LL * *(_QWORD *)(a2 + 40) + 4);
LABEL_43:
  if ( dword_14138DE0C > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_14138DE0C);
    if ( dword_14138DE0C == -1 )
    {
      v130 = (__int64 *)sub_140020190(a1: &v212, a2: aHorsebreed_0, a3: "gaitTolt");
      LODWORD(v131) = (_DWORD)v130;
      if ( (unsigned __int64)v130[3] > 0xF )
        v131 = *v130;
      v132 = (_QWORD *)sub_140020190(a1: &v209, a2: aHorsebreed_0, a3: "gaitTolt");
      if ( v132[3] > 0xFu )
        v132 = (_QWORD *)*v132;
      v133 = sub_140062160(a1: v132);
      sub_140062D10(
        a1: (unsigned int)&dword_14138DE08,
        a2: v133,
        a3: v131,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Game\\inc"
                      "lude\\Game/Actors/Horse/PXHorseBreed.h",
        a5: 270);
      if ( v211 > 0xF )
      {
        v134 = (void *)v209;
        if ( v211 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v209 - *(_QWORD *)(v209 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v134 = *(void **)(v209 - 8);
        }
        sub_1409DB4C0(lpMem: v134);
      }
      *(_QWORD *)&v209 = 19937;
      v210 = 0;
      v211 = 31;
      sub_14001B5A0(a1: &v212);
      sub_1409DBB40(a1: &dword_14138DE0C);
    }
  }
  LODWORD(v206) = dword_14138DE08;
  if ( *(_DWORD *)a2 != 0 )
  {
    sub_140084D50(a1: a2, a2: &v206);
  }
  else if ( sub_140030D50(a1: a2, a2: &v206, a3: 256) == 0 )
  {
    goto LABEL_51;
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v3 + 1512) + 8LL))(a1: v3 + 1512, a2);
  v11 = *(_QWORD *)(a2 + 24);
  if ( v11 == 0 )
    v11 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL);
  *(_QWORD *)(a2 + 40) = *(unsigned int *)(v11 + 12LL * *(_QWORD *)(a2 + 40) + 4);
LABEL_51:
  if ( dword_14138DE14 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_14138DE14);
    if ( dword_14138DE14 == -1 )
    {
      v135 = (__int64 *)sub_140020190(a1: &v212, a2: aHorsebreed_0, a3: "gaitCanter");
      LODWORD(v136) = (_DWORD)v135;
      if ( (unsigned __int64)v135[3] > 0xF )
        v136 = *v135;
      v137 = (_QWORD *)sub_140020190(a1: &v209, a2: aHorsebreed_0, a3: "gaitCanter");
      if ( v137[3] > 0xFu )
        v137 = (_QWORD *)*v137;
      v138 = sub_140062160(a1: v137);
      sub_140062D10(
        a1: (unsigned int)&dword_14138DE10,
        a2: v138,
        a3: v136,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Game\\inc"
                      "lude\\Game/Actors/Horse/PXHorseBreed.h",
        a5: 271);
      sub_14001B5A0(a1: &v209);
      *(_QWORD *)&v209 = 19937;
      v210 = 0;
      v211 = 31;
      sub_14001B5A0(a1: &v212);
      sub_1409DBB40(a1: &dword_14138DE14);
    }
  }
  LODWORD(v206) = dword_14138DE10;
  if ( *(_DWORD *)a2 != 0 )
  {
    sub_140084D50(a1: a2, a2: &v206);
  }
  else if ( sub_140030D50(a1: a2, a2: &v206, a3: 256) == 0 )
  {
    goto LABEL_59;
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v3 + 752) + 8LL))(a1: v3 + 752, a2);
  v12 = *(_QWORD *)(a2 + 24);
  if ( v12 == 0 )
    v12 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL);
  *(_QWORD *)(a2 + 40) = *(unsigned int *)(v12 + 12LL * *(_QWORD *)(a2 + 40) + 4);
LABEL_59:
  if ( dword_14138DE1C > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_14138DE1C);
    if ( dword_14138DE1C == -1 )
    {
      v139 = (__int64 *)sub_140020190(a1: &v212, a2: aHorsebreed_0, a3: "gaitGallop");
      LODWORD(v140) = (_DWORD)v139;
      if ( (unsigned __int64)v139[3] > 0xF )
        v140 = *v139;
      v141 = (_QWORD *)sub_140020190(a1: &v209, a2: aHorsebreed_0, a3: "gaitGallop");
      if ( v141[3] > 0xFu )
        v141 = (_QWORD *)*v141;
      v142 = sub_140062160(a1: v141);
      sub_140062D10(
        a1: (unsigned int)&dword_14138DE18,
        a2: v142,
        a3: v140,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Game\\inc"
                      "lude\\Game/Actors/Horse/PXHorseBreed.h",
        a5: 272);
      sub_14001B5A0(a1: &v209);
      *(_QWORD *)&v209 = 19937;
      v210 = 0;
      v211 = 31;
      sub_14001B5A0(a1: &v212);
      sub_1409DBB40(a1: &dword_14138DE1C);
    }
  }
  LODWORD(v206) = dword_14138DE18;
  if ( *(_DWORD *)a2 != 0 )
  {
    sub_140084D50(a1: a2, a2: &v206);
  }
  else if ( sub_140030D50(a1: a2, a2: &v206, a3: 256) == 0 )
  {
    goto LABEL_67;
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v3 + 792) + 8LL))(a1: v3 + 792, a2);
  v13 = *(_QWORD *)(a2 + 24);
  if ( v13 == 0 )
    v13 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL);
  *(_QWORD *)(a2 + 40) = *(unsigned int *)(v13 + 12LL * *(_QWORD *)(a2 + 40) + 4);
LABEL_67:
  if ( dword_14138DE24 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_14138DE24);
    if ( dword_14138DE24 == -1 )
    {
      v143 = (__int64 *)sub_140020190(a1: &v212, a2: aHorsebreed_0, a3: "gaitFastGallop");
      LODWORD(v144) = (_DWORD)v143;
      if ( (unsigned __int64)v143[3] > 0xF )
        v144 = *v143;
      v145 = (_QWORD *)sub_140020190(a1: &v209, a2: aHorsebreed_0, a3: "gaitFastGallop");
      if ( v145[3] > 0xFu )
        v145 = (_QWORD *)*v145;
      v146 = sub_140062160(a1: v145);
      sub_140062D10(
        a1: (unsigned int)&dword_14138DE20,
        a2: v146,
        a3: v144,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Game\\inc"
                      "lude\\Game/Actors/Horse/PXHorseBreed.h",
        a5: 273);
      sub_14001B5A0(a1: &v209);
      *(_QWORD *)&v209 = 19937;
      v210 = 0;
      v211 = 31;
      sub_14001B5A0(a1: &v212);
      sub_1409DBB40(a1: &dword_14138DE24);
    }
  }
  LODWORD(v206) = dword_14138DE20;
  if ( *(_DWORD *)a2 != 0 )
  {
    sub_140084D50(a1: a2, a2: &v206);
  }
  else if ( sub_140030D50(a1: a2, a2: &v206, a3: 256) == 0 )
  {
    goto LABEL_75;
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v3 + 832) + 8LL))(a1: v3 + 832, a2);
  v14 = *(_QWORD *)(a2 + 24);
  if ( v14 == 0 )
    v14 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL);
  *(_QWORD *)(a2 + 40) = *(unsigned int *)(v14 + 12LL * *(_QWORD *)(a2 + 40) + 4);
LABEL_75:
  if ( dword_14138DE2C > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_14138DE2C);
    if ( dword_14138DE2C == -1 )
    {
      v147 = (__int64 *)sub_140020190(a1: &v212, a2: aHorsebreed_0, a3: "customPlayerAnimations");
      LODWORD(v148) = (_DWORD)v147;
      if ( (unsigned __int64)v147[3] > 0xF )
        v148 = *v147;
      v149 = (_QWORD *)sub_140020190(a1: &v209, a2: aHorsebreed_0, a3: "customPlayerAnimations");
      if ( v149[3] > 0xFu )
        v149 = (_QWORD *)*v149;
      v150 = sub_140062160(a1: v149);
      sub_140062D10(
        a1: (unsigned int)&dword_14138DE28,
        a2: v150,
        a3: v148,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Game\\inc"
                      "lude\\Game/Actors/Horse/PXHorseBreed.h",
        a5: 274);
      sub_14001B5A0(a1: &v209);
      *(_QWORD *)&v209 = 19937;
      v210 = 0;
      v211 = 31;
      sub_14001B5A0(a1: &v212);
      sub_1409DBB40(a1: &dword_14138DE2C);
    }
  }
  LODWORD(v206) = dword_14138DE28;
  sub_1402AFA60(a1: a2, a2: &v206, a3: v3 + 456);
  if ( dword_14138DE34 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_14138DE34);
    if ( dword_14138DE34 == -1 )
    {
      v151 = (__int64 *)sub_140020190(a1: &v212, a2: aHorsebreed_0, a3: "customHorseAnimations");
      LODWORD(v152) = (_DWORD)v151;
      if ( (unsigned __int64)v151[3] > 0xF )
        v152 = *v151;
      v153 = (_QWORD *)sub_140020190(a1: &v209, a2: aHorsebreed_0, a3: "customHorseAnimations");
      if ( v153[3] > 0xFu )
        v153 = (_QWORD *)*v153;
      v154 = sub_140062160(a1: v153);
      sub_140062D10(
        a1: (unsigned int)&dword_14138DE30,
        a2: v154,
        a3: v152,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Game\\inc"
                      "lude\\Game/Actors/Horse/PXHorseBreed.h",
        a5: 275);
      sub_14001B5A0(a1: &v209);
      *(_QWORD *)&v209 = 19937;
      v210 = 0;
      v211 = 31;
      sub_14001B5A0(a1: &v212);
      sub_1409DBB40(a1: &dword_14138DE34);
    }
  }
  LODWORD(v206) = dword_14138DE30;
  sub_1403332B0(a1: a2, a2: &v206, a3: v3 + 584);
  if ( dword_14138DE3C > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_14138DE3C);
    if ( dword_14138DE3C == -1 )
    {
      v155 = (__int64 *)sub_140020190(a1: &v212, a2: aHorsebreed_0, a3: "generation");
      LODWORD(v156) = (_DWORD)v155;
      if ( (unsigned __int64)v155[3] > 0xF )
        v156 = *v155;
      v157 = (_QWORD *)sub_140020190(a1: &v209, a2: aHorsebreed_0, a3: "generation");
      if ( v157[3] > 0xFu )
        v157 = (_QWORD *)*v157;
      v158 = sub_140062160(a1: v157);
      sub_140062D10(
        a1: (unsigned int)&dword_14138DE38,
        a2: v158,
        a3: v156,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Game\\inc"
                      "lude\\Game/Actors/Horse/PXHorseBreed.h",
        a5: 276);
      sub_14001B5A0(a1: &v209);
      *(_QWORD *)&v209 = 19937;
      v210 = 0;
      v211 = 31;
      sub_14001B5A0(a1: &v212);
      sub_1409DBB40(a1: &dword_14138DE3C);
    }
  }
  LODWORD(v206) = dword_14138DE38;
  sub_140021DC0(a1: a2, a2: &v206, a3: v3 + 616);
  if ( dword_14138DE44 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_14138DE44);
    if ( dword_14138DE44 == -1 )
    {
      v159 = (__int64 *)sub_140020190(a1: &v212, a2: aHorsebreed_0, a3: "toltAudioParamValue");
      LODWORD(v160) = (_DWORD)v159;
      if ( (unsigned __int64)v159[3] > 0xF )
        v160 = *v159;
      v161 = (_QWORD *)sub_140020190(a1: &v209, a2: aHorsebreed_0, a3: "toltAudioParamValue");
      if ( v161[3] > 0xFu )
        v161 = (_QWORD *)*v161;
      v162 = sub_140062160(a1: v161);
      sub_140062D10(
        a1: (unsigned int)&dword_14138DE40,
        a2: v162,
        a3: v160,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Game\\inc"
                      "lude\\Game/Actors/Horse/PXHorseBreed.h",
        a5: 277);
      sub_14001B5A0(a1: &v209);
      *(_QWORD *)&v209 = 19937;
      v210 = 0;
      v211 = 31;
      sub_14001B5A0(a1: &v212);
      sub_1409DBB40(a1: &dword_14138DE44);
    }
  }
  LODWORD(v206) = dword_14138DE40;
  sub_140021DC0(a1: a2, a2: &v206, a3: v3 + 620);
  if ( dword_14138DE4C > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_14138DE4C);
    if ( dword_14138DE4C == -1 )
    {
      v163 = (__int64 *)sub_140020190(a1: &v212, a2: aHorsebreed_0, a3: "hoofAudioOverrides");
      LODWORD(v164) = (_DWORD)v163;
      if ( (unsigned __int64)v163[3] > 0xF )
        v164 = *v163;
      v165 = (_QWORD *)sub_140020190(a1: &v209, a2: aHorsebreed_0, a3: "hoofAudioOverrides");
      if ( v165[3] > 0xFu )
        v165 = (_QWORD *)*v165;
      v166 = sub_140062160(a1: v165);
      sub_140062D10(
        a1: (unsigned int)&dword_14138DE48,
        a2: v166,
        a3: v164,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Game\\inc"
                      "lude\\Game/Actors/Horse/PXHorseBreed.h",
        a5: 278);
      sub_14001B5A0(a1: &v209);
      *(_QWORD *)&v209 = 19937;
      v210 = 0;
      v211 = 31;
      sub_14001B5A0(a1: &v212);
      sub_1409DBB40(a1: &dword_14138DE4C);
    }
  }
  LODWORD(v206) = dword_14138DE48;
  sub_140332580(a1: a2, a2: &v206, a3: v3 + 1848);
  if ( dword_14138DE54 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_14138DE54);
    if ( dword_14138DE54 == -1 )
    {
      v167 = (__int64 *)sub_140020190(a1: &v212, a2: aHorsebreed_0, a3: "audioOverrides");
      LODWORD(v168) = (_DWORD)v167;
      if ( (unsigned __int64)v167[3] > 0xF )
        v168 = *v167;
      v169 = (_QWORD *)sub_140020190(a1: &v209, a2: aHorsebreed_0, a3: "audioOverrides");
      if ( v169[3] > 0xFu )
        v169 = (_QWORD *)*v169;
      v170 = sub_140062160(a1: v169);
      sub_140062D10(
        a1: (unsigned int)&dword_14138DE50,
        a2: v170,
        a3: v168,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Game\\inc"
                      "lude\\Game/Actors/Horse/PXHorseBreed.h",
        a5: 279);
      sub_14001B5A0(a1: &v209);
      *(_QWORD *)&v209 = 19937;
      v210 = 0;
      v211 = 31;
      sub_14001B5A0(a1: &v212);
      sub_1409DBB40(a1: &dword_14138DE54);
    }
  }
  LODWORD(v206) = dword_14138DE50;
  sub_140332B80(a1: a2, a2: &v206, a3: v3 + 1832);
  if ( dword_14138DE5C > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_14138DE5C);
    if ( dword_14138DE5C == -1 )
    {
      v171 = (__int64 *)sub_140020190(a1: &v212, a2: aHorsebreed_0, a3: "autobendSystemPelvisDirectionalStrength");
      LODWORD(v172) = (_DWORD)v171;
      if ( (unsigned __int64)v171[3] > 0xF )
        v172 = *v171;
      v173 = (_QWORD *)sub_140020190(a1: &v209, a2: aHorsebreed_0, a3: "autobendSystemPelvisDirectionalStrength");
      if ( v173[3] > 0xFu )
        v173 = (_QWORD *)*v173;
      v174 = sub_140062160(a1: v173);
      sub_140062D10(
        a1: (unsigned int)&dword_14138DE58,
        a2: v174,
        a3: v172,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Game\\inc"
                      "lude\\Game/Actors/Horse/PXHorseBreed.h",
        a5: 280);
      sub_14001B5A0(a1: &v209);
      *(_QWORD *)&v209 = 19937;
      v210 = 0;
      v211 = 31;
      sub_14001B5A0(a1: &v212);
      sub_1409DBB40(a1: &dword_14138DE5C);
    }
  }
  LODWORD(v206) = dword_14138DE58;
  sub_140022690(a1: a2, a2: &v206, a3: v3 + 1864);
  if ( dword_14138DE64 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_14138DE64);
    if ( dword_14138DE64 == -1 )
    {
      v175 = (__int64 *)sub_140020190(a1: &v212, a2: aHorsebreed_0, a3: "autobendSystemSpine01DirectionalStrength");
      LODWORD(v176) = (_DWORD)v175;
      if ( (unsigned __int64)v175[3] > 0xF )
        v176 = *v175;
      v177 = (_QWORD *)sub_140020190(a1: &v209, a2: aHorsebreed_0, a3: "autobendSystemSpine01DirectionalStrength");
      if ( v177[3] > 0xFu )
        v177 = (_QWORD *)*v177;
      v178 = sub_140062160(a1: v177);
      sub_140062D10(
        a1: (unsigned int)&dword_14138DE60,
        a2: v178,
        a3: v176,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Game\\inc"
                      "lude\\Game/Actors/Horse/PXHorseBreed.h",
        a5: 281);
      sub_14001B5A0(a1: &v209);
      *(_QWORD *)&v209 = 19937;
      v210 = 0;
      v211 = 31;
      sub_14001B5A0(a1: &v212);
      sub_1409DBB40(a1: &dword_14138DE64);
    }
  }
  LODWORD(v206) = dword_14138DE60;
  sub_140022690(a1: a2, a2: &v206, a3: v3 + 1876);
  if ( dword_14138DE6C > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_14138DE6C);
    if ( dword_14138DE6C == -1 )
    {
      v179 = (__int64 *)sub_140020190(a1: &v212, a2: aHorsebreed_0, a3: "autobendSystemSpine02DirectionalStrength");
      LODWORD(v180) = (_DWORD)v179;
      if ( (unsigned __int64)v179[3] > 0xF )
        v180 = *v179;
      v181 = (_QWORD *)sub_140020190(a1: &v209, a2: aHorsebreed_0, a3: "autobendSystemSpine02DirectionalStrength");
      if ( v181[3] > 0xFu )
        v181 = (_QWORD *)*v181;
      v182 = sub_140062160(a1: v181);
      sub_140062D10(
        a1: (unsigned int)&dword_14138DE68,
        a2: v182,
        a3: v180,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Game\\inc"
                      "lude\\Game/Actors/Horse/PXHorseBreed.h",
        a5: 282);
      sub_14001B5A0(a1: &v209);
      *(_QWORD *)&v209 = 19937;
      v210 = 0;
      v211 = 31;
      sub_14001B5A0(a1: &v212);
      sub_1409DBB40(a1: &dword_14138DE6C);
    }
  }
  LODWORD(v206) = dword_14138DE68;
  sub_140022690(a1: a2, a2: &v206, a3: v3 + 1888);
  if ( dword_14138DE74 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_14138DE74);
    if ( dword_14138DE74 == -1 )
    {
      v183 = (__int64 *)sub_140020190(a1: &v212, a2: aHorsebreed_0, a3: "autobendSystemSpine03DirectionalStrength");
      LODWORD(v184) = (_DWORD)v183;
      if ( (unsigned __int64)v183[3] > 0xF )
        v184 = *v183;
      v185 = (_QWORD *)sub_140020190(a1: &v209, a2: aHorsebreed_0, a3: "autobendSystemSpine03DirectionalStrength");
      if ( v185[3] > 0xFu )
        v185 = (_QWORD *)*v185;
      v186 = sub_140062160(a1: v185);
      sub_140062D10(
        a1: (unsigned int)&dword_14138DE70,
        a2: v186,
        a3: v184,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Game\\inc"
                      "lude\\Game/Actors/Horse/PXHorseBreed.h",
        a5: 283);
      sub_14001B5A0(a1: &v209);
      *(_QWORD *)&v209 = 19937;
      v210 = 0;
      v211 = 31;
      sub_14001B5A0(a1: &v212);
      sub_1409DBB40(a1: &dword_14138DE74);
    }
  }
  LODWORD(v206) = dword_14138DE70;
  sub_140022690(a1: a2, a2: &v206, a3: v3 + 1900);
  if ( dword_14138DE7C > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_14138DE7C);
    if ( dword_14138DE7C == -1 )
    {
      v187 = (__int64 *)sub_140020190(a1: &v212, a2: aHorsebreed_0, a3: "autobendSystemChestDirectionalStrength");
      LODWORD(v188) = (_DWORD)v187;
      if ( (unsigned __int64)v187[3] > 0xF )
        v188 = *v187;
      v189 = (_QWORD *)sub_140020190(a1: &v209, a2: aHorsebreed_0, a3: "autobendSystemChestDirectionalStrength");
      if ( v189[3] > 0xFu )
        v189 = (_QWORD *)*v189;
      v190 = sub_140062160(a1: v189);
      sub_140062D10(
        a1: (unsigned int)&dword_14138DE78,
        a2: v190,
        a3: v188,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Game\\inc"
                      "lude\\Game/Actors/Horse/PXHorseBreed.h",
        a5: 284);
      sub_14001B5A0(a1: &v209);
      *(_QWORD *)&v209 = 19937;
      v210 = 0;
      v211 = 31;
      sub_14001B5A0(a1: &v212);
      sub_1409DBB40(a1: &dword_14138DE7C);
    }
  }
  LODWORD(v206) = dword_14138DE78;
  sub_140022690(a1: a2, a2: &v206, a3: v3 + 1912);
  if ( dword_14138DE84 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_14138DE84);
    if ( dword_14138DE84 == -1 )
    {
      v191 = (__int64 *)sub_140020190(a1: &v212, a2: aHorsebreed_0, a3: "autobendSystemNeck01DirectionalStrength");
      LODWORD(v192) = (_DWORD)v191;
      if ( (unsigned __int64)v191[3] > 0xF )
        v192 = *v191;
      v193 = (_QWORD *)sub_140020190(a1: &v209, a2: aHorsebreed_0, a3: "autobendSystemNeck01DirectionalStrength");
      if ( v193[3] > 0xFu )
        v193 = (_QWORD *)*v193;
      v194 = sub_140062160(a1: v193);
      sub_140062D10(
        a1: (unsigned int)&dword_14138DE80,
        a2: v194,
        a3: v192,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Game\\inc"
                      "lude\\Game/Actors/Horse/PXHorseBreed.h",
        a5: 285);
      sub_14001B5A0(a1: &v209);
      *(_QWORD *)&v209 = 19937;
      v210 = 0;
      v211 = 31;
      sub_14001B5A0(a1: &v212);
      sub_1409DBB40(a1: &dword_14138DE84);
    }
  }
  LODWORD(v206) = dword_14138DE80;
  sub_140022690(a1: a2, a2: &v206, a3: v3 + 1924);
  if ( dword_14138DE8C > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_14138DE8C);
    if ( dword_14138DE8C == -1 )
    {
      v195 = (__int64 *)sub_140020190(a1: &v212, a2: aHorsebreed_0, a3: "autobendSystemNeck02DirectionalStrength");
      LODWORD(v196) = (_DWORD)v195;
      if ( (unsigned __int64)v195[3] > 0xF )
        v196 = *v195;
      v197 = (_QWORD *)sub_140020190(a1: &v209, a2: aHorsebreed_0, a3: "autobendSystemNeck02DirectionalStrength");
      if ( v197[3] > 0xFu )
        v197 = (_QWORD *)*v197;
      v198 = sub_140062160(a1: v197);
      sub_140062D10(
        a1: (unsigned int)&dword_14138DE88,
        a2: v198,
        a3: v196,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Game\\inc"
                      "lude\\Game/Actors/Horse/PXHorseBreed.h",
        a5: 286);
      sub_14001B5A0(a1: &v209);
      *(_QWORD *)&v209 = 19937;
      v210 = 0;
      v211 = 31;
      sub_14001B5A0(a1: &v212);
      sub_1409DBB40(a1: &dword_14138DE8C);
    }
  }
  LODWORD(v206) = dword_14138DE88;
  sub_140022690(a1: a2, a2: &v206, a3: v3 + 1936);
  if ( dword_14138DE94 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_14138DE94);
    if ( dword_14138DE94 == -1 )
    {
      v199 = (__int64 *)sub_140020190(a1: &v212, a2: aHorsebreed_0, a3: "autobendSystemNeck03DirectionalStrength");
      LODWORD(v200) = (_DWORD)v199;
      if ( (unsigned __int64)v199[3] > 0xF )
        v200 = *v199;
      v201 = (_QWORD *)sub_140020190(a1: &v209, a2: aHorsebreed_0, a3: "autobendSystemNeck03DirectionalStrength");
      if ( v201[3] > 0xFu )
        v201 = (_QWORD *)*v201;
      v202 = sub_140062160(a1: v201);
      sub_140062D10(
        a1: (unsigned int)&dword_14138DE90,
        a2: v202,
        a3: v200,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Game\\inc"
                      "lude\\Game/Actors/Horse/PXHorseBreed.h",
        a5: 287);
      sub_14001B5A0(a1: &v209);
      *(_QWORD *)&v209 = 19937;
      v210 = 0;
      v211 = 31;
      sub_14001B5A0(a1: &v212);
      sub_1409DBB40(a1: &dword_14138DE94);
    }
  }
  LODWORD(v206) = dword_14138DE90;
  sub_140022690(a1: a2, a2: &v206, a3: v3 + 1948);
  if ( dword_14138DE9C > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_14138DE9C);
    if ( dword_14138DE9C == -1 )
    {
      v203 = (__int64 *)sub_140020190(a1: &v212, a2: aHorsebreed_0, a3: "autobendSystemHeadDirectionalStrength");
      LODWORD(v204) = (_DWORD)v203;
      if ( (unsigned __int64)v203[3] > 0xF )
        v204 = *v203;
      v205 = (_QWORD *)sub_140020190(a1: &v209, a2: aHorsebreed_0, a3: "autobendSystemHeadDirectionalStrength");
      if ( v205[3] > 0xFu )
        v205 = (_QWORD *)*v205;
      v16 = sub_140062160(a1: v205);
      sub_140062D10(
        a1: (unsigned int)&dword_14138DE98,
        a2: v16,
        a3: v204,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Game\\inc"
                      "lude\\Game/Actors/Horse/PXHorseBreed.h",
        a5: 288);
      sub_14001B5A0(a1: &v209);
      *(_QWORD *)&v209 = 19937;
      v210 = 0;
      v211 = 31;
      sub_14001B5A0(a1: &v212);
      sub_1409DBB40(a1: &dword_14138DE9C);
    }
  }
  LODWORD(v206) = dword_14138DE98;
  return sub_140022690(a1: a2, a2: &v206, a3: v3 + 1960);
}