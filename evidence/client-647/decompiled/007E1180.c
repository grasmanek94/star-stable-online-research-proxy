void __fastcall sub_1407E1180(__int64 a1)
{
  const char *v2; // r8
  __int64 v3; // rdi
  __int64 v4; // rax
  int v5; // ecx
  int v6; // edx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // rax
  int v14; // r14d
  int v15; // eax
  void *v16; // rcx
  __int64 v17; // rax
  _DWORD *v18; // rax
  unsigned int v19; // xmm0_4
  unsigned int v20; // xmm1_4
  int v21; // xmm2_4
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  int v51; // eax
  __int64 v52; // rbx
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  int v56; // eax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  void *v63; // rcx
  __int64 v64; // [rsp+38h] [rbp-C8h]
  __int64 v65; // [rsp+38h] [rbp-C8h]
  __int64 v66; // [rsp+38h] [rbp-C8h]
  __int64 v67; // [rsp+38h] [rbp-C8h]
  __int64 v68; // [rsp+38h] [rbp-C8h]
  __int64 v69; // [rsp+38h] [rbp-C8h]
  __int64 v70; // [rsp+38h] [rbp-C8h]
  void **v71; // [rsp+40h] [rbp-C0h] BYREF
  int v72; // [rsp+48h] [rbp-B8h]
  int v73; // [rsp+4Ch] [rbp-B4h]
  __int128 v74; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v75; // [rsp+60h] [rbp-A0h]
  __int64 v76; // [rsp+68h] [rbp-98h]
  char v77; // [rsp+70h] [rbp-90h]
  unsigned __int64 v78; // [rsp+78h] [rbp-88h]
  __int64 v79; // [rsp+80h] [rbp-80h]
  void **v80; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v81; // [rsp+90h] [rbp-70h]
  unsigned int v82; // [rsp+94h] [rbp-6Ch]
  void **v83; // [rsp+98h] [rbp-68h] BYREF
  int v84; // [rsp+A0h] [rbp-60h]
  int v85; // [rsp+A4h] [rbp-5Ch]
  _QWORD v86[3]; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v87; // [rsp+C0h] [rbp-40h]
  char v88; // [rsp+C8h] [rbp-38h]
  char v89; // [rsp+D0h] [rbp-30h]
  _BYTE v90[16]; // [rsp+E0h] [rbp-20h] BYREF
  _DWORD v91[8]; // [rsp+F0h] [rbp-10h] BYREF
  char v92; // [rsp+110h] [rbp+10h]
  unsigned __int64 v93; // [rsp+118h] [rbp+18h]
  __int64 v94; // [rsp+120h] [rbp+20h]
  char v95; // [rsp+140h] [rbp+40h]
  __int128 v96; // [rsp+148h] [rbp+48h] BYREF
  __int64 v97; // [rsp+158h] [rbp+58h]
  unsigned __int64 v98; // [rsp+160h] [rbp+60h]

  if ( *(_QWORD *)&nExitCode == 0 || sub_1407DEB00(a1, a2: 0) == 0 )
    return;
  sub_1407DEF10(a1, a2: v86);
  if ( v89 == 0 )
  {
    v2 = (const char *)v86;
    if ( v87 > 0xF )
      v2 = (const char *)v86[0];
    if ( (unsigned __int8)sub_140059D90(a1: off_141017260, a2: "%s", v2) != 0 )
      __debugbreak();
    if ( v89 != 0 && (v88 == -1 || v88 != 0) )
      return;
LABEL_65:
    sub_14001B5A0(a1: v86);
    return;
  }
  v3 = qword_14138A6F0;
  if ( qword_14138A6F0 == 0 )
  {
    if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  v4 = sub_1407DEB00(a1, a2: 0);
  if ( v4 != 0 && (sub_1405F1D40(a1: &v80, a2: v4 + 120), (unsigned __int8)sub_1406006A0(a1: v3, a2: &v80, a3: 1) != 0) )
  {
    sub_1405F1D60(a1: &v71, a2: v82, a3: v81);
    v5 = v73;
    v6 = v72;
  }
  else
  {
    v6 = 0;
    v5 = 195948557;
  }
  v71 = &PXEngine::SafeActorPtrAs<CPXActor>::`vftable';
  v83 = &PXEngine::SafeActorPtr::`vftable';
  v84 = v6;
  v85 = v5;
  if ( qword_14138A6F0 == 0 )
  {
    if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  v7 = sub_1405FADF0(
         a1: qword_14138A6F0,
         a2: (unsigned int)v90,
         a3: (unsigned int)&v83,
         a4: (unsigned int)"MoveState",
         a5: -1,
         a6: -1,
         a7: -1,
         1,
         v71);
  if ( (unsigned __int8)sub_1405F1F70(a1: v7, a2: 91) != 0 )
  {
    sub_1405F1D60(a1: &v80, a2: *(unsigned int *)(v7 + 12), a3: *(unsigned int *)(v7 + 8));
  }
  else
  {
    v81 = 0;
    v82 = 195948557;
  }
  v80 = &PXEngine::SafeActorPtrAs<CPXData>::`vftable';
  v10 = sub_1405F1EE0(a1: (__int64)&v80);
  if ( v10 == 0 )
  {
    if ( v89 != 0 )
    {
      if ( v88 == -1 || v88 != 0 )
        return;
      goto LABEL_65;
    }
    goto LABEL_66;
  }
  v11 = sub_1400AF100(a1: v9, a2: v8);
  LOBYTE(v64) = 1;
  v12 = sub_1405FADF0(
          a1: v11,
          a2: (unsigned int)&v96,
          a3: (unsigned int)&v83,
          a4: (unsigned int)"OfflineMove",
          a5: -1,
          a6: -1,
          a7: -1,
          v64);
  if ( (unsigned __int8)sub_1405F1F70(a1: v12, a2: 42) != 0 )
  {
    sub_1405F1D60(a1: &v71, a2: *(unsigned int *)(v12 + 12), a3: *(unsigned int *)(v12 + 8));
  }
  else
  {
    v72 = 0;
    v73 = 195948557;
  }
  v71 = &PXEngine::SafeActorPtrAs<CPXButton>::`vftable';
  v13 = sub_1405F1EE0(a1: (__int64)&v71);
  if ( v13 != 0 )
    v14 = sub_140149EC0(a1: v13);
  else
    v14 = 0;
  v15 = sub_14007FDC0(a1: v10 + 152, a2: 0);
  if ( v15 == 1 )
  {
    if ( *(_QWORD *)(a1 + 256) == *(_QWORD *)(a1 + 264) )
    {
      v96 = 0;
      v97 = 0;
      v98 = 0;
      sub_14000D7F0(a1: &v96, a2: "Select Location!\n", a3: 17);
      sub_1407DDFA0(a1, a2: &v96);
      if ( v98 > 0xF )
      {
        v16 = (void *)v96;
        if ( v98 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v96 - *(_QWORD *)(v96 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v16 = *(void **)(v96 - 8);
        }
        sub_1409DB4C0(lpMem: v16);
      }
    }
    else
    {
      v74 = 0;
      v75 = 0;
      v76 = 15;
      LOBYTE(v74) = 0;
      v77 = 0;
      v78 = 0;
      LODWORD(v79) = 0;
      BYTE4(v79) = 0;
      v17 = sub_1407DD7E0(a1: v86);
      sub_1407DDCE0(a1: &v74, a2: v17);
      BYTE4(v79) = v14 != 0;
      v18 = (_DWORD *)sub_140060700(a1: a1 + 256, a2: *(unsigned int *)(a1 + 280));
      v19 = v18[4];
      LODWORD(v78) = v19;
      v20 = v18[5];
      HIDWORD(v78) = v20;
      v21 = v18[6];
      LODWORD(v79) = v21;
      v80 = (void **)v91;
      v92 = -1;
      if ( v77 != -1 )
      {
        if ( v77 != 0 )
        {
          v91[0] = v74;
          v92 = 1;
        }
        else
        {
          sub_140016F80(a1: v91, a2: &v74);
          v92 = 0;
          v21 = v79;
          v20 = HIDWORD(v78);
          v19 = v78;
        }
      }
      v93 = __PAIR64__(v20, v19);
      LODWORD(v94) = v21;
      BYTE4(v94) = BYTE4(v79);
      v95 = 5;
      v22 = sub_1407DDE30(a1: &unk_141313D24, a2: &v96, a3: v91);
      sub_1407EE6B0(a1: v22);
      sub_1407E2780(a1: v91);
      sub_1407DDB80(a1: &v74);
    }
  }
  else
  {
    if ( v15 == 2 )
    {
      v74 = 0;
      v75 = 0;
      v76 = 15;
      LOBYTE(v74) = 0;
      v77 = 0;
      v78 = 0;
      v79 = 0;
      v23 = sub_1407DD7E0(a1: v86);
      sub_1407DDCE0(a1: &v74, a2: v23);
      BYTE4(v79) = v14 != 0;
      v26 = sub_1400AF100(a1: v25, a2: v24);
      LOBYTE(v65) = 1;
      v27 = sub_1405FADF0(
              a1: v26,
              a2: (unsigned int)&v96,
              a3: (unsigned int)&v83,
              a4: (unsigned int)"LockToGround",
              a5: -1,
              a6: -1,
              a7: -1,
              v65);
      v28 = sub_140303420(a1: v27, a2: v90);
      v29 = sub_1405F1EE0(a1: v28);
      if ( v29 != 0 )
      {
        BYTE5(v79) = (unsigned int)sub_140149EC0(a1: v29) != 0;
        v32 = sub_1400AF100(a1: v31, a2: v30);
        LOBYTE(v66) = 1;
        v33 = sub_1405FADF0(
                a1: v32,
                a2: (unsigned int)&v96,
                a3: (unsigned int)&v83,
                a4: (unsigned int)"MoveCharacter",
                a5: -1,
                a6: -1,
                a7: -1,
                v66);
        v34 = sub_140303420(a1: v33, a2: v90);
        v35 = sub_1405F1EE0(a1: v34);
        if ( v35 != 0 )
        {
          BYTE6(v79) = (unsigned int)sub_140149EC0(a1: v35) != 0;
          v38 = sub_1400AF100(a1: v37, a2: v36);
          LOBYTE(v67) = 1;
          v39 = sub_1405FADF0(
                  a1: v38,
                  a2: (unsigned int)&v96,
                  a3: (unsigned int)&v83,
                  a4: (unsigned int)"MoveHorse",
                  a5: -1,
                  a6: -1,
                  a7: -1,
                  v67);
          v40 = sub_140303420(a1: v39, a2: v90);
          v41 = sub_1405F1EE0(a1: v40);
          if ( v41 != 0 )
          {
            v42 = sub_140149EC0(a1: v41);
            HIBYTE(v79) = v42 != 0;
            if ( BYTE6(v79) != 0 || v42 != 0 )
            {
              v45 = sub_1400AF100(a1: v44, a2: v43);
              LOBYTE(v68) = 1;
              v46 = sub_1405FADF0(
                      a1: v45,
                      a2: (unsigned int)&v96,
                      a3: (unsigned int)&v83,
                      a4: (unsigned int)"PosX",
                      a5: -1,
                      a6: -1,
                      a7: -1,
                      v68);
              v47 = sub_1401355B0(a1: v46, a2: v90);
              v48 = sub_1405F1EE0(a1: v47);
              if ( v48 != 0 )
              {
                LODWORD(v78) = sub_14013A080(a1: v48);
                v51 = sub_1400AF100(a1: v50, a2: v49);
                LOBYTE(v69) = 1;
                v52 = sub_1405FADF0(
                        a1: v51,
                        a2: (unsigned int)&v96,
                        a3: (unsigned int)&v83,
                        a4: (unsigned int)"PosY",
                        a5: -1,
                        a6: -1,
                        a7: -1,
                        v69);
                if ( (unsigned __int8)sub_1405F1F70(a1: v52, a2: 40) != 0 )
                {
                  sub_1405F1D60(a1: &v71, a2: *(unsigned int *)(v52 + 12), a3: *(unsigned int *)(v52 + 8));
                }
                else
                {
                  v72 = 0;
                  v73 = 195948557;
                }
                v71 = &PXEngine::SafeActorPtrAs<CPXView>::`vftable';
                v53 = sub_1405F1EE0(a1: (__int64)&v71);
                if ( v53 != 0 )
                {
                  HIDWORD(v78) = sub_14013A080(a1: v53);
                  v56 = sub_1400AF100(a1: v55, a2: v54);
                  LOBYTE(v70) = 1;
                  v57 = sub_1405FADF0(
                          a1: v56,
                          a2: (unsigned int)&v96,
                          a3: (unsigned int)&v83,
                          a4: (unsigned int)"PosZ",
                          a5: -1,
                          a6: -1,
                          a7: -1,
                          v70);
                  v58 = sub_1401355B0(a1: v57, a2: v90);
                  v59 = sub_1405F1EE0(a1: v58);
                  if ( v59 != 0 )
                  {
                    LODWORD(v79) = sub_14013A080(a1: v59);
                    sub_1407DD8B0(a1: v91, a2: &v74);
                    v93 = v78;
                    v94 = v79;
                    v95 = 6;
                    v60 = sub_1407DDE30(a1: &unk_141313D24, a2: &v96, a3: v91);
                    sub_1407EE6B0(a1: v60);
                    sub_1407E2780(a1: v91);
                    sub_1407DDB80(a1: &v74);
                    goto LABEL_62;
                  }
                }
              }
            }
            else
            {
              v96 = 0;
              v97 = 0;
              v98 = 0;
              sub_14000D7F0(a1: &v96, a2: "Select something to move, player or/and horse!\n", a3: 47);
              sub_1407DDFA0(a1, a2: &v96);
              if ( v98 > 0xF )
                sub_14001A8F0(a1: &v96, a2: v96);
            }
          }
        }
      }
      sub_1407DDB80(a1: &v74);
      sub_1407DDBE0(a1: v86);
      return;
    }
    v61 = sub_1407DD7E0(a1: v86);
    sub_1407DD850(a1: &v96, a2: v61);
    sub_1407DD850(a1: v91, a2: &v96);
    v95 = 7;
    v62 = sub_1407DDE30(a1: &unk_141313D24, a2: &v74, a3: v91);
    sub_1407EE6B0(a1: v62);
    sub_1407E2780(a1: v91);
    v95 = -1;
    sub_1407DDB80(a1: &v96);
  }
LABEL_62:
  if ( v89 != 0 )
  {
    if ( v88 == -1 || v88 != 0 )
      return;
    goto LABEL_65;
  }
LABEL_66:
  if ( v87 > 0xF )
  {
    v63 = (void *)v86[0];
    if ( v87 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v86[0] - *(_QWORD *)(v86[0] - 8LL) - 8LL) > 0x1F )
        __fastfail(5u);
      v63 = *(void **)(v86[0] - 8LL);
    }
    sub_1409DB4C0(lpMem: v63);
  }
}