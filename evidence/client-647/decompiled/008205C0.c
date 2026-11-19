__int64 __fastcall sub_1408205C0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v4; // r14
  __int64 v5; // rbx
  __int64 v6; // rdi
  char v7; // al
  __int64 result; // rax
  __int64 v9; // rbx
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r14
  char *v16; // r12
  __int64 v17; // r15
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  __int128 *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int128 *v26; // r12
  __int64 v27; // r13
  char *v28; // r15
  __int64 v29; // r14
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rcx
  __int64 v32; // rax
  __int128 *v33; // rsi
  __int128 *v34; // rcx
  int v35; // eax
  void *v36; // rcx
  void *v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r14
  char *v43; // r12
  __int64 v44; // r15
  unsigned __int64 v45; // rdi
  unsigned __int64 v46; // rcx
  __int64 v47; // rax
  __int128 *v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int128 *v53; // r12
  __int64 v54; // r13
  char *v55; // r15
  __int64 v56; // r14
  unsigned __int64 v57; // rdi
  unsigned __int64 v58; // rcx
  __int64 v59; // rax
  __int128 *v60; // rsi
  __int128 *v61; // rcx
  int v62; // eax
  void *v63; // rcx
  void *v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // r14
  char *v70; // r12
  __int64 v71; // r15
  unsigned __int64 v72; // rdi
  unsigned __int64 v73; // rcx
  __int64 v74; // rax
  __int128 *v75; // rsi
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  __int128 *v80; // r12
  __int64 v81; // r13
  char *v82; // r15
  __int64 v83; // r14
  unsigned __int64 v84; // rdi
  unsigned __int64 v85; // rcx
  __int64 v86; // rax
  __int128 *v87; // rsi
  __int128 *v88; // rcx
  int v89; // eax
  void *v90; // rcx
  void *v91; // rcx
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // r14
  char *v97; // r12
  __int64 v98; // r15
  unsigned __int64 v99; // rdi
  unsigned __int64 v100; // rcx
  __int64 v101; // rax
  __int128 *v102; // rsi
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  __int128 *v107; // r12
  __int64 v108; // r13
  char *v109; // r15
  __int64 v110; // r14
  unsigned __int64 v111; // rdi
  unsigned __int64 v112; // rcx
  __int64 v113; // rax
  __int128 *v114; // rsi
  __int128 *v115; // rcx
  int v116; // eax
  void *v117; // rcx
  void *v118; // rcx
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r8
  __int64 v122; // r9
  __int64 v123; // r14
  char *v124; // r12
  __int64 v125; // r15
  unsigned __int64 v126; // rax
  __int64 v127; // rax
  unsigned __int64 v128; // rcx
  __int128 *v129; // rdi
  __int128 *v130; // rbx
  _QWORD *v131; // rax
  int v132; // eax
  void *v133; // rcx
  void *v134; // rcx
  int v135; // [rsp+30h] [rbp-49h] BYREF
  __int64 v136; // [rsp+38h] [rbp-41h]
  __int64 v137; // [rsp+40h] [rbp-39h]
  __int64 v138; // [rsp+48h] [rbp-31h]
  __int128 v139; // [rsp+50h] [rbp-29h] BYREF
  __int64 v140; // [rsp+60h] [rbp-19h]
  unsigned __int64 v141; // [rsp+68h] [rbp-11h]
  __int128 v142; // [rsp+70h] [rbp-9h] BYREF
  __int64 v143; // [rsp+80h] [rbp+7h]
  unsigned __int64 v144; // [rsp+88h] [rbp+Fh]

  v2 = a2;
  v137 = a2;
  v136 = a1;
  v4 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  v138 = v4;
  if ( dword_1413AA440 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413AA440);
    if ( dword_1413AA440 == -1 )
    {
      sub_1409DB700(a1: sub_140EE2AD0);
      sub_1409DBB40(a1: &dword_1413AA440);
    }
  }
  sub_1400BAD40(a1, a2: v2);
  v5 = 0x7FFFFFFFFFFFFFFFLL;
  if ( dword_1413AA448 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413AA448);
    if ( dword_1413AA448 == -1 )
    {
      v15 = qword_141314228;
      if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314228) < 0xD )
        sub_14001B680(a1: v12, a2: v11);
      v16 = aGarden_0;
      if ( (unsigned __int64)qword_141314230 > 0xF )
        v16 = *(char **)aGarden_0;
      v142 = 0;
      v143 = 0;
      v144 = 0;
      v17 = qword_141314228 + 13;
      if ( (unsigned __int64)(qword_141314228 + 13) <= 0xF )
      {
        v18 = 15;
        v21 = &v142;
      }
      else
      {
        v18 = v17 | 0xF;
        if ( (v17 | 0xFuLL) <= 0x7FFFFFFFFFFFFFFFLL )
        {
          if ( v18 < 0x16 )
            v18 = 22;
          if ( v18 == -1 )
          {
            v21 = nullptr;
            *(_QWORD *)&v142 = 0;
            goto LABEL_45;
          }
          if ( v18 + 1 < 0x1000 )
          {
            v21 = (__int128 *)sub_1409DB470(a1: v18 + 1);
            *(_QWORD *)&v142 = v21;
            goto LABEL_45;
          }
          v19 = v18 + 40;
          if ( v18 + 40 < v18 + 1 )
          {
            sub_14001B170(a1: v19, a2: v11, a3: v13, a4: v14);
            __debugbreak();
          }
        }
        else
        {
          v18 = 0x7FFFFFFFFFFFFFFFLL;
          v19 = 0x8000000000000027uLL;
        }
        v20 = sub_1409DB470(a1: v19);
        if ( v20 == 0 )
          __fastfail(5u);
        v21 = (__int128 *)((v20 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *((_QWORD *)v21 - 1) = v20;
        *(_QWORD *)&v142 = v21;
      }
LABEL_45:
      v143 = v15 + 13;
      v144 = v18;
      sub_140E82100(a1: v21, a2: v16, a3: v15);
      qmemcpy((char *)v21 + v15, "allowedPlants", 13);
      *((_BYTE *)v21 + v17) = 0;
      v26 = &v142;
      if ( v144 > 0xF )
        LODWORD(v26) = v142;
      v27 = qword_141314228;
      if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314228) < 0xD )
        sub_14001B680(a1: v23, a2: v22);
      v28 = aGarden_0;
      if ( (unsigned __int64)qword_141314230 > 0xF )
        v28 = *(char **)aGarden_0;
      v139 = 0;
      v140 = 0;
      v141 = 0;
      v29 = qword_141314228 + 13;
      if ( (unsigned __int64)(qword_141314228 + 13) <= 0xF )
      {
        v30 = 15;
        v33 = &v139;
      }
      else
      {
        v30 = v29 | 0xF;
        if ( (v29 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
        {
          v30 = 0x7FFFFFFFFFFFFFFFLL;
          v31 = 0x8000000000000027uLL;
LABEL_54:
          v32 = sub_1409DB470(a1: v31);
          if ( v32 == 0 )
            __fastfail(5u);
          v33 = (__int128 *)((v32 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
          *((_QWORD *)v33 - 1) = v32;
          *(_QWORD *)&v139 = v33;
          goto LABEL_66;
        }
        if ( v30 < 0x16 )
          v30 = 22;
        if ( v30 == -1 )
        {
          v33 = nullptr;
          *(_QWORD *)&v139 = 0;
        }
        else
        {
          if ( v30 + 1 >= 0x1000 )
          {
            v31 = v30 + 40;
            if ( v30 + 40 < v30 + 1 )
            {
              sub_14001B170(a1: v31, a2: v22, a3: v24, a4: v25);
              __debugbreak();
            }
            goto LABEL_54;
          }
          v33 = (__int128 *)sub_1409DB470(a1: v30 + 1);
          *(_QWORD *)&v139 = v33;
        }
      }
LABEL_66:
      v140 = v27 + 13;
      v141 = v30;
      sub_140E82100(a1: v33, a2: v28, a3: v27);
      qmemcpy((char *)v33 + v27, "allowedPlants", 13);
      *((_BYTE *)v33 + v29) = 0;
      v34 = &v139;
      if ( v141 > 0xF )
        v34 = (__int128 *)v139;
      v35 = sub_140062160(a1: v34);
      sub_140062D10(
        a1: (unsigned int)&dword_1413AA444,
        a2: v35,
        a3: (_DWORD)v26,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Projects\\StarSta"
                      "bleOnline\\SSOLib\\src\\Actors\\Gardening\\PXGarden.cpp",
        a5: 24);
      if ( v141 > 0xF )
      {
        v36 = (void *)v139;
        if ( v141 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v139 - *(_QWORD *)(v139 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v36 = *(void **)(v139 - 8);
        }
        sub_1409DB4C0(lpMem: v36);
      }
      *(_QWORD *)&v139 = 19937;
      v140 = 0;
      v141 = 31;
      if ( v144 > 0xF )
      {
        v37 = (void *)v142;
        if ( v144 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v142 - *(_QWORD *)(v142 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v37 = *(void **)(v142 - 8);
        }
        sub_1409DB4C0(lpMem: v37);
      }
      sub_1409DBB40(a1: &dword_1413AA448);
      v2 = v137;
      v4 = v138;
    }
  }
  v135 = dword_1413AA444;
  sub_14081C830(a1: v2, a2: &v135, a3: v136 + 184);
  if ( dword_1413AA450 <= *(_DWORD *)(v4 + 76) )
    goto LABEL_4;
  sub_1409DBBB0(a1: &dword_1413AA450);
  if ( dword_1413AA450 != -1 )
    goto LABEL_4;
  v42 = qword_141314228;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314228) < 0x1C )
    sub_14001B680(a1: v39, a2: v38);
  v43 = aGarden_0;
  if ( (unsigned __int64)qword_141314230 > 0xF )
    v43 = *(char **)aGarden_0;
  v142 = 0;
  v143 = 0;
  v144 = 0;
  v44 = qword_141314228 + 28;
  if ( (unsigned __int64)(qword_141314228 + 28) <= 0xF )
  {
    v45 = 15;
    v48 = &v142;
  }
  else
  {
    v45 = v44 | 0xF;
    if ( (v44 | 0xFuLL) <= 0x7FFFFFFFFFFFFFFFLL )
    {
      if ( v45 < 0x16 )
        v45 = 22;
      if ( v45 == -1 )
      {
        v48 = nullptr;
        *(_QWORD *)&v142 = 0;
        goto LABEL_101;
      }
      if ( v45 + 1 < 0x1000 )
      {
        v48 = (__int128 *)sub_1409DB470(a1: v45 + 1);
        *(_QWORD *)&v142 = v48;
        goto LABEL_101;
      }
      v46 = v45 + 40;
      if ( v45 + 40 < v45 + 1 )
      {
        sub_14001B170(a1: v46, a2: v38, a3: v40, a4: v41);
        __debugbreak();
      }
    }
    else
    {
      v45 = 0x7FFFFFFFFFFFFFFFLL;
      v46 = 0x8000000000000027uLL;
    }
    v47 = sub_1409DB470(a1: v46);
    if ( v47 == 0 )
      __fastfail(5u);
    v48 = (__int128 *)((v47 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)v48 - 1) = v47;
    *(_QWORD *)&v142 = v48;
  }
LABEL_101:
  v143 = v42 + 28;
  v144 = v45;
  sub_140E82100(a1: v48, a2: v43, a3: v42);
  qmemcpy((char *)v48 + v42, "hybridNeighbourRangeOverride", 28);
  *((_BYTE *)v48 + v44) = 0;
  v53 = &v142;
  if ( v144 > 0xF )
    LODWORD(v53) = v142;
  v54 = qword_141314228;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314228) < 0x1C )
    sub_14001B680(a1: v50, a2: v49);
  v55 = aGarden_0;
  if ( (unsigned __int64)qword_141314230 > 0xF )
    v55 = *(char **)aGarden_0;
  v139 = 0;
  v140 = 0;
  v141 = 0;
  v56 = qword_141314228 + 28;
  if ( (unsigned __int64)(qword_141314228 + 28) <= 0xF )
  {
    v57 = 15;
    v60 = &v139;
  }
  else
  {
    v57 = v56 | 0xF;
    if ( (v56 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
    {
      v57 = 0x7FFFFFFFFFFFFFFFLL;
      v58 = 0x8000000000000027uLL;
LABEL_110:
      v59 = sub_1409DB470(a1: v58);
      if ( v59 == 0 )
        __fastfail(5u);
      v60 = (__int128 *)((v59 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *((_QWORD *)v60 - 1) = v59;
      *(_QWORD *)&v139 = v60;
      goto LABEL_122;
    }
    if ( v57 < 0x16 )
      v57 = 22;
    if ( v57 == -1 )
    {
      v60 = nullptr;
      *(_QWORD *)&v139 = 0;
    }
    else
    {
      if ( v57 + 1 >= 0x1000 )
      {
        v58 = v57 + 40;
        if ( v57 + 40 < v57 + 1 )
        {
          sub_14001B170(a1: v58, a2: v49, a3: v51, a4: v52);
          __debugbreak();
        }
        goto LABEL_110;
      }
      v60 = (__int128 *)sub_1409DB470(a1: v57 + 1);
      *(_QWORD *)&v139 = v60;
    }
  }
LABEL_122:
  v140 = v54 + 28;
  v141 = v57;
  sub_140E82100(a1: v60, a2: v55, a3: v54);
  qmemcpy((char *)v60 + v54, "hybridNeighbourRangeOverride", 28);
  *((_BYTE *)v60 + v56) = 0;
  v61 = &v139;
  if ( v141 > 0xF )
    v61 = (__int128 *)v139;
  v62 = sub_140062160(a1: v61);
  sub_140062D10(
    a1: (unsigned int)&dword_1413AA44C,
    a2: v62,
    a3: (_DWORD)v53,
    a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Projects\\StarStableO"
                  "nline\\SSOLib\\src\\Actors\\Gardening\\PXGarden.cpp",
    a5: 25);
  if ( v141 > 0xF )
  {
    v63 = (void *)v139;
    if ( v141 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v139 - *(_QWORD *)(v139 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v63 = *(void **)(v139 - 8);
    }
    sub_1409DB4C0(lpMem: v63);
  }
  *(_QWORD *)&v139 = 19937;
  v140 = 0;
  v141 = 31;
  if ( v144 > 0xF )
  {
    v64 = (void *)v142;
    if ( v144 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v142 - *(_QWORD *)(v142 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v64 = *(void **)(v142 - 8);
    }
    sub_1409DB4C0(lpMem: v64);
  }
  sub_1409DBB40(a1: &dword_1413AA450);
  v2 = v137;
  v4 = v138;
LABEL_4:
  v135 = dword_1413AA44C;
  sub_140022880(a1: v2, a2: &v135, a3: v136 + 208);
  if ( dword_1413AA458 <= *(_DWORD *)(v4 + 76) )
    goto LABEL_5;
  sub_1409DBBB0(a1: &dword_1413AA458);
  if ( dword_1413AA458 != -1 )
    goto LABEL_5;
  v69 = qword_141314228;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314228) < 0x14 )
    sub_14001B680(a1: v66, a2: v65);
  v70 = aGarden_0;
  if ( (unsigned __int64)qword_141314230 > 0xF )
    v70 = *(char **)aGarden_0;
  v142 = 0;
  v143 = 0;
  v144 = 0;
  v71 = qword_141314228 + 20;
  if ( (unsigned __int64)(qword_141314228 + 20) <= 0xF )
  {
    v72 = 15;
    v75 = &v142;
  }
  else
  {
    v72 = v71 | 0xF;
    if ( (v71 | 0xFuLL) <= 0x7FFFFFFFFFFFFFFFLL )
    {
      if ( v72 < 0x16 )
        v72 = 22;
      if ( v72 == -1 )
      {
        v75 = nullptr;
        *(_QWORD *)&v142 = 0;
        goto LABEL_157;
      }
      if ( v72 + 1 < 0x1000 )
      {
        v75 = (__int128 *)sub_1409DB470(a1: v72 + 1);
        *(_QWORD *)&v142 = v75;
        goto LABEL_157;
      }
      v73 = v72 + 40;
      if ( v72 + 40 < v72 + 1 )
      {
        sub_14001B170(a1: v73, a2: v65, a3: v67, a4: v68);
        __debugbreak();
      }
    }
    else
    {
      v72 = 0x7FFFFFFFFFFFFFFFLL;
      v73 = 0x8000000000000027uLL;
    }
    v74 = sub_1409DB470(a1: v73);
    if ( v74 == 0 )
      __fastfail(5u);
    v75 = (__int128 *)((v74 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)v75 - 1) = v74;
    *(_QWORD *)&v142 = v75;
  }
LABEL_157:
  v143 = v69 + 20;
  v144 = v72;
  sub_140E82100(a1: v75, a2: v70, a3: v69);
  qmemcpy((char *)v75 + v69, "hybridChanceOverride", 20);
  *((_BYTE *)v75 + v71) = 0;
  v80 = &v142;
  if ( v144 > 0xF )
    LODWORD(v80) = v142;
  v81 = qword_141314228;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314228) < 0x14 )
    sub_14001B680(a1: v77, a2: v76);
  v82 = aGarden_0;
  if ( (unsigned __int64)qword_141314230 > 0xF )
    v82 = *(char **)aGarden_0;
  v139 = 0;
  v140 = 0;
  v141 = 0;
  v83 = qword_141314228 + 20;
  if ( (unsigned __int64)(qword_141314228 + 20) <= 0xF )
  {
    v84 = 15;
    v87 = &v139;
  }
  else
  {
    v84 = v83 | 0xF;
    if ( (v83 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
    {
      v84 = 0x7FFFFFFFFFFFFFFFLL;
      v85 = 0x8000000000000027uLL;
LABEL_166:
      v86 = sub_1409DB470(a1: v85);
      if ( v86 == 0 )
        __fastfail(5u);
      v87 = (__int128 *)((v86 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *((_QWORD *)v87 - 1) = v86;
      *(_QWORD *)&v139 = v87;
      goto LABEL_178;
    }
    if ( v84 < 0x16 )
      v84 = 22;
    if ( v84 == -1 )
    {
      v87 = nullptr;
      *(_QWORD *)&v139 = 0;
    }
    else
    {
      if ( v84 + 1 >= 0x1000 )
      {
        v85 = v84 + 40;
        if ( v84 + 40 < v84 + 1 )
        {
          sub_14001B170(a1: v85, a2: v76, a3: v78, a4: v79);
          __debugbreak();
        }
        goto LABEL_166;
      }
      v87 = (__int128 *)sub_1409DB470(a1: v84 + 1);
      *(_QWORD *)&v139 = v87;
    }
  }
LABEL_178:
  v140 = v81 + 20;
  v141 = v84;
  sub_140E82100(a1: v87, a2: v82, a3: v81);
  qmemcpy((char *)v87 + v81, "hybridChanceOverride", 20);
  *((_BYTE *)v87 + v83) = 0;
  v88 = &v139;
  if ( v141 > 0xF )
    v88 = (__int128 *)v139;
  v89 = sub_140062160(a1: v88);
  sub_140062D10(
    a1: (unsigned int)&dword_1413AA454,
    a2: v89,
    a3: (_DWORD)v80,
    a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Projects\\StarStableO"
                  "nline\\SSOLib\\src\\Actors\\Gardening\\PXGarden.cpp",
    a5: 26);
  if ( v141 > 0xF )
  {
    v90 = (void *)v139;
    if ( v141 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v139 - *(_QWORD *)(v139 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v90 = *(void **)(v139 - 8);
    }
    sub_1409DB4C0(lpMem: v90);
  }
  *(_QWORD *)&v139 = 19937;
  v140 = 0;
  v141 = 31;
  if ( v144 > 0xF )
  {
    v91 = (void *)v142;
    if ( v144 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v142 - *(_QWORD *)(v142 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v91 = *(void **)(v142 - 8);
    }
    sub_1409DB4C0(lpMem: v91);
  }
  sub_1409DBB40(a1: &dword_1413AA458);
  v2 = v137;
  v4 = v138;
LABEL_5:
  v135 = dword_1413AA454;
  sub_140022880(a1: v2, a2: &v135, a3: v136 + 212);
  if ( dword_1413AA460 <= *(_DWORD *)(v4 + 76) )
    goto LABEL_6;
  sub_1409DBBB0(a1: &dword_1413AA460);
  if ( dword_1413AA460 != -1 )
    goto LABEL_6;
  v96 = qword_141314228;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314228) < 0x12 )
    sub_14001B680(a1: v93, a2: v92);
  v97 = aGarden_0;
  if ( (unsigned __int64)qword_141314230 > 0xF )
    v97 = *(char **)aGarden_0;
  v142 = 0;
  v143 = 0;
  v144 = 0;
  v98 = qword_141314228 + 18;
  if ( (unsigned __int64)(qword_141314228 + 18) <= 0xF )
  {
    v99 = 15;
    v102 = &v142;
  }
  else
  {
    v99 = v98 | 0xF;
    if ( (v98 | 0xFuLL) <= 0x7FFFFFFFFFFFFFFFLL )
    {
      if ( v99 < 0x16 )
        v99 = 22;
      if ( v99 == -1 )
      {
        v102 = nullptr;
        *(_QWORD *)&v142 = 0;
        goto LABEL_213;
      }
      if ( v99 + 1 < 0x1000 )
      {
        v102 = (__int128 *)sub_1409DB470(a1: v99 + 1);
        *(_QWORD *)&v142 = v102;
        goto LABEL_213;
      }
      v100 = v99 + 40;
      if ( v99 + 40 < v99 + 1 )
      {
        sub_14001B170(a1: v100, a2: v92, a3: v94, a4: v95);
        __debugbreak();
      }
    }
    else
    {
      v99 = 0x7FFFFFFFFFFFFFFFLL;
      v100 = 0x8000000000000027uLL;
    }
    v101 = sub_1409DB470(a1: v100);
    if ( v101 == 0 )
      __fastfail(5u);
    v102 = (__int128 *)((v101 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)v102 - 1) = v101;
    *(_QWORD *)&v142 = v102;
  }
LABEL_213:
  v143 = v96 + 18;
  v144 = v99;
  sub_140E82100(a1: v102, a2: v97, a3: v96);
  qmemcpy((char *)v102 + v96, "acceptDroppedItems", 18);
  *((_BYTE *)v102 + v98) = 0;
  v107 = &v142;
  if ( v144 > 0xF )
    LODWORD(v107) = v142;
  v108 = qword_141314228;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314228) < 0x12 )
    sub_14001B680(a1: v104, a2: v103);
  v109 = aGarden_0;
  if ( (unsigned __int64)qword_141314230 > 0xF )
    v109 = *(char **)aGarden_0;
  v139 = 0;
  v140 = 0;
  v141 = 0;
  v110 = qword_141314228 + 18;
  if ( (unsigned __int64)(qword_141314228 + 18) <= 0xF )
  {
    v111 = 15;
    v114 = &v139;
  }
  else
  {
    v111 = v110 | 0xF;
    if ( (v110 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
    {
      v111 = 0x7FFFFFFFFFFFFFFFLL;
      v112 = 0x8000000000000027uLL;
LABEL_222:
      v113 = sub_1409DB470(a1: v112);
      if ( v113 == 0 )
        __fastfail(5u);
      v114 = (__int128 *)((v113 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *((_QWORD *)v114 - 1) = v113;
      *(_QWORD *)&v139 = v114;
      goto LABEL_234;
    }
    if ( v111 < 0x16 )
      v111 = 22;
    if ( v111 == -1 )
    {
      v114 = nullptr;
      *(_QWORD *)&v139 = 0;
    }
    else
    {
      if ( v111 + 1 >= 0x1000 )
      {
        v112 = v111 + 40;
        if ( v111 + 40 < v111 + 1 )
        {
          sub_14001B170(a1: v112, a2: v103, a3: v105, a4: v106);
          __debugbreak();
        }
        goto LABEL_222;
      }
      v114 = (__int128 *)sub_1409DB470(a1: v111 + 1);
      *(_QWORD *)&v139 = v114;
    }
  }
LABEL_234:
  v140 = v108 + 18;
  v141 = v111;
  sub_140E82100(a1: v114, a2: v109, a3: v108);
  qmemcpy((char *)v114 + v108, "acceptDroppedItems", 18);
  *((_BYTE *)v114 + v110) = 0;
  v115 = &v139;
  if ( v141 > 0xF )
    v115 = (__int128 *)v139;
  v116 = sub_140062160(a1: v115);
  sub_140062D10(
    a1: (unsigned int)&dword_1413AA45C,
    a2: v116,
    a3: (_DWORD)v107,
    a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Projects\\StarStableO"
                  "nline\\SSOLib\\src\\Actors\\Gardening\\PXGarden.cpp",
    a5: 27);
  if ( v141 > 0xF )
  {
    v117 = (void *)v139;
    if ( v141 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v139 - *(_QWORD *)(v139 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v117 = *(void **)(v139 - 8);
    }
    sub_1409DB4C0(lpMem: v117);
  }
  *(_QWORD *)&v139 = 19937;
  v140 = 0;
  v141 = 31;
  if ( v144 > 0xF )
  {
    v118 = (void *)v142;
    if ( v144 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v142 - *(_QWORD *)(v142 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v118 = *(void **)(v142 - 8);
    }
    sub_1409DB4C0(lpMem: v118);
  }
  sub_1409DBB40(a1: &dword_1413AA460);
  v2 = v137;
  v4 = v138;
LABEL_6:
  v135 = dword_1413AA45C;
  v6 = v136;
  if ( *(_DWORD *)v2 != 0 )
  {
    if ( *(_BYTE *)(v2 + 62) != 0 )
    {
      if ( *(_BYTE *)(v136 + 220) == 0 )
        goto LABEL_15;
    }
    else if ( *(_BYTE *)(v136 + 220) == 0 )
    {
      goto LABEL_15;
    }
    v7 = sub_140076FF0();
    sub_140084F80(a1: v2, a2: (unsigned int)&v135, a3: v6 + 220, a4: 1, a5: v7);
    goto LABEL_15;
  }
  if ( (unsigned __int8)sub_1400852F0(a1: v2, a2: (int)v136 + 220, a3: (unsigned int)&v135, a4: 1, a5: 512) == 0 )
    *(_BYTE *)(v6 + 220) = 0;
LABEL_15:
  if ( dword_1413AA468 <= *(_DWORD *)(v4 + 76) )
    goto LABEL_16;
  sub_1409DBBB0(a1: &dword_1413AA468);
  if ( dword_1413AA468 != -1 )
    goto LABEL_16;
  v123 = qword_141314228;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314228) < 0xE )
    sub_14001B680(a1: v120, a2: v119);
  v124 = aGarden_0;
  if ( (unsigned __int64)qword_141314230 > 0xF )
    v124 = *(char **)aGarden_0;
  v142 = 0;
  v143 = 0;
  v144 = 0;
  v125 = qword_141314228 + 14;
  if ( (unsigned __int64)(qword_141314228 + 14) <= 0xF )
  {
    v5 = 15;
    v129 = &v142;
  }
  else
  {
    if ( (v125 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
    {
      v126 = 0x8000000000000027uLL;
LABEL_257:
      v127 = sub_1409DB470(a1: v126);
      if ( v127 == 0 )
        __fastfail(5u);
      v129 = (__int128 *)((v127 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *((_QWORD *)v129 - 1) = v127;
      *(_QWORD *)&v142 = v129;
      goto LABEL_269;
    }
    v5 = v125 | 0xF;
    if ( (v125 | 0xFuLL) < 0x16 )
      v5 = 22;
    v128 = v5 + 1;
    if ( v5 == -1 )
    {
      v129 = nullptr;
      *(_QWORD *)&v142 = 0;
    }
    else
    {
      if ( v128 >= 0x1000 )
      {
        v126 = v5 + 40;
        if ( v5 + 40 < (unsigned __int64)(v5 + 1) )
        {
          sub_14001B170(a1: v128, a2: v119, a3: v121, a4: v122);
          __debugbreak();
        }
        goto LABEL_257;
      }
      v129 = (__int128 *)sub_1409DB470(a1: v128);
      *(_QWORD *)&v142 = v129;
    }
  }
LABEL_269:
  v143 = v123 + 14;
  v144 = v5;
  sub_140E82100(a1: v129, a2: v124, a3: v123);
  qmemcpy((char *)v129 + v123, "growthMeshType", 14);
  *((_BYTE *)v129 + v125) = 0;
  v130 = &v142;
  if ( v144 > 0xF )
    LODWORD(v130) = v142;
  v131 = (_QWORD *)sub_140020190(a1: &v139, a2: aGarden_0, a3: "growthMeshType");
  if ( v131[3] > 0xFu )
    v131 = (_QWORD *)*v131;
  v132 = sub_140062160(a1: v131);
  sub_140062D10(
    a1: (unsigned int)&dword_1413AA464,
    a2: v132,
    a3: (_DWORD)v130,
    a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Projects\\StarStableO"
                  "nline\\SSOLib\\src\\Actors\\Gardening\\PXGarden.cpp",
    a5: 28);
  if ( v141 > 0xF )
  {
    v133 = (void *)v139;
    if ( v141 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v139 - *(_QWORD *)(v139 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v133 = *(void **)(v139 - 8);
    }
    sub_1409DB4C0(lpMem: v133);
  }
  *(_QWORD *)&v139 = 19937;
  v140 = 0;
  v141 = 31;
  if ( v144 > 0xF )
  {
    v134 = (void *)v142;
    if ( v144 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v142 - *(_QWORD *)(v142 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v134 = *(void **)(v142 - 8);
    }
    sub_1409DB4C0(lpMem: v134);
  }
  sub_1409DBB40(a1: &dword_1413AA468);
LABEL_16:
  result = (unsigned int)dword_1413AA464;
  v135 = dword_1413AA464;
  v9 = v136;
  if ( *(_DWORD *)v2 != 0 )
  {
    if ( *(_DWORD *)(v136 + 216) != 0 )
    {
      v10 = sub_140076F50();
      return sub_140084F80(a1: v2, a2: (unsigned int)&v135, a3: (int)v9 + 216, a4: 4, a5: v10);
    }
  }
  else
  {
    result = sub_1400852F0(a1: v2, a2: (int)v136 + 216, a3: (unsigned int)&v135, a4: 4, a5: 512);
    if ( (_BYTE)result == 0 )
      *(_DWORD *)(v9 + 216) = 0;
  }
  return result;
}