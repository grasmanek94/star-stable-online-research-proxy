__int64 __fastcall sub_1402F7CE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // r12d
  int v6; // ebx
  int v7; // r14d
  int v8; // edi
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // r15d
  int v12; // esi
  int v13; // ebx
  int v14; // edi
  char v16; // al
  _DWORD v17[6]; // [rsp+30h] [rbp-99h] BYREF
  _QWORD v18[3]; // [rsp+48h] [rbp-81h] BYREF
  int v19; // [rsp+60h] [rbp-69h]
  _QWORD v20[3]; // [rsp+68h] [rbp-61h] BYREF
  int v21; // [rsp+80h] [rbp-49h]
  __int16 v22; // [rsp+88h] [rbp-41h]
  _BYTE v23[32]; // [rsp+90h] [rbp-39h] BYREF
  __int16 v24; // [rsp+B0h] [rbp-19h] BYREF
  _BYTE v25[32]; // [rsp+B8h] [rbp-11h] BYREF
  char v26; // [rsp+D8h] [rbp+Fh]

  v5 = a3;
  v6 = a2;
  v20[1] = 0;
  v20[2] = 0;
  v21 = 0;
  v20[0] = &PXEngine::ByteStreamWriter::`vftable';
  v7 = -1;
  v8 = 0;
  v9 = sub_1401E0840(a1, a2, a3, a4);
  if ( v9 == 0 )
  {
    v16 = sub_140059D90(
            a1: off_140F6E7A8,
            a2: "CPXPlayerItemManager::SendItemMailAttachedReward - Unable to retrieve mail attachment item id %u",
            v6);
    goto LABEL_24;
  }
  LOBYTE(v10) = 10;
  if ( (unsigned __int8)sub_14025F400(a1: v9, a2: v10) == 0 )
  {
    if ( a4 == 0 )
    {
      v16 = sub_140059D90(
              a1: off_140F6E808,
              a2: "CPXPlayerItemManager::SendItemMailAttachedReward - View to place item into is nullptr");
LABEL_24:
      if ( v16 != 0 )
        __debugbreak();
      sub_1409E29B8(a1: 999);
      __debugbreak();
    }
    v8 = sub_140152310(a1: a4);
    v7 = sub_140152330(a1: a4);
  }
  if ( (unsigned __int8)sub_140059D90(
                          a1: off_140F6E840,
                          a2: "CPXPlayerItemManager::SendItemMailAttachedReward - Inventory: %u, Slot: %u, Item: %u",
                          v7,
                          v8,
                          v6) != 0 )
    __debugbreak();
  v17[0] = v6;
  if ( sub_1401D0820(a1: v20, a2: v17) != 0
    && (v11 = v17[0], v17[0] = v7, sub_1401D0820(a1: v20, a2: v17) != 0)
    && (v12 = v17[0], v17[0] = v8, sub_1401D0820(a1: v20, a2: v17) != 0)
    && (v13 = v17[0], v17[0] = v5, sub_1401D0820(a1: v20, a2: v17) != 0) )
  {
    v14 = v17[0];
    v18[1] = 0;
    v18[2] = 0;
    v19 = 0;
    v18[0] = &PXEngine::ByteStreamWriter::`vftable';
    v17[0] = v11;
    if ( sub_1401D0820(a1: v18, a2: v17) != 0
      && (v17[0] = v12, sub_1401D0820(a1: v18, a2: v17) != 0)
      && (v17[0] = v13, sub_1401D0820(a1: v18, a2: v17) != 0)
      && (v17[0] = v14, sub_1401D0820(a1: v18, a2: v17) != 0) )
    {
      v22 = word_141313CA8;
      sub_140A255B0(a1: v23, a2: v18);
      v24 = v22;
      sub_140A255B0(a1: v25, a2: v23);
      v26 = 1;
      sub_140A25690(a1: v23);
    }
    else
    {
      v26 = 0;
    }
    sub_140A25690(a1: v18);
    sub_1407EE6B0(a1: &v24);
  }
  else if ( (unsigned __int8)sub_140059D90(
                               a1: off_140F6E868,
                               a2: "Serialize GameServerMessages::MailAttachedRewardItem!") != 0 )
  {
    __debugbreak();
  }
  return sub_140A25690(a1: v20);
}