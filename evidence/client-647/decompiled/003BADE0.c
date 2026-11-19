__int64 __fastcall sub_1403BADE0(__int64 a1, __int64 a2)
{
  char v3; // cl
  __int64 v5; // xmm0_8
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  float v16; // xmm0_4
  float v17; // xmm2_4
  float v18; // xmm0_4
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rax
  int v22; // ebp
  int v23; // esi
  int v24; // r9d
  _BYTE v26[56]; // [rsp+40h] [rbp-38h] BYREF

  v3 = *(_BYTE *)(a2 + 37);
  if ( v3 != 0 && (*(_BYTE *)(a1 + 916) & 1) != v3 )
    *(_DWORD *)(a1 + 504) = 0;
  v5 = *(_QWORD *)(a1 + 356);
  v6 = *(unsigned int *)(a1 + 916);
  v7 = (unsigned int)v6 ^ (*(_BYTE *)(a2 + 37) ^ (unsigned __int8)*(_DWORD *)(a1 + 916)) & 1;
  *(_DWORD *)(a1 + 916) = v7;
  *(_BYTE *)(a1 + 488) = *(_BYTE *)(a2 + 36);
  v8 = *(_DWORD *)(a1 + 364);
  *(_QWORD *)(a1 + 368) = v5;
  *(_DWORD *)(a1 + 376) = v8;
  *(_QWORD *)(a1 + 356) = *(_QWORD *)a2;
  *(_DWORD *)(a1 + 364) = *(_DWORD *)(a2 + 8);
  *(_OWORD *)(a1 + 328) = *(_OWORD *)(a2 + 12);
  v9 = sub_1400AF100(a1: v7, a2: v6);
  v10 = sub_1400C5F00(a1, a2: v26, a3: v9);
  *(_QWORD *)(a1 + 344) = *(_QWORD *)v10;
  *(_DWORD *)(a1 + 352) = *(_DWORD *)(v10 + 8);
  v13 = sub_1400AF100(a1: v12, a2: v11);
  *(_OWORD *)(a1 + 312) = *(_OWORD *)sub_1400C5FE0(a1, a2: v26, a3: v13);
  v16 = *(float *)(a1 + 344) - *(float *)(a1 + 356);
  v17 = (float)((float)((float)(*(float *)(a1 + 348) - *(float *)(a1 + 360))
                      * (float)(*(float *)(a1 + 348) - *(float *)(a1 + 360)))
              + (float)(v16 * v16))
      + (float)((float)(*(float *)(a1 + 352) - *(float *)(a1 + 364))
              * (float)(*(float *)(a1 + 352) - *(float *)(a1 + 364)));
  if ( v17 < 0.0 )
    v18 = sub_1409FB100(a1: v15);
  else
    v18 = fsqrt(v17);
  if ( v18 > 8.0 )
  {
    v19 = *(_QWORD *)(a1 + 64);
    v20 = *(_DWORD *)(a1 + 364);
    *(_QWORD *)(a1 + 344) = *(_QWORD *)(a1 + 356);
    *(_DWORD *)(a1 + 352) = v20;
    *(_OWORD *)(a1 + 312) = *(_OWORD *)(a1 + 328);
    if ( v19 != 0 )
    {
      *(_QWORD *)(v19 + 24) = *(_QWORD *)(a1 + 344);
      *(_DWORD *)(v19 + 32) = *(_DWORD *)(a1 + 352);
      *(_OWORD *)(v19 + 8) = *(_OWORD *)(a1 + 312);
    }
    LOBYTE(v14) = 1;
    sub_1400C63A0(a1, a2: v14);
  }
  *(_DWORD *)(a1 + 524) = 0;
  v21 = sub_1405F1EE0(a1: a1 + 392);
  v22 = v21;
  if ( v21 != 0 )
  {
    v23 = -1;
    if ( *(_BYTE *)(a2 + 32) != 0 )
      v23 = *(_DWORD *)(a2 + 28);
    if ( v23 != (unsigned int)sub_1400E3590(a1: v21) )
      sub_1400F0310(a1: v22, a2: v23, a3: 0, a4: v24, a5: 0, a6: 1, a7: 0, a8: 0);
  }
  if ( qword_14138AA70 == 0 )
  {
    if ( (unsigned __int8)sub_140059CA0(a1: off_140F38D30) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 608LL))(a1);
}