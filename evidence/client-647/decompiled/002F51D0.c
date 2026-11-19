void __fastcall sub_1402F51D0(__int64 a1, __int64 a2, int a3, int a4)
{
  int v7; // eax
  int v8; // r14d
  char v9; // al
  int v10; // [rsp+20h] [rbp-49h] BYREF
  _QWORD v11[3]; // [rsp+28h] [rbp-41h] BYREF
  int v12; // [rsp+40h] [rbp-29h]
  __int16 v13; // [rsp+48h] [rbp-21h]
  _BYTE v14[32]; // [rsp+50h] [rbp-19h] BYREF
  __int16 v15; // [rsp+70h] [rbp+7h] BYREF
  _BYTE v16[32]; // [rsp+78h] [rbp+Fh] BYREF
  char v17; // [rsp+98h] [rbp+2Fh]

  if ( *(_QWORD *)&nExitCode == 0 )
    return;
  byte_141310980 = 0;
  if ( a3 == 0 )
  {
    v9 = sub_140059D90(a1: off_140F6CAF0, a2: "CPXPlayerItemManager::PlayerItemDelete: No valid inventory id");
    goto LABEL_15;
  }
  if ( a4 == -1 )
  {
    v9 = sub_140059D90(a1: off_140F6CB40, a2: "CPXPlayerItemManager::PlayerItemDelete: No valid slot id");
LABEL_15:
    if ( v9 != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  v7 = *(_DWORD *)(a2 + 16);
  v8 = *(_DWORD *)(a2 + 488);
  v11[1] = 0;
  v11[2] = 0;
  v12 = 0;
  v11[0] = &PXEngine::ByteStreamWriter::`vftable';
  v10 = v7;
  if ( sub_1401D0820(a1: v11, a2: &v10) != 0
    && (v10 = a4, sub_1401D0820(a1: v11, a2: &v10) != 0)
    && (v10 = v8, sub_1401D0820(a1: v11, a2: &v10) != 0)
    && (v10 = a3, sub_1401D0820(a1: v11, a2: &v10) != 0) )
  {
    v13 = word_141313D8C;
    sub_140A255B0(a1: v14, a2: v11);
    v15 = v13;
    sub_140A255B0(a1: v16, a2: v14);
    v17 = 1;
    sub_140A25690(a1: v14);
  }
  else
  {
    v17 = 0;
  }
  sub_140A25690(a1: v11);
  sub_1407EE6B0(a1: &v15);
  sub_1400AF390(a1: a2);
}