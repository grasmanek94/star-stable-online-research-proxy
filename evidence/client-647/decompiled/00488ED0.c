_QWORD *__fastcall sub_140488ED0(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  char v5; // di
  __int64 v7; // xmm6_8
  char v9; // al
  __int64 v11; // [rsp+30h] [rbp-58h] BYREF
  int v12; // [rsp+38h] [rbp-50h]
  char v13; // [rsp+3Ch] [rbp-4Ch]
  _BYTE v14[16]; // [rsp+40h] [rbp-48h] BYREF

  v3 = *(_DWORD *)(a2 + 140);
  v5 = *(_BYTE *)(a2 + 144);
  v7 = *(_QWORD *)(a2 + 132);
  sub_1405F1D40(a1: (__int64)v14, a2: a3 + 120);
  v11 = v7;
  v12 = v3;
  v13 = v5;
  v9 = sub_1400AE640(a1: a3);
  return sub_1404889A0(a1, a2: a2 + 152, a3: v9, a4: (int)v14, a5: 2u, a6: (__int64)&v11);
}