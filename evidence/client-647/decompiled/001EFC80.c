__int64 __fastcall sub_1401EFC80(__int64 a1, unsigned __int8 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  volatile signed __int32 *v8; // rcx
  __int64 v9; // rsi
  int v10; // xmm7_4
  volatile signed __int32 *v11; // rdi
  __int64 v12; // r15
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  __int64 v15; // rax
  int v16; // eax
  int v17; // r9d
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  float v26; // xmm2_4
  float v27; // xmm6_4
  __int64 v28; // rdx
  __int64 v29; // rcx
  float v30; // xmm0_4
  float v31; // xmm6_4
  float v32; // xmm2_4
  float v33; // xmm0_4
  __int64 v34; // rcx
  float v35; // xmm0_4
  int *v36; // rax
  __int64 result; // rax
  __int128 v38; // [rsp+40h] [rbp-58h] BYREF
  int v39; // [rsp+A0h] [rbp+8h] BYREF
  int v40; // [rsp+A8h] [rbp+10h]

  v4 = sub_1405F1EE0(a1: a1 + 792);
  if ( (*(_BYTE *)(a1 + 3543) & 8) != 0
    && v4 != 0
    && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v4 + 248LL))(a1: v4) != 0 )
  {
    v5 = sub_1405F1EE0(a1: a1 + 3504);
    if ( v5 != 0 )
    {
      *(_BYTE *)(a1 + 3542) &= 0xF9u;
      sub_140102A80(a1: v5, a2: 0);
    }
  }
  (*(void (__fastcall **)(__int64, _QWORD, bool))(*(_QWORD *)a1 + 1040LL))(
    a1,
    a2: *a2,
    a3: (*(_BYTE *)(a1 + 3543) & 8) != 0);
  v6 = sub_1405F1EE0(a1: a1 + 1440);
  v9 = v6;
  v10 = 0;
  if ( v6 != 0 )
  {
    v11 = *(volatile signed __int32 **)(v6 + 648);
    if ( v11 != nullptr && *((_DWORD *)v11 + 2) != 0 )
    {
      v12 = *(_QWORD *)(v6 + 640);
      _InterlockedIncrement(v11 + 3);
      v38 = 0;
      v13 = *((_DWORD *)v11 + 2);
      if ( v13 != 0 )
      {
        while ( 1 )
        {
          v14 = v13;
          v13 = _InterlockedCompareExchange(v11 + 2, v13 + 1, v13);
          if ( v14 == v13 )
            break;
          if ( v13 == 0 )
            goto LABEL_12;
        }
        *(_QWORD *)&v38 = v12;
        *((_QWORD *)&v38 + 1) = v11;
        v8 = v11;
      }
      else
      {
LABEL_12:
        v8 = v11;
        v11 = *((volatile signed __int32 **)&v38 + 1);
        v12 = v38;
      }
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(a1: v8);
      if ( v12 != 0 )
        sub_1406C6A80(a1: v12, a2: *((unsigned int *)a2 + 13));
      if ( v11 != nullptr && _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v11)(a1: v11);
        if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(a1: v11);
      }
    }
    v15 = *(_QWORD *)(v9 + 648);
    if ( v15 != 0 && *(_DWORD *)(v15 + 8) != 0 && (unsigned __int8)sub_1400AE640(a1) == 0 )
    {
      if ( a2[60] != 0 )
      {
        v16 = sub_1400E3540(a1: v9);
        v7 = *((unsigned int *)a2 + 14);
        if ( v16 != (_DWORD)v7 )
        {
          if ( a2[60] == 0 )
            __fastfail(5u);
          sub_1400F0690(a1: v9, a2: v7, a3: 0, a4: v17, a5: 0, a6: 0, a7: 1);
          LOBYTE(v18) = 1;
          sub_1400DED00(a1: v9, a2: v18);
        }
      }
      else if ( (unsigned int)sub_1400E3540(a1: v9) != -1 )
      {
        sub_1400E1960(a1: v9);
        LOBYTE(v19) = 1;
        sub_1400DFE10(a1: v9, a2: v19);
      }
    }
  }
  *(_QWORD *)(a1 + 2756) = *(_QWORD *)(a2 + 4);
  *(_DWORD *)(a1 + 2764) = *((_DWORD *)a2 + 3);
  *(_OWORD *)(a1 + 2768) = *((_OWORD *)a2 + 1);
  v20 = sub_1400AF100(a1: v8, a2: v7);
  v21 = sub_1400C5F00(a1, a2: &v38, a3: v20);
  *(_QWORD *)(a1 + 2728) = *(_QWORD *)v21;
  *(_DWORD *)(a1 + 2736) = *(_DWORD *)(v21 + 8);
  v24 = sub_1400AF100(a1: v23, a2: v22);
  *(_OWORD *)(a1 + 2740) = *(_OWORD *)sub_1400C5FE0(a1, a2: &v38, a3: v24);
  v26 = (float)((float)(*((float *)a2 + 9) * *((float *)a2 + 9)) + (float)(*((float *)a2 + 8) * *((float *)a2 + 8)))
      + (float)(*((float *)a2 + 10) * *((float *)a2 + 10));
  if ( v26 < 0.0 )
    v27 = sub_1409FB100(a1: v25);
  else
    v27 = fsqrt(v26);
  if ( (unsigned int)sub_1400ADE90(a1: *(_QWORD *)&nExitCode + 1064LL) != 4 )
  {
    v30 = *(float *)(a1 + 2736) - *(float *)(a1 + 2764);
    v31 = (float)(v27 + v27) + 8.0;
    v32 = (float)((float)((float)(*(float *)(a1 + 2732) - *(float *)(a1 + 2760))
                        * (float)(*(float *)(a1 + 2732) - *(float *)(a1 + 2760)))
                + (float)((float)(*(float *)(a1 + 2728) - *(float *)(a1 + 2756))
                        * (float)(*(float *)(a1 + 2728) - *(float *)(a1 + 2756))))
        + (float)(v30 * v30);
    v33 = v32 < 0.0 ? sub_1409FB100(a1: v29) : fsqrt(v32);
    if ( v33 > v31 )
    {
      *(_QWORD *)(a1 + 2728) = *(_QWORD *)(a1 + 2756);
      *(_DWORD *)(a1 + 2736) = *(_DWORD *)(a1 + 2764);
      *(_OWORD *)(a1 + 2740) = *(_OWORD *)(a1 + 2768);
      v34 = *(_QWORD *)(a1 + 64);
      if ( v34 != 0 )
      {
        *(_QWORD *)(v34 + 24) = *(_QWORD *)(a1 + 2728);
        *(_DWORD *)(v34 + 32) = *(_DWORD *)(a1 + 2736);
        *(_OWORD *)(v34 + 8) = *(_OWORD *)(a1 + 2740);
      }
      LOBYTE(v28) = 1;
      sub_1400C63A0(a1, a2: v28);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 1024LL))(a1);
    }
  }
  *(_DWORD *)(a1 + 2724) = 0;
  v39 = 0x40000000;
  v40 = 0;
  v35 = *((float *)a2 + 11);
  if ( v35 >= 0.0 )
  {
    v36 = &v39;
    if ( v35 <= 2.0 )
      v36 = (int *)(a2 + 44);
    v10 = *v36;
  }
  *(_DWORD *)(a1 + 2784) = v10;
  result = *((unsigned int *)a2 + 12);
  *(_DWORD *)(a1 + 2788) = result;
  *(_BYTE *)(a1 + 3543) &= ~8u;
  return result;
}