// Read-only Hex-Rays export, client 645.348067.
__int64 __fastcall sub_14010AF80(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rsi
  float v9; // xmm9_4
  float v10; // xmm8_4
  float v11; // xmm1_4
  float v12; // xmm8_4
  float v13; // xmm2_4
  float v14; // xmm7_4
  float v15; // xmm6_4
  float v16; // xmm0_4
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rbx
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  volatile signed __int32 *v26; // rbx
  int v27; // [rsp+20h] [rbp-128h] BYREF
  __int128 v28; // [rsp+24h] [rbp-124h]
  __int128 v29; // [rsp+34h] [rbp-114h]
  __int128 v30; // [rsp+44h] [rbp-104h]
  __int128 v31; // [rsp+54h] [rbp-F4h]
  __int64 v32; // [rsp+68h] [rbp-E0h]
  volatile signed __int32 *v33; // [rsp+70h] [rbp-D8h]
  __int64 v34; // [rsp+78h] [rbp-D0h]
  int v35; // [rsp+80h] [rbp-C8h]
  int v36; // [rsp+84h] [rbp-C4h]
  __int64 v37; // [rsp+88h] [rbp-C0h]
  __int64 v38; // [rsp+90h] [rbp-B8h]
  __int64 v39; // [rsp+98h] [rbp-B0h]
  _BYTE v40[120]; // [rsp+A0h] [rbp-A8h] BYREF

  result = sub_1406214A0(a1: a2);
  if ( result == 0 )
    return result;
  v7 = sub_1406214C0(a1: a2);
  v8 = sub_1406290F0(a1: v7);
  v9 = sub_1400B4560(a1);
  if ( (*(_BYTE *)(a1 + 1364) & 8) != 0 )
    sub_140111F00(a1);
  sub_140111650(a1);
  sub_140111DE0(a1);
  *(float *)(a1 + 616) = v9;
  *(float *)(a1 + 628) = v9 + *(float *)(a1 + 628);
  if ( (*(_BYTE *)(a1 + 1364) & 0x40) == 0 )
    goto LABEL_9;
  v10 = *(float *)(a1 + 1356);
  v11 = *(float *)(a1 + 1208);
  if ( v11 >= v10 )
  {
    v12 = 0.0;
    goto LABEL_10;
  }
  v13 = *(float *)(a1 + 1360);
  if ( v11 > (float)(v10 - v13) )
    v12 = (float)(v10 - v11) * (float)(1.0 / v13);
  else
LABEL_9:
    v12 = 1.0;
LABEL_10:
  v14 = *(float *)(a1 + 920);
  v15 = *(float *)(a1 + 624);
  v16 = (float)((float)((float)((*(float (__fastcall **)(__int64))(*(_QWORD *)a1 + 720LL))(a1) * v15) * v12) * v9) + v14;
  *(_DWORD *)(a1 + 724) = (int)v16;
  *(float *)(a1 + 920) = v16 - (float)(int)v16;
  *(float *)(a1 + 632) = sub_140A003B0(a1: v17);
  if ( (unsigned __int8)sub_140111B60(a1) == 0 )
    return sub_14010D440(a1, a2: v8);
  sub_14010CCB0(a1, a2: a3, a3: v18);
  if ( (unsigned __int8)sub_1406FB200(a1: v8, a2: a1 + 840) == 0 )
  {
    v19 = sub_1406FC1E0(a1: v8, a2: v40, a3: *(unsigned int *)(a1 + 708));
    sub_14010A930(a1: a1 + 840, a2: v19);
    *(_QWORD *)(a1 + 856) = *(_QWORD *)(v19 + 16);
    *(_DWORD *)(a1 + 864) = *(_DWORD *)(v19 + 24);
    *(_DWORD *)(a1 + 868) = *(_DWORD *)(v19 + 28);
    sub_140029550(a1: v40);
    if ( (unsigned __int8)sub_1406FB200(a1: v8, a2: a1 + 840) != 0 )
    {
      *(_WORD *)(a1 + 924) = 1;
      sub_1406FC620(a1: v8, a2: a1 + 840);
    }
  }
  sub_1406FC710(a1: v8, a2: a1 + 840, a3: a1 + 168);
  result = sub_140111BD0(a1, a2: v8);
  if ( *(_DWORD *)(a1 + 708) != 0 && *(float *)(a1 + 636) > 0.0 )
  {
    v20 = sub_1406214A0(a1: a2);
    v21 = sub_140621240(a1: a2);
    sub_14010B3D0(a1, a2: v21, a3: v20);
    v27 = *(_DWORD *)(a1 + 1208);
    v28 = *(_OWORD *)(a1 + 296);
    v29 = *(_OWORD *)(a1 + 312);
    v30 = *(_OWORD *)(a1 + 328);
    v31 = *(_OWORD *)(a1 + 344);
    v32 = 0;
    v33 = nullptr;
    v22 = *(_QWORD *)(a1 + 848);
    if ( v22 != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v22 + 8));
    v32 = *(_QWORD *)(a1 + 840);
    v33 = *(volatile signed __int32 **)(a1 + 848);
    v34 = *(_QWORD *)(a1 + 856);
    v35 = *(_DWORD *)(a1 + 864);
    v36 = *(_DWORD *)(a1 + 868);
    v37 = *(_QWORD *)(a1 + 944);
    v38 = *(_QWORD *)(a1 + 952);
    sub_14064F610(a1: v38);
    v39 = a1 + 1328;
    if ( a1 == -1328 )
      sub_14005A4C0(a1: v24, a2: v23, a3: v25);
    sub_1406FAAE0(a1: v8, a2: &v27);
    result = sub_14064F3F0(a1: v38);
    v26 = v33;
    if ( v33 != nullptr )
    {
      result = (unsigned int)_InterlockedExchangeAdd(v33 + 2, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
      {
        result = (**(__int64 (__fastcall ***)(volatile signed __int32 *))v26)(a1: v26);
        if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
          return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(a1: v26);
      }
    }
  }
  return result;
}