__int64 __fastcall sub_1403EE270(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rbx
  _QWORD *v11; // rax
  unsigned __int16 v12; // ax
  void **v13; // [rsp+20h] [rbp-28h] BYREF
  int v14; // [rsp+28h] [rbp-20h]
  int v15; // [rsp+2Ch] [rbp-1Ch]
  _BYTE v16[24]; // [rsp+30h] [rbp-18h] BYREF
  _QWORD *v17; // [rsp+58h] [rbp+10h] BYREF
  __int64 (__fastcall ***v18)(_QWORD, __int64); // [rsp+60h] [rbp+18h] BYREF

  v2 = qword_14138A6F0;
  if ( qword_14138A6F0 == 0 )
  {
    if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  v3 = sub_1405FD2E0(a1: qword_14138A6F0, a2: v16, a3: "Network");
  if ( (unsigned __int8)sub_1406006A0(a1: v2, a2: v3, a3: 122) != 0 )
  {
    sub_1405F1D60(a1: &v13, a2: *(unsigned int *)(v3 + 12), a3: *(unsigned int *)(v3 + 8));
  }
  else
  {
    v14 = 0;
    v15 = 195948557;
  }
  v13 = &PXEngine::SafeActorPtrAs<CPXNetwork>::`vftable';
  result = sub_1405F1EE0(a1: (__int64)&v13);
  v5 = result;
  if ( result != 0 )
  {
    v6 = *(_QWORD *)(result + 2976);
    v7 = *(_QWORD *)(v6
                   + 16
                   * ((0x100000001B3LL
                     * (HIBYTE(word_141313EA4)
                      ^ (0x100000001B3LL * ((unsigned __int8)word_141313EA4 ^ 0xCBF29CE484222325uLL))))
                    & *(_QWORD *)(result + 3000))
                   + 8);
    v8 = *(_QWORD *)(v5 + 2960);
    if ( v7 != v8 )
    {
      v9 = *(_QWORD *)(v6
                     + 16
                     * ((0x100000001B3LL
                       * (HIBYTE(word_141313EA4)
                        ^ (0x100000001B3LL * ((unsigned __int8)word_141313EA4 ^ 0xCBF29CE484222325uLL))))
                      & *(_QWORD *)(v5 + 3000)));
      if ( word_141313EA4 == *(_WORD *)(v7 + 16) )
      {
LABEL_10:
        if ( v7 == 0 )
          v7 = *(_QWORD *)(v5 + 2960);
        if ( v7 != v8 )
        {
          v12 = sub_140205600(a1: &word_141313EA4, a2: v9);
          if ( (unsigned __int8)sub_140059D90(a1: off_140F8E460, a2: "Method with message id %d already bound!", v12) != 0 )
            __debugbreak();
          sub_1409E29B8(a1: 999);
          __debugbreak();
        }
      }
      else
      {
        while ( v7 != v9 )
        {
          v7 = *(_QWORD *)(v7 + 8);
          if ( word_141313EA4 == *(_WORD *)(v7 + 16) )
            goto LABEL_10;
        }
      }
    }
    v10 = v5 + 2952;
    v11 = (_QWORD *)sub_1409DB470(a1: 24);
    v17 = v11;
    if ( v11 != nullptr )
    {
      *v11 = &PXEngine::RpcExecutor::HandlerStub<std::_Front_binder<void (CPXReportPlayer::*)(enum PXEngine::ReportAMessageResponse),CPXReportPlayer *>,std::tuple<enum PXEngine::ReportAMessageResponse>>::`vftable';
      v11[1] = sub_1403EE680;
      v11[2] = a1;
    }
    v18 = (__int64 (__fastcall ***)(_QWORD, __int64))v11;
    LOWORD(v17) = word_141313EA4;
    result = sub_1402C7E00(a1: v10, a2: v16, a3: &v17, a4: &v18);
    if ( v18 != nullptr )
      return (**v18)(a1: v18, a2: 1);
  }
  return result;
}