__int64 __fastcall sub_140877B60(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  char *v3; // r15
  __int64 v4; // rbx
  __int128 *v5; // rsi
  __int64 v6; // rdi
  char v7; // al
  __int64 v8; // rdi
  char v9; // al
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
  __int64 v69; // r15
  char *v70; // r13
  __int64 v71; // r12
  unsigned __int64 v72; // rdi
  unsigned __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int128 *v79; // rax
  __int64 v80; // r13
  char *v81; // r12
  __int64 v82; // r15
  unsigned __int64 v83; // rdi
  unsigned __int64 v84; // rcx
  __int64 v85; // rax
  __int128 *v86; // rsi
  __int128 *v87; // rcx
  int v88; // eax
  void *v89; // rcx
  void *v90; // rcx
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // r14
  char *v96; // r12
  __int64 v97; // r15
  unsigned __int64 v98; // rdi
  unsigned __int64 v99; // rcx
  __int64 v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  __int128 *v105; // r15
  __int64 v106; // r14
  char *v107; // rdx
  __int64 v108; // rsi
  unsigned __int64 v109; // rax
  __int64 v110; // rax
  unsigned __int64 v111; // rcx
  __int128 *v112; // rdi
  __int128 *v113; // rcx
  int v114; // eax
  void *v115; // rcx
  void *v116; // rcx
  __int128 *v117; // [rsp+30h] [rbp-49h] BYREF
  char *v118; // [rsp+38h] [rbp-41h]
  __int64 v119; // [rsp+40h] [rbp-39h]
  __int64 v120; // [rsp+48h] [rbp-31h]
  __int128 v121; // [rsp+50h] [rbp-29h] BYREF
  __int64 v122; // [rsp+60h] [rbp-19h]
  unsigned __int64 v123; // [rsp+68h] [rbp-11h]
  __int128 v124; // [rsp+70h] [rbp-9h] BYREF
  __int64 v125; // [rsp+80h] [rbp+7h]
  unsigned __int64 v126; // [rsp+88h] [rbp+Fh]

  v2 = a2;
  v120 = a2;
  v119 = a1;
  v3 = *((char **)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  v118 = v3;
  if ( dword_1413AB668 > *((_DWORD *)v3 + 19) )
  {
    sub_1409DBBB0(a1: &dword_1413AB668);
    if ( dword_1413AB668 == -1 )
    {
      sub_1409DB700(a1: sub_140EE2EC0);
      sub_1409DBB40(a1: &dword_1413AB668);
    }
  }
  v4 = 0x7FFFFFFFFFFFFFFFLL;
  if ( dword_1413AB670 > *((_DWORD *)v3 + 19) )
  {
    sub_1409DBBB0(a1: &dword_1413AB670);
    if ( dword_1413AB670 == -1 )
    {
      v15 = qword_1413142E8;
      if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_1413142E8) < 8 )
        sub_14001B680(a1: v12, a2: v11);
      v16 = aInstancedtype;
      if ( (unsigned __int64)qword_1413142F0 > 0xF )
        v16 = *(char **)aInstancedtype;
      v124 = 0;
      v125 = 0;
      v126 = 0;
      v17 = qword_1413142E8 + 8;
      if ( (unsigned __int64)(qword_1413142E8 + 8) <= 0xF )
      {
        v18 = 15;
        v21 = &v124;
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
            *(_QWORD *)&v124 = 0;
            goto LABEL_46;
          }
          if ( v18 + 1 < 0x1000 )
          {
            v21 = (__int128 *)sub_1409DB470(a1: v18 + 1);
            *(_QWORD *)&v124 = v21;
            goto LABEL_46;
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
        *(_QWORD *)&v124 = v21;
      }
LABEL_46:
      v125 = v15 + 8;
      v126 = v18;
      sub_140E82100(a1: v21, a2: v16, a3: v15);
      *(_QWORD *)((char *)v21 + v15) = 0x6570795465736162LL;
      *((_BYTE *)v21 + v17) = 0;
      v26 = &v124;
      if ( v126 > 0xF )
        LODWORD(v26) = v124;
      v27 = qword_1413142E8;
      if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_1413142E8) < 8 )
        sub_14001B680(a1: v23, a2: v22);
      v28 = aInstancedtype;
      if ( (unsigned __int64)qword_1413142F0 > 0xF )
        v28 = *(char **)aInstancedtype;
      v121 = 0;
      v122 = 0;
      v123 = 0;
      v29 = qword_1413142E8 + 8;
      if ( (unsigned __int64)(qword_1413142E8 + 8) <= 0xF )
      {
        v30 = 15;
        v33 = &v121;
      }
      else
      {
        v30 = v29 | 0xF;
        if ( (v29 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
        {
          v30 = 0x7FFFFFFFFFFFFFFFLL;
          v31 = 0x8000000000000027uLL;
LABEL_55:
          v32 = sub_1409DB470(a1: v31);
          if ( v32 == 0 )
            __fastfail(5u);
          v33 = (__int128 *)((v32 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
          *((_QWORD *)v33 - 1) = v32;
          *(_QWORD *)&v121 = v33;
          goto LABEL_67;
        }
        if ( v30 < 0x16 )
          v30 = 22;
        if ( v30 == -1 )
        {
          v33 = nullptr;
          *(_QWORD *)&v121 = 0;
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
            goto LABEL_55;
          }
          v33 = (__int128 *)sub_1409DB470(a1: v30 + 1);
          *(_QWORD *)&v121 = v33;
        }
      }
LABEL_67:
      v122 = v27 + 8;
      v123 = v30;
      sub_140E82100(a1: v33, a2: v28, a3: v27);
      *(_QWORD *)((char *)v33 + v27) = 0x6570795465736162LL;
      *((_BYTE *)v33 + v29) = 0;
      v34 = &v121;
      if ( v123 > 0xF )
        v34 = (__int128 *)v121;
      v35 = sub_140062160(a1: v34);
      sub_140062D10(
        a1: (unsigned int)&dword_1413AB66C,
        a2: v35,
        a3: (_DWORD)v26,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Nebula\\i"
                      "nclude\\Nebula/Script/Binary/PXNebulaScriptBinary.h",
        a5: 24);
      if ( v123 > 0xF )
      {
        v36 = (void *)v121;
        if ( v123 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v121 - *(_QWORD *)(v121 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v36 = *(void **)(v121 - 8);
        }
        sub_1409DB4C0(lpMem: v36);
      }
      *(_QWORD *)&v121 = 19937;
      v122 = 0;
      v123 = 31;
      if ( v126 > 0xF )
      {
        v37 = (void *)v124;
        if ( v126 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v124 - *(_QWORD *)(v124 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v37 = *(void **)(v124 - 8);
        }
        sub_1409DB4C0(lpMem: v37);
      }
      sub_1409DBB40(a1: &dword_1413AB670);
      v2 = v120;
      v3 = v118;
    }
  }
  LODWORD(v117) = dword_1413AB66C;
  sub_140085740(a1: v2, a2: &v117, a3: v119 + 8, a4: &byte_140EEC5C5);
  if ( dword_1413AB678 <= *((_DWORD *)v3 + 19) || (sub_1409DBBB0(a1: &dword_1413AB678), dword_1413AB678 != -1) )
  {
    v5 = nullptr;
    goto LABEL_5;
  }
  v42 = qword_1413142E8;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_1413142E8) < 0xB )
    sub_14001B680(a1: v39, a2: v38);
  v43 = aInstancedtype;
  if ( (unsigned __int64)qword_1413142F0 > 0xF )
    v43 = *(char **)aInstancedtype;
  v124 = 0;
  v125 = 0;
  v126 = 0;
  v44 = qword_1413142E8 + 11;
  if ( (unsigned __int64)(qword_1413142E8 + 11) <= 0xF )
  {
    v45 = 15;
    v48 = &v124;
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
        *(_QWORD *)&v124 = 0;
        goto LABEL_102;
      }
      if ( v45 + 1 < 0x1000 )
      {
        v48 = (__int128 *)sub_1409DB470(a1: v45 + 1);
        *(_QWORD *)&v124 = v48;
        goto LABEL_102;
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
    *(_QWORD *)&v124 = v48;
  }
LABEL_102:
  v125 = v42 + 11;
  v126 = v45;
  sub_140E82100(a1: v48, a2: v43, a3: v42);
  qmemcpy((char *)v48 + v42, "isReference", 11);
  *((_BYTE *)v48 + v44) = 0;
  v53 = &v124;
  if ( v126 > 0xF )
    LODWORD(v53) = v124;
  v54 = qword_1413142E8;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_1413142E8) < 0xB )
    sub_14001B680(a1: v50, a2: v49);
  v55 = aInstancedtype;
  if ( (unsigned __int64)qword_1413142F0 > 0xF )
    v55 = *(char **)aInstancedtype;
  v121 = 0;
  v122 = 0;
  v123 = 0;
  v56 = qword_1413142E8 + 11;
  if ( (unsigned __int64)(qword_1413142E8 + 11) <= 0xF )
  {
    v57 = 15;
    v60 = &v121;
  }
  else
  {
    v57 = v56 | 0xF;
    if ( (v56 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
    {
      v57 = 0x7FFFFFFFFFFFFFFFLL;
      v58 = 0x8000000000000027uLL;
LABEL_111:
      v59 = sub_1409DB470(a1: v58);
      if ( v59 == 0 )
        __fastfail(5u);
      v60 = (__int128 *)((v59 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *((_QWORD *)v60 - 1) = v59;
      *(_QWORD *)&v121 = v60;
      goto LABEL_123;
    }
    if ( v57 < 0x16 )
      v57 = 22;
    if ( v57 == -1 )
    {
      v60 = nullptr;
      *(_QWORD *)&v121 = 0;
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
        goto LABEL_111;
      }
      v60 = (__int128 *)sub_1409DB470(a1: v57 + 1);
      *(_QWORD *)&v121 = v60;
    }
  }
LABEL_123:
  v122 = v54 + 11;
  v123 = v57;
  sub_140E82100(a1: v60, a2: v55, a3: v54);
  qmemcpy((char *)v60 + v54, "isReference", 11);
  *((_BYTE *)v60 + v56) = 0;
  v61 = &v121;
  if ( v123 > 0xF )
    v61 = (__int128 *)v121;
  v62 = sub_140062160(a1: v61);
  sub_140062D10(
    a1: (unsigned int)&dword_1413AB674,
    a2: v62,
    a3: (_DWORD)v53,
    a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Nebula\\inclu"
                  "de\\Nebula/Script/Binary/PXNebulaScriptBinary.h",
    a5: 25);
  if ( v123 > 0xF )
  {
    v63 = (void *)v121;
    if ( v123 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v121 - *(_QWORD *)(v121 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v63 = *(void **)(v121 - 8);
    }
    sub_1409DB4C0(lpMem: v63);
  }
  *(_QWORD *)&v121 = 19937;
  v5 = nullptr;
  v122 = 0;
  v123 = 31;
  if ( v126 > 0xF )
  {
    v64 = (void *)v124;
    if ( v126 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v124 - *(_QWORD *)(v124 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v64 = *(void **)(v124 - 8);
    }
    sub_1409DB4C0(lpMem: v64);
  }
  sub_1409DBB40(a1: &dword_1413AB678);
  v2 = v120;
  v3 = v118;
LABEL_5:
  LODWORD(v117) = dword_1413AB674;
  v6 = v119;
  if ( *(_DWORD *)v2 != 0 )
  {
    if ( *(_BYTE *)(v2 + 62) != 0 )
    {
      if ( *(_BYTE *)(v119 + 40) == 0 )
        goto LABEL_14;
    }
    else if ( *(_BYTE *)(v119 + 40) == 0 )
    {
      goto LABEL_14;
    }
    v7 = sub_140076FF0();
    sub_140084F80(a1: v2, a2: (unsigned int)&v117, a3: v6 + 40, a4: 1, a5: v7);
    goto LABEL_14;
  }
  if ( (unsigned __int8)sub_1400852F0(a1: v2, a2: (int)v119 + 40, a3: (unsigned int)&v117, a4: 1, a5: 512) == 0 )
    *(_BYTE *)(v6 + 40) = 0;
LABEL_14:
  if ( dword_1413AB680 <= *((_DWORD *)v3 + 19) )
    goto LABEL_15;
  sub_1409DBBB0(a1: &dword_1413AB680);
  if ( dword_1413AB680 != -1 )
    goto LABEL_15;
  v69 = qword_1413142E8;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_1413142E8) < 9 )
    sub_14001B680(a1: v66, a2: v65);
  v70 = aInstancedtype;
  if ( (unsigned __int64)qword_1413142F0 > 0xF )
    v70 = *(char **)aInstancedtype;
  v124 = 0;
  v125 = 0;
  v126 = 0;
  v71 = qword_1413142E8 + 9;
  if ( (unsigned __int64)(qword_1413142E8 + 9) <= 0xF )
  {
    v72 = 15;
    v5 = &v124;
    goto LABEL_158;
  }
  v72 = v71 | 0xF;
  if ( (v71 | 0xFuLL) <= 0x7FFFFFFFFFFFFFFFLL )
  {
    if ( v72 < 0x16 )
      v72 = 22;
    if ( v72 != -1 )
    {
      if ( v72 + 1 >= 0x1000 )
      {
        v73 = v72 + 40;
        if ( v72 + 40 < v72 + 1 )
        {
          sub_14001B170(a1: v73, a2: v65, a3: v67, a4: v68);
          __debugbreak();
        }
        goto LABEL_146;
      }
      v5 = (__int128 *)sub_1409DB470(a1: v72 + 1);
    }
    *(_QWORD *)&v124 = v5;
    goto LABEL_158;
  }
  v72 = 0x7FFFFFFFFFFFFFFFLL;
  v73 = 0x8000000000000027uLL;
LABEL_146:
  v74 = sub_1409DB470(a1: v73);
  if ( v74 == 0 )
    __fastfail(5u);
  v5 = (__int128 *)((v74 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
  *((_QWORD *)v5 - 1) = v74;
  *(_QWORD *)&v124 = v5;
LABEL_158:
  v125 = v69 + 9;
  v126 = v72;
  sub_140E82100(a1: v5, a2: v70, a3: v69);
  *(_QWORD *)((char *)v5 + v69) = 0x65746E696F507369LL;
  *((_BYTE *)v5 + v69 + 8) = 114;
  *((_BYTE *)v5 + v71) = 0;
  v79 = &v124;
  if ( v126 > 0xF )
    v79 = (__int128 *)v124;
  v117 = v79;
  v80 = qword_1413142E8;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_1413142E8) < 9 )
    sub_14001B680(a1: v76, a2: v75);
  v81 = aInstancedtype;
  if ( (unsigned __int64)qword_1413142F0 > 0xF )
    v81 = *(char **)aInstancedtype;
  v121 = 0;
  v122 = 0;
  v123 = 0;
  v82 = qword_1413142E8 + 9;
  if ( (unsigned __int64)(qword_1413142E8 + 9) <= 0xF )
  {
    v83 = 15;
    v86 = &v121;
  }
  else
  {
    v83 = v82 | 0xF;
    if ( (v82 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
    {
      v83 = 0x7FFFFFFFFFFFFFFFLL;
      v84 = 0x8000000000000027uLL;
LABEL_167:
      v85 = sub_1409DB470(a1: v84);
      if ( v85 == 0 )
        __fastfail(5u);
      v86 = (__int128 *)((v85 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *((_QWORD *)v86 - 1) = v85;
      *(_QWORD *)&v121 = v86;
      goto LABEL_179;
    }
    if ( v83 < 0x16 )
      v83 = 22;
    if ( v83 == -1 )
    {
      v86 = nullptr;
      *(_QWORD *)&v121 = 0;
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
        goto LABEL_167;
      }
      v86 = (__int128 *)sub_1409DB470(a1: v83 + 1);
      *(_QWORD *)&v121 = v86;
    }
  }
LABEL_179:
  v122 = v80 + 9;
  v123 = v83;
  sub_140E82100(a1: v86, a2: v81, a3: v80);
  *(_QWORD *)((char *)v86 + v80) = 0x65746E696F507369LL;
  *((_BYTE *)v86 + v80 + 8) = 114;
  *((_BYTE *)v86 + v82) = 0;
  v87 = &v121;
  if ( v123 > 0xF )
    v87 = (__int128 *)v121;
  v88 = sub_140062160(a1: v87);
  sub_140062D10(
    a1: (unsigned int)&dword_1413AB67C,
    a2: v88,
    a3: (_DWORD)v117,
    a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Nebula\\inclu"
                  "de\\Nebula/Script/Binary/PXNebulaScriptBinary.h",
    a5: 26);
  if ( v123 > 0xF )
  {
    v89 = (void *)v121;
    if ( v123 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v121 - *(_QWORD *)(v121 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v89 = *(void **)(v121 - 8);
    }
    sub_1409DB4C0(lpMem: v89);
  }
  *(_QWORD *)&v121 = 19937;
  v5 = nullptr;
  v122 = 0;
  v123 = 31;
  if ( v126 > 0xF )
  {
    v90 = (void *)v124;
    if ( v126 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v124 - *(_QWORD *)(v124 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v90 = *(void **)(v124 - 8);
    }
    sub_1409DB4C0(lpMem: v90);
  }
  sub_1409DBB40(a1: &dword_1413AB680);
  v2 = v120;
  v3 = v118;
LABEL_15:
  LODWORD(v117) = dword_1413AB67C;
  v8 = v119;
  if ( *(_DWORD *)v2 != 0 )
  {
    if ( *(_BYTE *)(v119 + 41) != 0 )
    {
      v9 = sub_140076FF0();
      sub_140084F80(a1: v2, a2: (unsigned int)&v117, a3: v8 + 41, a4: 1, a5: v9);
    }
  }
  else if ( (unsigned __int8)sub_1400852F0(a1: v2, a2: (int)v119 + 41, a3: (unsigned int)&v117, a4: 1, a5: 512) == 0 )
  {
    *(_BYTE *)(v8 + 41) = 0;
  }
  if ( dword_1413AB688 > *((_DWORD *)v3 + 19) )
  {
    sub_1409DBBB0(a1: &dword_1413AB688);
    if ( dword_1413AB688 == -1 )
    {
      v95 = qword_1413142E8;
      if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_1413142E8) < 0x11 )
        sub_14001B680(a1: v92, a2: v91);
      v96 = aInstancedtype;
      if ( (unsigned __int64)qword_1413142F0 > 0xF )
        v96 = *(char **)aInstancedtype;
      v124 = 0;
      v125 = 0;
      v126 = 0;
      v97 = qword_1413142E8 + 17;
      if ( (unsigned __int64)(qword_1413142E8 + 17) <= 0xF )
      {
        v98 = 15;
        v5 = &v124;
        goto LABEL_214;
      }
      v98 = v97 | 0xF;
      if ( (v97 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
      {
        v98 = 0x7FFFFFFFFFFFFFFFLL;
        v99 = 0x8000000000000027uLL;
LABEL_202:
        v100 = sub_1409DB470(a1: v99);
        if ( v100 == 0 )
          __fastfail(5u);
        v5 = (__int128 *)((v100 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *((_QWORD *)v5 - 1) = v100;
        *(_QWORD *)&v124 = v5;
LABEL_214:
        v125 = v95 + 17;
        v126 = v98;
        sub_140E82100(a1: v5, a2: v96, a3: v95);
        qmemcpy((char *)v5 + v95, "templateArguments", 17);
        *((_BYTE *)v5 + v97) = 0;
        v105 = &v124;
        if ( v126 > 0xF )
          LODWORD(v105) = v124;
        v106 = qword_1413142E8;
        if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_1413142E8) < 0x11 )
          sub_14001B680(a1: v102, a2: v101);
        v107 = aInstancedtype;
        if ( (unsigned __int64)qword_1413142F0 > 0xF )
          v107 = *(char **)aInstancedtype;
        v118 = v107;
        v121 = 0;
        v122 = 0;
        v123 = 0;
        v108 = qword_1413142E8 + 17;
        if ( (unsigned __int64)(qword_1413142E8 + 17) <= 0xF )
        {
          v4 = 15;
          v112 = &v121;
        }
        else
        {
          if ( (v108 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
          {
            v109 = 0x8000000000000027uLL;
LABEL_223:
            v110 = sub_1409DB470(a1: v109);
            if ( v110 == 0 )
              __fastfail(5u);
            v112 = (__int128 *)((v110 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
            *((_QWORD *)v112 - 1) = v110;
            v107 = v118;
            *(_QWORD *)&v121 = v112;
            goto LABEL_235;
          }
          v4 = v108 | 0xF;
          if ( (v108 | 0xFuLL) < 0x16 )
            v4 = 22;
          v111 = v4 + 1;
          if ( v4 == -1 )
          {
            v112 = nullptr;
            *(_QWORD *)&v121 = 0;
          }
          else
          {
            if ( v111 >= 0x1000 )
            {
              v109 = v4 + 40;
              if ( v4 + 40 < (unsigned __int64)(v4 + 1) )
              {
                sub_14001B170(a1: v111, a2: v107, a3: v103, a4: v104);
                __debugbreak();
              }
              goto LABEL_223;
            }
            v112 = (__int128 *)sub_1409DB470(a1: v111);
            v107 = v118;
            *(_QWORD *)&v121 = v112;
          }
        }
LABEL_235:
        v122 = v106 + 17;
        v123 = v4;
        sub_140E82100(a1: v112, a2: v107, a3: v106);
        qmemcpy((char *)v112 + v106, "templateArguments", 17);
        *((_BYTE *)v112 + v108) = 0;
        v113 = &v121;
        if ( v123 > 0xF )
          v113 = (__int128 *)v121;
        v114 = sub_140062160(a1: v113);
        sub_140062D10(
          a1: (unsigned int)&dword_1413AB684,
          a2: v114,
          a3: (_DWORD)v105,
          a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Nebula\\"
                        "include\\Nebula/Script/Binary/PXNebulaScriptBinary.h",
          a5: 27);
        if ( v123 > 0xF )
        {
          v115 = (void *)v121;
          if ( v123 + 1 >= 0x1000 )
          {
            if ( (unsigned __int64)(v121 - *(_QWORD *)(v121 - 8) - 8) > 0x1F )
              __fastfail(5u);
            v115 = *(void **)(v121 - 8);
          }
          sub_1409DB4C0(lpMem: v115);
        }
        *(_QWORD *)&v121 = 19937;
        v122 = 0;
        v123 = 31;
        if ( v126 > 0xF )
        {
          v116 = (void *)v124;
          if ( v126 + 1 >= 0x1000 )
          {
            if ( (unsigned __int64)(v124 - *(_QWORD *)(v124 - 8) - 8) > 0x1F )
              __fastfail(5u);
            v116 = *(void **)(v124 - 8);
          }
          sub_1409DB4C0(lpMem: v116);
        }
        sub_1409DBB40(a1: &dword_1413AB688);
        goto LABEL_21;
      }
      if ( v98 < 0x16 )
        v98 = 22;
      if ( v98 != -1 )
      {
        if ( v98 + 1 >= 0x1000 )
        {
          v99 = v98 + 40;
          if ( v98 + 40 < v98 + 1 )
          {
            sub_14001B170(a1: v99, a2: v91, a3: v93, a4: v94);
            __debugbreak();
          }
          goto LABEL_202;
        }
        v5 = (__int128 *)sub_1409DB470(a1: v98 + 1);
      }
      *(_QWORD *)&v124 = v5;
      goto LABEL_214;
    }
  }
LABEL_21:
  LODWORD(v117) = dword_1413AB684;
  return sub_140873250(a1: v2, a2: &v117, a3: v119 + 48);
}