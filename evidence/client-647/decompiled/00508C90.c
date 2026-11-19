__int64 __fastcall sub_140508C90(__int64 a1)
{
  __int64 result; // rax
  _QWORD v3[3]; // [rsp+20h] [rbp-88h] BYREF
  int v4; // [rsp+38h] [rbp-70h]
  __int16 v5; // [rsp+40h] [rbp-68h]
  _BYTE v6[32]; // [rsp+48h] [rbp-60h] BYREF
  __int16 v7; // [rsp+68h] [rbp-40h] BYREF
  _BYTE v8[56]; // [rsp+70h] [rbp-38h] BYREF

  result = sub_140503750(a1: a1 + 216);
  if ( (_BYTE)result != 0 )
  {
    v3[1] = 0;
    v3[2] = 0;
    v4 = 0;
    v3[0] = &PXEngine::ByteStreamWriter::`vftable';
    sub_140A25890(a1: v3, a2: a1 + 224, a3: 1);
    v5 = word_141314144;
    sub_140A255B0(a1: v6, a2: v3);
    v7 = v5;
    sub_140A255B0(a1: v8, a2: v6);
    v8[32] = 1;
    sub_140A25690(a1: v6);
    sub_140A25690(a1: v3);
    return sub_1407EE6B0(a1: &v7);
  }
  return result;
}