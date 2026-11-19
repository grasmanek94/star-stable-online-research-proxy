__int64 __fastcall sub_1408042B0(__int64 a1)
{
  __int64 *v2; // rbx
  __int64 v3; // rsi
  _QWORD *v4; // rdx
  _QWORD *v5; // rdx
  _QWORD *v6; // rdx
  _QWORD *v7; // rdx
  __int64 v8; // rbx
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  _BYTE *v13; // rdx
  _QWORD *v14; // rdx
  __int64 v15; // rbx
  _QWORD *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  _BYTE *v20; // rdx
  _QWORD *v21; // rdx
  __int64 v22; // rbx
  _QWORD *v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  _BYTE *v27; // rdx
  _QWORD *v28; // rdx
  __int64 *v29; // rbx
  __int64 v30; // rsi
  __int64 v31; // rdx
  _QWORD *v32; // rdx
  _QWORD *v33; // rcx
  _QWORD *v34; // rdx
  _QWORD *v35; // rdx
  _QWORD *v36; // rdx
  __int64 *v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rbx
  _QWORD *v40; // rax
  _QWORD *v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 (__fastcall **v44)(); // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v51[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 (__fastcall **v52)(); // [rsp+50h] [rbp-B0h] BYREF
  __int64 v53; // [rsp+58h] [rbp-A8h]
  __int64 v54; // [rsp+60h] [rbp-A0h]
  __int64 v55; // [rsp+68h] [rbp-98h] BYREF
  __int64 v56; // [rsp+70h] [rbp-90h]
  __int64 v57; // [rsp+78h] [rbp-88h]
  __int64 (__fastcall ***v58)(); // [rsp+88h] [rbp-78h]
  _BYTE v59[56]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v60; // [rsp+C8h] [rbp-38h]
  _QWORD v61[7]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v62; // [rsp+108h] [rbp+8h]
  _QWORD v63[7]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v64; // [rsp+148h] [rbp+48h]
  _QWORD v65[7]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v66; // [rsp+188h] [rbp+88h]
  _QWORD v67[7]; // [rsp+190h] [rbp+90h] BYREF
  __int64 v68; // [rsp+1C8h] [rbp+C8h]
  _QWORD v69[7]; // [rsp+1D0h] [rbp+D0h] BYREF
  _QWORD *v70; // [rsp+208h] [rbp+108h]
  _QWORD v71[7]; // [rsp+210h] [rbp+110h] BYREF
  _QWORD *v72; // [rsp+248h] [rbp+148h]
  _QWORD v73[7]; // [rsp+250h] [rbp+150h] BYREF
  _QWORD *v74; // [rsp+288h] [rbp+188h]
  _QWORD v75[6]; // [rsp+290h] [rbp+190h] BYREF
  __int128 v76; // [rsp+2C0h] [rbp+1C0h]
  _QWORD v77[6]; // [rsp+2D0h] [rbp+1D0h] BYREF
  __int128 v78; // [rsp+300h] [rbp+200h]
  _QWORD v79[6]; // [rsp+310h] [rbp+210h] BYREF
  __int128 v80; // [rsp+340h] [rbp+240h]
  _QWORD v81[6]; // [rsp+350h] [rbp+250h] BYREF
  __int128 v82; // [rsp+380h] [rbp+280h]
  _BYTE v83[56]; // [rsp+390h] [rbp+290h] BYREF
  _BYTE *v84; // [rsp+3C8h] [rbp+2C8h]
  _BYTE v85[56]; // [rsp+3D0h] [rbp+2D0h] BYREF
  _BYTE *v86; // [rsp+408h] [rbp+308h]
  _BYTE v87[56]; // [rsp+410h] [rbp+310h] BYREF
  _BYTE *v88; // [rsp+448h] [rbp+348h]

  v2 = *(__int64 **)(a1 + 32);
  v3 = *v2;
  memset(v79, 0, sizeof(v79));
  v80 = 0u;
  memset(v81, 0, sizeof(v81));
  v82 = 0u;
  v63[0] = std::_Func_impl_no_alloc<`PXEngine::ConnectionManager::Launch'::`2'::_lambda_1_,PXEngine::XAEAVNetworkEndpoint::EAAXXZ,enum std::byte const *,unsigned int>::`vftable';
  v63[1] = a1;
  v64 = (__int64)v63;
  sub_140803E30(a1: v79, a2: v63);
  if ( v64 != 0 )
  {
    v4 = v63;
    LOBYTE(v4) = v64 != (_QWORD)v63;
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v64 + 32LL))(a1: v64, a2: v4);
  }
  v64 = 19937;
  v65[0] = std::_Func_impl_no_alloc<`PXEngine::ConnectionManager::Launch'::`2'::_lambda_2_,PXEngine::XAEAVNetworkEndpoint::EAAXXZ,PXEngine::ReceivedMessage>::`vftable';
  v65[1] = a1;
  v66 = (__int64)v65;
  sub_140803E30(a1: v81, a2: v65);
  if ( v66 != 0 )
  {
    v5 = v65;
    LOBYTE(v5) = v66 != (_QWORD)v65;
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v66 + 32LL))(a1: v66, a2: v5);
  }
  v66 = 19937;
  v58 = nullptr;
  if ( *((_QWORD *)&v80 + 1) != 0 )
    v58 = (__int64 (__fastcall ***)())(***((__int64 (__fastcall ****)(_QWORD, __int64 (__fastcall ***)()))&v80 + 1))(
                                        a1: *((_QWORD *)&v80 + 1),
                                        a2: &v52);
  v60 = 0;
  if ( *((_QWORD *)&v82 + 1) != 0 )
    v60 = (***((__int64 (__fastcall ****)(_QWORD, _BYTE *))&v82 + 1))(a1: *((_QWORD *)&v82 + 1), a2: v59);
  (*(void (__fastcall **)(__int64 *, __int64 (__fastcall ***)()))(v3 + 8))(a1: v2, a2: &v52);
  if ( *((_QWORD *)&v82 + 1) != 0 )
  {
    v6 = v81;
    LOBYTE(v6) = *((_QWORD *)&v82 + 1) != (_QWORD)v81;
    (*(void (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)&v82 + 1) + 32LL))(a1: *((_QWORD *)&v82 + 1), a2: v6);
  }
  *((_QWORD *)&v82 + 1) = 19937;
  if ( *((_QWORD *)&v80 + 1) != 0 )
  {
    v7 = v79;
    LOBYTE(v7) = *((_QWORD *)&v80 + 1) != (_QWORD)v79;
    (*(void (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)&v80 + 1) + 32LL))(a1: *((_QWORD *)&v80 + 1), a2: v7);
  }
  v8 = a1 + 112;
  v69[0] = std::_Func_impl_no_alloc<`PXEngine::ConnectionManager::Launch'::`2'::_lambda_3_,PXEngine::XAEAVNetworkEndpoint::EAAXXZ,PXEngine::ReceivedPacket>::`vftable';
  v69[1] = a1;
  v70 = v69;
  v84 = nullptr;
  v84 = (_BYTE *)sub_1408052A0(a1: v69, a2: v83);
  if ( v70 != nullptr )
  {
    v9 = v69;
    LOBYTE(v9) = v70 != v69;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v70 + 32LL))(a1: v70, a2: v9);
    v70 = nullptr;
  }
  v10 = *(_QWORD *)(a1 + 168);
  if ( v10 != 0 )
  {
    if ( v10 == v8 )
    {
      v70 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v10 + 8LL))(a1: v10, a2: v69);
      v12 = *(_QWORD *)(a1 + 168);
      if ( v12 == 0 )
        goto LABEL_21;
      LOBYTE(v11) = v12 != v8;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 32LL))(a1: v12, a2: v11);
    }
    else
    {
      v70 = *(_QWORD **)(a1 + 168);
    }
    *(_QWORD *)(a1 + 168) = 0;
  }
LABEL_21:
  if ( v84 != nullptr )
  {
    if ( v84 == v83 )
    {
      *(_QWORD *)(a1 + 168) = (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v84 + 8LL))(
                                a1: v84,
                                a2: a1 + 112);
      if ( v84 != nullptr )
      {
        v13 = v83;
        LOBYTE(v13) = v84 != v83;
        (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v84 + 32LL))(a1: v84, a2: v13);
      }
    }
    else
    {
      *(_QWORD *)(a1 + 168) = v84;
    }
  }
  if ( v70 != nullptr )
  {
    v14 = v69;
    LOBYTE(v14) = v70 != v69;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v70 + 32LL))(a1: v70, a2: v14);
  }
  v15 = a1 + 176;
  v71[0] = std::_Func_impl_no_alloc<`PXEngine::ConnectionManager::Launch'::`2'::_lambda_4_,PXEngine::XAEAVNetworkEndpoint::EAAXXZ,PXEngine::SendingMessage &>::`vftable';
  v71[1] = a1;
  v72 = v71;
  v86 = nullptr;
  v86 = (_BYTE *)sub_1408052C0(a1: v71, a2: v85);
  if ( v72 != nullptr )
  {
    v16 = v71;
    LOBYTE(v16) = v72 != v71;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v72 + 32LL))(a1: v72, a2: v16);
    v72 = nullptr;
  }
  v17 = *(_QWORD *)(a1 + 232);
  if ( v17 != 0 )
  {
    if ( v17 == v15 )
    {
      v72 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v17 + 8LL))(a1: v17, a2: v71);
      v19 = *(_QWORD *)(a1 + 232);
      if ( v19 == 0 )
        goto LABEL_36;
      LOBYTE(v18) = v19 != v15;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 32LL))(a1: v19, a2: v18);
    }
    else
    {
      v72 = *(_QWORD **)(a1 + 232);
    }
    *(_QWORD *)(a1 + 232) = 0;
  }
LABEL_36:
  if ( v86 != nullptr )
  {
    if ( v86 == v85 )
    {
      *(_QWORD *)(a1 + 232) = (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v86 + 8LL))(
                                a1: v86,
                                a2: a1 + 176);
      if ( v86 != nullptr )
      {
        v20 = v85;
        LOBYTE(v20) = v86 != v85;
        (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v86 + 32LL))(a1: v86, a2: v20);
      }
    }
    else
    {
      *(_QWORD *)(a1 + 232) = v86;
    }
  }
  if ( v72 != nullptr )
  {
    v21 = v71;
    LOBYTE(v21) = v72 != v71;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v72 + 32LL))(a1: v72, a2: v21);
  }
  v22 = a1 + 240;
  v73[0] = std::_Func_impl_no_alloc<`PXEngine::ConnectionManager::Launch'::`2'::_lambda_5_,PXEngine::_NAEAVNetworkEndpoint::EAAXXZ,std::chrono::duration<unsigned int,std::ratio<1,1000>>,PXEngine::StatusUpdateParameters const &>::`vftable';
  v73[1] = a1;
  v74 = v73;
  v88 = nullptr;
  v88 = (_BYTE *)sub_1408052E0(a1: v73, a2: v87);
  if ( v74 != nullptr )
  {
    v23 = v73;
    LOBYTE(v23) = v74 != v73;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v74 + 32LL))(a1: v74, a2: v23);
    v74 = nullptr;
  }
  v24 = *(_QWORD *)(a1 + 296);
  if ( v24 != 0 )
  {
    if ( v24 == v22 )
    {
      v74 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v24 + 8LL))(a1: v24, a2: v73);
      v26 = *(_QWORD *)(a1 + 296);
      if ( v26 == 0 )
        goto LABEL_51;
      LOBYTE(v25) = v26 != v22;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 32LL))(a1: v26, a2: v25);
    }
    else
    {
      v74 = *(_QWORD **)(a1 + 296);
    }
    *(_QWORD *)(a1 + 296) = 0;
  }
LABEL_51:
  if ( v88 != nullptr )
  {
    if ( v88 == v87 )
    {
      *(_QWORD *)(a1 + 296) = (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v88 + 8LL))(
                                a1: v88,
                                a2: a1 + 240);
      if ( v88 != nullptr )
      {
        v27 = v87;
        LOBYTE(v27) = v88 != v87;
        (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v88 + 32LL))(a1: v88, a2: v27);
      }
    }
    else
    {
      *(_QWORD *)(a1 + 296) = v88;
    }
  }
  if ( v74 != nullptr )
  {
    v28 = v73;
    LOBYTE(v28) = v74 != v73;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v74 + 32LL))(a1: v74, a2: v28);
  }
  v29 = *(__int64 **)(a1 + 16);
  v30 = *v29;
  memset(v75, 0, sizeof(v75));
  v76 = 0u;
  memset(v77, 0, sizeof(v77));
  v78 = 0u;
  v67[0] = std::_Func_impl_no_alloc<`PXEngine::ConnectionManager::Launch'::`2'::_lambda_6_,PXEngine::XVReceivedPacket::EAAXXZ>::`vftable';
  v67[1] = a1;
  v68 = (__int64)v67;
  *((_QWORD *)&v76 + 1) = sub_140805300(a1: v67, a2: v75);
  if ( v68 != 0 )
  {
    v32 = v67;
    LOBYTE(v32) = v68 != (_QWORD)v67;
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v68 + 32LL))(a1: v68, a2: v32);
  }
  v68 = 19937;
  v61[0] = std::_Func_impl_no_alloc<`PXEngine::ConnectionManager::Launch'::`2'::_lambda_7_,PXEngine::XVSendingMessage::EAAXXZ>::`vftable';
  v61[1] = a1;
  v33 = v61;
  v62 = (__int64)v61;
  if ( *((_QWORD *)&v78 + 1) != 0 )
  {
    LOBYTE(v31) = *((_QWORD *)&v78 + 1) != (_QWORD)v77;
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)&v78 + 1) + 32LL))(a1: *((_QWORD *)&v78 + 1), a2: v31);
    *((_QWORD *)&v78 + 1) = 0;
    v33 = (_QWORD *)v62;
  }
  if ( v33 != nullptr )
  {
    if ( v33 == v61 )
    {
      *((_QWORD *)&v78 + 1) = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*v33 + 8LL))(a1: v33, a2: v77);
      if ( v62 != 0 )
      {
        v34 = v61;
        LOBYTE(v34) = v62 != (_QWORD)v61;
        (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v62 + 32LL))(a1: v62, a2: v34);
      }
    }
    else
    {
      *((_QWORD *)&v78 + 1) = v33;
    }
  }
  v62 = 19937;
  v58 = nullptr;
  if ( *((_QWORD *)&v76 + 1) != 0 )
    v58 = (__int64 (__fastcall ***)())(***((__int64 (__fastcall ****)(_QWORD, __int64 (__fastcall ***)()))&v76 + 1))(
                                        a1: *((_QWORD *)&v76 + 1),
                                        a2: &v52);
  v60 = 0;
  if ( *((_QWORD *)&v78 + 1) != 0 )
    v60 = (***((__int64 (__fastcall ****)(_QWORD, _BYTE *))&v78 + 1))(a1: *((_QWORD *)&v78 + 1), a2: v59);
  (*(void (__fastcall **)(__int64 *, __int64 (__fastcall ***)()))(v30 + 8))(a1: v29, a2: &v52);
  if ( *((_QWORD *)&v78 + 1) != 0 )
  {
    v35 = v77;
    LOBYTE(v35) = *((_QWORD *)&v78 + 1) != (_QWORD)v77;
    (*(void (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)&v78 + 1) + 32LL))(a1: *((_QWORD *)&v78 + 1), a2: v35);
  }
  *((_QWORD *)&v78 + 1) = 19937;
  if ( *((_QWORD *)&v76 + 1) != 0 )
  {
    v36 = v75;
    LOBYTE(v36) = *((_QWORD *)&v76 + 1) != (_QWORD)v75;
    (*(void (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)&v76 + 1) + 32LL))(a1: *((_QWORD *)&v76 + 1), a2: v36);
  }
  v37 = *(__int64 **)(a1 + 24);
  v38 = *v37;
  v52 = std::_Func_impl_no_alloc<`PXEngine::ConnectionManager::Launch'::`2'::_lambda_8_,PXEngine::XAEBUReceiveData::EAAXXZ>::`vftable';
  v53 = a1;
  v58 = &v52;
  (*(void (__fastcall **)(__int64 *, __int64 (__fastcall ***)()))(v38 + 24))(a1: v37, a2: &v52);
  *(_BYTE *)(a1 + 304) = 1;
  v39 = sub_140A4C190();
  sub_140024D90(a1: &v52, a2: v39);
  sub_140024D90(a1: &v55, a2: v39 + 24);
  v40 = (_QWORD *)sub_1409DB470(a1: 64);
  v41 = v40;
  if ( v40 != nullptr )
  {
    *v40 = a1;
    v40[1] = sub_140804F70;
    v42 = v54;
    v54 = 0;
    v43 = v53;
    v53 = 0;
    v44 = v52;
    v52 = nullptr;
    v41[2] = v44;
    v41[3] = v43;
    v41[4] = v42;
    v45 = v57;
    v57 = 0;
    v46 = v56;
    v56 = 0;
    v47 = v55;
    v55 = 0;
    v41[5] = v47;
    v41[6] = v46;
    v41[7] = v45;
  }
  v48 = sub_140A001C8(
          lpThreadAttributes: nullptr,
          dwStackSize: 0,
          lpModuleName: (LPCWSTR)sub_1408039D0,
          a4: 0,
          a5: (__int64)&v51[1]);
  if ( v48 == 0 )
  {
    LODWORD(v51[1]) = 0;
    sub_1409D4760(a1: 6);
  }
  if ( *(_DWORD *)(a1 + 320) != 0 )
    sub_1409E3C58(a1: v48);
  v49 = v51[1];
  *(_OWORD *)v51 = 0;
  *(_QWORD *)(a1 + 312) = v48;
  *(_QWORD *)(a1 + 320) = v49;
  return sub_1407B2280(a1: &v52);
}