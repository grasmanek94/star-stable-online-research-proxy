__int64 __fastcall sub_1407CE750(__int64 a1, unsigned int *a2, unsigned __int8 a3)
{
  __int64 *v5; // r9
  __int64 *v6; // rax
  __int64 *v7; // rcx
  unsigned int v8; // edx
  __int64 v9; // rax
  __int64 *v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 result; // rax
  void *v14; // rcx
  __int64 v15; // rbx
  __int64 *v16; // rbx
  __int64 v17; // rsi
  __int64 v18; // r15
  __int64 *v19; // rbx
  __int64 v20; // rsi
  __int64 v21; // rbx
  __int64 v22; // rbx
  __int64 v23; // r15
  __int64 v24; // rsi
  __int64 v25; // rax
  _BYTE *v26; // rsi
  char v27; // bl
  __int64 v28; // r13
  char v29; // dl
  __int64 v30; // rdx
  __int64 v31; // rcx
  _QWORD *v32; // rbx
  _QWORD *v33; // r9
  _QWORD *v34; // rdx
  __int64 v35; // rax
  void *v36; // rcx
  __int128 *v37; // rdx
  _QWORD *v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r9
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // r15
  __int64 v50; // rbx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rbx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r15
  int v59; // r9d
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rbx
  __int64 v63; // r9
  float v64; // xmm6_4
  float v65; // xmm6_4
  float v66; // xmm6_4
  float v67; // xmm6_4
  __int64 v68; // r10
  unsigned int v69; // edx
  __int64 v70; // r8
  __int64 v71; // r10
  __int64 v72; // rbx
  __int64 v73; // r15
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  void **v78; // rdx
  __int64 v79; // r13
  __int64 v80; // rax
  __int64 v81; // rcx
  void **v82; // r15
  int v83; // ebx
  __int64 v84; // rax
  __int64 v85; // r15
  __int64 v86; // rbx
  __int64 v87; // rax
  __int64 v88; // rbx
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 *v92; // r15
  __int64 v93; // rbx
  __int64 v94; // rbx
  __int64 v95; // r8
  __int64 v96; // rax
  __int64 v97; // rax
  void *v98; // rcx
  char **v99; // rcx
  char **v100; // rcx
  char v101; // al
  char **v102; // rcx
  void **v104; // [rsp+58h] [rbp-A8h] BYREF
  int v105; // [rsp+60h] [rbp-A0h]
  int v106; // [rsp+64h] [rbp-9Ch]
  void **v107; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v108; // [rsp+78h] [rbp-88h]
  void **v109; // [rsp+80h] [rbp-80h] BYREF
  int v110; // [rsp+88h] [rbp-78h]
  int v111; // [rsp+8Ch] [rbp-74h]
  void **v112; // [rsp+90h] [rbp-70h] BYREF
  int v113; // [rsp+98h] [rbp-68h]
  int v114; // [rsp+9Ch] [rbp-64h]
  void **v115; // [rsp+A0h] [rbp-60h] BYREF
  int v116; // [rsp+A8h] [rbp-58h]
  int v117; // [rsp+ACh] [rbp-54h]
  _BYTE v118[16]; // [rsp+B0h] [rbp-50h] BYREF
  void **v119; // [rsp+C0h] [rbp-40h] BYREF
  int v120; // [rsp+C8h] [rbp-38h]
  int v121; // [rsp+CCh] [rbp-34h]
  _QWORD v122[2]; // [rsp+D0h] [rbp-30h] BYREF
  void **v123; // [rsp+E0h] [rbp-20h] BYREF
  int v124; // [rsp+E8h] [rbp-18h]
  int v125; // [rsp+ECh] [rbp-14h]
  _BYTE v126[16]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v127[16]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v128[16]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v129[16]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v130[16]; // [rsp+130h] [rbp+30h] BYREF
  __int128 v131; // [rsp+140h] [rbp+40h] BYREF
  __int128 v132; // [rsp+150h] [rbp+50h]
  __int64 v133; // [rsp+160h] [rbp+60h] BYREF
  unsigned int v134; // [rsp+16Ch] [rbp+6Ch]
  __int64 v135; // [rsp+170h] [rbp+70h]
  unsigned __int64 v136; // [rsp+178h] [rbp+78h]
  _BYTE v137[8]; // [rsp+180h] [rbp+80h] BYREF
  void *v138; // [rsp+188h] [rbp+88h] BYREF
  unsigned __int64 v139; // [rsp+1A0h] [rbp+A0h]
  _BYTE v140[16]; // [rsp+220h] [rbp+120h] BYREF
  _BYTE v141[24]; // [rsp+230h] [rbp+130h] BYREF
  __int64 v142; // [rsp+248h] [rbp+148h]
  __int64 v143; // [rsp+250h] [rbp+150h]
  _BYTE v144[84]; // [rsp+25Ch] [rbp+15Ch] BYREF

  v5 = *(__int64 **)(a1 + 1912);
  v6 = (__int64 *)v5[1];
  v7 = v5;
  if ( *((_BYTE *)v6 + 25) == 0 )
  {
    v8 = *a2;
    do
    {
      if ( *((_DWORD *)v6 + 8) >= v8 )
      {
        v7 = v6;
        v6 = (__int64 *)*v6;
      }
      else
      {
        v6 = (__int64 *)v6[2];
      }
    }
    while ( *((_BYTE *)v6 + 25) == 0 );
  }
  if ( *((_BYTE *)v7 + 25) == 0 && *a2 >= *((_DWORD *)v7 + 8) && v7 != v5 )
  {
    v9 = sub_1405F1EE0(a1: (__int64)(v7 + 5));
    if ( v9 != 0 )
      sub_1407CF960(a1, a2: v9);
  }
  sub_1407F3370(a1: v137);
  sub_1407F3810(a1: v137, a2: a2 + 62);
  v10 = (__int64 *)qword_14138A6F0;
  if ( qword_14138A6F0 == 0 )
  {
LABEL_142:
    if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  v104 = &PXEngine::SafeActorPtr::`vftable';
  v105 = 0;
  v106 = 195948557;
  sub_1405F1D40(a1: (__int64)v122, a2: a1 + 120);
  v112 = &PXEngine::SafeActorPtr::`vftable';
  v113 = 0;
  v114 = 195948557;
  v11 = sub_1405FD6C0(
          a1: v10,
          a2: (__int64)v118,
          a3: (__int64)v122,
          a4: "global/NetworkObjects",
          a5: (__int64)&v112,
          a6: (__int64)&v104,
          a7: nullptr,
          a8: 0,
          a9: 0);
  if ( (unsigned __int8)sub_1406006A0(a1: v10, a2: v11, a3: 1) != 0 )
  {
    sub_1405F1D60(a1: (__int64)&v109, a2: *(_DWORD *)(v11 + 12), a3: *(_DWORD *)(v11 + 8));
  }
  else
  {
    v110 = 0;
    v111 = 195948557;
  }
  v109 = &PXEngine::SafeActorPtrAs<CPXActor>::`vftable';
  v12 = sub_1405F1EE0(a1: (__int64)&v109);
  if ( v12 == 0 )
    goto LABEL_17;
  sub_1405F1D40(a1: (__int64)v129, a2: v12 + 120);
  v104 = &PXEngine::SafeActorPtr::`vftable';
  v105 = 0;
  v106 = 195948557;
  if ( (unsigned __int8)sub_1405F1D90(a1: v129, a2: &v104) != 0 )
  {
    if ( (unsigned __int8)sub_140059D90(a1: off_141011BB8, a2: "NetworkObject SafeActorPointer is not valid") != 0 )
      __debugbreak();
    goto LABEL_17;
  }
  v15 = sub_1405FADF0(
          a1: (__int64 *)qword_14138A6F0,
          a2: (__int64)v118,
          a3: (__int64)v129,
          a4: (int)"PlayerSlave",
          a5: -1,
          a6: -1,
          a7: -1,
          a8: 1);
  if ( (unsigned __int8)sub_1405F1F70(a1: v15, a2: 226) != 0 )
  {
    sub_1405F1D60(a1: (__int64)&v123, a2: *(_DWORD *)(v15 + 12), a3: *(_DWORD *)(v15 + 8));
  }
  else
  {
    v124 = 0;
    v125 = 195948557;
  }
  v123 = &PXEngine::SafeActorPtrAs<CPXPlayerTPNet>::`vftable';
  if ( sub_1405F1EE0(a1: (__int64)&v123) == 0 )
  {
LABEL_17:
    v142 = 7;
    v143 = 8;
    sub_140017A10(a1: v141);
    result = sub_140082DD0(a1: v140);
    if ( v139 > 0xF )
    {
      v14 = v138;
      if ( v139 + 1 >= 0x1000 )
      {
        if ( (unsigned __int64)v138 - *((_QWORD *)v138 - 1) - 8 > 0x1F )
          __fastfail(5u);
        v14 = *((void **)v138 - 1);
      }
      return sub_1409DB4C0(lpMem: v14);
    }
    return result;
  }
  v16 = (__int64 *)qword_14138A6F0;
  if ( qword_14138A6F0 == 0 )
  {
    if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  v104 = &PXEngine::SafeActorPtr::`vftable';
  v105 = 0;
  v106 = 195948557;
  sub_1405F1D40(a1: (__int64)v122, a2: a1 + 120);
  v112 = &PXEngine::SafeActorPtr::`vftable';
  v113 = 0;
  v114 = 195948557;
  v17 = sub_1405FD6C0(
          a1: v16,
          a2: (__int64)v118,
          a3: (__int64)v122,
          a4: "global/PlayerPosition",
          a5: (__int64)&v112,
          a6: (__int64)&v104,
          a7: nullptr,
          a8: 0,
          a9: 0);
  if ( (unsigned __int8)sub_1406006A0(a1: v16, a2: v17, a3: 1) != 0 )
  {
    sub_1405F1D60(a1: (__int64)&v109, a2: *(_DWORD *)(v17 + 12), a3: *(_DWORD *)(v17 + 8));
  }
  else
  {
    v110 = 0;
    v111 = 195948557;
  }
  v109 = &PXEngine::SafeActorPtrAs<CPXActor>::`vftable';
  v18 = sub_1405F1EE0(a1: (__int64)&v109);
  v19 = (__int64 *)qword_14138A6F0;
  if ( qword_14138A6F0 == 0 )
  {
    if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  v107 = &PXEngine::SafeActorPtr::`vftable';
  v108 = 0xBADF00D00000000LL;
  sub_1405F1D40(a1: (__int64)v118, a2: a1 + 120);
  v115 = &PXEngine::SafeActorPtr::`vftable';
  v116 = 0;
  v117 = 195948557;
  v20 = sub_1405FD6C0(
          a1: v19,
          a2: (__int64)v128,
          a3: (__int64)v118,
          a4: "global/HorsePosition",
          a5: (__int64)&v115,
          a6: (__int64)&v107,
          a7: nullptr,
          a8: 0,
          a9: 0);
  if ( (unsigned __int8)sub_1406006A0(a1: v19, a2: v20, a3: 1) != 0 )
  {
    sub_1405F1D60(a1: (__int64)&v112, a2: *(_DWORD *)(v20 + 12), a3: *(_DWORD *)(v20 + 8));
  }
  else
  {
    v113 = 0;
    v114 = 195948557;
  }
  v112 = &PXEngine::SafeActorPtrAs<CPXActor>::`vftable';
  v115 = (void **)sub_1405F1EE0(a1: (__int64)&v112);
  sub_1405F1D40(a1: (__int64)v130, a2: v18 + 120);
  v21 = sub_1405F88F0(
          a1: qword_14138A6F0,
          a2: (unsigned int)v128,
          a3: (unsigned int)&v123,
          a4: (unsigned int)v130,
          a5: 0,
          a6: 0,
          a7: 0,
          a8: -1,
          a9: 0);
  if ( (unsigned __int8)sub_1405F1F70(a1: v21, a2: 226) != 0 )
  {
    sub_1405F1D60(a1: (__int64)&v119, a2: *(_DWORD *)(v21 + 12), a3: *(_DWORD *)(v21 + 8));
  }
  else
  {
    v120 = 0;
    v121 = 195948557;
  }
  v119 = &PXEngine::SafeActorPtrAs<CPXPlayerTPNet>::`vftable';
  if ( qword_14138A6F0 == 0 )
  {
    v99 = off_140F35058;
    goto LABEL_153;
  }
  v22 = sub_1405FAF00(a1: qword_14138A6F0, a2: (unsigned int)v128, a3: (unsigned int)&v123, a4: 33, a5: 1);
  if ( (unsigned __int8)sub_1405F1F70(a1: v22, a2: 33) != 0 )
  {
    sub_1405F1D60(a1: (__int64)&v109, a2: *(_DWORD *)(v22 + 12), a3: *(_DWORD *)(v22 + 8));
  }
  else
  {
    v110 = 0;
    v111 = 195948557;
  }
  v109 = &PXEngine::SafeActorPtrAs<CPXSkinMesh>::`vftable';
  v23 = sub_1405F1EE0(a1: (__int64)&v109);
  if ( v23 == 0 )
  {
    v99 = off_140F37DF0;
LABEL_153:
    if ( (unsigned __int8)sub_140059CA0(a1: v99) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  if ( qword_14138A6F0 == 0 )
  {
    v100 = off_140F35058;
LABEL_158:
    if ( (unsigned __int8)sub_140059CA0(a1: v100) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
LABEL_161:
    sub_14001B680(a1: v31, a2: v30);
  }
  v24 = sub_1405FAF00(a1: qword_14138A6F0, a2: (unsigned int)v122, a3: (unsigned int)&v119, a4: 33, a5: 1);
  if ( (unsigned __int8)sub_1405F1F70(a1: v24, a2: 33) != 0 )
  {
    sub_1405F1D60(a1: (__int64)&v104, a2: *(_DWORD *)(v24 + 12), a3: *(_DWORD *)(v24 + 8));
  }
  else
  {
    v105 = 0;
    v106 = 195948557;
  }
  v104 = &PXEngine::SafeActorPtrAs<CPXSkinMesh>::`vftable';
  v25 = sub_1405F1EE0(a1: (__int64)&v104);
  if ( v25 == 0 )
  {
    v100 = off_140F37DF0;
    goto LABEL_158;
  }
  sub_1400F3D20(a1: v25, a2: v23 + 584);
  v26 = (_BYTE *)sub_1405F1EE0(a1: (__int64)&v119);
  if ( v26 == nullptr && (unsigned __int8)sub_140059D90(a1: off_141011C00, a2: "New player actor is null") != 0 )
    __debugbreak();
  v27 = *((_BYTE *)a2 + 77) >= 0x32u;
  sub_1405F1D40(a1: (__int64)v122, a2: (__int64)&v119);
  v122[0] = &PXEngine::SafeActorPtrAs<CPXPlayerTPNet>::`vftable';
  v28 = sub_1401DAB30(
          a1: 2,
          a2: (unsigned int)v137,
          a3: (unsigned int)v122,
          a4: (_DWORD)v115,
          a5: (__int64)"HorseSlave",
          a6: v27,
          a7: 0);
  v112 = (void **)v28;
  v29 = *((_BYTE *)a2 + 76);
  v26[2012] = *((_BYTE *)a2 + 77);
  v26[2013] = v29;
  sub_1400775B0(a1: v126, a2: &String2);
  sub_14007E430(a1: v126, a2: 65001);
  v31 = *((_QWORD *)a2 + 3);
  if ( v31 == 0x7FFFFFFFFFFFFFFFLL )
    goto LABEL_161;
  v32 = a2 + 2;
  LODWORD(v33) = (_DWORD)a2 + 8;
  if ( *((_QWORD *)a2 + 4) > 0xFu )
    v33 = (_QWORD *)*v32;
  sub_1400249F0(
    a1: (unsigned int)&v133,
    a2: a3,
    a3: (_DWORD)a2 + 8,
    a4: (_DWORD)v33,
    a5: v31,
    a6: (__int64)&word_140EF8F64,
    a7: 1);
  v34 = a2 + 10;
  if ( *((_QWORD *)a2 + 8) > 0xFu )
    v34 = (_QWORD *)*v34;
  v35 = sub_14004E5C0(a1: &v133, a2: v34, a3: *((_QWORD *)a2 + 7));
  v131 = 0;
  v132 = 0u;
  v131 = *(_OWORD *)v35;
  v132 = *(_OWORD *)(v35 + 16);
  *(_QWORD *)(v35 + 16) = 0;
  *(_QWORD *)(v35 + 24) = 15;
  *(_BYTE *)v35 = 0;
  if ( v136 > 0xF )
  {
    v36 = (void *)v133;
    if ( v136 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v133 - *(_QWORD *)(v133 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v36 = *(void **)(v133 - 8);
    }
    sub_1409DB4C0(lpMem: v36);
  }
  v133 = 19937;
  v135 = 0;
  v136 = 31;
  v37 = &v131;
  if ( *((_QWORD *)&v132 + 1) > 0xFu )
    v37 = (__int128 *)v131;
  sub_140078700(a1: v126, a2: v37);
  sub_1400775B0(a1: v127, a2: &String2);
  sub_14007E430(a1: v127, a2: 65001);
  if ( *((_QWORD *)a2 + 4) > 0xFu )
    v32 = (_QWORD *)*v32;
  sub_140078700(a1: v127, a2: v32);
  sub_1407998D0(a1: v26, a2: v126);
  if ( a2[48] != 0 )
  {
    sub_1400775B0(a1: &v104, a2: &String2);
    sub_14007E430(a1: &v104, a2: 65001);
    v38 = a2 + 50;
    if ( *((_QWORD *)a2 + 28) > 0xFu )
      v38 = (_QWORD *)*v38;
    sub_140078700(a1: &v104, a2: v38);
    sub_140799730(a1: v26, a2: &v104);
    sub_1400778C0(a1: &v104);
  }
  v39 = sub_140487E00(a1: v128);
  v40 = sub_1405F1EE0(a1: v39);
  v109 = (void **)v40;
  if ( v40 == 0 )
  {
    v101 = sub_140059D90(a1: off_141011C40, a2: "Equipment Manager is not available in PXNetwork::PlayerCreateSlave");
    goto LABEL_169;
  }
  sub_140488930(a1: v40, a2, a3: v26);
  LOBYTE(v41) = 1;
  sub_1400C72E0(a1: v26, a2: v41);
  *((_DWORD *)v26 + 430) = *a2;
  *((_DWORD *)v26 + 431) = a2[1];
  sub_14079A970(a1: v26, a2: v28);
  sub_14078A000(a1: v26, a2: a2 + 58, a3: 0);
  LOBYTE(v42) = 1;
  (*(void (__fastcall **)(_BYTE *, unsigned int *, __int64, __int64))(*(_QWORD *)v26 + 688LL))(
    a1: v26,
    a2: a2 + 43,
    a3: 1,
    a4: v42);
  if ( qword_14138AA70 == 0 )
  {
    v102 = off_140F38D30;
LABEL_168:
    v101 = sub_140059CA0(a1: v102);
LABEL_169:
    if ( v101 != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v26 + 104LL))(a1: v26);
  v44 = sub_1400FBAF0(a1: v43);
  sub_1400B0190(a1: v26, a2: v44);
  LOBYTE(v45) = 1;
  sub_1400C63A0(a1: v26, a2: v45);
  v48 = sub_1400AF100(a1: v47, a2: v46);
  sub_1400CC2F0(a1: v26, a2: v48);
  v49 = qword_14138A6F0;
  if ( qword_14138A6F0 == 0 )
  {
    if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  v50 = sub_1405FD2E0(a1: (_QWORD *)qword_14138A6F0, a2: (__int64)v118, a3: (__int64)"World");
  if ( (unsigned __int8)sub_1406006A0(a1: v49, a2: v50, a3: 60) != 0 )
  {
    sub_1405F1D60(a1: (__int64)&v104, a2: *(_DWORD *)(v50 + 12), a3: *(_DWORD *)(v50 + 8));
  }
  else
  {
    v105 = 0;
    v106 = 195948557;
  }
  v104 = &PXEngine::SafeActorPtrAs<CPXTerrain>::`vftable';
  v53 = sub_1405F1EE0(a1: (__int64)&v104);
  if ( v53 == 0 )
  {
    v102 = off_141011C68;
    goto LABEL_168;
  }
  v54 = sub_1400AF100(a1: v52, a2: v51);
  v55 = sub_1400AEDB0(a1: v53, a2: v54);
  v58 = sub_140164770(a1: v55, a2: 0, a3: v144);
  if ( v58 != 0 )
  {
    sub_1405F1D40(a1: (__int64)&v107, a2: v28 + 32);
    v107 = &PXEngine::SafeActorPtrAs<CPXSpace>::`vftable';
    if ( v58 != sub_1405F1EE0(a1: (__int64)&v107) )
    {
      LOBYTE(v59) = 1;
      sub_1400B0580(a1: v28, a2: v58, a3: -1, a4: v59, a5: 0);
    }
  }
  v60 = sub_1400AF100(a1: v57, a2: v56);
  v61 = sub_1400AEDB0(a1: v53, a2: v60);
  v62 = sub_140164770(a1: v61, a2: 0, a3: a2 + 40);
  if ( v62 != 0 )
  {
    sub_1405F1D40(a1: (__int64)&v107, a2: (__int64)(v26 + 32));
    v107 = &PXEngine::SafeActorPtrAs<CPXSpace>::`vftable';
    if ( v62 != sub_1405F1EE0(a1: (__int64)&v107) )
    {
      LOBYTE(v63) = 1;
      sub_1400B0580(a1: (_DWORD)v26, a2: v62, a3: -1, a4: v63, a5: 0);
    }
  }
  LOBYTE(v63) = 1;
  (*(void (__fastcall **)(_BYTE *, unsigned int *, __int64, __int64))(*(_QWORD *)v26 + 680LL))(
    a1: v26,
    a2: a2 + 40,
    a3: 1,
    a4: v63);
  sub_140799770(a1: v26, a2: *((unsigned __int8 *)a2 + 79), a3: 0);
  (*(void (__fastcall **)(_BYTE *, _QWORD, _QWORD))(*(_QWORD *)v26 + 920LL))(
    a1: v26,
    a2: 0,
    a3: *((unsigned __int8 *)a2 + 84));
  v64 = (float)*((unsigned __int8 *)a2 + 80);
  *(float *)((*(__int64 (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)v26 + 1000LL))(a1: v26, a2: 0) + 12) = v64;
  v65 = (float)*((unsigned __int8 *)a2 + 81);
  *(float *)((*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v26 + 1000LL))(a1: v26, a2: 1) + 12) = v65;
  v66 = (float)*((unsigned __int8 *)a2 + 82);
  *(float *)((*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v26 + 1000LL))(a1: v26, a2: 2) + 12) = v66;
  v67 = (float)*((unsigned __int8 *)a2 + 83);
  *(float *)((*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v26 + 1000LL))(a1: v26, a2: 3) + 12) = v67;
  sub_140799900(a1: (_DWORD)v26, a2: a2[18], a3: (_DWORD)a2 + 88, a4: (_DWORD)a2 + 92, a5: 0);
  LODWORD(v115) = *a2;
  if ( *(_QWORD *)sub_1401D4F20(a1: a1 + 1296, a2: &v115) != 0 )
    v26[2382] |= 8u;
  v68 = *(_QWORD *)(a1 + 1504);
  if ( v68 != 0 )
  {
    v69 = 0;
    v70 = *(_QWORD *)(v68 + 64);
    if ( (*(_QWORD *)(v68 + 72) - v70) >> 3 != 0 )
    {
      v71 = *(_QWORD *)(v68 + 72);
      while ( 1 )
      {
        if ( v69 >= (unsigned __int64)((v71 - v70) >> 3) )
          __fastfail(5u);
        if ( *(_DWORD *)(*(_QWORD *)(v70 + 8LL * v69) + 4LL) == *a2 )
          break;
        if ( ++v69 >= (unsigned __int64)((v71 - v70) >> 3) )
          goto LABEL_94;
      }
      v26[2382] |= 0x10u;
    }
  }
LABEL_94:
  v72 = qword_14138A6F0;
  if ( qword_14138A6F0 == 0 )
  {
    if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  v107 = &PXEngine::SafeActorPtr::`vftable';
  v108 = 0xBADF00D00000000LL;
  v115 = &PXEngine::SafeActorPtr::`vftable';
  v116 = 0;
  v117 = 195948557;
  v73 = sub_1405FD6C0(
          a1: (__int64 *)qword_14138A6F0,
          a2: (__int64)v118,
          a3: (__int64)&v119,
          a4: "this/PlayerItem",
          a5: (__int64)&v115,
          a6: (__int64)&v107,
          a7: nullptr,
          a8: 0,
          a9: 0);
  if ( (unsigned __int8)sub_1406006A0(a1: v72, a2: v73, a3: 1) != 0 )
  {
    sub_1405F1D60(a1: (__int64)&v104, a2: *(_DWORD *)(v73 + 12), a3: *(_DWORD *)(v73 + 8));
  }
  else
  {
    v105 = 0;
    v106 = 195948557;
  }
  v104 = &PXEngine::SafeActorPtrAs<CPXActor>::`vftable';
  v74 = sub_1405F1EE0(a1: (__int64)&v104);
  if ( v74 != 0 )
    sub_1400C29E0(a1: v74);
  if ( (unsigned __int8)(a3 - 18) <= 1u || (unsigned __int8)(a3 - 21) <= 1u )
  {
    LOBYTE(v75) = 18;
    sub_1407884C0(a1: v26, a2: v75, a3: 0, a4: 0xFFFFFFFFLL);
  }
  v78 = (void **)(a1 + 1912);
  v79 = *(_QWORD *)(a1 + 1912);
  v80 = *(_QWORD *)(v79 + 8);
  v81 = v79;
  if ( *(_BYTE *)(v80 + 25) != 0 )
  {
    v83 = 0;
    v82 = *(void ***)(v79 + 8);
  }
  else
  {
    do
    {
      v82 = (void **)v80;
      if ( *(_DWORD *)(v80 + 32) >= *a2 )
      {
        v83 = 1;
        v81 = v80;
        v80 = *(_QWORD *)v80;
      }
      else
      {
        v83 = 0;
        v80 = *(_QWORD *)(v80 + 16);
      }
    }
    while ( *(_BYTE *)(v80 + 25) == 0 );
    v78 = (void **)(a1 + 1912);
  }
  if ( *(_BYTE *)(v81 + 25) != 0 || *a2 < *(_DWORD *)(v81 + 32) )
  {
    if ( *(_QWORD *)(a1 + 1920) == 0x492492492492492LL )
      sub_14005A5D0(a1: v81, a2: v78, a3: v76, a4: v77);
    v107 = v78;
    v108 = 0;
    v84 = sub_1409DB470(a1: 56);
    *(_DWORD *)(v84 + 32) = *a2;
    *(_DWORD *)(v84 + 48) = 0;
    *(_DWORD *)(v84 + 52) = 195948557;
    *(_QWORD *)(v84 + 40) = &PXEngine::SafeActorPtrAs<CPXPlayerTPNet>::`vftable';
    *(_QWORD *)v84 = v79;
    *(_QWORD *)(v84 + 8) = v79;
    *(_QWORD *)(v84 + 16) = v79;
    *(_WORD *)(v84 + 24) = 0;
    v107 = v82;
    v108 = __PAIR64__(v134, v83);
    v81 = sub_14005A200(a1: a1 + 1912, a2: &v107, a3: v84);
  }
  sub_1405F1D80(a1: v81 + 40, a2: &v119);
  sub_140607ED0(a1: 19, a2: (unsigned int)++*(_DWORD *)(a1 + 1908));
  v85 = qword_14138A6F0;
  if ( qword_14138A6F0 == 0 )
  {
    if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  v86 = sub_1405FD2E0(a1: (_QWORD *)qword_14138A6F0, a2: (__int64)v118, a3: (__int64)"ClubManager");
  if ( (unsigned __int8)sub_1406006A0(a1: v85, a2: v86, a3: 287) != 0 )
  {
    sub_1405F1D60(a1: (__int64)&v104, a2: *(_DWORD *)(v86 + 12), a3: *(_DWORD *)(v86 + 8));
  }
  else
  {
    v105 = 0;
    v106 = 195948557;
  }
  v104 = &PXEngine::SafeActorPtrAs<PXEngine::ClubManager>::`vftable';
  v87 = sub_1405F1EE0(a1: (__int64)&v104);
  if ( v87 != 0 )
  {
    v88 = *(_QWORD *)(v87 + 1176);
    if ( v88 != 0 )
    {
      v89 = sub_1404533A0(a1: *(_QWORD *)(v87 + 1176), a2: *a2);
      if ( v89 != 0 )
      {
        v90 = sub_1407B9B80(a1, a2: (__int64)v118, a3: *(_DWORD *)(v89 + 16));
        v91 = sub_1405F1EE0(a1: v90);
        if ( v91 != 0 )
        {
          *(_BYTE *)(v91 + 2382) |= 0x20u;
          sub_140799730(a1: v91, a2: v88 + 248);
        }
      }
    }
  }
  v92 = (__int64 *)qword_14138A6F0;
  if ( qword_14138A6F0 == 0 )
  {
    if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    goto LABEL_142;
  }
  v107 = &PXEngine::SafeActorPtr::`vftable';
  v108 = 0xBADF00D00000000LL;
  sub_1405F1D40(a1: (__int64)v118, a2: a1 + 120);
  v115 = &PXEngine::SafeActorPtr::`vftable';
  v116 = 0;
  v117 = 195948557;
  v93 = sub_1405FD6C0(
          a1: v92,
          a2: (__int64)&v133,
          a3: (__int64)v118,
          a4: "global/PetPosition",
          a5: (__int64)&v115,
          a6: (__int64)&v107,
          a7: nullptr,
          a8: 0,
          a9: 0);
  if ( (unsigned __int8)sub_1406006A0(a1: v92, a2: v93, a3: 1) != 0 )
  {
    sub_1405F1D60(a1: (__int64)&v104, a2: *(_DWORD *)(v93 + 12), a3: *(_DWORD *)(v93 + 8));
  }
  else
  {
    v105 = 0;
    v106 = 195948557;
  }
  v104 = &PXEngine::SafeActorPtrAs<CPXActor>::`vftable';
  v94 = sub_1405F1EE0(a1: (__int64)&v104);
  sub_1405F1D40(a1: (__int64)&v112, a2: (__int64)(v112 + 15));
  LOBYTE(v95) = 10;
  v96 = sub_1404882D0(a1: v109, a2: &v112, a3: v95);
  if ( v96 != 0 && v94 != 0 && (*(_BYTE *)(v96 + 1225) & 8) != 0 )
  {
    v97 = sub_1403B7770(a1: v26, a2: v94, a3: "PetSlave", a4: *(unsigned int *)(v96 + 16));
    sub_140799E40(a1: v26, a2: v97);
  }
  sub_140790CF0(a1: v26, a2: a2 + 60);
  sub_1400778C0(a1: v127);
  if ( *((_QWORD *)&v132 + 1) > 0xFu )
  {
    v98 = (void *)v131;
    if ( (unsigned __int64)(*((_QWORD *)&v132 + 1) + 1LL) >= 0x1000 )
    {
      if ( (unsigned __int64)(v131 - *(_QWORD *)(v131 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v98 = *(void **)(v131 - 8);
    }
    sub_1409DB4C0(lpMem: v98);
  }
  *(_QWORD *)&v131 = 19937;
  *(_QWORD *)&v132 = 0;
  *((_QWORD *)&v132 + 1) = 31;
  sub_1400778C0(a1: v126);
  v142 = 7;
  v143 = 8;
  sub_140017A10(a1: v141);
  sub_140082DD0(a1: v140);
  return sub_14001B5A0(a1: &v138);
}