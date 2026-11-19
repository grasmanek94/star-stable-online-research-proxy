__int64 __fastcall sub_14034D5F0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 v7; // r14
  __int64 v8; // rbp
  __int64 v9; // rax
  void **v10; // [rsp+40h] [rbp-68h] BYREF
  int v11; // [rsp+48h] [rbp-60h]
  int v12; // [rsp+4Ch] [rbp-5Ch]
  _BYTE v13[16]; // [rsp+50h] [rbp-58h] BYREF
  char v14; // [rsp+60h] [rbp-48h] BYREF
  int v15; // [rsp+B8h] [rbp+10h] BYREF

  result = sub_1405F1EE0(a1: a2 + 72);
  v5 = result;
  if ( result != 0 )
  {
    result = sub_14032EEC0(a1: result);
    if ( (_DWORD)result != 0 && *(_QWORD *)&nExitCode != 0 )
    {
      sub_1405F1D80(a1: a1 + 264, a2: a2 + 72);
      *(_BYTE *)(a1 + 936) = *(_BYTE *)(a2 + 94);
      v6 = qword_14138A6F0;
      if ( qword_14138A6F0 == 0 )
      {
        if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
          __debugbreak();
        sub_1409E29B8(a1: 999);
        __debugbreak();
      }
      v7 = sub_1405FD2E0(a1: qword_14138A6F0, a2: v13, a3: "Network");
      if ( (unsigned __int8)sub_1406006A0(a1: v6, a2: v7, a3: 122) != 0 )
      {
        sub_1405F1D60(a1: &v10, a2: *(unsigned int *)(v7 + 12), a3: *(unsigned int *)(v7 + 8));
      }
      else
      {
        v11 = 0;
        v12 = 195948557;
      }
      v10 = &PXEngine::SafeActorPtrAs<CPXNetwork>::`vftable';
      v8 = sub_1405F1EE0(a1: (__int64)&v10);
      if ( v8 != 0 )
      {
        v15 = *(_DWORD *)(v5 + 296);
        v9 = sub_14034C0B0(
               a1: (unsigned int)&unk_141313CF4,
               a2: (unsigned int)&v14,
               a3: (unsigned int)&v15,
               a4: (int)a2 + 8,
               a5: a2 + 40,
               a6: a2 + 88,
               a7: a2 + 92,
               a8: a2 + 93);
        sub_1407D6C20(a1: v8, a2: v9);
      }
      return sub_140684540(a1: *(_QWORD *)(*(_QWORD *)&nExitCode + 1000LL), a2: 7, a3: 0, a4: a1);
    }
  }
  return result;
}