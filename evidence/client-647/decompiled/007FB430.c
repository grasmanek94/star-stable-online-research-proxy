__int64 __fastcall sub_1407FB430(__int64 a1, __int64 a2, int a3)
{
  int v4; // edi
  _QWORD v6[3]; // [rsp+20h] [rbp-29h] BYREF
  int v7; // [rsp+38h] [rbp-11h]
  __int16 v8; // [rsp+40h] [rbp-9h]
  _BYTE v9[32]; // [rsp+48h] [rbp-1h] BYREF
  __int16 v10; // [rsp+68h] [rbp+1Fh] BYREF
  _BYTE v11[32]; // [rsp+70h] [rbp+27h] BYREF
  char v12; // [rsp+90h] [rbp+47h]
  int v13; // [rsp+C0h] [rbp+77h] BYREF

  v4 = *(_DWORD *)(a2 + 104);
  v6[1] = 0;
  v6[2] = 0;
  v7 = 0;
  v6[0] = &PXEngine::ByteStreamWriter::`vftable';
  v13 = a3;
  if ( sub_1401D0820(a1: v6, a2: &v13) != 0 && (v13 = v4, sub_1401D0820(a1: v6, a2: &v13) != 0) )
  {
    v8 = word_141314120;
    sub_140A255B0(a1: v9, a2: v6);
    v10 = v8;
    sub_140A255B0(a1: v11, a2: v9);
    v12 = 1;
    sub_140A25690(a1: v9);
  }
  else
  {
    v12 = 0;
  }
  sub_140A25690(a1: v6);
  return sub_1407F4180(a1, a2: &v10);
}