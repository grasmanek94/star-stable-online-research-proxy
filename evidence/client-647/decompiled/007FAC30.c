__int64 __fastcall sub_1407FAC30(__int64 a1, __int64 a2)
{
  int v3; // eax
  _QWORD v5[3]; // [rsp+20h] [rbp-88h] BYREF
  int v6; // [rsp+38h] [rbp-70h]
  __int16 v7; // [rsp+40h] [rbp-68h]
  _BYTE v8[32]; // [rsp+48h] [rbp-60h] BYREF
  __int16 v9; // [rsp+68h] [rbp-40h] BYREF
  _BYTE v10[32]; // [rsp+70h] [rbp-38h] BYREF
  char v11; // [rsp+90h] [rbp-18h]
  int v12; // [rsp+B8h] [rbp+10h] BYREF

  v3 = *(_DWORD *)(a2 + 16);
  v5[1] = 0;
  v5[2] = 0;
  v6 = 0;
  v5[0] = &PXEngine::ByteStreamWriter::`vftable';
  v12 = v3;
  if ( sub_1401D0820(a1: v5, a2: &v12) != 0 )
  {
    v7 = word_141314114;
    sub_140A255B0(a1: v8, a2: v5);
    v9 = v7;
    sub_140A255B0(a1: v10, a2: v8);
    v11 = 1;
    sub_140A25690(a1: v8);
  }
  else
  {
    v11 = 0;
  }
  sub_140A25690(a1: v5);
  return sub_1407F4180(a1, a2: &v9);
}