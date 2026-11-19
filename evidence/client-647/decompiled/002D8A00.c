void __fastcall sub_1402D8A00(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rdi
  unsigned int v6; // eax
  void **v7; // [rsp+20h] [rbp-49h] BYREF
  int v8; // [rsp+28h] [rbp-41h]
  int v9; // [rsp+2Ch] [rbp-3Dh]
  _QWORD v10[3]; // [rsp+30h] [rbp-39h] BYREF
  int v11; // [rsp+48h] [rbp-21h]
  __int16 v12; // [rsp+50h] [rbp-19h]
  _BYTE v13[32]; // [rsp+58h] [rbp-11h] BYREF
  __int16 v14; // [rsp+78h] [rbp+Fh] BYREF
  _BYTE v15[32]; // [rsp+80h] [rbp+17h] BYREF
  char v16; // [rsp+A0h] [rbp+37h]
  __int16 v17; // [rsp+D0h] [rbp+67h] BYREF

  if ( *(_BYTE *)(a1 + 538) != 0 && *(_QWORD *)&nExitCode != 0 )
  {
    if ( (*(_BYTE *)(a2 + 441) & 1) != 0 )
    {
      sub_1402D73E0(a1, a2);
    }
    else
    {
      v3 = qword_14138A6F0;
      if ( qword_14138A6F0 == 0 )
      {
        if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
          __debugbreak();
        sub_1409E29B8(a1: 999);
        __debugbreak();
      }
      v4 = sub_1405FD2E0(a1: qword_14138A6F0, a2: v10, a3: "Network");
      if ( (unsigned __int8)sub_1406006A0(a1: v3, a2: v4, a3: 122) != 0 )
      {
        sub_1405F1D60(a1: &v7, a2: *(unsigned int *)(v4 + 12), a3: *(unsigned int *)(v4 + 8));
      }
      else
      {
        v8 = 0;
        v9 = 195948557;
      }
      v7 = &PXEngine::SafeActorPtrAs<CPXNetwork>::`vftable';
      v5 = sub_1405F1EE0(a1: (__int64)&v7);
      if ( v5 != 0 )
      {
        v6 = *(_DWORD *)(a2 + 16);
        if ( v6 <= 0xFFFF )
        {
          v10[1] = 0;
          v10[2] = 0;
          v11 = 0;
          v10[0] = &PXEngine::ByteStreamWriter::`vftable';
          v17 = v6;
          if ( sub_1402D2B10(a1: v10, a2: &v17) != 0 )
          {
            v12 = word_141313C80;
            sub_140A255B0(a1: v13, a2: v10);
            v14 = v12;
            sub_140A255B0(a1: v15, a2: v13);
            v16 = 1;
            sub_140A25690(a1: v13);
          }
          else
          {
            v16 = 0;
          }
          sub_140A25690(a1: v10);
          sub_1407D6C20(a1: v5, a2: &v14);
        }
        else if ( (unsigned __int8)sub_140059D90(a1: off_140F68BB0, a2: "locationId exceed uin16 limits!") != 0 )
        {
          __debugbreak();
        }
      }
    }
  }
}