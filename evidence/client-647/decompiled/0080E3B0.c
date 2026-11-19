__int64 __fastcall sub_14080E3B0(__int64 a1, __int64 a2, unsigned int a3)
{
  int v4; // esi
  void **v7; // [rsp+38h] [rbp-30h] BYREF
  __int64 v8; // [rsp+40h] [rbp-28h]
  __int64 v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+50h] [rbp-18h]
  int v11; // [rsp+80h] [rbp+18h] BYREF
  int v12; // [rsp+88h] [rbp+20h] BYREF
  char v13; // [rsp+8Ch] [rbp+24h]

  v4 = a2;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v7 = &PXEngine::ByteStreamWriter::`vftable';
  v11 = 0;
  if ( a3 >= 4
    && (sub_140083990(a1: &v11, a2, a3: 4),
        sub_140A257D0(a1: (__int64)&v7, a2: v11),
        sub_140A4C5E0(a1: (unsigned int)&v12, a2: v8, a3: v11, a4: v4 + 4, a5: a3 - 4),
        v13 != 0)
    && v12 == v11 )
  {
    sub_140A25780(a1: (__int64)&v7, a2: v11);
    sub_140A255B0(a1, a2: (__int64)&v7);
    *(_BYTE *)(a1 + 32) = 1;
  }
  else
  {
    *(_BYTE *)(a1 + 32) = 0;
  }
  sub_140A25690(a1: (__int64)&v7);
  return a1;
}