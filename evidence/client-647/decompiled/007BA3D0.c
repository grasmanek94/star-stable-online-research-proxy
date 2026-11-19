__int64 __fastcall sub_1407BA3D0(__int64 a1, float a2)
{
  __int64 result; // rax
  _QWORD v4[3]; // [rsp+20h] [rbp-88h] BYREF
  int v5; // [rsp+38h] [rbp-70h]
  __int16 v6; // [rsp+40h] [rbp-68h]
  _BYTE v7[32]; // [rsp+48h] [rbp-60h] BYREF
  __int16 v8; // [rsp+68h] [rbp-40h] BYREF
  _BYTE v9[56]; // [rsp+70h] [rbp-38h] BYREF
  float v10; // [rsp+B8h] [rbp+10h] BYREF

  v10 = a2;
  if ( *(_QWORD *)(a1 + 1504) != 0 )
  {
    v4[1] = 0;
    v4[2] = 0;
    v5 = 0;
    v4[0] = &PXEngine::ByteStreamWriter::`vftable';
    sub_140A25890(a1: v4, a2: &v10, a3: 4);
    v6 = word_141313C54;
    sub_140A255B0(a1: v7, a2: v4);
    v8 = v6;
    sub_140A255B0(a1: v9, a2: v7);
    v9[32] = 1;
    sub_140A25690(a1: v7);
    sub_140A25690(a1: v4);
    return sub_1407D6C20(a1, a2: &v8);
  }
  return result;
}