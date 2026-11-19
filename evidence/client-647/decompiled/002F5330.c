void __fastcall sub_1402F5330(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // esi
  int v6; // eax
  int v7; // edi
  int v8; // eax
  int v9; // r15d
  char v10; // al
  _QWORD v11[3]; // [rsp+20h] [rbp-49h] BYREF
  int v12; // [rsp+38h] [rbp-31h]
  __int16 v13; // [rsp+40h] [rbp-29h]
  _BYTE v14[32]; // [rsp+48h] [rbp-21h] BYREF
  __int16 v15; // [rsp+68h] [rbp-1h] BYREF
  _BYTE v16[32]; // [rsp+70h] [rbp+7h] BYREF
  char v17; // [rsp+90h] [rbp+27h]
  int v18; // [rsp+E8h] [rbp+7Fh] BYREF

  if ( *(_QWORD *)&nExitCode != 0 && a3 != 0 )
  {
    byte_141310980 = 0;
    v5 = sub_140152310(a1: a3);
    v6 = sub_140152330(a1: a3);
    v7 = v6;
    if ( *(_QWORD *)&nExitCode != 0 )
    {
      byte_141310980 = 0;
      if ( v5 != 0 )
      {
        if ( v6 != -1 )
        {
          v8 = *(_DWORD *)(a2 + 16);
          v9 = *(_DWORD *)(a2 + 488);
          v11[1] = 0;
          v11[2] = 0;
          v12 = 0;
          v11[0] = &PXEngine::ByteStreamWriter::`vftable';
          v18 = v8;
          if ( sub_1401D0820(a1: v11, a2: &v18) != 0
            && (v18 = v7, sub_1401D0820(a1: v11, a2: &v18) != 0)
            && (v18 = v9, sub_1401D0820(a1: v11, a2: &v18) != 0)
            && (v18 = v5, sub_1401D0820(a1: v11, a2: &v18) != 0) )
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
          goto LABEL_13;
        }
        v10 = sub_140059D90(a1: off_140F6CB40, a2: "CPXPlayerItemManager::PlayerItemDelete: No valid slot id");
      }
      else
      {
        v10 = sub_140059D90(a1: off_140F6CAF0, a2: "CPXPlayerItemManager::PlayerItemDelete: No valid inventory id");
      }
      if ( v10 != 0 )
        __debugbreak();
      sub_1409E29B8(a1: 999);
      __debugbreak();
    }
LABEL_13:
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a3 + 1256LL))(a1: a3, a2: 0);
  }
}