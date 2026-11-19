void __fastcall sub_14048B840(__int64 a1, int a2)
{
  _QWORD *v2; // rdx
  __int64 v3; // rbx
  __int64 v4; // rdi
  void *v5; // rcx
  void **v6; // [rsp+20h] [rbp-79h] BYREF
  int v7; // [rsp+28h] [rbp-71h]
  int v8; // [rsp+2Ch] [rbp-6Dh]
  _QWORD v9[3]; // [rsp+30h] [rbp-69h] BYREF
  int v10; // [rsp+48h] [rbp-51h]
  __int16 v11; // [rsp+50h] [rbp-49h]
  _BYTE v12[32]; // [rsp+58h] [rbp-41h] BYREF
  __int16 v13; // [rsp+78h] [rbp-21h] BYREF
  _BYTE v14[32]; // [rsp+80h] [rbp-19h] BYREF
  char v15; // [rsp+A0h] [rbp+7h]
  int v16; // [rsp+A8h] [rbp+Fh]
  __int128 v17; // [rsp+B0h] [rbp+17h] BYREF
  __int64 v18; // [rsp+C0h] [rbp+27h]
  unsigned __int64 v19; // [rsp+C8h] [rbp+2Fh]
  int v20; // [rsp+D0h] [rbp+37h]

  if ( *(_BYTE *)(a1 + 472) == 0 )
  {
    *(_BYTE *)(a1 + 472) = 1;
    v17 = 0;
    v18 = 0;
    v19 = 15;
    LOBYTE(v17) = 0;
    v20 = a2;
    v16 = *(_DWORD *)(a1 + 244);
    v2 = (_QWORD *)(a1 + 248);
    if ( &v17 != (__int128 *)(a1 + 248) )
    {
      if ( *(_QWORD *)(a1 + 272) > 0xFu )
        v2 = (_QWORD *)*v2;
      sub_14000D680(a1: &v17, a2: v2, a3: *(_QWORD *)(a1 + 264));
    }
    v3 = qword_14138A6F0;
    if ( qword_14138A6F0 == 0 )
    {
      if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
        __debugbreak();
      sub_1409E29B8(a1: 999);
      __debugbreak();
    }
    v4 = sub_1405FD2E0(a1: qword_14138A6F0, a2: v9, a3: "Network");
    if ( (unsigned __int8)sub_1406006A0(a1: v3, a2: v4, a3: 122) != 0 )
    {
      sub_1405F1D60(a1: &v6, a2: *(unsigned int *)(v4 + 12), a3: *(unsigned int *)(v4 + 8));
    }
    else
    {
      v7 = 0;
      v8 = 195948557;
    }
    v6 = &PXEngine::SafeActorPtrAs<CPXNetwork>::`vftable';
    if ( sub_1405F1EE0(a1: (__int64)&v6) != 0 )
    {
      v9[1] = 0;
      v9[2] = 0;
      v10 = 0;
      v9[0] = &PXEngine::ByteStreamWriter::`vftable';
      LODWORD(v6) = v16;
      if ( sub_1401D0820(a1: v9, a2: &v6) != 0
        && (v16 = (int)v6, sub_1402B4D00(a1: v9, a2: (__int64 *)&v17) != 0)
        && (LODWORD(v6) = v20, sub_1401D0820(a1: v9, a2: &v6) != 0) )
      {
        v20 = (int)v6;
        v11 = word_141313DC8;
        sub_140A255B0(a1: v12, a2: v9);
        v13 = v11;
        sub_140A255B0(a1: v14, a2: v12);
        v15 = 1;
        sub_140A25690(a1: v12);
      }
      else
      {
        v15 = 0;
      }
      sub_140A25690(a1: v9);
      sub_1407EE6B0(a1: &v13);
    }
    else if ( (unsigned __int8)sub_140059D90(
                                 a1: off_140FA22E0,
                                 a2: "EquipmentManager::RequestSaveWardrobeEquipmentSet: Could not find network") != 0 )
    {
      __debugbreak();
    }
    if ( v19 > 0xF )
    {
      v5 = (void *)v17;
      if ( v19 + 1 >= 0x1000 )
      {
        if ( (unsigned __int64)(v17 - *(_QWORD *)(v17 - 8) - 8) > 0x1F )
          __fastfail(5u);
        v5 = *(void **)(v17 - 8);
      }
      sub_1409DB4C0(lpMem: v5);
    }
  }
}