char __fastcall sub_1403D3230(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r14
  __int64 v9; // rax
  void **v11; // [rsp+20h] [rbp-69h] BYREF
  int v12; // [rsp+28h] [rbp-61h]
  int v13; // [rsp+2Ch] [rbp-5Dh]
  _QWORD v14[3]; // [rsp+30h] [rbp-59h] BYREF
  int v15; // [rsp+48h] [rbp-41h]
  __int16 v16; // [rsp+50h] [rbp-39h]
  _BYTE v17[32]; // [rsp+58h] [rbp-31h] BYREF
  __int16 v18; // [rsp+78h] [rbp-11h] BYREF
  _BYTE v19[32]; // [rsp+80h] [rbp-9h] BYREF
  char v20; // [rsp+A0h] [rbp+17h]
  _BYTE v21[24]; // [rsp+A8h] [rbp+1Fh] BYREF
  unsigned int v22; // [rsp+100h] [rbp+77h] BYREF

  if ( *(_QWORD *)&nExitCode != 0 )
  {
    v4 = sub_1403D07C0(a1, a2: v21, a3: a2);
    v5 = sub_1405F1EE0(a1: v4);
    v6 = v5;
    if ( v5 != 0 )
    {
      if ( *(_DWORD *)(v5 + 372) == 0 )
        return 1;
      v7 = qword_14138A6F0;
      if ( qword_14138A6F0 == 0 )
      {
        if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
          __debugbreak();
        sub_1409E29B8(a1: 999);
        __debugbreak();
      }
      v8 = sub_1405FD2E0(a1: qword_14138A6F0, a2: v14, a3: "Network");
      if ( (unsigned __int8)sub_1406006A0(a1: v7, a2: v8, a3: 122) != 0 )
      {
        sub_1405F1D60(a1: &v11, a2: *(unsigned int *)(v8 + 12), a3: *(unsigned int *)(v8 + 8));
      }
      else
      {
        v12 = 0;
        v13 = 195948557;
      }
      v11 = &PXEngine::SafeActorPtrAs<CPXNetwork>::`vftable';
      if ( sub_1405F1EE0(a1: (__int64)&v11) != 0 )
      {
        v14[1] = 0;
        v14[2] = 0;
        v15 = 0;
        v14[0] = &PXEngine::ByteStreamWriter::`vftable';
        v22 = a2;
        if ( sub_1401D0820(a1: v14, a2: &v22) != 0 )
        {
          v16 = word_141313D30;
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
        v9 = sub_1403D0AE0(a1: a1 + 216);
        sub_1402B7BF0(a1: v9, a2: v6 + 376);
        return 1;
      }
    }
    else if ( (unsigned __int8)sub_140059D90(a1: off_140F8A6D0, a2: "Failed to unlock collection with id %u", a2) != 0 )
    {
      __debugbreak();
    }
  }
  return 0;
}