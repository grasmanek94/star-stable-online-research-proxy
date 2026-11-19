void __fastcall sub_1402F7420(__int64 a1, unsigned int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  _BYTE *v8; // rax
  _BYTE *v9; // rcx
  _DWORD *v10; // r8
  __int64 v11; // r9
  _DWORD *v12; // rdx
  unsigned int v13; // eax
  unsigned int v14; // edi
  unsigned int v15; // esi
  __int64 v16; // rax
  char (__fastcall *v17)(__int64, __int64, __int64); // r9
  char (__fastcall *v18)(__int64, __int64, __int64); // r9
  char (__fastcall *v19)(__int64, __int64, __int64); // r9
  char v20; // al
  char **v21; // rcx
  char v22; // al
  float v23; // [rsp+2Ch] [rbp-7Dh] BYREF
  int v24; // [rsp+30h] [rbp-79h] BYREF
  _WORD v25[2]; // [rsp+34h] [rbp-75h] BYREF
  _QWORD v26[3]; // [rsp+38h] [rbp-71h] BYREF
  int v27; // [rsp+50h] [rbp-59h]
  _DWORD *v28; // [rsp+58h] [rbp-51h] BYREF
  _DWORD *v29; // [rsp+60h] [rbp-49h]
  __int64 v30; // [rsp+68h] [rbp-41h]
  _QWORD *v31; // [rsp+70h] [rbp-39h] BYREF
  _BYTE v32[16]; // [rsp+78h] [rbp-31h] BYREF
  __int16 v33; // [rsp+88h] [rbp-21h]
  _BYTE v34[32]; // [rsp+90h] [rbp-19h] BYREF
  __int16 v35; // [rsp+B0h] [rbp+7h] BYREF
  char v36[32]; // [rsp+B8h] [rbp+Fh] BYREF
  char v37; // [rsp+D8h] [rbp+2Fh]
  unsigned int v38; // [rsp+128h] [rbp+7Fh] BYREF

  if ( *(_QWORD *)&nExitCode == 0 )
    return;
  v6 = sub_140491070();
  sub_140490C30(a1: v6, a2: v32);
  if ( (unsigned __int8)sub_1405F1E20(a1: v32) == 0 )
    goto LABEL_45;
  v7 = sub_1405F1EE0(a1: (__int64)v32);
  if ( v7 == 0 )
  {
    v20 = sub_140059CA0(a1: off_140F4ECF0);
    goto LABEL_47;
  }
  (*(void (__fastcall **)(__int64, _DWORD **, _QWORD))(*(_QWORD *)v7 + 1304LL))(a1: v7, a2: &v28, a3: a2);
  if ( v28 == v29 )
    goto LABEL_5;
  v10 = nullptr;
  v11 = 0xFFFFFFFFLL;
  v12 = v28;
  do
  {
    if ( *(_QWORD *)v12 == 0 )
    {
      v22 = sub_140059D90(a1: off_140F4B500, a2: "Failed to get item pointer in InventoryItemData", v10, v11);
      goto LABEL_42;
    }
    v13 = *(_DWORD *)(*(_QWORD *)v12 + 488LL);
    if ( v13 < (unsigned int)v11 )
      v10 = v12;
    v12 += 4;
    if ( v13 >= (unsigned int)v11 )
      v13 = v11;
    v11 = v13;
  }
  while ( v12 != v29 );
  if ( v10 == nullptr )
  {
    v21 = off_140F6E5F0;
    goto LABEL_53;
  }
  if ( *(_DWORD *)(*(_QWORD *)v10 + 488LL) == 0 )
  {
LABEL_5:
    if ( v28 == nullptr )
      return;
    if ( ((v30 - (_QWORD)v28) & 0xFFFFFFFFFFFFFFF0uLL) < 0x1000 )
    {
      v8 = v28;
    }
    else
    {
      v8 = *((_BYTE **)v28 - 1);
      if ( (unsigned __int64)((char *)v28 - v8 - 8) > 0x1F )
        goto LABEL_41;
    }
    goto LABEL_10;
  }
  v14 = v10[3];
  v15 = v10[2];
  v16 = sub_1401E0840(a1, a2, a3: v10, a4: v13);
  if ( v16 == 0 )
  {
    while ( 1 )
    {
      v21 = off_140F6E618;
LABEL_53:
      v22 = sub_140059CA0(a1: v21);
LABEL_42:
      if ( v22 != 0 )
        __debugbreak();
      sub_1409E29B8(a1: 999);
LABEL_45:
      v20 = sub_140059D90(
              a1: off_140F6E598,
              a2: "CPXPlayerItemManager::RequestConsumeItem: InventoryManager has no Inventory View for Backpack!");
LABEL_47:
      if ( v20 != 0 )
        __debugbreak();
      sub_1409E29B8(a1: 999);
    }
  }
  v23 = (float)(int)sub_14025E1F0(a1: v16);
  v24 = a3;
  v25[0] = 256;
  v26[1] = 0;
  v26[2] = 0;
  v27 = 0;
  v26[0] = &PXEngine::ByteStreamWriter::`vftable';
  v31 = v26;
  v38 = a2;
  if ( sub_1401D0820(a1: v26, a2: &v38) == 0 )
    goto LABEL_37;
  v38 = v15;
  if ( sub_1401D0820(a1: v26, a2: &v38) == 0 )
    goto LABEL_37;
  v38 = v14;
  if ( sub_1401D0820(a1: v26, a2: &v38) == 0 )
    goto LABEL_37;
  v17 = *(char (__fastcall **)(__int64, __int64, __int64))(v26[0] + 16LL);
  if ( v17 == sub_1401F6C10 )
  {
    sub_140A25890(a1: v26, a2: &v23, a3: 4);
  }
  else if ( v17(a1: (__int64)v26, a2: (__int64)&v23, a3: 4) == 0 )
  {
    goto LABEL_37;
  }
  if ( (unsigned __int8)sub_1402B7CD0(a1: &v31, a2: &v24) != 0 )
  {
    v18 = *(char (__fastcall **)(__int64, __int64, __int64))(v26[0] + 16LL);
    if ( v18 == sub_1401F6C10 )
    {
      sub_140A25890(a1: v26, a2: v25, a3: 1);
    }
    else if ( v18(a1: (__int64)v26, a2: (__int64)v25, a3: 1) == 0 )
    {
      goto LABEL_37;
    }
    v19 = *(char (__fastcall **)(__int64, __int64, __int64))(v26[0] + 16LL);
    if ( v19 == sub_1401F6C10 )
    {
      sub_140A25890(a1: v26, a2: (char *)v25 + 1, a3: 1);
LABEL_36:
      v33 = word_141313C74;
      sub_140A255B0(a1: v34, a2: v26);
      v35 = v33;
      sub_140A255B0(a1: v36, a2: v34);
      v37 = 1;
      sub_140A25690(a1: v34);
      goto LABEL_38;
    }
    if ( v19(a1: (__int64)v26, a2: (__int64)v25 + 1, a3: 1) != 0 )
      goto LABEL_36;
  }
LABEL_37:
  v37 = 0;
LABEL_38:
  sub_140A25690(a1: v26);
  sub_1407EE6B0(a1: &v35);
  v8 = v28;
  if ( v28 != nullptr )
  {
    if ( ((v30 - (_QWORD)v28) & 0xFFFFFFFFFFFFFFF0uLL) >= 0x1000 )
    {
      v9 = *((_BYTE **)v28 - 1);
      if ( (unsigned __int64)((char *)v28 - v9 - 8) > 0x1F )
LABEL_41:
        __fastfail(5u);
      goto LABEL_11;
    }
LABEL_10:
    v9 = v8;
LABEL_11:
    sub_1409DB4C0(lpMem: v9);
  }
}