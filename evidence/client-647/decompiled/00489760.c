__int64 __fastcall sub_140489760(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  __int64 v7; // rdi
  int v8; // r14d
  __int64 v9; // rsi
  int v10; // eax
  void **v11; // [rsp+30h] [rbp-71h] BYREF
  int v12; // [rsp+38h] [rbp-69h]
  int v13; // [rsp+3Ch] [rbp-65h]
  _QWORD v14[3]; // [rsp+40h] [rbp-61h] BYREF
  int v15; // [rsp+58h] [rbp-49h]
  __int16 v16; // [rsp+60h] [rbp-41h]
  _BYTE v17[32]; // [rsp+68h] [rbp-39h] BYREF
  __int16 v18; // [rsp+88h] [rbp-19h] BYREF
  _BYTE v19[32]; // [rsp+90h] [rbp-11h] BYREF
  char v20; // [rsp+B0h] [rbp+Fh]
  int v21; // [rsp+110h] [rbp+6Fh] BYREF

  switch ( a3 )
  {
    case 342015:
      sub_14048B840(a1, a2: *(unsigned int *)(a1 + 240));
      break;
    case 342017:
      if ( *(_BYTE *)(a1 + 473) == 0 )
      {
        *(_BYTE *)(a1 + 473) = 1;
        v7 = qword_14138A6F0;
        if ( qword_14138A6F0 == 0 )
        {
          if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
            __debugbreak();
          sub_1409E29B8(a1: 999);
          __debugbreak();
        }
        v8 = *(_DWORD *)(a1 + 240);
        v9 = sub_1405FD2E0(a1: qword_14138A6F0, a2: v14, a3: "Network");
        if ( (unsigned __int8)sub_1406006A0(a1: v7, a2: v9, a3: 122) != 0 )
        {
          sub_1405F1D60(a1: &v11, a2: *(unsigned int *)(v9 + 12), a3: *(unsigned int *)(v9 + 8));
        }
        else
        {
          v12 = 0;
          v13 = 195948557;
        }
        v11 = &PXEngine::SafeActorPtrAs<CPXNetwork>::`vftable';
        if ( sub_1405F1EE0(a1: (__int64)&v11) != 0 )
        {
          v10 = *(_DWORD *)(a1 + 244);
          v14[1] = 0;
          v14[2] = 0;
          v15 = 0;
          v14[0] = &PXEngine::ByteStreamWriter::`vftable';
          v21 = v10;
          if ( sub_1401D0820(a1: v14, a2: &v21) != 0 && (v21 = v8, sub_1401D0820(a1: v14, a2: &v21) != 0) )
          {
            v16 = word_141313DD0;
            sub_140A255B0(a1: v17, a2: v14);
            v18 = v16;
            sub_140A255B0(a1: v19, a2: v17);
            v20 = 1;
            sub_140A25690(a1: v17);
          }
          else
          {
            v20 = 0;
          }
          sub_140A25690(a1: v14);
          sub_1407EE6B0(a1: &v18);
        }
        else if ( (unsigned __int8)sub_140059D90(
                                     a1: off_140FA23A0,
                                     a2: "EquipmentManager::RequestLoadWardrobeEquipmentSet: Could not find network") != 0 )
        {
          __debugbreak();
        }
      }
      break;
    case 342019:
      sub_14048ABC0();
      break;
    default:
      return sub_1400B0B50(a1, a2, a3, a4, a5);
  }
  return 1;
}