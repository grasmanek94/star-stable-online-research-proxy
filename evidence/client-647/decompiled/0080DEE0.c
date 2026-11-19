__int64 __fastcall sub_14080DEE0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD v14[9]; // [rsp+28h] [rbp-60h] BYREF

  v2 = a2;
  v14[8] = a2;
  v4 = a1 + 160;
  if ( a1 + 160 != a2 )
  {
    v5 = *(_QWORD *)(a1 + 216);
    if ( v5 != 0 )
    {
      LOBYTE(a2) = v5 != v4;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 32LL))(a1: v5, a2);
      *(_QWORD *)(a1 + 216) = 0;
    }
    v6 = *(_QWORD *)(v2 + 56);
    if ( v6 != 0 )
    {
      if ( v6 == v2 )
      {
        *(_QWORD *)(a1 + 216) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 8LL))(a1: v6, a2: v4);
        v8 = *(_QWORD *)(v2 + 56);
        if ( v8 == 0 )
          goto LABEL_10;
        LOBYTE(v7) = v8 != v2;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 32LL))(a1: v8, a2: v7);
      }
      else
      {
        *(_QWORD *)(a1 + 216) = v6;
      }
      *(_QWORD *)(v2 + 56) = 0;
    }
  }
LABEL_10:
  v9 = *(__int64 **)(a1 + 8);
  v10 = *v9;
  v14[0] = ___7___Func_impl_no_alloc_V_lambda_1___1__Launch_GameServerEncryptedNetworkLayer_PXEngine__UEAAXV__function___A6AXAEBUReceiveData_PXEngine___Z_std___Z_XAEBUReceiveData_4__std__6B_;
  v14[1] = a1;
  v14[7] = v14;
  result = (*(__int64 (__fastcall **)(__int64 *, _QWORD *))(v10 + 24))(a1: v9, a2: v14);
  v13 = *(_QWORD *)(v2 + 56);
  if ( v13 != 0 )
  {
    LOBYTE(v12) = v13 != v2;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 32LL))(a1: v13, a2: v12);
  }
  *(_QWORD *)(v2 + 56) = 19937;
  return result;
}