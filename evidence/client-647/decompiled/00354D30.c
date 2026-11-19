__int64 __fastcall sub_140354D30(__int64 a1, __int64 a2, unsigned int a3, int *a4, __int64 a5)
{
  int v8; // eax
  __int64 v9; // rax
  int v10; // ecx
  unsigned int *v11; // rdx
  __int64 v12; // r8
  unsigned __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  void *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  unsigned int v31; // edx
  int v32; // ebx
  _QWORD *v33; // rdx
  bool v34; // cc
  unsigned int v35; // edx
  __int64 *ii; // rax
  _BYTE *v38; // rcx
  __int64 *jj; // rcx
  int *v40; // rcx
  int *v41; // rdx
  __int64 v42; // rax
  __int64 v43; // r14
  int v44; // eax
  unsigned int v45; // r8d
  __int64 *v46; // rax
  __int64 *v47; // rcx
  __int64 *v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rbx
  __int64 v51; // rax
  __int64 v52; // rbx
  __int64 v53; // rax
  __int64 v54; // rbx
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rbx
  __int64 v62; // r14
  __int64 v63; // rax
  __int64 v64; // rbx
  __int64 v65; // r14
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rbx
  __int64 v69; // r14
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rbx
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // r14
  int v77; // ecx
  __int64 v78; // rax
  char *v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // r14
  unsigned int v88; // ebx
  __int64 v89; // rax
  __int64 v90; // rbx
  __int64 v91; // r14
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rbx
  __int64 v95; // r14
  __int64 v96; // rax
  __int64 v97; // rax
  bool v98; // zf
  int v99; // eax
  __int64 v100; // rbx
  __int64 v101; // r14
  __int64 v102; // rax
  __int64 v103; // r14
  __int64 v104; // rax
  int v105; // r15d
  _QWORD *i; // rbx
  _DWORD *v107; // rdx
  __int64 v108; // rbx
  __int64 v109; // r14
  __int64 v110; // rax
  __int64 v111; // rbx
  unsigned int v112; // eax
  __int64 v113; // rdx
  __int64 v114; // rbx
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // r14
  __int64 v120; // rax
  int v121; // r15d
  __int64 *j; // rbx
  __int64 v123; // rax
  __int64 v124; // rbx
  __int64 v125; // r14
  __int64 v126; // rax
  __int64 v127; // rbx
  __int64 v128; // rax
  __int64 v129; // rbx
  __int64 v130; // rax
  __int64 v131; // rbx
  __int64 v132; // r14
  __int64 v133; // rax
  __int64 v134; // rbx
  __int64 v135; // rax
  __int64 v136; // rbx
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rcx
  __int64 v140; // rbx
  __int64 v141; // rax
  __int64 v142; // rcx
  __int64 v143; // rbx
  __int64 v144; // rax
  __int64 v145; // rax
  __int64 v146; // rax
  __int64 v147; // rax
  __int64 v148; // r14
  __int64 v149; // rbx
  __int64 v150; // r15
  __int64 v151; // r8
  __int64 v152; // rdx
  int v153; // ecx
  unsigned int v154; // ecx
  __int64 *k; // rdx
  _BYTE *v156; // rax
  __int64 *m; // rax
  __int64 v158; // rax
  __int64 v159; // rax
  __int64 v160; // rax
  int *v161; // rax
  __int64 v162; // rbx
  __int64 v163; // r14
  __int64 v164; // rax
  __int64 v165; // rbx
  unsigned int v166; // eax
  __int64 v167; // rdx
  __int64 v168; // rax
  __int64 v169; // rax
  __int64 v170; // rax
  __int64 v171; // rax
  __int64 v172; // rbx
  __int64 v173; // rax
  unsigned int v174; // edx
  int *v175; // rax
  _BYTE *v176; // rcx
  __int64 *n; // rcx
  char **v178; // rcx
  int v179; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v180[16]; // [rsp+38h] [rbp-C8h] BYREF
  void **v181; // [rsp+48h] [rbp-B8h] BYREF
  int v182; // [rsp+50h] [rbp-B0h]
  int v183; // [rsp+54h] [rbp-ACh]
  void **v184; // [rsp+58h] [rbp-A8h] BYREF
  int v185; // [rsp+60h] [rbp-A0h]
  int v186; // [rsp+64h] [rbp-9Ch]
  void **v187; // [rsp+68h] [rbp-98h] BYREF
  int v188; // [rsp+70h] [rbp-90h]
  int v189; // [rsp+74h] [rbp-8Ch]
  void **v190; // [rsp+78h] [rbp-88h] BYREF
  int v191; // [rsp+80h] [rbp-80h]
  int v192; // [rsp+84h] [rbp-7Ch]
  void **v193; // [rsp+88h] [rbp-78h] BYREF
  int v194; // [rsp+90h] [rbp-70h]
  int v195; // [rsp+94h] [rbp-6Ch]
  void **v196; // [rsp+98h] [rbp-68h] BYREF
  int v197; // [rsp+A0h] [rbp-60h]
  int v198; // [rsp+A4h] [rbp-5Ch]
  void **v199; // [rsp+A8h] [rbp-58h] BYREF
  int v200; // [rsp+B0h] [rbp-50h]
  int v201; // [rsp+B4h] [rbp-4Ch]
  void **v202; // [rsp+B8h] [rbp-48h] BYREF
  int v203; // [rsp+C0h] [rbp-40h]
  int v204; // [rsp+C4h] [rbp-3Ch]
  void **v205; // [rsp+C8h] [rbp-38h] BYREF
  int v206; // [rsp+D0h] [rbp-30h]
  int v207; // [rsp+D4h] [rbp-2Ch]
  void **v208; // [rsp+D8h] [rbp-28h] BYREF
  int v209; // [rsp+E0h] [rbp-20h]
  int v210; // [rsp+E4h] [rbp-1Ch]
  void **v211; // [rsp+E8h] [rbp-18h] BYREF
  int v212; // [rsp+F0h] [rbp-10h]
  int v213; // [rsp+F4h] [rbp-Ch]
  _QWORD v214[3]; // [rsp+F8h] [rbp-8h] BYREF
  int v215; // [rsp+110h] [rbp+10h]
  __int128 v216; // [rsp+118h] [rbp+18h] BYREF
  __int64 v217; // [rsp+128h] [rbp+28h]
  __int128 v218; // [rsp+130h] [rbp+30h] BYREF
  __int64 v219; // [rsp+140h] [rbp+40h]
  __int128 v220; // [rsp+148h] [rbp+48h] BYREF
  __int64 v221; // [rsp+158h] [rbp+58h]
  __int16 v222; // [rsp+160h] [rbp+60h]
  _BYTE v223[32]; // [rsp+168h] [rbp+68h] BYREF
  __int16 v224; // [rsp+188h] [rbp+88h] BYREF
  char v225[32]; // [rsp+190h] [rbp+90h] BYREF
  char v226; // [rsp+1B0h] [rbp+B0h]
  char v227[16]; // [rsp+1B8h] [rbp+B8h] BYREF
  char v228[16]; // [rsp+1C8h] [rbp+C8h] BYREF
  char v229[16]; // [rsp+1D8h] [rbp+D8h] BYREF
  char v230[16]; // [rsp+1E8h] [rbp+E8h] BYREF
  char v231[16]; // [rsp+1F8h] [rbp+F8h] BYREF
  char v232; // [rsp+208h] [rbp+108h] BYREF
  char v233[16]; // [rsp+218h] [rbp+118h] BYREF
  char v234[16]; // [rsp+228h] [rbp+128h] BYREF
  char v235[16]; // [rsp+238h] [rbp+138h] BYREF
  char v236[16]; // [rsp+248h] [rbp+148h] BYREF
  char v237[16]; // [rsp+258h] [rbp+158h] BYREF
  char v238[16]; // [rsp+268h] [rbp+168h] BYREF
  char v239[16]; // [rsp+278h] [rbp+178h] BYREF
  char v240[16]; // [rsp+288h] [rbp+188h] BYREF
  char v241[16]; // [rsp+298h] [rbp+198h] BYREF
  char v242[16]; // [rsp+2A8h] [rbp+1A8h] BYREF
  char v243[16]; // [rsp+2B8h] [rbp+1B8h] BYREF
  char v244[16]; // [rsp+2C8h] [rbp+1C8h] BYREF
  char v245[16]; // [rsp+2D8h] [rbp+1D8h] BYREF
  char v246[16]; // [rsp+2E8h] [rbp+1E8h] BYREF
  char v247[16]; // [rsp+2F8h] [rbp+1F8h] BYREF
  char v248[16]; // [rsp+308h] [rbp+208h] BYREF
  char v249[16]; // [rsp+318h] [rbp+218h] BYREF
  char v250; // [rsp+328h] [rbp+228h] BYREF
  char v251[88]; // [rsp+338h] [rbp+238h] BYREF

  if ( a3 > 0x29040 )
  {
    switch ( a3 )
    {
      case 0x29041u:
        sub_14034F400(a1);
        return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
      case 0x29042u:
        byte_14138DFD4 = 1;
        if ( sub_140636E40() != 0 )
        {
          v42 = sub_140636E40();
          sub_14063C030(a1: v42, a2: 0);
        }
        v43 = sub_1405F1EE0(a1: (__int64)&off_141313B68);
        if ( v43 != 0 )
        {
          v44 = *(_DWORD *)(a1 + 680);
          if ( v44 != 0 )
          {
            v45 = *(_DWORD *)(v43 + 1720);
            if ( v44 != v45 )
            {
              v46 = *(__int64 **)(a1 + 688);
              v47 = (__int64 *)v46[1];
              v48 = v46;
              while ( *((_BYTE *)v47 + 25) == 0 )
              {
                if ( *((_DWORD *)v47 + 8) >= v45 )
                {
                  v48 = v47;
                  v47 = (__int64 *)*v47;
                }
                else
                {
                  v47 = (__int64 *)v47[2];
                }
              }
              if ( *((_BYTE *)v48 + 25) != 0 || v45 < *((_DWORD *)v48 + 8) || v48 == v46 )
              {
                if ( sub_1405F1EE0(a1: v43 + 1856) == 0 || (unsigned __int8)sub_140787430(a1: v43) != 0 )
                {
                  v50 = *(_QWORD *)v43;
                  v51 = sub_1405F1EE0(a1: (__int64)&off_141310F50);
                  (*(void (__fastcall **)(__int64, __int64))(v50 + 968))(a1: v43, a2: v51);
                }
                v52 = *(_QWORD *)a1;
                v53 = sub_1400FBAF0(a1: v49);
                (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64))(v52 + 776))(a1, a2: 168020, a3: 0, a4: v53);
                v54 = *(_QWORD *)a1;
                v56 = sub_1400FBAF0(a1: v55);
                (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64))(v54 + 776))(a1, a2: 168021, a3: 0, a4: v56);
                *(_BYTE *)(a1 + 260) = 1;
                sub_14034DAC0(a1: a1 + 648);
              }
            }
          }
        }
        return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
      case 0x29043u:
        *a4 = dword_14138DFD0;
        return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
      case 0x29044u:
        *a4 = (unsigned __int8)sub_1403523E0(a1);
        return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
      case 0x29045u:
        v57 = sub_140619130(a1: a2);
        v58 = sub_14014F8D0(a1: v57, a2: v230);
        if ( (unsigned __int8)sub_1405F1E20(a1: v58) != 0 )
          sub_14034D790(a1, a2: (unsigned int)*a4);
        return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
      case 0x29046u:
        v59 = sub_140619130(a1: a2);
        v60 = sub_14014F8D0(a1: v59, a2: v231);
        if ( (unsigned __int8)sub_1405F1E20(a1: v60) != 0 )
        {
          v61 = qword_14138A6F0;
          if ( qword_14138A6F0 == 0 )
          {
            if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
              __debugbreak();
            sub_1409E29B8(a1: 999);
            __debugbreak();
          }
          v62 = sub_1405FD2E0(a1: qword_14138A6F0, a2: v249, a3: "PlayerItemManager");
          if ( (unsigned __int8)sub_1406006A0(a1: v61, a2: v62, a3: 163) != 0 )
          {
            sub_1405F1D60(a1: &v181, a2: *(unsigned int *)(v62 + 12), a3: *(unsigned int *)(v62 + 8));
          }
          else
          {
            v182 = 0;
            v183 = 195948557;
          }
          v181 = &PXEngine::SafeActorPtrAs<CPXPlayerItemManager>::`vftable';
          v63 = sub_1405F1EE0(a1: (__int64)&v181);
          if ( v63 != 0 )
            sub_1402F7420(a1: v63, a2: 0x3CECu, a3: 4);
        }
        return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
      case 0x29047u:
        *a4 = *(_DWORD *)(a1 + 424);
        return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
      case 0x29048u:
        v64 = sub_140619130(a1: a2);
        v65 = sub_1405FD2E0(a1: v64, a2: v248, a3: "PlayerItemManager");
        if ( (unsigned __int8)sub_1406006A0(a1: v64, a2: v65, a3: 163) != 0 )
        {
          sub_1405F1D60(a1: &v184, a2: *(unsigned int *)(v65 + 12), a3: *(unsigned int *)(v65 + 8));
        }
        else
        {
          v185 = 0;
          v186 = 195948557;
        }
        v184 = &PXEngine::SafeActorPtrAs<CPXPlayerItemManager>::`vftable';
        v66 = sub_1405F1EE0(a1: (__int64)&v184);
        if ( v66 != 0 )
        {
          v67 = sub_140152350(a1: v66, a2: "BuyStableCareDaySmall");
          if ( v67 != 0 )
            *a4 = (int)(*(float (__fastcall **)(__int64))(*(_QWORD *)v67 + 888LL))(a1: v67);
        }
        return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
      case 0x29049u:
        v68 = sub_140619130(a1: a2);
        v69 = sub_1405FD2E0(a1: v68, a2: v247, a3: "Network");
        if ( (unsigned __int8)sub_1406006A0(a1: v68, a2: v69, a3: 122) != 0 )
        {
          sub_1405F1D60(a1: &v187, a2: *(unsigned int *)(v69 + 12), a3: *(unsigned int *)(v69 + 8));
        }
        else
        {
          v188 = 0;
          v189 = 195948557;
        }
        v187 = &PXEngine::SafeActorPtrAs<CPXNetwork>::`vftable';
        if ( (unsigned __int8)sub_1405F1E20(a1: &v187) != 0 )
          sub_140358EF0(a1);
        return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
      case 0x2904Au:
        *(_OWORD *)(a1 + 280) = *(_OWORD *)a4;
        return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
      case 0x2904Bu:
        *(_OWORD *)a4 = *(_OWORD *)(a1 + 280);
        return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
      case 0x2904Cu:
        *(_OWORD *)(a1 + 296) = *(_OWORD *)a4;
        return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
      case 0x2904Du:
        *(_OWORD *)a4 = *(_OWORD *)(a1 + 296);
        return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
      case 0x2904Eu:
        *(_OWORD *)(a1 + 312) = *(_OWORD *)a4;
        return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
      case 0x2904Fu:
        *(_OWORD *)a4 = *(_OWORD *)(a1 + 312);
        return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
      case 0x29050u:
        *(_OWORD *)(a1 + 328) = *(_OWORD *)a4;
        return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
      case 0x29051u:
        *(_OWORD *)a4 = *(_OWORD *)(a1 + 328);
        return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
      case 0x2905Du:
        if ( sub_1406193D0(a1: a2) == 0 )
          return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
        sub_1406193D0(a1: a2);
        v70 = sub_140619130(a1: a2);
        v71 = sub_1403A82D0(a1: v241, a2: v70);
        v72 = sub_1405F1EE0(a1: v71);
        v73 = v72;
        if ( v72 == 0 )
          return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
        if ( sub_1403A83A0(a1: v72) != 0 )
        {
          v74 = sub_140619130(a1: a2);
          v75 = sub_1400D83A0(a1: v74, a2: v246);
          v76 = sub_1405F1EE0(a1: v75);
          if ( v76 == 0 )
          {
            v178 = off_140F76F50;
LABEL_342:
            if ( (unsigned __int8)sub_140059CA0(a1: v178) != 0 )
              __debugbreak();
            sub_1409E29B8(a1: 999);
            __debugbreak();
          }
          v77 = *(_DWORD *)(sub_1403A83A0(a1: v73) + 16);
          v214[1] = 0;
          v214[2] = 0;
          v215 = 0;
          v214[0] = &PXEngine::ByteStreamWriter::`vftable';
          v179 = v77;
          if ( sub_1401D0820(a1: v214, a2: &v179) != 0 )
          {
            v222 = word_141313CE8;
            sub_140A255B0(a1: v223, a2: v214);
            v224 = v222;
            sub_140A255B0(a1: v225, a2: v223);
            v226 = 1;
            sub_140A25690(a1: v223);
          }
          else
          {
            v226 = 0;
          }
          sub_140A25690(a1: v214);
          sub_1407D6C20(a1: v76, a2: &v224);
        }
        else if ( (unsigned __int8)sub_140059D90(
                                     a1: off_140F76F90,
                                     a2: "Missing room template before calling upgrade stable") != 0 )
        {
          __debugbreak();
        }
        break;
      case 0x2905Eu:
      case 0x2905Fu:
        if ( (unsigned __int8)sub_14034C6F0(a1) != 0 )
        {
          *a4 = *(_DWORD *)(a1 + 684);
          return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
        }
        v78 = sub_1405F1EE0(a1: (__int64)&off_141313B68);
        if ( v78 == 0 )
          goto LABEL_193;
        *a4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v78 + 928LL))(a1: v78);
        return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
      case 0x29060u:
        *a4 = (__int64)(*(_QWORD *)(a1 + 160) - *(_QWORD *)(a1 + 152)) >> 4;
        return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
      case 0x29061u:
        *a4 = (*(_QWORD *)(a1 + 192) - *(_QWORD *)(a1 + 184)) / 320LL;
        return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
      case 0x29062u:
        *a4 = (*(_QWORD *)(a1 + 192) - *(_QWORD *)(a1 + 184)) / 320LL
            + ((__int64)(*(_QWORD *)(a1 + 160) - *(_QWORD *)(a1 + 152)) >> 4);
        return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
      case 0x29063u:
        *(_DWORD *)(a1 + 704) = *a4;
        sub_140619130(a1: a2);
        v79 = &v250;
        goto LABEL_164;
      case 0x29064u:
        sub_140619130(a1: a2);
        v79 = &v232;
LABEL_164:
        v80 = sub_1403AB8B0(a1: v79);
        v81 = sub_1405F1EE0(a1: v80);
        if ( v81 != 0 )
          sub_1403AD430(a1: v81);
        return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
      case 0x29065u:
        v82 = sub_14018FA40();
        if ( v82 != 0 )
        {
          LOBYTE(v83) = 1;
          *a4 = *(_DWORD *)(sub_1401E09C0(a1: v82, a2: v83) + 40) == *a4;
        }
        else
        {
          *a4 = 0;
        }
        return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
      case 0x29066u:
        *a4 = 1;
        return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
      case 0x29067u:
        *(_DWORD *)(a1 + 552) = -1;
        return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
      case 0x29068u:
        v84 = sub_140619130(a1: a2);
        v85 = sub_1400D83A0(a1: v84, a2: v233);
        v86 = sub_1405F1EE0(a1: v85);
        v87 = v86;
        if ( v86 != 0 )
        {
          v216 = 0;
          v217 = 0;
          v88 = 0;
          if ( (unsigned int)sub_1407B9C40(a1: v86) != 0 )
          {
            do
            {
              v89 = sub_1407B9C10(a1: v87, a2: v88);
              if ( v89 != 0 && *(_DWORD *)(v89 + 260) != 0 )
                sub_1400A9840(a1: &v216, a2: v89);
              ++v88;
            }
            while ( v88 < (unsigned int)sub_1407B9C40(a1: v87) );
          }
          sub_14035AA30(a1, a2: &v216);
          sub_14005BEF0(a1: &v216);
        }
        return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
      case 0x29069u:
        v90 = sub_140619130(a1: a2);
        v91 = sub_1405FD2E0(a1: v90, a2: v234, a3: "Network");
        if ( (unsigned __int8)sub_1406006A0(a1: v90, a2: v91, a3: 122) != 0 )
        {
          sub_1405F1D60(a1: &v190, a2: *(unsigned int *)(v91 + 12), a3: *(unsigned int *)(v91 + 8));
        }
        else
        {
          v191 = 0;
          v192 = 195948557;
        }
        v190 = &PXEngine::SafeActorPtrAs<CPXNetwork>::`vftable';
        v92 = sub_1405F1EE0(a1: (__int64)&v190);
        if ( v92 != 0 )
        {
          v93 = sub_1407B96B0(a1: v92, a2: *(unsigned int *)(a1 + 552));
          if ( v93 != 0 && *(_DWORD *)(v93 + 260) != 0 )
            sub_14035ACE0(a1);
        }
        return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
      case 0x2906Au:
        v94 = sub_140619130(a1: a2);
        v95 = sub_1405FD2E0(a1: v94, a2: v235, a3: "Network");
        if ( (unsigned __int8)sub_1406006A0(a1: v94, a2: v95, a3: 122) != 0 )
        {
          sub_1405F1D60(a1: &v193, a2: *(unsigned int *)(v95 + 12), a3: *(unsigned int *)(v95 + 8));
        }
        else
        {
          v194 = 0;
          v195 = 195948557;
        }
        v193 = &PXEngine::SafeActorPtrAs<CPXNetwork>::`vftable';
        v96 = sub_1405F1EE0(a1: (__int64)&v193);
        if ( v96 == 0 )
          goto LABEL_193;
        v97 = sub_1407B96B0(a1: v96, a2: *(unsigned int *)(a1 + 552));
        if ( v97 == 0 )
          goto LABEL_193;
        v98 = *(_DWORD *)(v97 + 260) == 0;
        goto LABEL_192;
      case 0x2906Bu:
        v100 = sub_140619130(a1: a2);
        v101 = sub_1405FD2E0(a1: v100, a2: v236, a3: "Network");
        if ( (unsigned __int8)sub_1406006A0(a1: v100, a2: v101, a3: 122) != 0 )
        {
          sub_1405F1D60(a1: &v196, a2: *(unsigned int *)(v101 + 12), a3: *(unsigned int *)(v101 + 8));
        }
        else
        {
          v197 = 0;
          v198 = 195948557;
        }
        v196 = &PXEngine::SafeActorPtrAs<CPXNetwork>::`vftable';
        v102 = sub_1405F1EE0(a1: (__int64)&v196);
        if ( v102 != 0 )
        {
          v103 = *(_QWORD *)(v102 + 1504);
          if ( v103 != 0 )
          {
            v104 = sub_1405F1EE0(a1: (__int64)&off_141313B68);
            if ( v104 == 0 )
            {
              if ( (unsigned __int8)sub_140059CA0(a1: off_140F4EF78) != 0 )
                __debugbreak();
              sub_1409E29B8(a1: 999);
              __debugbreak();
            }
            v105 = *(_DWORD *)(v104 + 1720);
            v220 = 0;
            v221 = 0;
            for ( i = *(_QWORD **)(v103 + 64); i != *(_QWORD **)(v103 + 72); ++i )
            {
              v107 = (_DWORD *)(*i + 4LL);
              if ( *v107 != v105 )
                sub_1400A9840(a1: &v220, a2: v107);
            }
            sub_14035AA30(a1, a2: &v220);
            sub_14005BEF0(a1: &v220);
          }
        }
        return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
      case 0x2906Cu:
        v108 = sub_140619130(a1: a2);
        v109 = sub_1405FD2E0(a1: v108, a2: v237, a3: "Network");
        if ( (unsigned __int8)sub_1406006A0(a1: v108, a2: v109, a3: 122) != 0 )
        {
          sub_1405F1D60(a1: &v199, a2: *(unsigned int *)(v109 + 12), a3: *(unsigned int *)(v109 + 8));
        }
        else
        {
          v200 = 0;
          v201 = 195948557;
        }
        v199 = &PXEngine::SafeActorPtrAs<CPXNetwork>::`vftable';
        v110 = sub_1405F1EE0(a1: (__int64)&v199);
        if ( v110 == 0 )
          return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
        v111 = *(_QWORD *)(v110 + 1504);
        if ( v111 == 0 )
          return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
        v112 = sub_1407F6B70(a1: *(_QWORD *)(v110 + 1504));
        v113 = *(unsigned int *)(a1 + 552);
        if ( (unsigned int)v113 >= v112 )
          return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
        v114 = sub_1407F6B40(a1: v111, a2: v113);
        if ( v114 == 0 )
          return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
        v115 = sub_1405F1EE0(a1: (__int64)&off_141313B68);
        if ( v115 == 0 )
          goto LABEL_341;
        if ( *(_DWORD *)(v114 + 4) != *(_DWORD *)(v115 + 1720) )
          sub_14035ACE0(a1);
        return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
      case 0x2906Du:
        v116 = sub_140619130(a1: a2);
        v117 = sub_140347430(a1: v116, a2: v238);
        v118 = sub_1405F1EE0(a1: v117);
        if ( v118 != 0 )
        {
          v119 = *(_QWORD *)(v118 + 1176);
          if ( v119 != 0 )
          {
            v120 = sub_1405F1EE0(a1: (__int64)&off_141313B68);
            if ( v120 == 0 )
            {
              if ( (unsigned __int8)sub_140059CA0(a1: off_140F4EF78) != 0 )
                __debugbreak();
              sub_1409E29B8(a1: 999);
              __debugbreak();
            }
            v121 = *(_DWORD *)(v120 + 1720);
            v218 = 0;
            v219 = 0;
            for ( j = *(__int64 **)(v119 + 80); j != *(__int64 **)(v119 + 88); ++j )
            {
              v123 = *j;
              if ( *(_DWORD *)(*j + 28) != 0 && *(_DWORD *)(v123 + 16) != v121 )
                sub_1400A9840(a1: &v218, a2: v123 + 16);
            }
            sub_14035AA30(a1, a2: &v218);
            sub_14005BEF0(a1: &v218);
          }
        }
        return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
      case 0x2906Eu:
        v124 = sub_140619130(a1: a2);
        v125 = sub_1405FD2E0(a1: v124, a2: v239, a3: "ClubManager");
        if ( (unsigned __int8)sub_1406006A0(a1: v124, a2: v125, a3: 287) != 0 )
        {
          sub_1405F1D60(a1: &v202, a2: *(unsigned int *)(v125 + 12), a3: *(unsigned int *)(v125 + 8));
        }
        else
        {
          v203 = 0;
          v204 = 195948557;
        }
        v202 = &PXEngine::SafeActorPtrAs<PXEngine::ClubManager>::`vftable';
        v126 = sub_1405F1EE0(a1: (__int64)&v202);
        if ( v126 == 0 )
          return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
        v127 = *(_QWORD *)(v126 + 1176);
        if ( v127 == 0 )
          return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
        if ( *(_DWORD *)(a1 + 552) >= (unsigned int)sub_140453400(a1: *(_QWORD *)(v126 + 1176)) )
          return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
        v128 = sub_1404533E0(a1: v127);
        v129 = v128;
        if ( v128 == 0 || *(_DWORD *)(v128 + 28) == 0 )
          return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
        v130 = sub_1405F1EE0(a1: (__int64)&off_141313B68);
        if ( v130 == 0 )
          goto LABEL_341;
        if ( *(_DWORD *)(v129 + 16) != *(_DWORD *)(v130 + 1720) )
          sub_14035ACE0(a1);
        return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
      case 0x2906Fu:
        v131 = sub_140619130(a1: a2);
        v132 = sub_1405FD2E0(a1: v131, a2: v240, a3: "ClubManager");
        if ( (unsigned __int8)sub_1406006A0(a1: v131, a2: v132, a3: 287) != 0 )
        {
          sub_1405F1D60(a1: &v205, a2: *(unsigned int *)(v132 + 12), a3: *(unsigned int *)(v132 + 8));
        }
        else
        {
          v206 = 0;
          v207 = 195948557;
        }
        v205 = &PXEngine::SafeActorPtrAs<PXEngine::ClubManager>::`vftable';
        v133 = sub_1405F1EE0(a1: (__int64)&v205);
        if ( v133 == 0 )
          goto LABEL_193;
        v134 = *(_QWORD *)(v133 + 1176);
        if ( v134 == 0 )
          goto LABEL_193;
        if ( *(_DWORD *)(a1 + 552) >= (unsigned int)sub_140453400(a1: *(_QWORD *)(v133 + 1176)) )
          goto LABEL_193;
        v135 = sub_1404533E0(a1: v134);
        v136 = v135;
        if ( v135 == 0 || *(_DWORD *)(v135 + 28) == 0 )
          goto LABEL_193;
        v137 = sub_1405F1EE0(a1: (__int64)&off_141313B68);
        if ( v137 != 0 )
        {
          v98 = *(_DWORD *)(v136 + 16) == *(_DWORD *)(v137 + 1720);
LABEL_192:
          v99 = 1;
          if ( v98 )
LABEL_193:
            v99 = 0;
          *a4 = v99;
          return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
        }
LABEL_341:
        v178 = off_140F4EF78;
        goto LABEL_342;
      case 0x29070u:
        v138 = sub_1405F1EE0(a1: (__int64)&off_141313B68);
        if ( v138 != 0 && *(_DWORD *)(a1 + 680) != 0 )
        {
          if ( dword_14138DFD0 != 0 )
          {
            v140 = *(_QWORD *)a1;
            v141 = sub_1400FBAF0(a1: v139);
            (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64))(v140 + 776))(a1, a2: 168024, a3: 0, a4: v141);
          }
          else if ( (unsigned __int8)sub_140787480(a1: v138) != 0 )
          {
            if ( *(_QWORD *)&nExitCode != 0 )
            {
              v145 = sub_1400AF100();
              v146 = sub_1400D83A0(a1: v145, a2: v251);
              v147 = sub_1405F1EE0(a1: v146);
              if ( v147 != 0 )
                sub_1407D64B0(a1: v147, a2: a1 + 648);
            }
          }
          else
          {
            v143 = *(_QWORD *)a1;
            v144 = sub_1400FBAF0(a1: v142);
            (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64))(v143 + 776))(a1, a2: 168023, a3: 0, a4: v144);
          }
        }
        return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
      case 0x29071u:
        if ( *(_DWORD *)(a1 + 680) != 0 )
          sub_14034EA80(a1);
        return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
      case 0x29072u:
        sub_14035EA50(a1, a2: (unsigned int)*a4);
        return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
      case 0x29073u:
        *(_DWORD *)(a1 + 592) = -1;
        return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
      case 0x29074u:
        if ( *(_QWORD *)&nExitCode == 0 )
          return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
        v148 = sub_1405F1EE0(a1: (__int64)&off_141313B68);
        if ( v148 == 0 )
          return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
        v149 = qword_14138A6F0;
        if ( qword_14138A6F0 == 0 )
        {
          if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
            __debugbreak();
          sub_1409E29B8(a1: 999);
          __debugbreak();
        }
        v150 = sub_1405FD2E0(a1: qword_14138A6F0, a2: v242, a3: "Network");
        if ( (unsigned __int8)sub_1406006A0(a1: v149, a2: v150, a3: 122) != 0 )
        {
          sub_1405F1D60(a1: &v208, a2: *(unsigned int *)(v150 + 12), a3: *(unsigned int *)(v150 + 8));
        }
        else
        {
          v209 = 0;
          v210 = 195948557;
        }
        v208 = &PXEngine::SafeActorPtrAs<CPXNetwork>::`vftable';
        v151 = sub_1405F1EE0(a1: (__int64)&v208);
        if ( v151 == 0 )
          return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
        v152 = *(unsigned int *)(a1 + 680);
        if ( (_DWORD)v152 == 0 || (_DWORD)v152 != *(_DWORD *)(v148 + 1720) )
          return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
        v153 = *(_DWORD *)(a1 + 592);
        if ( v153 == 0 )
          goto LABEL_280;
        v154 = v153 - 1;
        if ( (unsigned __int64)v154 < *(_QWORD *)(a1 + 696) )
        {
          for ( k = **(__int64 ***)(a1 + 688); v154 != 0; --v154 )
          {
            v156 = (_BYTE *)k[2];
            if ( v156[25] != 0 )
            {
              for ( m = (__int64 *)k[1]; *((_BYTE *)m + 25) == 0; m = (__int64 *)m[1] )
              {
                if ( k != (__int64 *)m[2] )
                  break;
                k = m;
              }
              k = m;
            }
            else
            {
              k = (__int64 *)k[2];
              if ( *(_BYTE *)(*(_QWORD *)v156 + 25LL) == 0 )
              {
                do
                  k = (__int64 *)*k;
                while ( *(_BYTE *)(*k + 25) == 0 );
              }
            }
          }
          v152 = *((unsigned int *)k + 8);
LABEL_280:
          sub_1407D6580(a1: v151, a2: v152);
        }
        return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
      case 0x29075u:
        *a4 = *(_DWORD *)(a1 + 680);
        return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
      case 0x29076u:
        v158 = sub_140619130(a1: a2);
        v159 = sub_1400D83A0(a1: v158, a2: v243);
        v160 = sub_1405F1EE0(a1: v159);
        if ( v160 == 0 )
          goto LABEL_193;
        v161 = (int *)sub_1407B96B0(a1: v160, a2: *(unsigned int *)(a1 + 552));
        if ( v161 == nullptr )
          goto LABEL_193;
        *a4 = *v161;
        return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
      case 0x29077u:
        v162 = sub_140619130(a1: a2);
        v163 = sub_1405FD2E0(a1: v162, a2: v244, a3: "Network");
        if ( (unsigned __int8)sub_1406006A0(a1: v162, a2: v163, a3: 122) != 0 )
        {
          sub_1405F1D60(a1: &v211, a2: *(unsigned int *)(v163 + 12), a3: *(unsigned int *)(v163 + 8));
        }
        else
        {
          v212 = 0;
          v213 = 195948557;
        }
        v211 = &PXEngine::SafeActorPtrAs<CPXNetwork>::`vftable';
        v164 = sub_1405F1EE0(a1: (__int64)&v211);
        if ( v164 == 0 )
          goto LABEL_193;
        v165 = *(_QWORD *)(v164 + 1504);
        if ( v165 == 0 )
          goto LABEL_193;
        v166 = sub_1407F6B70(a1: *(_QWORD *)(v164 + 1504));
        v167 = *(unsigned int *)(a1 + 552);
        if ( (unsigned int)v167 >= v166 )
          goto LABEL_193;
        v168 = sub_1407F6B40(a1: v165, a2: v167);
        if ( v168 == 0 )
          goto LABEL_193;
        *a4 = *(_DWORD *)(v168 + 4);
        return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
      case 0x29078u:
        v169 = sub_140619130(a1: a2);
        v170 = sub_140347430(a1: v169, a2: v245);
        v171 = sub_1405F1EE0(a1: v170);
        if ( v171 == 0 )
          goto LABEL_193;
        v172 = *(_QWORD *)(v171 + 1176);
        if ( v172 == 0 )
          goto LABEL_193;
        if ( *(_DWORD *)(a1 + 552) >= (unsigned int)sub_140453400(a1: *(_QWORD *)(v171 + 1176)) )
          goto LABEL_193;
        v173 = sub_1404533E0(a1: v172);
        if ( v173 == 0 )
          goto LABEL_193;
        *a4 = *(_DWORD *)(v173 + 16);
        return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
      case 0x29079u:
        v174 = *(_DWORD *)(a1 + 592) - 1;
        if ( (unsigned __int64)v174 >= *(_QWORD *)(a1 + 696) )
        {
          *a4 = 0;
        }
        else
        {
          v175 = **(int ***)(a1 + 688);
          if ( *(_DWORD *)(a1 + 592) != 1 )
          {
            do
            {
              v176 = *((_BYTE **)v175 + 2);
              if ( v176[25] != 0 )
              {
                for ( n = *((__int64 **)v175 + 1); *((_BYTE *)n + 25) == 0; n = (__int64 *)n[1] )
                {
                  if ( v175 != (int *)n[2] )
                    break;
                  v175 = (int *)n;
                }
                v175 = (int *)n;
              }
              else
              {
                v175 = *((int **)v175 + 2);
                if ( *(_BYTE *)(*(_QWORD *)v176 + 25LL) == 0 )
                {
                  do
                    v175 = *(int **)v175;
                  while ( *(_BYTE *)(*(_QWORD *)v175 + 25LL) == 0 );
                }
              }
              --v174;
            }
            while ( v174 != 0 );
          }
          *a4 = v175[8];
        }
        return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
      case 0x2907Au:
        *a4 = *(_DWORD *)(a1 + 596);
        return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
      case 0x2907Fu:
        v40 = (int *)(a1 + 712);
        v41 = a4;
        goto LABEL_326;
      case 0x29080u:
        v41 = (int *)(a1 + 712);
        goto LABEL_325;
      case 0x29082u:
        v40 = (int *)(a1 + 944);
        v41 = a4;
        goto LABEL_326;
      case 0x29083u:
        v41 = (int *)(a1 + 944);
        goto LABEL_325;
      case 0x29084u:
        v40 = (int *)(a1 + 976);
        v41 = a4;
        goto LABEL_326;
      case 0x29085u:
        v41 = (int *)(a1 + 976);
        goto LABEL_325;
      case 0x29086u:
        v40 = (int *)(a1 + 1008);
        v41 = a4;
        goto LABEL_326;
      case 0x29087u:
        v41 = (int *)(a1 + 1008);
        goto LABEL_325;
      case 0x29088u:
        v40 = (int *)(a1 + 1040);
        v41 = a4;
        goto LABEL_326;
      case 0x29089u:
        v41 = (int *)(a1 + 1040);
        goto LABEL_325;
      case 0x2908Au:
        v40 = (int *)(a1 + 1072);
        v41 = a4;
        goto LABEL_326;
      case 0x2908Bu:
        v41 = (int *)(a1 + 1072);
        goto LABEL_325;
      case 0x2908Cu:
        v40 = (int *)(a1 + 1104);
        v41 = a4;
        goto LABEL_326;
      case 0x2908Du:
        v41 = (int *)(a1 + 1104);
        goto LABEL_325;
      case 0x2908Eu:
        v40 = (int *)(a1 + 1136);
        v41 = a4;
        goto LABEL_326;
      case 0x2908Fu:
        v41 = (int *)(a1 + 1136);
LABEL_325:
        v40 = a4;
LABEL_326:
        sub_140018D10(a1: v40, a2: v41);
        return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
      default:
        return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
    }
    return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
  }
  if ( a3 == 168000 )
  {
    sub_14034EC20(a1);
    return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
  }
  if ( a3 != 40202 )
  {
    switch ( a3 )
    {
      case 0x9D0Bu:
        if ( (unsigned __int8)sub_1405F1E20(a1: a1 + 472) != 0 && a5 == sub_1405F1EE0(a1: a1 + 472) )
        {
          sub_14035CFC0(a1, a2: (unsigned int)*a4);
        }
        else
        {
          v9 = sub_1405F1EE0(a1: a1 + 576);
          v10 = *a4;
          if ( a5 == v9 )
            *(_DWORD *)(a1 + 592) = v10;
          else
            *(_DWORD *)(a1 + 552) = v10;
        }
        break;
      case 0x9D0Cu:
        if ( (unsigned __int8)sub_1405F1E20(a1: a1 + 472) != 0 && a5 == sub_1405F1EE0(a1: a1 + 472) )
        {
          *a4 = *(_DWORD *)(a1 + 448);
        }
        else
        {
          if ( a5 == sub_1405F1EE0(a1: a1 + 576) )
            v8 = *(_DWORD *)(a1 + 592);
          else
            v8 = *(_DWORD *)(a1 + 552);
          *a4 = v8;
        }
        break;
      case 0xBBB9u:
        a4[1] = a5 == sub_1405F1EE0(a1: a1 + 456) && *a4 == *(_DWORD *)(a1 + 448);
        break;
      default:
        break;
    }
    return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
  }
  if ( dword_14138E050 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 76LL) )
  {
    sub_1409DBBB0(a1: &dword_14138E050);
    if ( dword_14138E050 == -1 )
    {
      sub_1400775B0(a1: &unk_14138E040, a2: &String2);
      sub_1409DB700(a1: sub_140EDB760);
      sub_1409DBB40(a1: &dword_14138E050);
    }
  }
  if ( a5 == 0 )
    return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
  if ( a5 != sub_1405F1EE0(a1: a1 + 472) )
  {
    if ( a5 == sub_1405F1EE0(a1: a1 + 504) )
    {
      v16 = sub_140619130(a1: a2);
      v17 = sub_1400D83A0(a1: v16, a2: v227);
      v18 = sub_1405F1EE0(a1: v17);
      if ( v18 != 0 )
        v19 = sub_1407B96B0(a1: v18, a2: (unsigned int)a4[1]);
      else
        v19 = 0;
      if ( *a4 != 0 )
      {
        if ( *a4 != 1 )
          return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
        v20 = (void *)(v19 + 4);
        if ( v19 != 0 )
        {
LABEL_48:
          *((_QWORD *)a4 + 1) = v20;
          return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
        }
LABEL_47:
        v20 = &unk_140F76FB8;
        goto LABEL_48;
      }
      if ( v19 != 0 )
      {
        a4[6] = *(_DWORD *)(v19 + 260);
        return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
      }
    }
    else
    {
      if ( a5 == sub_1405F1EE0(a1: a1 + 520) )
      {
        v21 = sub_140619130(a1: a2);
        v22 = sub_1400D83A0(a1: v21, a2: v228);
        v23 = sub_1405F1EE0(a1: v22);
        if ( v23 != 0 && (v24 = *(_QWORD *)(v23 + 1504)) != 0 )
          v25 = sub_1407F6B40(a1: v24, a2: (unsigned int)a4[1]);
        else
          v25 = 0;
        if ( *a4 != 0 )
          return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
        if ( v25 != 0 )
        {
          *((_QWORD *)a4 + 1) = sub_14007F240(a1: v25 + 16);
          return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
        }
        goto LABEL_47;
      }
      if ( a5 != sub_1405F1EE0(a1: a1 + 536) )
      {
        if ( a5 == sub_1405F1EE0(a1: a1 + 576) )
        {
          sub_1400775B0(a1: v180, a2: &String2);
          sub_14007E430(a1: v180, a2: 65001);
          v31 = a4[1];
          if ( v31 != 0 )
          {
            v35 = v31 - 1;
            if ( (unsigned __int64)v35 >= *(_QWORD *)(a1 + 696) )
            {
              sub_1400778C0(a1: v180);
              return 0;
            }
            for ( ii = **(__int64 ***)(a1 + 688); v35 != 0; --v35 )
            {
              v38 = (_BYTE *)ii[2];
              if ( v38[25] != 0 )
              {
                for ( jj = (__int64 *)ii[1]; *((_BYTE *)jj + 25) == 0; jj = (__int64 *)jj[1] )
                {
                  if ( ii != (__int64 *)jj[2] )
                    break;
                  ii = jj;
                }
                ii = jj;
              }
              else
              {
                ii = (__int64 *)ii[2];
                if ( *(_BYTE *)(*(_QWORD *)v38 + 25LL) == 0 )
                {
                  do
                    ii = (__int64 *)*ii;
                  while ( *(_BYTE *)(*ii + 25) == 0 );
                }
              }
            }
            v32 = *((unsigned __int8 *)ii + 80);
            v33 = ii + 6;
            v34 = (unsigned __int64)ii[9] <= 0xF;
          }
          else
          {
            v32 = 2;
            v33 = (_QWORD *)(a1 + 648);
            v34 = *(_QWORD *)(a1 + 672) <= 0xFu;
          }
          if ( !v34 )
            v33 = (_QWORD *)*v33;
          sub_140078700(a1: v180, a2: v33);
          if ( *a4 != 0 )
          {
            if ( *a4 == 1 )
              *((_QWORD *)a4 + 1) = sub_140080FF0(a1: v180, a2: 0);
          }
          else
          {
            a4[6] = v32;
          }
          sub_1400778C0(a1: v180);
        }
        return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
      }
      v26 = sub_140619130(a1: a2);
      v27 = sub_140347430(a1: v26, a2: v229);
      v28 = sub_1405F1EE0(a1: v27);
      if ( v28 != 0 && (v29 = *(_QWORD *)(v28 + 1176)) != 0 )
        v30 = sub_1404533E0(a1: v29);
      else
        v30 = 0;
      if ( *a4 != 0 )
      {
        if ( *a4 != 1 )
          return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
        if ( v30 != 0 )
        {
          *((_QWORD *)a4 + 1) = ((__int64 (*)(void))sub_14007F240)();
          return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
        }
        goto LABEL_47;
      }
      if ( v30 != 0 )
      {
        a4[6] = *(_DWORD *)(v30 + 28);
        return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
      }
    }
    a4[6] = 0;
    return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
  }
  v11 = (unsigned int *)sub_14018FA40();
  v12 = *(_QWORD *)(a1 + 152);
  v13 = (unsigned int)a4[1];
  if ( v13 < (*(_QWORD *)(a1 + 160) - v12) >> 4 )
    v11 = (unsigned int *)sub_1405F1EE0(a1: v12 + 16 * v13);
  if ( v11 == nullptr )
    return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
  v14 = *a4;
  if ( *a4 != 0 )
  {
    if ( v14 == 1 )
    {
      v15 = v11[81];
    }
    else
    {
      if ( v14 == 2 )
      {
        **((_DWORD **)a4 + 4) = v11[423];
        return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
      }
      if ( v14 != 3 )
      {
        if ( v14 == 4 )
          *((_QWORD *)a4 + 1) = sub_1401DFD10(a1: v11[57]);
        return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
      }
      v15 = v11[79];
    }
    sub_1400784D0(a1: &unk_14138E040, a2: v15);
    *((_QWORD *)a4 + 1) = sub_140080FF0(a1: &unk_14138E040, a2: 0);
  }
  else
  {
    *((_QWORD *)a4 + 1) = sub_140080FF0(a1: v11 + 134, a2: 0);
  }
  return sub_1400B2120(a1, a2, a3, (_DWORD)a4, a5);
}