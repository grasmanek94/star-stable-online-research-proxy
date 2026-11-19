__int64 __fastcall sub_140488930(int a1, int a2, __int64 a3)
{
  unsigned __int8 v6; // al
  __int64 v8; // [rsp+30h] [rbp-48h] BYREF
  int v9; // [rsp+38h] [rbp-40h]
  char v10; // [rsp+3Ch] [rbp-3Ch]
  _BYTE v11[56]; // [rsp+40h] [rbp-38h] BYREF

  sub_1405F1D40(a1: (__int64)v11, a2: a3 + 120);
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v6 = sub_1400AE640(a1: a3);
  return sub_1404889A0(a1, a2: a2 + 96, a3: v6, a4: (unsigned int)v11, a5: 1, a6: (__int64)&v8);
}