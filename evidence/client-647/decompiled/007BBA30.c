__int64 __fastcall sub_1407BBA30(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // r8
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // rdx
  _QWORD *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r9
  __int64 v23; // rdx
  _QWORD *v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r9
  __int64 v28; // rdx
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r9
  __int64 v33; // rdx
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r9
  __int64 v38; // rdx
  _QWORD *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r9
  __int64 v43; // rdx
  _QWORD *v44; // rax
  __int64 v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r9
  __int64 v49; // rdx
  _QWORD *v50; // rax
  __int64 v51; // rdi
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r9
  __int64 v55; // rdx
  _QWORD *v56; // rax
  __int64 v57; // rdi
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r9
  __int64 v61; // rdx
  _QWORD *v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r9
  __int64 v66; // rdx
  _QWORD *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r9
  __int64 v71; // rdx
  _QWORD *v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r9
  __int64 v76; // rdx
  _QWORD *v77; // rdi
  _QWORD *v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r9
  __int64 v82; // rdx
  _QWORD *v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r9
  __int64 v87; // rdx
  _QWORD *v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r9
  __int64 v92; // rdx
  _QWORD *v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r9
  __int64 v97; // rdx
  _QWORD *v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r9
  __int64 v102; // rdx
  _QWORD *v103; // rax
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r9
  __int64 v107; // rdx
  _QWORD *v108; // rax
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // r9
  __int64 v112; // rdx
  _QWORD *v113; // rax
  __int64 v114; // rdx
  __int64 v115; // rcx
  _QWORD *v116; // rax
  _QWORD *v117; // rax
  unsigned __int16 v119; // ax
  char **v120; // rcx
  unsigned __int16 v121; // ax
  unsigned __int16 v122; // ax
  __int64 (__fastcall *v123)(); // [rsp+20h] [rbp-99h] BYREF
  _QWORD *v124; // [rsp+28h] [rbp-91h]
  _BYTE v125[16]; // [rsp+30h] [rbp-89h] BYREF
  __int64 (__fastcall *v126)(); // [rsp+40h] [rbp-79h] BYREF
  _BYTE v127[200]; // [rsp+48h] [rbp-71h] BYREF
  _QWORD *v128; // [rsp+120h] [rbp+67h] BYREF
  __int64 v129; // [rsp+130h] [rbp+77h] BYREF

  v4 = 2
     * ((0x100000001B3LL
       * (HIBYTE(word_141313E30) ^ (0x100000001B3LL * ((unsigned __int8)word_141313E30 ^ 0xCBF29CE484222325uLL))))
      & a1[367]);
  v5 = a1[364];
  v6 = *(_QWORD *)(v5
                 + 16
                 * ((0x100000001B3LL
                   * (HIBYTE(word_141313E30)
                    ^ (0x100000001B3LL * ((unsigned __int8)word_141313E30 ^ 0xCBF29CE484222325uLL))))
                  & a1[367])
                 + 8);
  v7 = a1[362];
  if ( v6 != v7 )
  {
    v8 = *(_QWORD *)(v5 + 8 * v4);
    if ( word_141313E30 == *(_WORD *)(v6 + 16) )
    {
LABEL_5:
      if ( v6 == 0 )
        v6 = a1[362];
      if ( v6 != v7 )
      {
        v119 = sub_140205600(a1: &word_141313E30, a2: v4);
        v120 = off_141015318;
        goto LABEL_268;
      }
    }
    else
    {
      while ( v6 != v8 )
      {
        v6 = *(_QWORD *)(v6 + 8);
        if ( word_141313E30 == *(_WORD *)(v6 + 16) )
          goto LABEL_5;
      }
    }
  }
  v9 = (_QWORD *)sub_1409DB470(a1: 24);
  v128 = v9;
  if ( v9 != nullptr )
  {
    *v9 = &PXEngine::RpcExecutor::HandlerStub<std::_Front_binder<void (CPXNetwork::*)(enum PXEngine::ClientExitCode,std::optional<PXEngine::ClientMessages::LoginResponseData> const &),CPXNetwork *>,std::tuple<enum PXEngine::ClientExitCode,std::optional<PXEngine::ClientMessages::LoginResponseData>>>::`vftable';
    v9[1] = sub_1407CAF80;
    v9[2] = a1;
  }
  v129 = (__int64)v9;
  LOWORD(v128) = word_141313E30;
  sub_140203AF0(a1: a1 + 361, a2: &v123, a3: &v128, a4: &v129);
  if ( v129 != 0 )
    (**(void (__fastcall ***)(__int64, __int64))v129)(a1: v129, a2: 1);
  v129 = 19937;
  v10 = a1[364];
  v11 = *(_QWORD *)(v10
                  + 16
                  * ((0x100000001B3LL
                    * (HIBYTE(word_141313E38)
                     ^ (0x100000001B3LL * ((unsigned __int8)word_141313E38 ^ 0xCBF29CE484222325uLL))))
                   & a1[367])
                  + 8);
  v12 = a1[362];
  if ( v11 != v12 )
  {
    v13 = *(_QWORD *)(v10
                    + 16
                    * ((0x100000001B3LL
                      * (HIBYTE(word_141313E38)
                       ^ (0x100000001B3LL * ((unsigned __int8)word_141313E38 ^ 0xCBF29CE484222325uLL))))
                     & a1[367]));
    if ( word_141313E38 == *(_WORD *)(v11 + 16) )
    {
LABEL_16:
      if ( v11 == 0 )
        v11 = a1[362];
      if ( v11 != v12 )
      {
        v119 = sub_140205600(a1: &word_141313E38, a2: v13);
        v120 = off_141015340;
        goto LABEL_268;
      }
    }
    else
    {
      while ( v11 != v13 )
      {
        v11 = *(_QWORD *)(v11 + 8);
        if ( word_141313E38 == *(_WORD *)(v11 + 16) )
          goto LABEL_16;
      }
    }
  }
  v14 = (_QWORD *)sub_1409DB470(a1: 24);
  v128 = v14;
  if ( v14 != nullptr )
  {
    *v14 = &PXEngine::RpcExecutor::HandlerStub<std::_Front_binder<void (CPXNetwork::*)(enum PXEngine::ClientExitCode,PXEngine::CompressedBlob const &),CPXNetwork *>,std::tuple<enum PXEngine::ClientExitCode,PXEngine::CompressedBlob>>::`vftable';
    v14[1] = sub_1407CB340;
    v14[2] = a1;
  }
  v129 = (__int64)v14;
  LOWORD(v128) = word_141313E38;
  sub_140203AF0(a1: a1 + 361, a2: &v123, a3: &v128, a4: &v129);
  if ( v129 != 0 )
    (**(void (__fastcall ***)(__int64, __int64))v129)(a1: v129, a2: 1);
  v129 = 19937;
  v128 = a1;
  v126 = sub_1407CB1D0;
  sub_1407A30A0(a1: v127, a2: &v128, a3: a2);
  v15 = a1[364];
  v16 = *(_QWORD *)(v15
                  + 16
                  * ((0x100000001B3LL
                    * (HIBYTE(word_141313E34)
                     ^ (0x100000001B3LL * ((unsigned __int8)word_141313E34 ^ 0xCBF29CE484222325uLL))))
                   & a1[367])
                  + 8);
  v17 = a1[362];
  if ( v16 != v17 )
  {
    v18 = *(_QWORD *)(v15
                    + 16
                    * ((0x100000001B3LL
                      * (HIBYTE(word_141313E34)
                       ^ (0x100000001B3LL * ((unsigned __int8)word_141313E34 ^ 0xCBF29CE484222325uLL))))
                     & a1[367]));
    if ( word_141313E34 == *(_WORD *)(v16 + 16) )
    {
LABEL_27:
      if ( v16 == 0 )
        v16 = a1[362];
      if ( v16 != v17 )
      {
        v121 = sub_140205600(a1: &word_141313E34, a2: v18);
        if ( (unsigned __int8)sub_140059D90(a1: off_141015368, a2: "Method with message id %d already bound!", v121) != 0 )
          __debugbreak();
        sub_1409E29B8(a1: 999);
        __debugbreak();
      }
    }
    else
    {
      while ( v16 != v18 )
      {
        v16 = *(_QWORD *)(v16 + 8);
        if ( word_141313E34 == *(_WORD *)(v16 + 16) )
          goto LABEL_27;
      }
    }
  }
  v19 = (_QWORD *)sub_1409DB470(a1: 160);
  v128 = v19;
  if ( v19 != nullptr )
  {
    *v19 = &PXEngine::RpcExecutor::HandlerStub<std::_Front_binder<void (CPXNetwork::*)(PXEngine::ActorContext const &,unsigned int,unsigned int),CPXNetwork *,PXEngine::ActorContext>,std::tuple<unsigned int,unsigned int>>::`vftable';
    v19[1] = v126;
    sub_1407B06D0(a1: v19 + 2, a2: v127);
  }
  else
  {
    v19 = nullptr;
  }
  v129 = (__int64)v19;
  LOWORD(v128) = word_141313E34;
  sub_140203AF0(a1: a1 + 361, a2: &v123, a3: &v128, a4: &v129);
  if ( v129 != 0 )
    (**(void (__fastcall ***)(__int64, __int64))v129)(a1: v129, a2: 1);
  v129 = 19937;
  v128 = a1;
  v126 = sub_1407CBA90;
  sub_1407A30A0(a1: v127, a2: &v128, a3: a2);
  v20 = a1[364];
  v21 = *(_QWORD *)(v20
                  + 16
                  * ((0x100000001B3LL
                    * (HIBYTE(word_141314008)
                     ^ (0x100000001B3LL * ((unsigned __int8)word_141314008 ^ 0xCBF29CE484222325uLL))))
                   & a1[367])
                  + 8);
  v22 = a1[362];
  if ( v21 != v22 )
  {
    v23 = *(_QWORD *)(v20
                    + 16
                    * ((0x100000001B3LL
                      * (HIBYTE(word_141314008)
                       ^ (0x100000001B3LL * ((unsigned __int8)word_141314008 ^ 0xCBF29CE484222325uLL))))
                     & a1[367]));
    if ( word_141314008 == *(_WORD *)(v21 + 16) )
    {
LABEL_39:
      if ( v21 == 0 )
        v21 = a1[362];
      if ( v21 != v22 )
      {
        v122 = sub_140205600(a1: &word_141314008, a2: v23);
        if ( (unsigned __int8)sub_140059D90(a1: off_141015390, a2: "Method with message id %d already bound!", v122) != 0 )
          __debugbreak();
        sub_1409E29B8(a1: 999);
        __debugbreak();
      }
    }
    else
    {
      while ( v21 != v23 )
      {
        v21 = *(_QWORD *)(v21 + 8);
        if ( word_141314008 == *(_WORD *)(v21 + 16) )
          goto LABEL_39;
      }
    }
  }
  v24 = (_QWORD *)sub_1409DB470(a1: 160);
  v128 = v24;
  if ( v24 != nullptr )
  {
    *v24 = &PXEngine::RpcExecutor::HandlerStub<std::_Front_binder<void (CPXNetwork::*)(PXEngine::ActorContext const &,PXEngine::ClientMessages::ServerDisconnectMessage const &),CPXNetwork *,PXEngine::ActorContext>,std::tuple<PXEngine::ClientMessages::ServerDisconnectMessage>>::`vftable';
    v24[1] = v126;
    sub_1407B06D0(a1: v24 + 2, a2: v127);
  }
  else
  {
    v24 = nullptr;
  }
  v129 = (__int64)v24;
  LOWORD(v128) = word_141314008;
  sub_140203AF0(a1: a1 + 361, a2: &v123, a3: &v128, a4: &v129);
  if ( v129 != 0 )
    (**(void (__fastcall ***)(__int64, __int64))v129)(a1: v129, a2: 1);
  v129 = 19937;
  v25 = a1[364];
  v26 = *(_QWORD *)(v25
                  + 16
                  * ((0x100000001B3LL
                    * (HIBYTE(word_141313E3C)
                     ^ (0x100000001B3LL * ((unsigned __int8)word_141313E3C ^ 0xCBF29CE484222325uLL))))
                   & a1[367])
                  + 8);
  v27 = a1[362];
  if ( v26 != v27 )
  {
    v28 = *(_QWORD *)(v25
                    + 16
                    * ((0x100000001B3LL
                      * (HIBYTE(word_141313E3C)
                       ^ (0x100000001B3LL * ((unsigned __int8)word_141313E3C ^ 0xCBF29CE484222325uLL))))
                     & a1[367]));
    if ( word_141313E3C == *(_WORD *)(v26 + 16) )
    {
LABEL_51:
      if ( v26 == 0 )
        v26 = a1[362];
      if ( v26 != v27 )
      {
        v119 = sub_140205600(a1: &word_141313E3C, a2: v28);
        v120 = off_1410153B8;
        goto LABEL_268;
      }
    }
    else
    {
      while ( v26 != v28 )
      {
        v26 = *(_QWORD *)(v26 + 8);
        if ( word_141313E3C == *(_WORD *)(v26 + 16) )
          goto LABEL_51;
      }
    }
  }
  v29 = (_QWORD *)sub_1409DB470(a1: 24);
  v128 = v29;
  if ( v29 != nullptr )
  {
    *v29 = &PXEngine::RpcExecutor::HandlerStub<std::_Front_binder<void (CPXNetwork::*)(enum PX_NETWORK_IGNORE_RESPONSE),CPXNetwork *>,std::tuple<enum PX_NETWORK_IGNORE_RESPONSE>>::`vftable';
    v29[1] = sub_1407D1D20;
    v29[2] = a1;
  }
  v129 = (__int64)v29;
  LOWORD(v128) = word_141313E3C;
  sub_140203AF0(a1: a1 + 361, a2: &v123, a3: &v128, a4: &v129);
  if ( v129 != 0 )
    (**(void (__fastcall ***)(__int64, __int64))v129)(a1: v129, a2: 1);
  v129 = 19937;
  v30 = a1[364];
  v31 = *(_QWORD *)(v30
                  + 16
                  * ((0x100000001B3LL
                    * (HIBYTE(word_141313E40)
                     ^ (0x100000001B3LL * ((unsigned __int8)word_141313E40 ^ 0xCBF29CE484222325uLL))))
                   & a1[367])
                  + 8);
  v32 = a1[362];
  if ( v31 != v32 )
  {
    v33 = *(_QWORD *)(v30
                    + 16
                    * ((0x100000001B3LL
                      * (HIBYTE(word_141313E40)
                       ^ (0x100000001B3LL * ((unsigned __int8)word_141313E40 ^ 0xCBF29CE484222325uLL))))
                     & a1[367]));
    if ( word_141313E40 == *(_WORD *)(v31 + 16) )
    {
LABEL_62:
      if ( v31 == 0 )
        v31 = a1[362];
      if ( v31 != v32 )
      {
        v119 = sub_140205600(a1: &word_141313E40, a2: v33);
        v120 = off_1410153E0;
        goto LABEL_268;
      }
    }
    else
    {
      while ( v31 != v33 )
      {
        v31 = *(_QWORD *)(v31 + 8);
        if ( word_141313E40 == *(_WORD *)(v31 + 16) )
          goto LABEL_62;
      }
    }
  }
  v34 = (_QWORD *)sub_1409DB470(a1: 24);
  v128 = v34;
  if ( v34 != nullptr )
  {
    *v34 = &PXEngine::RpcExecutor::HandlerStub<std::_Front_binder<void (CPXNetwork::*)(PXEngine::StrongTypeId<PXEngine::CharacterIdType>,std::string),CPXNetwork *>,std::tuple<PXEngine::StrongTypeId<PXEngine::CharacterIdType>,std::string>>::`vftable';
    v34[1] = sub_1407BB910;
    v34[2] = a1;
  }
  v129 = (__int64)v34;
  LOWORD(v128) = word_141313E40;
  sub_140203AF0(a1: a1 + 361, a2: &v123, a3: &v128, a4: &v129);
  if ( v129 != 0 )
    (**(void (__fastcall ***)(__int64, __int64))v129)(a1: v129, a2: 1);
  v129 = 19937;
  v35 = a1[364];
  v36 = *(_QWORD *)(v35
                  + 16
                  * ((0x100000001B3LL
                    * (HIBYTE(word_141313EDC)
                     ^ (0x100000001B3LL * ((unsigned __int8)word_141313EDC ^ 0xCBF29CE484222325uLL))))
                   & a1[367])
                  + 8);
  v37 = a1[362];
  if ( v36 != v37 )
  {
    v38 = *(_QWORD *)(v35
                    + 16
                    * ((0x100000001B3LL
                      * (HIBYTE(word_141313EDC)
                       ^ (0x100000001B3LL * ((unsigned __int8)word_141313EDC ^ 0xCBF29CE484222325uLL))))
                     & a1[367]));
    if ( word_141313EDC == *(_WORD *)(v36 + 16) )
    {
LABEL_73:
      if ( v36 == 0 )
        v36 = a1[362];
      if ( v36 != v37 )
      {
        v119 = sub_140205600(a1: &word_141313EDC, a2: v38);
        v120 = off_141015408;
        goto LABEL_268;
      }
    }
    else
    {
      while ( v36 != v38 )
      {
        v36 = *(_QWORD *)(v36 + 8);
        if ( word_141313EDC == *(_WORD *)(v36 + 16) )
          goto LABEL_73;
      }
    }
  }
  v39 = (_QWORD *)sub_1409DB470(a1: 24);
  v128 = v39;
  if ( v39 != nullptr )
  {
    *v39 = &PXEngine::RpcExecutor::HandlerStub<std::_Front_binder<void (CPXNetwork::*)(PXEngine::GameServerMessages::PlayerDebugMessageResponse),CPXNetwork *>,std::tuple<PXEngine::GameServerMessages::PlayerDebugMessageResponse>>::`vftable';
    v39[1] = guard_check_icall_nop;
    v39[2] = a1;
  }
  v129 = (__int64)v39;
  LOWORD(v128) = word_141313EDC;
  sub_140203AF0(a1: a1 + 361, a2: &v123, a3: &v128, a4: &v129);
  if ( v129 != 0 )
    (**(void (__fastcall ***)(__int64, __int64))v129)(a1: v129, a2: 1);
  v129 = 19937;
  v40 = a1[364];
  v41 = *(_QWORD *)(v40
                  + 16
                  * ((0x100000001B3LL
                    * (HIBYTE(word_14131400C)
                     ^ (0x100000001B3LL * ((unsigned __int8)word_14131400C ^ 0xCBF29CE484222325uLL))))
                   & a1[367])
                  + 8);
  v42 = a1[362];
  if ( v41 != v42 )
  {
    v43 = *(_QWORD *)(v40
                    + 16
                    * ((0x100000001B3LL
                      * (HIBYTE(word_14131400C)
                       ^ (0x100000001B3LL * ((unsigned __int8)word_14131400C ^ 0xCBF29CE484222325uLL))))
                     & a1[367]));
    if ( word_14131400C == *(_WORD *)(v41 + 16) )
    {
LABEL_84:
      if ( v41 == 0 )
        v41 = a1[362];
      if ( v41 != v42 )
      {
        v119 = sub_140205600(a1: &word_14131400C, a2: v43);
        v120 = off_141015430;
        goto LABEL_268;
      }
    }
    else
    {
      while ( v41 != v43 )
      {
        v41 = *(_QWORD *)(v41 + 8);
        if ( word_14131400C == *(_WORD *)(v41 + 16) )
          goto LABEL_84;
      }
    }
  }
  v44 = (_QWORD *)sub_1409DB470(a1: 24);
  v128 = v44;
  if ( v44 != nullptr )
  {
    *v44 = &PXEngine::RpcExecutor::HandlerStub<std::_Front_binder<void (CPXNetwork::*)(PXEngine::GameServerMessages::ServerError const &),CPXNetwork *>,std::tuple<PXEngine::GameServerMessages::ServerError>>::`vftable';
    v44[1] = sub_1407CBBC0;
    v44[2] = a1;
  }
  v129 = (__int64)v44;
  LOWORD(v128) = word_14131400C;
  sub_140203AF0(a1: a1 + 361, a2: &v123, a3: &v128, a4: &v129);
  if ( v129 != 0 )
    (**(void (__fastcall ***)(__int64, __int64))v129)(a1: v129, a2: 1);
  v129 = 19937;
  v45 = a1[187];
  if ( v45 != 0 )
  {
    v46 = a1[364];
    v47 = *(_QWORD *)(v46
                    + 16
                    * ((0x100000001B3LL
                      * (HIBYTE(word_141313F84)
                       ^ (0x100000001B3LL * ((unsigned __int8)word_141313F84 ^ 0xCBF29CE484222325uLL))))
                     & a1[367])
                    + 8);
    v48 = a1[362];
    if ( v47 != v48 )
    {
      v49 = *(_QWORD *)(v46
                      + 16
                      * ((0x100000001B3LL
                        * (HIBYTE(word_141313F84)
                         ^ (0x100000001B3LL * ((unsigned __int8)word_141313F84 ^ 0xCBF29CE484222325uLL))))
                       & a1[367]));
      if ( word_141313F84 == *(_WORD *)(v47 + 16) )
      {
LABEL_96:
        if ( v47 == 0 )
          v47 = a1[362];
        if ( v47 != v48 )
        {
          v119 = sub_140205600(a1: &word_141313F84, a2: v49);
          v120 = off_141015458;
          goto LABEL_268;
        }
      }
      else
      {
        while ( v47 != v49 )
        {
          v47 = *(_QWORD *)(v47 + 8);
          if ( word_141313F84 == *(_WORD *)(v47 + 16) )
            goto LABEL_96;
        }
      }
    }
    v50 = (_QWORD *)sub_1409DB470(a1: 24);
    v128 = v50;
    if ( v50 != nullptr )
    {
      *v50 = &PXEngine::RpcExecutor::HandlerStub<std::_Front_binder<void (PXEngine::NetworkMail::*)(PXEngine::GameServerMessages::MailNotifyMessage const &),gsl::not_null<PXEngine::NetworkMail *>>,std::tuple<PXEngine::GameServerMessages::MailNotifyMessage>>::`vftable';
      v50[1] = sub_1407EB790;
      v50[2] = v45;
    }
    v129 = (__int64)v50;
    LOWORD(v128) = word_141313F84;
    sub_140203AF0(a1: a1 + 361, a2: &v123, a3: &v128, a4: &v129);
    if ( v129 != 0 )
      (**(void (__fastcall ***)(__int64, __int64))v129)(a1: v129, a2: 1);
    v129 = 19937;
    v51 = a1[187];
    if ( v51 != 0 )
    {
      v52 = a1[364];
      v53 = *(_QWORD *)(v52
                      + 16
                      * ((0x100000001B3LL
                        * (HIBYTE(word_141313F88)
                         ^ (0x100000001B3LL * ((unsigned __int8)word_141313F88 ^ 0xCBF29CE484222325uLL))))
                       & a1[367])
                      + 8);
      v54 = a1[362];
      if ( v53 != v54 )
      {
        v55 = *(_QWORD *)(v52
                        + 16
                        * ((0x100000001B3LL
                          * (HIBYTE(word_141313F88)
                           ^ (0x100000001B3LL * ((unsigned __int8)word_141313F88 ^ 0xCBF29CE484222325uLL))))
                         & a1[367]));
        if ( word_141313F88 == *(_WORD *)(v53 + 16) )
        {
LABEL_108:
          if ( v53 == 0 )
            v53 = a1[362];
          if ( v53 != v54 )
          {
            v119 = sub_140205600(a1: &word_141313F88, a2: v55);
            v120 = off_141015480;
            goto LABEL_268;
          }
        }
        else
        {
          while ( v53 != v55 )
          {
            v53 = *(_QWORD *)(v53 + 8);
            if ( word_141313F88 == *(_WORD *)(v53 + 16) )
              goto LABEL_108;
          }
        }
      }
      v56 = (_QWORD *)sub_1409DB470(a1: 24);
      v128 = v56;
      if ( v56 != nullptr )
      {
        *v56 = &PXEngine::RpcExecutor::HandlerStub<std::_Front_binder<void (PXEngine::NetworkMail::*)(PXEngine::CompressedBlob const &),gsl::not_null<PXEngine::NetworkMail *>>,std::tuple<PXEngine::CompressedBlob>>::`vftable';
        v56[1] = sub_1407EC8A0;
        v56[2] = v51;
      }
      v129 = (__int64)v56;
      LOWORD(v128) = word_141313F88;
      sub_140203AF0(a1: a1 + 361, a2: &v123, a3: &v128, a4: &v129);
      if ( v129 != 0 )
        (**(void (__fastcall ***)(__int64, __int64))v129)(a1: v129, a2: 1);
      v129 = 19937;
      v57 = a1[187];
      if ( v57 != 0 )
      {
        v58 = a1[364];
        v59 = *(_QWORD *)(v58
                        + 16
                        * ((0x100000001B3LL
                          * (HIBYTE(word_141313F8C)
                           ^ (0x100000001B3LL * ((unsigned __int8)word_141313F8C ^ 0xCBF29CE484222325uLL))))
                         & a1[367])
                        + 8);
        v60 = a1[362];
        if ( v59 != v60 )
        {
          v61 = *(_QWORD *)(v58
                          + 16
                          * ((0x100000001B3LL
                            * (HIBYTE(word_141313F8C)
                             ^ (0x100000001B3LL * ((unsigned __int8)word_141313F8C ^ 0xCBF29CE484222325uLL))))
                           & a1[367]));
          if ( word_141313F8C == *(_WORD *)(v59 + 16) )
          {
LABEL_120:
            if ( v59 == 0 )
              v59 = a1[362];
            if ( v59 != v60 )
            {
              v119 = sub_140205600(a1: &word_141313F8C, a2: v61);
              v120 = off_1410154A8;
              goto LABEL_268;
            }
          }
          else
          {
            while ( v59 != v61 )
            {
              v59 = *(_QWORD *)(v59 + 8);
              if ( word_141313F8C == *(_WORD *)(v59 + 16) )
                goto LABEL_120;
            }
          }
        }
        v62 = (_QWORD *)sub_1409DB470(a1: 24);
        v128 = v62;
        if ( v62 != nullptr )
        {
          *v62 = &PXEngine::RpcExecutor::HandlerStub<std::_Front_binder<void (PXEngine::NetworkMail::*)(PXEngine::ClientMessages::SendMailResponseMessage const &),gsl::not_null<PXEngine::NetworkMail *>>,std::tuple<PXEngine::ClientMessages::SendMailResponseMessage>>::`vftable';
          v62[1] = sub_1407EC3C0;
          v62[2] = v57;
        }
        v129 = (__int64)v62;
        LOWORD(v128) = word_141313F8C;
        sub_140203AF0(a1: a1 + 361, a2: &v123, a3: &v128, a4: &v129);
        if ( v129 != 0 )
          (**(void (__fastcall ***)(__int64, __int64))v129)(a1: v129, a2: 1);
        v129 = 19937;
        v63 = a1[372];
        v64 = *(_QWORD *)(v63
                        + 16
                        * ((0x100000001B3LL
                          * (HIBYTE(word_141313E50)
                           ^ (0x100000001B3LL * ((unsigned __int8)word_141313E50 ^ 0xCBF29CE484222325uLL))))
                         & a1[375])
                        + 8);
        v65 = a1[370];
        if ( v64 != v65 )
        {
          v66 = *(_QWORD *)(v63
                          + 16
                          * ((0x100000001B3LL
                            * (HIBYTE(word_141313E50)
                             ^ (0x100000001B3LL * ((unsigned __int8)word_141313E50 ^ 0xCBF29CE484222325uLL))))
                           & a1[375]));
          if ( word_141313E50 == *(_WORD *)(v64 + 16) )
          {
LABEL_131:
            if ( v64 == 0 )
              v64 = a1[370];
            if ( v64 != v65 )
            {
              v119 = sub_140205600(a1: &word_141313E50, a2: v66);
              v120 = off_1410154D0;
              goto LABEL_268;
            }
          }
          else
          {
            while ( v64 != v66 )
            {
              v64 = *(_QWORD *)(v64 + 8);
              if ( word_141313E50 == *(_WORD *)(v64 + 16) )
                goto LABEL_131;
            }
          }
        }
        v67 = (_QWORD *)sub_1409DB470(a1: 24);
        v128 = v67;
        if ( v67 != nullptr )
        {
          *v67 = &PXEngine::RpcExecutor::HandlerStub<std::_Front_binder<void (CPXNetwork::*)(unsigned int,std::string const &),CPXNetwork *>,std::tuple<unsigned int,std::string>>::`vftable';
          v67[1] = sub_1407BB210;
          v67[2] = a1;
        }
        v129 = (__int64)v67;
        LOWORD(v128) = word_141313E50;
        sub_140203AF0(a1: a1 + 369, a2: &v123, a3: &v128, a4: &v129);
        if ( v129 != 0 )
          (**(void (__fastcall ***)(__int64, __int64))v129)(a1: v129, a2: 1);
        v129 = 19937;
        v68 = a1[372];
        v69 = *(_QWORD *)(v68
                        + 16
                        * ((0x100000001B3LL
                          * (HIBYTE(word_141313E9C)
                           ^ (0x100000001B3LL * ((unsigned __int8)word_141313E9C ^ 0xCBF29CE484222325uLL))))
                         & a1[375])
                        + 8);
        v70 = a1[370];
        if ( v69 != v70 )
        {
          v71 = *(_QWORD *)(v68
                          + 16
                          * ((0x100000001B3LL
                            * (HIBYTE(word_141313E9C)
                             ^ (0x100000001B3LL * ((unsigned __int8)word_141313E9C ^ 0xCBF29CE484222325uLL))))
                           & a1[375]));
          if ( word_141313E9C == *(_WORD *)(v69 + 16) )
          {
LABEL_142:
            if ( v69 == 0 )
              v69 = a1[370];
            if ( v69 != v70 )
            {
              v119 = sub_140205600(a1: &word_141313E9C, a2: v71);
              v120 = off_1410154F8;
              goto LABEL_268;
            }
          }
          else
          {
            while ( v69 != v71 )
            {
              v69 = *(_QWORD *)(v69 + 8);
              if ( word_141313E9C == *(_WORD *)(v69 + 16) )
                goto LABEL_142;
            }
          }
        }
        v72 = (_QWORD *)sub_1409DB470(a1: 24);
        v128 = v72;
        if ( v72 != nullptr )
        {
          *v72 = &PXEngine::RpcExecutor::HandlerStub<std::_Front_binder<void (CPXNetwork::*)(PXEngine::ModuleMessages::IntegrityPingMessage),CPXNetwork *>,std::tuple<PXEngine::ModuleMessages::IntegrityPingMessage>>::`vftable';
          v72[1] = sub_1407B5690;
          v72[2] = a1;
        }
        v129 = (__int64)v72;
        LOWORD(v128) = word_141313E9C;
        sub_140203AF0(a1: a1 + 369, a2: &v123, a3: &v128, a4: &v129);
        if ( v129 != 0 )
          (**(void (__fastcall ***)(__int64, __int64))v129)(a1: v129, a2: 1);
        v129 = 19937;
        v73 = a1[364];
        v74 = *(_QWORD *)(v73
                        + 16
                        * ((0x100000001B3LL
                          * (HIBYTE(word_141313EA8)
                           ^ (0x100000001B3LL * ((unsigned __int8)word_141313EA8 ^ 0xCBF29CE484222325uLL))))
                         & a1[367])
                        + 8);
        v75 = a1[362];
        if ( v74 != v75 )
        {
          v76 = *(_QWORD *)(v73
                          + 16
                          * ((0x100000001B3LL
                            * (HIBYTE(word_141313EA8)
                             ^ (0x100000001B3LL * ((unsigned __int8)word_141313EA8 ^ 0xCBF29CE484222325uLL))))
                           & a1[367]));
          if ( word_141313EA8 == *(_WORD *)(v74 + 16) )
          {
LABEL_153:
            if ( v74 == 0 )
              v74 = a1[362];
            if ( v74 != v75 )
            {
              v119 = sub_140205600(a1: &word_141313EA8, a2: v76);
              v120 = off_141015520;
              goto LABEL_268;
            }
          }
          else
          {
            while ( v74 != v76 )
            {
              v74 = *(_QWORD *)(v74 + 8);
              if ( word_141313EA8 == *(_WORD *)(v74 + 16) )
                goto LABEL_153;
            }
          }
        }
        v77 = a1 + 316;
        v78 = (_QWORD *)sub_1409DB470(a1: 24);
        v128 = v78;
        if ( v78 != nullptr )
        {
          *v78 = &PXEngine::RpcExecutor::HandlerStub<std::_Front_binder<void (CPXClientModerationHandler::*)(std::string const &,std::string const &,bool),CPXClientModerationHandler *>,std::tuple<std::string,std::string,bool>>::`vftable';
          v78[1] = sub_1407F03A0;
          v78[2] = v77;
        }
        v129 = (__int64)v78;
        LOWORD(v128) = word_141313EA8;
        sub_140203AF0(a1: a1 + 361, a2: &v123, a3: &v128, a4: &v129);
        if ( v129 != 0 )
          (**(void (__fastcall ***)(__int64, __int64))v129)(a1: v129, a2: 1);
        v129 = 19937;
        v79 = a1[364];
        v80 = *(_QWORD *)(v79
                        + 16
                        * ((0x100000001B3LL
                          * (HIBYTE(word_141313EAC)
                           ^ (0x100000001B3LL * ((unsigned __int8)word_141313EAC ^ 0xCBF29CE484222325uLL))))
                         & a1[367])
                        + 8);
        v81 = a1[362];
        if ( v80 != v81 )
        {
          v82 = *(_QWORD *)(v79
                          + 16
                          * ((0x100000001B3LL
                            * (HIBYTE(word_141313EAC)
                             ^ (0x100000001B3LL * ((unsigned __int8)word_141313EAC ^ 0xCBF29CE484222325uLL))))
                           & a1[367]));
          if ( word_141313EAC == *(_WORD *)(v80 + 16) )
          {
LABEL_164:
            if ( v80 == 0 )
              v80 = a1[362];
            if ( v80 != v81 )
            {
              v119 = sub_140205600(a1: &word_141313EAC, a2: v82);
              v120 = off_141015548;
              goto LABEL_268;
            }
          }
          else
          {
            while ( v80 != v82 )
            {
              v80 = *(_QWORD *)(v80 + 8);
              if ( word_141313EAC == *(_WORD *)(v80 + 16) )
                goto LABEL_164;
            }
          }
        }
        v83 = (_QWORD *)sub_1409DB470(a1: 24);
        v128 = v83;
        if ( v83 != nullptr )
        {
          *v83 = &PXEngine::RpcExecutor::HandlerStub<std::_Front_binder<void (CPXClientModerationHandler::*)(std::string const &,std::string const &,enum PX_MODERATOR_TEXT_TYPE,bool),CPXClientModerationHandler *>,std::tuple<std::string,std::string,enum PX_MODERATOR_TEXT_TYPE,bool>>::`vftable';
          v83[1] = sub_1407F0690;
          v83[2] = v77;
        }
        v129 = (__int64)v83;
        LOWORD(v128) = word_141313EAC;
        sub_140203AF0(a1: a1 + 361, a2: &v123, a3: &v128, a4: &v129);
        if ( v129 != 0 )
          (**(void (__fastcall ***)(__int64, __int64))v129)(a1: v129, a2: 1);
        v129 = 19937;
        v84 = a1[364];
        v85 = *(_QWORD *)(v84
                        + 16
                        * ((0x100000001B3LL
                          * (HIBYTE(word_141313EB0)
                           ^ (0x100000001B3LL * ((unsigned __int8)word_141313EB0 ^ 0xCBF29CE484222325uLL))))
                         & a1[367])
                        + 8);
        v86 = a1[362];
        if ( v85 != v86 )
        {
          v87 = *(_QWORD *)(v84
                          + 16
                          * ((0x100000001B3LL
                            * (HIBYTE(word_141313EB0)
                             ^ (0x100000001B3LL * ((unsigned __int8)word_141313EB0 ^ 0xCBF29CE484222325uLL))))
                           & a1[367]));
          if ( word_141313EB0 == *(_WORD *)(v85 + 16) )
          {
LABEL_175:
            if ( v85 == 0 )
              v85 = a1[362];
            if ( v85 != v86 )
            {
              v119 = sub_140205600(a1: &word_141313EB0, a2: v87);
              v120 = off_141015570;
              goto LABEL_268;
            }
          }
          else
          {
            while ( v85 != v87 )
            {
              v85 = *(_QWORD *)(v85 + 8);
              if ( word_141313EB0 == *(_WORD *)(v85 + 16) )
                goto LABEL_175;
            }
          }
        }
        v88 = (_QWORD *)sub_1409DB470(a1: 24);
        v128 = v88;
        if ( v88 != nullptr )
        {
          *v88 = &PXEngine::RpcExecutor::HandlerStub<std::_Front_binder<void (CPXClientModerationHandler::*)(std::string const &,std::string const &,bool),CPXClientModerationHandler *>,std::tuple<std::string,std::string,bool>>::`vftable';
          v88[1] = sub_1407F01C0;
          v88[2] = v77;
        }
        v129 = (__int64)v88;
        LOWORD(v128) = word_141313EB0;
        sub_140203AF0(a1: a1 + 361, a2: &v123, a3: &v128, a4: &v129);
        if ( v129 != 0 )
          (**(void (__fastcall ***)(__int64, __int64))v129)(a1: v129, a2: 1);
        v129 = 19937;
        v89 = a1[364];
        v90 = *(_QWORD *)(v89
                        + 16
                        * ((0x100000001B3LL
                          * (HIBYTE(word_141313EB4)
                           ^ (0x100000001B3LL * ((unsigned __int8)word_141313EB4 ^ 0xCBF29CE484222325uLL))))
                         & a1[367])
                        + 8);
        v91 = a1[362];
        if ( v90 != v91 )
        {
          v92 = *(_QWORD *)(v89
                          + 16
                          * ((0x100000001B3LL
                            * (HIBYTE(word_141313EB4)
                             ^ (0x100000001B3LL * ((unsigned __int8)word_141313EB4 ^ 0xCBF29CE484222325uLL))))
                           & a1[367]));
          if ( word_141313EB4 == *(_WORD *)(v90 + 16) )
          {
LABEL_186:
            if ( v90 == 0 )
              v90 = a1[362];
            if ( v90 != v91 )
            {
              v119 = sub_140205600(a1: &word_141313EB4, a2: v92);
              v120 = off_141015598;
              goto LABEL_268;
            }
          }
          else
          {
            while ( v90 != v92 )
            {
              v90 = *(_QWORD *)(v90 + 8);
              if ( word_141313EB4 == *(_WORD *)(v90 + 16) )
                goto LABEL_186;
            }
          }
        }
        v93 = (_QWORD *)sub_1409DB470(a1: 24);
        v128 = v93;
        if ( v93 != nullptr )
        {
          *v93 = &PXEngine::RpcExecutor::HandlerStub<std::_Front_binder<void (CPXClientModerationHandler::*)(std::string const &,std::string const &),CPXClientModerationHandler *>,std::tuple<std::string,std::string>>::`vftable';
          v93[1] = sub_1407F0210;
          v93[2] = v77;
        }
        v129 = (__int64)v93;
        LOWORD(v128) = word_141313EB4;
        sub_140203AF0(a1: a1 + 361, a2: &v123, a3: &v128, a4: &v129);
        if ( v129 != 0 )
          (**(void (__fastcall ***)(__int64, __int64))v129)(a1: v129, a2: 1);
        v129 = 19937;
        v94 = a1[364];
        v95 = *(_QWORD *)(v94
                        + 16
                        * ((0x100000001B3LL
                          * (HIBYTE(word_141313EB8)
                           ^ (0x100000001B3LL * ((unsigned __int8)word_141313EB8 ^ 0xCBF29CE484222325uLL))))
                         & a1[367])
                        + 8);
        v96 = a1[362];
        if ( v95 != v96 )
        {
          v97 = *(_QWORD *)(v94
                          + 16
                          * ((0x100000001B3LL
                            * (HIBYTE(word_141313EB8)
                             ^ (0x100000001B3LL * ((unsigned __int8)word_141313EB8 ^ 0xCBF29CE484222325uLL))))
                           & a1[367]));
          if ( word_141313EB8 == *(_WORD *)(v95 + 16) )
          {
LABEL_197:
            if ( v95 == 0 )
              v95 = a1[362];
            if ( v95 != v96 )
            {
              v119 = sub_140205600(a1: &word_141313EB8, a2: v97);
              v120 = off_1410155C0;
              goto LABEL_268;
            }
          }
          else
          {
            while ( v95 != v97 )
            {
              v95 = *(_QWORD *)(v95 + 8);
              if ( word_141313EB8 == *(_WORD *)(v95 + 16) )
                goto LABEL_197;
            }
          }
        }
        v98 = (_QWORD *)sub_1409DB470(a1: 24);
        v128 = v98;
        if ( v98 != nullptr )
        {
          *v98 = &PXEngine::RpcExecutor::HandlerStub<std::_Front_binder<void (CPXClientModerationHandler::*)(PXEngine::ClientMessages::RelocateData const &),CPXClientModerationHandler *>,std::tuple<PXEngine::ClientMessages::RelocateData>>::`vftable';
          v98[1] = sub_1407F0810;
          v98[2] = v77;
        }
        v129 = (__int64)v98;
        LOWORD(v128) = word_141313EB8;
        sub_140203AF0(a1: a1 + 361, a2: &v123, a3: &v128, a4: &v129);
        if ( v129 != 0 )
          (**(void (__fastcall ***)(__int64, __int64))v129)(a1: v129, a2: 1);
        v129 = 19937;
        v99 = a1[364];
        v100 = *(_QWORD *)(v99
                         + 16
                         * ((0x100000001B3LL
                           * (HIBYTE(word_141314048)
                            ^ (0x100000001B3LL * ((unsigned __int8)word_141314048 ^ 0xCBF29CE484222325uLL))))
                          & a1[367])
                         + 8);
        v101 = a1[362];
        if ( v100 != v101 )
        {
          v102 = *(_QWORD *)(v99
                           + 16
                           * ((0x100000001B3LL
                             * (HIBYTE(word_141314048)
                              ^ (0x100000001B3LL * ((unsigned __int8)word_141314048 ^ 0xCBF29CE484222325uLL))))
                            & a1[367]));
          if ( word_141314048 == *(_WORD *)(v100 + 16) )
          {
LABEL_208:
            if ( v100 == 0 )
              v100 = a1[362];
            if ( v100 != v101 )
            {
              v119 = sub_140205600(a1: &word_141314048, a2: v102);
              v120 = off_1410155E8;
              goto LABEL_268;
            }
          }
          else
          {
            while ( v100 != v102 )
            {
              v100 = *(_QWORD *)(v100 + 8);
              if ( word_141314048 == *(_WORD *)(v100 + 16) )
                goto LABEL_208;
            }
          }
        }
        v103 = (_QWORD *)sub_1409DB470(a1: 24);
        v128 = v103;
        if ( v103 != nullptr )
        {
          *v103 = &PXEngine::RpcExecutor::HandlerStub<std::_Front_binder<void (CPXNetwork::*)(void),CPXNetwork *>,std::tuple<>>::`vftable';
          v103[1] = sub_1407B4D20;
          v103[2] = a1;
        }
        v129 = (__int64)v103;
        LOWORD(v128) = word_141314048;
        sub_140203AF0(a1: a1 + 361, a2: &v123, a3: &v128, a4: &v129);
        if ( v129 != 0 )
          (**(void (__fastcall ***)(__int64, __int64))v129)(a1: v129, a2: 1);
        v129 = 19937;
        v104 = a1[364];
        v105 = *(_QWORD *)(v104
                         + 16
                         * ((0x100000001B3LL
                           * (HIBYTE(word_141314058)
                            ^ (0x100000001B3LL * ((unsigned __int8)word_141314058 ^ 0xCBF29CE484222325uLL))))
                          & a1[367])
                         + 8);
        v106 = a1[362];
        if ( v105 != v106 )
        {
          v107 = *(_QWORD *)(v104
                           + 16
                           * ((0x100000001B3LL
                             * (HIBYTE(word_141314058)
                              ^ (0x100000001B3LL * ((unsigned __int8)word_141314058 ^ 0xCBF29CE484222325uLL))))
                            & a1[367]));
          if ( word_141314058 == *(_WORD *)(v105 + 16) )
          {
LABEL_219:
            if ( v105 == 0 )
              v105 = a1[362];
            if ( v105 != v106 )
            {
              v119 = sub_140205600(a1: &word_141314058, a2: v107);
              v120 = off_141015610;
              goto LABEL_268;
            }
          }
          else
          {
            while ( v105 != v107 )
            {
              v105 = *(_QWORD *)(v105 + 8);
              if ( word_141314058 == *(_WORD *)(v105 + 16) )
                goto LABEL_219;
            }
          }
        }
        v108 = (_QWORD *)sub_1409DB470(a1: 24);
        v128 = v108;
        if ( v108 != nullptr )
        {
          *v108 = &PXEngine::RpcExecutor::HandlerStub<std::_Front_binder<void (CPXNetwork::*)(PXEngine::GameServerMessages::ConsumeItemMessage const &),CPXNetwork *>,std::tuple<PXEngine::GameServerMessages::ConsumeItemMessage>>::`vftable';
          v108[1] = sub_1407C65D0;
          v108[2] = a1;
        }
        v129 = (__int64)v108;
        LOWORD(v128) = word_141314058;
        sub_140203AF0(a1: a1 + 361, a2: &v123, a3: &v128, a4: &v129);
        if ( v129 != 0 )
          (**(void (__fastcall ***)(__int64, __int64))v129)(a1: v129, a2: 1);
        v129 = 19937;
        v109 = a1[364];
        v110 = *(_QWORD *)(v109
                         + 16
                         * ((0x100000001B3LL
                           * (HIBYTE(word_141314068)
                            ^ (0x100000001B3LL * ((unsigned __int8)word_141314068 ^ 0xCBF29CE484222325uLL))))
                          & a1[367])
                         + 8);
        v111 = a1[362];
        if ( v110 != v111 )
        {
          v112 = *(_QWORD *)(v109
                           + 16
                           * ((0x100000001B3LL
                             * (HIBYTE(word_141314068)
                              ^ (0x100000001B3LL * ((unsigned __int8)word_141314068 ^ 0xCBF29CE484222325uLL))))
                            & a1[367]));
          if ( word_141314068 == *(_WORD *)(v110 + 16) )
          {
LABEL_230:
            if ( v110 == 0 )
              v110 = a1[362];
            if ( v110 != v111 )
            {
              v119 = sub_140205600(a1: &word_141314068, a2: v112);
              v120 = off_141015638;
              goto LABEL_268;
            }
          }
          else
          {
            while ( v110 != v112 )
            {
              v110 = *(_QWORD *)(v110 + 8);
              if ( word_141314068 == *(_WORD *)(v110 + 16) )
                goto LABEL_230;
            }
          }
        }
        v113 = (_QWORD *)sub_1409DB470(a1: 24);
        v128 = v113;
        if ( v113 != nullptr )
        {
          *v113 = &PXEngine::RpcExecutor::HandlerStub<std::_Front_binder<void (CPXNetwork::*)(PXEngine::GameServerMessages::ActivateScheduledEvent const &),CPXNetwork *>,std::tuple<PXEngine::GameServerMessages::ActivateScheduledEvent>>::`vftable';
          v113[1] = sub_1407C2390;
          v113[2] = a1;
        }
        v129 = (__int64)v113;
        LOWORD(v128) = word_141314068;
        sub_140203AF0(a1: a1 + 361, a2: &v123, a3: &v128, a4: &v129);
        if ( v129 != 0 )
          (**(void (__fastcall ***)(__int64, __int64))v129)(a1: v129, a2: 1);
        v129 = 19937;
        LOWORD(v128) = word_14131406C;
        v115 = *(_QWORD *)(sub_140202600(
                             a1: a1 + 361,
                             a2: v125,
                             a3: &v128,
                             a4: 0x100000001B3LL
                           * (HIBYTE(word_14131406C)
                            ^ (0x100000001B3LL * ((unsigned __int8)word_14131406C ^ 0xCBF29CE484222325uLL))),
                             a5: sub_1407C6750,
                             a6: a1)
                         + 8);
        if ( v115 != 0 && v115 != a1[362] )
        {
          v119 = sub_140205600(a1: &word_14131406C, a2: v114);
          v120 = off_141015660;
LABEL_268:
          if ( (unsigned __int8)sub_140059D90(a1: v120, a2: "Method with message id %d already bound!", v119) != 0 )
            __debugbreak();
          sub_1409E29B8(a1: 999);
          __debugbreak();
        }
        v116 = sub_1407AF010(a1: &v129, a2: &v123);
        LOWORD(v128) = word_14131406C;
        sub_140203AF0(a1: a1 + 361, a2: v125, a3: &v128, a4: v116);
        sub_140017900(a1: &v129);
        v123 = sub_1407DA200;
        v124 = a1;
        sub_1407A40B0(a1: a1 + 361, a2: &v123);
        v128 = a1;
        v129 = (__int64)sub_1407C6820;
        v117 = (_QWORD *)sub_1407AEE40(a1: &v126, a2: &v129, a3: &v128, a4: a2);
        sub_1407A36A0(a1: a1 + 361, a2: v117);
        v123 = sub_1407CBBD0;
        v124 = a1;
        sub_1407A50F0(a1: a1 + 361, a2: &v123);
        v123 = sub_1407C2460;
        v124 = a1;
        sub_1407A4E70(a1: a1 + 361, a2: &v123);
        v123 = sub_1407D9490;
        v124 = a1;
        sub_1407A54B0(a1: a1 + 361, a2: &v123);
        v123 = sub_1407BDC80;
        v124 = a1;
        sub_1407A5230(a1: a1 + 361, a2: &v123);
        v123 = sub_1407B6970;
        v124 = a1;
        sub_1407A5FF0(a1: a1 + 361, a2: &v123);
        v123 = sub_1407BB770;
        v124 = a1;
        sub_1407A4BF0(a1: a1 + 361, a2: &v123);
        v123 = sub_1407CAEB0;
        v124 = a1;
        sub_1407A3CF0(a1: a1 + 361, a2: &v123);
        v123 = sub_1407CA000;
        v124 = a1;
        sub_1407A3A70(a1: a1 + 361, a2: &v123);
        v123 = sub_1407CAB30;
        v124 = a1;
        sub_1407A5EB0(a1: a1 + 361, a2: &v123);
        v123 = sub_1407CA6C0;
        v124 = a1;
        sub_1407A5D70(a1: a1 + 361, a2: &v123);
        v123 = sub_1407CA0A0;
        v124 = a1;
        sub_1407A45B0(a1: a1 + 361, a2: &v123);
        v123 = sub_1407C9FF0;
        v124 = a1;
        sub_1407A63B0(a1: a1 + 361, a2: &v123);
        v123 = sub_1407CA250;
        v124 = a1;
        sub_1407A4FB0(a1: a1 + 361, a2: &v123);
        v123 = sub_1407CA670;
        v124 = a1;
        sub_1407A64F0(a1: a1 + 361, a2: &v123);
        v123 = sub_1407C97F0;
        v124 = a1;
        sub_1407A4330(a1: a1 + 361, a2: &v123);
        v123 = sub_1407C99C0;
        v124 = a1;
        sub_1407A5870(a1: a1 + 361, a2: &v123);
        v123 = sub_1407C8300;
        v124 = a1;
        sub_1407A6270(a1: a1 + 361, a2: &v123);
        v123 = sub_1407C9300;
        v124 = a1;
        sub_1407A5730(a1: a1 + 361, a2: &v123);
        v123 = sub_1407C9410;
        v124 = a1;
        sub_1407A4970(a1: a1 + 361, a2: &v123);
        v123 = sub_1407C95A0;
        v124 = a1;
        sub_1407A4470(a1: a1 + 361, a2: &v123);
        v123 = sub_1407C9EE0;
        v124 = a1;
        sub_1407A5C30(a1: a1 + 361, a2: &v123);
        v123 = sub_1407C9C40;
        v124 = a1;
        sub_1407A3930(a1: a1 + 361, a2: &v123);
        v123 = sub_1407C9AE0;
        v124 = a1;
        sub_1407A4AB0(a1: a1 + 361, a2: &v123);
        v123 = sub_1407C9300;
        v124 = a1;
        sub_1407A59B0(a1: a1 + 361, a2: &v123);
        v123 = sub_1407C9B00;
        v124 = a1;
        sub_1407A41F0(a1: a1 + 361, a2: &v123);
        v123 = sub_1407C9300;
        v124 = a1;
        sub_1407A5AF0(a1: a1 + 361, a2: &v123);
        v123 = sub_1407CB6D0;
        v124 = a1;
        sub_1407A3BB0(a1: a1 + 361, a2: &v123);
        v123 = sub_1407C7A40;
        v124 = a1;
        sub_1407A4D30(a1: a1 + 361, a2: &v123);
        v123 = sub_1407C7DD0;
        v124 = a1;
        sub_1407A55F0(a1: a1 + 361, a2: &v123);
        v123 = sub_1407C76B0;
        v124 = a1;
        sub_1407A46F0(a1: a1 + 361, a2: &v123);
        v123 = sub_1407C76B0;
        v124 = a1;
        sub_1407A4830(a1: a1 + 361, a2: &v123);
        v123 = sub_1407C6F90;
        v124 = a1;
        sub_1407A37F0(a1: a1 + 361, a2: &v123);
        v123 = sub_1407C71C0;
        v124 = a1;
        sub_1407A3E30(a1: a1 + 361, a2: &v123);
        v123 = sub_1407ED410;
        v124 = (_QWORD *)a1[187];
        sub_1407A3F70(a1: a1 + 361, a2: &v123);
        v123 = sub_1407B6970;
        v124 = a1;
        sub_1407A6130(a1: a1 + 369, a2: &v123);
        v123 = sub_1407CBA50;
        v124 = a1;
        return sub_1407A5370(a1: a1 + 361, a2: &v123);
      }
    }
  }
  sub_14005A760();
}