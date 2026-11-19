// Hex-Rays export, baseline 645.348067; descriptive analysis label.
__int64 __fastcall sub_1401038D0(__int64 a1, __int64 a2)
{
  __int64 v4; // r13
  __int64 v5; // r15
  __int64 v6; // r12
  float v7; // xmm1_4
  char v8; // al
  bool v9; // cl
  char v10; // al
  __int128 *v11; // rsi
  char v12; // al
  char v13; // dl
  bool v14; // cl
  char v15; // al
  char v16; // dl
  bool v17; // cl
  char v18; // al
  char v19; // dl
  bool v20; // cl
  char v21; // al
  char v22; // dl
  bool v23; // cl
  char v24; // al
  char v25; // dl
  bool v26; // cl
  char v27; // al
  bool v28; // dl
  __int64 result; // rax
  char v30; // al
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r13
  char *v35; // rcx
  __int64 v36; // r12
  unsigned __int64 v37; // rdi
  unsigned __int64 v38; // rcx
  __int64 v39; // rax
  __int128 *v40; // rsi
  __int128 *v41; // rdi
  _QWORD *v42; // rax
  int v43; // eax
  void *v44; // rcx
  void *v45; // rcx
  __int64 *v46; // rax
  __int64 v47; // rdi
  _QWORD *v48; // rax
  int v49; // eax
  void *v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r13
  char *v54; // rcx
  __int64 v55; // r12
  unsigned __int64 v56; // rdi
  unsigned __int64 v57; // rcx
  __int64 v58; // rax
  __int128 *v59; // rsi
  __int64 v60; // rdx
  __int128 *v61; // rax
  __int64 v62; // rcx
  char *v63; // r13
  __int64 v64; // r12
  unsigned __int64 v65; // rdi
  unsigned __int64 v66; // rcx
  __int64 v67; // rax
  __int128 *v68; // rsi
  __int64 v69; // rcx
  __int128 *v70; // rcx
  int v71; // eax
  void *v72; // rcx
  void *v73; // rcx
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r12
  char *v77; // rcx
  __int64 v78; // r13
  unsigned __int64 v79; // rdi
  unsigned __int64 v80; // rcx
  __int64 v81; // rax
  __int64 v82; // rdx
  __int128 *v83; // rax
  __int64 v84; // rcx
  char *v85; // r13
  __int64 v86; // r12
  unsigned __int64 v87; // rdi
  unsigned __int64 v88; // rcx
  __int64 v89; // rax
  __int128 *v90; // rsi
  __int64 v91; // rcx
  __int128 *v92; // rcx
  int v93; // eax
  void *v94; // rcx
  void *v95; // rcx
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r13
  char *v99; // rcx
  __int64 v100; // r12
  unsigned __int64 v101; // rdi
  unsigned __int64 v102; // rcx
  __int64 v103; // rax
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int128 *v106; // rax
  __int64 v107; // r13
  char *v108; // r12
  __int64 v109; // rsi
  unsigned __int64 v110; // rax
  __int64 v111; // rax
  unsigned __int64 v112; // rcx
  __int128 *v113; // rdi
  __int128 *v114; // rcx
  int v115; // eax
  void *v116; // rcx
  void *v117; // rcx
  __int64 *v118; // rax
  __int64 v119; // rdi
  _QWORD *v120; // rax
  int v121; // eax
  void *v122; // rcx
  void *v123; // rcx
  __int64 *v124; // rax
  __int64 v125; // rdi
  _QWORD *v126; // rax
  int v127; // eax
  void *v128; // rcx
  __int64 *v129; // rax
  __int64 v130; // rdi
  _QWORD *v131; // rax
  int v132; // eax
  __int64 *v133; // rax
  __int64 v134; // rdi
  _QWORD *v135; // rax
  bool v136; // [rsp+30h] [rbp-49h] BYREF
  __int64 v137; // [rsp+38h] [rbp-41h] BYREF
  char *v138; // [rsp+40h] [rbp-39h]
  __int128 *v139; // [rsp+48h] [rbp-31h]
  __int64 v140; // [rsp+50h] [rbp-29h]
  __int128 v141; // [rsp+58h] [rbp-21h] BYREF
  __int64 v142; // [rsp+68h] [rbp-11h]
  unsigned __int64 v143; // [rsp+70h] [rbp-9h]
  __int128 v144; // [rsp+78h] [rbp-1h] BYREF
  __int64 v145; // [rsp+88h] [rbp+Fh]
  unsigned __int64 v146; // [rsp+90h] [rbp+17h]

  v4 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  v140 = v4;
  if ( dword_14137A278 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409E0F90(a1: &dword_14137A278);
    if ( dword_14137A278 == -1 )
    {
      sub_1409E0AE0(a1: sub_140ECDFA0);
      sub_1409E0F20(a1: &dword_14137A278);
    }
  }
  sub_1400C1490(a1, a2);
  v5 = 0x7FFFFFFFFFFFFFFFLL;
  if ( dword_14137A280 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409E0F90(a1: &dword_14137A280);
    if ( dword_14137A280 == -1 )
    {
      v34 = qword_1412FF7F0;
      if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_1412FF7F0) < 0x13 )
        sub_14001ADA0(a1: v33, a2: v32);
      v35 = aTrigger_0;
      if ( (unsigned __int64)qword_1412FF7F8 > 0xF )
        v35 = *(char **)aTrigger_0;
      v138 = v35;
      v141 = 0;
      v142 = 0;
      v143 = 0;
      v36 = qword_1412FF7F0 + 19;
      if ( (unsigned __int64)(qword_1412FF7F0 + 19) <= 0xF )
      {
        v37 = 15;
        v40 = &v141;
      }
      else
      {
        v37 = v36 | 0xF;
        if ( (v36 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
        {
          v37 = 0x7FFFFFFFFFFFFFFFLL;
          v38 = 0x8000000000000027uLL;
LABEL_84:
          v39 = sub_1409E0850(a1: v38);
          if ( v39 == 0 )
            __fastfail(5u);
          v40 = (__int128 *)((v39 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
          *((_QWORD *)v40 - 1) = v39;
          v35 = v138;
          *(_QWORD *)&v141 = v40;
          goto LABEL_96;
        }
        if ( v37 < 0x16 )
          v37 = 22;
        if ( v37 == -1 )
        {
          v40 = nullptr;
          *(_QWORD *)&v141 = 0;
        }
        else
        {
          if ( v37 + 1 >= 0x1000 )
          {
            v38 = v37 + 40;
            if ( v37 + 40 < v37 + 1 )
            {
              sub_14001A900(a1: v38, a2: v32);
              __debugbreak();
            }
            goto LABEL_84;
          }
          v40 = (__int128 *)sub_1409E0850(a1: v37 + 1);
          v35 = v138;
          *(_QWORD *)&v141 = v40;
        }
      }
LABEL_96:
      v142 = v34 + 19;
      v143 = v37;
      sub_140E79060(a1: v40, a2: v35, a3: v34);
      qmemcpy((char *)v40 + v34, "collisionRepeatTime", 19);
      *((_BYTE *)v40 + v36) = 0;
      v41 = &v141;
      if ( v143 > 0xF )
        LODWORD(v41) = v141;
      v42 = (_QWORD *)sub_14001FE50(a1: &v144, a2: aTrigger_0, a3: &xmmword_140EFE3A8);
      if ( v42[3] > 0xFu )
        v42 = (_QWORD *)*v42;
      v43 = sub_140061E60(a1: v42);
      sub_140062A10(
        a1: (unsigned int)&dword_14137A27C,
        a2: v43,
        a3: (_DWORD)v41,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_45\\Source\\Game\\src"
                      "\\Actors\\PXTrigger.cpp",
        a5: 32);
      if ( v146 > 0xF )
      {
        v44 = (void *)v144;
        if ( v146 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v144 - *(_QWORD *)(v144 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v44 = *(void **)(v144 - 8);
        }
        sub_1409E08A0(lpMem: v44);
      }
      *(_QWORD *)&v144 = 19937;
      v145 = 0;
      v146 = 31;
      if ( v143 > 0xF )
      {
        v45 = (void *)v141;
        if ( v143 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v141 - *(_QWORD *)(v141 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v45 = *(void **)(v141 - 8);
        }
        sub_1409E08A0(lpMem: v45);
      }
      sub_1409E0F20(a1: &dword_14137A280);
      v4 = v140;
    }
  }
  LODWORD(v137) = dword_14137A27C;
  if ( *(_DWORD *)a2 == 0 )
  {
    if ( (unsigned __int8)sub_14008D4B0(a1: a2, a2: (int)a1 + 184, a3: (unsigned int)&v137, a4: 4, a5: 512) == 0 )
      *(_DWORD *)(a1 + 184) = 0;
    v6 = a2 + 62;
    goto LABEL_12;
  }
  v6 = a2 + 62;
  v138 = (char *)(a2 + 62);
  v7 = *(float *)(a1 + 184);
  if ( *(_BYTE *)(a2 + 62) != 0 )
  {
    if ( v7 == 0.0 )
      goto LABEL_13;
  }
  else if ( v7 == 0.0 )
  {
LABEL_12:
    v138 = (char *)v6;
LABEL_13:
    if ( dword_14137A288 > *(_DWORD *)(v4 + 76) )
    {
      sub_1409E0F90(a1: &dword_14137A288);
      if ( dword_14137A288 == -1 )
      {
        v46 = (__int64 *)sub_14001FE50(a1: &v141, a2: aTrigger_0, a3: "enabledWhenLeading");
        LODWORD(v47) = (_DWORD)v46;
        if ( (unsigned __int64)v46[3] > 0xF )
          v47 = *v46;
        v48 = (_QWORD *)sub_14001FE50(a1: &v144, a2: aTrigger_0, a3: "enabledWhenLeading");
        if ( v48[3] > 0xFu )
          v48 = (_QWORD *)*v48;
        v49 = sub_140061E60(a1: v48);
        sub_140062A10(
          a1: (unsigned int)&dword_14137A284,
          a2: v49,
          a3: v47,
          a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_45\\Source\\Game\\s"
                        "rc\\Actors\\PXTrigger.cpp",
          a5: 33);
        sub_14001ACC0(a1: &v144);
        *(_QWORD *)&v144 = 19937;
        v145 = 0;
        v146 = 31;
        if ( v143 > 0xF )
        {
          v50 = (void *)v141;
          if ( v143 + 1 >= 0x1000 )
          {
            if ( (unsigned __int64)(v141 - *(_QWORD *)(v141 - 8) - 8) > 0x1F )
              __fastfail(5u);
            v50 = *(void **)(v141 - 8);
          }
          sub_1409E08A0(lpMem: v50);
        }
        sub_1409E0F20(a1: &dword_14137A288);
      }
    }
    v9 = *(_BYTE *)(a1 + 236) & 1;
    v136 = v9;
    LODWORD(v137) = dword_14137A284;
    if ( *(_DWORD *)a2 != 0 )
    {
      if ( !v9 )
        goto LABEL_20;
      v10 = sub_14007E5A0();
      sub_14008D140(a1: a2, a2: (unsigned int)&v137, a3: (unsigned int)&v136, a4: 1, a5: v10);
LABEL_19:
      v9 = v136;
      goto LABEL_20;
    }
    if ( (unsigned __int8)sub_14008D4B0(a1: a2, a2: (unsigned int)&v136, a3: (unsigned int)&v137, a4: 1, a5: 512) != 0 )
      goto LABEL_19;
    v9 = false;
LABEL_20:
    *(_BYTE *)(a1 + 236) &= ~1u;
    *(_BYTE *)(a1 + 236) |= v9;
    if ( dword_14137A290 <= *(_DWORD *)(v4 + 76) || (sub_1409E0F90(a1: &dword_14137A290), dword_14137A290 != -1) )
    {
      v11 = nullptr;
      goto LABEL_22;
    }
    v53 = qword_1412FF7F0;
    if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_1412FF7F0) < 0xC )
      sub_14001ADA0(a1: v52, a2: v51);
    v54 = aTrigger_0;
    if ( (unsigned __int64)qword_1412FF7F8 > 0xF )
      v54 = *(char **)aTrigger_0;
    v137 = (__int64)v54;
    v144 = 0;
    v145 = 0;
    v146 = 0;
    v55 = qword_1412FF7F0 + 12;
    if ( (unsigned __int64)(qword_1412FF7F0 + 12) <= 0xF )
    {
      v56 = 15;
      v59 = &v144;
    }
    else
    {
      v56 = v55 | 0xF;
      if ( (v55 | 0xFuLL) <= 0x7FFFFFFFFFFFFFFFLL )
      {
        if ( v56 < 0x16 )
          v56 = 22;
        if ( v56 == -1 )
        {
          v59 = nullptr;
          *(_QWORD *)&v144 = 0;
          goto LABEL_145;
        }
        if ( v56 + 1 < 0x1000 )
        {
          v59 = (__int128 *)sub_1409E0850(a1: v56 + 1);
          v54 = (char *)v137;
          *(_QWORD *)&v144 = v59;
          goto LABEL_145;
        }
        v57 = v56 + 40;
        if ( v56 + 40 < v56 + 1 )
        {
          sub_14001A900(a1: v57, a2: 0);
          __debugbreak();
        }
      }
      else
      {
        v56 = 0x7FFFFFFFFFFFFFFFLL;
        v57 = 0x8000000000000027uLL;
      }
      v58 = sub_1409E0850(a1: v57);
      if ( v58 == 0 )
        __fastfail(5u);
      v59 = (__int128 *)((v58 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *((_QWORD *)v59 - 1) = v58;
      v54 = (char *)v137;
      *(_QWORD *)&v144 = v59;
    }
LABEL_145:
    v145 = v53 + 12;
    v146 = v56;
    sub_140E79060(a1: v59, a2: v54, a3: v53);
    qmemcpy((char *)v59 + v53, "customCursor", 12);
    *((_BYTE *)v59 + v55) = 0;
    v61 = &v144;
    if ( v146 > 0xF )
      v61 = (__int128 *)v144;
    v139 = v61;
    v62 = qword_1412FF7F0;
    v137 = qword_1412FF7F0;
    if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_1412FF7F0) < 0xC )
      sub_14001ADA0(a1: qword_1412FF7F0, a2: v60);
    v63 = aTrigger_0;
    if ( (unsigned __int64)qword_1412FF7F8 > 0xF )
      v63 = *(char **)aTrigger_0;
    v141 = 0;
    v142 = 0;
    v143 = 0;
    v64 = qword_1412FF7F0 + 12;
    if ( (unsigned __int64)(qword_1412FF7F0 + 12) <= 0xF )
    {
      v65 = 15;
      v68 = &v141;
    }
    else
    {
      v65 = v64 | 0xF;
      if ( (v64 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
      {
        v65 = 0x7FFFFFFFFFFFFFFFLL;
        v66 = 0x8000000000000027uLL;
LABEL_154:
        v67 = sub_1409E0850(a1: v66);
        if ( v67 == 0 )
          __fastfail(5u);
        v68 = (__int128 *)((v67 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *((_QWORD *)v68 - 1) = v67;
        v62 = v137;
        *(_QWORD *)&v141 = v68;
        goto LABEL_166;
      }
      if ( v65 < 0x16 )
        v65 = 22;
      if ( v65 == -1 )
      {
        v68 = nullptr;
        *(_QWORD *)&v141 = 0;
      }
      else
      {
        if ( v65 + 1 >= 0x1000 )
        {
          v66 = v65 + 40;
          if ( v65 + 40 < v65 + 1 )
          {
            sub_14001A900(a1: v66, a2: 0);
            __debugbreak();
          }
          goto LABEL_154;
        }
        v68 = (__int128 *)sub_1409E0850(a1: v65 + 1);
        v62 = v137;
        *(_QWORD *)&v141 = v68;
      }
    }
LABEL_166:
    v142 = v64;
    v143 = v65;
    sub_140E79060(a1: v68, a2: v63, a3: v62);
    v69 = v137;
    *(_QWORD *)((char *)v68 + v137) = 0x75436D6F74737563LL;
    *(_DWORD *)((char *)v68 + v69 + 8) = 1919906674;
    *((_BYTE *)v68 + v64) = 0;
    v70 = &v141;
    if ( v143 > 0xF )
      v70 = (__int128 *)v141;
    v71 = sub_140061E60(a1: v70);
    sub_140062A10(
      a1: (unsigned int)&dword_14137A28C,
      a2: v71,
      a3: (_DWORD)v139,
      a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_45\\Source\\Game\\src\\"
                    "Actors\\PXTrigger.cpp",
      a5: 34);
    if ( v143 > 0xF )
    {
      v72 = (void *)v141;
      if ( v143 + 1 >= 0x1000 )
      {
        if ( (unsigned __int64)(v141 - *(_QWORD *)(v141 - 8) - 8) > 0x1F )
          __fastfail(5u);
        v72 = *(void **)(v141 - 8);
      }
      sub_1409E08A0(lpMem: v72);
    }
    *(_QWORD *)&v141 = 19937;
    v11 = nullptr;
    v142 = 0;
    v143 = 31;
    if ( v146 > 0xF )
    {
      v73 = (void *)v144;
      if ( v146 + 1 >= 0x1000 )
      {
        if ( (unsigned __int64)(v144 - *(_QWORD *)(v144 - 8) - 8) > 0x1F )
          __fastfail(5u);
        v73 = *(void **)(v144 - 8);
      }
      sub_1409E08A0(lpMem: v73);
    }
    sub_1409E0F20(a1: &dword_14137A290);
    v4 = v140;
LABEL_22:
    LODWORD(v137) = dword_14137A28C;
    if ( *(_DWORD *)a2 != 0 )
    {
      if ( *(_DWORD *)(a1 + 188) != 0 )
      {
        v12 = sub_14007E500();
        sub_14008D140(a1: a2, a2: (unsigned int)&v137, a3: a1 + 188, a4: 4, a5: v12);
      }
    }
    else if ( (unsigned __int8)sub_14008D4B0(a1: a2, a2: (int)a1 + 188, a3: (unsigned int)&v137, a4: 4, a5: 512) == 0 )
    {
      *(_DWORD *)(a1 + 188) = 0;
    }
    if ( dword_14137A298 > *(_DWORD *)(v4 + 76) )
    {
      sub_1409E0F90(a1: &dword_14137A298);
      if ( dword_14137A298 == -1 )
      {
        v76 = qword_1412FF7F0;
        if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_1412FF7F0) < 6 )
          sub_14001ADA0(a1: v75, a2: v74);
        v77 = aTrigger_0;
        if ( (unsigned __int64)qword_1412FF7F8 > 0xF )
          v77 = *(char **)aTrigger_0;
        v137 = (__int64)v77;
        v144 = 0;
        v145 = 0;
        v146 = 0;
        v78 = qword_1412FF7F0 + 6;
        if ( (unsigned __int64)(qword_1412FF7F0 + 6) <= 0xF )
        {
          v79 = 15;
          v11 = &v144;
          goto LABEL_201;
        }
        v79 = v78 | 0xF;
        if ( (v78 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
        {
          v79 = 0x7FFFFFFFFFFFFFFFLL;
          v80 = 0x8000000000000027uLL;
LABEL_189:
          v81 = sub_1409E0850(a1: v80);
          if ( v81 == 0 )
            __fastfail(5u);
          v11 = (__int128 *)((v81 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
          *((_QWORD *)v11 - 1) = v81;
          v77 = (char *)v137;
          *(_QWORD *)&v144 = v11;
LABEL_201:
          v145 = v76 + 6;
          v146 = v79;
          sub_140E79060(a1: v11, a2: v77, a3: v76);
          *(_DWORD *)((char *)v11 + v76) = 1650552421;
          *(_WORD *)((char *)v11 + v76 + 4) = 25964;
          *((_BYTE *)v11 + v78) = 0;
          v83 = &v144;
          if ( v146 > 0xF )
            v83 = (__int128 *)v144;
          v139 = v83;
          v84 = qword_1412FF7F0;
          v137 = qword_1412FF7F0;
          if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_1412FF7F0) < 6 )
            sub_14001ADA0(a1: qword_1412FF7F0, a2: v82);
          v85 = aTrigger_0;
          if ( (unsigned __int64)qword_1412FF7F8 > 0xF )
            v85 = *(char **)aTrigger_0;
          v141 = 0;
          v142 = 0;
          v143 = 0;
          v86 = qword_1412FF7F0 + 6;
          if ( (unsigned __int64)(qword_1412FF7F0 + 6) <= 0xF )
          {
            v87 = 15;
            v90 = &v141;
          }
          else
          {
            v87 = v86 | 0xF;
            if ( (v86 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
            {
              v87 = 0x7FFFFFFFFFFFFFFFLL;
              v88 = 0x8000000000000027uLL;
LABEL_210:
              v89 = sub_1409E0850(a1: v88);
              if ( v89 == 0 )
                __fastfail(5u);
              v90 = (__int128 *)((v89 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
              *((_QWORD *)v90 - 1) = v89;
              v84 = v137;
              *(_QWORD *)&v141 = v90;
              goto LABEL_222;
            }
            if ( v87 < 0x16 )
              v87 = 22;
            if ( v87 == -1 )
            {
              v90 = nullptr;
              *(_QWORD *)&v141 = 0;
            }
            else
            {
              if ( v87 + 1 >= 0x1000 )
              {
                v88 = v87 + 40;
                if ( v87 + 40 < v87 + 1 )
                {
                  sub_14001A900(a1: v88, a2: 0);
                  __debugbreak();
                }
                goto LABEL_210;
              }
              v90 = (__int128 *)sub_1409E0850(a1: v87 + 1);
              v84 = v137;
              *(_QWORD *)&v141 = v90;
            }
          }
LABEL_222:
          v142 = v86;
          v143 = v87;
          sub_140E79060(a1: v90, a2: v85, a3: v84);
          v91 = v137;
          *(_DWORD *)((char *)v90 + v137) = 1650552421;
          *(_WORD *)((char *)v90 + v91 + 4) = 25964;
          *((_BYTE *)v90 + v86) = 0;
          v92 = &v141;
          if ( v143 > 0xF )
            v92 = (__int128 *)v141;
          v93 = sub_140061E60(a1: v92);
          sub_140062A10(
            a1: (unsigned int)&dword_14137A294,
            a2: v93,
            a3: (_DWORD)v139,
            a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_45\\Source\\Game\\"
                          "src\\Actors\\PXTrigger.cpp",
            a5: 35);
          if ( v143 > 0xF )
          {
            v94 = (void *)v141;
            if ( v143 + 1 >= 0x1000 )
            {
              if ( (unsigned __int64)(v141 - *(_QWORD *)(v141 - 8) - 8) > 0x1F )
                __fastfail(5u);
              v94 = *(void **)(v141 - 8);
            }
            sub_1409E08A0(lpMem: v94);
          }
          *(_QWORD *)&v141 = 19937;
          v11 = nullptr;
          v142 = 0;
          v143 = 31;
          if ( v146 > 0xF )
          {
            v95 = (void *)v144;
            if ( v146 + 1 >= 0x1000 )
            {
              if ( (unsigned __int64)(v144 - *(_QWORD *)(v144 - 8) - 8) > 0x1F )
                __fastfail(5u);
              v95 = *(void **)(v144 - 8);
            }
            sub_1409E08A0(lpMem: v95);
          }
          sub_1409E0F20(a1: &dword_14137A298);
          v4 = v140;
          goto LABEL_28;
        }
        if ( v79 < 0x16 )
          v79 = 22;
        if ( v79 != -1 )
        {
          if ( v79 + 1 >= 0x1000 )
          {
            v80 = v79 + 40;
            if ( v79 + 40 < v79 + 1 )
            {
              sub_14001A900(a1: v80, a2: v74);
              __debugbreak();
            }
            goto LABEL_189;
          }
          v11 = (__int128 *)sub_1409E0850(a1: v79 + 1);
          v77 = (char *)v137;
        }
        *(_QWORD *)&v144 = v11;
        goto LABEL_201;
      }
    }
LABEL_28:
    v13 = *(_BYTE *)(a1 + 236);
    v14 = (v13 & 2) != 0;
    v136 = v14;
    LODWORD(v137) = dword_14137A294;
    if ( *(_DWORD *)a2 != 0 )
    {
      if ( (v13 & 2) == 0 )
        goto LABEL_34;
      v15 = sub_14007E5A0();
      sub_14008D140(a1: a2, a2: (unsigned int)&v137, a3: (unsigned int)&v136, a4: 1, a5: v15);
LABEL_33:
      v14 = v136;
      goto LABEL_34;
    }
    if ( (unsigned __int8)sub_14008D4B0(a1: a2, a2: (unsigned int)&v136, a3: (unsigned int)&v137, a4: 1, a5: 512) != 0 )
      goto LABEL_33;
    v14 = false;
LABEL_34:
    *(_BYTE *)(a1 + 236) &= ~2u;
    *(_BYTE *)(a1 + 236) |= 2 * v14;
    if ( dword_14137A2A0 <= *(_DWORD *)(v4 + 76) )
      goto LABEL_35;
    sub_1409E0F90(a1: &dword_14137A2A0);
    if ( dword_14137A2A0 != -1 )
      goto LABEL_35;
    v98 = qword_1412FF7F0;
    if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_1412FF7F0) < 0x10 )
      sub_14001ADA0(a1: v97, a2: v96);
    v99 = aTrigger_0;
    if ( (unsigned __int64)qword_1412FF7F8 > 0xF )
      v99 = *(char **)aTrigger_0;
    v137 = (__int64)v99;
    v144 = 0;
    v145 = 0;
    v146 = 0;
    v100 = qword_1412FF7F0 + 16;
    if ( (unsigned __int64)(qword_1412FF7F0 + 16) <= 0xF )
    {
      v101 = 15;
      v11 = &v144;
      goto LABEL_257;
    }
    v101 = v100 | 0xF;
    if ( (v100 | 0xFuLL) <= 0x7FFFFFFFFFFFFFFFLL )
    {
      if ( v101 < 0x16 )
        v101 = 22;
      if ( v101 != -1 )
      {
        if ( v101 + 1 >= 0x1000 )
        {
          v102 = v101 + 40;
          if ( v101 + 40 < v101 + 1 )
          {
            sub_14001A900(a1: v102, a2: v96);
            __debugbreak();
          }
          goto LABEL_245;
        }
        v11 = (__int128 *)sub_1409E0850(a1: v101 + 1);
        v99 = (char *)v137;
      }
      *(_QWORD *)&v144 = v11;
      goto LABEL_257;
    }
    v101 = 0x7FFFFFFFFFFFFFFFLL;
    v102 = 0x8000000000000027uLL;
LABEL_245:
    v103 = sub_1409E0850(a1: v102);
    if ( v103 == 0 )
      __fastfail(5u);
    v11 = (__int128 *)((v103 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)v11 - 1) = v103;
    v99 = (char *)v137;
    *(_QWORD *)&v144 = v11;
LABEL_257:
    v145 = v98 + 16;
    v146 = v101;
    sub_140E79060(a1: v11, a2: v99, a3: v98);
    *(__int128 *)((char *)v11 + v98) = xmmword_140EFE3F0;
    *((_BYTE *)v11 + v100) = 0;
    v106 = &v144;
    if ( v146 > 0xF )
      v106 = (__int128 *)v144;
    v139 = v106;
    v107 = qword_1412FF7F0;
    if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_1412FF7F0) < 0x10 )
      sub_14001ADA0(a1: v105, a2: v104);
    v108 = aTrigger_0;
    if ( (unsigned __int64)qword_1412FF7F8 > 0xF )
      v108 = *(char **)aTrigger_0;
    v141 = 0;
    v142 = 0;
    v143 = 0;
    v109 = qword_1412FF7F0 + 16;
    if ( (unsigned __int64)(qword_1412FF7F0 + 16) <= 0xF )
    {
      v5 = 15;
      v113 = &v141;
    }
    else
    {
      if ( (v109 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
      {
        v110 = 0x8000000000000027uLL;
LABEL_266:
        v111 = sub_1409E0850(a1: v110);
        if ( v111 == 0 )
          __fastfail(5u);
        v113 = (__int128 *)((v111 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *((_QWORD *)v113 - 1) = v111;
        *(_QWORD *)&v141 = v113;
        goto LABEL_278;
      }
      v5 = v109 | 0xF;
      if ( (v109 | 0xFuLL) < 0x16 )
        v5 = 22;
      v112 = v5 + 1;
      if ( v5 == -1 )
      {
        v113 = nullptr;
        *(_QWORD *)&v141 = 0;
      }
      else
      {
        if ( v112 >= 0x1000 )
        {
          v110 = v5 + 40;
          if ( v5 + 40 < (unsigned __int64)(v5 + 1) )
          {
            sub_14001A900(a1: v112, a2: 0);
            __debugbreak();
          }
          goto LABEL_266;
        }
        v113 = (__int128 *)sub_1409E0850(a1: v112);
        *(_QWORD *)&v141 = v113;
      }
    }
LABEL_278:
    v142 = v107 + 16;
    v143 = v5;
    sub_140E79060(a1: v113, a2: v108, a3: v107);
    *(__int128 *)((char *)v113 + v107) = xmmword_140EFE3F0;
    *((_BYTE *)v113 + v109) = 0;
    v114 = &v141;
    if ( v143 > 0xF )
      v114 = (__int128 *)v141;
    v115 = sub_140061E60(a1: v114);
    sub_140062A10(
      a1: (unsigned int)&dword_14137A29C,
      a2: v115,
      a3: (_DWORD)v139,
      a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_45\\Source\\Game\\src\\"
                    "Actors\\PXTrigger.cpp",
      a5: 36);
    if ( v143 > 0xF )
    {
      v116 = (void *)v141;
      if ( v143 + 1 >= 0x1000 )
      {
        if ( (unsigned __int64)(v141 - *(_QWORD *)(v141 - 8) - 8) > 0x1F )
          __fastfail(5u);
        v116 = *(void **)(v141 - 8);
      }
      sub_1409E08A0(lpMem: v116);
    }
    *(_QWORD *)&v141 = 19937;
    v142 = 0;
    v143 = 31;
    if ( v146 > 0xF )
    {
      v117 = (void *)v144;
      if ( v146 + 1 >= 0x1000 )
      {
        if ( (unsigned __int64)(v144 - *(_QWORD *)(v144 - 8) - 8) > 0x1F )
          __fastfail(5u);
        v117 = *(void **)(v144 - 8);
      }
      sub_1409E08A0(lpMem: v117);
    }
    sub_1409E0F20(a1: &dword_14137A2A0);
    v4 = v140;
LABEL_35:
    v16 = *(_BYTE *)(a1 + 236);
    v17 = (v16 & 4) != 0;
    v136 = v17;
    LODWORD(v137) = dword_14137A29C;
    if ( *(_DWORD *)a2 != 0 )
    {
      if ( (v16 & 4) == 0 )
        goto LABEL_41;
      v18 = sub_14007E5A0();
      sub_14008D140(a1: a2, a2: (unsigned int)&v137, a3: (unsigned int)&v136, a4: 1, a5: v18);
LABEL_40:
      v17 = v136;
      goto LABEL_41;
    }
    if ( (unsigned __int8)sub_14008D4B0(a1: a2, a2: (unsigned int)&v136, a3: (unsigned int)&v137, a4: 1, a5: 512) != 0 )
      goto LABEL_40;
    v17 = false;
LABEL_41:
    *(_BYTE *)(a1 + 236) &= ~4u;
    *(_BYTE *)(a1 + 236) |= 4 * v17;
    if ( (*(_BYTE *)(a1 + 236) & 4) != 0 && *(_DWORD *)a2 == 0 )
      sub_140101580(a1);
    if ( dword_14137A2A8 > *(_DWORD *)(v4 + 76) )
    {
      sub_1409E0F90(a1: &dword_14137A2A8);
      if ( dword_14137A2A8 == -1 )
      {
        v118 = (__int64 *)sub_14001FE50(a1: &v141, a2: aTrigger_0, a3: "enterEvent");
        LODWORD(v119) = (_DWORD)v118;
        if ( (unsigned __int64)v118[3] > 0xF )
          v119 = *v118;
        v120 = (_QWORD *)sub_14001FE50(a1: &v144, a2: aTrigger_0, a3: "enterEvent");
        if ( v120[3] > 0xFu )
          v120 = (_QWORD *)*v120;
        v121 = sub_140061E60(a1: v120);
        sub_140062A10(
          a1: (unsigned int)&dword_14137A2A4,
          a2: v121,
          a3: v119,
          a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_45\\Source\\Game\\s"
                        "rc\\Actors\\PXTrigger.cpp",
          a5: 41);
        if ( v146 > 0xF )
        {
          v122 = (void *)v144;
          if ( v146 + 1 >= 0x1000 )
          {
            if ( (unsigned __int64)(v144 - *(_QWORD *)(v144 - 8) - 8) > 0x1F )
              __fastfail(5u);
            v122 = *(void **)(v144 - 8);
          }
          sub_1409E08A0(lpMem: v122);
        }
        *(_QWORD *)&v144 = 19937;
        v145 = 0;
        v146 = 31;
        if ( v143 > 0xF )
        {
          v123 = (void *)v141;
          if ( v143 + 1 >= 0x1000 )
          {
            if ( (unsigned __int64)(v141 - *(_QWORD *)(v141 - 8) - 8) > 0x1F )
              __fastfail(5u);
            v123 = *(void **)(v141 - 8);
          }
          sub_1409E08A0(lpMem: v123);
        }
        sub_1409E0F20(a1: &dword_14137A2A8);
      }
    }
    v19 = *(_BYTE *)(a1 + 236);
    v20 = (v19 & 8) != 0;
    v136 = v20;
    LODWORD(v137) = dword_14137A2A4;
    if ( *(_DWORD *)a2 != 0 )
    {
      if ( (v19 & 8) == 0 )
        goto LABEL_51;
      v21 = sub_14007E5A0();
      sub_14008D140(a1: a2, a2: (unsigned int)&v137, a3: (unsigned int)&v136, a4: 1, a5: v21);
LABEL_50:
      v20 = v136;
      goto LABEL_51;
    }
    if ( (unsigned __int8)sub_14008D4B0(a1: a2, a2: (unsigned int)&v136, a3: (unsigned int)&v137, a4: 1, a5: 512) != 0 )
      goto LABEL_50;
    v20 = false;
LABEL_51:
    *(_BYTE *)(a1 + 236) &= ~8u;
    *(_BYTE *)(a1 + 236) |= 8 * v20;
    if ( dword_14137A2B0 > *(_DWORD *)(v4 + 76) )
    {
      sub_1409E0F90(a1: &dword_14137A2B0);
      if ( dword_14137A2B0 == -1 )
      {
        v124 = (__int64 *)sub_14001FE50(a1: &v141, a2: aTrigger_0, a3: "exitEvent");
        LODWORD(v125) = (_DWORD)v124;
        if ( (unsigned __int64)v124[3] > 0xF )
          v125 = *v124;
        v126 = (_QWORD *)sub_14001FE50(a1: &v144, a2: aTrigger_0, a3: "exitEvent");
        if ( v126[3] > 0xFu )
          v126 = (_QWORD *)*v126;
        v127 = sub_140061E60(a1: v126);
        sub_140062A10(
          a1: (unsigned int)&dword_14137A2AC,
          a2: v127,
          a3: v125,
          a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_45\\Source\\Game\\s"
                        "rc\\Actors\\PXTrigger.cpp",
          a5: 42);
        if ( v146 > 0xF )
        {
          v128 = (void *)v144;
          if ( v146 + 1 >= 0x1000 )
          {
            if ( (unsigned __int64)(v144 - *(_QWORD *)(v144 - 8) - 8) > 0x1F )
              __fastfail(5u);
            v128 = *(void **)(v144 - 8);
          }
          sub_1409E08A0(lpMem: v128);
        }
        *(_QWORD *)&v144 = 19937;
        v145 = 0;
        v146 = 31;
        sub_14001ACC0(a1: &v141);
        sub_1409E0F20(a1: &dword_14137A2B0);
      }
    }
    v22 = *(_BYTE *)(a1 + 236);
    v23 = (v22 & 0x10) != 0;
    v136 = v23;
    LODWORD(v137) = dword_14137A2AC;
    if ( *(_DWORD *)a2 != 0 )
    {
      if ( (v22 & 0x10) == 0 )
        goto LABEL_58;
      v24 = sub_14007E5A0();
      sub_14008D140(a1: a2, a2: (unsigned int)&v137, a3: (unsigned int)&v136, a4: 1, a5: v24);
LABEL_57:
      v23 = v136;
      goto LABEL_58;
    }
    if ( (unsigned __int8)sub_14008D4B0(a1: a2, a2: (unsigned int)&v136, a3: (unsigned int)&v137, a4: 1, a5: 512) != 0 )
      goto LABEL_57;
    v23 = false;
LABEL_58:
    *(_BYTE *)(a1 + 236) &= ~0x10u;
    *(_BYTE *)(a1 + 236) |= 16 * v23;
    if ( dword_14137A2B8 > *(_DWORD *)(v4 + 76) )
    {
      sub_1409E0F90(a1: &dword_14137A2B8);
      if ( dword_14137A2B8 == -1 )
      {
        v129 = (__int64 *)sub_14001FE50(a1: &v141, a2: aTrigger_0, a3: "collisionEvent");
        LODWORD(v130) = (_DWORD)v129;
        if ( (unsigned __int64)v129[3] > 0xF )
          v130 = *v129;
        v131 = (_QWORD *)sub_14001FE50(a1: &v144, a2: aTrigger_0, a3: "collisionEvent");
        if ( v131[3] > 0xFu )
          v131 = (_QWORD *)*v131;
        v132 = sub_140061E60(a1: v131);
        sub_140062A10(
          a1: (unsigned int)&dword_14137A2B4,
          a2: v132,
          a3: v130,
          a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_45\\Source\\Game\\s"
                        "rc\\Actors\\PXTrigger.cpp",
          a5: 43);
        sub_14001ACC0(a1: &v144);
        *(_QWORD *)&v144 = 19937;
        v145 = 0;
        v146 = 31;
        sub_14001ACC0(a1: &v141);
        sub_1409E0F20(a1: &dword_14137A2B8);
      }
    }
    v25 = *(_BYTE *)(a1 + 236);
    v26 = (v25 & 0x20) != 0;
    v136 = v26;
    LODWORD(v137) = dword_14137A2B4;
    if ( *(_DWORD *)a2 != 0 )
    {
      if ( (v25 & 0x20) == 0 )
        goto LABEL_65;
      v27 = sub_14007E5A0();
      sub_14008D140(a1: a2, a2: (unsigned int)&v137, a3: (unsigned int)&v136, a4: 1, a5: v27);
LABEL_64:
      v26 = v136;
      goto LABEL_65;
    }
    if ( (unsigned __int8)sub_14008D4B0(a1: a2, a2: (unsigned int)&v136, a3: (unsigned int)&v137, a4: 1, a5: 512) != 0 )
      goto LABEL_64;
    v26 = false;
LABEL_65:
    *(_BYTE *)(a1 + 236) &= ~0x20u;
    *(_BYTE *)(a1 + 236) |= 32 * v26;
    if ( dword_14137A2C0 > *(_DWORD *)(v4 + 76) )
    {
      sub_1409E0F90(a1: &dword_14137A2C0);
      if ( dword_14137A2C0 == -1 )
      {
        v133 = (__int64 *)sub_14001FE50(a1: &v141, a2: aTrigger_0, a3: "disableInteractionUI");
        LODWORD(v134) = (_DWORD)v133;
        if ( (unsigned __int64)v133[3] > 0xF )
          v134 = *v133;
        v135 = (_QWORD *)sub_14001FE50(a1: &v144, a2: aTrigger_0, a3: "disableInteractionUI");
        if ( v135[3] > 0xFu )
          v135 = (_QWORD *)*v135;
        v31 = sub_140061E60(a1: v135);
        sub_140062A10(
          a1: (unsigned int)&dword_14137A2BC,
          a2: v31,
          a3: v134,
          a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_45\\Source\\Game\\s"
                        "rc\\Actors\\PXTrigger.cpp",
          a5: 44);
        sub_14001ACC0(a1: &v144);
        *(_QWORD *)&v144 = 19937;
        v145 = 0;
        v146 = 31;
        sub_14001ACC0(a1: &v141);
        sub_1409E0F20(a1: &dword_14137A2C0);
      }
    }
    v28 = *(_BYTE *)(a1 + 237) & 1;
    v136 = v28;
    result = (unsigned int)dword_14137A2BC;
    LODWORD(v137) = dword_14137A2BC;
    if ( *(_DWORD *)a2 != 0 )
    {
      if ( !v28 )
        goto LABEL_72;
      v30 = sub_14007E5A0();
      result = sub_14008D140(a1: a2, a2: (unsigned int)&v137, a3: (unsigned int)&v136, a4: 1, a5: v30);
LABEL_71:
      v28 = v136;
      goto LABEL_72;
    }
    result = sub_14008D4B0(a1: a2, a2: (unsigned int)&v136, a3: (unsigned int)&v137, a4: 1, a5: 512);
    if ( (_BYTE)result != 0 )
      goto LABEL_71;
    v28 = false;
LABEL_72:
    *(_BYTE *)(a1 + 237) &= ~1u;
    *(_BYTE *)(a1 + 237) |= v28;
    return result;
  }
  v8 = sub_14007E510();
  sub_14008D140(a1: a2, a2: (unsigned int)&v137, a3: a1 + 184, a4: 4, a5: v8);
  goto LABEL_12;
}