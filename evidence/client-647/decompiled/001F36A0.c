__int64 __fastcall sub_1401F36A0(__int64 a1, char a2)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rax
  void **v7; // [rsp+20h] [rbp-58h] BYREF
  int v8; // [rsp+28h] [rbp-50h]
  int v9; // [rsp+2Ch] [rbp-4Ch]
  _BYTE v10[16]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v11[56]; // [rsp+40h] [rbp-38h] BYREF
  char v12; // [rsp+88h] [rbp+10h] BYREF
  int v13; // [rsp+90h] [rbp+18h] BYREF

  if ( a2 == 0 && (*(_BYTE *)(a1 + 516) & 8) == 0 && *(_QWORD *)&nExitCode != 0 )
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
    if ( sub_1405F1EE0(a1: (__int64)&v7) != 0 )
    {
      v13 = *(_DWORD *)(a1 + 16);
      v12 = 3;
      v5 = sub_1401D56F0(a1: &unk_141313D38, a2: v11, a3: &v13, a4: &v12);
      sub_1407EE6B0(a1: v5);
    }
  }
  return sub_1401FDB80(a1);
}