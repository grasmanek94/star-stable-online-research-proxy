LPVOID __fastcall sub_1402D5F40(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v7; // r14d
  unsigned int v8; // r15d
  unsigned int v9; // esi
  LPVOID result; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  void *v13; // rax
  _DWORD *v14; // r8
  __int64 v15; // r9
  _DWORD *v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  void *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rdi
  LPVOID v25; // rbx
  __int64 v26; // rax
  char v27; // al
  char v28; // al
  LPVOID lpMem[2]; // [rsp+20h] [rbp-49h] BYREF
  unsigned __int64 v30; // [rsp+30h] [rbp-39h]
  int v31; // [rsp+38h] [rbp-31h]
  void **v32; // [rsp+40h] [rbp-29h] BYREF
  int v33; // [rsp+48h] [rbp-21h]
  int v34; // [rsp+4Ch] [rbp-1Dh]
  _BYTE v35[112]; // [rsp+50h] [rbp-19h] BYREF

  v7 = 0;
  v8 = 0;
  v9 = 0;
  if ( a4 == 0 )
  {
    v21 = sub_1405F1EE0(a1: a1 + 344);
    if ( v21 != 0 )
      sub_140148000(a1: v21, a2: 0);
    result = (LPVOID)sub_1405F1E20(a1: a1 + 408);
    if ( (_BYTE)result == 0 )
      goto LABEL_39;
    v22 = sub_1405F1EE0(a1: a1 + 408);
    if ( v22 == 0 )
    {
LABEL_59:
      if ( (unsigned __int8)sub_140059CA0(a1: off_140F40348) != 0 )
        __debugbreak();
      sub_1409E29B8(a1: 999);
      __debugbreak();
    }
    result = (LPVOID)sub_1400AC0D0(a1: v22);
    goto LABEL_39;
  }
  if ( a4 != 2 )
  {
    result = (LPVOID)sub_140059D90(
                       a1: off_140F68E50,
                       a2: "CPXLocationManager::LocationTransport - Unsupported Currency");
    if ( (_BYTE)result != 0 )
      __debugbreak();
    goto LABEL_39;
  }
  v11 = sub_140491070();
  sub_140490C30(a1: v11, a2: &v32);
  if ( (unsigned __int8)sub_1405F1E20(a1: &v32) == 0 )
  {
    v27 = sub_140059D90(
            a1: off_140F68DC8,
            a2: "CPXLocationManager::LocationTransport: InventoryManager has no Inventory View for Backpack!");
LABEL_50:
    if ( v27 != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    goto LABEL_53;
  }
  v12 = sub_1405F1EE0(a1: (__int64)&v32);
  if ( v12 == 0 )
  {
    v27 = sub_140059CA0(a1: off_140F4ECF0);
    goto LABEL_50;
  }
  result = (LPVOID)(*(__int64 (__fastcall **)(__int64, LPVOID *, __int64))(*(_QWORD *)v12 + 1304LL))(
                     a1: v12,
                     a2: lpMem,
                     a3: 14539);
  if ( lpMem[0] == lpMem[1] )
  {
LABEL_8:
    if ( lpMem[0] == nullptr )
      return result;
    if ( ((v30 - (unsigned __int64)lpMem[0]) & 0xFFFFFFFFFFFFFFF0uLL) < 0x1000 )
      return (LPVOID)sub_1409DB4C0(lpMem: lpMem[0]);
    v13 = *((void **)lpMem[0] - 1);
    if ( (unsigned __int64)((char *)lpMem[0] - (char *)v13 - 8) <= 0x1F )
      return (LPVOID)sub_1409DB4C0(lpMem: v13);
LABEL_30:
    __fastfail(5u);
  }
  v14 = nullptr;
  v15 = 0xFFFFFFFFLL;
  v16 = lpMem[0];
  do
  {
    if ( *(_QWORD *)v16 == 0 )
    {
      v28 = sub_140059D90(a1: off_140F4B500, a2: "Failed to get item pointer in InventoryItemData", v14, v15);
      goto LABEL_56;
    }
    v17 = *(_DWORD *)(*(_QWORD *)v16 + 488LL);
    if ( v17 < (unsigned int)v15 )
      v14 = v16;
    v16 += 4;
    if ( v17 >= (unsigned int)v15 )
      v17 = v15;
    v15 = v17;
  }
  while ( v16 != lpMem[1] );
  if ( v14 == nullptr )
  {
    v28 = sub_140059D90(
            a1: off_140F68E18,
            a2: "CPXLocationManager::LocationTransport: Selected Currency Item is nullptr",
            0,
            v17);
LABEL_56:
    if ( v28 != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    goto LABEL_59;
  }
  result = *(LPVOID *)v14;
  v9 = *(_DWORD *)(*(_QWORD *)v14 + 488LL);
  if ( v9 == 0 )
    goto LABEL_8;
  v7 = v14[3];
  v8 = v14[2];
  v18 = sub_1405F1EE0(a1: a1 + 376);
  if ( v18 != 0 )
    sub_140148000(a1: v18, a2: 0);
  if ( (unsigned __int8)sub_1405F1E20(a1: a1 + 456) != 0 )
  {
    v19 = sub_1405F1EE0(a1: a1 + 456);
    if ( v19 != 0 )
    {
      sub_1400AC0D0(a1: v19);
      goto LABEL_27;
    }
LABEL_53:
    v28 = sub_140059CA0(a1: off_140F40348);
    goto LABEL_56;
  }
LABEL_27:
  result = lpMem[0];
  if ( lpMem[0] != nullptr )
  {
    if ( ((v30 - (unsigned __int64)lpMem[0]) & 0xFFFFFFFFFFFFFFF0uLL) < 0x1000 )
    {
      v20 = lpMem[0];
    }
    else
    {
      v20 = *((void **)lpMem[0] - 1);
      if ( (unsigned __int64)((char *)lpMem[0] - (char *)v20 - 8) > 0x1F )
        goto LABEL_30;
    }
    result = (LPVOID)sub_1409DB4C0(lpMem: v20);
  }
  *(__m128i *)lpMem = _mm_load_si128((const __m128i *)&xmmword_140EEE200);
  v30 = 19937;
LABEL_39:
  if ( *(_QWORD *)&nExitCode != 0 )
  {
    v23 = qword_14138A6F0;
    if ( qword_14138A6F0 == 0 )
    {
      if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
        __debugbreak();
      sub_1409E29B8(a1: 999);
      __debugbreak();
    }
    v24 = sub_1405FD2E0(a1: qword_14138A6F0, a2: lpMem, a3: "Network");
    if ( (unsigned __int8)sub_1406006A0(a1: v23, a2: v24, a3: 122) != 0 )
    {
      sub_1405F1D60(a1: &v32, a2: *(unsigned int *)(v24 + 12), a3: *(unsigned int *)(v24 + 8));
    }
    else
    {
      v33 = 0;
      v34 = 195948557;
    }
    v32 = &PXEngine::SafeActorPtrAs<CPXNetwork>::`vftable';
    result = (LPVOID)sub_1405F1EE0(a1: (__int64)&v32);
    v25 = result;
    if ( result != nullptr )
    {
      LODWORD(lpMem[0]) = *(_DWORD *)(a2 + 16);
      HIDWORD(lpMem[0]) = *(_DWORD *)(a3 + 16);
      lpMem[1] = (LPVOID)__PAIR64__(v7, a4);
      v30 = __PAIR64__(v9, v8);
      v31 = 14539;
      v26 = sub_1402D47D0(a1: &unk_141313C7C, a2: v35, a3: lpMem);
      return (LPVOID)sub_1407D6C20(a1: v25, a2: v26);
    }
  }
  return result;
}