__int64 sub_1402F77E0()
{
  _QWORD v1[3]; // [rsp+20h] [rbp-88h] BYREF
  int v2; // [rsp+38h] [rbp-70h]
  __int16 v3; // [rsp+40h] [rbp-68h]
  _BYTE v4[32]; // [rsp+48h] [rbp-60h] BYREF
  __int16 v5; // [rsp+68h] [rbp-40h] BYREF
  _BYTE v6[56]; // [rsp+70h] [rbp-38h] BYREF

  v1[1] = 0;
  v1[2] = 0;
  v2 = 0;
  v1[0] = &PXEngine::ByteStreamWriter::`vftable';
  v3 = word_141313DC4;
  sub_140A255B0(a1: v4, a2: v1);
  v5 = v3;
  sub_140A255B0(a1: v6, a2: v4);
  v6[32] = 1;
  sub_140A25690(a1: v4);
  sub_140A25690(a1: v1);
  return sub_1407EE6B0(a1: &v5);
}