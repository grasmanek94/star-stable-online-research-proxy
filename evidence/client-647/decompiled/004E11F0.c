__int64 __fastcall sub_1404E11F0(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rdi
  __int64 result; // rax
  __int64 v7; // rbx
  void **v8; // [rsp+20h] [rbp-29h] BYREF
  __int64 v9; // [rsp+28h] [rbp-21h]
  _BYTE v10[16]; // [rsp+30h] [rbp-19h] BYREF
  __int64 (__fastcall **v11)(); // [rsp+40h] [rbp-9h] BYREF
  __int64 v12; // [rsp+48h] [rbp-1h]
  __int16 v13; // [rsp+50h] [rbp+7h]
  int v14; // [rsp+52h] [rbp+9h]
  __int16 v15; // [rsp+56h] [rbp+Dh]
  __int64 (__fastcall ***v16)(); // [rsp+78h] [rbp+2Fh]

  sub_1400B7A00(a1, a2);
  v4 = (_QWORD *)sub_140619130(a1: a2);
  v5 = sub_1405FD2E0(a1: v4, a2: (__int64)v10, a3: (__int64)"Network");
  if ( (unsigned __int8)sub_1406006A0(a1: v4, a2: v5, a3: 122) != 0 )
    sub_1405F1D60(a1: (__int64)&v8, a2: *(_DWORD *)(v5 + 12), a3: *(_DWORD *)(v5 + 8));
  else
    v9 = 0xBADF00D00000000LL;
  v8 = &PXEngine::SafeActorPtrAs<CPXNetwork>::`vftable';
  result = sub_1405F1EE0(a1: (__int64)&v8);
  v7 = result;
  if ( result != 0 )
  {
    v11 = ___7___Func_impl_no_alloc_V_lambda_1___4__PreCalculate_PledgeManager_PXEngine__UEAAXAEBVActorContext_4__Z_XAEAVByteStreamReader_4__std__6B_;
    v15 = HIWORD(v9);
    v14 = *(_DWORD *)((char *)&v9 + 2);
    v16 = &v11;
    v12 = a1;
    v13 = 360;
    sub_1407D46B0(a1: result, a2: 360, a3: &v11);
    v12 = a1;
    v11 = ___7___Func_impl_no_alloc_V_lambda_2___4__PreCalculate_PledgeManager_PXEngine__UEAAXAEBVActorContext_4__Z_XAEAVByteStreamReader_4__std__6B_;
    v14 = *(_DWORD *)((char *)&v9 + 2);
    v15 = HIWORD(v9);
    v16 = &v11;
    v13 = 358;
    return sub_1407D46B0(a1: v7, a2: 358, a3: &v11);
  }
  return result;
}