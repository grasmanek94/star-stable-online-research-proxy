char __fastcall sub_1402F5C50(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 v6; // rdi
  __int64 v7; // rdx
  unsigned int v8; // eax
  unsigned int v10; // r15d
  __int64 v11; // rsi
  unsigned int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rax
  char v15; // al
  int v16; // [rsp+40h] [rbp-89h] BYREF
  _BYTE v17[12]; // [rsp+48h] [rbp-81h] BYREF
  unsigned int v18; // [rsp+54h] [rbp-75h]
  __int16 v19; // [rsp+58h] [rbp-71h]
  char v20; // [rsp+5Ah] [rbp-6Fh]
  void **v21; // [rsp+60h] [rbp-69h] BYREF
  unsigned __int64 v22; // [rsp+68h] [rbp-61h]
  __int64 v23; // [rsp+70h] [rbp-59h]
  int v24; // [rsp+78h] [rbp-51h]
  __int64 v25; // [rsp+88h] [rbp-41h] BYREF
  int v26; // [rsp+90h] [rbp-39h]
  int v27; // [rsp+94h] [rbp-35h]
  __int16 v28; // [rsp+98h] [rbp-31h] BYREF
  _BYTE v29[32]; // [rsp+A0h] [rbp-29h] BYREF
  char v30; // [rsp+C0h] [rbp-9h]
  __int16 v31; // [rsp+C8h] [rbp-1h]
  _BYTE v32[80]; // [rsp+D0h] [rbp+7h] BYREF

  v6 = a2;
  if ( *(_QWORD *)&nExitCode == 0 )
    return 0;
  v16 = 0;
  if ( a4 != 0 )
    v16 = 4;
  LOBYTE(a2) = 27;
  if ( (unsigned __int8)sub_14025F400(a1: v6, a2) != 0 )
  {
    if ( (unsigned __int8)sub_140059D90(
                            a1: off_140F6C758,
                            a2: "Action not allowed: trying to give a horse body item as a reward.") != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  v8 = *(_DWORD *)(v6 + 548);
  if ( v8 != 0 && a3 > v8 )
    a3 = *(_DWORD *)(v6 + 548);
  LOBYTE(v7) = 10;
  if ( (unsigned __int8)sub_14025F400(a1: v6, a2: v7) == 0 )
  {
    byte_141310980 = 0;
    v10 = *(_DWORD *)(v6 + 16);
    v11 = sub_140491070();
    sub_140490CA0(a1: v11, a2: &v25, a3: v10, a4: a3);
    if ( v25 != 0 )
    {
      sub_140492910(a1: v11, a2: (unsigned int)v17, a3: v10, a4: a3, a5: v27, a6: v26, a7: v16);
LABEL_20:
      v14 = sub_140491070();
      sub_140495E50(a1: v14, a2: v6, a3);
      return 1;
    }
    v12 = sub_140490C20(a1: v11);
    if ( (unsigned int)sub_140490E00(a1: v11, a2: v12) != 0 )
    {
      v16 |= 2u;
      sub_14048FD60(a1: v11, a2: (unsigned int)v17, a3: v6, a4: a3, a5: 4, a6: 0, a7: (__int64)&v16);
      if ( *(_QWORD *)v17 != 0 )
      {
        if ( v18 != 0 )
        {
          if ( *(_DWORD *)&v17[8] != -1 )
          {
            LOWORD(v23) = 40;
            v21 = (void **)__PAIR64__(*(unsigned int *)&v17[8], v10);
            v22 = __PAIR64__(v18, a3);
            BYTE2(v23) = a4;
            v13 = sub_1402ED1C0(a1: &word_141313C88, a2: &v28, a3: &v21);
            sub_1407EE6B0(a1: v13);
            goto LABEL_20;
          }
          v15 = sub_140059D90(
                  a1: off_140F6C868,
                  a2: "PlayerItemManager::PlayerItemRewardInternal: Invalid slot id for reward");
        }
        else
        {
          v15 = sub_140059D90(
                  a1: off_140F6C7F8,
                  a2: "PlayerItemManager::PlayerItemRewardInternal: Invalid inventory id for reward");
        }
        if ( v15 != 0 )
          __debugbreak();
        sub_1409E29B8(a1: 999);
        __debugbreak();
      }
      if ( (unsigned __int8)sub_140059D90(
                              a1: off_140F6C8B8,
                              a2: "PlayerItemManager::PlayerItemRewardInternal: Reward Item Id: %u",
                              *(_DWORD *)(v6 + 16)) != 0 )
        __debugbreak();
      if ( (unsigned __int8)sub_140059D90(
                              a1: off_140F6C8E0,
                              a2: "PlayerItemManager::PlayerItemRewardInternal: Failed to add reward item to backpack inventory") != 0 )
        __debugbreak();
    }
    else
    {
      byte_141310980 = 1;
    }
    return 0;
  }
  *(_QWORD *)&v17[4] = 0;
  v18 = 0;
  *(_DWORD *)v17 = *(_DWORD *)(v6 + 16);
  v20 = a4;
  v19 = 39;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v21 = &PXEngine::ByteStreamWriter::`vftable';
  if ( (unsigned __int8)sub_1402EA550(a1: &v21, a2: v17) != 0 )
  {
    v31 = word_141313C88;
    sub_140A255B0(a1: v32, a2: &v21);
    v28 = v31;
    sub_140A255B0(a1: v29, a2: v32);
    v30 = 1;
    sub_140A25690(a1: v32);
  }
  else
  {
    v30 = 0;
  }
  sub_140A25690(a1: &v21);
  sub_1407EE6B0(a1: &v28);
  return 1;
}