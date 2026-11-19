void __fastcall sub_1403C1FB0(__int64 a1, int a2, int a3)
{
  _QWORD v4[3]; // [rsp+20h] [rbp-29h] BYREF
  int v5; // [rsp+38h] [rbp-11h]
  __int16 v6; // [rsp+40h] [rbp-9h]
  _BYTE v7[32]; // [rsp+48h] [rbp-1h] BYREF
  __int16 v8; // [rsp+68h] [rbp+1Fh] BYREF
  _BYTE v9[32]; // [rsp+70h] [rbp+27h] BYREF
  char v10; // [rsp+90h] [rbp+47h]
  int v11; // [rsp+C8h] [rbp+7Fh] BYREF

  if ( *(_QWORD *)&nExitCode != 0 )
  {
    v4[1] = 0;
    v4[2] = 0;
    v5 = 0;
    v4[0] = &PXEngine::ByteStreamWriter::`vftable';
    v11 = a2;
    if ( sub_1401D0820(a1: v4, a2: &v11) != 0 && (v11 = a3, sub_1401D0820(a1: v4, a2: &v11) != 0) )
    {
      v6 = word_141313D80;
      sub_140A255B0(a1: v7, a2: v4);
      v8 = v6;
      sub_140A255B0(a1: v9, a2: v7);
      v10 = 1;
      sub_140A25690(a1: v7);
    }
    else
    {
      v10 = 0;
    }
    sub_140A25690(a1: v4);
    sub_1407EE6B0(a1: &v8);
  }
}