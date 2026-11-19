__int64 __fastcall sub_140879510(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  char *v4; // r15
  __int64 v5; // rbx
  __int64 v6; // rcx
  char v7; // al
  __int128 *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r15
  char *v16; // r13
  __int64 v17; // r12
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  __int128 *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int128 *v26; // rax
  __int64 v27; // r13
  char *v28; // r12
  __int64 v29; // r15
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
  __int64 v42; // r15
  char *v43; // r13
  __int64 v44; // r12
  unsigned __int64 v45; // rdi
  unsigned __int64 v46; // rcx
  __int64 v47; // rax
  __int128 *v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int128 *v53; // rax
  __int64 v54; // r13
  char *v55; // r12
  __int64 v56; // r15
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
  __int64 v95; // r15
  char *v96; // r13
  __int64 v97; // r12
  unsigned __int64 v98; // rdi
  unsigned __int64 v99; // rcx
  __int64 v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  __int128 *v105; // r12
  __int64 v106; // r15
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
  __int128 *v117; // [rsp+30h] [rbp-39h] BYREF
  char *v118; // [rsp+38h] [rbp-31h]
  __int64 v119; // [rsp+40h] [rbp-29h]
  __int128 v120; // [rsp+48h] [rbp-21h] BYREF
  __int64 v121; // [rsp+58h] [rbp-11h]
  unsigned __int64 v122; // [rsp+60h] [rbp-9h]
  __int128 v123; // [rsp+68h] [rbp-1h] BYREF
  __int64 v124; // [rsp+78h] [rbp+Fh]
  unsigned __int64 v125; // [rsp+80h] [rbp+17h]

  v3 = a1;
  v119 = a1;
  v4 = *((char **)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  v118 = v4;
  if ( dword_1413AB6BC > *((_DWORD *)v4 + 19) )
  {
    sub_1409DBBB0(a1: &dword_1413AB6BC);
    if ( dword_1413AB6BC == -1 )
    {
      sub_1409DB700(a1: sub_140EE2FA0);
      sub_1409DBB40(a1: &dword_1413AB6BC);
    }
  }
  v5 = 0x7FFFFFFFFFFFFFFFLL;
  v6 = 76;
  if ( dword_1413AB6C4 > *((_DWORD *)v4 + 19) )
  {
    sub_1409DBBB0(a1: &dword_1413AB6C4);
    if ( dword_1413AB6C4 == -1 )
    {
      v15 = qword_141314348;
      if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314348) < 0xB )
        sub_14001B680(a1: v6, a2);
      v16 = aProperty;
      if ( (unsigned __int64)qword_141314350 > 0xF )
        v16 = *(char **)aProperty;
      v123 = 0;
      v124 = 0;
      v125 = 0;
      v17 = qword_141314348 + 11;
      if ( (unsigned __int64)(qword_141314348 + 11) <= 0xF )
      {
        v18 = 15;
        v21 = &v123;
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
            *(_QWORD *)&v123 = 0;
            goto LABEL_50;
          }
          if ( v18 + 1 < 0x1000 )
          {
            v21 = (__int128 *)sub_1409DB470(a1: v18 + 1);
            *(_QWORD *)&v123 = v21;
            goto LABEL_50;
          }
          v19 = v18 + 40;
          if ( v18 + 40 < v18 + 1 )
          {
            sub_14001B170(a1: v19, a2, a3: v13, a4: v14);
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
        *(_QWORD *)&v123 = v21;
      }
LABEL_50:
      v124 = v15 + 11;
      v125 = v18;
      sub_140E82100(a1: v21, a2: v16, a3: v15);
      qmemcpy((char *)v21 + v15, "accessLevel", 11);
      *((_BYTE *)v21 + v17) = 0;
      v26 = &v123;
      if ( v125 > 0xF )
        v26 = (__int128 *)v123;
      v117 = v26;
      v27 = qword_141314348;
      if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314348) < 0xB )
        sub_14001B680(a1: v23, a2: v22);
      v28 = aProperty;
      if ( (unsigned __int64)qword_141314350 > 0xF )
        v28 = *(char **)aProperty;
      v120 = 0;
      v121 = 0;
      v122 = 0;
      v29 = qword_141314348 + 11;
      if ( (unsigned __int64)(qword_141314348 + 11) <= 0xF )
      {
        v30 = 15;
        v33 = &v120;
      }
      else
      {
        v30 = v29 | 0xF;
        if ( (v29 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
        {
          v30 = 0x7FFFFFFFFFFFFFFFLL;
          v31 = 0x8000000000000027uLL;
LABEL_59:
          v32 = sub_1409DB470(a1: v31);
          if ( v32 == 0 )
            __fastfail(5u);
          v33 = (__int128 *)((v32 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
          *((_QWORD *)v33 - 1) = v32;
          *(_QWORD *)&v120 = v33;
          goto LABEL_71;
        }
        if ( v30 < 0x16 )
          v30 = 22;
        if ( v30 == -1 )
        {
          v33 = nullptr;
          *(_QWORD *)&v120 = 0;
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
            goto LABEL_59;
          }
          v33 = (__int128 *)sub_1409DB470(a1: v30 + 1);
          *(_QWORD *)&v120 = v33;
        }
      }
LABEL_71:
      v121 = v27 + 11;
      v122 = v30;
      sub_140E82100(a1: v33, a2: v28, a3: v27);
      qmemcpy((char *)v33 + v27, "accessLevel", 11);
      *((_BYTE *)v33 + v29) = 0;
      v34 = &v120;
      if ( v122 > 0xF )
        v34 = (__int128 *)v120;
      v35 = sub_140062160(a1: v34);
      sub_140062D10(
        a1: (unsigned int)&dword_1413AB6C0,
        a2: v35,
        a3: (_DWORD)v117,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Nebula\\i"
                      "nclude\\Nebula/Script/Binary/PXNebulaScriptBinary.h",
        a5: 73);
      if ( v122 > 0xF )
      {
        v36 = (void *)v120;
        if ( v122 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v120 - *(_QWORD *)(v120 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v36 = *(void **)(v120 - 8);
        }
        sub_1409DB4C0(lpMem: v36);
      }
      *(_QWORD *)&v120 = 19937;
      v121 = 0;
      v122 = 31;
      if ( v125 > 0xF )
      {
        v37 = (void *)v123;
        if ( v125 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v123 - *(_QWORD *)(v123 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v37 = *(void **)(v123 - 8);
        }
        sub_1409DB4C0(lpMem: v37);
      }
      sub_1409DBB40(a1: &dword_1413AB6C4);
      v4 = v118;
      v3 = v119;
    }
  }
  LODWORD(v117) = dword_1413AB6C0;
  if ( *(_DWORD *)a2 != 0 )
  {
    if ( *(_DWORD *)(v3 + 8) != 0 )
    {
      v7 = sub_14001A520(a1: v6, a2);
      sub_140084F80(a1: a2, a2: (unsigned int)&v117, a3: v3 + 8, a4: 4, a5: v7);
    }
  }
  else if ( (unsigned __int8)sub_1400852F0(a1: a2, a2: (int)v3 + 8, a3: (unsigned int)&v117, a4: 4, a5: 512) == 0 )
  {
    *(_DWORD *)(v3 + 8) = 0;
  }
  if ( dword_1413AB6CC <= *((_DWORD *)v4 + 19) || (sub_1409DBBB0(a1: &dword_1413AB6CC), dword_1413AB6CC != -1) )
  {
    v8 = nullptr;
    goto LABEL_10;
  }
  v42 = qword_141314348;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314348) < 4 )
    sub_14001B680(a1: v39, a2: v38);
  v43 = aProperty;
  if ( (unsigned __int64)qword_141314350 > 0xF )
    v43 = *(char **)aProperty;
  v123 = 0;
  v124 = 0;
  v125 = 0;
  v44 = qword_141314348 + 4;
  if ( (unsigned __int64)(qword_141314348 + 4) <= 0xF )
  {
    v45 = 15;
    v48 = &v123;
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
        *(_QWORD *)&v123 = 0;
        goto LABEL_106;
      }
      if ( v45 + 1 < 0x1000 )
      {
        v48 = (__int128 *)sub_1409DB470(a1: v45 + 1);
        *(_QWORD *)&v123 = v48;
        goto LABEL_106;
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
    *(_QWORD *)&v123 = v48;
  }
LABEL_106:
  v124 = v42 + 4;
  v125 = v45;
  sub_140E82100(a1: v48, a2: v43, a3: v42);
  *(_DWORD *)((char *)v48 + v42) = *(_DWORD *)"type";
  *((_BYTE *)v48 + v44) = 0;
  v53 = &v123;
  if ( v125 > 0xF )
    v53 = (__int128 *)v123;
  v117 = v53;
  v54 = qword_141314348;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314348) < 4 )
    sub_14001B680(a1: v50, a2: v49);
  v55 = aProperty;
  if ( (unsigned __int64)qword_141314350 > 0xF )
    v55 = *(char **)aProperty;
  v120 = 0;
  v121 = 0;
  v122 = 0;
  v56 = qword_141314348 + 4;
  if ( (unsigned __int64)(qword_141314348 + 4) <= 0xF )
  {
    v57 = 15;
    v60 = &v120;
  }
  else
  {
    v57 = v56 | 0xF;
    if ( (v56 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
    {
      v57 = 0x7FFFFFFFFFFFFFFFLL;
      v58 = 0x8000000000000027uLL;
LABEL_115:
      v59 = sub_1409DB470(a1: v58);
      if ( v59 == 0 )
        __fastfail(5u);
      v60 = (__int128 *)((v59 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *((_QWORD *)v60 - 1) = v59;
      *(_QWORD *)&v120 = v60;
      goto LABEL_127;
    }
    if ( v57 < 0x16 )
      v57 = 22;
    if ( v57 == -1 )
    {
      v60 = nullptr;
      *(_QWORD *)&v120 = 0;
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
        goto LABEL_115;
      }
      v60 = (__int128 *)sub_1409DB470(a1: v57 + 1);
      *(_QWORD *)&v120 = v60;
    }
  }
LABEL_127:
  v121 = v54 + 4;
  v122 = v57;
  sub_140E82100(a1: v60, a2: v55, a3: v54);
  *(_DWORD *)((char *)v60 + v54) = *(_DWORD *)"type";
  *((_BYTE *)v60 + v56) = 0;
  v61 = &v120;
  if ( v122 > 0xF )
    v61 = (__int128 *)v120;
  v62 = sub_140062160(a1: v61);
  sub_140062D10(
    a1: (unsigned int)&dword_1413AB6C8,
    a2: v62,
    a3: (_DWORD)v117,
    a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Nebula\\inclu"
                  "de\\Nebula/Script/Binary/PXNebulaScriptBinary.h",
    a5: 74);
  if ( v122 > 0xF )
  {
    v63 = (void *)v120;
    if ( v122 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v120 - *(_QWORD *)(v120 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v63 = *(void **)(v120 - 8);
    }
    sub_1409DB4C0(lpMem: v63);
  }
  *(_QWORD *)&v120 = 19937;
  v8 = nullptr;
  v121 = 0;
  v122 = 31;
  if ( v125 > 0xF )
  {
    v64 = (void *)v123;
    if ( v125 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v123 - *(_QWORD *)(v123 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v64 = *(void **)(v123 - 8);
    }
    sub_1409DB4C0(lpMem: v64);
  }
  sub_1409DBB40(a1: &dword_1413AB6CC);
  v4 = v118;
  v3 = v119;
LABEL_10:
  LODWORD(v117) = dword_1413AB6C8;
  if ( *(_DWORD *)a2 != 0 )
  {
    sub_140084D50(a1: a2, a2: &v117);
  }
  else if ( sub_140030D50(a1: a2, a2: &v117, a3: 256) == 0 )
  {
    goto LABEL_17;
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v3 + 16) + 8LL))(a1: v3 + 16, a2);
  v9 = *(_QWORD *)(a2 + 24);
  if ( v9 == 0 )
    v9 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL);
  *(_QWORD *)(a2 + 40) = *(unsigned int *)(v9 + 12LL * *(_QWORD *)(a2 + 40) + 4);
LABEL_17:
  if ( dword_1413AB6D4 <= *((_DWORD *)v4 + 19) )
    goto LABEL_18;
  sub_1409DBBB0(a1: &dword_1413AB6D4);
  if ( dword_1413AB6D4 != -1 )
    goto LABEL_18;
  v69 = qword_141314348;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314348) < 4 )
    sub_14001B680(a1: v66, a2: v65);
  v70 = aProperty;
  if ( (unsigned __int64)qword_141314350 > 0xF )
    v70 = *(char **)aProperty;
  v123 = 0;
  v124 = 0;
  v125 = 0;
  v71 = qword_141314348 + 4;
  if ( (unsigned __int64)(qword_141314348 + 4) <= 0xF )
  {
    v72 = 15;
    v8 = &v123;
    goto LABEL_162;
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
        goto LABEL_150;
      }
      v8 = (__int128 *)sub_1409DB470(a1: v72 + 1);
    }
    *(_QWORD *)&v123 = v8;
    goto LABEL_162;
  }
  v72 = 0x7FFFFFFFFFFFFFFFLL;
  v73 = 0x8000000000000027uLL;
LABEL_150:
  v74 = sub_1409DB470(a1: v73);
  if ( v74 == 0 )
    __fastfail(5u);
  v8 = (__int128 *)((v74 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
  *((_QWORD *)v8 - 1) = v74;
  *(_QWORD *)&v123 = v8;
LABEL_162:
  v124 = v69 + 4;
  v125 = v72;
  sub_140E82100(a1: v8, a2: v70, a3: v69);
  *(_DWORD *)((char *)v8 + v69) = *(_DWORD *)"name";
  *((_BYTE *)v8 + v71) = 0;
  v79 = &v123;
  if ( v125 > 0xF )
    v79 = (__int128 *)v123;
  v117 = v79;
  v80 = qword_141314348;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314348) < 4 )
    sub_14001B680(a1: v76, a2: v75);
  v81 = aProperty;
  if ( (unsigned __int64)qword_141314350 > 0xF )
    v81 = *(char **)aProperty;
  v120 = 0;
  v121 = 0;
  v122 = 0;
  v82 = qword_141314348 + 4;
  if ( (unsigned __int64)(qword_141314348 + 4) <= 0xF )
  {
    v83 = 15;
    v86 = &v120;
  }
  else
  {
    v83 = v82 | 0xF;
    if ( (v82 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
    {
      v83 = 0x7FFFFFFFFFFFFFFFLL;
      v84 = 0x8000000000000027uLL;
LABEL_171:
      v85 = sub_1409DB470(a1: v84);
      if ( v85 == 0 )
        __fastfail(5u);
      v86 = (__int128 *)((v85 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *((_QWORD *)v86 - 1) = v85;
      *(_QWORD *)&v120 = v86;
      goto LABEL_183;
    }
    if ( v83 < 0x16 )
      v83 = 22;
    if ( v83 == -1 )
    {
      v86 = nullptr;
      *(_QWORD *)&v120 = 0;
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
        goto LABEL_171;
      }
      v86 = (__int128 *)sub_1409DB470(a1: v83 + 1);
      *(_QWORD *)&v120 = v86;
    }
  }
LABEL_183:
  v121 = v80 + 4;
  v122 = v83;
  sub_140E82100(a1: v86, a2: v81, a3: v80);
  *(_DWORD *)((char *)v86 + v80) = *(_DWORD *)"name";
  *((_BYTE *)v86 + v82) = 0;
  v87 = &v120;
  if ( v122 > 0xF )
    v87 = (__int128 *)v120;
  v88 = sub_140062160(a1: v87);
  sub_140062D10(
    a1: (unsigned int)&dword_1413AB6D0,
    a2: v88,
    a3: (_DWORD)v117,
    a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Nebula\\inclu"
                  "de\\Nebula/Script/Binary/PXNebulaScriptBinary.h",
    a5: 75);
  if ( v122 > 0xF )
  {
    v89 = (void *)v120;
    if ( v122 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v120 - *(_QWORD *)(v120 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v89 = *(void **)(v120 - 8);
    }
    sub_1409DB4C0(lpMem: v89);
  }
  *(_QWORD *)&v120 = 19937;
  v8 = nullptr;
  v121 = 0;
  v122 = 31;
  if ( v125 > 0xF )
  {
    v90 = (void *)v123;
    if ( v125 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v123 - *(_QWORD *)(v123 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v90 = *(void **)(v123 - 8);
    }
    sub_1409DB4C0(lpMem: v90);
  }
  sub_1409DBB40(a1: &dword_1413AB6D4);
  v4 = v118;
LABEL_18:
  LODWORD(v117) = dword_1413AB6D0;
  v10 = v119;
  sub_140085740(a1: a2, a2: &v117, a3: v119 + 88, a4: &byte_140EEC5C5);
  if ( dword_1413AB6DC <= *((_DWORD *)v4 + 19) )
    goto LABEL_19;
  sub_1409DBBB0(a1: &dword_1413AB6DC);
  if ( dword_1413AB6DC != -1 )
    goto LABEL_19;
  v95 = qword_141314348;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314348) < 0xA )
    sub_14001B680(a1: v92, a2: v91);
  v96 = aProperty;
  if ( (unsigned __int64)qword_141314350 > 0xF )
    v96 = *(char **)aProperty;
  v123 = 0;
  v124 = 0;
  v125 = 0;
  v97 = qword_141314348 + 10;
  if ( (unsigned __int64)(qword_141314348 + 10) <= 0xF )
  {
    v98 = 15;
    v8 = &v123;
    goto LABEL_218;
  }
  v98 = v97 | 0xF;
  if ( (v97 | 0xFuLL) <= 0x7FFFFFFFFFFFFFFFLL )
  {
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
        goto LABEL_206;
      }
      v8 = (__int128 *)sub_1409DB470(a1: v98 + 1);
    }
    *(_QWORD *)&v123 = v8;
    goto LABEL_218;
  }
  v98 = 0x7FFFFFFFFFFFFFFFLL;
  v99 = 0x8000000000000027uLL;
LABEL_206:
  v100 = sub_1409DB470(a1: v99);
  if ( v100 == 0 )
    __fastfail(5u);
  v8 = (__int128 *)((v100 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
  *((_QWORD *)v8 - 1) = v100;
  *(_QWORD *)&v123 = v8;
LABEL_218:
  v124 = v95 + 10;
  v125 = v98;
  sub_140E82100(a1: v8, a2: v96, a3: v95);
  qmemcpy((char *)v8 + v95, "attributes", 10);
  *((_BYTE *)v8 + v97) = 0;
  v105 = &v123;
  if ( v125 > 0xF )
    LODWORD(v105) = v123;
  v106 = qword_141314348;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314348) < 0xA )
    sub_14001B680(a1: v102, a2: v101);
  v107 = aProperty;
  if ( (unsigned __int64)qword_141314350 > 0xF )
    v107 = *(char **)aProperty;
  v118 = v107;
  v120 = 0;
  v121 = 0;
  v122 = 0;
  v108 = qword_141314348 + 10;
  if ( (unsigned __int64)(qword_141314348 + 10) <= 0xF )
  {
    v5 = 15;
    v112 = &v120;
  }
  else
  {
    if ( (v108 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
    {
      v109 = 0x8000000000000027uLL;
LABEL_227:
      v110 = sub_1409DB470(a1: v109);
      if ( v110 == 0 )
        __fastfail(5u);
      v112 = (__int128 *)((v110 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *((_QWORD *)v112 - 1) = v110;
      v107 = v118;
      *(_QWORD *)&v120 = v112;
      goto LABEL_239;
    }
    v5 = v108 | 0xF;
    if ( (v108 | 0xFuLL) < 0x16 )
      v5 = 22;
    v111 = v5 + 1;
    if ( v5 == -1 )
    {
      v112 = nullptr;
      *(_QWORD *)&v120 = 0;
    }
    else
    {
      if ( v111 >= 0x1000 )
      {
        v109 = v5 + 40;
        if ( v5 + 40 < (unsigned __int64)(v5 + 1) )
        {
          sub_14001B170(a1: v111, a2: v107, a3: v103, a4: v104);
          __debugbreak();
        }
        goto LABEL_227;
      }
      v112 = (__int128 *)sub_1409DB470(a1: v111);
      v107 = v118;
      *(_QWORD *)&v120 = v112;
    }
  }
LABEL_239:
  v121 = v106 + 10;
  v122 = v5;
  sub_140E82100(a1: v112, a2: v107, a3: v106);
  qmemcpy((char *)v112 + v106, "attributes", 10);
  *((_BYTE *)v112 + v108) = 0;
  v113 = &v120;
  if ( v122 > 0xF )
    v113 = (__int128 *)v120;
  v114 = sub_140062160(a1: v113);
  sub_140062D10(
    a1: (unsigned int)&dword_1413AB6D8,
    a2: v114,
    a3: (_DWORD)v105,
    a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Nebula\\inclu"
                  "de\\Nebula/Script/Binary/PXNebulaScriptBinary.h",
    a5: 76);
  if ( v122 > 0xF )
  {
    v115 = (void *)v120;
    if ( v122 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v120 - *(_QWORD *)(v120 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v115 = *(void **)(v120 - 8);
    }
    sub_1409DB4C0(lpMem: v115);
  }
  *(_QWORD *)&v120 = 19937;
  v121 = 0;
  v122 = 31;
  if ( v125 > 0xF )
  {
    v116 = (void *)v123;
    if ( v125 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v123 - *(_QWORD *)(v123 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v116 = *(void **)(v123 - 8);
    }
    sub_1409DB4C0(lpMem: v116);
  }
  sub_1409DBB40(a1: &dword_1413AB6DC);
  v10 = v119;
LABEL_19:
  LODWORD(v117) = dword_1413AB6D8;
  if ( *(_DWORD *)a2 != 0 )
  {
    sub_140084D50(a1: a2, a2: &v117);
  }
  else
  {
    result = sub_140030D50(a1: a2, a2: &v117, a3: 256);
    if ( result == 0 )
      return result;
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v10 + 120) + 8LL))(a1: v10 + 120, a2);
  v12 = *(_QWORD *)(a2 + 24);
  if ( v12 == 0 )
    v12 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL);
  result = *(unsigned int *)(v12 + 12LL * *(_QWORD *)(a2 + 40) + 4);
  *(_QWORD *)(a2 + 40) = result;
  return result;
}