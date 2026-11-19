void __fastcall sub_1402F42C0(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  __int64 v8; // rbx
  int v9; // eax
  int v10; // edx
  char v11; // al
  int v12; // [rsp+20h] [rbp-69h] BYREF
  int v13; // [rsp+28h] [rbp-61h]
  int v14; // [rsp+2Ch] [rbp-5Dh]
  int v15; // [rsp+30h] [rbp-59h]
  int v16; // [rsp+34h] [rbp-55h]
  char v17; // [rsp+38h] [rbp-51h] BYREF
  __int16 v18; // [rsp+39h] [rbp-50h]
  char v19; // [rsp+3Bh] [rbp-4Eh]
  void **v20; // [rsp+40h] [rbp-49h] BYREF
  __int64 v21; // [rsp+48h] [rbp-41h]
  __int64 v22; // [rsp+50h] [rbp-39h]
  int v23; // [rsp+58h] [rbp-31h]
  void ***v24; // [rsp+60h] [rbp-29h] BYREF
  __int16 v25; // [rsp+68h] [rbp-21h]
  _BYTE v26[32]; // [rsp+70h] [rbp-19h] BYREF
  __int16 v27; // [rsp+90h] [rbp+7h] BYREF
  _BYTE v28[32]; // [rsp+98h] [rbp+Fh] BYREF
  char v29; // [rsp+B8h] [rbp+2Fh]

  v8 = a2;
  if ( *(_QWORD *)&nExitCode == 0 )
    return;
  if ( a2 == 0 )
  {
    v11 = sub_140059CA0(a1: off_140F6BFD0);
    goto LABEL_33;
  }
  LOBYTE(a2) = 10;
  if ( (unsigned __int8)sub_14025F400(a1: v8, a2) != 0 )
  {
    v11 = sub_140059D90(
            a1: off_140F6C020,
            a2: "CPXPlayerItemManager::PlayerItemBuy: Customization items can't be purchased in item shops");
    goto LABEL_33;
  }
  if ( a3 == 0 )
  {
    v11 = sub_140059D90(a1: off_140F6C0A0, a2: "CPXPlayerItemManager::PlayerItemBuy: No valid inventory id");
    goto LABEL_33;
  }
  if ( a4 == -1 )
  {
    v11 = sub_140059D90(a1: off_140F6C108, a2: "CPXPlayerItemManager::PlayerItemBuy: No valid slot id");
LABEL_33:
    if ( v11 != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  byte_141310980 = 0;
  v9 = *(_DWORD *)(v8 + 484);
  if ( v9 == 0 )
    v9 = 1;
  v10 = *(_DWORD *)(v8 + 16);
  if ( a5 == 0 )
  {
    v13 = a6;
    v14 = v10;
    v15 = a4;
    v16 = v9;
    v17 = a3;
    v18 = *(_WORD *)((char *)&a3 + 1);
    v19 = HIBYTE(a3);
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v20 = &PXEngine::ByteStreamWriter::`vftable';
    v24 = &v20;
    v12 = a6;
    if ( sub_1401D0820(a1: &v20, a2: &v12) != 0
      && (v13 = v12, v12 = v14, sub_1401D0820(a1: &v20, a2: &v12) != 0)
      && (v14 = v12, v12 = v15, sub_1401D0820(a1: &v20, a2: &v12) != 0)
      && (v15 = v12, v12 = v16, sub_1401D0820(a1: &v20, a2: &v12) != 0)
      && (v16 = v12, (unsigned __int8)sub_1402B7CD0(a1: &v24, a2: &v17) != 0) )
    {
      v25 = word_141313DA4;
      sub_140A255B0(a1: v26, a2: &v20);
      v27 = v25;
      sub_140A255B0(a1: v28, a2: v26);
      v29 = 1;
      sub_140A25690(a1: v26);
    }
    else
    {
      v29 = 0;
    }
LABEL_24:
    sub_140A25690(a1: &v20);
    sub_1407EE6B0(a1: &v27);
    return;
  }
  if ( a5 == 1 )
  {
    v13 = a6;
    v14 = v10;
    v15 = a4;
    v16 = v9;
    v17 = a3;
    v18 = *(_WORD *)((char *)&a3 + 1);
    v19 = HIBYTE(a3);
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v20 = &PXEngine::ByteStreamWriter::`vftable';
    v24 = &v20;
    v12 = a6;
    if ( sub_1401D0820(a1: &v20, a2: &v12) != 0
      && (v13 = v12, v12 = v14, sub_1401D0820(a1: &v20, a2: &v12) != 0)
      && (v14 = v12, v12 = v15, sub_1401D0820(a1: &v20, a2: &v12) != 0)
      && (v15 = v12, v12 = v16, sub_1401D0820(a1: &v20, a2: &v12) != 0)
      && (v16 = v12, (unsigned __int8)sub_1402B7CD0(a1: &v24, a2: &v17) != 0) )
    {
      v25 = word_141313DA8;
      sub_140A255B0(a1: v26, a2: &v20);
      v27 = v25;
      sub_140A255B0(a1: v28, a2: v26);
      v29 = 1;
      sub_140A25690(a1: v26);
    }
    else
    {
      v29 = 0;
    }
    goto LABEL_24;
  }
  if ( (unsigned __int8)sub_140059D90(
                          a1: off_140F6C148,
                          a2: "CPXPlayerItemManager::PlayerItemBuy: Function called with invalid dwCurrency parameter!") != 0 )
    __debugbreak();
}