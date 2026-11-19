__int64 __fastcall sub_1407C1800(__int64 a1)
{
  const char *v2; // r8
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // edi
  __int64 *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // r8
  void (__fastcall ***v11)(_QWORD, __int64); // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  void (__fastcall ***v14)(_QWORD, __int64); // r8
  void *v15; // rcx
  void *v16; // rcx
  _BYTE v18[4]; // [rsp+30h] [rbp-98h] BYREF
  int v19; // [rsp+34h] [rbp-94h] BYREF
  __int64 v20; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v21[3]; // [rsp+48h] [rbp-80h] BYREF
  unsigned __int64 v22; // [rsp+60h] [rbp-68h]
  _QWORD v23[3]; // [rsp+68h] [rbp-60h] BYREF
  unsigned __int64 v24; // [rsp+80h] [rbp-48h]
  _BYTE v25[3]; // [rsp+9Dh] [rbp-2Bh] BYREF

  if ( *(_DWORD *)(a1 + 312) != 0 )
  {
    *(_DWORD *)(a1 + 312) = 0;
    if ( *(_BYTE *)(a1 + 3024) == 2 )
    {
      if ( *(_QWORD *)&nExitCode == 0 )
        goto LABEL_43;
      sub_1407B75D0(a1, a2: *(_QWORD *)&nExitCode, a3: 0);
    }
  }
  sub_140016F80(a1: v21, a2: *(_QWORD *)(*(_QWORD *)&nExitCode + 688LL) + 240LL);
  v2 = (const char *)v21;
  if ( v22 > 0xF )
    v2 = (const char *)v21[0];
  if ( (unsigned __int8)sub_140059D90(a1: off_141013C98, a2: "ServerHostname: '%s'", v2) != 0 )
    __debugbreak();
  v3 = *(_QWORD *)(*(_QWORD *)&nExitCode + 688LL);
  if ( v3 == 0 || (v4 = *(_DWORD *)(v3 + 272)) == 0 )
    LOWORD(v4) = 18971;
  v5 = (unsigned __int16)v4;
  if ( (unsigned __int8)sub_140059D90(a1: off_141013CC0, a2: "ServerPort: '%u'", (unsigned __int16)v4) != 0 )
    __debugbreak();
  v6 = (__int64 *)(a1 + 328);
  v7 = *(_QWORD *)(a1 + 328);
  if ( v7 != 0 && (*(_BYTE *)(a1 + 336) == 0 || *(_BYTE *)(v7 + 232) == 0) )
  {
    while ( 1 )
    {
      if ( (unsigned __int8)sub_140059CA0(a1: off_141013CE8) != 0 )
        __debugbreak();
      sub_1409E29B8(a1: 999);
LABEL_43:
      if ( (unsigned __int8)sub_140059CA0(a1: off_140F34FA8) != 0 )
        __debugbreak();
      sub_1409E29B8(a1: 999);
    }
  }
  v8 = sub_140057AF0(a1: v25, a2: v5);
  sub_140056380(a1: v23, a2: v8, a3: v25, a4: v18);
  v19 = 0;
  v9 = sub_1407AEC50(
         a1: (unsigned int)&v20,
         a2: 1,
         a3: (unsigned int)sub_140A4B7B0,
         a4: (unsigned int)&v19,
         a5: (__int64)v21,
         a6: (__int64)v23);
  if ( v6 != (__int64 *)v9 )
  {
    v10 = *v6;
    if ( *v6 != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 8), 0xFFFFFFFF) == 1 )
    {
      v11 = *(void (__fastcall ****)(_QWORD, __int64))(v10 + 248);
      if ( v11 != nullptr )
        (**v11)(a1: v11, a2: v10);
      else
        (**(void (__fastcall ***)(__int64, __int64))v10)(a1: v10, a2: 1);
    }
    v12 = *(_QWORD *)v9;
    *(_QWORD *)v9 = 0;
    *v6 = v12;
    *(_BYTE *)(a1 + 336) = *(_BYTE *)(v9 + 8);
  }
  v13 = v20;
  if ( v20 != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v20 + 8), 0xFFFFFFFF) == 1 )
  {
    v14 = *(void (__fastcall ****)(_QWORD, __int64))(v13 + 248);
    if ( v14 != nullptr )
      (**v14)(a1: *(_QWORD *)(v13 + 248), a2: v13);
    else
      (**(void (__fastcall ***)(__int64, __int64))v13)(a1: v13, a2: 1);
  }
  if ( v24 > 0xF )
  {
    v15 = (void *)v23[0];
    if ( v24 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v23[0] - *(_QWORD *)(v23[0] - 8LL) - 8LL) > 0x1F )
        __fastfail(5u);
      v15 = *(void **)(v23[0] - 8LL);
    }
    sub_1409DB4C0(lpMem: v15);
  }
  if ( v22 > 0xF )
  {
    v16 = (void *)v21[0];
    if ( v22 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v21[0] - *(_QWORD *)(v21[0] - 8LL) - 8LL) > 0x1F )
        __fastfail(5u);
      v16 = *(void **)(v21[0] - 8LL);
    }
    sub_1409DB4C0(lpMem: v16);
  }
  return 1;
}