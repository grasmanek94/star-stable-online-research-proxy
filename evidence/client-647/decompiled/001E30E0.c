__int64 __fastcall sub_1401E30E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v6; // r15d
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  unsigned int v16; // r14d
  void **v17; // r12
  __int64 v18; // rcx
  __int64 v19; // rax
  void **v20; // r15
  int v21; // edi
  void *v22; // rbx
  __int64 v23; // rax
  int v25; // edx
  int v26; // ecx
  unsigned int v27; // ebx
  __int64 v28; // rbx
  __int64 v29; // r13
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // r14
  __int64 v41; // rbx
  __int64 v42; // r14
  __int64 v43; // r15
  __int64 v44; // r14
  __int64 v45; // rax
  __int64 v46; // r8
  __int64 v47; // rbx
  __int64 v48; // rsi
  __int64 v49; // rax
  char v50; // cl
  __int64 v51; // rax
  int v52; // ebx
  int v53; // eax
  __int64 v54; // rax
  __int64 v55; // rbx
  __int64 v56; // r14
  __int64 v57; // rax
  __int64 v58; // r8
  __int64 v59; // rbx
  __int64 v60; // r14
  __int64 v61; // rbx
  __int64 v62; // r14
  unsigned int v63; // eax
  __int64 v64; // rbx
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rbx
  __int64 v68; // rax
  __int64 v69; // r14
  bool v70; // bl
  __int64 v71; // rax
  __int64 v72; // rbx
  void *v73; // rcx
  void **v74; // rcx
  unsigned __int64 v75; // rdx
  _QWORD *v76; // rcx
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // r15
  __int64 v80; // rax
  __int64 v81; // r14
  __int64 **v82; // rax
  __int64 v83; // rbx
  __int64 v84; // r14
  char v85; // al
  unsigned int v86; // edi
  __int64 v87; // rax
  __int64 v88; // rbx
  __int64 v89; // rax
  __int128 *v90; // rsi
  char *v91; // rbx
  __int64 v92; // rax
  __int128 *v93; // r8
  char *v94; // rcx
  char *v95; // r8
  __int64 v96; // rax
  void ***v97; // rdx
  void **v98; // rcx
  void **v99; // [rsp+50h] [rbp-B0h] BYREF
  int v100; // [rsp+58h] [rbp-A8h]
  int v101; // [rsp+5Ch] [rbp-A4h]
  char v102[8]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v103[16]; // [rsp+68h] [rbp-98h] BYREF
  void **v104; // [rsp+78h] [rbp-88h] BYREF
  _DWORD v105[8]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v106; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v107; // [rsp+B0h] [rbp-50h]
  void **v108; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v109; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int64 v110; // [rsp+D8h] [rbp-28h]
  char v111; // [rsp+E8h] [rbp-18h]
  __int128 v112; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 v113; // [rsp+100h] [rbp+0h]
  unsigned __int64 v114; // [rsp+108h] [rbp+8h]
  void **v115; // [rsp+110h] [rbp+10h] BYREF
  __int64 v116; // [rsp+118h] [rbp+18h]
  __int64 v117; // [rsp+120h] [rbp+20h] BYREF
  unsigned __int64 v118; // [rsp+128h] [rbp+28h]

  v6 = a3;
  if ( (unsigned int)a3 > 0x1D53A )
  {
    v31 = (unsigned __int64)&_ImageBase;
    switch ( (int)a3 )
    {
      case 120146:
        if ( (*(_BYTE *)(a1 + 3545) & 0x40) != 0 || *(_DWORD *)(a1 + 324) >= *(_DWORD *)(a1 + 320) )
          goto LABEL_43;
        goto LABEL_118;
      case 120147:
        if ( (*(_BYTE *)(a1 + 3545) & 0x40) != 0 || *(_DWORD *)(a1 + 324) >= *(_DWORD *)(a1 + 320) )
          return 1;
        v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 904LL))(a1);
        v116 = 0;
        v117 = 0;
        LODWORD(v118) = 0;
        v115 = &PXEngine::ByteStreamWriter::`vftable';
        LODWORD(v99) = v32;
        if ( sub_1401D0820(a1: &v115, a2: &v99) != 0 )
        {
          LOWORD(v104) = word_141313D58;
          sub_140A255B0(a1: v105, a2: &v115);
          LOWORD(v108) = (_WORD)v104;
          sub_140A255B0(a1: &v109, a2: v105);
          v111 = 1;
          sub_140A25690(a1: v105);
        }
        else
        {
          v111 = 0;
        }
        sub_140A25690(a1: &v115);
        sub_1407EE6B0(a1: &v108);
        return 1;
      case 120228:
        v51 = sub_1400895F0(a1: a4, a2: v103, a3: 0);
        v52 = sub_14007FDC0(a1: v51, a2: 0);
        sub_1400778C0(a1: v103);
        if ( (unsigned int)(v52 - 1) > 0x1F )
        {
          if ( (unsigned __int8)sub_140059D90(
                                  a1: off_140F4D940,
                                  a2: "GetHorseIsCurrentHitEffectCategory parameter %u is not valid,has to be a value between 1-32",
                                  v52) != 0 )
            __debugbreak();
        }
        else
        {
          v53 = *(_DWORD *)(a1 + 3524);
          if ( _bittest(&v53, v52 - 1) )
          {
            LOBYTE(v31) = 1;
            goto LABEL_44;
          }
        }
        v31 = 0;
        goto LABEL_44;
      case 120229:
        sub_140089AA0(a1: a4, a2: a1 + 3528, a3: 4294967294LL);
        return 1;
      case 120231:
        LOBYTE(v31) = *(_BYTE *)(a1 + 3409) == 0;
        goto LABEL_44;
      case 120319:
        v64 = *(_QWORD *)(a1 + 808);
        if ( v64 == 0 )
          return 1;
        v65 = sub_1400895F0(a1: a4, a2: v103, a3: 0);
        *(float *)(v64 + 64) = sub_14007F2A0(a1: v65, a2: 0);
        sub_1400778C0(a1: v103);
        return 1;
      case 120320:
        if ( *(_QWORD *)(a1 + 808) == 0 )
          return sub_1400FBBD0(a1, a2, a3: v6, a4, a5);
        sub_1400897A0(a1: a4, a2: &_ImageBase, a3: 4294967294LL);
        return 1;
      case 120323:
        if ( *(_QWORD *)(a1 + 808) != 0 )
          sub_1405D3EC0();
        goto LABEL_125;
      case 120324:
        if ( *(_QWORD *)(a1 + 808) != 0 )
          sub_1405D3F30();
LABEL_125:
        sub_1400897A0(a1: a4, a2: v31, a3: 4294967294LL);
        return 1;
      case 120328:
        v33 = sub_140619130(a1: a2);
        v34 = sub_1401D0A70(a1: v33, a2: &v115);
        v35 = sub_1405F1EE0(a1: v34);
        if ( v35 == 0 )
          return 1;
        v36 = 2;
        goto LABEL_61;
      case 120329:
        v37 = sub_140619130(a1: a2);
        v38 = sub_1401D0A70(a1: v37, a2: &v115);
        v35 = sub_1405F1EE0(a1: v38);
        if ( v35 == 0 )
          return 1;
        v36 = 6;
        goto LABEL_61;
      case 120330:
        v39 = sub_140619130(a1: a2);
        v40 = sub_1405FD2E0(a1: v39, a2: &v115, a3: "HorseForSaleManager");
        if ( (unsigned __int8)sub_1406006A0(a1: v39, a2: v40, a3: 165) != 0 )
        {
          sub_1405F1D60(a1: &v99, a2: *(unsigned int *)(v40 + 12), a3: *(unsigned int *)(v40 + 8));
        }
        else
        {
          v100 = 0;
          v101 = 195948557;
        }
        v99 = &PXEngine::SafeActorPtrAs<CPXHorseManager>::`vftable';
        v35 = sub_1405F1EE0(a1: (__int64)&v99);
        if ( v35 == 0 )
          return 1;
        v36 = 5;
LABEL_61:
        v31 = (unsigned __int8)sub_140313A80(a1: v35, a2: *(unsigned int *)(a1 + 324), a3: v36);
        goto LABEL_44;
      case 120331:
        v41 = sub_140619130(a1: a2);
        v42 = sub_1405FD2E0(a1: v41, a2: &v115, a3: "HorseForSaleManager");
        if ( (unsigned __int8)sub_1406006A0(a1: v41, a2: v42, a3: 165) != 0 )
        {
          sub_1405F1D60(a1: &v99, a2: *(unsigned int *)(v42 + 12), a3: *(unsigned int *)(v42 + 8));
        }
        else
        {
          v100 = 0;
          v101 = 195948557;
        }
        v99 = &PXEngine::SafeActorPtrAs<CPXHorseManager>::`vftable';
        if ( sub_1405F1EE0(a1: (__int64)&v99) == 0 )
          return 1;
        v43 = qword_14138A6F0;
        if ( qword_14138A6F0 == 0 )
        {
          if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
            __debugbreak();
          sub_1409E29B8(a1: 999);
          __debugbreak();
        }
        v44 = sub_1405FD2E0(a1: qword_14138A6F0, a2: &v115, a3: "HorseForSaleManager");
        if ( (unsigned __int8)sub_1406006A0(a1: v43, a2: v44, a3: 165) != 0 )
        {
          sub_1405F1D60(a1: &v99, a2: *(unsigned int *)(v44 + 12), a3: *(unsigned int *)(v44 + 8));
        }
        else
        {
          v100 = 0;
          v101 = 195948557;
        }
        v99 = &PXEngine::SafeActorPtrAs<CPXHorseManager>::`vftable';
        v45 = sub_1405F1EE0(a1: (__int64)&v99);
        if ( v45 == 0 )
          goto LABEL_43;
        v46 = 7;
        goto LABEL_117;
      case 120333:
        v31 = *(unsigned __int8 *)(a1 + 3546);
        LOBYTE(v31) = v31 & 1;
        goto LABEL_44;
      case 120334:
        v47 = sub_140619130(a1: a2);
        v48 = sub_1405FD2E0(a1: v47, a2: &v115, a3: "HorseForSaleManager");
        if ( (unsigned __int8)sub_1406006A0(a1: v47, a2: v48, a3: 165) != 0 )
        {
          sub_1405F1D60(a1: &v99, a2: *(unsigned int *)(v48 + 12), a3: *(unsigned int *)(v48 + 8));
        }
        else
        {
          v100 = 0;
          v101 = 195948557;
        }
        v99 = &PXEngine::SafeActorPtrAs<CPXHorseManager>::`vftable';
        v49 = sub_1405F1EE0(a1: (__int64)&v99);
        if ( v49 == 0 )
          return 1;
        v50 = *(_BYTE *)(a1 + 3546);
        if ( (v50 & 1) == 0 )
          return 1;
        *(_BYTE *)(a1 + 3546) = v50 & 0xFE;
        sub_14031D2D0(a1: v49, a2: *(unsigned int *)(a1 + 224));
        return 1;
      case 120335:
        if ( *(_DWORD *)(a1 + 3260) != 0 )
        {
          v54 = sub_1405F1EE0(a1: a1 + 3272);
        }
        else
        {
          LOBYTE(a3) = 1;
          v54 = sub_1401DFB50(a1, a2: 0, a3);
        }
        if ( v54 != 0 )
          v31 = (unsigned __int8)sub_140335F10(a1: v54, a2: 0);
        else
          v31 = 0;
        goto LABEL_44;
      case 120336:
        v55 = qword_14138A6F0;
        if ( qword_14138A6F0 == 0 )
        {
          if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
            __debugbreak();
          sub_1409E29B8(a1: 999);
          __debugbreak();
        }
        v56 = sub_1405FD2E0(a1: qword_14138A6F0, a2: &v115, a3: "HorseForSaleManager");
        if ( (unsigned __int8)sub_1406006A0(a1: v55, a2: v56, a3: 165) != 0 )
        {
          sub_1405F1D60(a1: &v99, a2: *(unsigned int *)(v56 + 12), a3: *(unsigned int *)(v56 + 8));
        }
        else
        {
          v100 = 0;
          v101 = 195948557;
        }
        v99 = &PXEngine::SafeActorPtrAs<CPXHorseManager>::`vftable';
        v57 = sub_1405F1EE0(a1: (__int64)&v99);
        if ( *(_BYTE *)(a1 + 314) != 0 )
          goto LABEL_118;
        if ( v57 == 0 )
          goto LABEL_43;
        v58 = 4;
        goto LABEL_101;
      case 120337:
        v31 = (unsigned __int8)sub_1401E12F0(a1);
        goto LABEL_44;
      case 120338:
        v59 = qword_14138A6F0;
        if ( qword_14138A6F0 == 0 )
        {
          if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
            __debugbreak();
          sub_1409E29B8(a1: 999);
          __debugbreak();
        }
        v60 = sub_1405FD2E0(a1: qword_14138A6F0, a2: &v115, a3: "HorseForSaleManager");
        if ( (unsigned __int8)sub_1406006A0(a1: v59, a2: v60, a3: 165) != 0 )
        {
          sub_1405F1D60(a1: &v99, a2: *(unsigned int *)(v60 + 12), a3: *(unsigned int *)(v60 + 8));
        }
        else
        {
          v100 = 0;
          v101 = 195948557;
        }
        v99 = &PXEngine::SafeActorPtrAs<CPXHorseManager>::`vftable';
        v57 = sub_1405F1EE0(a1: (__int64)&v99);
        if ( *(_BYTE *)(a1 + 314) != 0 )
          goto LABEL_118;
        if ( v57 == 0 )
          goto LABEL_43;
        v58 = 3;
LABEL_101:
        if ( (unsigned __int8)sub_140313A80(a1: v57, a2: *(unsigned int *)(a1 + 324), a3: v58) == 0 )
          goto LABEL_43;
        goto LABEL_118;
      case 120339:
        v61 = qword_14138A6F0;
        if ( qword_14138A6F0 == 0 )
        {
          if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
            __debugbreak();
          sub_1409E29B8(a1: 999);
          goto LABEL_186;
        }
        v62 = sub_1405FD2E0(a1: qword_14138A6F0, a2: &v115, a3: "HorseForSaleManager");
        if ( (unsigned __int8)sub_1406006A0(a1: v61, a2: v62, a3: 165) != 0 )
        {
          sub_1405F1D60(a1: &v99, a2: *(unsigned int *)(v62 + 12), a3: *(unsigned int *)(v62 + 8));
        }
        else
        {
          v100 = 0;
          v101 = 195948557;
        }
        v99 = &PXEngine::SafeActorPtrAs<CPXHorseManager>::`vftable';
        v45 = sub_1405F1EE0(a1: (__int64)&v99);
        if ( v45 == 0 )
          goto LABEL_43;
        v46 = 11;
LABEL_117:
        if ( (unsigned __int8)sub_140313A80(a1: v45, a2: *(unsigned int *)(a1 + 324), a3: v46) != 0 )
LABEL_118:
          LOBYTE(v31) = 1;
        else
LABEL_43:
          LOBYTE(v31) = 0;
LABEL_44:
        sub_1400896B0(a1: a4, a2: v31, a3: 4294967294LL);
        break;
      case 120340:
        if ( *(_QWORD *)(a1 + 808) != 0 )
          v63 = sub_1405D3EA0() - 1;
        else
          v63 = 0;
        sub_140089840(a1: a4, a2: v63, a3: 4294967294LL);
        return 1;
      case 120341:
        v77 = sub_140619130(a1: a2);
        v78 = sub_1401D0A70(a1: v77, a2: &v115);
        v79 = sub_1405F1EE0(a1: v78);
        v80 = sub_14005D330();
        if ( a5 == 0 || (unsigned __int8)sub_140645790(a1: a5, a2: 1, a3: v80) == 0 || v79 == 0 )
          return 1;
        v81 = sub_14005D330();
        v82 = (__int64 **)sub_1400895F0(a1: a4, a2: v103, a3: 0);
        v83 = **v82;
        if ( v83 != 0 )
        {
          v85 = sub_140645790(a1: **v82, a2: 40, a3: v81);
          v84 = 0;
          if ( v85 != 0 )
            v84 = v83;
        }
        else
        {
          v84 = 0;
        }
        sub_1400778C0(a1: v103);
        if ( v84 == 0 )
          return 1;
        v86 = *(_DWORD *)(v79 + 4LL * ((unsigned __int8)sub_1401E8870(a1) ^ 1u) + 1148);
        v87 = sub_1400895F0(a1: a4, a2: &v104, a3: 1);
        v88 = sub_140081CC0(a1: v87, a2: 0);
        v112 = 0;
        v113 = 0;
        v114 = 0;
        v89 = sub_140E82CD0(a1: v88);
        sub_14000D7F0(a1: &v112, a2: v88, a3: v89);
        sub_1400778C0(a1: &v104);
        v90 = &v112;
        if ( v114 > 0xF )
          v90 = (__int128 *)v112;
        if ( v113 < 2
          || (v91 = (char *)v90 + v113,
              (char *)(v92 = sub_1409D23E0(a1: v90, a2: (char *)v90 + v113, a3: "%d", 2)) == v91)
          || v92 - (_QWORD)v90 == -1 )
        {
          if ( v86 >= 0xA )
          {
            v94 = (char *)&v117 + 5;
            do
            {
              v95 = v94;
              v96 = v86 % 0x64;
              v86 /= 0x64u;
              v94 -= 2;
              *(_WORD *)v94 = word_140EE7660[v96];
            }
            while ( v86 >= 0xA );
            if ( v86 != 0 )
            {
              v94 = v95 - 3;
              *(v95 - 3) = v86 + 48;
            }
          }
          else
          {
            BYTE4(v117) = v86 + 48;
            v94 = (char *)&v117 + 4;
          }
          sub_140056380(a1: &v108, a2: v94, a3: (char *)&v117 + 5, a4: v102);
          v97 = &v108;
          if ( v110 > 0xF )
            v97 = (void ***)v108;
          sub_1401486E0(a1: v84, a2: v97, a3: 0);
          if ( v110 > 0xF )
          {
            v98 = v108;
            if ( v110 + 1 >= 0x1000 )
            {
              if ( (unsigned __int64)((char *)v108 - (_BYTE *)*(v108 - 1) - 8) > 0x1F )
                __fastfail(5u);
              v98 = (void **)*(v108 - 1);
            }
            sub_1409DB4C0(lpMem: v98);
          }
        }
        else
        {
          v93 = &v112;
          if ( v114 > 0xF )
            v93 = (__int128 *)v112;
          sub_1400691F0(a1: &v115, a2: 32, a3: v93, a4: v86);
          sub_1401486E0(a1: v84, a2: &v115, a3: 0);
        }
        if ( v114 <= 0xF )
          return 1;
        v75 = v114 + 1;
        v76 = (_QWORD *)v112;
        goto LABEL_147;
      case 120345:
        sub_1400899F0(a1: a4, a2: *(unsigned int *)(a1 + 264), a3: 4294967294LL);
        return 1;
      case 120351:
        v66 = sub_1400895F0(a1: a4, a2: v103, a3: 0);
        v67 = sub_14007ED10(a1: v66);
        v106 = 0;
        v107 = 0u;
        v68 = sub_140E82CD0(a1: v67);
        sub_14000D7F0(a1: &v106, a2: v67, a3: v68);
        sub_1400778C0(a1: v103);
        v69 = sub_1401DFB50(a1, a2: 0, a3: 0);
        if ( v69 == 0 )
          goto LABEL_145;
        v70 = *(_BYTE *)(a1 + 268) == 1;
        v71 = sub_140016F80(a1: &v104, a2: &v106);
        v72 = sub_140335B10(a1: v69, a2: &v115, a3: v71, a4: v70);
        if ( &v106 == (__int128 *)v72 )
          goto LABEL_140;
        if ( *((_QWORD *)&v107 + 1) > 0xFu )
        {
          v73 = (void *)v106;
          if ( (unsigned __int64)(*((_QWORD *)&v107 + 1) + 1LL) >= 0x1000 )
          {
            if ( (unsigned __int64)(v106 - *(_QWORD *)(v106 - 8) - 8) > 0x1F )
              goto LABEL_151;
            v73 = *(void **)(v106 - 8);
          }
          sub_1409DB4C0(lpMem: v73);
        }
        *(_QWORD *)&v107 = 0;
        *((_QWORD *)&v107 + 1) = 15;
        LOBYTE(v106) = 0;
        v106 = *(_OWORD *)v72;
        v107 = *(_OWORD *)(v72 + 16);
        *(_QWORD *)(v72 + 16) = 0;
        *(_QWORD *)(v72 + 24) = 15;
        *(_BYTE *)v72 = 0;
LABEL_140:
        if ( v118 > 0xF )
        {
          v74 = v115;
          if ( v118 + 1 >= 0x1000 )
          {
            if ( (unsigned __int64)((char *)v115 - (_BYTE *)*(v115 - 1) - 8) > 0x1F )
LABEL_151:
              __fastfail(5u);
            v74 = (void **)*(v115 - 1);
          }
          sub_1409DB4C0(lpMem: v74);
        }
LABEL_145:
        sub_1400899A0(a1: a4, a2: &v106, a3: 4294967294LL);
        if ( *((_QWORD *)&v107 + 1) <= 0xFu )
          return 1;
        v75 = *((_QWORD *)&v107 + 1) + 1LL;
        v76 = (_QWORD *)v106;
LABEL_147:
        if ( v75 >= 0x1000 )
        {
          if ( (unsigned __int64)v76 - *(v76 - 1) - 8 > 0x1F )
            __fastfail(5u);
          v76 = (_QWORD *)*(v76 - 1);
        }
        sub_1409DB4C0(lpMem: v76);
        return 1;
      default:
        return sub_1400FBBD0(a1, a2, a3: v6, a4, a5);
    }
    return 1;
  }
  switch ( (_DWORD)a3 )
  {
    case 0x1D53A:
      sub_1401FAD60(a1, a2: a5);
      return 1;
    case 0x3FB:
    case 0x407:
      if ( (unsigned __int8)sub_1400AE640(a1) == 0 )
        return sub_1400FBBD0(a1, a2, a3: v6, a4, a5);
      v28 = sub_1400AF100();
      v108 = &PXEngine::SafeActorPtr::`vftable';
      v109 = 0xBADF00D00000000LL;
      sub_1405F1D40(a1: v103, a2: a1 + 120);
      v104 = &PXEngine::SafeActorPtr::`vftable';
      v105[0] = 0;
      v105[1] = 195948557;
      v29 = sub_1405FD6C0(
              a1: v28,
              a2: (unsigned int)&v115,
              a3: (unsigned int)v103,
              a4: (unsigned int)"global/InRace",
              a5: (__int64)&v104,
              a6: (__int64)&v108,
              a7: 0,
              a8: 0,
              a9: 0);
      if ( (unsigned __int8)sub_1406006A0(a1: v28, a2: v29, a3: 91) != 0 )
      {
        sub_1405F1D60(a1: &v99, a2: *(unsigned int *)(v29 + 12), a3: *(unsigned int *)(v29 + 8));
      }
      else
      {
        v100 = 0;
        v101 = 195948557;
      }
      v99 = &PXEngine::SafeActorPtrAs<CPXData>::`vftable';
      if ( (unsigned __int8)sub_1405F1E20(a1: &v99) != 0 )
      {
        v30 = sub_1405F1EE0(a1: (__int64)&v99);
        if ( v30 == 0 )
        {
          if ( (unsigned __int8)sub_140059CA0(a1: off_140F4EB58) != 0 )
            __debugbreak();
          sub_1409E29B8(a1: 999);
          __debugbreak();
        }
        if ( (unsigned int)sub_14007F310(a1: v30 + 152, a2: 0) != 1 )
          return sub_1400FBBD0(a1, a2, a3: v6, a4, a5);
      }
      return 1;
    case 0x40D:
      v27 = sub_1400FBBD0(a1, a2, a3: 1037, a4, a5);
      sub_1401FC1A0(a1, a2);
      return v27;
    case 0x1D505:
      v25 = *(_DWORD *)(a1 + 332) - *(_DWORD *)(a1 + 328);
      v26 = 0;
      if ( v25 != 0 )
        v26 = v25;
      sub_1400899F0(a1: a4, a2: *(_DWORD *)(a1 + 324) + (unsigned int)(v26 != 0), a3: 4294967294LL);
      return 1;
    default:
      break;
  }
  if ( (_DWORD)a3 != 120085 )
    return sub_1400FBBD0(a1, a2, a3: v6, a4, a5);
  v9 = sub_140619130(a1: a2);
  v10 = sub_1403C4670(a1: v103, a2: v9);
  v11 = sub_1405F1EE0(a1: v10);
  if ( v11 != 0 )
  {
    sub_1400895F0(a1: a4, a2: &v104, a3: 0);
    v12 = sub_140081CC0(a1: &v104, a2: 0);
    v13 = sub_1400332E0(a1: v11, a2: v12);
    v14 = v13;
    if ( v13 == 0 )
    {
      v15 = 0;
      goto LABEL_25;
    }
    if ( *(_DWORD *)(v13 + 296) != 1 )
    {
      v15 = (unsigned int)sub_14007F310(a1: v13 + 232, a2: 0);
LABEL_25:
      sub_140089840(a1: a4, a2: v15, a3: 4294967294LL);
      sub_1400778C0(a1: &v104);
      return 1;
    }
    v16 = *(_DWORD *)(a1 + 16);
    v17 = (void **)(v13 + 216);
    v18 = *(_QWORD *)(v13 + 216);
    v19 = *(_QWORD *)(v18 + 8);
    if ( *(_BYTE *)(v19 + 25) != 0 )
    {
      v21 = 0;
      v20 = *(void ***)(v18 + 8);
    }
    else
    {
      do
      {
        v20 = (void **)v19;
        if ( *(_DWORD *)(v19 + 32) >= v16 )
        {
          v21 = 1;
          v18 = v19;
          v19 = *(_QWORD *)v19;
        }
        else
        {
          v21 = 0;
          v19 = *(_QWORD *)(v19 + 16);
        }
      }
      while ( *(_BYTE *)(v19 + 25) == 0 );
    }
    if ( *(_BYTE *)(v18 + 25) == 0 && v16 >= *(_DWORD *)(v18 + 32) )
    {
LABEL_23:
      v15 = (unsigned int)sub_14007F310(a1: *(_QWORD *)(v18 + 40), a2: 0);
      goto LABEL_25;
    }
    if ( *(_QWORD *)(v14 + 224) != 0x555555555555555LL )
    {
      v22 = *v17;
      v108 = v17;
      v109 = 0;
      v23 = sub_1409DB470(a1: 48);
      *(_DWORD *)(v23 + 32) = v16;
      *(_QWORD *)(v23 + 40) = 0;
      *(_QWORD *)v23 = v22;
      *(_QWORD *)(v23 + 8) = v22;
      *(_QWORD *)(v23 + 16) = v22;
      *(_WORD *)(v23 + 24) = 0;
      v108 = v20;
      v109 = __PAIR64__(HIDWORD(v116), v21);
      v18 = sub_14005A200(a1: v17, a2: &v108, a3: v23);
      goto LABEL_23;
    }
LABEL_186:
    sub_14005A5D0();
  }
  sub_140089840(a1: a4, a2: 0, a3: 4294967294LL);
  return 1;
}