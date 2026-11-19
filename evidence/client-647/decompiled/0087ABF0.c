__int64 __fastcall sub_14087ABF0(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  __int64 v4; // r15
  __int64 v5; // rbx
  char v6; // al
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rdx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r15
  char *v17; // r13
  __int64 v18; // r12
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  __int128 *v22; // rsi
  __int128 *v23; // rdi
  _QWORD *v24; // rax
  int v25; // eax
  void *v26; // rcx
  void *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r15
  char *v33; // r13
  __int64 v34; // r12
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // rcx
  __int64 v37; // rax
  __int128 *v38; // rsi
  __int128 *v39; // rdi
  _QWORD *v40; // rax
  int v41; // eax
  void *v42; // rcx
  void *v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // r15
  char *v49; // r13
  __int64 v50; // r12
  unsigned __int64 v51; // rdi
  unsigned __int64 v52; // rcx
  __int64 v53; // rax
  __int128 *v54; // rsi
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int128 *v59; // rax
  __int64 v60; // r13
  char *v61; // r12
  __int64 v62; // r15
  unsigned __int64 v63; // rdi
  unsigned __int64 v64; // rcx
  __int64 v65; // rax
  __int128 *v66; // rsi
  __int128 *v67; // rcx
  int v68; // eax
  void *v69; // rcx
  void *v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // r15
  char *v76; // r13
  __int64 v77; // r12
  unsigned __int64 v78; // rdi
  unsigned __int64 v79; // rcx
  __int64 v80; // rax
  __int128 *v81; // rsi
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  __int128 *v86; // rax
  __int64 v87; // r13
  char *v88; // r12
  __int64 v89; // r15
  unsigned __int64 v90; // rdi
  unsigned __int64 v91; // rcx
  __int64 v92; // rax
  __int128 *v93; // rsi
  __int128 *v94; // rcx
  int v95; // eax
  void *v96; // rcx
  void *v97; // rcx
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 v102; // r15
  char *v103; // r13
  __int64 v104; // r12
  unsigned __int64 v105; // rdi
  unsigned __int64 v106; // rcx
  __int64 v107; // rax
  __int128 *v108; // rsi
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // r8
  __int64 v112; // r9
  __int128 *v113; // r12
  __int64 v114; // r13
  char *v115; // r15
  __int64 v116; // rsi
  unsigned __int64 v117; // rax
  __int64 v118; // rax
  unsigned __int64 v119; // rcx
  __int128 *v120; // rdi
  __int128 *v121; // rcx
  int v122; // eax
  void *v123; // rcx
  void *v124; // rcx
  __int64 *v125; // rax
  __int64 v126; // rbx
  _QWORD *v127; // rax
  int v128; // eax
  void *v129; // rcx
  void *v130; // rcx
  __int64 *v131; // rax
  __int64 v132; // rbx
  _QWORD *v133; // rax
  int v134; // eax
  void *v135; // rcx
  void *v136; // rcx
  __int64 *v137; // rax
  __int64 v138; // rbx
  _QWORD *v139; // rax
  int v140; // eax
  __int64 *v141; // rax
  __int64 v142; // rbx
  _QWORD *v143; // rax
  __int128 *v144; // [rsp+30h] [rbp-39h] BYREF
  __int64 v145; // [rsp+38h] [rbp-31h]
  __int64 v146; // [rsp+40h] [rbp-29h]
  __int128 v147; // [rsp+48h] [rbp-21h] BYREF
  __int64 v148; // [rsp+58h] [rbp-11h]
  unsigned __int64 v149; // [rsp+60h] [rbp-9h]
  __int128 v150; // [rsp+68h] [rbp-1h] BYREF
  __int64 v151; // [rsp+78h] [rbp+Fh]
  unsigned __int64 v152; // [rsp+80h] [rbp+17h]

  v3 = a1;
  v146 = a1;
  v4 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  v145 = v4;
  if ( dword_1413AB6E0 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413AB6E0);
    if ( dword_1413AB6E0 == -1 )
    {
      sub_1409DB700(a1: sub_140EE3080);
      sub_1409DBB40(a1: &dword_1413AB6E0);
    }
  }
  v5 = 0x7FFFFFFFFFFFFFFFLL;
  if ( dword_1413AB6E8 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413AB6E8);
    if ( dword_1413AB6E8 == -1 )
    {
      v16 = qword_141314368;
      if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314368) < 4 )
        sub_14001B680(a1: v13, a2: v12);
      v17 = aType_1;
      if ( (unsigned __int64)qword_141314370 > 0xF )
        v17 = *(char **)aType_1;
      v147 = 0;
      v148 = 0;
      v149 = 0;
      v18 = qword_141314368 + 4;
      if ( (unsigned __int64)(qword_141314368 + 4) <= 0xF )
      {
        v19 = 15;
        v22 = &v147;
      }
      else
      {
        v19 = v18 | 0xF;
        if ( (v18 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
        {
          v19 = 0x7FFFFFFFFFFFFFFFLL;
          v20 = 0x8000000000000027uLL;
LABEL_42:
          v21 = sub_1409DB470(a1: v20);
          if ( v21 == 0 )
            __fastfail(5u);
          v22 = (__int128 *)((v21 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
          *((_QWORD *)v22 - 1) = v21;
          *(_QWORD *)&v147 = v22;
          goto LABEL_54;
        }
        if ( v19 < 0x16 )
          v19 = 22;
        if ( v19 == -1 )
        {
          v22 = nullptr;
          *(_QWORD *)&v147 = 0;
        }
        else
        {
          if ( v19 + 1 >= 0x1000 )
          {
            v20 = v19 + 40;
            if ( v19 + 40 < v19 + 1 )
            {
              sub_14001B170(a1: v20, a2: v12, a3: v14, a4: v15);
              __debugbreak();
            }
            goto LABEL_42;
          }
          v22 = (__int128 *)sub_1409DB470(a1: v19 + 1);
          *(_QWORD *)&v147 = v22;
        }
      }
LABEL_54:
      v148 = v16 + 4;
      v149 = v19;
      sub_140E82100(a1: v22, a2: v17, a3: v16);
      *(_DWORD *)((char *)v22 + v16) = *(_DWORD *)"type";
      *((_BYTE *)v22 + v18) = 0;
      v23 = &v147;
      if ( v149 > 0xF )
        LODWORD(v23) = v147;
      v24 = (_QWORD *)sub_140020190(a1: &v150, a2: aType_1, a3: "type");
      if ( v24[3] > 0xFu )
        v24 = (_QWORD *)*v24;
      v25 = sub_140062160(a1: v24);
      sub_140062D10(
        a1: (unsigned int)&dword_1413AB6E4,
        a2: v25,
        a3: (_DWORD)v23,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Nebula\\i"
                      "nclude\\Nebula/Script/Binary/PXNebulaScriptBinary.h",
        a5: 108);
      if ( v152 > 0xF )
      {
        v26 = (void *)v150;
        if ( v152 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v150 - *(_QWORD *)(v150 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v26 = *(void **)(v150 - 8);
        }
        sub_1409DB4C0(lpMem: v26);
      }
      *(_QWORD *)&v150 = 19937;
      v151 = 0;
      v152 = 31;
      if ( v149 > 0xF )
      {
        v27 = (void *)v147;
        if ( v149 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v147 - *(_QWORD *)(v147 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v27 = *(void **)(v147 - 8);
        }
        sub_1409DB4C0(lpMem: v27);
      }
      sub_1409DBB40(a1: &dword_1413AB6E8);
      v4 = v145;
      v3 = v146;
    }
  }
  LODWORD(v144) = dword_1413AB6E4;
  if ( *(_DWORD *)a2 != 0 )
  {
    if ( *(_BYTE *)(v3 + 8) != 0 )
    {
      v6 = sub_140076F30();
      sub_140084F80(a1: a2, a2: (unsigned int)&v144, a3: v3 + 8, a4: 1, a5: v6);
    }
  }
  else if ( (unsigned __int8)sub_1400852F0(a1: a2, a2: (int)v3 + 8, a3: (unsigned int)&v144, a4: 1, a5: 512) == 0 )
  {
    *(_BYTE *)(v3 + 8) = 0;
  }
  if ( dword_1413AB6F0 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413AB6F0);
    if ( dword_1413AB6F0 == -1 )
    {
      v32 = qword_141314368;
      if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314368) < 4 )
        sub_14001B680(a1: v29, a2: v28);
      v33 = aType_1;
      if ( (unsigned __int64)qword_141314370 > 0xF )
        v33 = *(char **)aType_1;
      v147 = 0;
      v148 = 0;
      v149 = 0;
      v34 = qword_141314368 + 4;
      if ( (unsigned __int64)(qword_141314368 + 4) <= 0xF )
      {
        v35 = 15;
        v38 = &v147;
      }
      else
      {
        v35 = v34 | 0xF;
        if ( (v34 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
        {
          v35 = 0x7FFFFFFFFFFFFFFFLL;
          v36 = 0x8000000000000027uLL;
LABEL_79:
          v37 = sub_1409DB470(a1: v36);
          if ( v37 == 0 )
            __fastfail(5u);
          v38 = (__int128 *)((v37 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
          *((_QWORD *)v38 - 1) = v37;
          *(_QWORD *)&v147 = v38;
          goto LABEL_91;
        }
        if ( v35 < 0x16 )
          v35 = 22;
        if ( v35 == -1 )
        {
          v38 = nullptr;
          *(_QWORD *)&v147 = 0;
        }
        else
        {
          if ( v35 + 1 >= 0x1000 )
          {
            v36 = v35 + 40;
            if ( v35 + 40 < v35 + 1 )
            {
              sub_14001B170(a1: v36, a2: v28, a3: v30, a4: v31);
              __debugbreak();
            }
            goto LABEL_79;
          }
          v38 = (__int128 *)sub_1409DB470(a1: v35 + 1);
          *(_QWORD *)&v147 = v38;
        }
      }
LABEL_91:
      v148 = v32 + 4;
      v149 = v35;
      sub_140E82100(a1: v38, a2: v33, a3: v32);
      *(_DWORD *)((char *)v38 + v32) = *(_DWORD *)"name";
      *((_BYTE *)v38 + v34) = 0;
      v39 = &v147;
      if ( v149 > 0xF )
        LODWORD(v39) = v147;
      v40 = (_QWORD *)sub_140020190(a1: &v150, a2: aType_1, a3: "name");
      if ( v40[3] > 0xFu )
        v40 = (_QWORD *)*v40;
      v41 = sub_140062160(a1: v40);
      sub_140062D10(
        a1: (unsigned int)&dword_1413AB6EC,
        a2: v41,
        a3: (_DWORD)v39,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Nebula\\i"
                      "nclude\\Nebula/Script/Binary/PXNebulaScriptBinary.h",
        a5: 109);
      if ( v152 > 0xF )
      {
        v42 = (void *)v150;
        if ( v152 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v150 - *(_QWORD *)(v150 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v42 = *(void **)(v150 - 8);
        }
        sub_1409DB4C0(lpMem: v42);
      }
      *(_QWORD *)&v150 = 19937;
      v151 = 0;
      v152 = 31;
      if ( v149 > 0xF )
      {
        v43 = (void *)v147;
        if ( v149 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v147 - *(_QWORD *)(v147 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v43 = *(void **)(v147 - 8);
        }
        sub_1409DB4C0(lpMem: v43);
      }
      sub_1409DBB40(a1: &dword_1413AB6F0);
      v4 = v145;
      v3 = v146;
    }
  }
  LODWORD(v144) = dword_1413AB6EC;
  sub_140085740(a1: a2, a2: &v144, a3: v3 + 16, a4: &byte_140EEC5C5);
  if ( dword_1413AB6F8 <= *(_DWORD *)(v4 + 76) )
    goto LABEL_10;
  sub_1409DBBB0(a1: &dword_1413AB6F8);
  if ( dword_1413AB6F8 != -1 )
    goto LABEL_10;
  v48 = qword_141314368;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314368) < 0xA )
    sub_14001B680(a1: v45, a2: v44);
  v49 = aType_1;
  if ( (unsigned __int64)qword_141314370 > 0xF )
    v49 = *(char **)aType_1;
  v150 = 0;
  v151 = 0;
  v152 = 0;
  v50 = qword_141314368 + 10;
  if ( (unsigned __int64)(qword_141314368 + 10) <= 0xF )
  {
    v51 = 15;
    v54 = &v150;
  }
  else
  {
    v51 = v50 | 0xF;
    if ( (v50 | 0xFuLL) <= 0x7FFFFFFFFFFFFFFFLL )
    {
      if ( v51 < 0x16 )
        v51 = 22;
      if ( v51 == -1 )
      {
        v54 = nullptr;
        *(_QWORD *)&v150 = 0;
        goto LABEL_128;
      }
      if ( v51 + 1 < 0x1000 )
      {
        v54 = (__int128 *)sub_1409DB470(a1: v51 + 1);
        *(_QWORD *)&v150 = v54;
        goto LABEL_128;
      }
      v52 = v51 + 40;
      if ( v51 + 40 < v51 + 1 )
      {
        sub_14001B170(a1: v52, a2: v44, a3: v46, a4: v47);
        __debugbreak();
      }
    }
    else
    {
      v51 = 0x7FFFFFFFFFFFFFFFLL;
      v52 = 0x8000000000000027uLL;
    }
    v53 = sub_1409DB470(a1: v52);
    if ( v53 == 0 )
      __fastfail(5u);
    v54 = (__int128 *)((v53 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)v54 - 1) = v53;
    *(_QWORD *)&v150 = v54;
  }
LABEL_128:
  v151 = v48 + 10;
  v152 = v51;
  sub_140E82100(a1: v54, a2: v49, a3: v48);
  qmemcpy((char *)v54 + v48, "attributes", 10);
  *((_BYTE *)v54 + v50) = 0;
  v59 = &v150;
  if ( v152 > 0xF )
    v59 = (__int128 *)v150;
  v144 = v59;
  v60 = qword_141314368;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314368) < 0xA )
    sub_14001B680(a1: v56, a2: v55);
  v61 = aType_1;
  if ( (unsigned __int64)qword_141314370 > 0xF )
    v61 = *(char **)aType_1;
  v147 = 0;
  v148 = 0;
  v149 = 0;
  v62 = qword_141314368 + 10;
  if ( (unsigned __int64)(qword_141314368 + 10) <= 0xF )
  {
    v63 = 15;
    v66 = &v147;
  }
  else
  {
    v63 = v62 | 0xF;
    if ( (v62 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
    {
      v63 = 0x7FFFFFFFFFFFFFFFLL;
      v64 = 0x8000000000000027uLL;
LABEL_137:
      v65 = sub_1409DB470(a1: v64);
      if ( v65 == 0 )
        __fastfail(5u);
      v66 = (__int128 *)((v65 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *((_QWORD *)v66 - 1) = v65;
      *(_QWORD *)&v147 = v66;
      goto LABEL_149;
    }
    if ( v63 < 0x16 )
      v63 = 22;
    if ( v63 == -1 )
    {
      v66 = nullptr;
      *(_QWORD *)&v147 = 0;
    }
    else
    {
      if ( v63 + 1 >= 0x1000 )
      {
        v64 = v63 + 40;
        if ( v63 + 40 < v63 + 1 )
        {
          sub_14001B170(a1: v64, a2: v55, a3: v57, a4: v58);
          __debugbreak();
        }
        goto LABEL_137;
      }
      v66 = (__int128 *)sub_1409DB470(a1: v63 + 1);
      *(_QWORD *)&v147 = v66;
    }
  }
LABEL_149:
  v148 = v60 + 10;
  v149 = v63;
  sub_140E82100(a1: v66, a2: v61, a3: v60);
  qmemcpy((char *)v66 + v60, "attributes", 10);
  *((_BYTE *)v66 + v62) = 0;
  v67 = &v147;
  if ( v149 > 0xF )
    v67 = (__int128 *)v147;
  v68 = sub_140062160(a1: v67);
  sub_140062D10(
    a1: (unsigned int)&dword_1413AB6F4,
    a2: v68,
    a3: (_DWORD)v144,
    a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Nebula\\inclu"
                  "de\\Nebula/Script/Binary/PXNebulaScriptBinary.h",
    a5: 110);
  if ( v149 > 0xF )
  {
    v69 = (void *)v147;
    if ( v149 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v147 - *(_QWORD *)(v147 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v69 = *(void **)(v147 - 8);
    }
    sub_1409DB4C0(lpMem: v69);
  }
  *(_QWORD *)&v147 = 19937;
  v148 = 0;
  v149 = 31;
  if ( v152 > 0xF )
  {
    v70 = (void *)v150;
    if ( v152 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v150 - *(_QWORD *)(v150 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v70 = *(void **)(v150 - 8);
    }
    sub_1409DB4C0(lpMem: v70);
  }
  sub_1409DBB40(a1: &dword_1413AB6F8);
  v4 = v145;
  v3 = v146;
LABEL_10:
  LODWORD(v144) = dword_1413AB6F4;
  if ( *(_DWORD *)a2 != 0 )
  {
    sub_140084D50(a1: a2, a2: &v144);
  }
  else if ( sub_140030D50(a1: a2, a2: &v144, a3: 256) == 0 )
  {
    goto LABEL_17;
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v3 + 48) + 8LL))(a1: v3 + 48, a2);
  v7 = *(_QWORD *)(a2 + 24);
  if ( v7 == 0 )
    v7 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL);
  *(_QWORD *)(a2 + 40) = *(unsigned int *)(v7 + 12LL * *(_QWORD *)(a2 + 40) + 4);
LABEL_17:
  if ( dword_1413AB700 <= *(_DWORD *)(v4 + 76) )
    goto LABEL_18;
  sub_1409DBBB0(a1: &dword_1413AB700);
  if ( dword_1413AB700 != -1 )
    goto LABEL_18;
  v75 = qword_141314368;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314368) < 0xA )
    sub_14001B680(a1: v72, a2: v71);
  v76 = aType_1;
  if ( (unsigned __int64)qword_141314370 > 0xF )
    v76 = *(char **)aType_1;
  v150 = 0;
  v151 = 0;
  v152 = 0;
  v77 = qword_141314368 + 10;
  if ( (unsigned __int64)(qword_141314368 + 10) <= 0xF )
  {
    v78 = 15;
    v81 = &v150;
  }
  else
  {
    v78 = v77 | 0xF;
    if ( (v77 | 0xFuLL) <= 0x7FFFFFFFFFFFFFFFLL )
    {
      if ( v78 < 0x16 )
        v78 = 22;
      if ( v78 == -1 )
      {
        v81 = nullptr;
        *(_QWORD *)&v150 = 0;
        goto LABEL_184;
      }
      if ( v78 + 1 < 0x1000 )
      {
        v81 = (__int128 *)sub_1409DB470(a1: v78 + 1);
        *(_QWORD *)&v150 = v81;
        goto LABEL_184;
      }
      v79 = v78 + 40;
      if ( v78 + 40 < v78 + 1 )
      {
        sub_14001B170(a1: v79, a2: v71, a3: v73, a4: v74);
        __debugbreak();
      }
    }
    else
    {
      v78 = 0x7FFFFFFFFFFFFFFFLL;
      v79 = 0x8000000000000027uLL;
    }
    v80 = sub_1409DB470(a1: v79);
    if ( v80 == 0 )
      __fastfail(5u);
    v81 = (__int128 *)((v80 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)v81 - 1) = v80;
    *(_QWORD *)&v150 = v81;
  }
LABEL_184:
  v151 = v75 + 10;
  v152 = v78;
  sub_140E82100(a1: v81, a2: v76, a3: v75);
  qmemcpy((char *)v81 + v75, "superClass", 10);
  *((_BYTE *)v81 + v77) = 0;
  v86 = &v150;
  if ( v152 > 0xF )
    v86 = (__int128 *)v150;
  v144 = v86;
  v87 = qword_141314368;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314368) < 0xA )
    sub_14001B680(a1: v83, a2: v82);
  v88 = aType_1;
  if ( (unsigned __int64)qword_141314370 > 0xF )
    v88 = *(char **)aType_1;
  v147 = 0;
  v148 = 0;
  v149 = 0;
  v89 = qword_141314368 + 10;
  if ( (unsigned __int64)(qword_141314368 + 10) <= 0xF )
  {
    v90 = 15;
    v93 = &v147;
  }
  else
  {
    v90 = v89 | 0xF;
    if ( (v89 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
    {
      v90 = 0x7FFFFFFFFFFFFFFFLL;
      v91 = 0x8000000000000027uLL;
LABEL_193:
      v92 = sub_1409DB470(a1: v91);
      if ( v92 == 0 )
        __fastfail(5u);
      v93 = (__int128 *)((v92 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *((_QWORD *)v93 - 1) = v92;
      *(_QWORD *)&v147 = v93;
      goto LABEL_205;
    }
    if ( v90 < 0x16 )
      v90 = 22;
    if ( v90 == -1 )
    {
      v93 = nullptr;
      *(_QWORD *)&v147 = 0;
    }
    else
    {
      if ( v90 + 1 >= 0x1000 )
      {
        v91 = v90 + 40;
        if ( v90 + 40 < v90 + 1 )
        {
          sub_14001B170(a1: v91, a2: v82, a3: v84, a4: v85);
          __debugbreak();
        }
        goto LABEL_193;
      }
      v93 = (__int128 *)sub_1409DB470(a1: v90 + 1);
      *(_QWORD *)&v147 = v93;
    }
  }
LABEL_205:
  v148 = v87 + 10;
  v149 = v90;
  sub_140E82100(a1: v93, a2: v88, a3: v87);
  qmemcpy((char *)v93 + v87, "superClass", 10);
  *((_BYTE *)v93 + v89) = 0;
  v94 = &v147;
  if ( v149 > 0xF )
    v94 = (__int128 *)v147;
  v95 = sub_140062160(a1: v94);
  sub_140062D10(
    a1: (unsigned int)&dword_1413AB6FC,
    a2: v95,
    a3: (_DWORD)v144,
    a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Nebula\\inclu"
                  "de\\Nebula/Script/Binary/PXNebulaScriptBinary.h",
    a5: 111);
  if ( v149 > 0xF )
  {
    v96 = (void *)v147;
    if ( v149 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v147 - *(_QWORD *)(v147 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v96 = *(void **)(v147 - 8);
    }
    sub_1409DB4C0(lpMem: v96);
  }
  *(_QWORD *)&v147 = 19937;
  v148 = 0;
  v149 = 31;
  if ( v152 > 0xF )
  {
    v97 = (void *)v150;
    if ( v152 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v150 - *(_QWORD *)(v150 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v97 = *(void **)(v150 - 8);
    }
    sub_1409DB4C0(lpMem: v97);
  }
  sub_1409DBB40(a1: &dword_1413AB700);
  v4 = v145;
LABEL_18:
  LODWORD(v144) = dword_1413AB6FC;
  v8 = v146;
  sub_140085740(a1: a2, a2: &v144, a3: v146 + 64, a4: &byte_140EEC5C5);
  if ( dword_1413AB708 <= *(_DWORD *)(v4 + 76) )
    goto LABEL_19;
  sub_1409DBBB0(a1: &dword_1413AB708);
  if ( dword_1413AB708 != -1 )
    goto LABEL_19;
  v102 = qword_141314368;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314368) < 0xA )
    sub_14001B680(a1: v99, a2: v98);
  v103 = aType_1;
  if ( (unsigned __int64)qword_141314370 > 0xF )
    v103 = *(char **)aType_1;
  v150 = 0;
  v151 = 0;
  v152 = 0;
  v104 = qword_141314368 + 10;
  if ( (unsigned __int64)(qword_141314368 + 10) <= 0xF )
  {
    v105 = 15;
    v108 = &v150;
  }
  else
  {
    v105 = v104 | 0xF;
    if ( (v104 | 0xFuLL) <= 0x7FFFFFFFFFFFFFFFLL )
    {
      if ( v105 < 0x16 )
        v105 = 22;
      if ( v105 == -1 )
      {
        v108 = nullptr;
        *(_QWORD *)&v150 = 0;
        goto LABEL_240;
      }
      if ( v105 + 1 < 0x1000 )
      {
        v108 = (__int128 *)sub_1409DB470(a1: v105 + 1);
        *(_QWORD *)&v150 = v108;
        goto LABEL_240;
      }
      v106 = v105 + 40;
      if ( v105 + 40 < v105 + 1 )
      {
        sub_14001B170(a1: v106, a2: v98, a3: v100, a4: v101);
        __debugbreak();
      }
    }
    else
    {
      v105 = 0x7FFFFFFFFFFFFFFFLL;
      v106 = 0x8000000000000027uLL;
    }
    v107 = sub_1409DB470(a1: v106);
    if ( v107 == 0 )
      __fastfail(5u);
    v108 = (__int128 *)((v107 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)v108 - 1) = v107;
    *(_QWORD *)&v150 = v108;
  }
LABEL_240:
  v151 = v102 + 10;
  v152 = v105;
  sub_140E82100(a1: v108, a2: v103, a3: v102);
  qmemcpy((char *)v108 + v102, "properties", 10);
  *((_BYTE *)v108 + v104) = 0;
  v113 = &v150;
  if ( v152 > 0xF )
    LODWORD(v113) = v150;
  v114 = qword_141314368;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314368) < 0xA )
    sub_14001B680(a1: v110, a2: v109);
  v115 = aType_1;
  if ( (unsigned __int64)qword_141314370 > 0xF )
    v115 = *(char **)aType_1;
  v147 = 0;
  v148 = 0;
  v149 = 0;
  v116 = qword_141314368 + 10;
  if ( (unsigned __int64)(qword_141314368 + 10) <= 0xF )
  {
    v5 = 15;
    v120 = &v147;
  }
  else
  {
    if ( (v116 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
    {
      v117 = 0x8000000000000027uLL;
LABEL_249:
      v118 = sub_1409DB470(a1: v117);
      if ( v118 == 0 )
        __fastfail(5u);
      v120 = (__int128 *)((v118 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *((_QWORD *)v120 - 1) = v118;
      *(_QWORD *)&v147 = v120;
      goto LABEL_261;
    }
    v5 = v116 | 0xF;
    if ( (v116 | 0xFuLL) < 0x16 )
      v5 = 22;
    v119 = v5 + 1;
    if ( v5 == -1 )
    {
      v120 = nullptr;
      *(_QWORD *)&v147 = 0;
    }
    else
    {
      if ( v119 >= 0x1000 )
      {
        v117 = v5 + 40;
        if ( v5 + 40 < (unsigned __int64)(v5 + 1) )
        {
          sub_14001B170(a1: v119, a2: 0, a3: v111, a4: v112);
          __debugbreak();
        }
        goto LABEL_249;
      }
      v120 = (__int128 *)sub_1409DB470(a1: v119);
      *(_QWORD *)&v147 = v120;
    }
  }
LABEL_261:
  v148 = v114 + 10;
  v149 = v5;
  sub_140E82100(a1: v120, a2: v115, a3: v114);
  qmemcpy((char *)v120 + v114, "properties", 10);
  *((_BYTE *)v120 + v116) = 0;
  v121 = &v147;
  if ( v149 > 0xF )
    v121 = (__int128 *)v147;
  v122 = sub_140062160(a1: v121);
  sub_140062D10(
    a1: (unsigned int)&dword_1413AB704,
    a2: v122,
    a3: (_DWORD)v113,
    a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Nebula\\inclu"
                  "de\\Nebula/Script/Binary/PXNebulaScriptBinary.h",
    a5: 112);
  if ( v149 > 0xF )
  {
    v123 = (void *)v147;
    if ( v149 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v147 - *(_QWORD *)(v147 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v123 = *(void **)(v147 - 8);
    }
    sub_1409DB4C0(lpMem: v123);
  }
  *(_QWORD *)&v147 = 19937;
  v148 = 0;
  v149 = 31;
  if ( v152 > 0xF )
  {
    v124 = (void *)v150;
    if ( v152 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v150 - *(_QWORD *)(v150 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v124 = *(void **)(v150 - 8);
    }
    sub_1409DB4C0(lpMem: v124);
  }
  sub_1409DBB40(a1: &dword_1413AB708);
  v4 = v145;
  v8 = v146;
LABEL_19:
  LODWORD(v144) = dword_1413AB704;
  sub_140873720(a1: a2, a2: &v144, a3: v8 + 96);
  if ( dword_1413AB710 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413AB710);
    if ( dword_1413AB710 == -1 )
    {
      v125 = (__int64 *)sub_140020190(a1: &v147, a2: aType_1, a3: "methods");
      LODWORD(v126) = (_DWORD)v125;
      if ( (unsigned __int64)v125[3] > 0xF )
        v126 = *v125;
      v127 = (_QWORD *)sub_140020190(a1: &v150, a2: aType_1, a3: "methods");
      if ( v127[3] > 0xFu )
        v127 = (_QWORD *)*v127;
      v128 = sub_140062160(a1: v127);
      sub_140062D10(
        a1: (unsigned int)&dword_1413AB70C,
        a2: v128,
        a3: v126,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Nebula\\i"
                      "nclude\\Nebula/Script/Binary/PXNebulaScriptBinary.h",
        a5: 113);
      if ( v152 > 0xF )
      {
        v129 = (void *)v150;
        if ( v152 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v150 - *(_QWORD *)(v150 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v129 = *(void **)(v150 - 8);
        }
        sub_1409DB4C0(lpMem: v129);
      }
      *(_QWORD *)&v150 = 19937;
      v151 = 0;
      v152 = 31;
      if ( v149 > 0xF )
      {
        v130 = (void *)v147;
        if ( v149 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v147 - *(_QWORD *)(v147 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v130 = *(void **)(v147 - 8);
        }
        sub_1409DB4C0(lpMem: v130);
      }
      sub_1409DBB40(a1: &dword_1413AB710);
    }
  }
  LODWORD(v144) = dword_1413AB70C;
  sub_140872FD0(a1: a2, a2: &v144, a3: v8 + 120);
  if ( dword_1413AB718 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413AB718);
    if ( dword_1413AB718 == -1 )
    {
      v131 = (__int64 *)sub_140020190(a1: &v147, a2: aType_1, a3: "implementedMethods");
      LODWORD(v132) = (_DWORD)v131;
      if ( (unsigned __int64)v131[3] > 0xF )
        v132 = *v131;
      v133 = (_QWORD *)sub_140020190(a1: &v150, a2: aType_1, a3: "implementedMethods");
      if ( v133[3] > 0xFu )
        v133 = (_QWORD *)*v133;
      v134 = sub_140062160(a1: v133);
      sub_140062D10(
        a1: (unsigned int)&dword_1413AB714,
        a2: v134,
        a3: v132,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Nebula\\i"
                      "nclude\\Nebula/Script/Binary/PXNebulaScriptBinary.h",
        a5: 114);
      if ( v152 > 0xF )
      {
        v135 = (void *)v150;
        if ( v152 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v150 - *(_QWORD *)(v150 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v135 = *(void **)(v150 - 8);
        }
        sub_1409DB4C0(lpMem: v135);
      }
      *(_QWORD *)&v150 = 19937;
      v151 = 0;
      v152 = 31;
      if ( v149 > 0xF )
      {
        v136 = (void *)v147;
        if ( v149 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v147 - *(_QWORD *)(v147 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v136 = *(void **)(v147 - 8);
        }
        sub_1409DB4C0(lpMem: v136);
      }
      sub_1409DBB40(a1: &dword_1413AB718);
    }
  }
  LODWORD(v144) = dword_1413AB714;
  sub_140872FD0(a1: a2, a2: &v144, a3: v8 + 144);
  if ( dword_1413AB720 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413AB720);
    if ( dword_1413AB720 == -1 )
    {
      v137 = (__int64 *)sub_140020190(a1: &v147, a2: aType_1, a3: "delegateSignature");
      LODWORD(v138) = (_DWORD)v137;
      if ( (unsigned __int64)v137[3] > 0xF )
        v138 = *v137;
      v139 = (_QWORD *)sub_140020190(a1: &v150, a2: aType_1, a3: "delegateSignature");
      if ( v139[3] > 0xFu )
        v139 = (_QWORD *)*v139;
      v140 = sub_140062160(a1: v139);
      sub_140062D10(
        a1: (unsigned int)&dword_1413AB71C,
        a2: v140,
        a3: v138,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Nebula\\i"
                      "nclude\\Nebula/Script/Binary/PXNebulaScriptBinary.h",
        a5: 115);
      sub_14001B5A0(a1: &v150);
      *(_QWORD *)&v150 = 19937;
      v151 = 0;
      v152 = 31;
      sub_14001B5A0(a1: &v147);
      sub_1409DBB40(a1: &dword_1413AB720);
    }
  }
  LODWORD(v144) = dword_1413AB71C;
  if ( *(_DWORD *)a2 != 0 )
  {
    sub_140084D50(a1: a2, a2: &v144);
  }
  else if ( sub_140030D50(a1: a2, a2: &v144, a3: 256) == 0 )
  {
    goto LABEL_29;
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v8 + 168) + 8LL))(a1: v8 + 168, a2);
  v9 = *(_QWORD *)(a2 + 24);
  if ( v9 == 0 )
    v9 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL);
  *(_QWORD *)(a2 + 40) = *(unsigned int *)(v9 + 12LL * *(_QWORD *)(a2 + 40) + 4);
LABEL_29:
  if ( dword_1413AB728 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413AB728);
    if ( dword_1413AB728 == -1 )
    {
      v141 = (__int64 *)sub_140020190(a1: &v147, a2: aType_1, a3: "initializer");
      LODWORD(v142) = (_DWORD)v141;
      if ( (unsigned __int64)v141[3] > 0xF )
        v142 = *v141;
      v143 = (_QWORD *)sub_140020190(a1: &v150, a2: aType_1, a3: "initializer");
      if ( v143[3] > 0xFu )
        v143 = (_QWORD *)*v143;
      v11 = sub_140062160(a1: v143);
      sub_140062D10(
        a1: (unsigned int)&dword_1413AB724,
        a2: v11,
        a3: v142,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Nebula\\i"
                      "nclude\\Nebula/Script/Binary/PXNebulaScriptBinary.h",
        a5: 116);
      sub_14001B5A0(a1: &v150);
      *(_QWORD *)&v150 = 19937;
      v151 = 0;
      v152 = 31;
      sub_14001B5A0(a1: &v147);
      sub_1409DBB40(a1: &dword_1413AB728);
    }
  }
  LODWORD(v144) = dword_1413AB724;
  return sub_1408933E0(a1: a2, a2: &v144, a3: v8 + 272);
}