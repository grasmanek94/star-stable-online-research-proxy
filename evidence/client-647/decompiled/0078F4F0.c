__int64 __fastcall sub_14078F4F0(_QWORD *a1, __int64 a2)
{
  __int64 *v4; // r14
  __int64 v5; // r12
  __int64 v6; // rbx
  int v7; // esi
  int v8; // ecx
  int v9; // edx
  __int64 v10; // r15
  __int64 v11; // rbx
  int v12; // ecx
  int v13; // edx
  __int64 v14; // rbx
  int v15; // ecx
  int v16; // edx
  __int64 v17; // rbx
  int v18; // ecx
  int v19; // edx
  __int64 v20; // rbx
  int v21; // eax
  int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // ecx
  int v31; // edx
  void **v32; // rbx
  void *v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int128 v44; // xmm1
  __int64 v45; // rax
  _BYTE *v46; // rbx
  char *v47; // rax
  unsigned __int64 v48; // rcx
  __int64 v49; // rax
  void *v50; // r8
  __int64 v51; // r14
  __int64 v52; // rbx
  int v53; // eax
  int v54; // ecx
  int v55; // ecx
  int v56; // edx
  __int64 *v57; // r14
  _BYTE *v58; // rbx
  __int64 v59; // rbx
  int v60; // eax
  __int64 v61; // rax
  __int64 v62; // rbx
  __int64 v63; // r8
  __int64 v64; // rax
  __int64 v65; // rsi
  __int64 v66; // rbx
  unsigned int v67; // eax
  __int64 *v68; // rbx
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 *v71; // rbx
  __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 *v74; // rbx
  __int64 v75; // rcx
  __int64 v76; // rcx
  __int64 *v77; // rbx
  __int64 v78; // rcx
  __int64 v79; // rcx
  __int64 v80; // r9
  unsigned int v81; // r8d
  __int64 v82; // r10
  __int64 v83; // r11
  __int64 v84; // rcx
  __int64 v85; // rax
  void **v86; // rbx
  void *v87; // rcx
  __int64 v88; // rax
  __int64 result; // rax
  char **v90; // rcx
  char v91; // al
  void **v92; // [rsp+50h] [rbp-79h] BYREF
  int v93; // [rsp+58h] [rbp-71h]
  int v94; // [rsp+5Ch] [rbp-6Dh]
  void **v95; // [rsp+60h] [rbp-69h] BYREF
  int v96; // [rsp+68h] [rbp-61h]
  int v97; // [rsp+6Ch] [rbp-5Dh]
  char v98[8]; // [rsp+70h] [rbp-59h] BYREF
  __int64 v99; // [rsp+78h] [rbp-51h]
  void **v100; // [rsp+80h] [rbp-49h] BYREF
  int v101; // [rsp+88h] [rbp-41h]
  int v102; // [rsp+8Ch] [rbp-3Dh]
  void **v103; // [rsp+90h] [rbp-39h] BYREF
  int v104; // [rsp+98h] [rbp-31h]
  int v105; // [rsp+9Ch] [rbp-2Dh]
  __int128 v106; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v107; // [rsp+B0h] [rbp-19h]
  unsigned __int64 v108; // [rsp+B8h] [rbp-11h]
  __int128 v109; // [rsp+C0h] [rbp-9h] BYREF
  __int128 v110; // [rsp+D0h] [rbp+7h]

  *((_BYTE *)a1 + 2384) |= 1u;
  v4 = (__int64 *)sub_140619120(a1: a2);
  v5 = (__int64)(a1 + 15);
  sub_1405F1D40(a1: (__int64)&v100, a2: (__int64)(a1 + 15));
  v6 = sub_1405FAF00(a1: (_DWORD)v4, a2: (unsigned int)v98, a3: (unsigned int)&v100, a4: 33, a5: 1);
  v7 = 195948557;
  if ( (unsigned __int8)sub_1406006A0(a1: v4, a2: v6, a3: 33) != 0 )
  {
    sub_1405F1D60(a1: (__int64)&v92, a2: *(_DWORD *)(v6 + 12), a3: *(_DWORD *)(v6 + 8));
    v8 = v94;
    v9 = v93;
  }
  else
  {
    v9 = 0;
    v8 = 195948557;
  }
  v92 = &PXEngine::SafeActorPtrAs<CPXSkinMesh>::`vftable';
  *((_DWORD *)a1 + 106) = v9;
  *((_DWORD *)a1 + 107) = v8;
  v10 = sub_1405F1EE0(a1: (__int64)(a1 + 52));
  sub_1405F1D40(a1: (__int64)&v100, a2: (__int64)(a1 + 15));
  v11 = sub_1405FAF00(a1: (_DWORD)v4, a2: (unsigned int)v98, a3: (unsigned int)&v100, a4: 93, a5: 1);
  if ( (unsigned __int8)sub_1406006A0(a1: v4, a2: v11, a3: 93) != 0 )
  {
    sub_1405F1D60(a1: (__int64)&v92, a2: *(_DWORD *)(v11 + 12), a3: *(_DWORD *)(v11 + 8));
    v12 = v94;
    v13 = v93;
  }
  else
  {
    v13 = 0;
    v12 = 195948557;
  }
  v92 = &PXEngine::SafeActorPtrAs<CPXFacialAnimation>::`vftable';
  *((_DWORD *)a1 + 118) = v13;
  *((_DWORD *)a1 + 119) = v12;
  sub_1405F1D40(a1: (__int64)&v100, a2: (__int64)(a1 + 15));
  v14 = sub_1405FADF0(
          a1: v4,
          a2: (__int64)v98,
          a3: (__int64)&v100,
          a4: (int)&qword_14100E8B8,
          a5: -1,
          a6: -1,
          a7: -1,
          a8: 1);
  if ( (unsigned __int8)sub_1405F1F70(a1: v14, a2: 31) != 0 )
  {
    sub_1405F1D60(a1: (__int64)&v92, a2: *(_DWORD *)(v14 + 12), a3: *(_DWORD *)(v14 + 8));
    v15 = v94;
    v16 = v93;
  }
  else
  {
    v16 = 0;
    v15 = 195948557;
  }
  v92 = &PXEngine::SafeActorPtrAs<CPXSpeaker>::`vftable';
  *((_DWORD *)a1 + 110) = v16;
  *((_DWORD *)a1 + 111) = v15;
  v17 = sub_1405FD2E0(a1: v4, a2: (__int64)v98, a3: (__int64)"SoundMixer");
  if ( (unsigned __int8)sub_1406006A0(a1: v4, a2: v17, a3: 38) != 0 )
  {
    sub_1405F1D60(a1: (__int64)&v92, a2: *(_DWORD *)(v17 + 12), a3: *(_DWORD *)(v17 + 8));
    v18 = v94;
    v19 = v93;
  }
  else
  {
    v19 = 0;
    v18 = 195948557;
  }
  v92 = &PXEngine::SafeActorPtrAs<CPXSoundMixer>::`vftable';
  dword_141313B80 = v19;
  dword_141313B84 = v18;
  if ( (unsigned __int8)sub_1400AE640(a1) != 0 )
  {
    sub_1405F1D40(a1: (__int64)&v100, a2: (__int64)(a1 + 15));
    v20 = sub_1405FAF00(a1: (_DWORD)v4, a2: (unsigned int)v98, a3: (unsigned int)&v100, a4: 29, a5: 1);
    if ( (unsigned __int8)sub_1406006A0(a1: v4, a2: v20, a3: 29) != 0 )
    {
      sub_1405F1D60(a1: (__int64)&v92, a2: *(_DWORD *)(v20 + 12), a3: *(_DWORD *)(v20 + 8));
      v21 = v94;
      v22 = v93;
    }
    else
    {
      v22 = 0;
      v21 = 195948557;
    }
    v92 = &PXEngine::SafeActorPtrAs<CPXCamera>::`vftable';
    *((_DWORD *)a1 + 114) = v22;
    *((_DWORD *)a1 + 115) = v21;
    if ( (unsigned __int8)sub_1405F1E20(a1: a1 + 56) == 0 )
    {
      v90 = off_14100E800;
LABEL_123:
      v91 = sub_140059CA0(a1: v90);
LABEL_124:
      if ( v91 != 0 )
        __debugbreak();
      sub_1409E29B8(a1: 999);
      __debugbreak();
    }
    v23 = sub_1406193F0(a1: a2);
    v24 = sub_140620830(a1: v23);
    sub_1405F1D40(a1: (__int64)&v103, a2: (__int64)(a1 + 56));
    v103 = &PXEngine::SafeActorPtrAs<CPXCamera>::`vftable';
    sub_1405CC460(a1: v24, a2: &v103);
    v5 = (__int64)(a1 + 15);
    sub_1405F1D40(a1: (__int64)&v100, a2: (__int64)(a1 + 15));
    v25 = sub_1405FADF0(
            a1: v4,
            a2: (__int64)v98,
            a3: (__int64)&v100,
            a4: (int)&qword_14100D498,
            a5: -1,
            a6: -1,
            a7: -1,
            a8: 1);
    *((_DWORD *)a1 + 122) = *(_DWORD *)(v25 + 8);
    *((_DWORD *)a1 + 123) = *(_DWORD *)(v25 + 12);
    v26 = sub_140619130(a1: a2);
    v27 = sub_1403C4670(a1: v98, a2: v26);
    v28 = sub_1405F1EE0(a1: v27);
    if ( v28 != 0 )
    {
      v29 = sub_1400332E0(a1: v28, a2: "WalkingDistance");
      if ( v29 != 0
        && (sub_1405F1D40(a1: (__int64)&v103, a2: v29 + 120),
            (unsigned __int8)sub_1406006A0(a1: v4, a2: &v103, a3: 237) != 0) )
      {
        sub_1405F1D60(a1: (__int64)&v95, a2: v105, a3: v104);
        v30 = v97;
        v31 = v96;
      }
      else
      {
        v31 = 0;
        v30 = 195948557;
      }
      v95 = &PXEngine::SafeActorPtrAs<CPXStatistics>::`vftable';
      *((_DWORD *)a1 + 420) = v31;
      *((_DWORD *)a1 + 421) = v30;
    }
    v32 = (void **)sub_1409DB470(a1: 48);
    v92 = v32;
    if ( v32 != nullptr )
    {
      v106 = 0;
      v107 = 6;
      v108 = 15;
      strcpy((char *)&v106, "player");
      *v32 = &IPXConsoleCommand::`vftable';
      sub_140016F80(a1: v32 + 1, a2: &v106);
      if ( v108 > 0xF )
      {
        v33 = (void *)v106;
        if ( v108 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v106 - *(_QWORD *)(v106 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v33 = *(void **)(v106 - 8);
        }
        sub_1409DB4C0(lpMem: v33);
      }
      *(_QWORD *)&v106 = 19937;
      v107 = 0;
      v108 = 31;
      *v32 = &PXEngine::PlayerDebugCommand::`vftable';
      v32[5] = a1;
    }
    else
    {
      v32 = nullptr;
    }
    v92 = nullptr;
    v95 = v32;
    sub_140017900(a1: &v95);
    v92 = (void **)19937;
  }
  sub_1405F1D40(a1: (__int64)&v100, a2: v5);
  v34 = sub_1405FADF0(
          a1: v4,
          a2: (__int64)v98,
          a3: (__int64)&v100,
          a4: (int)&dword_140FDC150,
          a5: -1,
          a6: -1,
          a7: -1,
          a8: 1);
  *((_DWORD *)a1 + 130) = *(_DWORD *)(v34 + 8);
  *((_DWORD *)a1 + 131) = *(_DWORD *)(v34 + 12);
  *((_BYTE *)a1 + 2384) |= 0x60u;
  *((_BYTE *)a1 + 2383) |= 0x80u;
  v35 = sub_1405F1EE0(a1: (__int64)(a1 + 60));
  if ( v35 != 0 )
  {
    v38 = sub_1400C5EE0(a1: v35);
    a1[76] = *(_QWORD *)v38;
    *((_DWORD *)a1 + 154) = *(_DWORD *)(v38 + 8);
  }
  v39 = sub_1400AF100(a1: v37, a2: v36);
  v40 = sub_1400C5F00(a1, a2: &v95, a3: v39);
  *(_QWORD *)((char *)a1 + 276) = *(_QWORD *)v40;
  *((_DWORD *)a1 + 71) = *(_DWORD *)(v40 + 8);
  v43 = sub_1400AF100(a1: v42, a2: v41);
  v44 = *(_OWORD *)sub_1400C5FE0(a1, a2: v98, a3: v43);
  a1[38] = *(_QWORD *)((char *)a1 + 276);
  *((_DWORD *)a1 + 78) = *((_DWORD *)a1 + 71);
  *((_OWORD *)a1 + 18) = v44;
  *(_OWORD *)((char *)a1 + 316) = v44;
  *((_DWORD *)a1 + 68) = 0;
  if ( (a1[298] & 2) != 0 )
    *((_BYTE *)a1 + 2383) &= ~2u;
  v45 = sub_1405F1EE0(a1: (__int64)(a1 + 56));
  if ( v45 != 0 )
    sub_140112F30(a1: v45);
  v46 = a1 + 267;
  v109 = 0;
  v110 = 0u;
  v47 = (char *)sub_1409DB470(a1: 32);
  *(_QWORD *)&v109 = v47;
  *(_QWORD *)&v110 = 24;
  *((_QWORD *)&v110 + 1) = 31;
  strcpy(v47, "global/PlayerLookManager");
  if ( a1 + 267 == (_QWORD *)&v109 )
  {
    sub_1409DB4C0(lpMem: v47);
  }
  else
  {
    v48 = a1[270];
    if ( v48 > 0xF )
    {
      v49 = *(_QWORD *)v46;
      if ( v48 + 1 < 0x1000 )
      {
        v50 = *(void **)v46;
      }
      else
      {
        v50 = *(void **)(v49 - 8);
        if ( (unsigned __int64)(v49 - (_QWORD)v50 - 8) > 0x1F )
LABEL_109:
          __fastfail(5u);
      }
      sub_1409DB4C0(lpMem: v50);
    }
    *(_OWORD *)v46 = v109;
    *(_OWORD *)(a1 + 269) = v110;
  }
  *(_QWORD *)&v109 = 19937;
  *((_QWORD *)&v110 + 1) = 31;
  if ( a1[269] != 0 )
  {
    sub_1405F1D40(a1: (__int64)v98, a2: v5);
    if ( (unsigned __int8)sub_1405F1E20(a1: a1 + 271) == 0 )
    {
      v51 = qword_14138A6F0;
      if ( qword_14138A6F0 == 0 )
      {
        if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
          __debugbreak();
        sub_1409E29B8(a1: 999);
        __debugbreak();
      }
      v103 = &PXEngine::SafeActorPtr::`vftable';
      v104 = 0;
      v105 = 195948557;
      if ( a1[270] > 0xFu )
        v46 = *(_BYTE **)v46;
      v100 = &PXEngine::SafeActorPtr::`vftable';
      v101 = 0;
      v102 = 195948557;
      v52 = sub_1405FD6C0(
              a1: (__int64 *)qword_14138A6F0,
              a2: (__int64)&v106,
              a3: (__int64)v98,
              a4: v46,
              a5: (__int64)&v100,
              a6: (__int64)&v103,
              a7: nullptr,
              a8: 0,
              a9: 0);
      if ( (unsigned __int8)sub_1406006A0(a1: v51, a2: v52, a3: 1) != 0 )
      {
        sub_1405F1D60(a1: (__int64)&v92, a2: *(_DWORD *)(v52 + 12), a3: *(_DWORD *)(v52 + 8));
        v92 = &PXEngine::SafeActorPtrAs<CPXActor>::`vftable';
        v53 = v94;
        v54 = v93;
      }
      else
      {
        v54 = 0;
        v53 = 195948557;
        v92 = &PXEngine::SafeActorPtrAs<CPXActor>::`vftable';
      }
      v95 = &PXEngine::SafeActorPtr::`vftable';
      v96 = v54;
      v97 = v53;
      if ( sub_1405F1EE0(a1: (__int64)&v95) != 0 )
      {
        if ( (unsigned __int8)sub_1405F1F70(a1: &v95, a2: 291) != 0 )
        {
          sub_1405F1D60(a1: (__int64)&v92, a2: v97, a3: v96);
          v55 = v94;
          v56 = v93;
        }
        else
        {
          v56 = 0;
          v55 = 195948557;
        }
        v92 = &PXEngine::SafeActorPtrAs<PXEngine::PlayerLookManager>::`vftable';
        *((_DWORD *)a1 + 544) = v56;
        *((_DWORD *)a1 + 545) = v55;
      }
      else
      {
        sub_1405F1FB0(a1: a1 + 271);
      }
      sub_1405F1E20(a1: a1 + 271);
    }
    v5 = (__int64)(a1 + 15);
  }
  if ( a1[236] != 0 )
  {
    v57 = (__int64 *)qword_14138A6F0;
    if ( qword_14138A6F0 == 0 )
    {
      if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
        __debugbreak();
      sub_1409E29B8(a1: 999);
      __debugbreak();
    }
    v100 = &PXEngine::SafeActorPtr::`vftable';
    v101 = 0;
    v102 = 195948557;
    v58 = a1 + 234;
    if ( a1[237] > 0xFu )
      v58 = *(_BYTE **)v58;
    sub_1405F1D40(a1: (__int64)v98, a2: *(_QWORD *)&nExitCode + 120LL);
    v103 = &PXEngine::SafeActorPtr::`vftable';
    v104 = 0;
    v105 = 195948557;
    v59 = sub_1405FD6C0(
            a1: v57,
            a2: (__int64)&v106,
            a3: (__int64)v98,
            a4: v58,
            a5: (__int64)&v103,
            a6: (__int64)&v100,
            a7: nullptr,
            a8: 0,
            a9: 0);
    if ( (unsigned __int8)sub_1406006A0(a1: v57, a2: v59, a3: 1) != 0 )
    {
      sub_1405F1D60(a1: (__int64)&v95, a2: *(_DWORD *)(v59 + 12), a3: *(_DWORD *)(v59 + 8));
      v95 = &PXEngine::SafeActorPtrAs<CPXActor>::`vftable';
      v7 = v97;
      v60 = v96;
    }
    else
    {
      v60 = 0;
      v95 = &PXEngine::SafeActorPtrAs<CPXActor>::`vftable';
    }
    *((_DWORD *)a1 + 466) = v60;
    *((_DWORD *)a1 + 467) = v7;
  }
  if ( (unsigned __int8)sub_1400AE640(a1) != 0 )
  {
    sub_1400BA030(a1);
    sub_1400B9FF0(a1);
  }
  sub_1400B7A00(a1, a2);
  if ( (unsigned __int8)sub_1400AE640(a1) != 0 )
  {
    v61 = sub_140487E00(a1: &v106);
    v62 = sub_1405F1EE0(a1: v61);
    if ( v62 == 0 )
    {
      v91 = sub_140059D90(a1: off_14100E858, a2: "Equipment Manager is not available in PXPlayerTPNet::PreCalculate");
      goto LABEL_124;
    }
    sub_1405F1D40(a1: (__int64)v98, a2: v5);
    LOBYTE(v63) = 1;
    sub_140489F80(a1: v62, a2: v98, a3: v63);
  }
  v64 = sub_1405F1EE0(a1: (__int64)(a1 + 232));
  v65 = v64;
  if ( v64 != 0 && (unsigned __int8)sub_1406456B0(a1: v64, a2: 227) != 0 )
  {
    if ( v10 != 0 )
    {
      v66 = *a1;
      v67 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v65 + 152LL))(a1: v65);
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD, __int64))(v66 + 984))(a1, a2: v67, a3: 1) != 0 )
      {
        *(_BYTE *)(v10 + 860) |= 1u;
        sub_1400AE220(a1);
        sub_1400F6E60(a1: v10);
      }
    }
    *((_BYTE *)a1 + 252) = 19;
  }
  if ( v10 != 0 )
  {
    sub_1400F1D30(a1: v10, a2: a1);
    *(_BYTE *)(v10 + 860) |= 8u;
  }
  if ( (_QWORD)xmmword_1413AA080 == 0 )
  {
    v68 = (__int64 *)sub_1400AFBC0(a1, a2: v98, a3: "Large", a4: 2);
    sub_140645820(a1: *((_QWORD *)&xmmword_1413AA080 + 1));
    v69 = *v68;
    *v68 = 0;
    *(_QWORD *)&xmmword_1413AA080 = v69;
    v70 = v68[1];
    v68[1] = 0;
    *((_QWORD *)&xmmword_1413AA080 + 1) = v70;
    sub_140645820(a1: v99);
  }
  if ( (_QWORD)xmmword_1413AA090 == 0 )
  {
    v71 = (__int64 *)sub_1400AFBC0(a1, a2: v98, a3: "Small", a4: 2);
    sub_140645820(a1: *((_QWORD *)&xmmword_1413AA090 + 1));
    v72 = *v71;
    *v71 = 0;
    *(_QWORD *)&xmmword_1413AA090 = v72;
    v73 = v71[1];
    v71[1] = 0;
    *((_QWORD *)&xmmword_1413AA090 + 1) = v73;
    sub_140645820(a1: v99);
  }
  if ( (_QWORD)xmmword_1413AA0A0 == 0 )
  {
    v74 = (__int64 *)sub_1400AFDB0(a1, a2: v98, a3: "ChatDialogFrame", a4: 2);
    sub_140645820(a1: *((_QWORD *)&xmmword_1413AA0A0 + 1));
    v75 = *v74;
    *v74 = 0;
    *(_QWORD *)&xmmword_1413AA0A0 = v75;
    v76 = v74[1];
    v74[1] = 0;
    *((_QWORD *)&xmmword_1413AA0A0 + 1) = v76;
    sub_140645820(a1: v99);
    sub_140645A30(a1: *((_QWORD *)&xmmword_1413AA0A0 + 1));
    sub_140645820(a1: a1[229]);
    *((_OWORD *)a1 + 114) = xmmword_1413AA0A0;
  }
  if ( (_QWORD)xmmword_1413AA0B0 == 0 )
  {
    v77 = (__int64 *)sub_1400AFDB0(a1, a2: v98, a3: "EmoteDialogFrame", a4: 2);
    sub_140645820(a1: *((_QWORD *)&xmmword_1413AA0B0 + 1));
    v78 = *v77;
    *v77 = 0;
    *(_QWORD *)&xmmword_1413AA0B0 = v78;
    v79 = v77[1];
    v77[1] = 0;
    *((_QWORD *)&xmmword_1413AA0B0 + 1) = v79;
    sub_140645820(a1: v99);
  }
  v80 = a1[10];
  if ( v80 != 0 )
  {
    v81 = 0;
    v82 = *(_QWORD *)(v80 + 24);
    if ( (*(_QWORD *)(v80 + 32) - v82) / 168 != 0 )
    {
      v83 = *(_QWORD *)(v80 + 32);
      while ( 1 )
      {
        if ( v81 >= (unsigned __int64)((v83 - v82) / 168) )
          goto LABEL_109;
        v84 = v82 + 168LL * v81;
        if ( *(_BYTE *)(v84 + 162) != 0 )
          break;
        if ( ++v81 >= (unsigned __int64)((v83 - v82) / 168) )
          goto LABEL_100;
      }
      a1[200] = v84;
    }
  }
LABEL_100:
  v85 = sub_1400C40D0(a1, a2: &v95);
  *((float *)a1 + 85) = sub_14008CD90(a1: v85);
  *((_BYTE *)a1 + 2380) |= 8u;
  sub_140799DB0(a1);
  if ( sub_140786D90(a1) == 0 )
  {
    v90 = off_14100E880;
    goto LABEL_123;
  }
  v86 = (void **)sub_1409DB470(a1: 40);
  v92 = v86;
  if ( v86 != nullptr )
  {
    v107 = 8;
    v108 = 15;
    v106 = *(unsigned __int64 *)"teleport";
    *v86 = &IPXConsoleCommand::`vftable';
    sub_140016F80(a1: v86 + 1, a2: &v106);
    if ( v108 > 0xF )
    {
      v87 = (void *)v106;
      if ( v108 + 1 >= 0x1000 )
      {
        if ( (unsigned __int64)(v106 - *(_QWORD *)(v106 - 8) - 8) > 0x1F )
          __fastfail(5u);
        v87 = *(void **)(v106 - 8);
      }
      sub_1409DB4C0(lpMem: v87);
    }
    *v86 = &PXEngine::TeleportConsoleCommand::`vftable';
  }
  else
  {
    v86 = nullptr;
  }
  v92 = nullptr;
  v95 = v86;
  sub_140017900(a1: &v95);
  v88 = sub_140699880(a1: qword_14138A6F8, a2: &v95);
  a1[19] = *(_QWORD *)v88;
  result = *(unsigned int *)(v88 + 8);
  *((_DWORD *)a1 + 40) = result;
  return result;
}