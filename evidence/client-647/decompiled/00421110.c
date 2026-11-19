__int64 __fastcall sub_140421110(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // r14
  __int128 *v4; // r12
  __int64 v5; // rbx
  char v6; // cl
  char v7; // al
  __int128 *v8; // rsi
  char v9; // dl
  char v10; // cl
  char v11; // al
  char v12; // al
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r14
  __int128 *v19; // r12
  __int64 v20; // r15
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  __int128 *v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int128 *v29; // r12
  __int64 v30; // r13
  __int128 *v31; // r15
  __int64 v32; // r14
  unsigned __int64 v33; // rdi
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
  __int64 v45; // r14
  __int128 *v46; // r12
  __int64 v47; // r15
  unsigned __int64 v48; // rdi
  unsigned __int64 v49; // rcx
  __int64 v50; // rax
  __int128 *v51; // rsi
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int128 *v56; // r12
  __int64 v57; // r13
  __int128 *v58; // r15
  __int64 v59; // r14
  unsigned __int64 v60; // rdi
  unsigned __int64 v61; // rcx
  __int64 v62; // rax
  __int128 *v63; // rsi
  __int128 *v64; // rcx
  int v65; // eax
  void *v66; // rcx
  void *v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // r14
  __int128 *v73; // r12
  __int64 v74; // r15
  unsigned __int64 v75; // rdi
  unsigned __int64 v76; // rcx
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int128 *v82; // r12
  __int64 v83; // r13
  __int128 *v84; // r15
  __int64 v85; // r14
  unsigned __int64 v86; // rdi
  unsigned __int64 v87; // rcx
  __int64 v88; // rax
  __int128 *v89; // rsi
  __int128 *v90; // rcx
  int v91; // eax
  void *v92; // rcx
  void *v93; // rcx
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // r14
  __int128 *v99; // r12
  __int64 v100; // r15
  unsigned __int64 v101; // rdi
  unsigned __int64 v102; // rcx
  __int64 v103; // rax
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // r9
  __int128 *v108; // r15
  __int64 v109; // r14
  __int128 *v110; // rdx
  __int64 v111; // rsi
  unsigned __int64 v112; // rax
  __int64 v113; // rax
  unsigned __int64 v114; // rcx
  __int128 *v115; // rdi
  __int128 *v116; // rcx
  int v117; // eax
  void *v118; // rcx
  void *v119; // rcx
  _BYTE v120[4]; // [rsp+30h] [rbp-49h] BYREF
  int v121; // [rsp+34h] [rbp-45h] BYREF
  __int128 *v122; // [rsp+38h] [rbp-41h]
  __int64 v123; // [rsp+40h] [rbp-39h]
  __int64 v124; // [rsp+48h] [rbp-31h]
  __int64 v125; // [rsp+50h] [rbp-29h]
  __int128 v126; // [rsp+58h] [rbp-21h] BYREF
  __int64 v127; // [rsp+68h] [rbp-11h]
  unsigned __int64 v128; // [rsp+70h] [rbp-9h]
  __int128 v129; // [rsp+78h] [rbp-1h] BYREF
  __int64 v130; // [rsp+88h] [rbp+Fh]
  unsigned __int64 v131; // [rsp+90h] [rbp+17h]

  v2 = a2;
  v125 = a2;
  v3 = a1;
  v124 = a1;
  v4 = *((__int128 **)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  v122 = v4;
  if ( dword_14138EE78 > *((_DWORD *)v4 + 19) )
  {
    sub_1409DBBB0(a1: &dword_14138EE78);
    if ( dword_14138EE78 == -1 )
    {
      xmmword_14138EE58 = 0;
      qword_14138EE68 = 0;
      qword_14138EE70 = 0;
      sub_14000D7F0(a1: &xmmword_14138EE58, a2: "itemGroupMannequinSettings.", a3: 27);
      sub_1409DB700(a1: sub_140EDD250);
      sub_1409DBB40(a1: &dword_14138EE78);
    }
  }
  v5 = 0x7FFFFFFFFFFFFFFFLL;
  if ( dword_14138EE80 > *((_DWORD *)v4 + 19) )
  {
    sub_1409DBBB0(a1: &dword_14138EE80);
    if ( dword_14138EE80 == -1 )
    {
      v18 = qword_14138EE68;
      if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_14138EE68) < 0xD )
        sub_14001B680(a1: v15, a2: v14);
      v19 = &xmmword_14138EE58;
      if ( (unsigned __int64)qword_14138EE70 > 0xF )
        v19 = (__int128 *)xmmword_14138EE58;
      v129 = 0;
      v130 = 0;
      v131 = 0;
      v20 = qword_14138EE68 + 13;
      if ( (unsigned __int64)(qword_14138EE68 + 13) <= 0xF )
      {
        v21 = 15;
        v24 = &v129;
      }
      else
      {
        v21 = v20 | 0xF;
        if ( (v20 | 0xFuLL) <= 0x7FFFFFFFFFFFFFFFLL )
        {
          if ( v21 < 0x16 )
            v21 = 22;
          if ( v21 == -1 )
          {
            v24 = nullptr;
            *(_QWORD *)&v129 = 0;
            goto LABEL_54;
          }
          if ( v21 + 1 < 0x1000 )
          {
            v24 = (__int128 *)sub_1409DB470(a1: v21 + 1);
            *(_QWORD *)&v129 = v24;
            goto LABEL_54;
          }
          v22 = v21 + 40;
          if ( v21 + 40 < v21 + 1 )
          {
            sub_14001B170(a1: v22, a2: v14, a3: v16, a4: v17);
            __debugbreak();
          }
        }
        else
        {
          v21 = 0x7FFFFFFFFFFFFFFFLL;
          v22 = 0x8000000000000027uLL;
        }
        v23 = sub_1409DB470(a1: v22);
        if ( v23 == 0 )
          __fastfail(5u);
        v24 = (__int128 *)((v23 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *((_QWORD *)v24 - 1) = v23;
        *(_QWORD *)&v129 = v24;
      }
LABEL_54:
      v130 = v18 + 13;
      v131 = v21;
      sub_140E82100(a1: v24, a2: v19, a3: v18);
      qmemcpy((char *)v24 + v18, "hideMannequin", 13);
      *((_BYTE *)v24 + v20) = 0;
      v29 = &v129;
      if ( v131 > 0xF )
        LODWORD(v29) = v129;
      v30 = qword_14138EE68;
      if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_14138EE68) < 0xD )
        sub_14001B680(a1: v26, a2: v25);
      v31 = &xmmword_14138EE58;
      if ( (unsigned __int64)qword_14138EE70 > 0xF )
        v31 = (__int128 *)xmmword_14138EE58;
      v126 = 0;
      v127 = 0;
      v128 = 0;
      v32 = qword_14138EE68 + 13;
      if ( (unsigned __int64)(qword_14138EE68 + 13) <= 0xF )
      {
        v33 = 15;
        v36 = &v126;
      }
      else
      {
        v33 = v32 | 0xF;
        if ( (v32 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
        {
          v33 = 0x7FFFFFFFFFFFFFFFLL;
          v34 = 0x8000000000000027uLL;
LABEL_63:
          v35 = sub_1409DB470(a1: v34);
          if ( v35 == 0 )
            __fastfail(5u);
          v36 = (__int128 *)((v35 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
          *((_QWORD *)v36 - 1) = v35;
          *(_QWORD *)&v126 = v36;
          goto LABEL_75;
        }
        if ( v33 < 0x16 )
          v33 = 22;
        if ( v33 == -1 )
        {
          v36 = nullptr;
          *(_QWORD *)&v126 = 0;
        }
        else
        {
          if ( v33 + 1 >= 0x1000 )
          {
            v34 = v33 + 40;
            if ( v33 + 40 < v33 + 1 )
            {
              sub_14001B170(a1: v34, a2: v25, a3: v27, a4: v28);
              __debugbreak();
            }
            goto LABEL_63;
          }
          v36 = (__int128 *)sub_1409DB470(a1: v33 + 1);
          *(_QWORD *)&v126 = v36;
        }
      }
LABEL_75:
      v127 = v30 + 13;
      v128 = v33;
      sub_140E82100(a1: v36, a2: v31, a3: v30);
      qmemcpy((char *)v36 + v30, "hideMannequin", 13);
      *((_BYTE *)v36 + v32) = 0;
      v37 = &v126;
      if ( v128 > 0xF )
        v37 = (__int128 *)v126;
      v38 = sub_140062160(a1: v37);
      sub_140062D10(
        a1: (unsigned int)&dword_14138EE7C,
        a2: v38,
        a3: (_DWORD)v29,
        a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Game\\inc"
                      "lude\\Game/Actors/PXRenderIconHandler.h",
        a5: 282);
      if ( v128 > 0xF )
      {
        v39 = (void *)v126;
        if ( v128 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v126 - *(_QWORD *)(v126 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v39 = *(void **)(v126 - 8);
        }
        sub_1409DB4C0(lpMem: v39);
      }
      *(_QWORD *)&v126 = 19937;
      v127 = 0;
      v128 = 31;
      if ( v131 > 0xF )
      {
        v40 = (void *)v129;
        if ( v131 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v129 - *(_QWORD *)(v129 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v40 = *(void **)(v129 - 8);
        }
        sub_1409DB4C0(lpMem: v40);
      }
      sub_1409DBB40(a1: &dword_14138EE80);
      v2 = v125;
      v3 = v124;
      v4 = v122;
    }
  }
  v6 = *(_BYTE *)(v3 + 36) & 1;
  v120[0] = v6;
  v121 = dword_14138EE7C;
  if ( *(_DWORD *)v2 != 0 )
  {
    v123 = v2 + 62;
    if ( *(_BYTE *)(v2 + 62) != 0 )
    {
      if ( v6 == 0 )
        goto LABEL_14;
    }
    else if ( v6 == 0 )
    {
LABEL_13:
      v123 = v2 + 62;
      goto LABEL_14;
    }
    v7 = sub_140076FF0();
    sub_140084F80(a1: v2, a2: (unsigned int)&v121, a3: (unsigned int)v120, a4: 1, a5: v7);
    v6 = v120[0];
    goto LABEL_13;
  }
  if ( (unsigned __int8)sub_1400852F0(a1: v2, a2: (unsigned int)v120, a3: (unsigned int)&v121, a4: 1, a5: 512) != 0 )
    v6 = v120[0];
  else
    v6 = 0;
  v123 = v2 + 62;
LABEL_14:
  *(_BYTE *)(v3 + 36) &= ~1u;
  *(_BYTE *)(v3 + 36) |= v6 & 1;
  if ( dword_14138EE88 <= *((_DWORD *)v4 + 19) || (sub_1409DBBB0(a1: &dword_14138EE88), dword_14138EE88 != -1) )
  {
    v8 = nullptr;
    goto LABEL_16;
  }
  v45 = qword_14138EE68;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_14138EE68) < 0x16 )
    sub_14001B680(a1: v42, a2: v41);
  v46 = &xmmword_14138EE58;
  if ( (unsigned __int64)qword_14138EE70 > 0xF )
    v46 = (__int128 *)xmmword_14138EE58;
  v129 = 0;
  v130 = 0;
  v131 = 0;
  v47 = qword_14138EE68 + 22;
  if ( (unsigned __int64)(qword_14138EE68 + 22) <= 0xF )
  {
    v48 = 15;
    v51 = &v129;
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
        *(_QWORD *)&v129 = 0;
        goto LABEL_110;
      }
      if ( v48 + 1 < 0x1000 )
      {
        v51 = (__int128 *)sub_1409DB470(a1: v48 + 1);
        *(_QWORD *)&v129 = v51;
        goto LABEL_110;
      }
      v49 = v48 + 40;
      if ( v48 + 40 < v48 + 1 )
      {
        sub_14001B170(a1: v49, a2: v41, a3: v43, a4: v44);
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
    *(_QWORD *)&v129 = v51;
  }
LABEL_110:
  v130 = v45 + 22;
  v131 = v48;
  sub_140E82100(a1: v51, a2: v46, a3: v45);
  qmemcpy((char *)v51 + v45, "hideHorseMannequinHair", 22);
  *((_BYTE *)v51 + v47) = 0;
  v56 = &v129;
  if ( v131 > 0xF )
    LODWORD(v56) = v129;
  v57 = qword_14138EE68;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_14138EE68) < 0x16 )
    sub_14001B680(a1: v53, a2: v52);
  v58 = &xmmword_14138EE58;
  if ( (unsigned __int64)qword_14138EE70 > 0xF )
    v58 = (__int128 *)xmmword_14138EE58;
  v126 = 0;
  v127 = 0;
  v128 = 0;
  v59 = qword_14138EE68 + 22;
  if ( (unsigned __int64)(qword_14138EE68 + 22) <= 0xF )
  {
    v60 = 15;
    v63 = &v126;
  }
  else
  {
    v60 = v59 | 0xF;
    if ( (v59 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
    {
      v60 = 0x7FFFFFFFFFFFFFFFLL;
      v61 = 0x8000000000000027uLL;
LABEL_119:
      v62 = sub_1409DB470(a1: v61);
      if ( v62 == 0 )
        __fastfail(5u);
      v63 = (__int128 *)((v62 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *((_QWORD *)v63 - 1) = v62;
      *(_QWORD *)&v126 = v63;
      goto LABEL_131;
    }
    if ( v60 < 0x16 )
      v60 = 22;
    if ( v60 == -1 )
    {
      v63 = nullptr;
      *(_QWORD *)&v126 = 0;
    }
    else
    {
      if ( v60 + 1 >= 0x1000 )
      {
        v61 = v60 + 40;
        if ( v60 + 40 < v60 + 1 )
        {
          sub_14001B170(a1: v61, a2: v52, a3: v54, a4: v55);
          __debugbreak();
        }
        goto LABEL_119;
      }
      v63 = (__int128 *)sub_1409DB470(a1: v60 + 1);
      *(_QWORD *)&v126 = v63;
    }
  }
LABEL_131:
  v127 = v57 + 22;
  v128 = v60;
  sub_140E82100(a1: v63, a2: v58, a3: v57);
  qmemcpy((char *)v63 + v57, "hideHorseMannequinHair", 22);
  *((_BYTE *)v63 + v59) = 0;
  v64 = &v126;
  if ( v128 > 0xF )
    v64 = (__int128 *)v126;
  v65 = sub_140062160(a1: v64);
  sub_140062D10(
    a1: (unsigned int)&dword_14138EE84,
    a2: v65,
    a3: (_DWORD)v56,
    a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Game\\include"
                  "\\Game/Actors/PXRenderIconHandler.h",
    a5: 283);
  if ( v128 > 0xF )
  {
    v66 = (void *)v126;
    if ( v128 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v126 - *(_QWORD *)(v126 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v66 = *(void **)(v126 - 8);
    }
    sub_1409DB4C0(lpMem: v66);
  }
  *(_QWORD *)&v126 = 19937;
  v8 = nullptr;
  v127 = 0;
  v128 = 31;
  if ( v131 > 0xF )
  {
    v67 = (void *)v129;
    if ( v131 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v129 - *(_QWORD *)(v129 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v67 = *(void **)(v129 - 8);
    }
    sub_1409DB4C0(lpMem: v67);
  }
  sub_1409DBB40(a1: &dword_14138EE88);
  v2 = v125;
  v3 = v124;
  v4 = v122;
LABEL_16:
  v9 = *(_BYTE *)(v3 + 36);
  v10 = (v9 & 2) != 0;
  v120[0] = v10;
  v121 = dword_14138EE84;
  if ( *(_DWORD *)v2 != 0 )
  {
    if ( (v9 & 2) == 0 )
      goto LABEL_22;
    v11 = sub_140076FF0();
    sub_140084F80(a1: v2, a2: (unsigned int)&v121, a3: (unsigned int)v120, a4: 1, a5: v11);
LABEL_21:
    v10 = v120[0];
    goto LABEL_22;
  }
  if ( (unsigned __int8)sub_1400852F0(a1: v2, a2: (unsigned int)v120, a3: (unsigned int)&v121, a4: 1, a5: 512) != 0 )
    goto LABEL_21;
  v10 = 0;
LABEL_22:
  *(_BYTE *)(v3 + 36) &= ~2u;
  *(_BYTE *)(v3 + 36) |= 2 * (v10 & 1);
  if ( dword_14138EE90 <= *((_DWORD *)v4 + 19) )
    goto LABEL_23;
  sub_1409DBBB0(a1: &dword_14138EE90);
  if ( dword_14138EE90 != -1 )
    goto LABEL_23;
  v72 = qword_14138EE68;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_14138EE68) < 0x14 )
    sub_14001B680(a1: v69, a2: v68);
  v73 = &xmmword_14138EE58;
  if ( (unsigned __int64)qword_14138EE70 > 0xF )
    v73 = (__int128 *)xmmword_14138EE58;
  v129 = 0;
  v130 = 0;
  v131 = 0;
  v74 = qword_14138EE68 + 20;
  if ( (unsigned __int64)(qword_14138EE68 + 20) <= 0xF )
  {
    v75 = 15;
    v8 = &v129;
    goto LABEL_166;
  }
  v75 = v74 | 0xF;
  if ( (v74 | 0xFuLL) <= 0x7FFFFFFFFFFFFFFFLL )
  {
    if ( v75 < 0x16 )
      v75 = 22;
    if ( v75 != -1 )
    {
      if ( v75 + 1 >= 0x1000 )
      {
        v76 = v75 + 40;
        if ( v75 + 40 < v75 + 1 )
        {
          sub_14001B170(a1: v76, a2: v68, a3: v70, a4: v71);
          __debugbreak();
        }
        goto LABEL_154;
      }
      v8 = (__int128 *)sub_1409DB470(a1: v75 + 1);
    }
    *(_QWORD *)&v129 = v8;
    goto LABEL_166;
  }
  v75 = 0x7FFFFFFFFFFFFFFFLL;
  v76 = 0x8000000000000027uLL;
LABEL_154:
  v77 = sub_1409DB470(a1: v76);
  if ( v77 == 0 )
    __fastfail(5u);
  v8 = (__int128 *)((v77 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
  *((_QWORD *)v8 - 1) = v77;
  *(_QWORD *)&v129 = v8;
LABEL_166:
  v130 = v72 + 20;
  v131 = v75;
  sub_140E82100(a1: v8, a2: v73, a3: v72);
  qmemcpy((char *)v8 + v72, "additionalHideGroups", 20);
  *((_BYTE *)v8 + v74) = 0;
  v82 = &v129;
  if ( v131 > 0xF )
    LODWORD(v82) = v129;
  v83 = qword_14138EE68;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_14138EE68) < 0x14 )
    sub_14001B680(a1: v79, a2: v78);
  v84 = &xmmword_14138EE58;
  if ( (unsigned __int64)qword_14138EE70 > 0xF )
    v84 = (__int128 *)xmmword_14138EE58;
  v126 = 0;
  v127 = 0;
  v128 = 0;
  v85 = qword_14138EE68 + 20;
  if ( (unsigned __int64)(qword_14138EE68 + 20) <= 0xF )
  {
    v86 = 15;
    v89 = &v126;
  }
  else
  {
    v86 = v85 | 0xF;
    if ( (v85 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
    {
      v86 = 0x7FFFFFFFFFFFFFFFLL;
      v87 = 0x8000000000000027uLL;
LABEL_175:
      v88 = sub_1409DB470(a1: v87);
      if ( v88 == 0 )
        __fastfail(5u);
      v89 = (__int128 *)((v88 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *((_QWORD *)v89 - 1) = v88;
      *(_QWORD *)&v126 = v89;
      goto LABEL_187;
    }
    if ( v86 < 0x16 )
      v86 = 22;
    if ( v86 == -1 )
    {
      v89 = nullptr;
      *(_QWORD *)&v126 = 0;
    }
    else
    {
      if ( v86 + 1 >= 0x1000 )
      {
        v87 = v86 + 40;
        if ( v86 + 40 < v86 + 1 )
        {
          sub_14001B170(a1: v87, a2: v78, a3: v80, a4: v81);
          __debugbreak();
        }
        goto LABEL_175;
      }
      v89 = (__int128 *)sub_1409DB470(a1: v86 + 1);
      *(_QWORD *)&v126 = v89;
    }
  }
LABEL_187:
  v127 = v83 + 20;
  v128 = v86;
  sub_140E82100(a1: v89, a2: v84, a3: v83);
  qmemcpy((char *)v89 + v83, "additionalHideGroups", 20);
  *((_BYTE *)v89 + v85) = 0;
  v90 = &v126;
  if ( v128 > 0xF )
    v90 = (__int128 *)v126;
  v91 = sub_140062160(a1: v90);
  sub_140062D10(
    a1: (unsigned int)&dword_14138EE8C,
    a2: v91,
    a3: (_DWORD)v82,
    a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Game\\include"
                  "\\Game/Actors/PXRenderIconHandler.h",
    a5: 284);
  if ( v128 > 0xF )
  {
    v92 = (void *)v126;
    if ( v128 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v126 - *(_QWORD *)(v126 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v92 = *(void **)(v126 - 8);
    }
    sub_1409DB4C0(lpMem: v92);
  }
  *(_QWORD *)&v126 = 19937;
  v8 = nullptr;
  v127 = 0;
  v128 = 31;
  if ( v131 > 0xF )
  {
    v93 = (void *)v129;
    if ( v131 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v129 - *(_QWORD *)(v129 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v93 = *(void **)(v129 - 8);
    }
    sub_1409DB4C0(lpMem: v93);
  }
  sub_1409DBB40(a1: &dword_14138EE90);
  v2 = v125;
  v3 = v124;
  v4 = v122;
LABEL_23:
  v121 = dword_14138EE8C;
  if ( *(_DWORD *)v2 != 0 )
  {
    if ( *(_DWORD *)(v3 + 32) != 0 )
    {
      v12 = sub_140076F50();
      sub_140084F80(a1: v2, a2: (unsigned int)&v121, a3: v3 + 32, a4: 4, a5: v12);
    }
  }
  else if ( (unsigned __int8)sub_1400852F0(a1: v2, a2: (int)v3 + 32, a3: (unsigned int)&v121, a4: 4, a5: 512) == 0 )
  {
    *(_DWORD *)(v3 + 32) = 0;
  }
  if ( dword_14138EE98 > *((_DWORD *)v4 + 19) )
  {
    sub_1409DBBB0(a1: &dword_14138EE98);
    if ( dword_14138EE98 == -1 )
    {
      v98 = qword_14138EE68;
      if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_14138EE68) < 0x11 )
        sub_14001B680(a1: v95, a2: v94);
      v99 = &xmmword_14138EE58;
      if ( (unsigned __int64)qword_14138EE70 > 0xF )
        v99 = (__int128 *)xmmword_14138EE58;
      v129 = 0;
      v130 = 0;
      v131 = 0;
      v100 = qword_14138EE68 + 17;
      if ( (unsigned __int64)(qword_14138EE68 + 17) <= 0xF )
      {
        v101 = 15;
        v8 = &v129;
        goto LABEL_222;
      }
      v101 = v100 | 0xF;
      if ( (v100 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
      {
        v101 = 0x7FFFFFFFFFFFFFFFLL;
        v102 = 0x8000000000000027uLL;
LABEL_210:
        v103 = sub_1409DB470(a1: v102);
        if ( v103 == 0 )
          __fastfail(5u);
        v8 = (__int128 *)((v103 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *((_QWORD *)v8 - 1) = v103;
        *(_QWORD *)&v129 = v8;
LABEL_222:
        v130 = v98 + 17;
        v131 = v101;
        sub_140E82100(a1: v8, a2: v99, a3: v98);
        qmemcpy((char *)v8 + v98, "overrideMaterials", 17);
        *((_BYTE *)v8 + v100) = 0;
        v108 = &v129;
        if ( v131 > 0xF )
          LODWORD(v108) = v129;
        v109 = qword_14138EE68;
        if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - qword_14138EE68) < 0x11 )
          sub_14001B680(a1: v105, a2: v104);
        v110 = &xmmword_14138EE58;
        if ( (unsigned __int64)qword_14138EE70 > 0xF )
          v110 = (__int128 *)xmmword_14138EE58;
        v122 = v110;
        v126 = 0;
        v127 = 0;
        v128 = 0;
        v111 = qword_14138EE68 + 17;
        if ( (unsigned __int64)(qword_14138EE68 + 17) <= 0xF )
        {
          v5 = 15;
          v115 = &v126;
        }
        else
        {
          if ( (v111 | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
          {
            v112 = 0x8000000000000027uLL;
LABEL_231:
            v113 = sub_1409DB470(a1: v112);
            if ( v113 == 0 )
              __fastfail(5u);
            v115 = (__int128 *)((v113 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
            *((_QWORD *)v115 - 1) = v113;
            v110 = v122;
            *(_QWORD *)&v126 = v115;
            goto LABEL_243;
          }
          v5 = v111 | 0xF;
          if ( (v111 | 0xFuLL) < 0x16 )
            v5 = 22;
          v114 = v5 + 1;
          if ( v5 == -1 )
          {
            v115 = nullptr;
            *(_QWORD *)&v126 = 0;
          }
          else
          {
            if ( v114 >= 0x1000 )
            {
              v112 = v5 + 40;
              if ( v5 + 40 < (unsigned __int64)(v5 + 1) )
              {
                sub_14001B170(a1: v114, a2: v110, a3: v106, a4: v107);
                __debugbreak();
              }
              goto LABEL_231;
            }
            v115 = (__int128 *)sub_1409DB470(a1: v114);
            v110 = v122;
            *(_QWORD *)&v126 = v115;
          }
        }
LABEL_243:
        v127 = v109 + 17;
        v128 = v5;
        sub_140E82100(a1: v115, a2: v110, a3: v109);
        qmemcpy((char *)v115 + v109, "overrideMaterials", 17);
        *((_BYTE *)v115 + v111) = 0;
        v116 = &v126;
        if ( v128 > 0xF )
          v116 = (__int128 *)v126;
        v117 = sub_140062160(a1: v116);
        sub_140062D10(
          a1: (unsigned int)&dword_14138EE94,
          a2: v117,
          a3: (_DWORD)v108,
          a4: (unsigned int)"C:\\Jenkins\\workspace\\Code-Integration-BuildWin32-P4-Sync-1\\PXRelease2026_47\\Source\\Game\\i"
                        "nclude\\Game/Actors/PXRenderIconHandler.h",
          a5: 285);
        if ( v128 > 0xF )
        {
          v118 = (void *)v126;
          if ( v128 + 1 >= 0x1000 )
          {
            if ( (unsigned __int64)(v126 - *(_QWORD *)(v126 - 8) - 8) > 0x1F )
              __fastfail(5u);
            v118 = *(void **)(v126 - 8);
          }
          sub_1409DB4C0(lpMem: v118);
        }
        *(_QWORD *)&v126 = 19937;
        v127 = 0;
        v128 = 31;
        if ( v131 > 0xF )
        {
          v119 = (void *)v129;
          if ( v131 + 1 >= 0x1000 )
          {
            if ( (unsigned __int64)(v129 - *(_QWORD *)(v129 - 8) - 8) > 0x1F )
              __fastfail(5u);
            v119 = *(void **)(v129 - 8);
          }
          sub_1409DB4C0(lpMem: v119);
        }
        sub_1409DBB40(a1: &dword_14138EE98);
        v3 = v124;
        goto LABEL_29;
      }
      if ( v101 < 0x16 )
        v101 = 22;
      if ( v101 != -1 )
      {
        if ( v101 + 1 >= 0x1000 )
        {
          v102 = v101 + 40;
          if ( v101 + 40 < v101 + 1 )
          {
            sub_14001B170(a1: v102, a2: v94, a3: v96, a4: v97);
            __debugbreak();
          }
          goto LABEL_210;
        }
        v8 = (__int128 *)sub_1409DB470(a1: v101 + 1);
      }
      *(_QWORD *)&v129 = v8;
      goto LABEL_222;
    }
  }
LABEL_29:
  v121 = dword_14138EE94;
  return sub_14040FA20(a1: v2, a2: &v121, a3: v3 + 8);
}