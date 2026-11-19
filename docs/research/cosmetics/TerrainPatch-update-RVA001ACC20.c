// Hex-Rays export, baseline 645.348067; descriptive analysis label.
__int64 __fastcall sub_1401ACC20(__int64 *a1, __int64 a2, unsigned int a3, __int64 *a4, __int64 a5)
{
  unsigned int v8; // r14d
  __int64 v9; // rbx
  __int64 v10; // rax
  LPVOID *v11; // rcx
  void *v12; // rbx
  unsigned __int64 v13; // r15
  char v14; // r12
  __int64 v15; // rbx
  __int64 v16; // rax
  const char *v17; // r8
  __int64 v18; // rbx
  __int64 v19; // rax
  LPVOID *v20; // rcx
  _QWORD *v21; // rbx
  unsigned __int64 v22; // r15
  char v23; // r12
  __int64 v24; // rax
  const char *v25; // r8
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rax
  unsigned int i; // ebx
  _QWORD *v32; // rax
  void **v33; // rcx
  _QWORD *v34; // rbx
  _QWORD *v35; // r8
  _QWORD *v36; // r15
  _QWORD *v37; // r8
  _QWORD *v38; // r12
  _QWORD *v39; // r8
  _QWORD *v40; // r8
  unsigned int v41; // eax
  __int64 v42; // rbx
  __int64 v43; // rax
  unsigned int v44; // eax
  __int64 v45; // rbx
  __int64 v46; // rax
  __int64 v47; // rbx
  _QWORD *v48; // rax
  __int64 v49; // rcx
  _QWORD *v50; // r15
  __int64 v51; // r12
  __int64 v52; // r10
  unsigned __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rax
  __int64 v56; // rbx
  float v57; // eax
  char v58; // bl
  char v59; // si
  __int64 v60; // rdx
  __int64 v61; // rbx
  float v62; // xmm6_4
  char v63; // al
  __int64 v64; // rbx
  int v65; // xmm0_4
  int v66; // xmm0_4
  __int64 v67; // rdx
  unsigned __int64 v68; // r15
  LPVOID *v69; // rbx
  char *v70; // rbx
  LPVOID *v71; // r14
  LPVOID *v72; // rdx
  unsigned __int64 v73; // r15
  __int64 v74; // r8
  LPVOID v75; // rcx
  unsigned __int64 v76; // rcx
  __int64 v77; // r14
  unsigned __int64 v78; // rcx
  __int64 v79; // rax
  void *v80; // rcx
  LPVOID *v81; // rdx
  void *v82; // rcx
  __int64 *v83; // rax
  float v84; // xmm1_4
  char **v85; // rcx
  __int64 v86; // rax
  const char *v87; // rax
  char v88; // bl
  __int64 v89; // rax
  const char *v90; // rax
  char v91; // bl
  __int64 v92; // rax
  char v93; // al
  __int128 v95; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID *v96; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v97; // [rsp+50h] [rbp-B0h]
  __int64 v98; // [rsp+58h] [rbp-A8h]
  char v99; // [rsp+60h] [rbp-A0h]
  __int64 v100; // [rsp+68h] [rbp-98h]
  void **v101; // [rsp+70h] [rbp-90h] BYREF
  __int128 v102; // [rsp+78h] [rbp-88h]
  __int64 v103; // [rsp+88h] [rbp-78h]
  __int64 v104; // [rsp+90h] [rbp-70h]
  __int64 v105; // [rsp+98h] [rbp-68h]
  LPVOID lpMem[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 *v107; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v108; // [rsp+C8h] [rbp-38h]
  void **v109; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v110; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v111; // [rsp+E8h] [rbp-18h]
  __int64 v112; // [rsp+F0h] [rbp-10h]
  __int64 v113; // [rsp+F8h] [rbp-8h]
  LPVOID v114[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v115; // [rsp+110h] [rbp+10h]
  unsigned __int64 v116; // [rsp+118h] [rbp+18h]

  v100 = a5;
  v8 = 0;
  LODWORD(v95) = 0;
  if ( a3 <= 0xEA60 )
  {
    if ( a3 == 60000 )
    {
      *((_BYTE *)a1 + 3136) = *(_DWORD *)a4 != 0;
      return 200;
    }
    if ( a3 == 3 )
    {
      if ( a4 != nullptr && *((_BYTE *)a4 + 41) != 0 )
      {
        for ( i = 0; i < *((_DWORD *)a1 + 928); ++i )
        {
          *(_QWORD *)&v95 = &v101;
          v105 = 0;
          v101 = &PXEngine::VersionDependency::`vftable';
          v102 = 0;
          v103 = 0;
          v104 = 15;
          LOBYTE(v102) = 0;
          v96 = lpMem;
          *(_OWORD *)lpMem = 0;
          v32 = (_QWORD *)sub_1401A75F0(a1: &v109, a2: i);
          if ( v32[3] > 0xFu )
            v32 = (_QWORD *)*v32;
          sub_14068D4E0(
            a1: (_DWORD)a4,
            a2: (_DWORD)a1,
            a3: (_DWORD)v32,
            a4: (unsigned int)lpMem,
            a5: (__int64)&v101,
            a6: 0);
          if ( v111 > 0xF )
          {
            v33 = v109;
            if ( v111 + 1 >= 0x1000 )
            {
              if ( (unsigned __int64)((char *)v109 - (_BYTE *)*(v109 - 1) - 8) > 0x1F )
                goto LABEL_198;
              v33 = (void **)*(v109 - 1);
            }
            sub_1409E08A0(lpMem: v33);
          }
        }
        v105 = 0;
        v101 = &PXEngine::VersionDependency::`vftable';
        v102 = 0;
        v103 = 0;
        v104 = 15;
        LOBYTE(v102) = 0;
        *(_OWORD *)lpMem = 0;
        v34 = a1 + 411;
        LODWORD(v35) = (_DWORD)a1 + 3288;
        if ( (unsigned __int64)a1[414] > 0xF )
          v35 = (_QWORD *)*v34;
        sub_14068C430(a1: (_DWORD)a4, a2: (_DWORD)a1, a3: (_DWORD)v35, a4: (unsigned int)lpMem, a5: (__int64)&v101);
        v105 = 0;
        v101 = &PXEngine::VersionDependency::`vftable';
        v102 = 0;
        v103 = 0;
        v104 = 15;
        LOBYTE(v102) = 0;
        *(_OWORD *)lpMem = 0;
        v36 = a1 + 415;
        LODWORD(v37) = (_DWORD)a1 + 3320;
        if ( (unsigned __int64)a1[418] > 0xF )
          v37 = (_QWORD *)*v36;
        sub_14068C430(a1: (_DWORD)a4, a2: (_DWORD)a1, a3: (_DWORD)v37, a4: (unsigned int)lpMem, a5: (__int64)&v101);
        v105 = 0;
        v101 = &PXEngine::VersionDependency::`vftable';
        v102 = 0;
        v103 = 0;
        v104 = 15;
        LOBYTE(v102) = 0;
        *(_OWORD *)lpMem = 0;
        v38 = a1 + 419;
        LODWORD(v39) = (_DWORD)a1 + 3352;
        if ( (unsigned __int64)a1[422] > 0xF )
          v39 = (_QWORD *)*v38;
        sub_14068C430(a1: (_DWORD)a4, a2: (_DWORD)a1, a3: (_DWORD)v39, a4: (unsigned int)lpMem, a5: (__int64)&v101);
        v105 = 0;
        v101 = &PXEngine::VersionDependency::`vftable';
        v102 = 0;
        v103 = 0;
        v104 = 15;
        LOBYTE(v102) = 0;
        *(_OWORD *)lpMem = 0;
        if ( (unsigned __int64)a1[414] > 0xF )
          v34 = (_QWORD *)*v34;
        sub_14068D4E0(
          a1: (_DWORD)a4,
          a2: (_DWORD)a1,
          a3: (_DWORD)v34,
          a4: (unsigned int)lpMem,
          a5: (__int64)&v101,
          a6: 0);
        v105 = 0;
        v101 = &PXEngine::VersionDependency::`vftable';
        v102 = 0;
        v103 = 0;
        v104 = 15;
        LOBYTE(v102) = 0;
        *(_OWORD *)lpMem = 0;
        if ( (unsigned __int64)a1[418] > 0xF )
          v36 = (_QWORD *)*v36;
        sub_14068D4E0(
          a1: (_DWORD)a4,
          a2: (_DWORD)a1,
          a3: (_DWORD)v36,
          a4: (unsigned int)lpMem,
          a5: (__int64)&v101,
          a6: 0);
        v105 = 0;
        v101 = &PXEngine::VersionDependency::`vftable';
        v102 = 0;
        v103 = 0;
        v104 = 15;
        LOBYTE(v102) = 0;
        *(_OWORD *)lpMem = 0;
        if ( (unsigned __int64)a1[422] > 0xF )
          v38 = (_QWORD *)*v38;
        sub_14068D4E0(
          a1: (_DWORD)a4,
          a2: (_DWORD)a1,
          a3: (_DWORD)v38,
          a4: (unsigned int)lpMem,
          a5: (__int64)&v101,
          a6: 0);
        v105 = 0;
        v101 = &PXEngine::VersionDependency::`vftable';
        v102 = 0;
        v103 = 0;
        v104 = 15;
        LOBYTE(v102) = 0;
        *(_OWORD *)lpMem = 0;
        v40 = a1 + 446;
        if ( (unsigned __int64)a1[449] > 0xF )
          v40 = (_QWORD *)*v40;
        sub_14068D4E0(
          a1: (_DWORD)a4,
          a2: (_DWORD)a1,
          a3: (_DWORD)v40,
          a4: (unsigned int)lpMem,
          a5: (__int64)&v101,
          a6: 0);
        v113 = 0;
        v109 = &PXEngine::VersionDependency::`vftable';
        v110 = 0;
        v111 = 0;
        v112 = 15;
        LOBYTE(v110) = 0;
        v95 = 0;
        sub_14068C430(a1: (_DWORD)a4, a2: (_DWORD)a1, a3: off_1412FFDF8[0], a4: (unsigned int)&v95, a5: (__int64)&v109);
        v105 = 0;
        v101 = &PXEngine::VersionDependency::`vftable';
        v102 = 0;
        v103 = 0;
        v104 = 15;
        LOBYTE(v102) = 0;
        *(_OWORD *)lpMem = 0;
        sub_14068C430(a1: (_DWORD)a4, a2: (_DWORD)a1, a3: off_1412FFE00[0], a4: (unsigned int)lpMem, a5: (__int64)&v101);
        v113 = 0;
        v109 = &PXEngine::VersionDependency::`vftable';
        v110 = 0;
        v111 = 0;
        v112 = 15;
        LOBYTE(v110) = 0;
        v95 = 0;
        sub_14068C430(
          a1: (_DWORD)a4,
          a2: (_DWORD)a1,
          a3: (_DWORD)off_1412FFE08,
          a4: (unsigned int)&v95,
          a5: (__int64)&v109);
        v105 = 0;
        v101 = &PXEngine::VersionDependency::`vftable';
        v102 = 0;
        v103 = 0;
        v104 = 15;
        LOBYTE(v102) = 0;
        *(_OWORD *)lpMem = 0;
        sub_14068D4E0(
          a1: (_DWORD)a4,
          a2: (_DWORD)a1,
          a3: off_1412FFDF8[0],
          a4: (unsigned int)lpMem,
          a5: (__int64)&v101,
          a6: 0);
        v113 = 0;
        v109 = &PXEngine::VersionDependency::`vftable';
        v110 = 0;
        v111 = 0;
        v112 = 15;
        LOBYTE(v110) = 0;
        v95 = 0;
        sub_14068D4E0(
          a1: (_DWORD)a4,
          a2: (_DWORD)a1,
          a3: off_1412FFE00[0],
          a4: (unsigned int)&v95,
          a5: (__int64)&v109,
          a6: 0);
        v105 = 0;
        v101 = &PXEngine::VersionDependency::`vftable';
        v102 = 0;
        v103 = 0;
        v104 = 15;
        LOBYTE(v102) = 0;
        *(_OWORD *)lpMem = 0;
        sub_14068D4E0(
          a1: (_DWORD)a4,
          a2: (_DWORD)a1,
          a3: (_DWORD)off_1412FFE08,
          a4: (unsigned int)lpMem,
          a5: (__int64)&v101,
          a6: 0);
        v15 = a2;
        return sub_1400B8460(a1, a2: v15, a3, a4, a5: v100);
      }
      goto LABEL_219;
    }
    if ( a3 != 5 )
    {
      if ( a3 != 1211 )
      {
        if ( a3 == 1213 )
        {
          if ( (*((_BYTE *)a1 + 145) & 0x20) != 0 )
          {
            v9 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 176))(a1);
            *(_OWORD *)lpMem = 0;
            v107 = nullptr;
            v108 = 0;
            v10 = sub_140E79C30(a1: v9);
            sub_14000D850(a1: lpMem, a2: v9, a3: v10);
            LOBYTE(v8) = 2;
            v11 = lpMem;
            v12 = lpMem[0];
            v13 = v108;
            if ( v108 > 0xF )
              v11 = (LPVOID *)lpMem[0];
            if ( v107 == (__int64 *)5 && (unsigned int)sub_140E79AB0(a1: v11, a2: "World") == 0 )
            {
              v14 = 1;
LABEL_15:
              if ( (v8 & 2) == 0 )
                goto LABEL_22;
              if ( v13 <= 0xF )
              {
LABEL_21:
                lpMem[0] = (LPVOID)19937;
                v107 = nullptr;
                v108 = 31;
LABEL_22:
                v15 = a2;
                if ( v14 != 0 )
                {
                  LOBYTE(v108) = 1;
                  LODWORD(lpMem[0]) = 1210;
                  lpMem[1] = a4;
                  v107 = a1;
                  v16 = sub_140621240(a1: a2);
                  if ( (unsigned __int8)sub_14060B220(a1: v16, a2: a4, a3: lpMem) == 0 )
                  {
                    if ( (unsigned __int64)a4[3] <= 0xF )
                      v17 = (const char *)a4;
                    else
                      v17 = (const char *)*a4;
                    if ( (unsigned __int8)sub_140059AF0(
                                            a1: off_140F0BCE0,
                                            a2: "Running expensive command global/World.RunScriptRecursiveEx(%s) : Script nam"
                                            "e should be added to RecursiveScripts in Global.scene_xml",
                                            v17) == 0 )
                      return sub_1400B8460(a1, a2: v15, a3, a4, a5: v100);
LABEL_50:
                    __debugbreak();
                  }
                  return 1;
                }
                return sub_1400B8460(a1, a2: v15, a3, a4, a5: v100);
              }
              if ( v13 + 1 < 0x1000 )
              {
LABEL_20:
                sub_1409E08A0(lpMem: v12);
                goto LABEL_21;
              }
              if ( (unsigned __int64)v12 - *((_QWORD *)v12 - 1) - 8 <= 0x1F )
              {
                v12 = *((void **)v12 - 1);
                goto LABEL_20;
              }
LABEL_198:
              __fastfail(5u);
            }
          }
          else
          {
            v13 = v108;
            v12 = lpMem[0];
          }
          v14 = 0;
          goto LABEL_15;
        }
LABEL_219:
        v15 = a2;
        return sub_1400B8460(a1, a2: v15, a3, a4, a5: v100);
      }
      if ( (*((_BYTE *)a1 + 145) & 0x20) != 0 )
      {
        v18 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 176))(a1);
        *(_OWORD *)lpMem = 0;
        v107 = nullptr;
        v108 = 0;
        v19 = sub_140E79C30(a1: v18);
        sub_14000D850(a1: lpMem, a2: v18, a3: v19);
        LOBYTE(v8) = 1;
        v20 = lpMem;
        v21 = lpMem[0];
        v22 = v108;
        if ( v108 > 0xF )
          v20 = (LPVOID *)lpMem[0];
        if ( v107 == (__int64 *)5 && (unsigned int)sub_140E79AB0(a1: v20, a2: "World") == 0 )
        {
          v23 = 1;
          goto LABEL_37;
        }
      }
      else
      {
        v22 = v108;
        v21 = lpMem[0];
      }
      v23 = 0;
LABEL_37:
      if ( (v8 & 1) != 0 )
      {
        if ( v22 > 0xF )
        {
          if ( v22 + 1 >= 0x1000 )
          {
            if ( (unsigned __int64)v21 - *(v21 - 1) - 8 > 0x1F )
              goto LABEL_198;
            v21 = (_QWORD *)*(v21 - 1);
          }
          sub_1409E08A0(lpMem: v21);
        }
        lpMem[0] = (LPVOID)19937;
        v107 = nullptr;
        v108 = 31;
      }
      v15 = a2;
      if ( v23 != 0 )
      {
        LOBYTE(v108) = 1;
        LODWORD(lpMem[0]) = 1209;
        lpMem[1] = a4;
        v107 = a1;
        v24 = sub_140621240(a1: a2);
        if ( (unsigned __int8)sub_14060B220(a1: v24, a2: a4, a3: lpMem) == 0 )
        {
          if ( (unsigned __int64)a4[3] <= 0xF )
            v25 = (const char *)a4;
          else
            v25 = (const char *)*a4;
          if ( (unsigned __int8)sub_140059AF0(
                                  a1: off_140F0BCB8,
                                  a2: "Running expensive command global/World.RunScriptRecursive(%s) : Script name should be "
                                  "added to RecursiveScripts in Global.scene_xml",
                                  v25) == 0 )
            return sub_1400B8460(a1, a2: v15, a3, a4, a5: v100);
          goto LABEL_50;
        }
        return 1;
      }
      return sub_1400B8460(a1, a2: v15, a3, a4, a5: v100);
    }
    *(_QWORD *)&v95 = a4;
    if ( a4 != nullptr )
    {
      if ( a4 == (__int64 *)a1[44] )
      {
        v27 = sub_14006CB30(a1: a4);
        v28 = sub_14005F850(a1: 3, a2: 2);
        if ( (unsigned __int8)sub_140050530(a1: v27, a2: v28) != 0 )
        {
          LODWORD(v95) = 0;
          sub_14006D9C0(a1: (__int64)a4, a2: (__int64)&v95, a3: 1u, a4: 0);
          *((_DWORD *)a4 + 36) = v95;
          (*(void (__fastcall **)(__int64 *, __int64 *))(*a1 + 872))(a1, a2: a4);
        }
        else
        {
          v86 = sub_140051370(a1: v27, a2: &v101);
          v87 = (const char *)sub_140054F90(a1: v86);
          v88 = sub_140059AF0(a1: off_140F0D8E8, a2: "Unkown info map format with extension %s", v87);
          sub_14004FBE0(a1: &v101);
          if ( v88 != 0 )
            __debugbreak();
        }
        a1[44] = 0;
        goto LABEL_67;
      }
      if ( a4 == (__int64 *)a1[27] )
      {
        v29 = sub_14006CB30(a1: a4);
        v30 = sub_14005F850(a1: 2, a2: 2);
        if ( (unsigned __int8)sub_140050530(a1: v29, a2: v30) != 0 )
        {
          LODWORD(v95) = 0;
          sub_14006D9C0(a1: (__int64)a4, a2: (__int64)&v95, a3: 1u, a4: 0);
          *((_DWORD *)a4 + 36) = v95;
          (*(void (__fastcall **)(__int64 *, __int64 *))(*a1 + 864))(a1, a2: a4);
        }
        else
        {
          v89 = sub_140051370(a1: v29, a2: &v101);
          v90 = (const char *)sub_140054F90(a1: v89);
          v91 = sub_140059AF0(a1: off_140F0D9F0, a2: "Unknown height map format with extension %s", v90);
          sub_14004FBE0(a1: &v101);
          if ( v91 != 0 )
            __debugbreak();
        }
        a1[27] = 0;
        v15 = a2;
        sub_1401A43A0(a1, a2);
        goto LABEL_68;
      }
      if ( sub_1401BDE60(a1: a1 + 28, a2: &v95) == 1 )
      {
        sub_140708380(a1: a1 + 19, a2: a4);
        if ( a1[30] == 0 )
        {
          sub_1401AAF90(a1, a2: a1 + 19);
          v15 = a2;
          sub_1401A43A0(a1, a2);
          goto LABEL_68;
        }
LABEL_67:
        v15 = a2;
LABEL_68:
        if ( a4 != nullptr )
          (*(void (__fastcall **)(__int64 *, __int64))*a4)(a1: a4, a2: 1);
        return sub_1400B8460(a1, a2: v15, a3, a4, a5: v100);
      }
      if ( sub_1401BDE60(a1: a1 + 36, a2: &v95) == 1 )
      {
        sub_140708380(a1: a1 + 54, a2: a4);
        if ( a1[38] == 0 )
          sub_1401AAF90(a1, a2: a1 + 54);
        goto LABEL_67;
      }
      v96 = (LPVOID *)"Internal error! Unkown file is ready to use: {}";
      v97 = 47;
      v92 = sub_14006CB30(a1: a4);
      v93 = sub_140196B70(a1: off_140F0BC90, a2: &v96, a3: v92);
LABEL_231:
      if ( v93 != 0 )
        __debugbreak();
      sub_1409E7D98(a1: 999);
      __debugbreak();
    }
    goto LABEL_223;
  }
  switch ( a3 )
  {
    case 0xEA61u:
      *(_DWORD *)a4 = *((unsigned __int8 *)a1 + 3136);
      goto LABEL_99;
    case 0xEA62u:
      *((_BYTE *)a1 + 3137) = *(_DWORD *)a4 != 0;
      v15 = a2;
      return sub_1400B8460(a1, a2: v15, a3, a4, a5: v100);
    case 0xEA63u:
      *(_DWORD *)a4 = *((unsigned __int8 *)a1 + 3137);
      if ( *((_BYTE *)a1 + 3136) != 0 )
        goto LABEL_99;
      return 201;
    case 0xEA64u:
      *((_BYTE *)a1 + 3138) = *(_DWORD *)a4 != 0;
      v15 = a2;
      return sub_1400B8460(a1, a2: v15, a3, a4, a5: v100);
    case 0xEA65u:
      *(_DWORD *)a4 = *((unsigned __int8 *)a1 + 3138);
      v15 = a2;
      return sub_1400B8460(a1, a2: v15, a3, a4, a5: v100);
    case 0xEA66u:
    case 0xEA67u:
    case 0xEA6Au:
    case 0xEA6Bu:
    case 0xEA6Cu:
    case 0xEA6Du:
    case 0xEA6Eu:
    case 0xEA6Fu:
    case 0xEA8Bu:
      goto LABEL_99;
    case 0xEA68u:
      *((_BYTE *)a1 + 3139) = *(_DWORD *)a4 != 0;
      v15 = a2;
      return sub_1400B8460(a1, a2: v15, a3, a4, a5: v100);
    case 0xEA69u:
      *(_DWORD *)a4 = *((unsigned __int8 *)a1 + 3139);
      v15 = a2;
      return sub_1400B8460(a1, a2: v15, a3, a4, a5: v100);
    case 0xEA70u:
      *((_BYTE *)a1 + 3140) = *(_DWORD *)a4 != 0;
      v15 = a2;
      return sub_1400B8460(a1, a2: v15, a3, a4, a5: v100);
    case 0xEA71u:
      *(_DWORD *)a4 = *((unsigned __int8 *)a1 + 3140);
      v15 = a2;
      return sub_1400B8460(a1, a2: v15, a3, a4, a5: v100);
    case 0xEA72u:
      v57 = *(float *)a4;
      v58 = *(_DWORD *)a4 != 0;
      v59 = *((_BYTE *)a1 + 12066);
      *((_BYTE *)a1 + 12066) = v58;
      if ( v57 != 0.0 )
      {
        if ( a1[1516] == 0 )
          goto LABEL_137;
        sub_1406E54D0();
        sub_1401A93B0(a1, a2: v60);
        *((_BYTE *)a1 + 12108) = 1;
        goto LABEL_136;
      }
      sub_14064F3F0(a1: a1[424]);
      a1[423] = 0;
      a1[424] = 0;
      sub_14064F3F0(a1: a1[426]);
      a1[425] = 0;
      a1[426] = 0;
      sub_14064F3F0(a1: a1[428]);
      a1[427] = 0;
      a1[428] = 0;
      sub_14064F3F0(a1: a1[451]);
      a1[450] = 0;
      a1[451] = 0;
      sub_14064F3F0(a1: a1[454]);
      a1[453] = 0;
      a1[454] = 0;
      a1[456] = a1[455];
      *((_DWORD *)a1 + 889) = 0;
      if ( *(_QWORD *)&nExitCode != 0 && a1[1516] != 0 )
      {
        sub_1406E1860();
        sub_1406DB620(a1: a1[1516], a2: 9);
LABEL_136:
        sub_1406DD810(a1: a1[1516], a2: 0);
      }
LABEL_137:
      if ( v58 == v59 )
        return 200;
      v98 = 0;
      v99 = 1;
      LODWORD(v96) = 60046;
      v97 = 0;
      v61 = qword_141379EF0;
      if ( qword_141379EF0 == 0 )
      {
        if ( (unsigned __int8)sub_140059A00(a1: off_140EFA938) != 0 )
          __debugbreak();
        sub_1409E7D98(a1: 999);
        __debugbreak();
      }
      sub_1405F8B50(a1: lpMem, a2: *(_QWORD *)&nExitCode + 120LL);
      sub_1406096E0(a1: v61, a2: lpMem, a3: &v96);
      return 200;
    case 0xEA73u:
      *(_DWORD *)a4 = *((unsigned __int8 *)a1 + 12066);
      v15 = a2;
      return sub_1400B8460(a1, a2: v15, a3, a4, a5: v100);
    case 0xEA74u:
      *((_BYTE *)a1 + 12111) = *(_DWORD *)a4 != 0;
      v15 = a2;
      return sub_1400B8460(a1, a2: v15, a3, a4, a5: v100);
    case 0xEA75u:
      *(_DWORD *)a4 = *((unsigned __int8 *)a1 + 12111);
      v15 = a2;
      return sub_1400B8460(a1, a2: v15, a3, a4, a5: v100);
    case 0xEA76u:
      v62 = *(float *)a4;
      v63 = sub_14009F960();
      *((float *)a1 + 3019) = v62;
      *((float *)a1 + 3021) = v62;
      *((float *)a1 + 3020) = v62;
      a1[1511] = 0;
      if ( v63 != 0 )
        goto LABEL_99;
      v98 = 0;
      v99 = 1;
      LODWORD(v96) = 60047;
      v97 = 0;
      v64 = qword_141379EF0;
      if ( qword_141379EF0 != 0 )
      {
        sub_1405F8B50(a1: lpMem, a2: *(_QWORD *)&nExitCode + 120LL);
        sub_1406096E0(a1: v64, a2: lpMem, a3: &v96);
        v15 = a2;
        return sub_1400B8460(a1, a2: v15, a3, a4, a5: v100);
      }
      if ( (unsigned __int8)sub_140059A00(a1: off_140EFA938) != 0 )
        __debugbreak();
      sub_1409E7D98(a1: 999);
      goto LABEL_222;
    case 0xEA77u:
      *(float *)a4 = *((float *)a1 + 3019) * *((float *)a1 + 3018);
      v15 = a2;
      return sub_1400B8460(a1, a2: v15, a3, a4, a5: v100);
    case 0xEA78u:
      v65 = *((_DWORD *)a4 + 1);
      *((_DWORD *)a1 + 3021) = *(_DWORD *)a4;
      *((_DWORD *)a1 + 3023) = v65;
      *((_DWORD *)a1 + 3022) = 0;
      *((_DWORD *)a1 + 3020) = *((_DWORD *)a1 + 3019);
      v15 = a2;
      return sub_1400B8460(a1, a2: v15, a3, a4, a5: v100);
    case 0xEA79u:
      v66 = *((_DWORD *)a1 + 3023);
      *(_DWORD *)a4 = *((_DWORD *)a1 + 3021);
      *((_DWORD *)a4 + 1) = v66;
      v15 = a2;
      return sub_1400B8460(a1, a2: v15, a3, a4, a5: v100);
    case 0xEA7Au:
      if ( (float)*(int *)a4 <= *((float *)a1 + 3025) )
        return 200;
      *((_DWORD *)a1 + 3024) = *(_DWORD *)a4;
      return 200;
    case 0xEA7Bu:
      *(_DWORD *)a4 = *((_DWORD *)a1 + 3024);
      v15 = a2;
      return sub_1400B8460(a1, a2: v15, a3, a4, a5: v100);
    case 0xEA7Cu:
      v84 = *(float *)a4;
      if ( (float)*((int *)a1 + 3024) >= *(float *)a4
        && (float)((float)*((int *)a1 + 626) + (float)*((int *)a1 + 626)) >= v84 )
      {
        *((float *)a1 + 3025) = v84;
      }
      return 200;
    case 0xEA7Du:
      *(_DWORD *)a4 = *((_DWORD *)a1 + 3025);
      v15 = a2;
      return sub_1400B8460(a1, a2: v15, a3, a4, a5: v100);
    case 0xEA7Eu:
      *((_DWORD *)a1 + 3026) = *(_DWORD *)a4;
      v15 = a2;
      return sub_1400B8460(a1, a2: v15, a3, a4, a5: v100);
    case 0xEA7Fu:
      *(_DWORD *)a4 = *((_DWORD *)a1 + 3026);
      v15 = a2;
      return sub_1400B8460(a1, a2: v15, a3, a4, a5: v100);
    case 0xEA80u:
      *((_BYTE *)a1 + 12109) = *(_DWORD *)a4 != 0;
      v15 = a2;
      return sub_1400B8460(a1, a2: v15, a3, a4, a5: v100);
    case 0xEA81u:
      *(_DWORD *)a4 = *((unsigned __int8 *)a1 + 12109);
      v15 = a2;
      return sub_1400B8460(a1, a2: v15, a3, a4, a5: v100);
    case 0xEA82u:
      *((_BYTE *)a1 + 12110) = *(_DWORD *)a4 != 0;
      v15 = a2;
      return sub_1400B8460(a1, a2: v15, a3, a4, a5: v100);
    case 0xEA83u:
      *(_DWORD *)a4 = *((unsigned __int8 *)a1 + 12110);
      v15 = a2;
      return sub_1400B8460(a1, a2: v15, a3, a4, a5: v100);
    case 0xEA84u:
      *((_BYTE *)a1 + 12108) = 1;
      v15 = a2;
      return sub_1400B8460(a1, a2: v15, a3, a4, a5: v100);
    case 0xEA85u:
      *((_DWORD *)a1 + 3017) = *(_DWORD *)a4;
      v15 = a2;
      return sub_1400B8460(a1, a2: v15, a3, a4, a5: v100);
    case 0xEA86u:
      *(_DWORD *)a4 = *((_DWORD *)a1 + 3017);
      v15 = a2;
      return sub_1400B8460(a1, a2: v15, a3, a4, a5: v100);
    case 0xEA87u:
      sub_140016F60(a1: v114, a2: a4);
      if ( v115 != 0 )
        goto LABEL_156;
      v68 = v116;
      if ( v116 >= 0xB )
      {
        v69 = v114;
        if ( v116 > 0xF )
          v69 = (LPVOID *)v114[0];
        v115 = 11;
        sub_140E79060(a1: v69, a2: "GEN_Snow_02", a3: 11);
        *((_BYTE *)v69 + 11) = 0;
LABEL_156:
        v70 = (char *)v114[0];
        goto LABEL_157;
      }
      v76 = v116 >> 1;
      v77 = 0x7FFFFFFFFFFFFFFFLL;
      if ( v116 <= 0x7FFFFFFFFFFFFFFFLL - (v116 >> 1) )
      {
        v77 = 15;
        if ( v76 + v116 > 0xF )
          v77 = v76 + v116;
        if ( v77 == -1 )
        {
          v70 = nullptr;
          goto LABEL_173;
        }
        if ( (unsigned __int64)(v77 + 1) < 0x1000 )
        {
          v70 = (char *)sub_1409E0850(a1: v77 + 1);
          goto LABEL_173;
        }
        v78 = v77 + 40;
        if ( v77 + 40 < (unsigned __int64)(v77 + 1) )
        {
LABEL_222:
          sub_14001A900(a1: v78, a2: v67);
LABEL_223:
          v85 = off_140F0BC60;
LABEL_230:
          v93 = sub_140059A00(a1: v85);
          goto LABEL_231;
        }
      }
      else
      {
        v78 = 0x8000000000000027uLL;
      }
      v79 = sub_1409E0850(a1: v78);
      if ( v79 == 0 )
        goto LABEL_179;
      v70 = (char *)((v79 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *((_QWORD *)v70 - 1) = v79;
LABEL_173:
      v115 = 11;
      v116 = v77;
      strcpy(v70, "GEN_Snow_02");
      if ( v68 <= 0xF )
      {
LABEL_178:
        v114[0] = v70;
LABEL_157:
        v71 = (LPVOID *)(a1 + 446);
        v72 = v114;
        v73 = v116;
        if ( v116 > 0xF )
          v72 = (LPVOID *)v70;
        v74 = a1[448];
        if ( (unsigned __int64)a1[449] <= 0xF )
          v75 = a1 + 446;
        else
          v75 = *v71;
        if ( v74 == v115 && (v74 == 0 || (unsigned int)sub_140E79AB0(a1: v75, a2: v72) == 0) )
        {
          if ( v73 > 0xF )
          {
            if ( v73 + 1 >= 0x1000 )
            {
              if ( (unsigned __int64)&v70[-*((_QWORD *)v70 - 1) - 8] > 0x1F )
                goto LABEL_198;
              v70 = *((char **)v70 - 1);
            }
            sub_1409E08A0(lpMem: v70);
            v15 = a2;
            return sub_1400B8460(a1, a2: v15, a3, a4, a5: v100);
          }
LABEL_99:
          v15 = a2;
          return sub_1400B8460(a1, a2: v15, a3, a4, a5: v100);
        }
        if ( v71 != v114 )
        {
          v81 = v114;
          if ( v73 > 0xF )
            v81 = (LPVOID *)v70;
          sub_14000D6E0(a1: a1 + 446, a2: v81, a3: v115);
        }
        sub_1401A93B0(a1, a2: v72);
        if ( v116 > 0xF )
        {
          v82 = v114[0];
          if ( v116 + 1 >= 0x1000 )
          {
            if ( (unsigned __int64)v114[0] - *((_QWORD *)v114[0] - 1) - 8 > 0x1F )
              goto LABEL_198;
            v82 = *((void **)v114[0] - 1);
          }
          sub_1409E08A0(lpMem: v82);
          return 200;
        }
        return 200;
      }
      v80 = v114[0];
      if ( v68 + 1 < 0x1000 )
      {
LABEL_177:
        sub_1409E08A0(lpMem: v80);
        goto LABEL_178;
      }
      if ( (unsigned __int64)v114[0] - *((_QWORD *)v114[0] - 1) - 8 <= 0x1F )
      {
        v80 = *((void **)v114[0] - 1);
        goto LABEL_177;
      }
LABEL_179:
      __fastfail(5u);
    case 0xEA88u:
      sub_1400184F0(a1: a4, a2: a1 + 446);
      v15 = a2;
      return sub_1400B8460(a1, a2: v15, a3, a4, a5: v100);
    case 0xEA89u:
      v83 = a1 + 452;
      if ( *(float *)a4 > *((float *)a1 + 904) )
        v83 = a4;
      *((_DWORD *)a1 + 905) = *(_DWORD *)v83;
      return 200;
    case 0xEA8Au:
      *(_DWORD *)a4 = *((_DWORD *)a1 + 905);
      v15 = a2;
      return sub_1400B8460(a1, a2: v15, a3, a4, a5: v100);
    case 0xEA8Cu:
      *(_WORD *)((char *)a1 + 3141) = 257;
      v41 = *((_DWORD *)a1 + 138);
      if ( v41 != -1 )
      {
        if ( v41 >= 0xBD && (unsigned __int8)sub_140059A00(a1: off_140F0BF30) != 0 )
          __debugbreak();
        v42 = *a1;
        v43 = sub_140101B20(a1);
        (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64))(v42 + 776))(
          a1,
          a2: (unsigned int)(*((_DWORD *)a1 + 138) + 60238),
          a3: 0,
          a4: v43);
      }
      v44 = *((_DWORD *)a1 + 264);
      if ( v44 != -1 )
      {
        if ( v44 >= 0xBD && (unsigned __int8)sub_140059A00(a1: off_140F0BFB8) != 0 )
          __debugbreak();
        v45 = *a1;
        v46 = sub_140101B20(a1);
        (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64))(v45 + 776))(
          a1,
          a2: (unsigned int)(*((_DWORD *)a1 + 264) + 60618),
          a3: 0,
          a4: v46);
      }
      do
      {
        v47 = 21LL * v8;
        v48 = (_QWORD *)sub_1405F8CF0(a1: (__int64)&a1[v47 + 70]);
        v50 = v48;
        if ( v48 != nullptr && HIDWORD(a1[v47 + 72]) != 0 && LODWORD(a1[v47 + 69]) != -1 )
        {
          v51 = *v48;
          v52 = sub_140101B20(a1: v49);
          v53 = LODWORD(a1[v47 + 69]);
          v54 = a1[v47 + 73];
          if ( v53 >= (a1[v47 + 74] - v54) / 56 )
            goto LABEL_198;
          (*(void (__fastcall **)(_QWORD *, _QWORD, unsigned __int64, _QWORD, __int64))(v51 + 24))(
            a1: v50,
            a2: HIDWORD(a1[v47 + 72]),
            a3: v54 + 56 * v53,
            a4: 0,
            a5: v52);
        }
        LODWORD(a1[v47 + 69]) = -1;
        HIDWORD(a1[v47 + 69]) = 0;
        ++v8;
      }
      while ( v8 < 0xB );
      v15 = a2;
      return sub_1400B8460(a1, a2: v15, a3, a4, a5: v100);
    case 0xEA8Du:
      if ( a4 == nullptr )
      {
        v85 = off_140F0BC18;
        goto LABEL_230;
      }
      v55 = sub_14005D010(a1, a2: &_ImageBase);
      v56 = *a4;
      if ( *a4 != 0 && (unsigned __int8)sub_14064F360(a1: *a4, a2: 1, a3: v55) != 0 )
      {
        sub_1401AB0F0(a1, a2: v56);
        v15 = a2;
        return sub_1400B8460(a1, a2: v15, a3, a4, a5: v100);
      }
      goto LABEL_99;
    default:
      goto LABEL_219;
  }
}