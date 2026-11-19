// Hex-Rays export, baseline 645.348067; descriptive analysis label.
__int64 __fastcall sub_140245620(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  __int64 v4; // r15
  __int64 v5; // rdi
  char v6; // al
  char v7; // al
  char v8; // al
  char v9; // al
  char v10; // al
  char v11; // al
  __int64 result; // rax
  char v13; // al
  int v14; // eax
  __int64 *v15; // rax
  __int64 v16; // rdi
  _QWORD *v17; // rax
  int v18; // eax
  __int64 *v19; // rax
  __int64 v20; // rdi
  _QWORD *v21; // rax
  int v22; // eax
  __int64 *v23; // rax
  __int64 v24; // rdi
  _QWORD *v25; // rax
  int v26; // eax
  void *v27; // rcx
  void *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r15
  char *v32; // r13
  __int64 v33; // r12
  unsigned __int64 v34; // rsi
  unsigned __int64 v35; // rcx
  __int64 v36; // rax
  __int128 *v37; // r14
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int128 *v40; // rax
  __int64 v41; // r13
  char *v42; // r12
  __int64 v43; // r15
  unsigned __int64 v44; // rsi
  unsigned __int64 v45; // rcx
  __int64 v46; // rax
  __int128 *v47; // r14
  __int128 *v48; // rcx
  int v49; // eax
  void *v50; // rcx
  void *v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r15
  char *v55; // r13
  __int64 v56; // r12
  unsigned __int64 v57; // rsi
  unsigned __int64 v58; // rcx
  __int64 v59; // rax
  __int128 *v60; // r14
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int128 *v63; // rax
  __int64 v64; // r13
  char *v65; // r12
  __int64 v66; // r15
  unsigned __int64 v67; // rsi
  unsigned __int64 v68; // rcx
  __int64 v69; // rax
  __int128 *v70; // r14
  __int128 *v71; // rcx
  int v72; // eax
  void *v73; // rcx
  void *v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r15
  char *v78; // r13
  __int64 v79; // r12
  unsigned __int64 v80; // rsi
  unsigned __int64 v81; // rcx
  __int64 v82; // rax
  __int128 *v83; // r14
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int128 *v86; // r12
  __int64 v87; // r13
  char *v88; // r15
  __int64 v89; // r14
  unsigned __int64 v90; // rax
  __int64 v91; // rax
  unsigned __int64 v92; // rcx
  __int128 *v93; // rsi
  __int128 *v94; // rcx
  int v95; // eax
  void *v96; // rcx
  void *v97; // rcx
  __int64 *v98; // rax
  __int64 v99; // rdi
  _QWORD *v100; // rax
  int v101; // eax
  __int64 *v102; // rax
  __int64 v103; // rdi
  _QWORD *v104; // rax
  int v105; // eax
  __int64 *v106; // rax
  __int64 v107; // rdi
  _QWORD *v108; // rax
  int v109; // eax
  __int64 *v110; // rax
  __int64 v111; // rdi
  _QWORD *v112; // rax
  int v113; // eax
  __int64 *v114; // rax
  __int64 v115; // rsi
  _QWORD *v116; // rax
  int v117; // eax
  __int64 *v118; // rax
  __int64 v119; // rsi
  _QWORD *v120; // rax
  int v121; // eax
  __int64 *v122; // rax
  __int64 v123; // rsi
  _QWORD *v124; // rax
  int v125; // eax
  __int64 *v126; // rax
  __int64 v127; // rsi
  _QWORD *v128; // rax
  int v129; // eax
  __int64 *v130; // rax
  __int64 v131; // rsi
  _QWORD *v132; // rax
  int v133; // eax
  __int64 *v134; // rax
  __int64 v135; // rsi
  _QWORD *v136; // rax
  int v137; // eax
  __int64 *v138; // rax
  __int64 v139; // rsi
  _QWORD *v140; // rax
  __int128 *v141; // [rsp+30h] [rbp-39h] BYREF
  __int64 v142; // [rsp+38h] [rbp-31h]
  __int64 v143; // [rsp+40h] [rbp-29h]
  __int128 v144; // [rsp+48h] [rbp-21h] BYREF
  __int64 v145; // [rsp+58h] [rbp-11h]
  unsigned __int64 v146; // [rsp+60h] [rbp-9h]
  __int128 v147; // [rsp+68h] [rbp-1h] BYREF
  __int64 v148; // [rsp+78h] [rbp+Fh]
  unsigned __int64 v149; // [rsp+80h] [rbp+17h]

  v3 = a1;
  v143 = a1;
  v4 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  v142 = v4;
  if ( dword_14137BFA8 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409E0F90(a1: &dword_14137BFA8);
    if ( dword_14137BFA8 == -1 )
    {
      sub_1409E0AE0(a1: sub_140ED00F0);
      sub_1409E0F20(a1: &dword_14137BFA8);
    }
  }
  sub_1400C1490(a1: v3, a2);
  if ( dword_14137BFB0 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409E0F90(a1: &dword_14137BFB0);
    if ( dword_14137BFB0 == -1 )
    {
      v15 = (__int64 *)sub_14001FE50(a1: &v144, a2: aViewporteffect_1, a3: "rainMaterialResource");
      LODWORD(v16) = (_DWORD)v15;
      if ( (unsigned __int64)v15[3] > 0xF )
        v16 = *v15;
      v17 = (_QWORD *)sub_14001FE50(a1: &v147, a2: aViewporteffect_1, a3: "rainMaterialResource");
      if ( v17[3] > 0xFu )
        v17 = (_QWORD *)*v17;
      v18 = sub_140061E60(a1: v17);
      sub_140062A10(
        a1: (unsigned int)&dword_14137BFAC,
        a2: v18,
        a3: v16,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_45\\Source\\Game\\src"
                      "\\Actors\\PXViewportEffect.cpp",
        a5: 1375);
      sub_1400178D0(a1: &v147);
      sub_1400178D0(a1: &v144);
      sub_1409E0F20(a1: &dword_14137BFB0);
    }
  }
  LODWORD(v141) = dword_14137BFAC;
  sub_14008D900(a1: a2, a2: &v141, a3: v3 + 192, a4: &byte_140EE2615);
  if ( dword_14137BFB8 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409E0F90(a1: &dword_14137BFB8);
    if ( dword_14137BFB8 == -1 )
    {
      v19 = (__int64 *)sub_14001FE50(a1: &v144, a2: aViewporteffect_1, a3: "rainHitMaterialResource");
      LODWORD(v20) = (_DWORD)v19;
      if ( (unsigned __int64)v19[3] > 0xF )
        v20 = *v19;
      v21 = (_QWORD *)sub_14001FE50(a1: &v147, a2: aViewporteffect_1, a3: "rainHitMaterialResource");
      if ( v21[3] > 0xFu )
        v21 = (_QWORD *)*v21;
      v22 = sub_140061E60(a1: v21);
      sub_140062A10(
        a1: (unsigned int)&dword_14137BFB4,
        a2: v22,
        a3: v20,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_45\\Source\\Game\\src"
                      "\\Actors\\PXViewportEffect.cpp",
        a5: 1376);
      sub_1400178D0(a1: &v147);
      sub_1400178D0(a1: &v144);
      sub_1409E0F20(a1: &dword_14137BFB8);
    }
  }
  LODWORD(v141) = dword_14137BFB4;
  sub_14008D900(a1: a2, a2: &v141, a3: v3 + 272, a4: &byte_140EE2615);
  if ( dword_14137BFC0 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409E0F90(a1: &dword_14137BFC0);
    if ( dword_14137BFC0 == -1 )
    {
      v23 = (__int64 *)sub_14001FE50(a1: &v144, a2: aViewporteffect_1, a3: "rainParticleSpeed");
      LODWORD(v24) = (_DWORD)v23;
      if ( (unsigned __int64)v23[3] > 0xF )
        v24 = *v23;
      v25 = (_QWORD *)sub_14001FE50(a1: &v147, a2: aViewporteffect_1, a3: "rainParticleSpeed");
      if ( v25[3] > 0xFu )
        v25 = (_QWORD *)*v25;
      v26 = sub_140061E60(a1: v25);
      sub_140062A10(
        a1: (unsigned int)&dword_14137BFBC,
        a2: v26,
        a3: v24,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_45\\Source\\Game\\src"
                      "\\Actors\\PXViewportEffect.cpp",
        a5: 1377);
      if ( v149 > 0xF )
      {
        v27 = (void *)v147;
        if ( v149 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v147 - *(_QWORD *)(v147 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v27 = *(void **)(v147 - 8);
        }
        sub_1409E08A0(lpMem: v27);
      }
      *(_QWORD *)&v147 = 19937;
      v148 = 0;
      v149 = 31;
      if ( v146 > 0xF )
      {
        v28 = (void *)v144;
        if ( v146 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v144 - *(_QWORD *)(v144 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v28 = *(void **)(v144 - 8);
        }
        sub_1409E08A0(lpMem: v28);
      }
      sub_1409E0F20(a1: &dword_14137BFC0);
    }
  }
  LODWORD(v141) = dword_14137BFBC;
  sub_140021A90(a1: a2, a2: &v141, a3: v3 + 248);
  v5 = 0x7FFFFFFFFFFFFFFFLL;
  if ( dword_14137BFC8 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409E0F90(a1: &dword_14137BFC8);
    if ( dword_14137BFC8 == -1 )
    {
      v31 = qword_141300268;
      if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141300268) < 0x14 )
        sub_14001ADA0(a1: v30, a2: v29);
      v32 = aViewporteffect_1;
      if ( (unsigned __int64)qword_141300270 > 0xF )
        v32 = *(char **)aViewporteffect_1;
      v147 = 0;
      v148 = 0;
      v149 = 0;
      v33 = qword_141300268 + 20;
      if ( (unsigned __int64)(qword_141300268 + 20) <= 0xF )
      {
        v34 = 15;
        v37 = &v147;
      }
      else
      {
        v34 = v33 | 0xF;
        if ( (v33 | 0xFuLL) <= 0x7FFFFFFFFFFFFFFFLL )
        {
          if ( v34 < 0x16 )
            v34 = 22;
          if ( v34 == -1 )
          {
            v37 = nullptr;
            *(_QWORD *)&v147 = 0;
            goto LABEL_112;
          }
          if ( v34 + 1 < 0x1000 )
          {
            v37 = (__int128 *)sub_1409E0850(a1: v34 + 1);
            *(_QWORD *)&v147 = v37;
            goto LABEL_112;
          }
          v35 = v34 + 40;
          if ( v34 + 40 < v34 + 1 )
          {
            sub_14001A900(a1: v35, a2: v29);
            __debugbreak();
          }
        }
        else
        {
          v34 = 0x7FFFFFFFFFFFFFFFLL;
          v35 = 0x8000000000000027uLL;
        }
        v36 = sub_1409E0850(a1: v35);
        if ( v36 == 0 )
          __fastfail(5u);
        v37 = (__int128 *)((v36 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *((_QWORD *)v37 - 1) = v36;
        *(_QWORD *)&v147 = v37;
      }
LABEL_112:
      v148 = v31 + 20;
      v149 = v34;
      sub_140E79060(a1: v37, a2: v32, a3: v31);
      qmemcpy((char *)v37 + v31, "snowMaterialResource", 20);
      *((_BYTE *)v37 + v33) = 0;
      v40 = &v147;
      if ( v149 > 0xF )
        v40 = (__int128 *)v147;
      v141 = v40;
      v41 = qword_141300268;
      if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141300268) < 0x14 )
        sub_14001ADA0(a1: v39, a2: v38);
      v42 = aViewporteffect_1;
      if ( (unsigned __int64)qword_141300270 > 0xF )
        v42 = *(char **)aViewporteffect_1;
      v144 = 0;
      v145 = 0;
      v146 = 0;
      v43 = qword_141300268 + 20;
      if ( (unsigned __int64)(qword_141300268 + 20) <= 0xF )
      {
        v44 = 15;
        v47 = &v144;
      }
      else
      {
        v44 = v43 | 0xF;
        if ( (v43 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
        {
          v44 = 0x7FFFFFFFFFFFFFFFLL;
          v45 = 0x8000000000000027uLL;
LABEL_121:
          v46 = sub_1409E0850(a1: v45);
          if ( v46 == 0 )
            __fastfail(5u);
          v47 = (__int128 *)((v46 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
          *((_QWORD *)v47 - 1) = v46;
          *(_QWORD *)&v144 = v47;
          goto LABEL_133;
        }
        if ( v44 < 0x16 )
          v44 = 22;
        if ( v44 == -1 )
        {
          v47 = nullptr;
          *(_QWORD *)&v144 = 0;
        }
        else
        {
          if ( v44 + 1 >= 0x1000 )
          {
            v45 = v44 + 40;
            if ( v44 + 40 < v44 + 1 )
            {
              sub_14001A900(a1: v45, a2: v38);
              __debugbreak();
            }
            goto LABEL_121;
          }
          v47 = (__int128 *)sub_1409E0850(a1: v44 + 1);
          *(_QWORD *)&v144 = v47;
        }
      }
LABEL_133:
      v145 = v41 + 20;
      v146 = v44;
      sub_140E79060(a1: v47, a2: v42, a3: v41);
      qmemcpy((char *)v47 + v41, "snowMaterialResource", 20);
      *((_BYTE *)v47 + v43) = 0;
      v48 = &v144;
      if ( v146 > 0xF )
        v48 = (__int128 *)v144;
      v49 = sub_140061E60(a1: v48);
      sub_140062A10(
        a1: (unsigned int)&dword_14137BFC4,
        a2: v49,
        a3: (_DWORD)v141,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_45\\Source\\Game\\src"
                      "\\Actors\\PXViewportEffect.cpp",
        a5: 1378);
      if ( v146 > 0xF )
      {
        v50 = (void *)v144;
        if ( v146 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v144 - *(_QWORD *)(v144 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v50 = *(void **)(v144 - 8);
        }
        sub_1409E08A0(lpMem: v50);
      }
      *(_QWORD *)&v144 = 19937;
      v145 = 0;
      v146 = 31;
      if ( v149 > 0xF )
      {
        v51 = (void *)v147;
        if ( v149 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v147 - *(_QWORD *)(v147 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v51 = *(void **)(v147 - 8);
        }
        sub_1409E08A0(lpMem: v51);
      }
      sub_1409E0F20(a1: &dword_14137BFC8);
      v4 = v142;
      v3 = v143;
    }
  }
  LODWORD(v141) = dword_14137BFC4;
  sub_14008D900(a1: a2, a2: &v141, a3: v3 + 336, a4: &byte_140EE2615);
  if ( dword_14137BFD0 <= *(_DWORD *)(v4 + 76) )
    goto LABEL_7;
  sub_1409E0F90(a1: &dword_14137BFD0);
  if ( dword_14137BFD0 != -1 )
    goto LABEL_7;
  v54 = qword_141300268;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141300268) < 0x11 )
    sub_14001ADA0(a1: v53, a2: v52);
  v55 = aViewporteffect_1;
  if ( (unsigned __int64)qword_141300270 > 0xF )
    v55 = *(char **)aViewporteffect_1;
  v147 = 0;
  v148 = 0;
  v149 = 0;
  v56 = qword_141300268 + 17;
  if ( (unsigned __int64)(qword_141300268 + 17) <= 0xF )
  {
    v57 = 15;
    v60 = &v147;
  }
  else
  {
    v57 = v56 | 0xF;
    if ( (v56 | 0xFuLL) <= 0x7FFFFFFFFFFFFFFFLL )
    {
      if ( v57 < 0x16 )
        v57 = 22;
      if ( v57 == -1 )
      {
        v60 = nullptr;
        *(_QWORD *)&v147 = 0;
        goto LABEL_168;
      }
      if ( v57 + 1 < 0x1000 )
      {
        v60 = (__int128 *)sub_1409E0850(a1: v57 + 1);
        *(_QWORD *)&v147 = v60;
        goto LABEL_168;
      }
      v58 = v57 + 40;
      if ( v57 + 40 < v57 + 1 )
      {
        sub_14001A900(a1: v58, a2: v52);
        __debugbreak();
      }
    }
    else
    {
      v57 = 0x7FFFFFFFFFFFFFFFLL;
      v58 = 0x8000000000000027uLL;
    }
    v59 = sub_1409E0850(a1: v58);
    if ( v59 == 0 )
      __fastfail(5u);
    v60 = (__int128 *)((v59 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)v60 - 1) = v59;
    *(_QWORD *)&v147 = v60;
  }
LABEL_168:
  v148 = v54 + 17;
  v149 = v57;
  sub_140E79060(a1: v60, a2: v55, a3: v54);
  qmemcpy((char *)v60 + v54, "snowParticleSpeed", 17);
  *((_BYTE *)v60 + v56) = 0;
  v63 = &v147;
  if ( v149 > 0xF )
    v63 = (__int128 *)v147;
  v141 = v63;
  v64 = qword_141300268;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141300268) < 0x11 )
    sub_14001ADA0(a1: v62, a2: v61);
  v65 = aViewporteffect_1;
  if ( (unsigned __int64)qword_141300270 > 0xF )
    v65 = *(char **)aViewporteffect_1;
  v144 = 0;
  v145 = 0;
  v146 = 0;
  v66 = qword_141300268 + 17;
  if ( (unsigned __int64)(qword_141300268 + 17) <= 0xF )
  {
    v67 = 15;
    v70 = &v144;
  }
  else
  {
    v67 = v66 | 0xF;
    if ( (v66 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
    {
      v67 = 0x7FFFFFFFFFFFFFFFLL;
      v68 = 0x8000000000000027uLL;
LABEL_177:
      v69 = sub_1409E0850(a1: v68);
      if ( v69 == 0 )
        __fastfail(5u);
      v70 = (__int128 *)((v69 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *((_QWORD *)v70 - 1) = v69;
      *(_QWORD *)&v144 = v70;
      goto LABEL_189;
    }
    if ( v67 < 0x16 )
      v67 = 22;
    if ( v67 == -1 )
    {
      v70 = nullptr;
      *(_QWORD *)&v144 = 0;
    }
    else
    {
      if ( v67 + 1 >= 0x1000 )
      {
        v68 = v67 + 40;
        if ( v67 + 40 < v67 + 1 )
        {
          sub_14001A900(a1: v68, a2: v61);
          __debugbreak();
        }
        goto LABEL_177;
      }
      v70 = (__int128 *)sub_1409E0850(a1: v67 + 1);
      *(_QWORD *)&v144 = v70;
    }
  }
LABEL_189:
  v145 = v64 + 17;
  v146 = v67;
  sub_140E79060(a1: v70, a2: v65, a3: v64);
  qmemcpy((char *)v70 + v64, "snowParticleSpeed", 17);
  *((_BYTE *)v70 + v66) = 0;
  v71 = &v144;
  if ( v146 > 0xF )
    v71 = (__int128 *)v144;
  v72 = sub_140061E60(a1: v71);
  sub_140062A10(
    a1: (unsigned int)&dword_14137BFCC,
    a2: v72,
    a3: (_DWORD)v141,
    a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_45\\Source\\Game\\src\\Ac"
                  "tors\\PXViewportEffect.cpp",
    a5: 1379);
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
  *(_QWORD *)&v144 = 19937;
  v145 = 0;
  v146 = 31;
  if ( v149 > 0xF )
  {
    v74 = (void *)v147;
    if ( v149 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v147 - *(_QWORD *)(v147 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v74 = *(void **)(v147 - 8);
    }
    sub_1409E08A0(lpMem: v74);
  }
  sub_1409E0F20(a1: &dword_14137BFD0);
  v4 = v142;
  v3 = v143;
LABEL_7:
  LODWORD(v141) = dword_14137BFCC;
  sub_140021A90(a1: a2, a2: &v141, a3: v3 + 392);
  if ( dword_14137BFD8 <= *(_DWORD *)(v4 + 76) )
    goto LABEL_8;
  sub_1409E0F90(a1: &dword_14137BFD8);
  if ( dword_14137BFD8 != -1 )
    goto LABEL_8;
  v77 = qword_141300268;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141300268) < 0x10 )
    sub_14001ADA0(a1: v76, a2: v75);
  v78 = aViewporteffect_1;
  if ( (unsigned __int64)qword_141300270 > 0xF )
    v78 = *(char **)aViewporteffect_1;
  v147 = 0;
  v148 = 0;
  v149 = 0;
  v79 = qword_141300268 + 16;
  if ( (unsigned __int64)(qword_141300268 + 16) <= 0xF )
  {
    v80 = 15;
    v83 = &v147;
  }
  else
  {
    v80 = v79 | 0xF;
    if ( (v79 | 0xFuLL) <= 0x7FFFFFFFFFFFFFFFLL )
    {
      if ( v80 < 0x16 )
        v80 = 22;
      if ( v80 == -1 )
      {
        v83 = nullptr;
        *(_QWORD *)&v147 = 0;
        goto LABEL_224;
      }
      if ( v80 + 1 < 0x1000 )
      {
        v83 = (__int128 *)sub_1409E0850(a1: v80 + 1);
        *(_QWORD *)&v147 = v83;
        goto LABEL_224;
      }
      v81 = v80 + 40;
      if ( v80 + 40 < v80 + 1 )
      {
        sub_14001A900(a1: v81, a2: v75);
        __debugbreak();
      }
    }
    else
    {
      v80 = 0x7FFFFFFFFFFFFFFFLL;
      v81 = 0x8000000000000027uLL;
    }
    v82 = sub_1409E0850(a1: v81);
    if ( v82 == 0 )
      __fastfail(5u);
    v83 = (__int128 *)((v82 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)v83 - 1) = v82;
    *(_QWORD *)&v147 = v83;
  }
LABEL_224:
  v148 = v77 + 16;
  v149 = v80;
  sub_140E79060(a1: v83, a2: v78, a3: v77);
  *(__int128 *)((char *)v83 + v77) = xmmword_140F1AD20;
  *((_BYTE *)v83 + v79) = 0;
  v86 = &v147;
  if ( v149 > 0xF )
    LODWORD(v86) = v147;
  v87 = qword_141300268;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_141300268) < 0x10 )
    sub_14001ADA0(a1: v85, a2: v84);
  v88 = aViewporteffect_1;
  if ( (unsigned __int64)qword_141300270 > 0xF )
    v88 = *(char **)aViewporteffect_1;
  v144 = 0;
  v145 = 0;
  v146 = 0;
  v89 = qword_141300268 + 16;
  if ( (unsigned __int64)(qword_141300268 + 16) <= 0xF )
  {
    v5 = 15;
    v93 = &v144;
  }
  else
  {
    if ( (v89 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
    {
      v90 = 0x8000000000000027uLL;
LABEL_233:
      v91 = sub_1409E0850(a1: v90);
      if ( v91 == 0 )
        __fastfail(5u);
      v93 = (__int128 *)((v91 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *((_QWORD *)v93 - 1) = v91;
      *(_QWORD *)&v144 = v93;
      goto LABEL_245;
    }
    v5 = v89 | 0xF;
    if ( (v89 | 0xFuLL) < 0x16 )
      v5 = 22;
    v92 = v5 + 1;
    if ( v5 == -1 )
    {
      v93 = nullptr;
      *(_QWORD *)&v144 = 0;
    }
    else
    {
      if ( v92 >= 0x1000 )
      {
        v90 = v5 + 40;
        if ( v5 + 40 < (unsigned __int64)(v5 + 1) )
        {
          sub_14001A900(a1: v92, a2: 0);
          __debugbreak();
        }
        goto LABEL_233;
      }
      v93 = (__int128 *)sub_1409E0850(a1: v92);
      *(_QWORD *)&v144 = v93;
    }
  }
LABEL_245:
  v145 = v87 + 16;
  v146 = v5;
  sub_140E79060(a1: v93, a2: v88, a3: v87);
  *(__int128 *)((char *)v93 + v87) = xmmword_140F1AD20;
  *((_BYTE *)v93 + v89) = 0;
  v94 = &v144;
  if ( v146 > 0xF )
    v94 = (__int128 *)v144;
  v95 = sub_140061E60(a1: v94);
  sub_140062A10(
    a1: (unsigned int)&dword_14137BFD4,
    a2: v95,
    a3: (_DWORD)v86,
    a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_45\\Source\\Game\\src\\Ac"
                  "tors\\PXViewportEffect.cpp",
    a5: 1380);
  if ( v146 > 0xF )
  {
    v96 = (void *)v144;
    if ( v146 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v144 - *(_QWORD *)(v144 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v96 = *(void **)(v144 - 8);
    }
    sub_1409E08A0(lpMem: v96);
  }
  *(_QWORD *)&v144 = 19937;
  v145 = 0;
  v146 = 31;
  if ( v149 > 0xF )
  {
    v97 = (void *)v147;
    if ( v149 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v147 - *(_QWORD *)(v147 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v97 = *(void **)(v147 - 8);
    }
    sub_1409E08A0(lpMem: v97);
  }
  sub_1409E0F20(a1: &dword_14137BFD8);
  v4 = v142;
  v3 = v143;
LABEL_8:
  LODWORD(v141) = dword_14137BFD4;
  sub_140021A90(a1: a2, a2: &v141, a3: v3 + 396);
  if ( dword_14137BFE0 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409E0F90(a1: &dword_14137BFE0);
    if ( dword_14137BFE0 == -1 )
    {
      v98 = (__int64 *)sub_14001FE50(a1: &v144, a2: aViewporteffect_1, a3: "snowParticleSpread");
      LODWORD(v99) = (_DWORD)v98;
      if ( (unsigned __int64)v98[3] > 0xF )
        v99 = *v98;
      v100 = (_QWORD *)sub_14001FE50(a1: &v147, a2: aViewporteffect_1, a3: "snowParticleSpread");
      if ( v100[3] > 0xFu )
        v100 = (_QWORD *)*v100;
      v101 = sub_140061E60(a1: v100);
      sub_140062A10(
        a1: (unsigned int)&dword_14137BFDC,
        a2: v101,
        a3: v99,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_45\\Source\\Game\\src"
                      "\\Actors\\PXViewportEffect.cpp",
        a5: 1381);
      sub_1400178D0(a1: &v147);
      sub_1400178D0(a1: &v144);
      sub_1409E0F20(a1: &dword_14137BFE0);
    }
  }
  LODWORD(v141) = dword_14137BFDC;
  sub_140021A90(a1: a2, a2: &v141, a3: v3 + 400);
  if ( dword_14137BFE8 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409E0F90(a1: &dword_14137BFE8);
    if ( dword_14137BFE8 == -1 )
    {
      v102 = (__int64 *)sub_14001FE50(a1: &v144, a2: aViewporteffect_1, a3: "snowParticleHeightOffset");
      LODWORD(v103) = (_DWORD)v102;
      if ( (unsigned __int64)v102[3] > 0xF )
        v103 = *v102;
      v104 = (_QWORD *)sub_14001FE50(a1: &v147, a2: aViewporteffect_1, a3: "snowParticleHeightOffset");
      if ( v104[3] > 0xFu )
        v104 = (_QWORD *)*v104;
      v105 = sub_140061E60(a1: v104);
      sub_140062A10(
        a1: (unsigned int)&dword_14137BFE4,
        a2: v105,
        a3: v103,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_45\\Source\\Game\\src"
                      "\\Actors\\PXViewportEffect.cpp",
        a5: 1382);
      sub_1400178D0(a1: &v147);
      sub_1400178D0(a1: &v144);
      sub_1409E0F20(a1: &dword_14137BFE8);
    }
  }
  LODWORD(v141) = dword_14137BFE4;
  sub_140021A90(a1: a2, a2: &v141, a3: v3 + 404);
  if ( dword_14137BFF0 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409E0F90(a1: &dword_14137BFF0);
    if ( dword_14137BFF0 == -1 )
    {
      v106 = (__int64 *)sub_14001FE50(a1: &v144, a2: aViewporteffect_1, a3: "grassMaterial");
      LODWORD(v107) = (_DWORD)v106;
      if ( (unsigned __int64)v106[3] > 0xF )
        v107 = *v106;
      v108 = (_QWORD *)sub_14001FE50(a1: &v147, a2: aViewporteffect_1, a3: "grassMaterial");
      if ( v108[3] > 0xFu )
        v108 = (_QWORD *)*v108;
      v109 = sub_140061E60(a1: v108);
      sub_140062A10(
        a1: (unsigned int)&dword_14137BFEC,
        a2: v109,
        a3: v107,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_45\\Source\\Game\\src"
                      "\\Actors\\PXViewportEffect.cpp",
        a5: 1384);
      sub_1400178D0(a1: &v147);
      sub_1400178D0(a1: &v144);
      sub_1409E0F20(a1: &dword_14137BFF0);
    }
  }
  LODWORD(v141) = dword_14137BFEC;
  sub_14008D900(a1: a2, a2: &v141, a3: v3 + 480, a4: &byte_140EE2615);
  if ( dword_14137BFF8 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409E0F90(a1: &dword_14137BFF8);
    if ( dword_14137BFF8 == -1 )
    {
      v110 = (__int64 *)sub_14001FE50(a1: &v144, a2: aViewporteffect_1, a3: "maxGrassTrianglesCount");
      LODWORD(v111) = (_DWORD)v110;
      if ( (unsigned __int64)v110[3] > 0xF )
        v111 = *v110;
      v112 = (_QWORD *)sub_14001FE50(a1: &v147, a2: aViewporteffect_1, a3: "maxGrassTrianglesCount");
      if ( v112[3] > 0xFu )
        v112 = (_QWORD *)*v112;
      v113 = sub_140061E60(a1: v112);
      sub_140062A10(
        a1: (unsigned int)&dword_14137BFF4,
        a2: v113,
        a3: v111,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_45\\Source\\Game\\src"
                      "\\Actors\\PXViewportEffect.cpp",
        a5: 1385);
      sub_1400178D0(a1: &v147);
      sub_1400178D0(a1: &v144);
      sub_1409E0F20(a1: &dword_14137BFF8);
    }
  }
  LODWORD(v141) = dword_14137BFF4;
  if ( *(_DWORD *)a2 != 0 )
  {
    if ( *(_BYTE *)(a2 + 62) != 0 )
    {
      if ( *(_DWORD *)(v3 + 436) == 0 )
        goto LABEL_21;
    }
    else if ( *(_DWORD *)(v3 + 436) == 0 )
    {
      goto LABEL_21;
    }
    v6 = sub_14007E500();
    sub_14008D140(a1: a2, a2: (unsigned int)&v141, a3: v3 + 436, a4: 4, a5: v6);
    goto LABEL_21;
  }
  if ( (unsigned __int8)sub_14008D4B0(a1: a2, a2: (int)v3 + 436, a3: (unsigned int)&v141, a4: 4, a5: 512) == 0 )
    *(_DWORD *)(v3 + 436) = 0;
LABEL_21:
  if ( dword_14137C000 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409E0F90(a1: &dword_14137C000);
    if ( dword_14137C000 == -1 )
    {
      v114 = (__int64 *)sub_14001FE50(a1: &v144, a2: aViewporteffect_1, a3: "grassPerTrianglesCount");
      LODWORD(v115) = (_DWORD)v114;
      if ( (unsigned __int64)v114[3] > 0xF )
        v115 = *v114;
      v116 = (_QWORD *)sub_14001FE50(a1: &v147, a2: aViewporteffect_1, a3: "grassPerTrianglesCount");
      if ( v116[3] > 0xFu )
        v116 = (_QWORD *)*v116;
      v117 = sub_140061E60(a1: v116);
      sub_140062A10(
        a1: (unsigned int)&dword_14137BFFC,
        a2: v117,
        a3: v115,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_45\\Source\\Game\\src"
                      "\\Actors\\PXViewportEffect.cpp",
        a5: 1386);
      sub_1400178D0(a1: &v147);
      sub_1400178D0(a1: &v144);
      sub_1409E0F20(a1: &dword_14137C000);
    }
  }
  LODWORD(v141) = dword_14137BFFC;
  if ( *(_DWORD *)a2 != 0 )
  {
    if ( *(_DWORD *)(v3 + 440) != 0 )
    {
      v7 = sub_14007E500();
      sub_14008D140(a1: a2, a2: (unsigned int)&v141, a3: v3 + 440, a4: 4, a5: v7);
    }
  }
  else if ( (unsigned __int8)sub_14008D4B0(a1: a2, a2: (int)v3 + 440, a3: (unsigned int)&v141, a4: 4, a5: 512) == 0 )
  {
    *(_DWORD *)(v3 + 440) = 0;
  }
  if ( dword_14137C008 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409E0F90(a1: &dword_14137C008);
    if ( dword_14137C008 == -1 )
    {
      v118 = (__int64 *)sub_14001FE50(a1: &v144, a2: aViewporteffect_1, a3: "detailGrassInfo");
      LODWORD(v119) = (_DWORD)v118;
      if ( (unsigned __int64)v118[3] > 0xF )
        v119 = *v118;
      v120 = (_QWORD *)sub_14001FE50(a1: &v147, a2: aViewporteffect_1, a3: "detailGrassInfo");
      if ( v120[3] > 0xFu )
        v120 = (_QWORD *)*v120;
      v121 = sub_140061E60(a1: v120);
      sub_140062A10(
        a1: (unsigned int)&dword_14137C004,
        a2: v121,
        a3: v119,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_45\\Source\\Game\\src"
                      "\\Actors\\PXViewportEffect.cpp",
        a5: 1387);
      sub_1400178D0(a1: &v147);
      sub_1400178D0(a1: &v144);
      sub_1409E0F20(a1: &dword_14137C008);
    }
  }
  LODWORD(v141) = dword_14137C004;
  sub_14023FD10(a1: a2, a2: (__int64)&v141, a3: (__int64 *)(v3 + 408));
  if ( dword_14137C010 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409E0F90(a1: &dword_14137C010);
    if ( dword_14137C010 == -1 )
    {
      v122 = (__int64 *)sub_14001FE50(a1: &v144, a2: aViewporteffect_1, a3: "lightSpecularEffectEnable");
      LODWORD(v123) = (_DWORD)v122;
      if ( (unsigned __int64)v122[3] > 0xF )
        v123 = *v122;
      v124 = (_QWORD *)sub_14001FE50(a1: &v147, a2: aViewporteffect_1, a3: "lightSpecularEffectEnable");
      if ( v124[3] > 0xFu )
        v124 = (_QWORD *)*v124;
      v125 = sub_140061E60(a1: v124);
      sub_140062A10(
        a1: (unsigned int)&dword_14137C00C,
        a2: v125,
        a3: v123,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_45\\Source\\Game\\src"
                      "\\Actors\\PXViewportEffect.cpp",
        a5: 1388);
      sub_1400178D0(a1: &v147);
      sub_1400178D0(a1: &v144);
      sub_1409E0F20(a1: &dword_14137C010);
    }
  }
  LODWORD(v141) = dword_14137C00C;
  if ( *(_DWORD *)a2 != 0 )
  {
    if ( *(_BYTE *)(v3 + 520) != 0 )
    {
      v8 = sub_14007E5A0();
      sub_14008D140(a1: a2, a2: (unsigned int)&v141, a3: v3 + 520, a4: 1, a5: v8);
    }
  }
  else if ( (unsigned __int8)sub_14008D4B0(a1: a2, a2: (int)v3 + 520, a3: (unsigned int)&v141, a4: 1, a5: 512) == 0 )
  {
    *(_BYTE *)(v3 + 520) = 0;
  }
  if ( dword_14137C018 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409E0F90(a1: &dword_14137C018);
    if ( dword_14137C018 == -1 )
    {
      v126 = (__int64 *)sub_14001FE50(a1: &v144, a2: aViewporteffect_1, a3: "grassEffectEnable");
      LODWORD(v127) = (_DWORD)v126;
      if ( (unsigned __int64)v126[3] > 0xF )
        v127 = *v126;
      v128 = (_QWORD *)sub_14001FE50(a1: &v147, a2: aViewporteffect_1, a3: "grassEffectEnable");
      if ( v128[3] > 0xFu )
        v128 = (_QWORD *)*v128;
      v129 = sub_140061E60(a1: v128);
      sub_140062A10(
        a1: (unsigned int)&dword_14137C014,
        a2: v129,
        a3: v127,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_45\\Source\\Game\\src"
                      "\\Actors\\PXViewportEffect.cpp",
        a5: 1389);
      sub_1400178D0(a1: &v147);
      sub_1400178D0(a1: &v144);
      sub_1409E0F20(a1: &dword_14137C018);
    }
  }
  LODWORD(v141) = dword_14137C014;
  if ( *(_DWORD *)a2 != 0 )
  {
    if ( *(_BYTE *)(v3 + 521) != 0 )
    {
      v9 = sub_14007E5A0();
      sub_14008D140(a1: a2, a2: (unsigned int)&v141, a3: v3 + 521, a4: 1, a5: v9);
    }
  }
  else if ( (unsigned __int8)sub_14008D4B0(a1: a2, a2: (int)v3 + 521, a3: (unsigned int)&v141, a4: 1, a5: 512) == 0 )
  {
    *(_BYTE *)(v3 + 521) = 0;
  }
  if ( dword_14137C020 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409E0F90(a1: &dword_14137C020);
    if ( dword_14137C020 == -1 )
    {
      v130 = (__int64 *)sub_14001FE50(a1: &v144, a2: aViewporteffect_1, a3: "rainEffectEnable");
      LODWORD(v131) = (_DWORD)v130;
      if ( (unsigned __int64)v130[3] > 0xF )
        v131 = *v130;
      v132 = (_QWORD *)sub_14001FE50(a1: &v147, a2: aViewporteffect_1, a3: "rainEffectEnable");
      if ( v132[3] > 0xFu )
        v132 = (_QWORD *)*v132;
      v133 = sub_140061E60(a1: v132);
      sub_140062A10(
        a1: (unsigned int)&dword_14137C01C,
        a2: v133,
        a3: v131,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_45\\Source\\Game\\src"
                      "\\Actors\\PXViewportEffect.cpp",
        a5: 1390);
      sub_1400178D0(a1: &v147);
      sub_1400178D0(a1: &v144);
      sub_1409E0F20(a1: &dword_14137C020);
    }
  }
  LODWORD(v141) = dword_14137C01C;
  if ( *(_DWORD *)a2 != 0 )
  {
    if ( *(_BYTE *)(v3 + 522) != 0 )
    {
      v10 = sub_14007E5A0();
      sub_14008D140(a1: a2, a2: (unsigned int)&v141, a3: v3 + 522, a4: 1, a5: v10);
    }
  }
  else if ( (unsigned __int8)sub_14008D4B0(a1: a2, a2: (int)v3 + 522, a3: (unsigned int)&v141, a4: 1, a5: 512) == 0 )
  {
    *(_BYTE *)(v3 + 522) = 0;
  }
  if ( dword_14137C028 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409E0F90(a1: &dword_14137C028);
    if ( dword_14137C028 == -1 )
    {
      v134 = (__int64 *)sub_14001FE50(a1: &v144, a2: aViewporteffect_1, a3: "snowEffectEnable");
      LODWORD(v135) = (_DWORD)v134;
      if ( (unsigned __int64)v134[3] > 0xF )
        v135 = *v134;
      v136 = (_QWORD *)sub_14001FE50(a1: &v147, a2: aViewporteffect_1, a3: "snowEffectEnable");
      if ( v136[3] > 0xFu )
        v136 = (_QWORD *)*v136;
      v137 = sub_140061E60(a1: v136);
      sub_140062A10(
        a1: (unsigned int)&dword_14137C024,
        a2: v137,
        a3: v135,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_45\\Source\\Game\\src"
                      "\\Actors\\PXViewportEffect.cpp",
        a5: 1391);
      sub_1400178D0(a1: &v147);
      sub_1400178D0(a1: &v144);
      sub_1409E0F20(a1: &dword_14137C028);
    }
  }
  LODWORD(v141) = dword_14137C024;
  if ( *(_DWORD *)a2 != 0 )
  {
    if ( *(_BYTE *)(v3 + 523) != 0 )
    {
      v11 = sub_14007E5A0();
      sub_14008D140(a1: a2, a2: (unsigned int)&v141, a3: v3 + 523, a4: 1, a5: v11);
    }
  }
  else if ( (unsigned __int8)sub_14008D4B0(a1: a2, a2: (int)v3 + 523, a3: (unsigned int)&v141, a4: 1, a5: 512) == 0 )
  {
    *(_BYTE *)(v3 + 523) = 0;
  }
  if ( dword_14137C030 > *(_DWORD *)(v4 + 76) )
  {
    sub_1409E0F90(a1: &dword_14137C030);
    if ( dword_14137C030 == -1 )
    {
      v138 = (__int64 *)sub_14001FE50(a1: &v144, a2: aViewporteffect_1, a3: "rainEffectClampToWater");
      LODWORD(v139) = (_DWORD)v138;
      if ( (unsigned __int64)v138[3] > 0xF )
        v139 = *v138;
      v140 = (_QWORD *)sub_14001FE50(a1: &v147, a2: aViewporteffect_1, a3: "rainEffectClampToWater");
      if ( v140[3] > 0xFu )
        v140 = (_QWORD *)*v140;
      v14 = sub_140061E60(a1: v140);
      sub_140062A10(
        a1: (unsigned int)&dword_14137C02C,
        a2: v14,
        a3: v139,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_45\\Source\\Game\\src"
                      "\\Actors\\PXViewportEffect.cpp",
        a5: 1392);
      sub_1400178D0(a1: &v147);
      sub_1400178D0(a1: &v144);
      sub_1409E0F20(a1: &dword_14137C030);
    }
  }
  result = (unsigned int)dword_14137C02C;
  LODWORD(v141) = dword_14137C02C;
  if ( *(_DWORD *)a2 != 0 )
  {
    if ( *(_BYTE *)(v3 + 524) != 0 )
    {
      v13 = sub_14007E5A0();
      return sub_14008D140(a1: a2, a2: (unsigned int)&v141, a3: (int)v3 + 524, a4: 1, a5: v13);
    }
  }
  else
  {
    result = sub_14008D4B0(a1: a2, a2: (int)v3 + 524, a3: (unsigned int)&v141, a4: 1, a5: 512);
    if ( (_BYTE)result == 0 )
      *(_BYTE *)(v3 + 524) = 0;
  }
  return result;
}