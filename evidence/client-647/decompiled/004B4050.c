__int64 __fastcall sub_1404B4050(__int64 a1, int a2, char a3)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // r14
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v11; // r14
  __int64 v12; // rbx
  void **v14; // [rsp+20h] [rbp-69h] BYREF
  int v15; // [rsp+28h] [rbp-61h]
  int v16; // [rsp+2Ch] [rbp-5Dh]
  void **v17; // [rsp+30h] [rbp-59h] BYREF
  __int64 v18; // [rsp+38h] [rbp-51h]
  __int64 v19; // [rsp+40h] [rbp-49h]
  int v20; // [rsp+48h] [rbp-41h]
  __int16 v21; // [rsp+50h] [rbp-39h]
  _BYTE v22[32]; // [rsp+58h] [rbp-31h] BYREF
  __int16 v23; // [rsp+78h] [rbp-11h] BYREF
  _BYTE v24[32]; // [rsp+80h] [rbp-9h] BYREF
  char v25; // [rsp+A0h] [rbp+17h]
  int v26; // [rsp+F8h] [rbp+6Fh] BYREF

  sub_1404AC650(a1: a1 + 456);
  v6 = *(_QWORD *)(a1 + 552);
  if ( v6 != *(_QWORD *)(a1 + 560) )
    *(_QWORD *)(a1 + 560) = v6;
  v7 = qword_14138A6F0;
  if ( qword_14138A6F0 == 0 )
  {
    if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  v8 = sub_1405FD2E0(a1: qword_14138A6F0, a2: &v17, a3: "Network");
  if ( (unsigned __int8)sub_1406006A0(a1: v7, a2: v8, a3: 122) != 0 )
  {
    sub_1405F1D60(a1: &v14, a2: *(unsigned int *)(v8 + 12), a3: *(unsigned int *)(v8 + 8));
  }
  else
  {
    v15 = 0;
    v16 = 195948557;
  }
  v14 = &PXEngine::SafeActorPtrAs<CPXNetwork>::`vftable';
  v9 = sub_1405F1EE0(a1: (__int64)&v14);
  if ( v9 != 0 )
  {
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v17 = &PXEngine::ByteStreamWriter::`vftable';
    v26 = a2;
    if ( sub_1401D0820(a1: &v17, a2: &v26) != 0 )
    {
      v21 = word_1413141A0;
      sub_140A255B0(a1: v22, a2: &v17);
      v23 = v21;
      sub_140A255B0(a1: v24, a2: v22);
      v25 = 1;
      sub_140A25690(a1: v22);
    }
    else
    {
      v25 = 0;
    }
    sub_140A25690(a1: &v17);
    sub_1407D6BC0(a1: v9, a2: &v23);
  }
  if ( a3 != 0 )
  {
    v10 = qword_14138A6F0;
    if ( qword_14138A6F0 == 0 )
    {
      if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
        __debugbreak();
      sub_1409E29B8(a1: 999);
      __debugbreak();
    }
    v11 = sub_1405FD2E0(a1: qword_14138A6F0, a2: &v17, a3: "Network");
    if ( (unsigned __int8)sub_1406006A0(a1: v10, a2: v11, a3: 122) != 0 )
    {
      sub_1405F1D60(a1: &v14, a2: *(unsigned int *)(v11 + 12), a3: *(unsigned int *)(v11 + 8));
    }
    else
    {
      v15 = 0;
      v16 = 195948557;
    }
    v14 = &PXEngine::SafeActorPtrAs<CPXNetwork>::`vftable';
    v12 = sub_1405F1EE0(a1: (__int64)&v14);
    if ( v12 != 0 )
    {
      if ( (unsigned __int8)sub_140059D90(a1: off_140FAD378, a2: "RequestGetOwnedCustomization") != 0 )
        __debugbreak();
      v18 = 0;
      v19 = 0;
      v20 = 0;
      v17 = &PXEngine::ByteStreamWriter::`vftable';
      v21 = word_1413141A8;
      sub_140A255B0(a1: v22, a2: &v17);
      v23 = v21;
      sub_140A255B0(a1: v24, a2: v22);
      v25 = 1;
      sub_140A25690(a1: v22);
      sub_140A25690(a1: &v17);
      sub_1407D6BC0(a1: v12, a2: &v23);
    }
  }
  *(_BYTE *)(a1 + 640) = 0;
  return sub_1400BA030(a1);
}