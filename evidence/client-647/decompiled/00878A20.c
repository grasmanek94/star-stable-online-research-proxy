__int64 __fastcall sub_140878A20(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r14
  char *v10; // r12
  __int64 v11; // r15
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  __int128 *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int128 *v20; // r12
  __int64 v21; // r13
  char *v22; // r15
  __int64 v23; // r14
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  __int128 *v27; // rsi
  __int128 *v28; // rcx
  int v29; // eax
  void *v30; // rcx
  void *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // r14
  char *v37; // r12
  __int64 v38; // r15
  unsigned __int64 v39; // rdi
  unsigned __int64 v40; // rcx
  __int64 v41; // rax
  __int128 *v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int128 *v47; // r12
  __int64 v48; // r13
  char *v49; // r15
  __int64 v50; // r14
  unsigned __int64 v51; // rdi
  unsigned __int64 v52; // rcx
  __int64 v53; // rax
  __int128 *v54; // rsi
  __int128 *v55; // rcx
  int v56; // eax
  void *v57; // rcx
  void *v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // r14
  char *v64; // r13
  char *v65; // r12
  __int64 v66; // r15
  unsigned __int64 v67; // rdi
  unsigned __int64 v68; // rcx
  __int64 v69; // rax
  __int128 *v70; // rsi
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int128 *v75; // r15
  __int64 v76; // r14
  __int64 v77; // rsi
  unsigned __int64 v78; // rax
  __int64 v79; // rax
  unsigned __int64 v80; // rcx
  __int128 *v81; // rdi
  __int128 *v82; // rcx
  int v83; // eax
  void *v84; // rcx
  void *v85; // rcx
  int v86; // [rsp+30h] [rbp-49h] BYREF
  __int64 v87; // [rsp+38h] [rbp-41h]
  __int64 v88; // [rsp+40h] [rbp-39h]
  __int64 v89; // [rsp+48h] [rbp-31h]
  __int128 v90; // [rsp+50h] [rbp-29h] BYREF
  __int64 v91; // [rsp+60h] [rbp-19h]
  unsigned __int64 v92; // [rsp+68h] [rbp-11h]
  __int128 v93; // [rsp+70h] [rbp-9h] BYREF
  __int64 v94; // [rsp+80h] [rbp+7h]
  unsigned __int64 v95; // [rsp+88h] [rbp+Fh]

  v88 = a2;
  v87 = a1;
  v2 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  v89 = v2;
  if ( dword_1413AB72C > *(_DWORD *)(v2 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413AB72C);
    if ( dword_1413AB72C == -1 )
    {
      sub_1409DB700(a1: sub_140EE2F30);
      sub_1409DBB40(a1: &dword_1413AB72C);
    }
  }
  v3 = 0x7FFFFFFFFFFFFFFFLL;
  if ( dword_1413AB734 > *(_DWORD *)(v2 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413AB734);
    if ( dword_1413AB734 == -1 )
    {
      v9 = qword_141314388;
      if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314388) < 4 )
        sub_14001B680(a1: v6, a2: v5);
      v10 = aBinarymodule;
      if ( (unsigned __int64)qword_141314390 > 0xF )
        v10 = *(char **)aBinarymodule;
      v93 = 0;
      v94 = 0;
      v95 = 0;
      v11 = qword_141314388 + 4;
      if ( (unsigned __int64)(qword_141314388 + 4) <= 0xF )
      {
        v12 = 15;
        v15 = &v93;
      }
      else
      {
        v12 = v11 | 0xF;
        if ( (v11 | 0xFuLL) <= 0x7FFFFFFFFFFFFFFFLL )
        {
          if ( v12 < 0x16 )
            v12 = 22;
          if ( v12 == -1 )
          {
            v15 = nullptr;
            *(_QWORD *)&v93 = 0;
            goto LABEL_30;
          }
          if ( v12 + 1 < 0x1000 )
          {
            v15 = (__int128 *)sub_1409DB470(a1: v12 + 1);
            *(_QWORD *)&v93 = v15;
            goto LABEL_30;
          }
          v13 = v12 + 40;
          if ( v12 + 40 < v12 + 1 )
          {
            sub_14001B170(a1: v13, a2: v5, a3: v7, a4: v8);
            __debugbreak();
          }
        }
        else
        {
          v12 = 0x7FFFFFFFFFFFFFFFLL;
          v13 = 0x8000000000000027uLL;
        }
        v14 = sub_1409DB470(a1: v13);
        if ( v14 == 0 )
          __fastfail(5u);
        v15 = (__int128 *)((v14 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *((_QWORD *)v15 - 1) = v14;
        *(_QWORD *)&v93 = v15;
      }
LABEL_30:
      v94 = v9 + 4;
      v95 = v12;
      sub_140E82100(a1: v15, a2: v10, a3: v9);
      *(_DWORD *)((char *)v15 + v9) = *(_DWORD *)"name";
      *((_BYTE *)v15 + v11) = 0;
      v20 = &v93;
      if ( v95 > 0xF )
        LODWORD(v20) = v93;
      v21 = qword_141314388;
      if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314388) < 4 )
        sub_14001B680(a1: v17, a2: v16);
      v22 = aBinarymodule;
      if ( (unsigned __int64)qword_141314390 > 0xF )
        v22 = *(char **)aBinarymodule;
      v90 = 0;
      v91 = 0;
      v92 = 0;
      v23 = qword_141314388 + 4;
      if ( (unsigned __int64)(qword_141314388 + 4) <= 0xF )
      {
        v24 = 15;
        v27 = &v90;
      }
      else
      {
        v24 = v23 | 0xF;
        if ( (v23 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
        {
          v24 = 0x7FFFFFFFFFFFFFFFLL;
          v25 = 0x8000000000000027uLL;
LABEL_39:
          v26 = sub_1409DB470(a1: v25);
          if ( v26 == 0 )
            __fastfail(5u);
          v27 = (__int128 *)((v26 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
          *((_QWORD *)v27 - 1) = v26;
          *(_QWORD *)&v90 = v27;
          goto LABEL_51;
        }
        if ( v24 < 0x16 )
          v24 = 22;
        if ( v24 == -1 )
        {
          v27 = nullptr;
          *(_QWORD *)&v90 = 0;
        }
        else
        {
          if ( v24 + 1 >= 0x1000 )
          {
            v25 = v24 + 40;
            if ( v24 + 40 < v24 + 1 )
            {
              sub_14001B170(a1: v25, a2: v16, a3: v18, a4: v19);
              __debugbreak();
            }
            goto LABEL_39;
          }
          v27 = (__int128 *)sub_1409DB470(a1: v24 + 1);
          *(_QWORD *)&v90 = v27;
        }
      }
LABEL_51:
      v91 = v21 + 4;
      v92 = v24;
      sub_140E82100(a1: v27, a2: v22, a3: v21);
      *(_DWORD *)((char *)v27 + v21) = *(_DWORD *)"name";
      *((_BYTE *)v27 + v23) = 0;
      v28 = &v90;
      if ( v92 > 0xF )
        v28 = (__int128 *)v90;
      v29 = sub_140062160(a1: v28);
      sub_140062D10(
        a1: (unsigned int)&dword_1413AB730,
        a2: v29,
        a3: (_DWORD)v20,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Nebula\\i"
                      "nclude\\Nebula/Script/Binary/PXNebulaScriptBinary.h",
        a5: 131);
      if ( v92 > 0xF )
      {
        v30 = (void *)v90;
        if ( v92 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v90 - *(_QWORD *)(v90 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v30 = *(void **)(v90 - 8);
        }
        sub_1409DB4C0(lpMem: v30);
      }
      *(_QWORD *)&v90 = 19937;
      v91 = 0;
      v92 = 31;
      if ( v95 > 0xF )
      {
        v31 = (void *)v93;
        if ( v95 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v93 - *(_QWORD *)(v93 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v31 = *(void **)(v93 - 8);
        }
        sub_1409DB4C0(lpMem: v31);
      }
      sub_1409DBB40(a1: &dword_1413AB734);
      v2 = v89;
    }
  }
  v86 = dword_1413AB730;
  sub_140085740(a1: v88, a2: &v86, a3: v87 + 8, a4: &byte_140EEC5C5);
  if ( dword_1413AB73C <= *(_DWORD *)(v2 + 76) )
    goto LABEL_4;
  sub_1409DBBB0(a1: &dword_1413AB73C);
  if ( dword_1413AB73C != -1 )
    goto LABEL_4;
  v36 = qword_141314388;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314388) < 5 )
    sub_14001B680(a1: v33, a2: v32);
  v37 = aBinarymodule;
  if ( (unsigned __int64)qword_141314390 > 0xF )
    v37 = *(char **)aBinarymodule;
  v93 = 0;
  v94 = 0;
  v95 = 0;
  v38 = qword_141314388 + 5;
  if ( (unsigned __int64)(qword_141314388 + 5) <= 0xF )
  {
    v39 = 15;
    v42 = &v93;
  }
  else
  {
    v39 = v38 | 0xF;
    if ( (v38 | 0xFuLL) <= 0x7FFFFFFFFFFFFFFFLL )
    {
      if ( v39 < 0x16 )
        v39 = 22;
      if ( v39 == -1 )
      {
        v42 = nullptr;
        *(_QWORD *)&v93 = 0;
        goto LABEL_86;
      }
      if ( v39 + 1 < 0x1000 )
      {
        v42 = (__int128 *)sub_1409DB470(a1: v39 + 1);
        *(_QWORD *)&v93 = v42;
        goto LABEL_86;
      }
      v40 = v39 + 40;
      if ( v39 + 40 < v39 + 1 )
      {
        sub_14001B170(a1: v40, a2: v32, a3: v34, a4: v35);
        __debugbreak();
      }
    }
    else
    {
      v39 = 0x7FFFFFFFFFFFFFFFLL;
      v40 = 0x8000000000000027uLL;
    }
    v41 = sub_1409DB470(a1: v40);
    if ( v41 == 0 )
      __fastfail(5u);
    v42 = (__int128 *)((v41 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)v42 - 1) = v41;
    *(_QWORD *)&v93 = v42;
  }
LABEL_86:
  v94 = v36 + 5;
  v95 = v39;
  sub_140E82100(a1: v42, a2: v37, a3: v36);
  *(_DWORD *)((char *)v42 + v36) = 1701869940;
  *((_BYTE *)v42 + v36 + 4) = 115;
  *((_BYTE *)v42 + v38) = 0;
  v47 = &v93;
  if ( v95 > 0xF )
    LODWORD(v47) = v93;
  v48 = qword_141314388;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314388) < 5 )
    sub_14001B680(a1: v44, a2: v43);
  v49 = aBinarymodule;
  if ( (unsigned __int64)qword_141314390 > 0xF )
    v49 = *(char **)aBinarymodule;
  v90 = 0;
  v91 = 0;
  v92 = 0;
  v50 = qword_141314388 + 5;
  if ( (unsigned __int64)(qword_141314388 + 5) <= 0xF )
  {
    v51 = 15;
    v54 = &v90;
  }
  else
  {
    v51 = v50 | 0xF;
    if ( (v50 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
    {
      v51 = 0x7FFFFFFFFFFFFFFFLL;
      v52 = 0x8000000000000027uLL;
LABEL_95:
      v53 = sub_1409DB470(a1: v52);
      if ( v53 == 0 )
        __fastfail(5u);
      v54 = (__int128 *)((v53 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *((_QWORD *)v54 - 1) = v53;
      *(_QWORD *)&v90 = v54;
      goto LABEL_107;
    }
    if ( v51 < 0x16 )
      v51 = 22;
    if ( v51 == -1 )
    {
      v54 = nullptr;
      *(_QWORD *)&v90 = 0;
    }
    else
    {
      if ( v51 + 1 >= 0x1000 )
      {
        v52 = v51 + 40;
        if ( v51 + 40 < v51 + 1 )
        {
          sub_14001B170(a1: v52, a2: v43, a3: v45, a4: v46);
          __debugbreak();
        }
        goto LABEL_95;
      }
      v54 = (__int128 *)sub_1409DB470(a1: v51 + 1);
      *(_QWORD *)&v90 = v54;
    }
  }
LABEL_107:
  v91 = v48 + 5;
  v92 = v51;
  sub_140E82100(a1: v54, a2: v49, a3: v48);
  *(_DWORD *)((char *)v54 + v48) = 1701869940;
  *((_BYTE *)v54 + v48 + 4) = 115;
  *((_BYTE *)v54 + v50) = 0;
  v55 = &v90;
  if ( v92 > 0xF )
    v55 = (__int128 *)v90;
  v56 = sub_140062160(a1: v55);
  sub_140062D10(
    a1: (unsigned int)&dword_1413AB738,
    a2: v56,
    a3: (_DWORD)v47,
    a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Nebula\\inclu"
                  "de\\Nebula/Script/Binary/PXNebulaScriptBinary.h",
    a5: 132);
  if ( v92 > 0xF )
  {
    v57 = (void *)v90;
    if ( v92 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v90 - *(_QWORD *)(v90 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v57 = *(void **)(v90 - 8);
    }
    sub_1409DB4C0(lpMem: v57);
  }
  *(_QWORD *)&v90 = 19937;
  v91 = 0;
  v92 = 31;
  if ( v95 > 0xF )
  {
    v58 = (void *)v93;
    if ( v95 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v93 - *(_QWORD *)(v93 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v58 = *(void **)(v93 - 8);
    }
    sub_1409DB4C0(lpMem: v58);
  }
  sub_1409DBB40(a1: &dword_1413AB73C);
  v2 = v89;
LABEL_4:
  v86 = dword_1413AB738;
  sub_1408739A0(a1: v88, a2: &v86, a3: v87 + 40);
  if ( dword_1413AB744 <= *(_DWORD *)(v2 + 76) )
    goto LABEL_5;
  sub_1409DBBB0(a1: &dword_1413AB744);
  if ( dword_1413AB744 != -1 )
    goto LABEL_5;
  v63 = qword_141314388;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314388) < 0xF )
    sub_14001B680(a1: v60, a2: v59);
  v64 = aBinarymodule;
  v65 = aBinarymodule;
  if ( (unsigned __int64)qword_141314390 > 0xF )
    v65 = *(char **)aBinarymodule;
  v93 = 0;
  v94 = 0;
  v95 = 0;
  v66 = qword_141314388 + 15;
  if ( (unsigned __int64)qword_141314388 >= 0xFFFFFFFFFFFFFFF1uLL || qword_141314388 == 0 )
  {
    v67 = 15;
    v70 = &v93;
  }
  else
  {
    v67 = v66 | 0xF;
    if ( (v66 | 0xFuLL) <= 0x7FFFFFFFFFFFFFFFLL )
    {
      if ( v67 < 0x16 )
        v67 = 22;
      if ( v67 == -1 )
      {
        v70 = nullptr;
        *(_QWORD *)&v93 = 0;
        goto LABEL_142;
      }
      if ( v67 + 1 < 0x1000 )
      {
        v70 = (__int128 *)sub_1409DB470(a1: v67 + 1);
        *(_QWORD *)&v93 = v70;
        goto LABEL_142;
      }
      v68 = v67 + 40;
      if ( v67 + 40 < v67 + 1 )
      {
        sub_14001B170(a1: v68, a2: v59, a3: v61, a4: v62);
        __debugbreak();
      }
    }
    else
    {
      v67 = 0x7FFFFFFFFFFFFFFFLL;
      v68 = 0x8000000000000027uLL;
    }
    v69 = sub_1409DB470(a1: v68);
    if ( v69 == 0 )
      __fastfail(5u);
    v70 = (__int128 *)((v69 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)v70 - 1) = v69;
    *(_QWORD *)&v93 = v70;
  }
LABEL_142:
  v94 = v63 + 15;
  v95 = v67;
  sub_140E82100(a1: v70, a2: v65, a3: v63);
  qmemcpy((char *)v70 + v63, "staticFunctions", 15);
  *((_BYTE *)v70 + v66) = 0;
  v75 = &v93;
  if ( v95 > 0xF )
    LODWORD(v75) = v93;
  v76 = qword_141314388;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314388) < 0xF )
    sub_14001B680(a1: v72, a2: v71);
  if ( (unsigned __int64)qword_141314390 > 0xF )
    v64 = *(char **)aBinarymodule;
  v90 = 0;
  v91 = 0;
  v92 = 0;
  v77 = qword_141314388 + 15;
  if ( (unsigned __int64)qword_141314388 >= 0xFFFFFFFFFFFFFFF1uLL || qword_141314388 == 0 )
  {
    v3 = 15;
    v81 = &v90;
  }
  else
  {
    if ( (v77 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
    {
      v78 = 0x8000000000000027uLL;
LABEL_151:
      v79 = sub_1409DB470(a1: v78);
      if ( v79 == 0 )
        __fastfail(5u);
      v81 = (__int128 *)((v79 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *((_QWORD *)v81 - 1) = v79;
      *(_QWORD *)&v90 = v81;
      goto LABEL_163;
    }
    v3 = v77 | 0xF;
    if ( (v77 | 0xFuLL) < 0x16 )
      v3 = 22;
    v80 = v3 + 1;
    if ( v3 == -1 )
    {
      v81 = nullptr;
      *(_QWORD *)&v90 = 0;
    }
    else
    {
      if ( v80 >= 0x1000 )
      {
        v78 = v3 + 40;
        if ( v3 + 40 < (unsigned __int64)(v3 + 1) )
        {
          sub_14001B170(a1: v80, a2: v71, a3: v73, a4: v74);
          __debugbreak();
        }
        goto LABEL_151;
      }
      v81 = (__int128 *)sub_1409DB470(a1: v80);
      *(_QWORD *)&v90 = v81;
    }
  }
LABEL_163:
  v91 = v76 + 15;
  v92 = v3;
  sub_140E82100(a1: v81, a2: v64, a3: v76);
  qmemcpy((char *)v81 + v76, "staticFunctions", 15);
  *((_BYTE *)v81 + v77) = 0;
  v82 = &v90;
  if ( v92 > 0xF )
    v82 = (__int128 *)v90;
  v83 = sub_140062160(a1: v82);
  sub_140062D10(
    a1: (unsigned int)&dword_1413AB740,
    a2: v83,
    a3: (_DWORD)v75,
    a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Nebula\\inclu"
                  "de\\Nebula/Script/Binary/PXNebulaScriptBinary.h",
    a5: 133);
  if ( v92 > 0xF )
  {
    v84 = (void *)v90;
    if ( v92 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v90 - *(_QWORD *)(v90 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v84 = *(void **)(v90 - 8);
    }
    sub_1409DB4C0(lpMem: v84);
  }
  *(_QWORD *)&v90 = 19937;
  v91 = 0;
  v92 = 31;
  if ( v95 > 0xF )
  {
    v85 = (void *)v93;
    if ( v95 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v93 - *(_QWORD *)(v93 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v85 = *(void **)(v93 - 8);
    }
    sub_1409DB4C0(lpMem: v85);
  }
  sub_1409DBB40(a1: &dword_1413AB744);
LABEL_5:
  v86 = dword_1413AB740;
  return sub_140872FD0(a1: v88, a2: &v86, a3: v87 + 64);
}