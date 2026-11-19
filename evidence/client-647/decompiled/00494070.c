__int64 __fastcall sub_140494070(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        char a6)
{
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rbx
  bool v17; // di
  const char *v18; // rax
  __int64 result; // rax
  __int64 v20; // rdi
  int v21; // eax
  __int64 v22; // rax
  _BYTE *v23; // rbx
  __int64 v24; // rax
  char **v25; // rcx
  const char *v26; // rax
  char v27; // al
  void **v28; // [rsp+40h] [rbp-B8h] BYREF
  int v29; // [rsp+48h] [rbp-B0h]
  int v30; // [rsp+4Ch] [rbp-ACh]
  _DWORD v31[4]; // [rsp+50h] [rbp-A8h] BYREF
  __int16 v32; // [rsp+60h] [rbp-98h]
  char v33; // [rsp+62h] [rbp-96h]
  _QWORD v34[3]; // [rsp+68h] [rbp-90h] BYREF
  int v35; // [rsp+80h] [rbp-78h]
  _BYTE v36[112]; // [rsp+88h] [rbp-70h] BYREF

  if ( a2 == 0 )
  {
    v25 = off_140FA61D8;
LABEL_33:
    v27 = sub_140059CA0(a1: v25);
LABEL_22:
    if ( v27 != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  v10 = qword_14138A6F0;
  if ( qword_14138A6F0 == 0 )
  {
    if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  v11 = sub_1405FD2E0(a1: qword_14138A6F0, a2: v31, a3: "PlayerItemManager");
  if ( (unsigned __int8)sub_1406006A0(a1: v10, a2: v11, a3: 163) != 0 )
  {
    sub_1405F1D60(a1: &v28, a2: *(unsigned int *)(v11 + 12), a3: *(unsigned int *)(v11 + 8));
  }
  else
  {
    v29 = 0;
    v30 = 195948557;
  }
  v28 = &PXEngine::SafeActorPtrAs<CPXPlayerItemManager>::`vftable';
  v12 = sub_1405F1EE0(a1: (__int64)&v28);
  if ( v12 == 0 )
  {
    v25 = off_140FA6238;
    goto LABEL_33;
  }
  v15 = sub_1401E0840(a1: v12, a2: a3, a3: v13, a4: v14);
  v16 = v15;
  if ( v15 == 0 )
  {
    v25 = off_140FA6260;
    goto LABEL_33;
  }
  v17 = (*(_BYTE *)(v15 + 1225) & 4) != 0 || *(_DWORD *)(v15 + 548) > 1u;
  if ( (unsigned __int8)sub_140492840(a1, a2: *(unsigned int *)(v15 + 16)) != 0 && !v17 )
  {
    v18 = (const char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 176LL))(a1: v16);
    result = sub_140059D90(
               a1: off_140FA6288,
               a2: "InventoryManager::SendItemToInventory - An already owned item can't be sent to inventory - Item: %s",
               v18);
    if ( (_BYTE)result != 0 )
      __debugbreak();
    return result;
  }
  v20 = sub_14005D330();
  v21 = sub_1405F1F00(a1: a1 + 464);
  v22 = sub_1400AC1A0(a1: v16, a2: v21, a3: 1, a4: 1, a5: 0, a6: -1, a7: 0);
  v23 = (_BYTE *)v22;
  if ( v22 == 0 || (unsigned __int8)sub_140645790(a1: v22, a2: 101, a3: v20) == 0 )
  {
    v25 = off_140FA62B0;
    goto LABEL_33;
  }
  v23[188] = 4;
  sub_1402699A0(a1: v23, a2: a4);
  result = sub_14048FC40(a1, a2: v23, a3: a2, a4: a5);
  if ( (_BYTE)result == 0 )
  {
    v26 = (const char *)(*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v23 + 176LL))(a1: v23);
    v27 = sub_140059D90(a1: off_140FA62E8, a2: "Failed to SendItemToInventory - ItemId: %s", v26);
    goto LABEL_22;
  }
  if ( a6 != 0 )
  {
    v34[1] = 0;
    v34[2] = 0;
    v35 = 0;
    v34[0] = &PXEngine::ByteStreamWriter::`vftable';
    v32 = 40;
    v31[0] = a3;
    v31[3] = a2;
    v31[1] = a5;
    v31[2] = a4;
    v33 = 0;
    v24 = sub_1402ED1C0(a1: &word_141313C88, a2: v36, a3: v31);
    sub_1407EE6B0(a1: v24);
    return sub_140A25690(a1: v34);
  }
  return result;
}