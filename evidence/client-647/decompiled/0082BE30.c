__int64 __fastcall sub_14082BE30(__int64 a1, __int64 a2)
{
  void (__fastcall ***v4)(_QWORD, _QWORD); // rsi
  void (__fastcall ***v5)(_QWORD, _QWORD); // rdi
  int v6; // edi
  __int64 result; // rax
  _QWORD *v8; // rdi
  int v9; // esi
  __int64 v10; // rdi
  int v11; // eax
  int v12; // ecx
  __int64 *v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rdi
  int v19; // esi
  __int64 v20; // rdi
  int v21; // eax
  int v22; // ecx
  __int64 *v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rdi
  int v29; // esi
  __int64 v30; // rdi
  int v31; // eax
  int v32; // ecx
  __int64 *v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rdi
  void **v41; // [rsp+30h] [rbp-39h] BYREF
  int v42; // [rsp+38h] [rbp-31h]
  int v43; // [rsp+3Ch] [rbp-2Dh]
  _BYTE v44[10]; // [rsp+40h] [rbp-29h] BYREF
  int v45; // [rsp+4Ah] [rbp-1Fh]
  __int16 v46; // [rsp+4Eh] [rbp-1Bh]
  _BYTE v47[16]; // [rsp+50h] [rbp-19h] BYREF
  __int64 (__fastcall **v48)(); // [rsp+60h] [rbp-9h] BYREF
  __int64 v49; // [rsp+68h] [rbp-1h]
  __int16 v50; // [rsp+70h] [rbp+7h]
  int v51; // [rsp+72h] [rbp+9h]
  __int16 v52; // [rsp+76h] [rbp+Dh]
  __int64 (__fastcall ***v53)(); // [rsp+98h] [rbp+2Fh]

  sub_1400B7A00(a1, a2);
  v4 = *(void (__fastcall ****)(_QWORD, _QWORD))(a1 + 240);
  v5 = *(void (__fastcall ****)(_QWORD, _QWORD))(a1 + 232);
  if ( v5 != v4 )
  {
    do
    {
      (**v5)(a1: v5, a2: 0);
      v5 += 2;
    }
    while ( v5 != v4 );
    *(_QWORD *)(a1 + 240) = *(_QWORD *)(a1 + 232);
  }
  v6 = qword_14138A6F0;
  sub_1405F1D40(a1: (__int64)&v41, a2: a1 + 120);
  sub_140828B10(a1: v6, a2: (unsigned int)&v41, a3: a1 + 232, a4: 309, a5: 309, a6: 1);
  result = sub_1406193D0(a1: a2);
  if ( result != 0 )
  {
    sub_1406193D0(a1: a2);
    if ( *(_QWORD *)(a1 + 368) != 0 )
    {
      v8 = (_QWORD *)(a1 + 352);
      v9 = qword_14138A6F0;
      if ( *(_QWORD *)(a1 + 376) > 0xFu )
        v8 = (_QWORD *)*v8;
      sub_1405F1D40(a1: (__int64)v44, a2: a1 + 120);
      v10 = sub_1405FBC80(a1: v9, a2: (unsigned int)v47, a3: (unsigned int)v44, a4: (_DWORD)v8, a5: 80);
      if ( (unsigned __int8)sub_1405F1F70(a1: v10, a2: 80) != 0 )
      {
        sub_1405F1D60(a1: (__int64)&v41, a2: *(_DWORD *)(v10 + 12), a3: *(_DWORD *)(v10 + 8));
        v11 = v43;
        v12 = v42;
      }
      else
      {
        v12 = 0;
        v11 = 195948557;
      }
      *(_DWORD *)(a1 + 312) = v12;
      v41 = &PXEngine::SafeActorPtrAs<CPXParticleSystem>::`vftable';
      *(_DWORD *)(a1 + 316) = v11;
      if ( (unsigned __int8)sub_1405F1E20(a1: a1 + 304) != 0 )
      {
        v13 = (__int64 *)sub_1403E5A70(a1: a1 + 304);
        v14 = *v13;
        v16 = sub_1400FBAF0(a1: v15);
        (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(v14 + 632))(a1: v13, a2: 0, a3: v16);
        v17 = sub_1403E5A70(a1: a1 + 304);
        sub_1400C2A20(a1: v17);
      }
    }
    if ( *(_QWORD *)(a1 + 400) != 0 )
    {
      v18 = (_QWORD *)(a1 + 384);
      v19 = qword_14138A6F0;
      if ( *(_QWORD *)(a1 + 408) > 0xFu )
        v18 = (_QWORD *)*v18;
      sub_1405F1D40(a1: (__int64)v44, a2: a1 + 120);
      v20 = sub_1405FBC80(a1: v19, a2: (unsigned int)v47, a3: (unsigned int)v44, a4: (_DWORD)v18, a5: 80);
      if ( (unsigned __int8)sub_1405F1F70(a1: v20, a2: 80) != 0 )
      {
        sub_1405F1D60(a1: (__int64)&v41, a2: *(_DWORD *)(v20 + 12), a3: *(_DWORD *)(v20 + 8));
        v21 = v43;
        v22 = v42;
      }
      else
      {
        v22 = 0;
        v21 = 195948557;
      }
      *(_DWORD *)(a1 + 328) = v22;
      v41 = &PXEngine::SafeActorPtrAs<CPXParticleSystem>::`vftable';
      *(_DWORD *)(a1 + 332) = v21;
      if ( (unsigned __int8)sub_1405F1E20(a1: a1 + 320) != 0 )
      {
        v23 = (__int64 *)sub_1403E5A70(a1: a1 + 320);
        v24 = *v23;
        v26 = sub_1400FBAF0(a1: v25);
        (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(v24 + 632))(a1: v23, a2: 0, a3: v26);
        v27 = sub_1403E5A70(a1: a1 + 320);
        sub_1400C2A20(a1: v27);
      }
    }
    if ( *(_QWORD *)(a1 + 432) != 0 )
    {
      v28 = (_QWORD *)(a1 + 416);
      v29 = qword_14138A6F0;
      if ( *(_QWORD *)(a1 + 440) > 0xFu )
        v28 = (_QWORD *)*v28;
      sub_1405F1D40(a1: (__int64)v44, a2: a1 + 120);
      v30 = sub_1405FBC80(a1: v29, a2: (unsigned int)v47, a3: (unsigned int)v44, a4: (_DWORD)v28, a5: 80);
      if ( (unsigned __int8)sub_1405F1F70(a1: v30, a2: 80) != 0 )
      {
        sub_1405F1D60(a1: (__int64)&v41, a2: *(_DWORD *)(v30 + 12), a3: *(_DWORD *)(v30 + 8));
        v31 = v43;
        v32 = v42;
      }
      else
      {
        v32 = 0;
        v31 = 195948557;
      }
      *(_DWORD *)(a1 + 344) = v32;
      v41 = &PXEngine::SafeActorPtrAs<CPXParticleSystem>::`vftable';
      *(_DWORD *)(a1 + 348) = v31;
      if ( (unsigned __int8)sub_1405F1E20(a1: a1 + 336) != 0 )
      {
        v33 = (__int64 *)sub_1403E5A70(a1: a1 + 336);
        v34 = *v33;
        v36 = sub_1400FBAF0(a1: v35);
        (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(v34 + 632))(a1: v33, a2: 0, a3: v36);
        v37 = sub_1403E5A70(a1: a1 + 336);
        sub_1400C2A20(a1: v37);
      }
    }
    v38 = qword_14138A6F0;
    if ( qword_14138A6F0 == 0 )
    {
      if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
        __debugbreak();
      sub_1409E29B8(a1: 999);
      __debugbreak();
    }
    v39 = sub_1405FD2E0(a1: (_QWORD *)qword_14138A6F0, a2: (__int64)v47, a3: (__int64)"Network");
    if ( (unsigned __int8)sub_1406006A0(a1: v38, a2: v39, a3: 122) != 0 )
    {
      sub_1405F1D60(a1: (__int64)&v41, a2: *(_DWORD *)(v39 + 12), a3: *(_DWORD *)(v39 + 8));
    }
    else
    {
      v42 = 0;
      v43 = 195948557;
    }
    v41 = &PXEngine::SafeActorPtrAs<CPXNetwork>::`vftable';
    v40 = sub_1405F1EE0(a1: (__int64)&v41);
    if ( v40 != 0 )
    {
      v48 = ___7___Func_impl_no_alloc_V_lambda_1___BK___PreCalculate_GardenCentre__UEAAXAEBVActorContext_PXEngine___Z_XAEAVByteStreamReader_5__std__6B_;
      v52 = v46;
      v51 = v45;
      v53 = &v48;
      v49 = a1;
      v50 = 331;
      sub_1407D46B0(a1: v40, a2: 331, a3: &v48);
      v49 = a1;
      v48 = ___7___Func_impl_no_alloc_V_lambda_2___BK___PreCalculate_GardenCentre__UEAAXAEBVActorContext_PXEngine___Z_XAEAVByteStreamReader_5__std__6B_;
      v51 = v45;
      v52 = v46;
      v53 = &v48;
      v50 = 333;
      sub_1407D46B0(a1: v40, a2: 333, a3: &v48);
      v49 = a1;
      v48 = ___7___Func_impl_no_alloc_V_lambda_3___BK___PreCalculate_GardenCentre__UEAAXAEBVActorContext_PXEngine___Z_XAEAVByteStreamReader_5__std__6B_;
      v51 = v45;
      v52 = v46;
      v53 = &v48;
      v50 = 335;
      sub_1407D46B0(a1: v40, a2: 335, a3: &v48);
      v49 = a1;
      v48 = ___7___Func_impl_no_alloc_V_lambda_4___BK___PreCalculate_GardenCentre__UEAAXAEBVActorContext_PXEngine___Z_XAEAVByteStreamReader_5__std__6B_;
      v51 = v45;
      v52 = v46;
      v53 = &v48;
      v50 = 337;
      sub_1407D46B0(a1: v40, a2: 337, a3: &v48);
      v49 = a1;
      v48 = ___7___Func_impl_no_alloc_V_lambda_5___BK___PreCalculate_GardenCentre__UEAAXAEBVActorContext_PXEngine___Z_XAEAVByteStreamReader_5__std__6B_;
      v51 = v45;
      v52 = v46;
      v53 = &v48;
      v50 = 339;
      sub_1407D46B0(a1: v40, a2: 339, a3: &v48);
      v49 = a1;
      v48 = ___7___Func_impl_no_alloc_V_lambda_6___BK___PreCalculate_GardenCentre__UEAAXAEBVActorContext_PXEngine___Z_XAEAVByteStreamReader_5__std__6B_;
      v51 = v45;
      v52 = v46;
      v53 = &v48;
      v50 = 341;
      sub_1407D46B0(a1: v40, a2: 341, a3: &v48);
      v49 = a1;
      v48 = ___7___Func_impl_no_alloc_V_lambda_7___BK___PreCalculate_GardenCentre__UEAAXAEBVActorContext_PXEngine___Z_XAEAVByteStreamReader_5__std__6B_;
      v51 = v45;
      v52 = v46;
      v53 = &v48;
      v50 = 343;
      sub_1407D46B0(a1: v40, a2: 343, a3: &v48);
    }
    return sub_1400BA030(a1);
  }
  return result;
}