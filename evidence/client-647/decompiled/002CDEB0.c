__int64 __fastcall sub_1402CDEB0(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rbx
  int v9; // eax
  void **v10; // [rsp+20h] [rbp-69h] BYREF
  int v11; // [rsp+28h] [rbp-61h]
  int v12; // [rsp+2Ch] [rbp-5Dh]
  _QWORD v13[3]; // [rsp+30h] [rbp-59h] BYREF
  int v14; // [rsp+48h] [rbp-41h]
  __int16 v15; // [rsp+50h] [rbp-39h]
  _BYTE v16[32]; // [rsp+58h] [rbp-31h] BYREF
  __int16 v17; // [rsp+78h] [rbp-11h] BYREF
  _BYTE v18[32]; // [rsp+80h] [rbp-9h] BYREF
  char v19; // [rsp+A0h] [rbp+17h]
  int v20; // [rsp+108h] [rbp+7Fh] BYREF

  result = sub_1402CE670();
  v5 = result;
  if ( result != 0 )
  {
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
    if ( v8 == 0 )
    {
      if ( (unsigned __int8)sub_140059CA0(a1: off_140F67800) != 0 )
        __debugbreak();
      sub_1409E29B8(a1: 999);
      __debugbreak();
    }
    v9 = *(_DWORD *)(v5 + 16);
    v13[1] = 0;
    v13[2] = 0;
    v14 = 0;
    v13[0] = &PXEngine::ByteStreamWriter::`vftable';
    v20 = v9;
    if ( sub_1401D0820(a1: v13, a2: &v20) != 0 && (v20 = a3, sub_1401D0820(a1: v13, a2: &v20) != 0) )
    {
      v15 = word_141313D08;
      sub_140A255B0(a1: v16, a2: v13);
      v17 = v15;
      sub_140A255B0(a1: v18, a2: v16);
      v19 = 1;
      sub_140A25690(a1: v16);
    }
    else
    {
      v19 = 0;
    }
    sub_140A25690(a1: v13);
    return sub_1407D6C20(a1: v8, a2: &v17);
  }
  return result;
}