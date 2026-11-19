__int64 __fastcall sub_14082E960(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // r14
  __int64 v4; // rsi
  __int64 v5; // rbx
  char v6; // al
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r14
  char *v13; // r12
  __int64 v14; // r15
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int128 *v18; // rsi
  __int128 *v19; // rdi
  _QWORD *v20; // rax
  int v21; // eax
  void *v22; // rcx
  void *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r14
  char *v29; // r12
  __int64 v30; // r15
  unsigned __int64 v31; // rdi
  unsigned __int64 v32; // rcx
  __int64 v33; // rax
  __int128 *v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int128 *v39; // r12
  __int64 v40; // r13
  char *v41; // r15
  __int64 v42; // r14
  unsigned __int64 v43; // rdi
  unsigned __int64 v44; // rcx
  __int64 v45; // rax
  __int128 *v46; // rsi
  __int128 *v47; // rcx
  int v48; // eax
  void *v49; // rcx
  void *v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // r14
  char *v56; // r12
  __int64 v57; // r15
  unsigned __int64 v58; // rdi
  unsigned __int64 v59; // rcx
  __int64 v60; // rax
  __int128 *v61; // rsi
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int128 *v66; // r12
  __int64 v67; // r13
  char *v68; // r15
  __int64 v69; // r14
  unsigned __int64 v70; // rdi
  unsigned __int64 v71; // rcx
  __int64 v72; // rax
  __int128 *v73; // rsi
  __int128 *v74; // rcx
  int v75; // eax
  void *v76; // rcx
  void *v77; // rcx
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // r14
  char *v83; // r12
  __int64 v84; // r15
  unsigned __int64 v85; // rdi
  unsigned __int64 v86; // rcx
  __int64 v87; // rax
  __int128 *v88; // rsi
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  __int128 *v93; // r12
  __int64 v94; // r13
  char *v95; // r15
  __int64 v96; // r14
  unsigned __int64 v97; // rdi
  unsigned __int64 v98; // rcx
  __int64 v99; // rax
  __int128 *v100; // rsi
  __int128 *v101; // rcx
  int v102; // eax
  void *v103; // rcx
  void *v104; // rcx
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  __int64 v109; // rsi
  char *v110; // r15
  __int64 v111; // r14
  unsigned __int64 v112; // rax
  __int64 v113; // rax
  unsigned __int64 v114; // rcx
  __int128 *v115; // rdi
  __int128 *v116; // rbx
  _QWORD *v117; // rax
  int v118; // eax
  void *v119; // rcx
  void *v120; // rcx
  __int64 *v121; // rax
  __int64 v122; // rbx
  _QWORD *v123; // rax
  int v124; // eax
  void *v125; // rcx
  void *v126; // rcx
  int v127; // [rsp+30h] [rbp-49h] BYREF
  __int64 v128; // [rsp+38h] [rbp-41h]
  __int64 v129; // [rsp+40h] [rbp-39h]
  __int64 v130; // [rsp+48h] [rbp-31h]
  __int128 v131; // [rsp+50h] [rbp-29h] BYREF
  __int64 v132; // [rsp+60h] [rbp-19h]
  unsigned __int64 v133; // [rsp+68h] [rbp-11h]
  __int128 v134; // [rsp+70h] [rbp-9h] BYREF
  __int64 v135; // [rsp+80h] [rbp+7h]
  unsigned __int64 v136; // [rsp+88h] [rbp+Fh]

  v2 = a2;
  v130 = a2;
  v3 = a1;
  v129 = a1;
  v4 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  v128 = v4;
  if ( dword_1413AA4E0 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413AA4E0);
    if ( dword_1413AA4E0 == -1 )
    {
      sub_1409DB700(a1: sub_140EE2C20);
      sub_1409DBB40(a1: &dword_1413AA4E0);
    }
  }
  sub_1400BAD40(a1: v3, a2: v2);
  v5 = 0x7FFFFFFFFFFFFFFFLL;
  if ( dword_1413AA4E8 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413AA4E8);
    if ( dword_1413AA4E8 == -1 )
    {
      v12 = qword_1413142A8;
      if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_1413142A8) < 0x14 )
        sub_14001B680(a1: v9, a2: v8);
      v13 = aGardencentre_0;
      if ( (unsigned __int64)qword_1413142B0 > 0xF )
        v13 = *(char **)aGardencentre_0;
      v131 = 0;
      v132 = 0;
      v133 = 0;
      v14 = qword_1413142A8 + 20;
      if ( (unsigned __int64)(qword_1413142A8 + 20) <= 0xF )
      {
        v15 = 15;
        v18 = &v131;
      }
      else
      {
        v15 = v14 | 0xF;
        if ( (v14 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
        {
          v15 = 0x7FFFFFFFFFFFFFFFLL;
          v16 = 0x8000000000000027uLL;
LABEL_27:
          v17 = sub_1409DB470(a1: v16);
          if ( v17 == 0 )
            __fastfail(5u);
          v18 = (__int128 *)((v17 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
          *((_QWORD *)v18 - 1) = v17;
          *(_QWORD *)&v131 = v18;
          goto LABEL_39;
        }
        if ( v15 < 0x16 )
          v15 = 22;
        if ( v15 == -1 )
        {
          v18 = nullptr;
          *(_QWORD *)&v131 = 0;
        }
        else
        {
          if ( v15 + 1 >= 0x1000 )
          {
            v16 = v15 + 40;
            if ( v15 + 40 < v15 + 1 )
            {
              sub_14001B170(a1: v16, a2: v8, a3: v10, a4: v11);
              __debugbreak();
            }
            goto LABEL_27;
          }
          v18 = (__int128 *)sub_1409DB470(a1: v15 + 1);
          *(_QWORD *)&v131 = v18;
        }
      }
LABEL_39:
      v132 = v12 + 20;
      v133 = v15;
      sub_140E82100(a1: v18, a2: v13, a3: v12);
      qmemcpy((char *)v18 + v12, "noofHybridNeighbours", 20);
      *((_BYTE *)v18 + v14) = 0;
      v19 = &v131;
      if ( v133 > 0xF )
        LODWORD(v19) = v131;
      v20 = (_QWORD *)sub_140020190(a1: &v134, a2: aGardencentre_0, a3: &xmmword_141024E18);
      if ( v20[3] > 0xFu )
        v20 = (_QWORD *)*v20;
      v21 = sub_140062160(a1: v20);
      sub_140062D10(
        a1: (unsigned int)&dword_1413AA4E4,
        a2: v21,
        a3: (_DWORD)v19,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Projects\\StarSta"
                      "bleOnline\\SSOLib\\src\\Actors\\Gardening\\PXGardenCentre.cpp",
        a5: 28);
      if ( v136 > 0xF )
      {
        v22 = (void *)v134;
        if ( v136 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v134 - *(_QWORD *)(v134 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v22 = *(void **)(v134 - 8);
        }
        sub_1409DB4C0(lpMem: v22);
      }
      *(_QWORD *)&v134 = 19937;
      v135 = 0;
      v136 = 31;
      if ( v133 > 0xF )
      {
        v23 = (void *)v131;
        if ( v133 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v131 - *(_QWORD *)(v131 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v23 = *(void **)(v131 - 8);
        }
        sub_1409DB4C0(lpMem: v23);
      }
      sub_1409DBB40(a1: &dword_1413AA4E8);
      v2 = v130;
      v4 = v128;
      v3 = v129;
    }
  }
  v127 = dword_1413AA4E4;
  if ( *(_DWORD *)v2 != 0 )
  {
    if ( *(_BYTE *)(v2 + 62) == 0 || *(_DWORD *)(v3 + 448) != 4 )
    {
      v6 = sub_140076F50();
      sub_140084F80(a1: v2, a2: (unsigned int)&v127, a3: v3 + 448, a4: 4, a5: v6);
    }
  }
  else if ( (unsigned __int8)sub_1400852F0(a1: v2, a2: (int)v3 + 448, a3: (unsigned int)&v127, a4: 4, a5: 512) == 0 )
  {
    *(_DWORD *)(v3 + 448) = 4;
  }
  if ( dword_1413AA4F0 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413AA4F0);
    if ( dword_1413AA4F0 == -1 )
    {
      v28 = qword_1413142A8;
      if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_1413142A8) < 0x14 )
        sub_14001B680(a1: v25, a2: v24);
      v29 = aGardencentre_0;
      if ( (unsigned __int64)qword_1413142B0 > 0xF )
        v29 = *(char **)aGardencentre_0;
      v134 = 0;
      v135 = 0;
      v136 = 0;
      v30 = qword_1413142A8 + 20;
      if ( (unsigned __int64)(qword_1413142A8 + 20) <= 0xF )
      {
        v31 = 15;
        v34 = &v134;
      }
      else
      {
        v31 = v30 | 0xF;
        if ( (v30 | 0xFuLL) <= 0x7FFFFFFFFFFFFFFFLL )
        {
          if ( v31 < 0x16 )
            v31 = 22;
          if ( v31 == -1 )
          {
            v34 = nullptr;
            *(_QWORD *)&v134 = 0;
            goto LABEL_76;
          }
          if ( v31 + 1 < 0x1000 )
          {
            v34 = (__int128 *)sub_1409DB470(a1: v31 + 1);
            *(_QWORD *)&v134 = v34;
            goto LABEL_76;
          }
          v32 = v31 + 40;
          if ( v31 + 40 < v31 + 1 )
          {
            sub_14001B170(a1: v32, a2: v24, a3: v26, a4: v27);
            __debugbreak();
          }
        }
        else
        {
          v31 = 0x7FFFFFFFFFFFFFFFLL;
          v32 = 0x8000000000000027uLL;
        }
        v33 = sub_1409DB470(a1: v32);
        if ( v33 == 0 )
          __fastfail(5u);
        v34 = (__int128 *)((v33 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *((_QWORD *)v34 - 1) = v33;
        *(_QWORD *)&v134 = v34;
      }
LABEL_76:
      v135 = v28 + 20;
      v136 = v31;
      sub_140E82100(a1: v34, a2: v29, a3: v28);
      qmemcpy((char *)v34 + v28, "hybridNeighbourRange", 20);
      *((_BYTE *)v34 + v30) = 0;
      v39 = &v134;
      if ( v136 > 0xF )
        LODWORD(v39) = v134;
      v40 = qword_1413142A8;
      if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_1413142A8) < 0x14 )
        sub_14001B680(a1: v36, a2: v35);
      v41 = aGardencentre_0;
      if ( (unsigned __int64)qword_1413142B0 > 0xF )
        v41 = *(char **)aGardencentre_0;
      v131 = 0;
      v132 = 0;
      v133 = 0;
      v42 = qword_1413142A8 + 20;
      if ( (unsigned __int64)(qword_1413142A8 + 20) <= 0xF )
      {
        v43 = 15;
        v46 = &v131;
      }
      else
      {
        v43 = v42 | 0xF;
        if ( (v42 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
        {
          v43 = 0x7FFFFFFFFFFFFFFFLL;
          v44 = 0x8000000000000027uLL;
LABEL_85:
          v45 = sub_1409DB470(a1: v44);
          if ( v45 == 0 )
            __fastfail(5u);
          v46 = (__int128 *)((v45 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
          *((_QWORD *)v46 - 1) = v45;
          *(_QWORD *)&v131 = v46;
          goto LABEL_97;
        }
        if ( v43 < 0x16 )
          v43 = 22;
        if ( v43 == -1 )
        {
          v46 = nullptr;
          *(_QWORD *)&v131 = 0;
        }
        else
        {
          if ( v43 + 1 >= 0x1000 )
          {
            v44 = v43 + 40;
            if ( v43 + 40 < v43 + 1 )
            {
              sub_14001B170(a1: v44, a2: v35, a3: v37, a4: v38);
              __debugbreak();
            }
            goto LABEL_85;
          }
          v46 = (__int128 *)sub_1409DB470(a1: v43 + 1);
          *(_QWORD *)&v131 = v46;
        }
      }
LABEL_97:
      v132 = v40 + 20;
      v133 = v43;
      sub_140E82100(a1: v46, a2: v41, a3: v40);
      qmemcpy((char *)v46 + v40, "hybridNeighbourRange", 20);
      *((_BYTE *)v46 + v42) = 0;
      v47 = &v131;
      if ( v133 > 0xF )
        v47 = (__int128 *)v131;
      v48 = sub_140062160(a1: v47);
      sub_140062D10(
        a1: (unsigned int)&dword_1413AA4EC,
        a2: v48,
        a3: (_DWORD)v39,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Projects\\StarSta"
                      "bleOnline\\SSOLib\\src\\Actors\\Gardening\\PXGardenCentre.cpp",
        a5: 29);
      if ( v133 > 0xF )
      {
        v49 = (void *)v131;
        if ( v133 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v131 - *(_QWORD *)(v131 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v49 = *(void **)(v131 - 8);
        }
        sub_1409DB4C0(lpMem: v49);
      }
      *(_QWORD *)&v131 = 19937;
      v132 = 0;
      v133 = 31;
      if ( v136 > 0xF )
      {
        v50 = (void *)v134;
        if ( v136 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v134 - *(_QWORD *)(v134 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v50 = *(void **)(v134 - 8);
        }
        sub_1409DB4C0(lpMem: v50);
      }
      sub_1409DBB40(a1: &dword_1413AA4F0);
      v2 = v130;
      v4 = v128;
      v3 = v129;
    }
  }
  v127 = dword_1413AA4EC;
  sub_140022880(a1: v2, a2: &v127, a3: v3 + 452);
  if ( dword_1413AA4F8 <= *(_DWORD *)(v4 + 76) )
    goto LABEL_11;
  sub_1409DBBB0(a1: &dword_1413AA4F8);
  if ( dword_1413AA4F8 != -1 )
    goto LABEL_11;
  v55 = qword_1413142A8;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_1413142A8) < 0xC )
    sub_14001B680(a1: v52, a2: v51);
  v56 = aGardencentre_0;
  if ( (unsigned __int64)qword_1413142B0 > 0xF )
    v56 = *(char **)aGardencentre_0;
  v134 = 0;
  v135 = 0;
  v136 = 0;
  v57 = qword_1413142A8 + 12;
  if ( (unsigned __int64)(qword_1413142A8 + 12) <= 0xF )
  {
    v58 = 15;
    v61 = &v134;
  }
  else
  {
    v58 = v57 | 0xF;
    if ( (v57 | 0xFuLL) <= 0x7FFFFFFFFFFFFFFFLL )
    {
      if ( v58 < 0x16 )
        v58 = 22;
      if ( v58 == -1 )
      {
        v61 = nullptr;
        *(_QWORD *)&v134 = 0;
        goto LABEL_132;
      }
      if ( v58 + 1 < 0x1000 )
      {
        v61 = (__int128 *)sub_1409DB470(a1: v58 + 1);
        *(_QWORD *)&v134 = v61;
        goto LABEL_132;
      }
      v59 = v58 + 40;
      if ( v58 + 40 < v58 + 1 )
      {
        sub_14001B170(a1: v59, a2: v51, a3: v53, a4: v54);
        __debugbreak();
      }
    }
    else
    {
      v58 = 0x7FFFFFFFFFFFFFFFLL;
      v59 = 0x8000000000000027uLL;
    }
    v60 = sub_1409DB470(a1: v59);
    if ( v60 == 0 )
      __fastfail(5u);
    v61 = (__int128 *)((v60 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)v61 - 1) = v60;
    *(_QWORD *)&v134 = v61;
  }
LABEL_132:
  v135 = v55 + 12;
  v136 = v58;
  sub_140E82100(a1: v61, a2: v56, a3: v55);
  qmemcpy((char *)v61 + v55, "hybridChance", 12);
  *((_BYTE *)v61 + v57) = 0;
  v66 = &v134;
  if ( v136 > 0xF )
    LODWORD(v66) = v134;
  v67 = qword_1413142A8;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_1413142A8) < 0xC )
    sub_14001B680(a1: v63, a2: v62);
  v68 = aGardencentre_0;
  if ( (unsigned __int64)qword_1413142B0 > 0xF )
    v68 = *(char **)aGardencentre_0;
  v131 = 0;
  v132 = 0;
  v133 = 0;
  v69 = qword_1413142A8 + 12;
  if ( (unsigned __int64)(qword_1413142A8 + 12) <= 0xF )
  {
    v70 = 15;
    v73 = &v131;
  }
  else
  {
    v70 = v69 | 0xF;
    if ( (v69 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
    {
      v70 = 0x7FFFFFFFFFFFFFFFLL;
      v71 = 0x8000000000000027uLL;
LABEL_141:
      v72 = sub_1409DB470(a1: v71);
      if ( v72 == 0 )
        __fastfail(5u);
      v73 = (__int128 *)((v72 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *((_QWORD *)v73 - 1) = v72;
      *(_QWORD *)&v131 = v73;
      goto LABEL_153;
    }
    if ( v70 < 0x16 )
      v70 = 22;
    if ( v70 == -1 )
    {
      v73 = nullptr;
      *(_QWORD *)&v131 = 0;
    }
    else
    {
      if ( v70 + 1 >= 0x1000 )
      {
        v71 = v70 + 40;
        if ( v70 + 40 < v70 + 1 )
        {
          sub_14001B170(a1: v71, a2: v62, a3: v64, a4: v65);
          __debugbreak();
        }
        goto LABEL_141;
      }
      v73 = (__int128 *)sub_1409DB470(a1: v70 + 1);
      *(_QWORD *)&v131 = v73;
    }
  }
LABEL_153:
  v132 = v67 + 12;
  v133 = v70;
  sub_140E82100(a1: v73, a2: v68, a3: v67);
  qmemcpy((char *)v73 + v67, "hybridChance", 12);
  *((_BYTE *)v73 + v69) = 0;
  v74 = &v131;
  if ( v133 > 0xF )
    v74 = (__int128 *)v131;
  v75 = sub_140062160(a1: v74);
  sub_140062D10(
    a1: (unsigned int)&dword_1413AA4F4,
    a2: v75,
    a3: (_DWORD)v66,
    a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Projects\\StarStableO"
                  "nline\\SSOLib\\src\\Actors\\Gardening\\PXGardenCentre.cpp",
    a5: 30);
  if ( v133 > 0xF )
  {
    v76 = (void *)v131;
    if ( v133 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v131 - *(_QWORD *)(v131 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v76 = *(void **)(v131 - 8);
    }
    sub_1409DB4C0(lpMem: v76);
  }
  *(_QWORD *)&v131 = 19937;
  v132 = 0;
  v133 = 31;
  if ( v136 > 0xF )
  {
    v77 = (void *)v134;
    if ( v136 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v134 - *(_QWORD *)(v134 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v77 = *(void **)(v134 - 8);
    }
    sub_1409DB4C0(lpMem: v77);
  }
  sub_1409DBB40(a1: &dword_1413AA4F8);
  v2 = v130;
  v4 = v128;
  v3 = v129;
LABEL_11:
  v127 = dword_1413AA4F4;
  sub_140022880(a1: v2, a2: &v127, a3: v3 + 456);
  if ( dword_1413AA500 <= *(_DWORD *)(v4 + 76) )
    goto LABEL_12;
  sub_1409DBBB0(a1: &dword_1413AA500);
  if ( dword_1413AA500 != -1 )
    goto LABEL_12;
  v82 = qword_1413142A8;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_1413142A8) < 0x15 )
    sub_14001B680(a1: v79, a2: v78);
  v83 = aGardencentre_0;
  if ( (unsigned __int64)qword_1413142B0 > 0xF )
    v83 = *(char **)aGardencentre_0;
  v134 = 0;
  v135 = 0;
  v136 = 0;
  v84 = qword_1413142A8 + 21;
  if ( (unsigned __int64)(qword_1413142A8 + 21) <= 0xF )
  {
    v85 = 15;
    v88 = &v134;
  }
  else
  {
    v85 = v84 | 0xF;
    if ( (v84 | 0xFuLL) <= 0x7FFFFFFFFFFFFFFFLL )
    {
      if ( v85 < 0x16 )
        v85 = 22;
      if ( v85 == -1 )
      {
        v88 = nullptr;
        *(_QWORD *)&v134 = 0;
        goto LABEL_188;
      }
      if ( v85 + 1 < 0x1000 )
      {
        v88 = (__int128 *)sub_1409DB470(a1: v85 + 1);
        *(_QWORD *)&v134 = v88;
        goto LABEL_188;
      }
      v86 = v85 + 40;
      if ( v85 + 40 < v85 + 1 )
      {
        sub_14001B170(a1: v86, a2: v78, a3: v80, a4: v81);
        __debugbreak();
      }
    }
    else
    {
      v85 = 0x7FFFFFFFFFFFFFFFLL;
      v86 = 0x8000000000000027uLL;
    }
    v87 = sub_1409DB470(a1: v86);
    if ( v87 == 0 )
      __fastfail(5u);
    v88 = (__int128 *)((v87 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)v88 - 1) = v87;
    *(_QWORD *)&v134 = v88;
  }
LABEL_188:
  v135 = v82 + 21;
  v136 = v85;
  sub_140E82100(a1: v88, a2: v83, a3: v82);
  qmemcpy((char *)v88 + v82, "particlesPlotEmptyStr", 21);
  *((_BYTE *)v88 + v84) = 0;
  v93 = &v134;
  if ( v136 > 0xF )
    LODWORD(v93) = v134;
  v94 = qword_1413142A8;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_1413142A8) < 0x15 )
    sub_14001B680(a1: v90, a2: v89);
  v95 = aGardencentre_0;
  if ( (unsigned __int64)qword_1413142B0 > 0xF )
    v95 = *(char **)aGardencentre_0;
  v131 = 0;
  v132 = 0;
  v133 = 0;
  v96 = qword_1413142A8 + 21;
  if ( (unsigned __int64)(qword_1413142A8 + 21) <= 0xF )
  {
    v97 = 15;
    v100 = &v131;
  }
  else
  {
    v97 = v96 | 0xF;
    if ( (v96 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
    {
      v97 = 0x7FFFFFFFFFFFFFFFLL;
      v98 = 0x8000000000000027uLL;
LABEL_197:
      v99 = sub_1409DB470(a1: v98);
      if ( v99 == 0 )
        __fastfail(5u);
      v100 = (__int128 *)((v99 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *((_QWORD *)v100 - 1) = v99;
      *(_QWORD *)&v131 = v100;
      goto LABEL_209;
    }
    if ( v97 < 0x16 )
      v97 = 22;
    if ( v97 == -1 )
    {
      v100 = nullptr;
      *(_QWORD *)&v131 = 0;
    }
    else
    {
      if ( v97 + 1 >= 0x1000 )
      {
        v98 = v97 + 40;
        if ( v97 + 40 < v97 + 1 )
        {
          sub_14001B170(a1: v98, a2: v89, a3: v91, a4: v92);
          __debugbreak();
        }
        goto LABEL_197;
      }
      v100 = (__int128 *)sub_1409DB470(a1: v97 + 1);
      *(_QWORD *)&v131 = v100;
    }
  }
LABEL_209:
  v132 = v94 + 21;
  v133 = v97;
  sub_140E82100(a1: v100, a2: v95, a3: v94);
  qmemcpy((char *)v100 + v94, "particlesPlotEmptyStr", 21);
  *((_BYTE *)v100 + v96) = 0;
  v101 = &v131;
  if ( v133 > 0xF )
    v101 = (__int128 *)v131;
  v102 = sub_140062160(a1: v101);
  sub_140062D10(
    a1: (unsigned int)&dword_1413AA4FC,
    a2: v102,
    a3: (_DWORD)v93,
    a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Projects\\StarStableO"
                  "nline\\SSOLib\\src\\Actors\\Gardening\\PXGardenCentre.cpp",
    a5: 31);
  if ( v133 > 0xF )
  {
    v103 = (void *)v131;
    if ( v133 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v131 - *(_QWORD *)(v131 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v103 = *(void **)(v131 - 8);
    }
    sub_1409DB4C0(lpMem: v103);
  }
  *(_QWORD *)&v131 = 19937;
  v132 = 0;
  v133 = 31;
  if ( v136 > 0xF )
  {
    v104 = (void *)v134;
    if ( v136 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v134 - *(_QWORD *)(v134 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v104 = *(void **)(v134 - 8);
    }
    sub_1409DB4C0(lpMem: v104);
  }
  sub_1409DBB40(a1: &dword_1413AA500);
  v2 = v130;
  v4 = v128;
  v3 = v129;
LABEL_12:
  v127 = dword_1413AA4FC;
  sub_140085740(a1: v2, a2: &v127, a3: v3 + 352, a4: &byte_140EEC5C5);
  if ( dword_1413AA508 <= *(_DWORD *)(v4 + 76) )
    goto LABEL_13;
  sub_1409DBBB0(a1: &dword_1413AA508);
  if ( dword_1413AA508 != -1 )
    goto LABEL_13;
  v109 = qword_1413142A8;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_1413142A8) < 0x17 )
    sub_14001B680(a1: v106, a2: v105);
  v110 = aGardencentre_0;
  if ( (unsigned __int64)qword_1413142B0 > 0xF )
    v110 = *(char **)aGardencentre_0;
  v134 = 0;
  v135 = 0;
  v136 = 0;
  v111 = qword_1413142A8 + 23;
  if ( (unsigned __int64)(qword_1413142A8 + 23) <= 0xF )
  {
    v5 = 15;
    v115 = &v134;
  }
  else
  {
    if ( (v111 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
    {
      v112 = 0x8000000000000027uLL;
LABEL_232:
      v113 = sub_1409DB470(a1: v112);
      if ( v113 == 0 )
        __fastfail(5u);
      v115 = (__int128 *)((v113 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *((_QWORD *)v115 - 1) = v113;
      *(_QWORD *)&v134 = v115;
      goto LABEL_244;
    }
    v5 = v111 | 0xF;
    if ( (v111 | 0xFuLL) < 0x16 )
      v5 = 22;
    v114 = v5 + 1;
    if ( v5 == -1 )
    {
      v115 = nullptr;
      *(_QWORD *)&v134 = 0;
    }
    else
    {
      if ( v114 >= 0x1000 )
      {
        v112 = v5 + 40;
        if ( v5 + 40 < (unsigned __int64)(v5 + 1) )
        {
          sub_14001B170(a1: v114, a2: v105, a3: v107, a4: v108);
          __debugbreak();
        }
        goto LABEL_232;
      }
      v115 = (__int128 *)sub_1409DB470(a1: v114);
      *(_QWORD *)&v134 = v115;
    }
  }
LABEL_244:
  v135 = v109 + 23;
  v136 = v5;
  sub_140E82100(a1: v115, a2: v110, a3: v109);
  qmemcpy((char *)v115 + v109, "particlesPlotGrowingStr", 23);
  *((_BYTE *)v115 + v111) = 0;
  v116 = &v134;
  if ( v136 > 0xF )
    LODWORD(v116) = v134;
  v117 = (_QWORD *)sub_140020190(a1: &v131, a2: aGardencentre_0, a3: &xmmword_141024E70);
  if ( v117[3] > 0xFu )
    v117 = (_QWORD *)*v117;
  v118 = sub_140062160(a1: v117);
  sub_140062D10(
    a1: (unsigned int)&dword_1413AA504,
    a2: v118,
    a3: (_DWORD)v116,
    a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Projects\\StarStableO"
                  "nline\\SSOLib\\src\\Actors\\Gardening\\PXGardenCentre.cpp",
    a5: 32);
  if ( v133 > 0xF )
  {
    v119 = (void *)v131;
    if ( v133 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v131 - *(_QWORD *)(v131 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v119 = *(void **)(v131 - 8);
    }
    sub_1409DB4C0(lpMem: v119);
  }
  *(_QWORD *)&v131 = 19937;
  v132 = 0;
  v133 = 31;
  if ( v136 > 0xF )
  {
    v120 = (void *)v134;
    if ( v136 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v134 - *(_QWORD *)(v134 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v120 = *(void **)(v134 - 8);
    }
    sub_1409DB4C0(lpMem: v120);
  }
  sub_1409DBB40(a1: &dword_1413AA508);
  v4 = v128;
  v3 = v129;
LABEL_13:
  v127 = dword_1413AA504;
  sub_140085740(a1: v2, a2: &v127, a3: v3 + 384, a4: &byte_140EEC5C5);
  if ( dword_1413AA510 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413AA510);
    if ( dword_1413AA510 == -1 )
    {
      v121 = (__int64 *)sub_140020190(a1: &v131, a2: aGardencentre_0, a3: "particlesPlotReadyStr");
      LODWORD(v122) = (_DWORD)v121;
      if ( (unsigned __int64)v121[3] > 0xF )
        v122 = *v121;
      v123 = (_QWORD *)sub_140020190(a1: &v134, a2: aGardencentre_0, a3: "particlesPlotReadyStr");
      if ( v123[3] > 0xFu )
        v123 = (_QWORD *)*v123;
      v124 = sub_140062160(a1: v123);
      sub_140062D10(
        a1: (unsigned int)&dword_1413AA50C,
        a2: v124,
        a3: v122,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Projects\\StarSta"
                      "bleOnline\\SSOLib\\src\\Actors\\Gardening\\PXGardenCentre.cpp",
        a5: 33);
      if ( v136 > 0xF )
      {
        v125 = (void *)v134;
        if ( v136 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v134 - *(_QWORD *)(v134 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v125 = *(void **)(v134 - 8);
        }
        sub_1409DB4C0(lpMem: v125);
      }
      *(_QWORD *)&v134 = 19937;
      v135 = 0;
      v136 = 31;
      if ( v133 > 0xF )
      {
        v126 = (void *)v131;
        if ( v133 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v131 - *(_QWORD *)(v131 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v126 = *(void **)(v131 - 8);
        }
        sub_1409DB4C0(lpMem: v126);
      }
      sub_1409DBB40(a1: &dword_1413AA510);
    }
  }
  v127 = dword_1413AA50C;
  return sub_140085740(a1: v2, a2: &v127, a3: v3 + 416, a4: &byte_140EEC5C5);
}