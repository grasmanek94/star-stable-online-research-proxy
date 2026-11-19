_QWORD *__fastcall sub_1404B72A0(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rbx
  void *v5; // rcx
  __int64 v6; // rax
  __int64 i; // r13
  __int64 v8; // r15
  __int64 v9; // rsi
  _QWORD *v10; // rdi
  _QWORD *j; // rbx
  _QWORD *v12; // rcx
  _QWORD *v13; // rdx
  _QWORD *v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rbx
  _QWORD *result; // rax
  _QWORD *v18; // rbx
  unsigned __int64 v19; // r9
  __int64 v20; // r10
  __int64 v21; // rdx
  __int64 v22; // r11
  __int64 v23; // r10
  _QWORD *v24; // rax
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r10
  __int64 v28; // r9
  _QWORD *v29; // rax
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r10
  __int64 v33; // r9
  _QWORD *v34; // rax
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // r10
  __int64 v38; // r9
  _QWORD *v39; // rax
  unsigned __int16 v40; // ax
  char **v41; // rcx
  _QWORD v42[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v43; // [rsp+30h] [rbp-40h] BYREF
  void **v44; // [rsp+38h] [rbp-38h] BYREF
  int v45; // [rsp+40h] [rbp-30h]
  int v46; // [rsp+44h] [rbp-2Ch]
  __int128 v47; // [rsp+48h] [rbp-28h] BYREF
  __int64 v48; // [rsp+58h] [rbp-18h]
  unsigned __int64 v49; // [rsp+60h] [rbp-10h]

  v4 = (_QWORD *)sub_1409DB470(a1: 48);
  v43 = (__int64)v4;
  if ( v4 != nullptr )
  {
    v47 = 0;
    *(_QWORD *)&v47 = sub_1409DB470(a1: 32);
    v48 = 21;
    v49 = 31;
    strcpy((char *)v47, "mystablecustomization");
    *v4 = &IPXConsoleCommand::`vftable';
    sub_140016F80(a1: v4 + 1, a2: &v47);
    if ( v49 > 0xF )
    {
      v5 = (void *)v47;
      if ( v49 + 1 >= 0x1000 )
      {
        if ( (unsigned __int64)(v47 - *(_QWORD *)(v47 - 8) - 8) > 0x1F )
          __fastfail(5u);
        v5 = *(void **)(v47 - 8);
      }
      sub_1409DB4C0(lpMem: v5);
    }
    *(_QWORD *)&v47 = 19937;
    v48 = 0;
    v49 = 31;
    *v4 = &PXEngine::MyStableCustomizationDebugCommand::`vftable';
    v4[5] = a1;
  }
  else
  {
    v4 = nullptr;
  }
  v43 = 0;
  v42[0] = v4;
  sub_140017900(a1: v42);
  v43 = 19937;
  sub_1400B7A00(a1, a2);
  sub_1406193F0(a1: a2);
  v6 = *(_QWORD *)(a1 + 272);
  v42[0] = v6;
  for ( i = *(_QWORD *)(a1 + 264); i != v6; i += 176 )
  {
    v8 = *(_QWORD *)(i + 152);
    v9 = *(_QWORD *)(i + 144);
    if ( v9 != v8 )
    {
      do
      {
        v10 = *(_QWORD **)(v9 + 144);
        for ( j = *(_QWORD **)(v9 + 136); j != v10; j += 22 )
        {
          v12 = *(_QWORD **)sub_140062670(a1: a1 + 392, a2: &v44, a3: j + 19);
          if ( v12 != j + 4 )
          {
            v13 = j + 7;
            v14 = v12 + 3;
            if ( j[10] > 0xFu )
              v13 = (_QWORD *)*v13;
            sub_14000D680(a1: v14, a2: v13, a3: j[9]);
          }
        }
        v9 += 168;
      }
      while ( v9 != v8 );
      v6 = v42[0];
    }
  }
  sub_1404B6D30(a1);
  sub_1404B3230(a1, a2: a1 + 240, a3: a1 + 264);
  v15 = qword_14138A6F0;
  if ( qword_14138A6F0 == 0 )
  {
    if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  v16 = sub_1405FD2E0(a1: qword_14138A6F0, a2: v42, a3: "Network");
  if ( (unsigned __int8)sub_1406006A0(a1: v15, a2: v16, a3: 122) != 0 )
  {
    sub_1405F1D60(a1: &v44, a2: *(unsigned int *)(v16 + 12), a3: *(unsigned int *)(v16 + 8));
  }
  else
  {
    v45 = 0;
    v46 = 195948557;
  }
  v44 = &PXEngine::SafeActorPtrAs<CPXNetwork>::`vftable';
  result = (_QWORD *)sub_1405F1EE0(a1: (__int64)&v44);
  v18 = result;
  if ( result != nullptr )
  {
    v19 = result[375]
        & (0x100000001B3LL
         * (HIBYTE(word_141314194) ^ (0x100000001B3LL * ((unsigned __int8)word_141314194 ^ 0xCBF29CE484222325uLL))));
    v20 = result[372];
    v21 = *(_QWORD *)(v20 + 16 * v19 + 8);
    v22 = result[370];
    if ( v21 != v22 )
    {
      v23 = *(_QWORD *)(v20 + 16 * v19);
      if ( word_141314194 == *(_WORD *)(v21 + 16) )
      {
LABEL_32:
        if ( v21 != 0 && v21 != v22 )
        {
          v40 = sub_140205600(a1: &word_141314194, a2: v21);
          v41 = off_140FAE280;
          goto LABEL_87;
        }
        v24 = (_QWORD *)sub_1409DB470(a1: 24);
        v42[0] = v24;
        if ( v24 != nullptr )
        {
          *v24 = &PXEngine::RpcExecutor::HandlerStub<std::_Front_binder<void (PXEngine::CustomizationRulesManager::*)(std::vector<PXEngine::ModuleMessages::MyStable::ApplyCustomizationResponse> const &,bool,bool),PXEngine::CustomizationRulesManager *>,std::tuple<std::vector<PXEngine::ModuleMessages::MyStable::ApplyCustomizationResponse>,bool,bool>>::`vftable';
          v24[1] = sub_1404B4B30;
          v24[2] = a1;
        }
        else
        {
          v24 = nullptr;
        }
        v42[0] = v24;
        LOWORD(v43) = word_141314194;
        sub_140203AF0(a1: v18 + 369, a2: &v47, a3: &v43, a4: v42);
        if ( v42[0] != 0 )
          (**(void (__fastcall ***)(_QWORD, __int64))v42[0])(a1: v42[0], a2: 1);
        v42[0] = 19937;
        v25 = v18[372];
        v26 = *(_QWORD *)(v25
                        + 16
                        * (v18[375]
                         & (0x100000001B3LL
                          * (HIBYTE(word_1413141A4)
                           ^ (0x100000001B3LL * ((unsigned __int8)word_1413141A4 ^ 0xCBF29CE484222325uLL)))))
                        + 8);
        v27 = v18[370];
        if ( v26 != v27 )
        {
          v28 = *(_QWORD *)(v25
                          + 16
                          * (v18[375]
                           & (0x100000001B3LL
                            * (HIBYTE(word_1413141A4)
                             ^ (0x100000001B3LL * ((unsigned __int8)word_1413141A4 ^ 0xCBF29CE484222325uLL))))));
          if ( word_1413141A4 == *(_WORD *)(v26 + 16) )
          {
LABEL_45:
            if ( v26 != 0 && v26 != v27 )
            {
              v40 = sub_140205600(a1: &word_1413141A4, a2: v26);
              v41 = off_140FAE2A8;
              goto LABEL_87;
            }
            v29 = (_QWORD *)sub_1409DB470(a1: 24);
            v42[0] = v29;
            if ( v29 != nullptr )
            {
              *v29 = &PXEngine::RpcExecutor::HandlerStub<std::_Front_binder<void (PXEngine::CustomizationRulesManager::*)(std::vector<PXEngine::ModuleMessages::MyStable::AppliedCustomizationData> const &),PXEngine::CustomizationRulesManager *>,std::tuple<std::vector<PXEngine::ModuleMessages::MyStable::AppliedCustomizationData>>>::`vftable';
              v29[1] = sub_1404B5F30;
              v29[2] = a1;
            }
            else
            {
              v29 = nullptr;
            }
            v42[0] = v29;
            LOWORD(v43) = word_1413141A4;
            sub_140203AF0(a1: v18 + 369, a2: &v47, a3: &v43, a4: v42);
            if ( v42[0] != 0 )
              (**(void (__fastcall ***)(_QWORD, __int64))v42[0])(a1: v42[0], a2: 1);
            v42[0] = 19937;
            v30 = v18[372];
            v31 = *(_QWORD *)(v30
                            + 16
                            * (v18[375]
                             & (0x100000001B3LL
                              * (HIBYTE(word_1413141AC)
                               ^ (0x100000001B3LL * ((unsigned __int8)word_1413141AC ^ 0xCBF29CE484222325uLL)))))
                            + 8);
            v32 = v18[370];
            if ( v31 != v32 )
            {
              v33 = *(_QWORD *)(v30
                              + 16
                              * (v18[375]
                               & (0x100000001B3LL
                                * (HIBYTE(word_1413141AC)
                                 ^ (0x100000001B3LL * ((unsigned __int8)word_1413141AC ^ 0xCBF29CE484222325uLL))))));
              if ( word_1413141AC == *(_WORD *)(v31 + 16) )
              {
LABEL_58:
                if ( v31 != 0 && v31 != v32 )
                {
                  v40 = sub_140205600(a1: &word_1413141AC, a2: v31);
                  v41 = off_140FAE2D0;
                  goto LABEL_87;
                }
                v34 = (_QWORD *)sub_1409DB470(a1: 24);
                v42[0] = v34;
                if ( v34 != nullptr )
                {
                  *v34 = &PXEngine::RpcExecutor::HandlerStub<std::_Front_binder<void (PXEngine::CustomizationRulesManager::*)(std::vector<unsigned int> &&),PXEngine::CustomizationRulesManager *>,std::tuple<std::vector<unsigned int>>>::`vftable';
                  v34[1] = sub_1404B6900;
                  v34[2] = a1;
                }
                else
                {
                  v34 = nullptr;
                }
                v42[0] = v34;
                LOWORD(v43) = word_1413141AC;
                sub_140203AF0(a1: v18 + 369, a2: &v47, a3: &v43, a4: v42);
                if ( v42[0] != 0 )
                  (**(void (__fastcall ***)(_QWORD, __int64))v42[0])(a1: v42[0], a2: 1);
                v42[0] = 19937;
                v35 = v18[372];
                v36 = *(_QWORD *)(v35
                                + 16
                                * (v18[375]
                                 & (0x100000001B3LL
                                  * (HIBYTE(word_1413141B4)
                                   ^ (0x100000001B3LL * ((unsigned __int8)word_1413141B4 ^ 0xCBF29CE484222325uLL)))))
                                + 8);
                v37 = v18[370];
                if ( v36 != v37 )
                {
                  v38 = *(_QWORD *)(v35
                                  + 16
                                  * (v18[375]
                                   & (0x100000001B3LL
                                    * (HIBYTE(word_1413141B4)
                                     ^ (0x100000001B3LL * ((unsigned __int8)word_1413141B4 ^ 0xCBF29CE484222325uLL))))));
                  if ( word_1413141B4 == *(_WORD *)(v36 + 16) )
                    goto LABEL_71;
                  while ( v36 != v38 )
                  {
                    v36 = *(_QWORD *)(v36 + 8);
                    if ( word_1413141B4 == *(_WORD *)(v36 + 16) )
                      goto LABEL_71;
                  }
                }
                v36 = 0;
LABEL_71:
                if ( v36 == 0 || v36 == v37 )
                {
                  v39 = (_QWORD *)sub_1409DB470(a1: 24);
                  v42[0] = v39;
                  if ( v39 != nullptr )
                  {
                    *v39 = &PXEngine::RpcExecutor::HandlerStub<std::_Front_binder<void (PXEngine::CustomizationRulesManager::*)(std::vector<unsigned int> const &,enum PX_CURRENCY_TYPE,unsigned int,unsigned int,bool),PXEngine::CustomizationRulesManager *>,std::tuple<std::vector<unsigned int>,enum PX_CURRENCY_TYPE,unsigned int,unsigned int,bool>>::`vftable';
                    v39[1] = sub_1404B69F0;
                    v39[2] = a1;
                  }
                  else
                  {
                    v39 = nullptr;
                  }
                  v42[0] = v39;
                  LOWORD(v43) = word_1413141B4;
                  result = (_QWORD *)sub_140203AF0(a1: v18 + 369, a2: &v47, a3: &v43, a4: v42);
                  if ( v42[0] != 0 )
                    return (_QWORD *)(**(__int64 (__fastcall ***)(_QWORD, __int64))v42[0])(a1: v42[0], a2: 1);
                  return result;
                }
                v40 = sub_140205600(a1: &word_1413141B4, a2: v36);
                v41 = off_140FAE2F8;
LABEL_87:
                if ( (unsigned __int8)sub_140059D90(a1: v41, a2: "Method with message id %d already bound!", v40) != 0 )
                  __debugbreak();
                sub_1409E29B8(a1: 999);
                __debugbreak();
              }
              while ( v31 != v33 )
              {
                v31 = *(_QWORD *)(v31 + 8);
                if ( word_1413141AC == *(_WORD *)(v31 + 16) )
                  goto LABEL_58;
              }
            }
            v31 = 0;
            goto LABEL_58;
          }
          while ( v26 != v28 )
          {
            v26 = *(_QWORD *)(v26 + 8);
            if ( word_1413141A4 == *(_WORD *)(v26 + 16) )
              goto LABEL_45;
          }
        }
        v26 = 0;
        goto LABEL_45;
      }
      while ( v21 != v23 )
      {
        v21 = *(_QWORD *)(v21 + 8);
        if ( word_141314194 == *(_WORD *)(v21 + 16) )
          goto LABEL_32;
      }
    }
    v21 = 0;
    goto LABEL_32;
  }
  return result;
}