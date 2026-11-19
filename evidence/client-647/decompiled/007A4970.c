__int64 __fastcall sub_1407A4970(_QWORD *a1, _QWORD *a2)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  _QWORD *v9; // rax
  __int64 result; // rax
  unsigned __int16 v11; // ax
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF
  _QWORD *v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 (__fastcall ***v14)(_QWORD, __int64); // [rsp+50h] [rbp+18h] BYREF

  v4 = 2
     * ((0x100000001B3LL
       * (HIBYTE(word_141313F64) ^ (0x100000001B3LL * ((unsigned __int8)word_141313F64 ^ 0xCBF29CE484222325uLL))))
      & a1[6]);
  v5 = a1[3];
  v6 = *(_QWORD *)(v5
                 + 16
                 * ((0x100000001B3LL
                   * (HIBYTE(word_141313F64)
                    ^ (0x100000001B3LL * ((unsigned __int8)word_141313F64 ^ 0xCBF29CE484222325uLL))))
                  & a1[6])
                 + 8);
  v7 = a1[1];
  if ( v6 != v7 )
  {
    v8 = *(_QWORD *)(v5 + 8 * v4);
    if ( word_141313F64 == *(_WORD *)(v6 + 16) )
    {
LABEL_5:
      if ( v6 == 0 )
        v6 = a1[1];
      if ( v6 != v7 )
      {
        v11 = sub_140205600(a1: &word_141313F64, a2: v8);
        if ( (unsigned __int8)sub_140059D90(a1: off_1410159A8, a2: "Method with message id %d already bound!", v11) != 0 )
          __debugbreak();
        sub_1409E29B8(a1: 999);
        __debugbreak();
      }
    }
    else
    {
      while ( v6 != v8 )
      {
        v6 = *(_QWORD *)(v6 + 8);
        if ( word_141313F64 == *(_WORD *)(v6 + 16) )
          goto LABEL_5;
      }
    }
  }
  v9 = (_QWORD *)sub_1409DB470(a1: 24);
  v13 = v9;
  if ( v9 != nullptr )
  {
    *v9 = &PXEngine::RpcExecutor::HandlerStub<std::_Front_binder<void (CPXNetwork::*)(PXEngine::StrongTypeId<PXEngine::CharacterIdType>),CPXNetwork *>,std::tuple<PXEngine::StrongTypeId<PXEngine::CharacterIdType>>>::`vftable';
    v9[1] = *a2;
    v9[2] = a2[1];
  }
  v14 = (__int64 (__fastcall ***)(_QWORD, __int64))v9;
  LOWORD(v13) = word_141313F64;
  result = sub_140203AF0(a1, a2: v12, a3: &v13, a4: &v14);
  if ( v14 != nullptr )
    return (**v14)(a1: v14, a2: 1);
  return result;
}