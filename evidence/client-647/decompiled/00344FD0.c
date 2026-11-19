__int64 __fastcall sub_140344FD0(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v3; // rbp
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r9
  __int64 v7; // rdx
  unsigned int v8; // edi
  unsigned int v9; // esi
  __int64 v10; // rax
  unsigned __int16 v11; // ax
  void **v12; // [rsp+20h] [rbp-48h] BYREF
  int v13; // [rsp+28h] [rbp-40h]
  int v14; // [rsp+2Ch] [rbp-3Ch]
  void **v15; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v16; // [rsp+38h] [rbp-30h]
  unsigned int v17; // [rsp+3Ch] [rbp-2Ch]
  _BYTE v18[40]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v19; // [rsp+78h] [rbp+10h] BYREF
  __int64 (__fastcall ***v20)(_QWORD, __int64); // [rsp+80h] [rbp+18h] BYREF

  result = sub_1407EE6A0();
  if ( (_BYTE)result != 0 )
  {
    sub_1405F1D40(a1: &v15, a2: a1 + 120);
    if ( (unsigned __int8)sub_1405F1F70(a1: &v15, a2: 168) != 0 )
    {
      sub_1405F1D60(a1: &v12, a2: v17, a3: v16);
    }
    else
    {
      v13 = 0;
      v14 = 195948557;
    }
    v12 = &PXEngine::SafeActorPtrAs<CPXMyStable>::`vftable';
    result = sub_1405F1E20(a1: &v12);
    if ( (_BYTE)result != 0 )
    {
      v3 = (_QWORD *)sub_1407EE5E0();
      sub_1405F1D40(a1: &v15, a2: &v12);
      v15 = &PXEngine::SafeActorPtrAs<CPXMyStable>::`vftable';
      v4 = v3[3];
      v5 = *(_QWORD *)(v4
                     + 16
                     * ((0x100000001B3LL
                       * (HIBYTE(word_141313FCC)
                        ^ (0x100000001B3LL * ((unsigned __int8)word_141313FCC ^ 0xCBF29CE484222325uLL))))
                      & v3[6])
                     + 8);
      v6 = v3[1];
      if ( v5 != v6 )
      {
        v7 = *(_QWORD *)(v4
                       + 16
                       * ((0x100000001B3LL
                         * (HIBYTE(word_141313FCC)
                          ^ (0x100000001B3LL * ((unsigned __int8)word_141313FCC ^ 0xCBF29CE484222325uLL))))
                        & v3[6]));
        if ( word_141313FCC == *(_WORD *)(v5 + 16) )
        {
LABEL_10:
          if ( v5 == 0 )
            v5 = v3[1];
          if ( v5 != v6 )
          {
            v11 = sub_140205600(a1: &word_141313FCC, a2: v7);
            if ( (unsigned __int8)sub_140059D90(a1: off_140F78A20, a2: "Method with message id %d already bound!", v11) != 0 )
              __debugbreak();
            sub_1409E29B8(a1: 999);
            __debugbreak();
          }
        }
        else
        {
          while ( v5 != v7 )
          {
            v5 = *(_QWORD *)(v5 + 8);
            if ( word_141313FCC == *(_WORD *)(v5 + 16) )
              goto LABEL_10;
          }
        }
      }
      v8 = v16;
      v9 = v17;
      v10 = sub_1409DB470(a1: 32);
      v19 = v10;
      if ( v10 != 0 )
      {
        *(_QWORD *)v10 = &PXEngine::RpcExecutor::HandlerStub<std::_Front_binder<void (PXEngine::detail::Wrapper<void (CPXMyStable::*)(unsigned int,PXEngine::HorseCreateMasterMessage const &,unsigned int)>::*)(unsigned int,PXEngine::HorseCreateMasterMessage const &,unsigned int),PXEngine::detail::Wrapper<void (CPXMyStable::*)(unsigned int,PXEngine::HorseCreateMasterMessage const &,unsigned int)>>,std::tuple<unsigned int,PXEngine::HorseCreateMasterMessage,unsigned int>>::`vftable';
        *(_QWORD *)(v10 + 8) = sub_140347340;
        *(_DWORD *)(v10 + 24) = v8;
        *(_DWORD *)(v10 + 28) = v9;
        *(_QWORD *)(v10 + 16) = &PXEngine::SafeActorPtrAs<CPXMyStable>::`vftable';
      }
      v20 = (__int64 (__fastcall ***)(_QWORD, __int64))v10;
      LOWORD(v19) = word_141313FCC;
      result = sub_140203AF0(a1: v3, a2: v18, a3: &v19, a4: &v20);
      if ( v20 != nullptr )
        return (**v20)(a1: v20, a2: 1);
    }
  }
  return result;
}