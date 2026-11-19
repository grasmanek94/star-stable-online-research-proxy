__int64 __fastcall sub_1408933E0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // r12
  __int64 result; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rax
  char v13; // al
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r13
  char *v20; // rcx
  __int64 v21; // r12
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  __int128 *v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int128 *v29; // rax
  __int64 v30; // rcx
  char *v31; // r13
  __int64 v32; // r12
  unsigned __int64 v33; // rbx
  unsigned __int64 v34; // rcx
  __int64 v35; // rax
  __int128 *v36; // rsi
  __int128 *v37; // rcx
  int v38; // eax
  void *v39; // rcx
  void *v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // r13
  char *v46; // rcx
  __int64 v47; // r12
  unsigned __int64 v48; // rbx
  unsigned __int64 v49; // rcx
  __int64 v50; // rax
  __int128 *v51; // rsi
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r9
  __int128 *v55; // r12
  __int64 v56; // r13
  char *v57; // rdx
  __int64 v58; // rsi
  unsigned __int64 v59; // rax
  __int64 v60; // rax
  unsigned __int64 v61; // rcx
  __int128 *v62; // rbx
  __int128 *v63; // rcx
  int v64; // eax
  void *v65; // rcx
  void *v66; // rcx
  __int64 v67; // [rsp+30h] [rbp-39h] BYREF
  __int128 *v68; // [rsp+38h] [rbp-31h]
  __int64 v69; // [rsp+40h] [rbp-29h]
  __int128 v70; // [rsp+48h] [rbp-21h] BYREF
  __int64 v71; // [rsp+58h] [rbp-11h]
  unsigned __int64 v72; // [rsp+60h] [rbp-9h]
  __int128 v73; // [rsp+68h] [rbp-1h] BYREF
  __int64 v74; // [rsp+78h] [rbp+Fh]
  unsigned __int64 v75; // [rsp+80h] [rbp+17h]

  v6 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  v69 = v6;
  if ( dword_1413ABD74 > *(_DWORD *)(v6 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413ABD74);
    if ( dword_1413ABD74 == -1 )
    {
      sub_1409DB700(a1: sub_140EE30F0);
      sub_1409DBB40(a1: &dword_1413ABD74);
    }
  }
  if ( *(_DWORD *)a1 != 0 )
  {
    sub_140084D50(a1, a2);
  }
  else
  {
    result = sub_140030D50(a1, a2, a3: 256);
    if ( result == 0 )
      return result;
  }
  v8 = 0x7FFFFFFFFFFFFFFFLL;
  if ( dword_1413ABD7C > *(_DWORD *)(v6 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413ABD7C);
    if ( dword_1413ABD7C == -1 )
    {
      v19 = qword_1413143C8;
      if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_1413143C8) < 4 )
        sub_14001B680(a1: v16, a2: v15);
      v20 = aNebulaprogram;
      if ( (unsigned __int64)qword_1413143D0 > 0xF )
        v20 = *(char **)aNebulaprogram;
      v67 = (__int64)v20;
      v73 = 0;
      v74 = 0;
      v75 = 0;
      v21 = qword_1413143C8 + 4;
      if ( (unsigned __int64)(qword_1413143C8 + 4) <= 0xF )
      {
        v22 = 15;
        v25 = &v73;
      }
      else
      {
        v22 = v21 | 0xF;
        if ( (v21 | 0xFuLL) <= 0x7FFFFFFFFFFFFFFFLL )
        {
          if ( v22 < 0x16 )
            v22 = 22;
          if ( v22 == -1 )
          {
            v25 = nullptr;
            *(_QWORD *)&v73 = 0;
            goto LABEL_45;
          }
          if ( v22 + 1 < 0x1000 )
          {
            v25 = (__int128 *)sub_1409DB470(a1: v22 + 1);
            v20 = (char *)v67;
            *(_QWORD *)&v73 = v25;
            goto LABEL_45;
          }
          v23 = v22 + 40;
          if ( v22 + 40 < v22 + 1 )
          {
            sub_14001B170(a1: v23, a2: 0, a3: v17, a4: v18);
            __debugbreak();
          }
        }
        else
        {
          v22 = 0x7FFFFFFFFFFFFFFFLL;
          v23 = 0x8000000000000027uLL;
        }
        v24 = sub_1409DB470(a1: v23);
        if ( v24 == 0 )
          __fastfail(5u);
        v25 = (__int128 *)((v24 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *((_QWORD *)v25 - 1) = v24;
        v20 = (char *)v67;
        *(_QWORD *)&v73 = v25;
      }
LABEL_45:
      v74 = v19 + 4;
      v75 = v22;
      sub_140E82100(a1: v25, a2: v20, a3: v19);
      *(_DWORD *)((char *)v25 + v19) = *(_DWORD *)"code";
      *((_BYTE *)v25 + v21) = 0;
      v29 = &v73;
      if ( v75 > 0xF )
        v29 = (__int128 *)v73;
      v68 = v29;
      v30 = qword_1413143C8;
      v67 = qword_1413143C8;
      if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_1413143C8) < 4 )
        sub_14001B680(a1: qword_1413143C8, a2: v26);
      v31 = aNebulaprogram;
      if ( (unsigned __int64)qword_1413143D0 > 0xF )
        v31 = *(char **)aNebulaprogram;
      v70 = 0;
      v71 = 0;
      v72 = 0;
      v32 = qword_1413143C8 + 4;
      if ( (unsigned __int64)(qword_1413143C8 + 4) <= 0xF )
      {
        v33 = 15;
        v36 = &v70;
      }
      else
      {
        v33 = v32 | 0xF;
        if ( (v32 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
        {
          v33 = 0x7FFFFFFFFFFFFFFFLL;
          v34 = 0x8000000000000027uLL;
LABEL_54:
          v35 = sub_1409DB470(a1: v34);
          if ( v35 == 0 )
            __fastfail(5u);
          v36 = (__int128 *)((v35 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
          *((_QWORD *)v36 - 1) = v35;
          v30 = v67;
          *(_QWORD *)&v70 = v36;
          goto LABEL_66;
        }
        if ( v33 < 0x16 )
          v33 = 22;
        if ( v33 == -1 )
        {
          v36 = nullptr;
          *(_QWORD *)&v70 = 0;
        }
        else
        {
          if ( v33 + 1 >= 0x1000 )
          {
            v34 = v33 + 40;
            if ( v33 + 40 < v33 + 1 )
            {
              sub_14001B170(a1: v34, a2: 0, a3: v27, a4: v28);
              __debugbreak();
            }
            goto LABEL_54;
          }
          v36 = (__int128 *)sub_1409DB470(a1: v33 + 1);
          v30 = v67;
          *(_QWORD *)&v70 = v36;
        }
      }
LABEL_66:
      v71 = v32;
      v72 = v33;
      sub_140E82100(a1: v36, a2: v31, a3: v30);
      *(_DWORD *)((char *)v36 + v67) = *(_DWORD *)"code";
      *((_BYTE *)v36 + v32) = 0;
      v37 = &v70;
      if ( v72 > 0xF )
        v37 = (__int128 *)v70;
      v38 = sub_140062160(a1: v37);
      sub_140062D10(
        a1: (unsigned int)&dword_1413ABD78,
        a2: v38,
        a3: (_DWORD)v68,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Nebula\\s"
                      "rc\\Script\\Execute\\PXNebulaProgram.cpp",
        a5: 284);
      if ( v72 > 0xF )
      {
        v39 = (void *)v70;
        if ( v72 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v70 - *(_QWORD *)(v70 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v39 = *(void **)(v70 - 8);
        }
        sub_1409DB4C0(lpMem: v39);
      }
      *(_QWORD *)&v70 = 19937;
      v71 = 0;
      v72 = 31;
      if ( v75 > 0xF )
      {
        v40 = (void *)v73;
        if ( v75 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v73 - *(_QWORD *)(v73 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v40 = *(void **)(v73 - 8);
        }
        sub_1409DB4C0(lpMem: v40);
      }
      sub_1409DBB40(a1: &dword_1413ABD7C);
      v6 = v69;
    }
  }
  LODWORD(v67) = dword_1413ABD78;
  if ( *(_DWORD *)a1 != 0 )
  {
    if ( *a3 != a3[1] )
    {
      v13 = sub_140076F30();
      if ( a3[1] == *a3 )
        __fastfail(5u);
      sub_140084DC0(a1, a2: (unsigned int)&v67, a3: *a3, a4: *((_DWORD *)a3 + 2) - *(_DWORD *)a3, a5: v13, a6: 1024);
    }
  }
  else
  {
    v9 = sub_140030D50(a1, a2: &v67, a3: 1024);
    v10 = v9;
    if ( v9 != 0 )
    {
      v11 = (unsigned int)sub_140085670(a1, a2: v9);
      sub_1401B8340(a1: a3, a2: v11);
      v12 = sub_1400855D0(a1, a2: v10);
      sub_140083990(a1: *a3, a2: v12, a3: (unsigned int)v11);
    }
    else if ( *a3 != a3[1] )
    {
      a3[1] = *a3;
    }
  }
  if ( dword_1413ABD84 <= *(_DWORD *)(v6 + 76) )
    goto LABEL_17;
  sub_1409DBBB0(a1: &dword_1413ABD84);
  if ( dword_1413ABD84 != -1 )
    goto LABEL_17;
  v45 = qword_1413143C8;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_1413143C8) < 4 )
    sub_14001B680(a1: v42, a2: v41);
  v46 = aNebulaprogram;
  if ( (unsigned __int64)qword_1413143D0 > 0xF )
    v46 = *(char **)aNebulaprogram;
  v67 = (__int64)v46;
  v73 = 0;
  v74 = 0;
  v75 = 0;
  v47 = qword_1413143C8 + 4;
  if ( (unsigned __int64)(qword_1413143C8 + 4) <= 0xF )
  {
    v48 = 15;
    v51 = &v73;
  }
  else
  {
    v48 = v47 | 0xF;
    if ( (v47 | 0xFuLL) <= 0x7FFFFFFFFFFFFFFFLL )
    {
      if ( v48 < 0x16 )
        v48 = 22;
      if ( v48 == -1 )
      {
        v51 = nullptr;
        *(_QWORD *)&v73 = 0;
        goto LABEL_101;
      }
      if ( v48 + 1 < 0x1000 )
      {
        v51 = (__int128 *)sub_1409DB470(a1: v48 + 1);
        v46 = (char *)v67;
        *(_QWORD *)&v73 = v51;
        goto LABEL_101;
      }
      v49 = v48 + 40;
      if ( v48 + 40 < v48 + 1 )
      {
        sub_14001B170(a1: v49, a2: 0, a3: v43, a4: v44);
        __debugbreak();
      }
    }
    else
    {
      v48 = 0x7FFFFFFFFFFFFFFFLL;
      v49 = 0x8000000000000027uLL;
    }
    v50 = sub_1409DB470(a1: v49);
    if ( v50 == 0 )
      __fastfail(5u);
    v51 = (__int128 *)((v50 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)v51 - 1) = v50;
    v46 = (char *)v67;
    *(_QWORD *)&v73 = v51;
  }
LABEL_101:
  v74 = v45 + 4;
  v75 = v48;
  sub_140E82100(a1: v51, a2: v46, a3: v45);
  *(_DWORD *)((char *)v51 + v45) = *(_DWORD *)"data";
  *((_BYTE *)v51 + v47) = 0;
  v55 = &v73;
  if ( v75 > 0xF )
    LODWORD(v55) = v73;
  v56 = qword_1413143C8;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_1413143C8) < 4 )
    sub_14001B680(a1: v53, a2: v52);
  v57 = aNebulaprogram;
  if ( (unsigned __int64)qword_1413143D0 > 0xF )
    v57 = *(char **)aNebulaprogram;
  v67 = (__int64)v57;
  v70 = 0;
  v71 = 0;
  v72 = 0;
  v58 = qword_1413143C8 + 4;
  if ( (unsigned __int64)(qword_1413143C8 + 4) <= 0xF )
  {
    v8 = 15;
    v62 = &v70;
  }
  else
  {
    if ( (v58 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
    {
      v59 = 0x8000000000000027uLL;
LABEL_110:
      v60 = sub_1409DB470(a1: v59);
      if ( v60 == 0 )
        __fastfail(5u);
      v62 = (__int128 *)((v60 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *((_QWORD *)v62 - 1) = v60;
      v57 = (char *)v67;
      *(_QWORD *)&v70 = v62;
      goto LABEL_122;
    }
    v8 = v58 | 0xF;
    if ( (v58 | 0xFuLL) < 0x16 )
      v8 = 22;
    v61 = v8 + 1;
    if ( v8 == -1 )
    {
      v62 = nullptr;
      *(_QWORD *)&v70 = 0;
    }
    else
    {
      if ( v61 >= 0x1000 )
      {
        v59 = v8 + 40;
        if ( v8 + 40 < (unsigned __int64)(v8 + 1) )
        {
          sub_14001B170(a1: v61, a2: v57, a3: 0, a4: v54);
          __debugbreak();
        }
        goto LABEL_110;
      }
      v62 = (__int128 *)sub_1409DB470(a1: v61);
      v57 = (char *)v67;
      *(_QWORD *)&v70 = v62;
    }
  }
LABEL_122:
  v71 = v56 + 4;
  v72 = v8;
  sub_140E82100(a1: v62, a2: v57, a3: v56);
  *(_DWORD *)((char *)v62 + v56) = *(_DWORD *)"data";
  *((_BYTE *)v62 + v58) = 0;
  v63 = &v70;
  if ( v72 > 0xF )
    v63 = (__int128 *)v70;
  v64 = sub_140062160(a1: v63);
  sub_140062D10(
    a1: (unsigned int)&dword_1413ABD80,
    a2: v64,
    a3: (_DWORD)v55,
    a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Nebula\\src\\"
                  "Script\\Execute\\PXNebulaProgram.cpp",
    a5: 285);
  if ( v72 > 0xF )
  {
    v65 = (void *)v70;
    if ( v72 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v70 - *(_QWORD *)(v70 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v65 = *(void **)(v70 - 8);
    }
    sub_1409DB4C0(lpMem: v65);
  }
  *(_QWORD *)&v70 = 19937;
  v71 = 0;
  v72 = 31;
  if ( v75 > 0xF )
  {
    v66 = (void *)v73;
    if ( v75 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v73 - *(_QWORD *)(v73 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v66 = *(void **)(v73 - 8);
    }
    sub_1409DB4C0(lpMem: v66);
  }
  sub_1409DBB40(a1: &dword_1413ABD84);
LABEL_17:
  LODWORD(v67) = dword_1413ABD80;
  sub_1405D03F0(a1, a2: &v67, a3: a3 + 3);
  v14 = *(_QWORD *)(a1 + 24);
  if ( v14 == 0 )
    v14 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
  result = *(unsigned int *)(v14 + 12LL * *(_QWORD *)(a1 + 40) + 4);
  *(_QWORD *)(a1 + 40) = result;
  return result;
}