__int64 __fastcall sub_140823560(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rdi
  __int64 *v5; // rax
  __int64 v6; // rbx
  _QWORD *v7; // rax
  int v8; // eax
  _DWORD *v9; // rsi
  char v10; // al
  __int64 *v11; // rax
  __int64 v12; // rbx
  _QWORD *v13; // rax
  int v14; // eax
  _QWORD *v15; // rax
  _QWORD *v16; // r13
  _BYTE *v17; // rbx
  __int64 v18; // rdi
  _BYTE *v19; // rsi
  __int64 v20; // rax
  _BYTE *v21; // rax
  __int64 i; // rax
  _QWORD *v23; // rbx
  void *v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r13
  char *v32; // rcx
  __int64 v33; // r12
  unsigned __int64 v34; // rdi
  unsigned __int64 v35; // rcx
  __int64 v36; // rax
  __int128 *v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int128 *v41; // rax
  __int64 v42; // rcx
  char *v43; // r13
  __int64 v44; // rdx
  __int64 v45; // r12
  unsigned __int64 v46; // rdi
  unsigned __int64 v47; // rcx
  __int64 v48; // rax
  __int128 *v49; // rsi
  __int64 v50; // rcx
  __int128 *v51; // rcx
  int v52; // eax
  void *v53; // rcx
  void *v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // r13
  char *v60; // rcx
  __int64 v61; // r12
  unsigned __int64 v62; // rdi
  unsigned __int64 v63; // rcx
  __int64 v64; // rax
  __int128 *v65; // rsi
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int128 *v70; // rax
  __int64 v71; // r13
  char *v72; // r12
  __int64 v73; // rdx
  __int64 v74; // rsi
  unsigned __int64 v75; // rax
  __int64 v76; // rax
  unsigned __int64 v77; // rcx
  __int128 *v78; // rdi
  __int128 *v79; // rcx
  int v80; // eax
  void *v81; // rcx
  void *v82; // rcx
  char v83; // al
  __int64 *v84; // rax
  __int64 v85; // rbx
  _QWORD *v86; // rax
  int v87; // eax
  void *v88; // rcx
  void *v89; // rcx
  char v90; // al
  __int64 *v91; // rax
  __int64 v92; // rbx
  _QWORD *v93; // rax
  int v94; // eax
  void *v95; // rcx
  char v96; // al
  __int64 *v97; // rax
  __int64 v98; // rbx
  _QWORD *v99; // rax
  int v100; // eax
  char v101; // dl
  bool v102; // cl
  char v103; // al
  __int64 *v104; // rax
  __int64 v105; // rbx
  _QWORD *v106; // rax
  int v107; // eax
  char v108; // dl
  bool v109; // cl
  char v110; // al
  __int64 *v111; // rax
  __int64 v112; // rbx
  _QWORD *v113; // rax
  int v114; // eax
  char v115; // dl
  bool v116; // cl
  char v117; // al
  __int64 *v118; // rax
  __int64 v119; // rbx
  _QWORD *v120; // rax
  int v121; // eax
  char v122; // dl
  bool v123; // cl
  char v124; // al
  __int64 *v125; // rax
  __int64 v126; // rbx
  _QWORD *v127; // rax
  int v128; // eax
  char v129; // r8
  bool v130; // dl
  __int64 result; // rax
  char v132; // al
  bool v133; // [rsp+30h] [rbp-69h] BYREF
  __int64 v134; // [rsp+38h] [rbp-61h] BYREF
  _BYTE *v135; // [rsp+40h] [rbp-59h]
  LPVOID lpMem[2]; // [rsp+48h] [rbp-51h] BYREF
  __int64 v137; // [rsp+58h] [rbp-41h]
  __int128 v138; // [rsp+60h] [rbp-39h] BYREF
  __int64 v139; // [rsp+70h] [rbp-29h]
  unsigned __int64 v140; // [rsp+78h] [rbp-21h]
  __int128 v141; // [rsp+80h] [rbp-19h] BYREF
  __int64 v142; // [rsp+90h] [rbp-9h]
  unsigned __int64 v143; // [rsp+98h] [rbp-1h]

  v4 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  if ( dword_1413AA470 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413AA470);
    if ( dword_1413AA470 == -1 )
    {
      sub_1409DB700(a1: sub_140EE2B40);
      sub_1409DBB40(a1: &dword_1413AA470);
    }
  }
  sub_1400FD860(a1, a2);
  if ( dword_1413AA478 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413AA478);
    if ( dword_1413AA478 == -1 )
    {
      v5 = (__int64 *)sub_140020190(a1: &v141, a2: aItemtrigger_0, a3: "serializationVersion");
      LODWORD(v6) = (_DWORD)v5;
      if ( (unsigned __int64)v5[3] > 0xF )
        v6 = *v5;
      v7 = (_QWORD *)sub_140020190(a1: &v138, a2: aItemtrigger_0, a3: "serializationVersion");
      if ( v7[3] > 0xFu )
        v7 = (_QWORD *)*v7;
      v8 = sub_140062160(a1: v7);
      sub_140062D10(
        a1: (unsigned int)&dword_1413AA474,
        a2: v8,
        a3: v6,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Projects\\StarSta"
                      "bleOnline\\SSOLib\\src\\Actors\\PXItemTrigger.cpp",
        a5: 53);
      sub_14001B5A0(a1: &v138);
      *(_QWORD *)&v138 = 19937;
      v139 = 0;
      v140 = 31;
      sub_14001B5A0(a1: &v141);
      *(_QWORD *)&v141 = 19937;
      v142 = 0;
      v143 = 31;
      sub_1409DBB40(a1: &dword_1413AA478);
    }
  }
  LODWORD(v134) = dword_1413AA474;
  v9 = (_DWORD *)(a1 + 320);
  if ( *a2 != 0 )
  {
    if ( *v9 != 0 )
    {
      v10 = sub_140076F50();
      sub_140084F80(a1: (_DWORD)a2, a2: (unsigned int)&v134, a3: a1 + 320, a4: 4, a5: v10);
    }
  }
  else if ( (unsigned __int8)sub_1400852F0(a1: (_DWORD)a2, a2: (int)a1 + 320, a3: (unsigned int)&v134, a4: 4, a5: 512) == 0 )
  {
    *v9 = 0;
  }
  if ( dword_1413AA480 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413AA480);
    if ( dword_1413AA480 == -1 )
    {
      v11 = (__int64 *)sub_140020190(a1: &v141, a2: aItemtrigger_0, a3: "acceptDropGroups");
      LODWORD(v12) = (_DWORD)v11;
      if ( (unsigned __int64)v11[3] > 0xF )
        v12 = *v11;
      v13 = (_QWORD *)sub_140020190(a1: &v138, a2: aItemtrigger_0, a3: "acceptDropGroups");
      if ( v13[3] > 0xFu )
        v13 = (_QWORD *)*v13;
      v14 = sub_140062160(a1: v13);
      sub_140062D10(
        a1: (unsigned int)&dword_1413AA47C,
        a2: v14,
        a3: v12,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Projects\\StarSta"
                      "bleOnline\\SSOLib\\src\\Actors\\PXItemTrigger.cpp",
        a5: 55);
      sub_14001B5A0(a1: &v138);
      *(_QWORD *)&v138 = 19937;
      v139 = 0;
      v140 = 31;
      sub_14001B5A0(a1: &v141);
      *(_QWORD *)&v141 = 19937;
      v142 = 0;
      v143 = 31;
      sub_1409DBB40(a1: &dword_1413AA480);
    }
  }
  if ( *v9 != 0 )
  {
    if ( *v9 == 1 )
    {
      LODWORD(v134) = dword_1413AA47C;
      sub_14014FC80(a1: a2, a2: &v134, a3: a1 + 264);
    }
    else if ( (unsigned __int8)sub_140059D90(
                                 a1: off_141023AC8,
                                 a2: "ItemTrigger::Serialize: Unknown serialization version for ItemTrigger! (loadedVer=%u, currentVer=%u)",
                                 *v9,
                                 1) != 0 )
    {
      __debugbreak();
    }
  }
  else
  {
    lpMem[0] = nullptr;
    lpMem[1] = nullptr;
    v15 = (_QWORD *)sub_1409DB470(a1: 32);
    *v15 = v15;
    v15[1] = v15;
    v15[2] = v15;
    *((_WORD *)v15 + 12) = 257;
    lpMem[0] = v15;
    LODWORD(v134) = dword_1413AA47C;
    sub_14014FFC0(a1: a2, a2: &v134, a3: lpMem);
    v16 = lpMem[0];
    v17 = *(_BYTE **)lpMem[0];
    v137 = *(_QWORD *)(a1 + 264);
    if ( v17 != lpMem[0] )
    {
      do
      {
        v18 = *(_QWORD *)(a1 + 264);
        v134 = a1 + 264;
        v135 = nullptr;
        v19 = (_BYTE *)sub_1409DB470(a1: 32);
        v135 = v19;
        v19[26] = v17[28];
        *(_QWORD *)v19 = v18;
        *((_QWORD *)v19 + 1) = v18;
        *((_QWORD *)v19 + 2) = v18;
        *((_WORD *)v19 + 12) = 0;
        v20 = sub_140150430(a1: a1 + 264, a2: &v141, a3: v137);
        if ( *(_BYTE *)(v20 + 16) != 0 )
        {
          sub_1409DB4C0(lpMem: v19);
        }
        else
        {
          if ( *(_QWORD *)(a1 + 272) == 0x7FFFFFFFFFFFFFFLL )
            sub_14005A5D0();
          v135 = nullptr;
          v141 = *(_OWORD *)v20;
          sub_14005A200(a1: a1 + 264, a2: &v141, a3: v19);
        }
        v21 = *((_BYTE **)v17 + 2);
        if ( v21[25] != 0 )
        {
          for ( i = *((_QWORD *)v17 + 1); *(_BYTE *)(i + 25) == 0; i = *(_QWORD *)(i + 8) )
          {
            if ( v17 != *(_BYTE **)(i + 16) )
              break;
            v17 = (_BYTE *)i;
          }
          v17 = (_BYTE *)i;
        }
        else
        {
          v17 = *((_BYTE **)v17 + 2);
          if ( *(_BYTE *)(*(_QWORD *)v21 + 25LL) == 0 )
          {
            do
              v17 = *(_BYTE **)v17;
            while ( *(_BYTE *)(*(_QWORD *)v17 + 25LL) == 0 );
          }
        }
      }
      while ( v17 != (_BYTE *)v16 );
      v16 = lpMem[0];
      v9 = (_DWORD *)(a1 + 320);
    }
    *v9 = 1;
    v23 = (_QWORD *)v16[1];
    if ( *((_BYTE *)v23 + 25) == 0 )
    {
      do
      {
        sub_140023670(a1: lpMem, a2: lpMem, a3: v23[2]);
        v24 = v23;
        v23 = (_QWORD *)*v23;
        sub_1409DB4C0(lpMem: v24);
      }
      while ( *((_BYTE *)v23 + 25) == 0 );
      v16 = lpMem[0];
    }
    sub_1409DB4C0(lpMem: v16);
  }
  v25 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  v137 = v25;
  v26 = 0x7FFFFFFFFFFFFFFFLL;
  if ( dword_1413AA488 > *(_DWORD *)(v25 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413AA488);
    if ( dword_1413AA488 == -1 )
    {
      v31 = qword_141314268;
      if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314268) < 0x11 )
        goto LABEL_274;
      v32 = aItemtrigger_0;
      if ( (unsigned __int64)qword_141314270 > 0xF )
        v32 = *(char **)aItemtrigger_0;
      v134 = (__int64)v32;
      v138 = 0;
      v139 = 0;
      v140 = 0;
      v33 = qword_141314268 + 17;
      if ( (unsigned __int64)(qword_141314268 + 17) <= 0xF )
      {
        v34 = 15;
        v37 = &v138;
      }
      else
      {
        v34 = v33 | 0xF;
        if ( (v33 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
        {
          v34 = 0x7FFFFFFFFFFFFFFFLL;
          v35 = 0x8000000000000027uLL;
LABEL_54:
          v36 = sub_1409DB470(a1: v35);
          if ( v36 == 0 )
            __fastfail(5u);
          v37 = (__int128 *)((v36 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
          *((_QWORD *)v37 - 1) = v36;
          v32 = (char *)v134;
          *(_QWORD *)&v138 = v37;
          goto LABEL_66;
        }
        if ( v34 < 0x16 )
          v34 = 22;
        if ( v34 == -1 )
        {
          v37 = nullptr;
          *(_QWORD *)&v138 = 0;
        }
        else
        {
          if ( v34 + 1 >= 0x1000 )
          {
            v35 = v34 + 40;
            if ( v34 + 40 < v34 + 1 )
            {
              sub_14001B170(a1: v35, a2: v27, a3: v29, a4: v30);
              goto LABEL_271;
            }
            goto LABEL_54;
          }
          v37 = (__int128 *)sub_1409DB470(a1: v34 + 1);
          v32 = (char *)v134;
          *(_QWORD *)&v138 = v37;
        }
      }
LABEL_66:
      v139 = v31 + 17;
      v140 = v34;
      sub_140E82100(a1: v37, a2: v32, a3: v31);
      qmemcpy((char *)v37 + v31, "acceptedItemIDStr", 17);
      *((_BYTE *)v37 + v33) = 0;
      v41 = &v138;
      if ( v140 > 0xF )
        v41 = (__int128 *)v138;
      lpMem[0] = v41;
      v42 = qword_141314268;
      v134 = qword_141314268;
      if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314268) < 0x11 )
        sub_14001B680(a1: qword_141314268, a2: v38);
      v43 = aItemtrigger_0;
      if ( (unsigned __int64)qword_141314270 > 0xF )
        v43 = *(char **)aItemtrigger_0;
      v141 = 0;
      v44 = 0;
      v142 = 0;
      v143 = 0;
      v45 = qword_141314268 + 17;
      if ( (unsigned __int64)(qword_141314268 + 17) <= 0xF )
      {
        v46 = 15;
        v49 = &v141;
        goto LABEL_86;
      }
      v46 = v45 | 0xF;
      if ( (v45 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
      {
        v46 = 0x7FFFFFFFFFFFFFFFLL;
        v47 = 0x8000000000000027uLL;
LABEL_74:
        v48 = sub_1409DB470(a1: v47);
        if ( v48 == 0 )
          __fastfail(5u);
        v49 = (__int128 *)((v48 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *((_QWORD *)v49 - 1) = v48;
        v42 = v134;
        *(_QWORD *)&v141 = v49;
        goto LABEL_86;
      }
      if ( v46 < 0x16 )
        v46 = 22;
      if ( v46 == -1 )
      {
        v49 = nullptr;
        *(_QWORD *)&v141 = 0;
LABEL_86:
        v142 = v45;
        v143 = v46;
        sub_140E82100(a1: v49, a2: v43, a3: v42);
        v50 = v134;
        *(__int128 *)((char *)v49 + v134) = xmmword_141023C18;
        *((_BYTE *)v49 + v50 + 16) = 114;
        *((_BYTE *)v49 + v45) = 0;
        v51 = &v141;
        if ( v143 > 0xF )
          v51 = (__int128 *)v141;
        v52 = sub_140062160(a1: v51);
        sub_140062D10(
          a1: (unsigned int)&dword_1413AA484,
          a2: v52,
          a3: lpMem[0],
          a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Projects\\StarS"
                        "tableOnline\\SSOLib\\src\\Actors\\PXItemTrigger.cpp",
          a5: 81);
        if ( v143 > 0xF )
        {
          v53 = (void *)v141;
          if ( v143 + 1 >= 0x1000 )
          {
            if ( (unsigned __int64)(v141 - *(_QWORD *)(v141 - 8) - 8) > 0x1F )
              __fastfail(5u);
            v53 = *(void **)(v141 - 8);
          }
          sub_1409DB4C0(lpMem: v53);
        }
        *(_QWORD *)&v141 = 19937;
        v142 = 0;
        v143 = 31;
        if ( v140 > 0xF )
        {
          v54 = (void *)v138;
          if ( v140 + 1 >= 0x1000 )
          {
            if ( (unsigned __int64)(v138 - *(_QWORD *)(v138 - 8) - 8) > 0x1F )
              __fastfail(5u);
            v54 = *(void **)(v138 - 8);
          }
          sub_1409DB4C0(lpMem: v54);
        }
        sub_1409DBB40(a1: &dword_1413AA488);
        v25 = v137;
        goto LABEL_99;
      }
      if ( v46 + 1 < 0x1000 )
      {
        v49 = (__int128 *)sub_1409DB470(a1: v46 + 1);
        v42 = v134;
        *(_QWORD *)&v141 = v49;
        goto LABEL_86;
      }
      v47 = v46 + 40;
      if ( v46 + 40 >= v46 + 1 )
        goto LABEL_74;
LABEL_271:
      sub_14001B170(a1: v47, a2: v44, a3: v39, a4: v40);
      goto LABEL_272;
    }
  }
LABEL_99:
  LODWORD(v134) = dword_1413AA484;
  sub_140085740(a1: a2, a2: &v134, a3: a1 + 280, a4: &byte_140EEC5C5);
  if ( dword_1413AA490 <= *(_DWORD *)(v25 + 76) )
    goto LABEL_154;
  sub_1409DBBB0(a1: &dword_1413AA490);
  if ( dword_1413AA490 != -1 )
    goto LABEL_154;
  v59 = qword_141314268;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314268) < 0xA )
    sub_14001B680(a1: v56, a2: v55);
  v60 = aItemtrigger_0;
  if ( (unsigned __int64)qword_141314270 > 0xF )
    v60 = *(char **)aItemtrigger_0;
  v134 = (__int64)v60;
  v138 = 0;
  v139 = 0;
  v140 = 0;
  v61 = qword_141314268 + 10;
  if ( (unsigned __int64)(qword_141314268 + 10) <= 0xF )
  {
    v62 = 15;
    v65 = &v138;
    goto LABEL_121;
  }
  v62 = v61 | 0xF;
  if ( (v61 | 0xFuLL) <= 0x7FFFFFFFFFFFFFFFLL )
  {
    if ( v62 < 0x16 )
      v62 = 22;
    if ( v62 == -1 )
    {
      v65 = nullptr;
      *(_QWORD *)&v138 = 0;
      goto LABEL_121;
    }
    if ( v62 + 1 < 0x1000 )
    {
      v65 = (__int128 *)sub_1409DB470(a1: v62 + 1);
      v60 = (char *)v134;
      *(_QWORD *)&v138 = v65;
      goto LABEL_121;
    }
    v63 = v62 + 40;
    if ( v62 + 40 >= v62 + 1 )
      goto LABEL_107;
LABEL_272:
    sub_14001B170(a1: v63, a2: v55, a3: v57, a4: v58);
LABEL_273:
    sub_14001B170(a1: v77, a2: v73, a3: v68, a4: v69);
LABEL_274:
    sub_14001B680(a1: v28, a2: v27);
  }
  v62 = 0x7FFFFFFFFFFFFFFFLL;
  v63 = 0x8000000000000027uLL;
LABEL_107:
  v64 = sub_1409DB470(a1: v63);
  if ( v64 == 0 )
    __fastfail(5u);
  v65 = (__int128 *)((v64 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
  *((_QWORD *)v65 - 1) = v64;
  v60 = (char *)v134;
  *(_QWORD *)&v138 = v65;
LABEL_121:
  v139 = v59 + 10;
  v140 = v62;
  sub_140E82100(a1: v65, a2: v60, a3: v59);
  qmemcpy((char *)v65 + v59, "cursorIcon", 10);
  *((_BYTE *)v65 + v61) = 0;
  v70 = &v138;
  if ( v140 > 0xF )
    v70 = (__int128 *)v138;
  lpMem[0] = v70;
  v71 = qword_141314268;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141314268) < 0xA )
    sub_14001B680(a1: v67, a2: v66);
  v72 = aItemtrigger_0;
  if ( (unsigned __int64)qword_141314270 > 0xF )
    v72 = *(char **)aItemtrigger_0;
  v141 = 0;
  v73 = 0;
  v142 = 0;
  v143 = 0;
  v74 = qword_141314268 + 10;
  if ( (unsigned __int64)(qword_141314268 + 10) <= 0xF )
  {
    v26 = 15;
    v78 = &v141;
    goto LABEL_141;
  }
  if ( (v74 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
  {
    v75 = 0x8000000000000027uLL;
LABEL_129:
    v76 = sub_1409DB470(a1: v75);
    if ( v76 == 0 )
      __fastfail(5u);
    v78 = (__int128 *)((v76 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)v78 - 1) = v76;
    *(_QWORD *)&v141 = v78;
    goto LABEL_141;
  }
  v26 = v74 | 0xF;
  if ( (v74 | 0xFuLL) < 0x16 )
    v26 = 22;
  v77 = v26 + 1;
  if ( v26 != -1 )
  {
    if ( v77 < 0x1000 )
    {
      v78 = (__int128 *)sub_1409DB470(a1: v77);
      *(_QWORD *)&v141 = v78;
      goto LABEL_141;
    }
    v75 = v26 + 40;
    if ( v26 + 40 >= (unsigned __int64)(v26 + 1) )
      goto LABEL_129;
    goto LABEL_273;
  }
  v78 = nullptr;
  *(_QWORD *)&v141 = 0;
LABEL_141:
  v142 = v71 + 10;
  v143 = v26;
  sub_140E82100(a1: v78, a2: v72, a3: v71);
  qmemcpy((char *)v78 + v71, "cursorIcon", 10);
  *((_BYTE *)v78 + v74) = 0;
  v79 = &v141;
  if ( v143 > 0xF )
    v79 = (__int128 *)v141;
  v80 = sub_140062160(a1: v79);
  sub_140062D10(
    a1: (unsigned int)&dword_1413AA48C,
    a2: v80,
    a3: lpMem[0],
    a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Projects\\StarStableO"
                  "nline\\SSOLib\\src\\Actors\\PXItemTrigger.cpp",
    a5: 82);
  if ( v143 > 0xF )
  {
    v81 = (void *)v141;
    if ( v143 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v141 - *(_QWORD *)(v141 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v81 = *(void **)(v141 - 8);
    }
    sub_1409DB4C0(lpMem: v81);
  }
  *(_QWORD *)&v141 = 19937;
  v142 = 0;
  v143 = 31;
  if ( v140 > 0xF )
  {
    v82 = (void *)v138;
    if ( v140 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v138 - *(_QWORD *)(v138 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v82 = *(void **)(v138 - 8);
    }
    sub_1409DB4C0(lpMem: v82);
  }
  sub_1409DBB40(a1: &dword_1413AA490);
  v25 = v137;
LABEL_154:
  LODWORD(v134) = dword_1413AA48C;
  if ( *a2 != 0 )
  {
    if ( *(_DWORD *)(a1 + 324) != 0 )
    {
      v83 = sub_140076F50();
      sub_140084F80(a1: (_DWORD)a2, a2: (unsigned int)&v134, a3: a1 + 324, a4: 4, a5: v83);
    }
  }
  else if ( (unsigned __int8)sub_1400852F0(a1: (_DWORD)a2, a2: (int)a1 + 324, a3: (unsigned int)&v134, a4: 4, a5: 512) == 0 )
  {
    *(_DWORD *)(a1 + 324) = 0;
  }
  if ( dword_1413AA498 > *(_DWORD *)(v25 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413AA498);
    if ( dword_1413AA498 == -1 )
    {
      v84 = (__int64 *)sub_140020190(a1: &v141, a2: aItemtrigger_0, a3: &qword_140EF1E20);
      LODWORD(v85) = (_DWORD)v84;
      if ( (unsigned __int64)v84[3] > 0xF )
        v85 = *v84;
      v86 = (_QWORD *)sub_140020190(a1: &v138, a2: aItemtrigger_0, a3: &qword_140EF1E20);
      if ( v86[3] > 0xFu )
        v86 = (_QWORD *)*v86;
      v87 = sub_140062160(a1: v86);
      sub_140062D10(
        a1: (unsigned int)&dword_1413AA494,
        a2: v87,
        a3: v85,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Projects\\StarSta"
                      "bleOnline\\SSOLib\\src\\Actors\\PXItemTrigger.cpp",
        a5: 83);
      if ( v140 > 0xF )
      {
        v88 = (void *)v138;
        if ( v140 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v138 - *(_QWORD *)(v138 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v88 = *(void **)(v138 - 8);
        }
        sub_1409DB4C0(lpMem: v88);
      }
      *(_QWORD *)&v138 = 19937;
      v139 = 0;
      v140 = 31;
      if ( v143 > 0xF )
      {
        v89 = (void *)v141;
        if ( v143 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v141 - *(_QWORD *)(v141 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v89 = *(void **)(v141 - 8);
        }
        sub_1409DB4C0(lpMem: v89);
      }
      sub_1409DBB40(a1: &dword_1413AA498);
    }
  }
  LODWORD(v134) = dword_1413AA494;
  if ( *a2 != 0 )
  {
    if ( *(float *)(a1 + 328) != 0.0 )
    {
      v90 = sub_140076F60();
      sub_140084F80(a1: (_DWORD)a2, a2: (unsigned int)&v134, a3: a1 + 328, a4: 4, a5: v90);
    }
  }
  else if ( (unsigned __int8)sub_1400852F0(a1: (_DWORD)a2, a2: (int)a1 + 328, a3: (unsigned int)&v134, a4: 4, a5: 512) == 0 )
  {
    *(_DWORD *)(a1 + 328) = 0;
  }
  if ( dword_1413AA4A0 > *(_DWORD *)(v25 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413AA4A0);
    if ( dword_1413AA4A0 == -1 )
    {
      v91 = (__int64 *)sub_140020190(a1: &v141, a2: aItemtrigger_0, a3: "interactionOffset");
      LODWORD(v92) = (_DWORD)v91;
      if ( (unsigned __int64)v91[3] > 0xF )
        v92 = *v91;
      v93 = (_QWORD *)sub_140020190(a1: &v138, a2: aItemtrigger_0, a3: "interactionOffset");
      if ( v93[3] > 0xFu )
        v93 = (_QWORD *)*v93;
      v94 = sub_140062160(a1: v93);
      sub_140062D10(
        a1: (unsigned int)&dword_1413AA49C,
        a2: v94,
        a3: v92,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Projects\\StarSta"
                      "bleOnline\\SSOLib\\src\\Actors\\PXItemTrigger.cpp",
        a5: 84);
      if ( v140 > 0xF )
      {
        v95 = (void *)v138;
        if ( v140 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v138 - *(_QWORD *)(v138 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v95 = *(void **)(v138 - 8);
        }
        sub_1409DB4C0(lpMem: v95);
      }
      *(_QWORD *)&v138 = 19937;
      v139 = 0;
      v140 = 31;
      sub_14001B5A0(a1: &v141);
      sub_1409DBB40(a1: &dword_1413AA4A0);
    }
  }
  LODWORD(v134) = dword_1413AA49C;
  if ( *a2 != 0 )
  {
    if ( *(float *)(a1 + 332) != 0.0 )
    {
      v96 = sub_140076F60();
      sub_140084F80(a1: (_DWORD)a2, a2: (unsigned int)&v134, a3: a1 + 332, a4: 4, a5: v96);
    }
  }
  else if ( (unsigned __int8)sub_1400852F0(a1: (_DWORD)a2, a2: (int)a1 + 332, a3: (unsigned int)&v134, a4: 4, a5: 512) == 0 )
  {
    *(_DWORD *)(a1 + 332) = 0;
  }
  if ( dword_1413AA4A8 > *(_DWORD *)(v25 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413AA4A8);
    if ( dword_1413AA4A8 == -1 )
    {
      v97 = (__int64 *)sub_140020190(a1: &v141, a2: aItemtrigger_0, a3: "consumeDropItem");
      LODWORD(v98) = (_DWORD)v97;
      if ( (unsigned __int64)v97[3] > 0xF )
        v98 = *v97;
      v99 = (_QWORD *)sub_140020190(a1: &v138, a2: aItemtrigger_0, a3: "consumeDropItem");
      if ( v99[3] > 0xFu )
        v99 = (_QWORD *)*v99;
      v100 = sub_140062160(a1: v99);
      sub_140062D10(
        a1: (unsigned int)&dword_1413AA4A4,
        a2: v100,
        a3: v98,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Projects\\StarSta"
                      "bleOnline\\SSOLib\\src\\Actors\\PXItemTrigger.cpp",
        a5: 85);
      sub_14001B5A0(a1: &v138);
      *(_QWORD *)&v138 = 19937;
      v139 = 0;
      v140 = 31;
      sub_14001B5A0(a1: &v141);
      sub_1409DBB40(a1: &dword_1413AA4A8);
    }
  }
  v101 = *(_BYTE *)(a1 + 240);
  v102 = (v101 & 2) != 0;
  v133 = v102;
  LODWORD(v134) = dword_1413AA4A4;
  if ( *a2 != 0 )
  {
    if ( (v101 & 2) == 0 )
      goto LABEL_216;
    v103 = sub_140076FF0();
    sub_140084F80(a1: (_DWORD)a2, a2: (unsigned int)&v134, a3: (unsigned int)&v133, a4: 1, a5: v103);
LABEL_215:
    v102 = v133;
    goto LABEL_216;
  }
  if ( (unsigned __int8)sub_1400852F0(a1: (_DWORD)a2, a2: (unsigned int)&v133, a3: (unsigned int)&v134, a4: 1, a5: 512) != 0 )
    goto LABEL_215;
  v102 = false;
LABEL_216:
  *(_BYTE *)(a1 + 240) &= ~2u;
  *(_BYTE *)(a1 + 240) |= 2 * v102;
  if ( dword_1413AA4B0 > *(_DWORD *)(v25 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413AA4B0);
    if ( dword_1413AA4B0 == -1 )
    {
      v104 = (__int64 *)sub_140020190(a1: &v141, a2: aItemtrigger_0, a3: "validateUserOwnedItems");
      LODWORD(v105) = (_DWORD)v104;
      if ( (unsigned __int64)v104[3] > 0xF )
        v105 = *v104;
      v106 = (_QWORD *)sub_140020190(a1: &v138, a2: aItemtrigger_0, a3: "validateUserOwnedItems");
      if ( v106[3] > 0xFu )
        v106 = (_QWORD *)*v106;
      v107 = sub_140062160(a1: v106);
      sub_140062D10(
        a1: (unsigned int)&dword_1413AA4AC,
        a2: v107,
        a3: v105,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Projects\\StarSta"
                      "bleOnline\\SSOLib\\src\\Actors\\PXItemTrigger.cpp",
        a5: 86);
      sub_14001B5A0(a1: &v138);
      *(_QWORD *)&v138 = 19937;
      v139 = 0;
      v140 = 31;
      sub_14001B5A0(a1: &v141);
      sub_1409DBB40(a1: &dword_1413AA4B0);
    }
  }
  v108 = *(_BYTE *)(a1 + 240);
  v109 = (v108 & 4) != 0;
  v133 = v109;
  LODWORD(v134) = dword_1413AA4AC;
  if ( *a2 != 0 )
  {
    if ( (v108 & 4) == 0 )
      goto LABEL_229;
    v110 = sub_140076FF0();
    sub_140084F80(a1: (_DWORD)a2, a2: (unsigned int)&v134, a3: (unsigned int)&v133, a4: 1, a5: v110);
LABEL_228:
    v109 = v133;
    goto LABEL_229;
  }
  if ( (unsigned __int8)sub_1400852F0(a1: (_DWORD)a2, a2: (unsigned int)&v133, a3: (unsigned int)&v134, a4: 1, a5: 512) != 0 )
    goto LABEL_228;
  v109 = false;
LABEL_229:
  *(_BYTE *)(a1 + 240) &= ~4u;
  *(_BYTE *)(a1 + 240) |= 4 * v109;
  if ( dword_1413AA4B8 > *(_DWORD *)(v25 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413AA4B8);
    if ( dword_1413AA4B8 == -1 )
    {
      v111 = (__int64 *)sub_140020190(a1: &v141, a2: aItemtrigger_0, a3: "lockToGround");
      LODWORD(v112) = (_DWORD)v111;
      if ( (unsigned __int64)v111[3] > 0xF )
        v112 = *v111;
      v113 = (_QWORD *)sub_140020190(a1: &v138, a2: aItemtrigger_0, a3: "lockToGround");
      if ( v113[3] > 0xFu )
        v113 = (_QWORD *)*v113;
      v114 = sub_140062160(a1: v113);
      sub_140062D10(
        a1: (unsigned int)&dword_1413AA4B4,
        a2: v114,
        a3: v112,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Projects\\StarSta"
                      "bleOnline\\SSOLib\\src\\Actors\\PXItemTrigger.cpp",
        a5: 87);
      sub_14001B5A0(a1: &v138);
      *(_QWORD *)&v138 = 19937;
      v139 = 0;
      v140 = 31;
      sub_14001B5A0(a1: &v141);
      sub_1409DBB40(a1: &dword_1413AA4B8);
    }
  }
  v115 = *(_BYTE *)(a1 + 240);
  v116 = (v115 & 8) != 0;
  v133 = v116;
  LODWORD(v134) = dword_1413AA4B4;
  if ( *a2 != 0 )
  {
    if ( (v115 & 8) == 0 )
      goto LABEL_242;
    v117 = sub_140076FF0();
    sub_140084F80(a1: (_DWORD)a2, a2: (unsigned int)&v134, a3: (unsigned int)&v133, a4: 1, a5: v117);
LABEL_241:
    v116 = v133;
    goto LABEL_242;
  }
  if ( (unsigned __int8)sub_1400852F0(a1: (_DWORD)a2, a2: (unsigned int)&v133, a3: (unsigned int)&v134, a4: 1, a5: 512) != 0 )
    goto LABEL_241;
  v116 = false;
LABEL_242:
  *(_BYTE *)(a1 + 240) &= ~8u;
  *(_BYTE *)(a1 + 240) |= 8 * v116;
  if ( dword_1413AA4C0 > *(_DWORD *)(v25 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413AA4C0);
    if ( dword_1413AA4C0 == -1 )
    {
      v118 = (__int64 *)sub_140020190(a1: &v141, a2: aItemtrigger_0, a3: "showInteraction");
      LODWORD(v119) = (_DWORD)v118;
      if ( (unsigned __int64)v118[3] > 0xF )
        v119 = *v118;
      v120 = (_QWORD *)sub_140020190(a1: &v138, a2: aItemtrigger_0, a3: "showInteraction");
      if ( v120[3] > 0xFu )
        v120 = (_QWORD *)*v120;
      v121 = sub_140062160(a1: v120);
      sub_140062D10(
        a1: (unsigned int)&dword_1413AA4BC,
        a2: v121,
        a3: v119,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Projects\\StarSta"
                      "bleOnline\\SSOLib\\src\\Actors\\PXItemTrigger.cpp",
        a5: 88);
      sub_14001B5A0(a1: &v138);
      *(_QWORD *)&v138 = 19937;
      v139 = 0;
      v140 = 31;
      sub_14001B5A0(a1: &v141);
      sub_1409DBB40(a1: &dword_1413AA4C0);
    }
  }
  v122 = *(_BYTE *)(a1 + 240);
  v123 = (v122 & 0x10) != 0;
  v133 = v123;
  LODWORD(v134) = dword_1413AA4BC;
  if ( *a2 != 0 )
  {
    if ( (v122 & 0x10) == 0 )
      goto LABEL_255;
    v124 = sub_140076FF0();
    sub_140084F80(a1: (_DWORD)a2, a2: (unsigned int)&v134, a3: (unsigned int)&v133, a4: 1, a5: v124);
LABEL_254:
    v123 = v133;
    goto LABEL_255;
  }
  if ( (unsigned __int8)sub_1400852F0(a1: (_DWORD)a2, a2: (unsigned int)&v133, a3: (unsigned int)&v134, a4: 1, a5: 512) != 0 )
    goto LABEL_254;
  v123 = false;
LABEL_255:
  *(_BYTE *)(a1 + 240) &= ~0x10u;
  *(_BYTE *)(a1 + 240) |= 16 * v123;
  if ( dword_1413AA4C8 > *(_DWORD *)(v25 + 76) )
  {
    sub_1409DBBB0(a1: &dword_1413AA4C8);
    if ( dword_1413AA4C8 == -1 )
    {
      v125 = (__int64 *)sub_140020190(a1: &v141, a2: aItemtrigger_0, a3: "allowUseFromTransport");
      LODWORD(v126) = (_DWORD)v125;
      if ( (unsigned __int64)v125[3] > 0xF )
        v126 = *v125;
      v127 = (_QWORD *)sub_140020190(a1: &v138, a2: aItemtrigger_0, a3: "allowUseFromTransport");
      if ( v127[3] > 0xFu )
        v127 = (_QWORD *)*v127;
      v128 = sub_140062160(a1: v127);
      sub_140062D10(
        a1: (unsigned int)&dword_1413AA4C4,
        a2: v128,
        a3: v126,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Projects\\StarSta"
                      "bleOnline\\SSOLib\\src\\Actors\\PXItemTrigger.cpp",
        a5: 89);
      sub_14001B5A0(a1: &v138);
      *(_QWORD *)&v138 = 19937;
      v139 = 0;
      v140 = 31;
      sub_14001B5A0(a1: &v141);
      sub_1409DBB40(a1: &dword_1413AA4C8);
    }
  }
  v129 = *(_BYTE *)(a1 + 240);
  v130 = (v129 & 0x20) != 0;
  v133 = v130;
  result = (unsigned int)dword_1413AA4C4;
  LODWORD(v134) = dword_1413AA4C4;
  if ( *a2 != 0 )
  {
    if ( (v129 & 0x20) == 0 )
      goto LABEL_268;
    v132 = sub_140076FF0();
    result = sub_140084F80(a1: (_DWORD)a2, a2: (unsigned int)&v134, a3: (unsigned int)&v133, a4: 1, a5: v132);
LABEL_267:
    v130 = v133;
    goto LABEL_268;
  }
  result = sub_1400852F0(a1: (_DWORD)a2, a2: (unsigned int)&v133, a3: (unsigned int)&v134, a4: 1, a5: 512);
  if ( (_BYTE)result != 0 )
    goto LABEL_267;
  v130 = false;
LABEL_268:
  *(_BYTE *)(a1 + 240) &= ~0x20u;
  *(_BYTE *)(a1 + 240) |= 32 * v130;
  return result;
}