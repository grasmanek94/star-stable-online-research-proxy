void __fastcall sub_14045AA70(__int64 a1)
{
  _QWORD v2[3]; // [rsp+20h] [rbp-88h] BYREF
  int v3; // [rsp+38h] [rbp-70h]
  __int16 v4; // [rsp+40h] [rbp-68h]
  _BYTE v5[32]; // [rsp+48h] [rbp-60h] BYREF
  __int16 v6; // [rsp+68h] [rbp-40h] BYREF
  _BYTE v7[56]; // [rsp+70h] [rbp-38h] BYREF

  if ( *(_QWORD *)(a1 + 1176) == 0 && (unsigned __int8)sub_140059CA0(a1: off_140F991A0) != 0 )
    __debugbreak();
  if ( *(_QWORD *)(a1 + 1176) != 0 )
  {
    v2[1] = 0;
    v2[2] = 0;
    v3 = 0;
    v2[0] = &PXEngine::ByteStreamWriter::`vftable';
    v4 = word_141313CD0;
    sub_140A255B0(a1: v5, a2: v2);
    v6 = v4;
    sub_140A255B0(a1: v7, a2: v5);
    v7[32] = 1;
    sub_140A25690(a1: v5);
    sub_140A25690(a1: v2);
    sub_1407EE6B0(a1: &v6);
  }
}