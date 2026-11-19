__int64 __fastcall sub_14087A3F0(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r14
  char *v13; // rcx
  __int64 v14; // r12
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int128 *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int128 *v22; // rax
  __int64 v23; // rcx
  char *v24; // r12
  __int64 v25; // r14
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  __int128 *v29; // rsi
  __int64 v30; // rcx
  __int128 *v31; // rcx
  int v32; // eax
  void *v33; // rcx
  void *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r14
  char *v40; // rcx
  __int64 v41; // r12
  unsigned __int64 v42; // rdi
  unsigned __int64 v43; // rcx
  __int64 v44; // rax
  __int128 *v45; // rsi
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r9
  __int128 *v49; // r12
  __int64 v50; // r14
  char *v51; // rdx
  __int64 v52; // rsi
  unsigned __int64 v53; // r13
  __int64 v54; // rax
  unsigned __int64 v55; // rcx
  __int128 *v56; // rdi
  __int128 *v57; // rcx
  int v58; // eax
  void *v59; // rcx
  void *v60; // rcx
  __int64 v61; // [rsp+30h] [rbp-49h] BYREF
  __int64 v62; // [rsp+38h] [rbp-41h]
  __int128 *v63; // [rsp+40h] [rbp-39h]
  __int64 v64; // [rsp+48h] [rbp-31h]
  __int128 v65; // [rsp+50h] [rbp-29h] BYREF
  __int64 v66; // [rsp+60h] [rbp-19h]
  unsigned __int64 v67; // [rsp+68h] [rbp-11h]
  __int128 v68; // [rsp+70h] [rbp-9h] BYREF
  __int64 v69; // [rsp+80h] [rbp+7h]
  unsigned __int64 v70; // [rsp+88h] [rbp+Fh]

  v3 = a1;
  v62 = a1;
  v4 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  v64 = v4;
  if ( dword_1413AB68C > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413AB68C);
    if ( dword_1413AB68C == -1 )
    {
      sub_1409DB700(a1: sub_140EE3010);
      sub_1409DBB40(a1: &dword_1413AB68C);
    }
  }
  v5 = 0x7FFFFFFFFFFFFFFFLL;
  if ( dword_1413AB694 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413AB694);
    if ( dword_1413AB694 == -1 )
    {
      v12 = qword_141314308;
      if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314308) < 0xA )
        sub_14001B680(a1: v9, a2: v8);
      v13 = aSignature;
      if ( (unsigned __int64)qword_141314310 > 0xF )
        v13 = *(char **)aSignature;
      v61 = (__int64)v13;
      v68 = 0;
      v69 = 0;
      v70 = 0;
      v14 = qword_141314308 + 10;
      if ( (unsigned __int64)(qword_141314308 + 10) <= 0xF )
      {
        v15 = 15;
        v18 = &v68;
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
            *(_QWORD *)&v68 = 0;
            goto LABEL_36;
          }
          if ( v15 + 1 < 0x1000 )
          {
            v18 = (__int128 *)sub_1409DB470(a1: v15 + 1);
            v13 = (char *)v61;
            *(_QWORD *)&v68 = v18;
            goto LABEL_36;
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
        v13 = (char *)v61;
        *(_QWORD *)&v68 = v18;
      }
LABEL_36:
      v69 = v12 + 10;
      v70 = v15;
      sub_140E82100(a1: v18, a2: v13, a3: v12);
      qmemcpy((char *)v18 + v12, "returnType", 10);
      *((_BYTE *)v18 + v14) = 0;
      v22 = &v68;
      if ( v70 > 0xF )
        v22 = (__int128 *)v68;
      v63 = v22;
      v23 = qword_141314308;
      v61 = qword_141314308;
      if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314308) < 0xA )
        sub_14001B680(a1: qword_141314308, a2: v19);
      v24 = aSignature;
      if ( (unsigned __int64)qword_141314310 > 0xF )
        v24 = *(char **)aSignature;
      v65 = 0;
      v66 = 0;
      v67 = 0;
      v25 = qword_141314308 + 10;
      if ( (unsigned __int64)(qword_141314308 + 10) <= 0xF )
      {
        v26 = 15;
        v29 = &v65;
      }
      else
      {
        v26 = v25 | 0xF;
        if ( (v25 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
        {
          v26 = 0x7FFFFFFFFFFFFFFFLL;
          v27 = 0x8000000000000027uLL;
LABEL_45:
          v28 = sub_1409DB470(a1: v27);
          if ( v28 == 0 )
            __fastfail(5u);
          v29 = (__int128 *)((v28 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
          *((_QWORD *)v29 - 1) = v28;
          v23 = v61;
          *(_QWORD *)&v65 = v29;
          goto LABEL_57;
        }
        if ( v26 < 0x16 )
          v26 = 22;
        if ( v26 == -1 )
        {
          v29 = nullptr;
          *(_QWORD *)&v65 = 0;
        }
        else
        {
          if ( v26 + 1 >= 0x1000 )
          {
            v27 = v26 + 40;
            if ( v26 + 40 < v26 + 1 )
            {
              sub_14001B170(a1: v27, a2: 0, a3: v20, a4: v21);
              __debugbreak();
            }
            goto LABEL_45;
          }
          v29 = (__int128 *)sub_1409DB470(a1: v26 + 1);
          v23 = v61;
          *(_QWORD *)&v65 = v29;
        }
      }
LABEL_57:
      v66 = v25;
      v67 = v26;
      sub_140E82100(a1: v29, a2: v24, a3: v23);
      v30 = v61;
      *(_QWORD *)((char *)v29 + v61) = 0x79546E7275746572LL;
      *(_WORD *)((char *)v29 + v30 + 8) = 25968;
      *((_BYTE *)v29 + v25) = 0;
      v31 = &v65;
      if ( v67 > 0xF )
        v31 = (__int128 *)v65;
      v32 = sub_140062160(a1: v31);
      sub_140062D10(
        a1: (unsigned int)&dword_1413AB690,
        a2: v32,
        a3: (_DWORD)v63,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Nebula\\i"
                      "nclude\\Nebula/Script/Binary/PXNebulaScriptBinary.h",
        a5: 41);
      if ( v67 > 0xF )
      {
        v33 = (void *)v65;
        if ( v67 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v65 - *(_QWORD *)(v65 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v33 = *(void **)(v65 - 8);
        }
        sub_1409DB4C0(lpMem: v33);
      }
      *(_QWORD *)&v65 = 19937;
      v66 = 0;
      v67 = 31;
      if ( v70 > 0xF )
      {
        v34 = (void *)v68;
        if ( v70 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v68 - *(_QWORD *)(v68 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v34 = *(void **)(v68 - 8);
        }
        sub_1409DB4C0(lpMem: v34);
      }
      sub_1409DBB40(a1: &dword_1413AB694);
      v4 = v64;
      v3 = v62;
    }
  }
  LODWORD(v61) = dword_1413AB690;
  if ( *(_DWORD *)a2 != 0 )
  {
    sub_140084D50(a1: a2, a2: &v61);
  }
  else if ( sub_140030D50(a1: a2, a2: &v61, a3: 256) == 0 )
  {
    goto LABEL_10;
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v3 + 8) + 8LL))(a1: v3 + 8, a2);
  v6 = *(_QWORD *)(a2 + 24);
  if ( v6 == 0 )
    v6 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL);
  *(_QWORD *)(a2 + 40) = *(unsigned int *)(v6 + 12LL * *(_QWORD *)(a2 + 40) + 4);
LABEL_10:
  if ( dword_1413AB69C <= *(_DWORD *)(v4 + 76) )
    goto LABEL_11;
  sub_1409DBBB0(a1: &dword_1413AB69C);
  if ( dword_1413AB69C != -1 )
    goto LABEL_11;
  v39 = qword_141314308;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314308) < 0xE )
    sub_14001B680(a1: v36, a2: v35);
  v40 = aSignature;
  if ( (unsigned __int64)qword_141314310 > 0xF )
    v40 = *(char **)aSignature;
  v61 = (__int64)v40;
  v68 = 0;
  v69 = 0;
  v70 = 0;
  v41 = qword_141314308 + 14;
  if ( (unsigned __int64)(qword_141314308 + 14) <= 0xF )
  {
    v42 = 15;
    v45 = &v68;
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
        *(_QWORD *)&v68 = 0;
        goto LABEL_92;
      }
      if ( v42 + 1 < 0x1000 )
      {
        v45 = (__int128 *)sub_1409DB470(a1: v42 + 1);
        v40 = (char *)v61;
        *(_QWORD *)&v68 = v45;
        goto LABEL_92;
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
    v40 = (char *)v61;
    *(_QWORD *)&v68 = v45;
  }
LABEL_92:
  v69 = v39 + 14;
  v70 = v42;
  sub_140E82100(a1: v45, a2: v40, a3: v39);
  qmemcpy((char *)v45 + v39, "parameterTypes", 14);
  *((_BYTE *)v45 + v41) = 0;
  v49 = &v68;
  if ( v70 > 0xF )
    LODWORD(v49) = v68;
  v50 = qword_141314308;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314308) < 0xE )
    sub_14001B680(a1: v47, a2: v46);
  v51 = aSignature;
  if ( (unsigned __int64)qword_141314310 > 0xF )
    v51 = *(char **)aSignature;
  v61 = (__int64)v51;
  v65 = 0;
  v66 = 0;
  v67 = 0;
  v52 = qword_141314308 + 14;
  if ( (unsigned __int64)(qword_141314308 + 14) <= 0xF )
  {
    v5 = 15;
    v56 = &v65;
  }
  else
  {
    if ( (v52 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
    {
      v53 = 0x8000000000000027uLL;
LABEL_101:
      v54 = sub_1409DB470(a1: v53);
      if ( v54 == 0 )
        __fastfail(5u);
      v56 = (__int128 *)((v54 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *((_QWORD *)v56 - 1) = v54;
      v51 = (char *)v61;
      *(_QWORD *)&v65 = v56;
      goto LABEL_113;
    }
    v5 = v52 | 0xF;
    if ( (v52 | 0xFuLL) < 0x16 )
      v5 = 22;
    v55 = v5 + 1;
    if ( v5 == -1 )
    {
      v56 = nullptr;
      *(_QWORD *)&v65 = 0;
    }
    else
    {
      if ( v55 >= 0x1000 )
      {
        v53 = v5 + 40;
        if ( v5 + 40 < (unsigned __int64)(v5 + 1) )
        {
          sub_14001B170(a1: v55, a2: v51, a3: 0, a4: v48);
          __debugbreak();
        }
        goto LABEL_101;
      }
      v56 = (__int128 *)sub_1409DB470(a1: v55);
      v51 = (char *)v61;
      *(_QWORD *)&v65 = v56;
    }
  }
LABEL_113:
  v66 = v50 + 14;
  v67 = v5;
  sub_140E82100(a1: v56, a2: v51, a3: v50);
  qmemcpy((char *)v56 + v50, "parameterTypes", 14);
  *((_BYTE *)v56 + v52) = 0;
  v57 = &v65;
  if ( v67 > 0xF )
    v57 = (__int128 *)v65;
  v58 = sub_140062160(a1: v57);
  sub_140062D10(
    a1: (unsigned int)&dword_1413AB698,
    a2: v58,
    a3: (_DWORD)v49,
    a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Nebula\\inclu"
                  "de\\Nebula/Script/Binary/PXNebulaScriptBinary.h",
    a5: 42);
  if ( v67 > 0xF )
  {
    v59 = (void *)v65;
    if ( v67 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v65 - *(_QWORD *)(v65 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v59 = *(void **)(v65 - 8);
    }
    sub_1409DB4C0(lpMem: v59);
  }
  *(_QWORD *)&v65 = 19937;
  v66 = 0;
  v67 = 31;
  if ( v70 > 0xF )
  {
    v60 = (void *)v68;
    if ( v70 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v68 - *(_QWORD *)(v68 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v60 = *(void **)(v68 - 8);
    }
    sub_1409DB4C0(lpMem: v60);
  }
  sub_1409DBB40(a1: &dword_1413AB69C);
LABEL_11:
  LODWORD(v61) = dword_1413AB698;
  return sub_140873250(a1: a2, a2: &v61, a3: v62 + 80);
}