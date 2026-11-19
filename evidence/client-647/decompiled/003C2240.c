void __fastcall sub_1403C2240(__int64 a1, int a2)
{
  _QWORD v2[3]; // [rsp+20h] [rbp-88h] BYREF
  int v3; // [rsp+38h] [rbp-70h]
  __int16 v4; // [rsp+40h] [rbp-68h]
  _BYTE v5[32]; // [rsp+48h] [rbp-60h] BYREF
  __int16 v6; // [rsp+68h] [rbp-40h] BYREF
  _BYTE v7[32]; // [rsp+70h] [rbp-38h] BYREF
  char v8; // [rsp+90h] [rbp-18h]
  int v9; // [rsp+C0h] [rbp+18h] BYREF

  if ( *(_QWORD *)&nExitCode != 0 )
  {
    v2[1] = 0;
    v2[2] = 0;
    v3 = 0;
    v2[0] = &PXEngine::ByteStreamWriter::`vftable';
    v9 = a2;
    if ( sub_1401D0820(a1: v2, a2: &v9) != 0 )
    {
      v4 = word_141313D84;
      sub_140A255B0(a1: v5, a2: v2);
      v6 = v4;
      sub_140A255B0(a1: v7, a2: v5);
      v8 = 1;
      sub_140A25690(a1: v5);
    }
    else
    {
      v8 = 0;
    }
    sub_140A25690(a1: v2);
    sub_1407EE6B0(a1: &v6);
  }
}