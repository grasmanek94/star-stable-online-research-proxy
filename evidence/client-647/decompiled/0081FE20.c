__int64 __fastcall sub_14081FE20(__int64 a1, _DWORD *a2)
{
  _DWORD *v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v6; // rbx
  char v7; // al
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r14
  char *v13; // r13
  __int64 v14; // r15
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int128 *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  char *v23; // rax
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
  char *v40; // r13
  __int64 v41; // r15
  unsigned __int64 v42; // rdi
  unsigned __int64 v43; // rcx
  __int64 v44; // rax
  __int128 *v45; // rsi
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int128 *v50; // r15
  __int64 v51; // r14
  char *v52; // rdx
  __int64 v53; // rsi
  unsigned __int64 v54; // r12
  __int64 v55; // rax
  unsigned __int64 v56; // rcx
  __int128 *v57; // rdi
  __int128 *v58; // rcx
  int v59; // eax
  void *v60; // rcx
  void *v61; // rcx
  char *v62; // [rsp+30h] [rbp-49h] BYREF
  _DWORD *v63; // [rsp+38h] [rbp-41h]
  __int64 v64; // [rsp+40h] [rbp-39h]
  __int64 v65; // [rsp+48h] [rbp-31h]
  __int128 v66; // [rsp+50h] [rbp-29h] BYREF
  __int64 v67; // [rsp+60h] [rbp-19h]
  unsigned __int64 v68; // [rsp+68h] [rbp-11h]
  __int128 v69; // [rsp+70h] [rbp-9h] BYREF
  __int64 v70; // [rsp+80h] [rbp+7h]
  unsigned __int64 v71; // [rsp+88h] [rbp+Fh]

  v2 = a2;
  v63 = a2;
  v64 = a1;
  v3 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  v65 = v3;
  if ( dword_1413AA428 > *(_DWORD *)(v3 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413AA428);
    if ( dword_1413AA428 == -1 )
    {
      sub_1409DB700(a1: sub_140EE2A60);
      sub_1409DBB40(a1: &dword_1413AA428);
    }
  }
  v4 = 0x7FFFFFFFFFFFFFFFLL;
  if ( dword_1413AA430 > *(_DWORD *)(v3 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413AA430);
    if ( dword_1413AA430 == -1 )
    {
      v12 = qword_141314248;
      if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314248) < 4 )
        sub_14001B680(a1: v9, a2: v8);
      v13 = aBasicplantinfo;
      if ( (unsigned __int64)qword_141314250 > 0xF )
        v13 = *(char **)aBasicplantinfo;
      v69 = 0;
      v70 = 0;
      v71 = 0;
      v14 = qword_141314248 + 4;
      if ( (unsigned __int64)(qword_141314248 + 4) <= 0xF )
      {
        v15 = 15;
        v18 = &v69;
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
            *(_QWORD *)&v69 = 0;
            goto LABEL_33;
          }
          if ( v15 + 1 < 0x1000 )
          {
            v18 = (__int128 *)sub_1409DB470(a1: v15 + 1);
            *(_QWORD *)&v69 = v18;
            goto LABEL_33;
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
        *(_QWORD *)&v69 = v18;
      }
LABEL_33:
      v70 = v12 + 4;
      v71 = v15;
      sub_140E82100(a1: v18, a2: v13, a3: v12);
      *(_DWORD *)((char *)v18 + v12) = *(_DWORD *)"name";
      *((_BYTE *)v18 + v14) = 0;
      v23 = (char *)&v69;
      if ( v71 > 0xF )
        v23 = (char *)v69;
      v62 = v23;
      v24 = qword_141314248;
      if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314248) < 4 )
        sub_14001B680(a1: v20, a2: v19);
      v25 = aBasicplantinfo;
      if ( (unsigned __int64)qword_141314250 > 0xF )
        v25 = *(char **)aBasicplantinfo;
      v66 = 0;
      v67 = 0;
      v68 = 0;
      v26 = qword_141314248 + 4;
      if ( (unsigned __int64)(qword_141314248 + 4) <= 0xF )
      {
        v27 = 15;
        v30 = &v66;
      }
      else
      {
        v27 = v26 | 0xF;
        if ( (v26 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
        {
          v27 = 0x7FFFFFFFFFFFFFFFLL;
          v28 = 0x8000000000000027uLL;
LABEL_42:
          v29 = sub_1409DB470(a1: v28);
          if ( v29 == 0 )
            __fastfail(5u);
          v30 = (__int128 *)((v29 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
          *((_QWORD *)v30 - 1) = v29;
          *(_QWORD *)&v66 = v30;
          goto LABEL_54;
        }
        if ( v27 < 0x16 )
          v27 = 22;
        if ( v27 == -1 )
        {
          v30 = nullptr;
          *(_QWORD *)&v66 = 0;
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
            goto LABEL_42;
          }
          v30 = (__int128 *)sub_1409DB470(a1: v27 + 1);
          *(_QWORD *)&v66 = v30;
        }
      }
LABEL_54:
      v67 = v24 + 4;
      v68 = v27;
      sub_140E82100(a1: v30, a2: v25, a3: v24);
      *(_DWORD *)((char *)v30 + v24) = *(_DWORD *)"name";
      *((_BYTE *)v30 + v26) = 0;
      v31 = &v66;
      if ( v68 > 0xF )
        v31 = (__int128 *)v66;
      v32 = sub_140062160(a1: v31);
      sub_140062D10(
        a1: (unsigned int)&dword_1413AA42C,
        a2: v32,
        a3: (_DWORD)v62,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Projects\\StarSta"
                      "bleOnline\\SSOLib\\include\\SSOLib/Actors/Gardening/PXGarden.h",
        a5: 97);
      if ( v68 > 0xF )
      {
        v33 = (void *)v66;
        if ( v68 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v66 - *(_QWORD *)(v66 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v33 = *(void **)(v66 - 8);
        }
        sub_1409DB4C0(lpMem: v33);
      }
      *(_QWORD *)&v66 = 19937;
      v67 = 0;
      v68 = 31;
      if ( v71 > 0xF )
      {
        v34 = (void *)v69;
        if ( v71 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v69 - *(_QWORD *)(v69 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v34 = *(void **)(v69 - 8);
        }
        sub_1409DB4C0(lpMem: v34);
      }
      sub_1409DBB40(a1: &dword_1413AA430);
      v2 = v63;
      v3 = v65;
    }
  }
  LODWORD(v62) = dword_1413AA42C;
  sub_140085740(a1: v2, a2: &v62, a3: v64 + 8, a4: &byte_140EEC5C5);
  if ( dword_1413AA438 <= *(_DWORD *)(v3 + 76) )
    goto LABEL_4;
  sub_1409DBBB0(a1: &dword_1413AA438);
  if ( dword_1413AA438 != -1 )
    goto LABEL_4;
  v39 = qword_141314248;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314248) < 9 )
    sub_14001B680(a1: v36, a2: v35);
  v40 = aBasicplantinfo;
  if ( (unsigned __int64)qword_141314250 > 0xF )
    v40 = *(char **)aBasicplantinfo;
  v69 = 0;
  v70 = 0;
  v71 = 0;
  v41 = qword_141314248 + 9;
  if ( (unsigned __int64)(qword_141314248 + 9) <= 0xF )
  {
    v42 = 15;
    v45 = &v69;
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
        *(_QWORD *)&v69 = 0;
        goto LABEL_89;
      }
      if ( v42 + 1 < 0x1000 )
      {
        v45 = (__int128 *)sub_1409DB470(a1: v42 + 1);
        *(_QWORD *)&v69 = v45;
        goto LABEL_89;
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
    *(_QWORD *)&v69 = v45;
  }
LABEL_89:
  v70 = v39 + 9;
  v71 = v42;
  sub_140E82100(a1: v45, a2: v40, a3: v39);
  *(_QWORD *)((char *)v45 + v39) = 0x657A696C69726566LL;
  *((_BYTE *)v45 + v39 + 8) = 114;
  *((_BYTE *)v45 + v41) = 0;
  v50 = &v69;
  if ( v71 > 0xF )
    LODWORD(v50) = v69;
  v51 = qword_141314248;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314248) < 9 )
    sub_14001B680(a1: v47, a2: v46);
  v52 = aBasicplantinfo;
  if ( (unsigned __int64)qword_141314250 > 0xF )
    v52 = *(char **)aBasicplantinfo;
  v62 = v52;
  v66 = 0;
  v67 = 0;
  v68 = 0;
  v53 = qword_141314248 + 9;
  if ( (unsigned __int64)(qword_141314248 + 9) <= 0xF )
  {
    v4 = 15;
    v57 = &v66;
  }
  else
  {
    if ( (v53 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
    {
      v54 = 0x8000000000000027uLL;
LABEL_98:
      v55 = sub_1409DB470(a1: v54);
      if ( v55 == 0 )
        __fastfail(5u);
      v57 = (__int128 *)((v55 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *((_QWORD *)v57 - 1) = v55;
      v52 = v62;
      *(_QWORD *)&v66 = v57;
      goto LABEL_110;
    }
    v4 = v53 | 0xF;
    if ( (v53 | 0xFuLL) < 0x16 )
      v4 = 22;
    v56 = v4 + 1;
    if ( v4 == -1 )
    {
      v57 = nullptr;
      *(_QWORD *)&v66 = 0;
    }
    else
    {
      if ( v56 >= 0x1000 )
      {
        v54 = v4 + 40;
        if ( v4 + 40 < (unsigned __int64)(v4 + 1) )
        {
          sub_14001B170(a1: v56, a2: v52, a3: v48, a4: v49);
          __debugbreak();
        }
        goto LABEL_98;
      }
      v57 = (__int128 *)sub_1409DB470(a1: v56);
      v52 = v62;
      *(_QWORD *)&v66 = v57;
    }
  }
LABEL_110:
  v67 = v51 + 9;
  v68 = v4;
  sub_140E82100(a1: v57, a2: v52, a3: v51);
  *(_QWORD *)((char *)v57 + v51) = 0x657A696C69726566LL;
  *((_BYTE *)v57 + v51 + 8) = 114;
  *((_BYTE *)v57 + v53) = 0;
  v58 = &v66;
  if ( v68 > 0xF )
    v58 = (__int128 *)v66;
  v59 = sub_140062160(a1: v58);
  sub_140062D10(
    a1: (unsigned int)&dword_1413AA434,
    a2: v59,
    a3: (_DWORD)v50,
    a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Projects\\StarStableO"
                  "nline\\SSOLib\\include\\SSOLib/Actors/Gardening/PXGarden.h",
    a5: 98);
  if ( v68 > 0xF )
  {
    v60 = (void *)v66;
    if ( v68 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v66 - *(_QWORD *)(v66 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v60 = *(void **)(v66 - 8);
    }
    sub_1409DB4C0(lpMem: v60);
  }
  *(_QWORD *)&v66 = 19937;
  v67 = 0;
  v68 = 31;
  if ( v71 > 0xF )
  {
    v61 = (void *)v69;
    if ( v71 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v69 - *(_QWORD *)(v69 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v61 = *(void **)(v69 - 8);
    }
    sub_1409DB4C0(lpMem: v61);
  }
  sub_1409DBB40(a1: &dword_1413AA438);
  v2 = v63;
LABEL_4:
  result = (unsigned int)dword_1413AA434;
  LODWORD(v62) = dword_1413AA434;
  v6 = v64;
  if ( *v2 != 0 )
  {
    if ( *(_BYTE *)(v64 + 40) != 0 )
    {
      v7 = sub_140076FF0();
      return sub_140084F80(a1: (_DWORD)v2, a2: (unsigned int)&v62, a3: (int)v6 + 40, a4: 1, a5: v7);
    }
  }
  else
  {
    result = sub_1400852F0(a1: (_DWORD)v2, a2: (int)v64 + 40, a3: (unsigned int)&v62, a4: 1, a5: 512);
    if ( (_BYTE)result == 0 )
      *(_BYTE *)(v6 + 40) = 0;
  }
  return result;
}