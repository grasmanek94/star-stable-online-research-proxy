__int64 __fastcall sub_14031D2D0(__int64 a1, int a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-88h] BYREF
  int v4; // [rsp+38h] [rbp-70h]
  __int16 v5; // [rsp+40h] [rbp-68h]
  _BYTE v6[32]; // [rsp+48h] [rbp-60h] BYREF
  __int16 v7; // [rsp+68h] [rbp-40h] BYREF
  _BYTE v8[32]; // [rsp+70h] [rbp-38h] BYREF
  char v9; // [rsp+90h] [rbp-18h]
  int v10; // [rsp+B8h] [rbp+10h] BYREF

  v3[1] = 0;
  v3[2] = 0;
  v4 = 0;
  v3[0] = &PXEngine::ByteStreamWriter::`vftable';
  v10 = a2;
  if ( sub_1401D0820(a1: v3, a2: &v10) != 0 )
  {
    v5 = word_141313D6C;
    sub_140A255B0(a1: v6, a2: v3);
    v7 = v5;
    sub_140A255B0(a1: v8, a2: v6);
    v9 = 1;
    sub_140A25690(a1: v6);
  }
  else
  {
    v9 = 0;
  }
  sub_140A25690(a1: v3);
  return sub_1407EE6B0(a1: &v7);
}