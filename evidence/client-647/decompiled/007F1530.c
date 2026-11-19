__int64 __fastcall sub_1407F1530(__int64 *a1)
{
  __int64 v2; // rax
  int v4; // eax
  char v5; // bl
  __int64 v6; // rax
  __int64 (__fastcall *v7)(); // rdx
  bool v8; // zf
  __int64 (__fastcall *v9)(); // r9
  __int64 (__fastcall *v10)(); // r9
  __int64 v11; // rbx
  __int64 v12; // rax
  int v13; // esi
  char v14; // di
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int128 v19; // kr00_16
  volatile signed __int32 *v20; // rdi
  volatile signed __int32 *v21; // rbx
  _BYTE v22[4]; // [rsp+20h] [rbp-99h] BYREF
  int v23; // [rsp+24h] [rbp-95h] BYREF
  _QWORD v24[3]; // [rsp+28h] [rbp-91h] BYREF
  int v25; // [rsp+40h] [rbp-79h]
  __int128 v26; // [rsp+48h] [rbp-71h]
  _BYTE v27[32]; // [rsp+58h] [rbp-61h] BYREF
  char v28; // [rsp+78h] [rbp-41h]
  int v29; // [rsp+7Ch] [rbp-3Dh]
  int v30; // [rsp+80h] [rbp-39h]
  int v31; // [rsp+A0h] [rbp-19h] BYREF
  __int16 v32; // [rsp+A4h] [rbp-15h]
  int v33; // [rsp+A8h] [rbp-11h]
  int v34; // [rsp+ACh] [rbp-Dh]
  __int128 v35; // [rsp+B0h] [rbp-9h]
  _BYTE v36[8]; // [rsp+C0h] [rbp+7h] BYREF
  __int64 v37; // [rsp+C8h] [rbp+Fh]
  __int64 v38; // [rsp+D0h] [rbp+17h]

  v2 = *a1;
  if ( *(_BYTE *)(*a1 + 328) != 0 )
  {
    v22[0] = 0;
    return sub_1407F3210(a1: a1[6], a2: v22);
  }
  *(_OWORD *)(v2 + 40) = *(_OWORD *)(a1 + 1);
  *(_OWORD *)(v2 + 56) = *(_OWORD *)(a1 + 3);
  v4 = *((_DWORD *)a1 + 10);
  v5 = *((_BYTE *)a1 + 44);
  v24[1] = 0;
  v24[2] = 0;
  v25 = 0;
  v24[0] = &PXEngine::ByteStreamWriter::`vftable';
  v23 = v4;
  if ( (unsigned __int8)sub_1401D0820(a1: v24, a2: &v23) == 0 )
    goto LABEL_9;
  v6 = v24[0];
  v7 = *(__int64 (__fastcall **)())(v24[0] + 8LL);
  if ( v7 == sub_14001A530 || (v8 = ((unsigned __int8 (__fastcall *)(_QWORD *))v7)(a1: v24) == 0, v6 = v24[0], v8) )
  {
    v22[0] = v5;
    v10 = *(__int64 (__fastcall **)())(v6 + 16);
    if ( v10 == sub_1401F6C10 )
      goto LABEL_7;
    if ( ((unsigned __int8 (__fastcall *)(_QWORD *, _BYTE *, __int64))v10)(a1: v24, a2: v22, a3: 1) != 0 )
      goto LABEL_15;
LABEL_9:
    if ( (unsigned __int8)sub_140059D90(
                            a1: off_1410190F8,
                            a2: "ClientGameServerConnection: Failed to serialize ConnectionRequest!") != 0 )
      __debugbreak();
    v22[0] = 0;
    sub_1407F3210(a1: a1[6], a2: v22);
    return sub_140A25690(a1: v24);
  }
  v22[0] = 0;
  v9 = *(__int64 (__fastcall **)())(v24[0] + 16LL);
  if ( v9 != sub_1401F6C10 )
  {
    if ( ((unsigned __int8 (__fastcall *)(_QWORD *, _BYTE *, __int64))v9)(a1: v24, a2: v22, a3: 1) != 0 )
      goto LABEL_15;
    goto LABEL_9;
  }
LABEL_7:
  sub_140A25890(a1: v24, a2: v22, a3: 1);
LABEL_15:
  v11 = *a1;
  v31 = 1;
  v32 = 1;
  v33 = -1;
  v34 = 0;
  v35 = 0;
  sub_1409CB2E0(a1: v36);
  v37 = 0;
  v38 = 0;
  v12 = sub_140801580(a1: &v31, a2: v24);
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v11 + 16) + 16LL))(a1: *(_QWORD *)(v11 + 16), a2: v12);
  v13 = *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(*a1 + 16) + 40LL))(
                     a1: *(_QWORD *)(*a1 + 16),
                     a2: &v23);
  v14 = *((_BYTE *)a1 + 44);
  v15 = sub_140A255B0(a1: &v31, a2: v24);
  v16 = a1[6];
  v17 = a1[7];
  a1[6] = 0;
  a1[7] = 0;
  *(_QWORD *)&v26 = v16;
  *((_QWORD *)&v26 + 1) = v17;
  sub_140A255B0(a1: v27, a2: v15);
  v28 = v14;
  v29 = v13;
  v30 = 0;
  sub_140A25690(a1: v15);
  v18 = *a1;
  if ( *(_BYTE *)(*a1 + 328) == 1 )
  {
    v19 = v26;
    v26 = 0;
    *(_QWORD *)(v18 + 264) = v19;
    v20 = *(volatile signed __int32 **)(v18 + 272);
    *(_QWORD *)(v18 + 272) = *((_QWORD *)&v19 + 1);
    if ( v20 != nullptr && _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v20)(a1: v20);
      if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(a1: v20);
    }
    sub_140A256B0(a1: v18 + 280, a2: v27);
    *(_BYTE *)(v18 + 312) = v28;
    *(_DWORD *)(v18 + 316) = v29;
    *(_DWORD *)(v18 + 320) = v30;
  }
  else
  {
    *(_BYTE *)(v18 + 328) = -1;
    *(_QWORD *)(v18 + 264) = 0;
    *(_QWORD *)(v18 + 272) = 0;
    *(_OWORD *)(v18 + 264) = v26;
    v26 = 0;
    sub_140A255B0(a1: v18 + 280, a2: v27);
    *(_BYTE *)(v18 + 312) = v28;
    *(_DWORD *)(v18 + 316) = v29;
    *(_DWORD *)(v18 + 320) = v30;
    *(_BYTE *)(v18 + 328) = 1;
  }
  sub_140A25690(a1: v27);
  v21 = *((volatile signed __int32 **)&v26 + 1);
  if ( *((_QWORD *)&v26 + 1) != 0
    && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v26 + 1) + 8LL), 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v21)(a1: v21);
    if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(a1: v21);
  }
  return sub_140A25690(a1: v24);
}