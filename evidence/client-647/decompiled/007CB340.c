void __fastcall sub_1407CB340(_DWORD *a1, int a2, __int64 a3)
{
  char (__fastcall *v4)(__int64, __int64, unsigned int); // r9
  char v5; // al
  void *v6; // rcx
  int v7; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v8[2]; // [rsp+28h] [rbp-D8h] BYREF
  int v9; // [rsp+38h] [rbp-C8h]
  __int64 v10; // [rsp+3Ch] [rbp-C4h]
  _DWORD *v11; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v12[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v13; // [rsp+60h] [rbp-A0h]
  __int64 v14; // [rsp+64h] [rbp-9Ch]
  _BYTE v15[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v16; // [rsp+78h] [rbp-88h]
  int v17; // [rsp+84h] [rbp-7Ch]
  char v18; // [rsp+90h] [rbp-70h]
  _BYTE v19[248]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v20; // [rsp+198h] [rbp+98h] BYREF
  __int64 v21; // [rsp+1A8h] [rbp+A8h]
  unsigned __int64 v22; // [rsp+1B0h] [rbp+B0h]
  __int64 v23; // [rsp+1B8h] [rbp+B8h]
  __int64 v24; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v25; // [rsp+1C8h] [rbp+C8h]
  _BYTE v26[200]; // [rsp+1D0h] [rbp+D0h] BYREF
  __int128 v27; // [rsp+298h] [rbp+198h]
  __int64 v28; // [rsp+2A8h] [rbp+1A8h]
  __int64 v29; // [rsp+2B0h] [rbp+1B0h]
  _BYTE v30[8]; // [rsp+2B8h] [rbp+1B8h] BYREF

  a1[139] = a2;
  if ( a2 != 0 )
  {
    a1[79] = 8;
    a1[80] = 1065353216;
    return;
  }
  v8[1] = *(_QWORD *)(a3 + 8);
  v9 = *(_DWORD *)(a3 + 20);
  v10 = 0;
  v8[0] = &PXEngine::ByteStreamReader::`vftable';
  sub_1407B1A20(a1: v19);
  v20 = 0;
  v21 = 0;
  v22 = 15;
  LOBYTE(v20) = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  sub_14034B3B0(a1: v26);
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30[0] = 0;
  v11 = v8;
  if ( (unsigned __int8)sub_1407AA8F0(a1: (__int64)v8, a2: (__int64)v19) == 0 )
    goto LABEL_26;
  if ( sub_1402B4D00(a1: v8, a2: (__int64 *)&v20) == 0 )
    goto LABEL_26;
  v7 = v23;
  if ( sub_140200540(a1: v8, a2: &v7) == 0 )
    goto LABEL_26;
  LODWORD(v23) = v7;
  v7 = HIDWORD(v23);
  if ( sub_140200540(a1: v8, a2: &v7) == 0 )
    goto LABEL_26;
  HIDWORD(v23) = v7;
  if ( sub_1402B7CD0(a1: &v11, a2: (int *)&v24) == 0 )
    goto LABEL_26;
  if ( sub_1402B7CD0(a1: &v11, a2: (int *)&v24 + 1) == 0 )
    goto LABEL_26;
  v7 = v25;
  if ( sub_1401D0820(a1: v8, a2: &v7) == 0 )
    goto LABEL_26;
  LODWORD(v25) = v7;
  v7 = HIDWORD(v25);
  if ( sub_1401D0820(a1: v8, a2: &v7) == 0 )
    goto LABEL_26;
  HIDWORD(v25) = v7;
  if ( (unsigned __int8)sub_1403474B0(a1: (__int64)v8, a2: (__int64)v26) == 0 )
    goto LABEL_26;
  v4 = *(char (__fastcall **)(__int64, __int64, unsigned int))(v8[0] + 16LL);
  v5 = v4 == sub_140736DC0
     ? sub_140A4BF00(a1: (__int64)v8, a2: (__int64)v30, a3: 1u)
     : v4(a1: (__int64)v8, a2: (__int64)v30, a3: 1u);
  if ( v5 == 0 )
  {
LABEL_26:
    if ( (unsigned __int8)sub_140059D90(a1: off_141014FA0, a2: "Failed to deserialize PlayerCreateMasterMessage!") != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
LABEL_29:
    if ( (unsigned __int8)sub_140059D90(a1: off_141014FF0, a2: "Failed to deserialize contained bytestream reader") != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    JUMPOUT(0x1407CB6CBLL);
  }
  sub_1407AA7A0(a1: v15, a2: v8);
  if ( v18 == 0 )
    goto LABEL_29;
  v12[1] = v16;
  v13 = v17;
  v14 = 0;
  v12[0] = &PXEngine::ByteStreamReader::`vftable';
  sub_1407CBD40(a1, a2: v19, a3: v12);
  sub_1407BA110(a1, a2: 9);
  if ( v18 != 0 )
  {
    sub_140A25690(a1: (__int64)v15);
    v18 = 0;
  }
  sub_14034BD00(a1: v26);
  if ( v22 > 0xF )
  {
    v6 = (void *)v20;
    if ( v22 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v20 - *(_QWORD *)(v20 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v6 = *(void **)(v20 - 8);
    }
    sub_1409DB4C0(lpMem: v6);
  }
  *(_QWORD *)&v20 = 19937;
  v21 = 0;
  v22 = 31;
  sub_1407B3520(a1: v19);
}