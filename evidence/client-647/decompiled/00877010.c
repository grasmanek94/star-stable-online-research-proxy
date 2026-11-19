__int64 __fastcall sub_140877010(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // r14
  char *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdx
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
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int128 *v23; // r12
  __int64 v24; // r13
  char *v25; // r15
  __int64 v26; // r14
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // rcx
  __int64 v29; // rax
  __int128 *v30; // rsi
  __int128 *v31; // rcx
  int v32; // eax
  void *v33; // rcx
  void *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r14
  char *v40; // r12
  __int64 v41; // r15
  unsigned __int64 v42; // rdi
  unsigned __int64 v43; // rcx
  __int64 v44; // rax
  __int128 *v45; // rsi
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int128 *v50; // r12
  __int64 v51; // r13
  char *v52; // r15
  __int64 v53; // r14
  unsigned __int64 v54; // rdi
  unsigned __int64 v55; // rcx
  __int64 v56; // rax
  __int128 *v57; // rsi
  __int128 *v58; // rcx
  int v59; // eax
  void *v60; // rcx
  void *v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // r14
  char *v67; // r12
  __int64 v68; // r15
  unsigned __int64 v69; // rdi
  unsigned __int64 v70; // rcx
  __int64 v71; // rax
  __int128 *v72; // rsi
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int128 *v77; // r15
  __int64 v78; // r14
  char *v79; // rdx
  __int64 v80; // rsi
  unsigned __int64 v81; // rax
  __int64 v82; // rax
  unsigned __int64 v83; // rcx
  __int128 *v84; // rdi
  __int128 *v85; // rcx
  int v86; // eax
  void *v87; // rcx
  void *v88; // rcx
  int v89; // [rsp+30h] [rbp-49h] BYREF
  char *v90; // [rsp+38h] [rbp-41h]
  __int64 v91; // [rsp+40h] [rbp-39h]
  __int64 v92; // [rsp+48h] [rbp-31h]
  __int128 v93; // [rsp+50h] [rbp-29h] BYREF
  __int64 v94; // [rsp+60h] [rbp-19h]
  unsigned __int64 v95; // [rsp+68h] [rbp-11h]
  __int128 v96; // [rsp+70h] [rbp-9h] BYREF
  __int64 v97; // [rsp+80h] [rbp+7h]
  unsigned __int64 v98; // [rsp+88h] [rbp+Fh]

  v2 = a2;
  v92 = a2;
  v3 = a1;
  v91 = a1;
  v4 = *((char **)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  v90 = v4;
  if ( dword_1413AB6A0 > *((_DWORD *)v4 + 19) )
  {
    sub_1409DBBB0(a1: &dword_1413AB6A0);
    if ( dword_1413AB6A0 == -1 )
    {
      sub_1409DB700(a1: sub_140EE2E50);
      sub_1409DBB40(a1: &dword_1413AB6A0);
    }
  }
  v5 = 0x7FFFFFFFFFFFFFFFLL;
  if ( dword_1413AB6A8 > *((_DWORD *)v4 + 19) )
  {
    sub_1409DBBB0(a1: &dword_1413AB6A8);
    if ( dword_1413AB6A8 == -1 )
    {
      v12 = qword_141314328;
      if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314328) < 9 )
        sub_14001B680(a1: v9, a2: v8);
      v13 = aFunction;
      if ( (unsigned __int64)qword_141314330 > 0xF )
        v13 = *(char **)aFunction;
      v96 = 0;
      v97 = 0;
      v98 = 0;
      v14 = qword_141314328 + 9;
      if ( (unsigned __int64)(qword_141314328 + 9) <= 0xF )
      {
        v15 = 15;
        v18 = &v96;
      }
      else
      {
        v15 = v14 | 0xF;
        if ( (v14 | 0xFuLL) <= 0x7FFFFFFFFFFFFFFFLL )
        {
          if ( v15 < 0x16 )
            v15 = 22;
          if ( v15 == -1 )
          {
            v18 = nullptr;
            *(_QWORD *)&v96 = 0;
            goto LABEL_37;
          }
          if ( v15 + 1 < 0x1000 )
          {
            v18 = (__int128 *)sub_1409DB470(a1: v15 + 1);
            *(_QWORD *)&v96 = v18;
            goto LABEL_37;
          }
          v16 = v15 + 40;
          if ( v15 + 40 < v15 + 1 )
          {
            sub_14001B170(a1: v16, a2: v8, a3: v10, a4: v11);
            __debugbreak();
          }
        }
        else
        {
          v15 = 0x7FFFFFFFFFFFFFFFLL;
          v16 = 0x8000000000000027uLL;
        }
        v17 = sub_1409DB470(a1: v16);
        if ( v17 == 0 )
          __fastfail(5u);
        v18 = (__int128 *)((v17 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *((_QWORD *)v18 - 1) = v17;
        *(_QWORD *)&v96 = v18;
      }
LABEL_37:
      v97 = v12 + 9;
      v98 = v15;
      sub_140E82100(a1: v18, a2: v13, a3: v12);
      *(_QWORD *)((char *)v18 + v12) = 0x727574616E676973LL;
      *((_BYTE *)v18 + v12 + 8) = 101;
      *((_BYTE *)v18 + v14) = 0;
      v23 = &v96;
      if ( v98 > 0xF )
        LODWORD(v23) = v96;
      v24 = qword_141314328;
      if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314328) < 9 )
        sub_14001B680(a1: v20, a2: v19);
      v25 = aFunction;
      if ( (unsigned __int64)qword_141314330 > 0xF )
        v25 = *(char **)aFunction;
      v93 = 0;
      v94 = 0;
      v95 = 0;
      v26 = qword_141314328 + 9;
      if ( (unsigned __int64)(qword_141314328 + 9) <= 0xF )
      {
        v27 = 15;
        v30 = &v93;
      }
      else
      {
        v27 = v26 | 0xF;
        if ( (v26 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
        {
          v27 = 0x7FFFFFFFFFFFFFFFLL;
          v28 = 0x8000000000000027uLL;
LABEL_46:
          v29 = sub_1409DB470(a1: v28);
          if ( v29 == 0 )
            __fastfail(5u);
          v30 = (__int128 *)((v29 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
          *((_QWORD *)v30 - 1) = v29;
          *(_QWORD *)&v93 = v30;
          goto LABEL_58;
        }
        if ( v27 < 0x16 )
          v27 = 22;
        if ( v27 == -1 )
        {
          v30 = nullptr;
          *(_QWORD *)&v93 = 0;
        }
        else
        {
          if ( v27 + 1 >= 0x1000 )
          {
            v28 = v27 + 40;
            if ( v27 + 40 < v27 + 1 )
            {
              sub_14001B170(a1: v28, a2: v19, a3: v21, a4: v22);
              __debugbreak();
            }
            goto LABEL_46;
          }
          v30 = (__int128 *)sub_1409DB470(a1: v27 + 1);
          *(_QWORD *)&v93 = v30;
        }
      }
LABEL_58:
      v94 = v24 + 9;
      v95 = v27;
      sub_140E82100(a1: v30, a2: v25, a3: v24);
      *(_QWORD *)((char *)v30 + v24) = 0x727574616E676973LL;
      *((_BYTE *)v30 + v24 + 8) = 101;
      *((_BYTE *)v30 + v26) = 0;
      v31 = &v93;
      if ( v95 > 0xF )
        v31 = (__int128 *)v93;
      v32 = sub_140062160(a1: v31);
      sub_140062D10(
        a1: (unsigned int)&dword_1413AB6A4,
        a2: v32,
        a3: (_DWORD)v23,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Nebula\\i"
                      "nclude\\Nebula/Script/Binary/PXNebulaScriptBinary.h",
        a5: 57);
      if ( v95 > 0xF )
      {
        v33 = (void *)v93;
        if ( v95 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v93 - *(_QWORD *)(v93 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v33 = *(void **)(v93 - 8);
        }
        sub_1409DB4C0(lpMem: v33);
      }
      *(_QWORD *)&v93 = 19937;
      v94 = 0;
      v95 = 31;
      if ( v98 > 0xF )
      {
        v34 = (void *)v96;
        if ( v98 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v96 - *(_QWORD *)(v96 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v34 = *(void **)(v96 - 8);
        }
        sub_1409DB4C0(lpMem: v34);
      }
      sub_1409DBB40(a1: &dword_1413AB6A8);
      v2 = v92;
      v4 = v90;
      v3 = v91;
    }
  }
  v89 = dword_1413AB6A4;
  if ( *(_DWORD *)v2 != 0 )
  {
    sub_140084D50(a1: v2, a2: &v89);
  }
  else if ( sub_140030D50(a1: v2, a2: &v89, a3: 256) == 0 )
  {
    goto LABEL_10;
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v3 + 8) + 8LL))(a1: v3 + 8, a2: v2);
  v6 = *(_QWORD *)(v2 + 24);
  if ( v6 == 0 )
    v6 = *(_QWORD *)(*(_QWORD *)(v2 + 8) + 8LL);
  *(_QWORD *)(v2 + 40) = *(unsigned int *)(v6 + 12LL * *(_QWORD *)(v2 + 40) + 4);
LABEL_10:
  if ( dword_1413AB6B0 <= *((_DWORD *)v4 + 19) )
    goto LABEL_11;
  sub_1409DBBB0(a1: &dword_1413AB6B0);
  if ( dword_1413AB6B0 != -1 )
    goto LABEL_11;
  v39 = qword_141314328;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314328) < 4 )
    sub_14001B680(a1: v36, a2: v35);
  v40 = aFunction;
  if ( (unsigned __int64)qword_141314330 > 0xF )
    v40 = *(char **)aFunction;
  v96 = 0;
  v97 = 0;
  v98 = 0;
  v41 = qword_141314328 + 4;
  if ( (unsigned __int64)(qword_141314328 + 4) <= 0xF )
  {
    v42 = 15;
    v45 = &v96;
  }
  else
  {
    v42 = v41 | 0xF;
    if ( (v41 | 0xFuLL) <= 0x7FFFFFFFFFFFFFFFLL )
    {
      if ( v42 < 0x16 )
        v42 = 22;
      if ( v42 == -1 )
      {
        v45 = nullptr;
        *(_QWORD *)&v96 = 0;
        goto LABEL_93;
      }
      if ( v42 + 1 < 0x1000 )
      {
        v45 = (__int128 *)sub_1409DB470(a1: v42 + 1);
        *(_QWORD *)&v96 = v45;
        goto LABEL_93;
      }
      v43 = v42 + 40;
      if ( v42 + 40 < v42 + 1 )
      {
        sub_14001B170(a1: v43, a2: v35, a3: v37, a4: v38);
        __debugbreak();
      }
    }
    else
    {
      v42 = 0x7FFFFFFFFFFFFFFFLL;
      v43 = 0x8000000000000027uLL;
    }
    v44 = sub_1409DB470(a1: v43);
    if ( v44 == 0 )
      __fastfail(5u);
    v45 = (__int128 *)((v44 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)v45 - 1) = v44;
    *(_QWORD *)&v96 = v45;
  }
LABEL_93:
  v97 = v39 + 4;
  v98 = v42;
  sub_140E82100(a1: v45, a2: v40, a3: v39);
  *(_DWORD *)((char *)v45 + v39) = *(_DWORD *)"name";
  *((_BYTE *)v45 + v41) = 0;
  v50 = &v96;
  if ( v98 > 0xF )
    LODWORD(v50) = v96;
  v51 = qword_141314328;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314328) < 4 )
    sub_14001B680(a1: v47, a2: v46);
  v52 = aFunction;
  if ( (unsigned __int64)qword_141314330 > 0xF )
    v52 = *(char **)aFunction;
  v93 = 0;
  v94 = 0;
  v95 = 0;
  v53 = qword_141314328 + 4;
  if ( (unsigned __int64)(qword_141314328 + 4) <= 0xF )
  {
    v54 = 15;
    v57 = &v93;
  }
  else
  {
    v54 = v53 | 0xF;
    if ( (v53 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
    {
      v54 = 0x7FFFFFFFFFFFFFFFLL;
      v55 = 0x8000000000000027uLL;
LABEL_102:
      v56 = sub_1409DB470(a1: v55);
      if ( v56 == 0 )
        __fastfail(5u);
      v57 = (__int128 *)((v56 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *((_QWORD *)v57 - 1) = v56;
      *(_QWORD *)&v93 = v57;
      goto LABEL_114;
    }
    if ( v54 < 0x16 )
      v54 = 22;
    if ( v54 == -1 )
    {
      v57 = nullptr;
      *(_QWORD *)&v93 = 0;
    }
    else
    {
      if ( v54 + 1 >= 0x1000 )
      {
        v55 = v54 + 40;
        if ( v54 + 40 < v54 + 1 )
        {
          sub_14001B170(a1: v55, a2: v46, a3: v48, a4: v49);
          __debugbreak();
        }
        goto LABEL_102;
      }
      v57 = (__int128 *)sub_1409DB470(a1: v54 + 1);
      *(_QWORD *)&v93 = v57;
    }
  }
LABEL_114:
  v94 = v51 + 4;
  v95 = v54;
  sub_140E82100(a1: v57, a2: v52, a3: v51);
  *(_DWORD *)((char *)v57 + v51) = *(_DWORD *)"name";
  *((_BYTE *)v57 + v53) = 0;
  v58 = &v93;
  if ( v95 > 0xF )
    v58 = (__int128 *)v93;
  v59 = sub_140062160(a1: v58);
  sub_140062D10(
    a1: (unsigned int)&dword_1413AB6AC,
    a2: v59,
    a3: (_DWORD)v50,
    a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Nebula\\inclu"
                  "de\\Nebula/Script/Binary/PXNebulaScriptBinary.h",
    a5: 58);
  if ( v95 > 0xF )
  {
    v60 = (void *)v93;
    if ( v95 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v93 - *(_QWORD *)(v93 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v60 = *(void **)(v93 - 8);
    }
    sub_1409DB4C0(lpMem: v60);
  }
  *(_QWORD *)&v93 = 19937;
  v94 = 0;
  v95 = 31;
  if ( v98 > 0xF )
  {
    v61 = (void *)v96;
    if ( v98 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v96 - *(_QWORD *)(v96 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v61 = *(void **)(v96 - 8);
    }
    sub_1409DB4C0(lpMem: v61);
  }
  sub_1409DBB40(a1: &dword_1413AB6B0);
  v2 = v92;
  v4 = v90;
LABEL_11:
  v89 = dword_1413AB6AC;
  sub_140085740(a1: v2, a2: &v89, a3: v91 + 112, a4: &byte_140EEC5C5);
  if ( dword_1413AB6B8 <= *((_DWORD *)v4 + 19) )
    goto LABEL_12;
  sub_1409DBBB0(a1: &dword_1413AB6B8);
  if ( dword_1413AB6B8 != -1 )
    goto LABEL_12;
  v66 = qword_141314328;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314328) < 7 )
    sub_14001B680(a1: v63, a2: v62);
  v67 = aFunction;
  if ( (unsigned __int64)qword_141314330 > 0xF )
    v67 = *(char **)aFunction;
  v96 = 0;
  v97 = 0;
  v98 = 0;
  v68 = qword_141314328 + 7;
  if ( (unsigned __int64)(qword_141314328 + 7) <= 0xF )
  {
    v69 = 15;
    v72 = &v96;
  }
  else
  {
    v69 = v68 | 0xF;
    if ( (v68 | 0xFuLL) <= 0x7FFFFFFFFFFFFFFFLL )
    {
      if ( v69 < 0x16 )
        v69 = 22;
      if ( v69 == -1 )
      {
        v72 = nullptr;
        *(_QWORD *)&v96 = 0;
        goto LABEL_149;
      }
      if ( v69 + 1 < 0x1000 )
      {
        v72 = (__int128 *)sub_1409DB470(a1: v69 + 1);
        *(_QWORD *)&v96 = v72;
        goto LABEL_149;
      }
      v70 = v69 + 40;
      if ( v69 + 40 < v69 + 1 )
      {
        sub_14001B170(a1: v70, a2: v62, a3: v64, a4: v65);
        __debugbreak();
      }
    }
    else
    {
      v69 = 0x7FFFFFFFFFFFFFFFLL;
      v70 = 0x8000000000000027uLL;
    }
    v71 = sub_1409DB470(a1: v70);
    if ( v71 == 0 )
      __fastfail(5u);
    v72 = (__int128 *)((v71 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)v72 - 1) = v71;
    *(_QWORD *)&v96 = v72;
  }
LABEL_149:
  v97 = v66 + 7;
  v98 = v69;
  sub_140E82100(a1: v72, a2: v67, a3: v66);
  *(_DWORD *)((char *)v72 + v66) = 1735357040;
  *(_WORD *)((char *)v72 + v66 + 4) = 24946;
  *((_BYTE *)v72 + v66 + 6) = 109;
  *((_BYTE *)v72 + v68) = 0;
  v77 = &v96;
  if ( v98 > 0xF )
    LODWORD(v77) = v96;
  v78 = qword_141314328;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314328) < 7 )
    sub_14001B680(a1: v74, a2: v73);
  v79 = aFunction;
  if ( (unsigned __int64)qword_141314330 > 0xF )
    v79 = *(char **)aFunction;
  v90 = v79;
  v93 = 0;
  v94 = 0;
  v95 = 0;
  v80 = qword_141314328 + 7;
  if ( (unsigned __int64)(qword_141314328 + 7) <= 0xF )
  {
    v5 = 15;
    v84 = &v93;
  }
  else
  {
    if ( (v80 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
    {
      v81 = 0x8000000000000027uLL;
LABEL_158:
      v82 = sub_1409DB470(a1: v81);
      if ( v82 == 0 )
        __fastfail(5u);
      v84 = (__int128 *)((v82 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *((_QWORD *)v84 - 1) = v82;
      v79 = v90;
      *(_QWORD *)&v93 = v84;
      goto LABEL_170;
    }
    v5 = v80 | 0xF;
    if ( (v80 | 0xFuLL) < 0x16 )
      v5 = 22;
    v83 = v5 + 1;
    if ( v5 == -1 )
    {
      v84 = nullptr;
      *(_QWORD *)&v93 = 0;
    }
    else
    {
      if ( v83 >= 0x1000 )
      {
        v81 = v5 + 40;
        if ( v5 + 40 < (unsigned __int64)(v5 + 1) )
        {
          sub_14001B170(a1: v83, a2: v79, a3: v75, a4: v76);
          __debugbreak();
        }
        goto LABEL_158;
      }
      v84 = (__int128 *)sub_1409DB470(a1: v83);
      v79 = v90;
      *(_QWORD *)&v93 = v84;
    }
  }
LABEL_170:
  v94 = v78 + 7;
  v95 = v5;
  sub_140E82100(a1: v84, a2: v79, a3: v78);
  *(_DWORD *)((char *)v84 + v78) = 1735357040;
  *(_WORD *)((char *)v84 + v78 + 4) = 24946;
  *((_BYTE *)v84 + v78 + 6) = 109;
  *((_BYTE *)v84 + v80) = 0;
  v85 = &v93;
  if ( v95 > 0xF )
    v85 = (__int128 *)v93;
  v86 = sub_140062160(a1: v85);
  sub_140062D10(
    a1: (unsigned int)&dword_1413AB6B4,
    a2: v86,
    a3: (_DWORD)v77,
    a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Nebula\\inclu"
                  "de\\Nebula/Script/Binary/PXNebulaScriptBinary.h",
    a5: 59);
  if ( v95 > 0xF )
  {
    v87 = (void *)v93;
    if ( v95 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v93 - *(_QWORD *)(v93 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v87 = *(void **)(v93 - 8);
    }
    sub_1409DB4C0(lpMem: v87);
  }
  *(_QWORD *)&v93 = 19937;
  v94 = 0;
  v95 = 31;
  if ( v98 > 0xF )
  {
    v88 = (void *)v96;
    if ( v98 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v96 - *(_QWORD *)(v96 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v88 = *(void **)(v96 - 8);
    }
    sub_1409DB4C0(lpMem: v88);
  }
  sub_1409DBB40(a1: &dword_1413AB6B8);
LABEL_12:
  v89 = dword_1413AB6B4;
  return sub_1408933E0(a1: v2, a2: &v89, a3: v91 + 144);
}