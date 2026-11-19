char __fastcall sub_140486100(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  __int64 *v5; // rsi
  int v6; // edx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  char *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdi
  _QWORD *v15; // rax
  __int64 v16; // r8
  __int64 v17; // rcx
  unsigned int v18; // r12d
  _QWORD *v19; // rbx
  __m128i si128; // xmm6
  __int64 v21; // r14
  _QWORD *v22; // rax
  _QWORD *v23; // rdi
  __int64 v24; // r15
  __int64 v25; // rsi
  _BYTE *v26; // rcx
  __int64 i; // rcx
  __int64 v28; // r13
  __int64 v29; // rdi
  _QWORD *v30; // r8
  __int64 *v31; // rax
  _QWORD *v32; // rcx
  unsigned __int8 *v33; // r15
  unsigned __int8 *v34; // r12
  unsigned __int8 v35; // di
  unsigned __int8 v36; // r14
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rsi
  __int64 v40; // rdi
  int v41; // eax
  int v42; // ecx
  _QWORD *v43; // r14
  __int64 v44; // rsi
  __int64 *v45; // rax
  unsigned __int8 *v46; // rcx
  _QWORD *v47; // rdi
  void *v48; // rcx
  int v49; // eax
  unsigned int v50; // ebx
  __int64 v51; // rbx
  __int64 v52; // rcx
  __int64 v53; // rax
  _QWORD **v54; // rcx
  _QWORD *v55; // rcx
  _QWORD *v56; // rbx
  int v57; // r14d
  _QWORD *v58; // r13
  _QWORD *v59; // rbx
  _QWORD *v60; // r15
  _QWORD *v61; // r15
  __int64 *v62; // rsi
  __int64 v63; // rdi
  __int64 v64; // rsi
  __int64 v65; // rdi
  __int64 v66; // rax
  __int64 v67; // rdi
  __int64 v68; // rsi
  _QWORD *v69; // rax
  __int64 v70; // rcx
  _QWORD *v71; // rsi
  __int64 v72; // rdi
  __int64 v73; // rax
  __int64 v74; // rdi
  __int64 v75; // rcx
  __int64 v76; // rax
  const char *v77; // r8
  __int64 v78; // rcx
  _QWORD *v79; // rdi
  __int64 v80; // rbx
  __int64 v81; // rax
  _QWORD **v82; // rcx
  _QWORD *v83; // rcx
  _QWORD *v84; // rbx
  _QWORD **v85; // rcx
  _QWORD *v86; // rcx
  _QWORD *v87; // rbx
  char *v88; // rax
  char v89; // al
  __int64 v90; // rax
  _QWORD *v91; // rax
  __int64 v92; // rcx
  _QWORD *v93; // rdi
  __int64 v94; // rbx
  __int64 v95; // rax
  char *v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rdi
  __int64 v101; // rax
  char *v102; // rax
  __int64 v103; // rcx
  __int64 v104; // rbx
  __int64 v105; // rax
  char v106; // al
  __int64 v107; // rax
  unsigned __int8 v108; // bl
  unsigned int v109; // edi
  _QWORD *v110; // rax
  unsigned int v111; // eax
  int v112; // ecx
  int v113; // esi
  __int64 v114; // rax
  __int64 v115; // rcx
  _QWORD *v116; // rdi
  __int64 v117; // rbx
  __int64 v118; // rax
  __int64 v119; // rsi
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // r14
  __int64 v123; // rsi
  char v124; // al
  __int64 v125; // rax
  __int64 v126; // rax
  const char *v127; // r8
  __int64 v128; // rcx
  __int64 v129; // rbx
  __int64 v130; // rax
  __int64 v131; // rbx
  __int64 v132; // rdi
  __int64 v133; // rcx
  int v134; // eax
  __int64 v135; // rdi
  __int64 v136; // rax
  __int64 *v137; // rdx
  __int64 v138; // rax
  __int64 v139; // rbx
  __int64 v140; // rax
  _BYTE *v141; // rdi
  __int64 v142; // rbx
  __int64 v143; // rcx
  __int64 v144; // rax
  int v145; // eax
  int v146; // r9d
  __int64 v147; // rbx
  __int64 v148; // rcx
  __int64 v149; // rax
  __int64 *v150; // r14
  _BYTE *v151; // rdi
  int v152; // eax
  int v153; // r9d
  __int64 v154; // rbx
  __int64 v155; // rcx
  __int64 v156; // rax
  __int64 v157; // rbx
  __int64 v158; // rcx
  __int64 v159; // rax
  __int64 v160; // rbx
  __int64 v161; // rcx
  __int64 v162; // rax
  char **v163; // rcx
  char v164; // al
  char **v165; // rcx
  char v166; // al
  _BYTE v167[8]; // [rsp+50h] [rbp-B0h] BYREF
  LPVOID v168; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v169; // [rsp+60h] [rbp-A0h]
  _QWORD *v170; // [rsp+68h] [rbp-98h]
  LPVOID v171; // [rsp+70h] [rbp-90h] BYREF
  __int64 v172; // [rsp+78h] [rbp-88h]
  void **v173; // [rsp+80h] [rbp-80h] BYREF
  int v174; // [rsp+88h] [rbp-78h]
  int v175; // [rsp+8Ch] [rbp-74h]
  LPVOID *v176; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v177[24]; // [rsp+98h] [rbp-68h]
  char v178; // [rsp+B0h] [rbp-50h]
  unsigned int v179; // [rsp+C0h] [rbp-40h]
  LPVOID *v180; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v181; // [rsp+D0h] [rbp-30h]
  LPVOID lpMem[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v183; // [rsp+E8h] [rbp-18h]
  int v184; // [rsp+F0h] [rbp-10h]
  void **v185; // [rsp+100h] [rbp+0h] BYREF
  int v186; // [rsp+108h] [rbp+8h] BYREF
  int v187; // [rsp+10Ch] [rbp+Ch]
  void **v188; // [rsp+110h] [rbp+10h] BYREF
  int v189; // [rsp+118h] [rbp+18h]
  int v190; // [rsp+11Ch] [rbp+1Ch]
  void **v191; // [rsp+120h] [rbp+20h] BYREF
  int v192; // [rsp+128h] [rbp+28h]
  __int64 v193; // [rsp+12Ch] [rbp+2Ch]
  int v194; // [rsp+134h] [rbp+34h]
  __int16 v195; // [rsp+138h] [rbp+38h]
  __int64 v196; // [rsp+140h] [rbp+40h]
  void **v197; // [rsp+148h] [rbp+48h] BYREF
  unsigned int v198; // [rsp+150h] [rbp+50h]
  unsigned int v199; // [rsp+154h] [rbp+54h]
  LPVOID *v200; // [rsp+158h] [rbp+58h] BYREF
  LPVOID *v201; // [rsp+160h] [rbp+60h]
  _BYTE v202[16]; // [rsp+168h] [rbp+68h] BYREF
  __int64 v203; // [rsp+178h] [rbp+78h] BYREF
  char v204[8]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v205; // [rsp+188h] [rbp+88h]
  unsigned __int64 v206; // [rsp+190h] [rbp+90h]
  char v207; // [rsp+198h] [rbp+98h]
  __int64 v208; // [rsp+1A8h] [rbp+A8h]
  LPVOID *v209; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v210; // [rsp+1B8h] [rbp+B8h]
  __int64 v211; // [rsp+1C0h] [rbp+C0h]
  int v212; // [rsp+1C8h] [rbp+C8h]
  _QWORD v213[2]; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v214; // [rsp+1E0h] [rbp+E0h]
  unsigned __int64 v215; // [rsp+1E8h] [rbp+E8h]
  char v216; // [rsp+1F0h] [rbp+F0h]
  __int64 v217; // [rsp+200h] [rbp+100h]
  __int64 v218; // [rsp+208h] [rbp+108h]
  _QWORD *v219; // [rsp+210h] [rbp+110h]
  _QWORD v220[2]; // [rsp+220h] [rbp+120h] BYREF
  char v221[16]; // [rsp+230h] [rbp+130h] BYREF
  char v222[16]; // [rsp+240h] [rbp+140h] BYREF
  int v223; // [rsp+250h] [rbp+150h]
  int v224; // [rsp+254h] [rbp+154h]
  char v225; // [rsp+258h] [rbp+158h]
  char v226; // [rsp+259h] [rbp+159h]
  int v227; // [rsp+260h] [rbp+160h]

  v4 = a3;
  v196 = a3;
  v5 = (__int64 *)a1;
  v170 = (_QWORD *)a1;
  v6 = a2 - 1301;
  if ( v6 == 0 )
  {
    sub_140481610(a1);
    sub_140481430(a1: (__int64)v5);
    sub_140481250(a1: (__int64)v5);
    return 1;
  }
  v7 = (unsigned int)(v6 - 340699);
  if ( (_DWORD)v7 == 0 )
  {
    if ( a3 == 0 )
    {
      if ( a4 != 0 )
      {
        v102 = (char *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a4 + 184LL))(a1: a4, a2: v7);
        if ( v102[7] != 0 )
          v102 = (char *)(2LL * *(_QWORD *)v102);
      }
      else
      {
        v102 = &byte_140EEC5C5;
      }
      if ( (unsigned __int8)sub_140059D90(
                              a1: off_140FA3EA0,
                              a2: "EquipmentManager::EventHandler: Received new equip request event (commandID %u) but comman"
                              "dData is not a valid pointer to EquipRequest! (sender=%s)",
                              342000,
                              v102) != 0 )
        __debugbreak();
      v104 = *v5;
      v105 = sub_1400FBAF0(a1: v103);
      (*(void (__fastcall **)(__int64 *, __int64, _QWORD, __int64))(v104 + 776))(a1: v5, a2: 342003, a3: 0, a4: v105);
      return 1;
    }
    v106 = *(_BYTE *)(a3 + 74);
    if ( v106 == 0 )
    {
      v89 = sub_140059D90(
              a1: off_140FA3EF8,
              a2: "EquipmentManager::EventHandler - PXC_EQUIPMENT_MANAGER_ON_NEW_EQUIP_REQUEST: Invalid equip action when req"
              "uesting to equip an item");
LABEL_149:
      if ( v89 != 0 )
        __debugbreak();
      return 0;
    }
    if ( v106 == 2 )
    {
      v168 = &PXEngine::SafeActorPtr::`vftable';
      v169 = 0xBADF00D00000000LL;
      if ( sub_1405F1EE0(a1: a3) != 0 )
      {
        v107 = sub_1405F1EE0(a1: v4);
        if ( v107 != 0 )
        {
          sub_140487740(a1: v5, a2: v167, a3: v107 + 496);
          v108 = v167[0];
          v109 = v167[1];
          if ( v167[0] != 0
            && (unsigned __int8)sub_14048D570(a1: v5 + 41, a2: v167) != 0
            && *(v110 = (_QWORD *)sub_14048D4F0(a1: v5 + 41, a2: v167)) != v110[1] )
          {
            sub_1405F1D40(a1: &v173, a2: *v110);
          }
          else
          {
            v174 = 0;
            v175 = 195948557;
          }
          v173 = &PXEngine::SafeActorPtrAs<PXEngine::EquipmentView>::`vftable';
          if ( (unsigned __int8)sub_1405F1E20(a1: &v173) != 0 )
          {
            v114 = sub_1405F1EE0(a1: (__int64)&v173);
            if ( v114 == 0 )
            {
              if ( (unsigned __int8)sub_140059CA0(a1: off_140FA4C40) != 0 )
                __debugbreak();
              sub_1409E29B8(a1: 999);
              goto LABEL_245;
            }
            v113 = v109;
            sub_140480660(a1: v114, a2: &v180, a3: v109);
            v112 = HIDWORD(v181);
            v111 = v181;
          }
          else
          {
            v180 = &PXEngine::SafeActorPtr::`vftable';
            v111 = 0;
            v112 = 195948557;
            v113 = v109;
          }
          v169 = __PAIR64__(v112, v111);
          if ( sub_1405F1EE0(a1: (__int64)&v168) == 0 )
          {
            if ( (_BYTE)v109 != 0xFF
              && v108 != 0
              && (unsigned __int8)sub_140059D90(
                                    a1: off_140FA3F70,
                                    a2: "EquipmentManager::EventHandler - PXC_EQUIPMENT_MANAGER_ON_NEW_EQUIP_REQUEST: Invalid"
                                    " root actor for equipment slot (type id %u, slot id: %u)(DOUBLE_CLICK_EQUIP)",
                                    v108,
                                    v113) != 0 )
            {
              __debugbreak();
            }
            v116 = v170;
            v117 = *v170;
            v118 = sub_1400FBAF0(a1: v115);
            (*(void (__fastcall **)(_QWORD *, __int64, _QWORD, __int64))(v117 + 776))(
              a1: v116,
              a2: 342003,
              a3: 0,
              a4: v118);
            return 1;
          }
          if ( (unsigned __int8)sub_14048AA60(a1: v170, a2: v108, a3: (unsigned __int8)v109) == 0 )
            return 1;
          v119 = sub_14005D330();
          v120 = sub_1405F1F00(a1: &v168);
          v121 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v120 + 256LL))(a1: v120, a2: 0);
          v122 = v121;
          if ( v121 != 0 )
          {
            v124 = sub_140645790(a1: v121, a2: 101, a3: v119);
            v123 = 0;
            if ( v124 != 0 )
              v123 = v122;
          }
          else
          {
            v123 = 0;
          }
          v125 = ((__int64 (*)(void))sub_1400AF100)();
          v126 = sub_14014FBD0(a1: v125, a2: v202, a3: v123);
          *(_DWORD *)(v4 + 24) = *(_DWORD *)(v126 + 8);
          *(_DWORD *)(v4 + 28) = *(_DWORD *)(v126 + 12);
          sub_1405F1D80(a1: v4 + 48, a2: &v168);
          *(_BYTE *)(v4 + 72) = v108;
          *(_BYTE *)(v4 + 73) = v109;
          v5 = v170;
LABEL_177:
          sub_1404892B0(a1: v5, a2: &v176, a3: v108, a4: *(unsigned __int8 *)(v4 + 73));
          if ( v178 == 0 )
          {
            v127 = (const char *)&v176;
            if ( *(_QWORD *)&v177[16] > 0xFu )
              v127 = (const char *)v176;
            if ( (unsigned __int8)sub_140059D90(a1: off_140FA3F98, a2: "%s", v127) != 0 )
              __debugbreak();
LABEL_182:
            v129 = *v5;
            v130 = sub_1400FBAF0(a1: v128);
            (*(void (__fastcall **)(__int64 *, __int64, _QWORD, __int64))(v129 + 776))(
              a1: v5,
              a2: 342003,
              a3: 0,
              a4: v130);
            goto LABEL_208;
          }
          if ( (_BYTE)v176 != 0 )
          {
            if ( (unsigned __int8)sub_140059D90(
                                    a1: off_140FA3FC0,
                                    a2: "PlayerItemEquip: Attempted to use restricted slot with ID ('%u') in EquipmentTypeID ('%u')",
                                    *(unsigned __int8 *)(v4 + 73),
                                    *(unsigned __int8 *)(v4 + 72)) != 0 )
              __debugbreak();
            goto LABEL_182;
          }
          sub_14048D270(a1: v5, a2: &v203, a3: v4);
          if ( v207 != 0 )
          {
            if ( (unsigned __int8)sub_1405F1E20(a1: v4 + 16) != 0 )
            {
              v141 = (_BYTE *)sub_140152770(a1: v4 + 16);
              v141[1226] &= ~4u;
              v142 = *(_QWORD *)v141;
              v144 = sub_1400FBAF0(a1: v143);
              (*(void (__fastcall **)(_BYTE *, __int64, _QWORD, __int64))(v142 + 776))(
                a1: v141,
                a2: 101106,
                a3: 0,
                a4: v144);
              (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v141 + 872LL))(a1: v141);
              v145 = sub_1405F1EE0(a1: v4 + 32);
              LOBYTE(v146) = 1;
              sub_1400B0580(a1: (_DWORD)v141, a2: v145, a3: -1, a4: v146, a5: 0);
              v147 = *(_QWORD *)v141;
              v149 = sub_1400FBAF0(a1: v148);
              (*(void (__fastcall **)(_BYTE *, __int64, _QWORD, _QWORD, __int64))(v147 + 24))(
                a1: v141,
                a2: 101005,
                a3: 0,
                a4: 0,
                a5: v149);
            }
            v150 = v170;
            sub_140484F20(a1: v170, a2: *(unsigned __int8 *)(v4 + 72), a3: *(unsigned __int8 *)(v4 + 73), a4: v4);
            v151 = (_BYTE *)sub_140152770(a1: v4);
            v152 = sub_1405F1EE0(a1: v4 + 48);
            LOBYTE(v153) = 1;
            sub_1400B0580(a1: (_DWORD)v151, a2: v152, a3: -1, a4: v153, a5: 0);
            v151[1226] |= 4u;
            v154 = *v150;
            v156 = sub_1400FBAF0(a1: v155);
            (*(void (__fastcall **)(__int64 *, __int64, __int64, __int64))(v154 + 776))(
              a1: v150,
              a2: 342001,
              a3: v4,
              a4: v156);
            (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v151 + 864LL))(a1: v151);
            v157 = *(_QWORD *)v151;
            v159 = sub_1400FBAF0(a1: v158);
            (*(void (__fastcall **)(_BYTE *, __int64, _QWORD, __int64))(v157 + 776))(
              a1: v151,
              a2: 101105,
              a3: 0,
              a4: v159);
            v160 = *v150;
            v162 = sub_1400FBAF0(a1: v161);
            (*(void (__fastcall **)(__int64 *, __int64, __int64, __int64))(v160 + 776))(
              a1: v150,
              a2: 342002,
              a3: v4,
              a4: v162);
            if ( v207 == 0 )
            {
LABEL_207:
              sub_14001B5A0(a1: &v203);
              v205 = 0;
              v203 = 19937;
              v206 = 31;
            }
LABEL_208:
            if ( v178 == 0 )
              sub_14001B5A0(a1: &v176);
            return 1;
          }
          v131 = ((__int64 (*)(void))sub_1400AF100)();
          v180 = &PXEngine::SafeActorPtr::`vftable';
          v181 = 0xBADF00D00000000LL;
          sub_1405F1D40(a1: v202, a2: v5 + 15);
          v197 = &PXEngine::SafeActorPtr::`vftable';
          v198 = 0;
          v199 = 195948557;
          v132 = sub_1405FD6C0(
                   a1: v131,
                   a2: (unsigned int)&v200,
                   a3: (unsigned int)v202,
                   a4: (unsigned int)"global/GenericRequestWindowNoPause",
                   a5: (__int64)&v197,
                   a6: (__int64)&v180,
                   a7: 0,
                   a8: 0,
                   a9: 0);
          if ( (unsigned __int8)sub_1406006A0(a1: v131, a2: v132, a3: 40) != 0 )
            sub_1405F1D60(a1: &v168, a2: *(unsigned int *)(v132 + 12), a3: *(unsigned int *)(v132 + 8));
          else
            v169 = 0xBADF00D00000000LL;
          v168 = &PXEngine::SafeActorPtrAs<CPXView>::`vftable';
          if ( v205 == 0 || (unsigned __int8)sub_1405F1E20(a1: &v168) == 0 )
            goto LABEL_202;
          v134 = ((__int64 (*)(void))sub_1400AF100)();
          v135 = sub_1405FADF0(
                   a1: v134,
                   a2: (unsigned int)v202,
                   a3: (unsigned int)&v168,
                   a4: (unsigned int)"Message",
                   a5: -1,
                   a6: -1,
                   a7: -1,
                   a8: 1);
          if ( (unsigned __int8)sub_1405F1F70(a1: v135, a2: 40) != 0 )
          {
            sub_1405F1D60(a1: &v173, a2: *(unsigned int *)(v135 + 12), a3: *(unsigned int *)(v135 + 8));
          }
          else
          {
            v174 = 0;
            v175 = 195948557;
          }
          v173 = &PXEngine::SafeActorPtrAs<CPXView>::`vftable';
          if ( (unsigned __int8)sub_1405F1E20(a1: &v173) == 0 )
          {
LABEL_202:
            v139 = *v5;
            v140 = sub_1400FBAF0(a1: v133);
            (*(void (__fastcall **)(__int64 *, __int64, _QWORD, __int64))(v139 + 776))(
              a1: v5,
              a2: 342003,
              a3: 0,
              a4: v140);
            if ( v207 != 0 )
              goto LABEL_208;
            goto LABEL_207;
          }
          v136 = sub_1405F1EE0(a1: (__int64)&v173);
          if ( v136 != 0 )
          {
            v137 = &v203;
            if ( v206 > 0xF )
              v137 = (__int64 *)v203;
            sub_1401486E0(a1: v136, a2: v137, a3: 1);
            v138 = sub_1405F1EE0(a1: (__int64)&v168);
            if ( v138 != 0 )
            {
              sub_1400C29E0(a1: v138);
              goto LABEL_202;
            }
          }
LABEL_245:
          if ( (unsigned __int8)sub_140059CA0(a1: off_140F40348) != 0 )
            __debugbreak();
          sub_1409E29B8(a1: 999);
LABEL_213:
          sub_1409D2B10(a1: "list too long");
        }
        v166 = sub_140059CA0(a1: off_140F402E0);
      }
      else
      {
        v166 = sub_140059D90(
                 a1: off_140FA3F20,
                 a2: "EquipmentManager::EventHandler - PXC_EQUIPMENT_MANAGER_ON_NEW_EQUIP_REQUEST: No inventory item (DOUBLE_CLICK_EQUIP)");
      }
      if ( v166 != 0 )
        __debugbreak();
      sub_1409E29B8(a1: 999);
      __debugbreak();
    }
    v108 = *(_BYTE *)(a3 + 72);
    goto LABEL_177;
  }
  v8 = (unsigned int)(v7 - 1);
  if ( (_DWORD)v8 == 0 )
  {
    if ( a3 == 0 )
    {
      if ( a4 != 0 )
      {
        v97 = (char *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a4 + 184LL))(a1: a4, a2: v8);
        if ( v97[7] != 0 )
          v97 = (char *)(2LL * *(_QWORD *)v97);
      }
      else
      {
        v97 = &byte_140EEC5C5;
      }
      v89 = sub_140059D90(
              a1: off_140FA3FE8,
              a2: "EquipmentManager::EventHandler: Received equip success event (commandID %u) but commandData is not a valid"
              " pointer to EquipRequest! (sender=%s)",
              342001,
              v97);
      goto LABEL_149;
    }
    if ( *(_QWORD *)&nExitCode != 0 )
    {
      v98 = sub_1400AF100(a1, a2: v8);
      v99 = sub_1400D83A0(a1: v98, a2: v202);
      v100 = sub_140298110(a1: v99);
      lpMem[1] = nullptr;
      v183 = 0;
      v184 = 0;
      lpMem[0] = &PXEngine::ByteStreamWriter::`vftable';
      v176 = nullptr;
      v177[0] = 0;
      *(_QWORD *)&v177[4] = 0;
      *(_QWORD *)&v177[12] = 0;
      LODWORD(v176) = *(_DWORD *)(sub_140152770(a1: v4) + 16);
      if ( (unsigned __int8)sub_1405F1E20(a1: v4 + 16) != 0 )
        HIDWORD(v176) = *(_DWORD *)(sub_140152770(a1: v4 + 16) + 16);
      else
        HIDWORD(v176) = 0;
      v177[0] = *(_BYTE *)(v4 + 72);
      *(_DWORD *)&v177[8] = *(unsigned __int8 *)(v4 + 73);
      *(_DWORD *)&v177[16] = *(_DWORD *)(v4 + 64);
      *(_DWORD *)&v177[4] = *(_DWORD *)(v4 + 68);
      *(_DWORD *)&v177[12] = sub_1407B9F30(a1: v100);
      v101 = sub_1402ED120(a1: &word_141313DA0, a2: &v185, a3: &v176);
      sub_1407EE6B0(a1: v101);
      sub_140A25690(a1: lpMem);
      return 0;
    }
    return 0;
  }
  v9 = (unsigned int)(v8 - 1);
  if ( (_DWORD)v9 == 0 )
  {
    if ( a3 == 0 )
    {
      if ( a4 != 0 )
      {
        v88 = (char *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a4 + 184LL))(a1: a4, a2: v9);
        if ( v88[7] != 0 )
          v88 = (char *)(2LL * *(_QWORD *)v88);
      }
      else
      {
        v88 = &byte_140EEC5C5;
      }
      v89 = sub_140059D90(
              a1: off_140FA4010,
              a2: "EquipmentManager::EventHandler: Received equip success event (commandID %u) but commandData is not a valid"
              " pointer to EquipRequest! (sender=%s)",
              342002,
              v88);
      goto LABEL_149;
    }
    v90 = sub_1400AF100(a1, a2: v9);
    sub_14014F8D0(a1: v90, a2: &v200);
    if ( (unsigned __int8)sub_1405F1E20(a1: &v200) != 0 )
    {
      v91 = (_QWORD *)sub_1405F1EE0(a1: (__int64)&v200);
      v93 = v91;
      if ( v91 == nullptr )
      {
        if ( (unsigned __int8)sub_140059CA0(a1: off_140F40118) != 0 )
          __debugbreak();
        sub_1409E29B8(a1: 999);
        __debugbreak();
      }
      v94 = *v91;
      v95 = sub_1400FBAF0(a1: v92);
      (*(void (__fastcall **)(_QWORD *, __int64, _QWORD, __int64))(v94 + 776))(a1: v93, a2: 163033, a3: 0, a4: v95);
      return 0;
    }
    return 0;
  }
  if ( (_DWORD)v9 != 2 )
    return 0;
  if ( a3 == 0 )
  {
    if ( a4 != 0 )
    {
      v10 = (char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a4 + 184LL))(a1: a4);
      if ( v10[7] != 0 )
        v10 = (char *)(2LL * *(_QWORD *)v10);
    }
    else
    {
      v10 = &byte_140EEC5C5;
    }
    if ( (unsigned __int8)sub_140059D90(
                            a1: off_140FA4038,
                            a2: "EquipmentManager::EventHandler: Received new unequip request event (commandID %u) but comman"
                            "dData is not a valid pointer to UnequipRequest! (sender=%s)",
                            342004,
                            v10) != 0 )
      __debugbreak();
    v12 = *v5;
    v13 = sub_1400FBAF0(a1: v11);
    (*(void (__fastcall **)(__int64 *, __int64, _QWORD, __int64))(v12 + 776))(a1: v5, a2: 342006, a3: 0, a4: v13);
    return 1;
  }
  v14 = sub_140491070();
  v208 = v14;
  v168 = nullptr;
  v169 = 0;
  v15 = (_QWORD *)sub_140323470(a1: &v168, a2: 1);
  *v15 = v15;
  v15[1] = v15;
  v168 = v15;
  sub_140483520(a1: &v168, a2: v4);
  v167[0] = *(_BYTE *)(v4 + 56);
  v16 = v5[52];
  v17 = *(_QWORD *)(v16 + 16 * (v5[55] & (0x100000001B3LL * (v167[0] ^ 0xCBF29CE484222325uLL))) + 8);
  if ( v17 == v5[50] )
    goto LABEL_233;
  for ( ; v167[0] != *(_BYTE *)(v17 + 16); v17 = *(_QWORD *)(v17 + 8) )
  {
    if ( v17 == *(_QWORD *)(v16 + 16 * (v5[55] & (0x100000001B3LL * (v167[0] ^ 0xCBF29CE484222325uLL)))) )
      goto LABEL_233;
  }
  v217 = sub_1404888D0(a1: v17 + 24);
  v18 = sub_140490C20(a1: v14);
  v179 = v18;
  v219 = v168;
  v19 = *(_QWORD **)v168;
  if ( *(LPVOID *)v168 == v168 )
    goto LABEL_66;
  si128 = _mm_load_si128((const __m128i *)&xmmword_140EEE200);
  do
  {
    v21 = sub_1405F1EE0(a1: (__int64)(v19 + 2));
    if ( v21 == 0 )
      goto LABEL_217;
    v171 = nullptr;
    v172 = 0;
    v200 = &v171;
    v201 = &v171;
    v22 = (_QWORD *)sub_1409DB470(a1: 32);
    v23 = v22;
    *v22 = v22;
    v22[1] = v22;
    v22[2] = v22;
    *((_WORD *)v22 + 12) = 257;
    v171 = v22;
    v24 = *(_QWORD *)(*(_QWORD *)(v21 + 496) + 8LL);
    if ( *(_BYTE *)(v24 + 25) != 0 )
    {
      v25 = (__int64)v22;
    }
    else
    {
      v209 = &v171;
      v210 = 0;
      v25 = sub_1409DB470(a1: 32);
      *(_BYTE *)(v25 + 26) = *(_BYTE *)(v24 + 26);
      *(_QWORD *)v25 = v23;
      *(_QWORD *)(v25 + 16) = v23;
      *(_WORD *)(v25 + 24) = 0;
      v210 = 0;
      *(_QWORD *)(v25 + 8) = v23;
      *(_BYTE *)(v25 + 24) = *(_BYTE *)(v24 + 24);
      v176 = &v171;
      *(_QWORD *)v177 = &v171;
      *(_QWORD *)&v177[8] = v25;
      *(_QWORD *)v25 = sub_140022FE0(a1: &v171, a2: *(_QWORD *)v24, a3: v25);
      *(_QWORD *)(v25 + 16) = sub_140022FE0(a1: &v171, a2: *(_QWORD *)(v24 + 16), a3: v25);
      v176 = nullptr;
      v23 = v171;
    }
    v23[1] = v25;
    v172 = *(_QWORD *)(v21 + 504);
    v26 = *((_BYTE **)v171 + 1);
    if ( v26[25] != 0 )
    {
      *(_QWORD *)v171 = v171;
      *((_QWORD *)v171 + 2) = v171;
    }
    else
    {
      for ( ; *(_BYTE *)(*(_QWORD *)v26 + 25LL) == 0; v26 = *(_BYTE **)v26 )
        ;
      *(_QWORD *)v171 = v26;
      for ( i = *((_QWORD *)v171 + 1); *(_BYTE *)(*(_QWORD *)(i + 16) + 25LL) == 0; i = *(_QWORD *)(i + 16) )
        ;
      *((_QWORD *)v171 + 2) = i;
    }
    v201 = nullptr;
    v5 = v170;
    v28 = v170[27];
    v29 = v170[28];
    v218 = v29;
    v30 = v171;
    if ( v28 == v29 )
      goto LABEL_61;
    do
    {
      v31 = (__int64 *)v30[1];
      v32 = v30;
      while ( *((_BYTE *)v31 + 25) == 0 )
      {
        if ( *((_BYTE *)v31 + 26) >= *(_BYTE *)(v28 + 8) )
        {
          v32 = v31;
          v31 = (__int64 *)*v31;
        }
        else
        {
          v31 = (__int64 *)v31[2];
        }
      }
      if ( *((_BYTE *)v32 + 25) != 0 || *(_BYTE *)(v28 + 8) < *((_BYTE *)v32 + 26) )
        goto LABEL_60;
      sub_14047D760(a1: v217, a2: lpMem, a3: *(unsigned __int8 *)(v28 + 9));
      v33 = (unsigned __int8 *)lpMem[0];
      v34 = (unsigned __int8 *)lpMem[1];
      if ( lpMem[0] == lpMem[1] )
        goto LABEL_53;
      v35 = v167[0];
      do
      {
        v36 = *v33;
        v37 = sub_140488550(a1: v5, a2: v35);
        if ( v37 != 0 )
        {
          sub_1405F1D40(a1: v202, a2: v37 + 120);
          v38 = sub_140487BD0(a1: v5, a2: v202, a3: v35, a4: v36);
          v39 = v38;
          if ( v38 != 0 && (unsigned __int8)sub_14025F400(a1: v38, a2: *(unsigned __int8 *)(v28 + 9)) != 0 )
          {
            v186 = 0;
            v187 = 195948557;
            v185 = &PXEngine::SafeActorPtrAs<CPXPlayerItem>::`vftable';
            v188 = &PXEngine::SafeActorPtr::`vftable';
            v189 = 0;
            v190 = 195948557;
            v191 = &PXEngine::SafeActorPtr::`vftable';
            v192 = 0;
            v193 = 195948557;
            v194 = -1;
            v195 = -256;
            v40 = qword_14138A6F0;
            if ( qword_14138A6F0 == 0 )
            {
              if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
                __debugbreak();
              sub_1409E29B8(a1: 999);
LABEL_217:
              if ( (unsigned __int8)sub_140059CA0(a1: off_140F402E0) != 0 )
                __debugbreak();
              sub_1409E29B8(a1: 999);
LABEL_220:
              v163 = off_140F40118;
LABEL_224:
              v164 = sub_140059CA0(a1: v163);
LABEL_225:
              if ( v164 != 0 )
                __debugbreak();
              sub_1409E29B8(a1: 999);
              __debugbreak();
            }
            sub_1405F1D40(a1: &v197, a2: v39 + 120);
            if ( (unsigned __int8)sub_1406006A0(a1: v40, a2: &v197, a3: 101) != 0 )
            {
              sub_1405F1D60(a1: &v173, a2: v199, a3: v198);
              v173 = &PXEngine::SafeActorPtrAs<CPXPlayerItem>::`vftable';
              v41 = v175;
              v42 = v174;
            }
            else
            {
              v42 = 0;
              v174 = 0;
              v41 = 195948557;
              v175 = 195948557;
              v173 = &PXEngine::SafeActorPtrAs<CPXPlayerItem>::`vftable';
            }
            v186 = v42;
            v187 = v41;
            HIDWORD(v193) = v179;
            LOBYTE(v195) = v167[0];
            HIBYTE(v195) = v36;
            if ( v169 == 0x333333333333333LL )
              goto LABEL_213;
            v43 = v168;
            v180 = &v168;
            v181 = 0;
            v44 = sub_1409DB470(a1: 80);
            v181 = v44;
            sub_1405F1D40(a1: v44 + 16, a2: &v185);
            *(_QWORD *)(v44 + 16) = &PXEngine::SafeActorPtrAs<CPXPlayerItem>::`vftable';
            sub_1405F1D40(a1: v44 + 32, a2: &v188);
            sub_1405F1D40(a1: v44 + 48, a2: &v191);
            *(_DWORD *)(v44 + 64) = HIDWORD(v193);
            *(_DWORD *)(v44 + 68) = v194;
            *(_WORD *)(v44 + 72) = v195;
            ++v169;
            v45 = (__int64 *)v43[1];
            *(_QWORD *)v44 = v43;
            *(_QWORD *)(v44 + 8) = v45;
            v181 = 0;
            v43[1] = v44;
            *v45 = v44;
            v35 = v167[0];
          }
          v5 = v170;
        }
        ++v33;
      }
      while ( v33 != v34 );
      v33 = (unsigned __int8 *)lpMem[0];
      v29 = v218;
LABEL_53:
      if ( v33 != nullptr )
      {
        if ( (unsigned __int64)(v183 - (_QWORD)v33) < 0x1000 )
        {
          v46 = v33;
        }
        else
        {
          v46 = *((unsigned __int8 **)v33 - 1);
          if ( (unsigned __int64)(v33 - v46 - 8) > 0x1F )
            __fastfail(5u);
        }
        sub_1409DB4C0(lpMem: v46);
      }
      *(__m128i *)lpMem = si128;
      v183 = 19937;
      v30 = v171;
LABEL_60:
      v28 += 112;
    }
    while ( v28 != v29 );
LABEL_61:
    v47 = (_QWORD *)v30[1];
    if ( *((_BYTE *)v47 + 25) == 0 )
    {
      do
      {
        sub_140023670(a1: &v171, a2: &v171, a3: v47[2]);
        v48 = v47;
        v47 = (_QWORD *)*v47;
        sub_1409DB4C0(lpMem: v48);
      }
      while ( *((_BYTE *)v47 + 25) == 0 );
      v30 = v171;
    }
    sub_1409DB4C0(lpMem: v30);
    v171 = (LPVOID)19937;
    v172 = 0;
    v19 = (_QWORD *)*v19;
  }
  while ( v19 != v219 );
  v18 = v179;
  v4 = v196;
  v14 = v208;
LABEL_66:
  v49 = v169;
  v50 = v169;
  if ( *(_DWORD *)(v4 + 48) != v18 )
    v50 = v169 - 1;
  if ( v50 != 0 )
  {
    if ( (unsigned int)sub_140490E00(a1: v14, a2: v18) < v50 )
    {
      sub_140490580(a1: v14);
      v51 = *v5;
      v53 = sub_1400FBAF0(a1: v52);
      (*(void (__fastcall **)(__int64 *, __int64, __int64, __int64))(v51 + 776))(a1: v5, a2: 342006, a3: v4, a4: v53);
      v54 = (_QWORD **)v168;
      **((_QWORD **)v168 + 1) = 0;
      v55 = *v54;
      if ( v55 != nullptr )
      {
        do
        {
          v56 = (_QWORD *)*v55;
          sub_1409DB4C0(lpMem: v55);
          v55 = v56;
        }
        while ( v56 != nullptr );
      }
      goto LABEL_118;
    }
    v49 = v169;
  }
  v57 = v49;
  v58 = v168;
  v59 = *(_QWORD **)v168;
  if ( *(LPVOID *)v168 == v168 )
  {
LABEL_116:
    v85 = (_QWORD **)v168;
    **((_QWORD **)v168 + 1) = 0;
    v86 = *v85;
    if ( v86 != nullptr )
    {
      do
      {
        v87 = (_QWORD *)*v86;
        sub_1409DB4C0(lpMem: v86);
        v86 = v87;
      }
      while ( v87 != nullptr );
    }
    goto LABEL_118;
  }
  v60 = v170;
  while ( 2 )
  {
    if ( v57 != v49
      && (unsigned __int8)sub_14048AA60(a1: v60, a2: *((unsigned __int8 *)v59 + 72), a3: *((unsigned __int8 *)v59 + 73)) == 0 )
    {
      if ( (unsigned __int8)sub_140059D90(
                              a1: off_140FA4060,
                              a2: "EquipmentManager::EventHandler: Unable to register slotId (%u) in EquipmentTypeID (%u) as "
                              "a delegate of the equipment manager!",
                              *((unsigned __int8 *)v59 + 73),
                              *((unsigned __int8 *)v59 + 72)) != 0 )
        __debugbreak();
LABEL_105:
      v59 = (_QWORD *)*v59;
      if ( v59 == v58 )
        goto LABEL_116;
      v49 = v169;
      continue;
    }
    break;
  }
  v61 = v59 + 2;
  sub_140496230(a1: v208, a2: v213, a3: v170, a4: v59 + 2);
  if ( v216 != 0 || v214 == 0 )
  {
    v181 = 0xBADF00D00000000LL;
    v180 = &PXEngine::SafeActorPtrAs<CPXPlayerItem>::`vftable';
    v62 = v170;
    sub_140484F20(a1: v170, a2: *((unsigned __int8 *)v59 + 72), a3: *((unsigned __int8 *)v59 + 73), a4: &v180);
    if ( *(_QWORD *)&nExitCode == 0 )
    {
LABEL_102:
      --v57;
      sub_1405F1D40(a1: v220, a2: v59 + 2);
      v220[0] = &PXEngine::SafeActorPtrAs<CPXPlayerItem>::`vftable';
      sub_1405F1D40(a1: v221, a2: v59 + 4);
      sub_1405F1D40(a1: v222, a2: v59 + 6);
      v223 = *((_DWORD *)v59 + 16);
      v224 = *((_DWORD *)v59 + 17);
      v225 = *((_BYTE *)v59 + 72);
      v226 = *((_BYTE *)v59 + 73);
      v227 = v57;
      v74 = *v62;
      v76 = sub_1400FBAF0(a1: v75);
      (*(void (__fastcall **)(__int64 *, __int64, _QWORD *, __int64))(v74 + 776))(
        a1: v62,
        a2: 342005,
        a3: v220,
        a4: v76);
      if ( v216 == 0 )
        sub_14001B5A0(a1: v213);
      v60 = v170;
      goto LABEL_105;
    }
    v210 = 0;
    v211 = 0;
    v212 = 0;
    v209 = &PXEngine::ByteStreamWriter::`vftable';
    v176 = nullptr;
    v177[0] = 0;
    *(_QWORD *)&v177[4] = 0;
    *(_QWORD *)&v177[12] = 0;
    v63 = qword_14138A6F0;
    if ( qword_14138A6F0 != 0 )
    {
      v64 = sub_1405FD2E0(a1: qword_14138A6F0, a2: v202, a3: "Network");
      if ( (unsigned __int8)sub_1406006A0(a1: v63, a2: v64, a3: 122) != 0 )
        sub_1405F1D60(a1: &v171, a2: *(unsigned int *)(v64 + 12), a3: *(unsigned int *)(v64 + 8));
      else
        v172 = 0xBADF00D00000000LL;
      v171 = &PXEngine::SafeActorPtrAs<CPXNetwork>::`vftable';
      v65 = sub_1405F1EE0(a1: (__int64)&v171);
      if ( v65 == 0 )
      {
        v165 = off_140F61968;
        goto LABEL_230;
      }
      *(_DWORD *)&v177[16] = *((_DWORD *)v59 + 16);
      LODWORD(v176) = 0;
      *(_DWORD *)&v177[4] = *((_DWORD *)v59 + 17);
      v66 = sub_1405F1EE0(a1: (__int64)(v59 + 2));
      if ( v66 == 0 )
      {
        v163 = off_140F402E0;
        goto LABEL_224;
      }
      HIDWORD(v176) = *(_DWORD *)(v66 + 16);
      v177[0] = *((_BYTE *)v59 + 72);
      *(_DWORD *)&v177[8] = *((unsigned __int8 *)v59 + 73);
      *(_DWORD *)&v177[12] = sub_1407B9F30(a1: v65);
      if ( (unsigned __int8)sub_1402EA470(a1: &v209, a2: &v176) == 0 )
      {
        v164 = sub_140059D90(
                 a1: off_140FA40B0,
                 a2: "EquipmentManager::EventHandler: NetSerialize failed for unequip request!");
        goto LABEL_225;
      }
      lpMem[1] = nullptr;
      v183 = 0;
      v184 = 0;
      lpMem[0] = &PXEngine::ByteStreamWriter::`vftable';
      if ( (unsigned __int8)sub_1402EA470(a1: lpMem, a2: &v176) != 0 )
      {
        LOWORD(v203) = word_141313DA0;
        sub_140A255B0(a1: v204, a2: lpMem);
        LOWORD(v185) = v203;
        sub_140A255B0(a1: &v186, a2: v204);
        LOBYTE(v192) = 1;
        sub_140A25690(a1: v204);
      }
      else
      {
        LOBYTE(v192) = 0;
      }
      sub_140A25690(a1: lpMem);
      sub_1407EE6B0(a1: &v185);
      v67 = qword_14138A6F0;
      if ( qword_14138A6F0 == 0 )
      {
        v163 = off_140F35058;
        goto LABEL_224;
      }
      v68 = sub_1405FD2E0(a1: qword_14138A6F0, a2: &v200, a3: "PlayerItemManager");
      if ( (unsigned __int8)sub_1406006A0(a1: v67, a2: v68, a3: 163) != 0 )
      {
        sub_1405F1D60(a1: &v173, a2: *(unsigned int *)(v68 + 12), a3: *(unsigned int *)(v68 + 8));
      }
      else
      {
        v174 = 0;
        v175 = 195948557;
      }
      v173 = &PXEngine::SafeActorPtrAs<CPXPlayerItemManager>::`vftable';
      if ( (unsigned __int8)sub_1405F1E20(a1: &v173) != 0 )
      {
        v69 = (_QWORD *)sub_1405F1EE0(a1: (__int64)&v173);
        v71 = v69;
        if ( v69 == nullptr )
          goto LABEL_220;
        v72 = *v69;
        v73 = sub_1400FBAF0(a1: v70);
        (*(void (__fastcall **)(_QWORD *, __int64, _QWORD, __int64))(v72 + 776))(a1: v71, a2: 163033, a3: 0, a4: v73);
      }
      sub_140A25690(a1: &v209);
      v62 = v170;
      goto LABEL_102;
    }
    v165 = off_140F35058;
LABEL_230:
    if ( (unsigned __int8)sub_140059CA0(a1: v165) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
LABEL_233:
    sub_1409D2B40(a1: "invalid unordered_map<K, T> key");
  }
  v77 = (const char *)v213;
  if ( v215 > 0xF )
    v77 = (const char *)v213[0];
  if ( (unsigned __int8)sub_140059D90(
                          a1: off_140FA4088,
                          a2: "EquipmentManager::EventHandler: InventoryManager::UnequipItem failed unexpectedly! Error message: %s",
                          v77) != 0 )
    __debugbreak();
  v79 = v170;
  v80 = *v170;
  v81 = sub_1400FBAF0(a1: v78);
  (*(void (__fastcall **)(_QWORD *, __int64, _QWORD *, __int64))(v80 + 776))(a1: v79, a2: 342006, a3: v61, a4: v81);
  if ( v216 == 0 )
  {
    sub_14001B5A0(a1: v213);
    v213[0] = 19937;
    v214 = 0;
    v215 = 31;
  }
  v82 = (_QWORD **)v168;
  **((_QWORD **)v168 + 1) = 0;
  v83 = *v82;
  if ( v83 != nullptr )
  {
    do
    {
      v84 = (_QWORD *)*v83;
      sub_1409DB4C0(lpMem: v83);
      v83 = v84;
    }
    while ( v84 != nullptr );
  }
LABEL_118:
  sub_1409DB4C0(lpMem: v168);
  return 1;
}