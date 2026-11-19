__int64 __fastcall sub_1407AA7A0(__int64 a1, __int64 a2)
{
  _QWORD v4[3]; // [rsp+28h] [rbp-30h] BYREF
  int v5; // [rsp+40h] [rbp-18h]

  v4[1] = 0;
  v4[2] = 0;
  v5 = 0;
  v4[0] = &PXEngine::ByteStreamWriter::`vftable';
  if ( (unsigned __int8)sub_140A4BF80(a1: a2, a2: v4) != 0 )
  {
    sub_140A255B0(a1, a2: (__int64)v4);
    *(_BYTE *)(a1 + 32) = 1;
  }
  else
  {
    *(_BYTE *)(a1 + 32) = 0;
  }
  sub_140A25690(a1: (__int64)v4);
  return a1;
}