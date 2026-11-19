char __fastcall sub_140790DD0(__int64 a1, __int64 a2)
{
  char v4; // dl
  __int64 v5; // rax
  __int64 v6; // r13
  char v7; // bl
  __int64 v8; // rax
  char v9; // cl
  char v10; // al
  char v11; // si
  bool v12; // r12
  __int64 v13; // rax
  __int64 v14; // rdx
  volatile signed __int32 *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r14
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  volatile signed __int32 *v24; // rsi
  signed __int32 v25; // eax
  signed __int32 v26; // ett
  __int64 v27; // rax
  int v28; // eax
  int v29; // r9d
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  float v38; // xmm0_4
  float v39; // xmm2_4
  float v40; // xmm0_4
  __int64 v41; // rbx
  __int64 v42; // rdx
  int v43; // ebx
  __int64 v44; // rax
  char v45; // dl
  __int64 v46; // rax
  __int64 v47; // rbx
  __int64 v48; // rsi
  __int64 v49; // rax
  __int64 v50; // rbx
  __int64 v51; // rax
  __int64 v52; // rbx
  int v53; // r9d
  int v54; // r9d
  __int64 v56; // [rsp+40h] [rbp-29h] BYREF
  int v57; // [rsp+48h] [rbp-21h]
  __m128i v58; // [rsp+50h] [rbp-19h] BYREF
  __m128i si128; // [rsp+60h] [rbp-9h] BYREF
  _QWORD v60[10]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v61; // [rsp+D0h] [rbp+67h]

  v4 = *(_BYTE *)(a2 + 1);
  *(_BYTE *)(a1 + 2224) = v4;
  sub_140799C30(a1, a2: (v4 & 8) != 0);
  *(_BYTE *)(a1 + 2225) = *(_BYTE *)(a2 + 2);
  v56 = 0;
  v57 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_140EFE3F0);
  if ( *(_BYTE *)(a2 + 44) != 0 )
  {
    v56 = *(_QWORD *)(a2 + 16);
    v57 = *(_DWORD *)(a2 + 24);
    si128 = *(__m128i *)(a2 + 28);
  }
  v5 = sub_1405F1EE0(a1: a1 + 416);
  v6 = v5;
  *(_DWORD *)(a1 + 1380) = *(_DWORD *)(a2 + 172);
  v7 = *(_BYTE *)a2;
  if ( v5 != 0 )
  {
    v8 = *(_QWORD *)(v5 + 648);
    if ( v8 == 0 || *(_DWORD *)(v8 + 8) == 0 )
    {
      v9 = *(_BYTE *)(a1 + 252);
      if ( v9 == 23 )
      {
        v10 = *(_BYTE *)a2;
        if ( v7 != 23 )
          v10 = 25;
        v7 = v10;
      }
      else if ( v9 == 24 )
      {
        if ( v7 != 24 )
          v7 = 25;
      }
      else if ( v9 == 25 && (unsigned __int8)(v7 - 23) <= 1u )
      {
        v7 = 25;
        v11 = 0;
        goto LABEL_29;
      }
      if ( v7 == 25 )
      {
        if ( (unsigned __int8)(v9 - 23) > 1u )
        {
LABEL_27:
          v11 = 0;
          goto LABEL_29;
        }
        v7 = *(_BYTE *)(a1 + 252);
      }
      if ( v7 == 28 )
      {
        if ( ((v9 - 26) & 0xFD) != 0 )
        {
          v7 = 26;
          v11 = 0;
          goto LABEL_29;
        }
        goto LABEL_27;
      }
      if ( v7 == 0 )
      {
        if ( (unsigned __int8)(v9 - 28) <= 1u )
        {
          v7 = 30;
          v11 = 0;
          goto LABEL_29;
        }
        goto LABEL_27;
      }
    }
  }
  if ( (unsigned __int8)(v7 - 19) > 5u )
    goto LABEL_27;
  v11 = 1;
LABEL_29:
  v12 = (unsigned __int8)(*(_BYTE *)(a1 + 252) - 19) <= 5u;
  v13 = sub_1405F1EE0(a1: a1 + 1608);
  v17 = v13;
  if ( v13 != 0 )
  {
    if ( v7 == *(_BYTE *)(a1 + 252) )
      goto LABEL_41;
    if ( v11 != 0 && !v12 )
    {
      LOBYTE(v16) = 1;
      sub_14079BEB0(a1, a2: v13, a3: v16);
    }
  }
  if ( v7 != *(_BYTE *)(a1 + 252) && v11 == 0 && v12 )
  {
    sub_1405F1D40(a1: (__int64)&v58, a2: a1 + 32);
    v58.m128i_i64[0] = (__int64)&PXEngine::SafeActorPtrAs<CPXSpace>::`vftable';
    v18 = sub_1405F1EE0(a1: (__int64)&v58);
    v21 = sub_1400AF100(a1: v20, a2: v19);
    v22 = sub_1400AEDB0(a1, a2: v21);
    v23 = sub_140164770(a1: v22, a2: v18, a3: &v56);
    if ( v23 != 0 )
      v18 = v23;
    if ( v18 != 0 )
      sub_14079C2C0(a1, a2: v18, a3: &v56, a4: &si128);
  }
LABEL_41:
  if ( v6 != 0 )
  {
    v24 = *(volatile signed __int32 **)(v6 + 648);
    if ( v24 != nullptr && *((_DWORD *)v24 + 2) != 0 )
    {
      v14 = *(_QWORD *)(v6 + 640);
      v61 = v14;
      _InterlockedIncrement(v24 + 3);
      v58 = 0;
      v25 = *((_DWORD *)v24 + 2);
      if ( v25 != 0 )
      {
        while ( 1 )
        {
          v26 = v25;
          v25 = _InterlockedCompareExchange(v24 + 2, v25 + 1, v25);
          if ( v26 == v25 )
            break;
          if ( v25 == 0 )
            goto LABEL_47;
        }
        v58.m128i_i64[0] = v14;
        v58.m128i_i64[1] = (__int64)v24;
        v15 = v24;
      }
      else
      {
LABEL_47:
        v15 = v24;
        v24 = (volatile signed __int32 *)v58.m128i_i64[1];
        v61 = v58.m128i_i64[0];
      }
      if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(a1: v15);
      if ( v61 != 0 )
        sub_1406C6A80(a1: v61, a2: *(unsigned int *)(a2 + 168));
      if ( v24 != nullptr && _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v24)(a1: v24);
        if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(a1: v24);
      }
      v58 = _mm_load_si128((const __m128i *)&xmmword_140EEE200);
    }
  }
  if ( v17 != 0 )
  {
    if ( ((v7 - 1) & 0xFD) != 0 || v7 == *(_BYTE *)(a1 + 252) )
    {
      if ( ((*(_BYTE *)(a1 + 252) - 1) & 0xFD) == 0
        && ((v7 - 1) & 0xFD) != 0
        && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v17 + 912LL))(a1: v17) != 0 )
      {
        v14 = 0;
        goto LABEL_67;
      }
    }
    else if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v17 + 912LL))(a1: v17) != 0 )
    {
      LOBYTE(v14) = 1;
LABEL_67:
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v17 + 920LL))(
        a1: v17,
        a2: v14,
        a3: a1,
        a4: 0);
      *(_BYTE *)(a1 + 2383) |= 0x20u;
    }
  }
  if ( v6 != 0 )
  {
    v27 = *(_QWORD *)(v6 + 648);
    if ( v27 != 0 && *(_DWORD *)(v27 + 8) != 0 && (unsigned __int8)sub_1400AE640(a1) == 0 )
    {
      if ( *(_BYTE *)(a2 + 8) != 0 )
      {
        v28 = sub_1400E3540(a1: v6);
        v14 = *(unsigned int *)(a2 + 4);
        if ( v28 != (_DWORD)v14 )
        {
          if ( *(_BYTE *)(a2 + 8) == 0 )
            __fastfail(5u);
          sub_1400F0690(a1: v6, a2: v14, a3: 0, a4: v29, a5: 0, a6: 0, a7: 1);
          LOBYTE(v30) = 1;
          sub_1400DED00(a1: v6, a2: v30);
        }
      }
      else if ( (unsigned int)sub_1400E3540(a1: v6) != -1 )
      {
        sub_1400E1960(a1: v6);
        LOBYTE(v31) = 1;
        sub_1400DFE10(a1: v6, a2: v31);
      }
    }
  }
  if ( (unsigned __int8)(*(_BYTE *)(a1 + 252) - 18) > 6u )
  {
    *(_QWORD *)(a1 + 304) = v56;
    *(_DWORD *)(a1 + 312) = v57;
    *(__m128i *)(a1 + 316) = si128;
  }
  v32 = sub_1400AF100(a1: v15, a2: v14);
  v33 = sub_1400C5F00(a1, a2: &v58, a3: v32);
  *(_QWORD *)(a1 + 276) = *(_QWORD *)v33;
  *(_DWORD *)(a1 + 284) = *(_DWORD *)(v33 + 8);
  v36 = sub_1400AF100(a1: v35, a2: v34);
  *(_OWORD *)(a1 + 288) = *(_OWORD *)sub_1400C5FE0(a1, a2: v60, a3: v36);
  v38 = *(float *)(a1 + 276) - *(float *)(a1 + 304);
  v39 = (float)((float)((float)(*(float *)(a1 + 280) - *(float *)(a1 + 308))
                      * (float)(*(float *)(a1 + 280) - *(float *)(a1 + 308)))
              + (float)(v38 * v38))
      + (float)((float)(*(float *)(a1 + 284) - *(float *)(a1 + 312))
              * (float)(*(float *)(a1 + 284) - *(float *)(a1 + 312)));
  if ( v39 < 0.0 )
    v40 = sub_1409FB100(a1: v37);
  else
    v40 = fsqrt(v39);
  if ( v40 > 8.0 )
  {
    *(_QWORD *)(a1 + 276) = *(_QWORD *)(a1 + 304);
    *(_DWORD *)(a1 + 284) = *(_DWORD *)(a1 + 312);
    *(_OWORD *)(a1 + 288) = *(_OWORD *)(a1 + 316);
    v41 = *(_QWORD *)(a1 + 64);
    if ( v41 != 0 && (unsigned __int8)sub_1400C6390(a1) != 0 )
    {
      *(_QWORD *)(v41 + 24) = *(_QWORD *)(a1 + 276);
      *(_DWORD *)(v41 + 32) = *(_DWORD *)(a1 + 284);
      *(_OWORD *)(v41 + 8) = *(_OWORD *)(a1 + 288);
      LOBYTE(v42) = 1;
      sub_1400C63A0(a1, a2: v42);
    }
  }
  *(_DWORD *)(a1 + 272) = 0;
  if ( v17 != 0 )
  {
    v43 = *(_DWORD *)(a2 + 12);
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v17 + 904LL))(a1: v17) == v43 && a2 != -48 )
    {
      if ( *(_BYTE *)(a2 + 116) == 1 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 880LL))(a1: v17);
      }
      else if ( *(_BYTE *)(a2 + 116) == 0 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 872LL))(a1: v17);
      }
    }
  }
  v44 = sub_1405F1EE0(a1: a1 + 1656);
  if ( v44 != 0 && *(_BYTE *)(a2 + 160) != 0 )
    sub_1403BADE0(a1: v44, a2: a2 + 120);
  v45 = *(_BYTE *)(a2 + 164);
  LOBYTE(v46) = *(_BYTE *)(a1 + 2385) ^ (v45 ^ *(_BYTE *)(a1 + 2385)) & 1;
  *(_BYTE *)(a1 + 2385) = v46;
  if ( (v45 & 1) != 0 )
  {
    v47 = qword_14138A6F0;
    if ( qword_14138A6F0 == 0 )
    {
      if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
        __debugbreak();
      sub_1409E29B8(a1: 999);
      __debugbreak();
    }
    v48 = sub_1405FD2E0(a1: (_QWORD *)qword_14138A6F0, a2: (__int64)v60, a3: (__int64)"PlaceManager");
    if ( (unsigned __int8)sub_1406006A0(a1: v47, a2: v48, a3: 210) != 0 )
      sub_1405F1D60(a1: (__int64)&v58, a2: *(_DWORD *)(v48 + 12), a3: *(_DWORD *)(v48 + 8));
    else
      v58.m128i_i64[1] = 0xBADF00D00000000LL;
    v58.m128i_i64[0] = (__int64)&PXEngine::SafeActorPtrAs<CPXPlaceManager>::`vftable';
    v49 = sub_1405F1EE0(a1: (__int64)&v58);
    v50 = v49;
    if ( v49 == 0 )
    {
      if ( (unsigned __int8)sub_140059CA0(a1: off_14100EF20) != 0 )
        __debugbreak();
      sub_1409E29B8(a1: 999);
      __debugbreak();
    }
    v46 = sub_1400FB640(a1: v49);
    if ( v46 != 0 )
    {
      v51 = sub_1400FB640(a1: v50);
      sub_1405F1D40(a1: (__int64)v60, a2: v51 + 240);
      v60[0] = &PXEngine::SafeActorPtrAs<CPXSpace>::`vftable';
      v46 = sub_1405F1EE0(a1: (__int64)v60);
      v52 = v46;
      if ( v46 != 0 )
      {
        sub_1405F1D40(a1: (__int64)&v58, a2: a1 + 32);
        v58.m128i_i64[0] = (__int64)&PXEngine::SafeActorPtrAs<CPXSpace>::`vftable';
        v46 = sub_1405F1EE0(a1: (__int64)&v58);
        if ( v52 != v46 )
        {
          if ( v17 != 0 )
          {
            LOBYTE(v53) = 1;
            sub_1400B0580(a1: v17, a2: v52, a3: -1, a4: v53, a5: 0);
          }
          LOBYTE(v46) = sub_1407874D0(a1);
          if ( (_BYTE)v46 == 0 )
          {
            LOBYTE(v54) = 1;
            LOBYTE(v46) = sub_1400B0580(a1, a2: v52, a3: -1, a4: v54, a5: 0);
          }
        }
      }
    }
  }
  *(_BYTE *)(a1 + 2383) &= ~2u;
  return v46;
}