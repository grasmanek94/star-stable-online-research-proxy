unsigned __int16 *__fastcall sub_1407D5E00(__int64 a1, int a2, char a3, char a4)
{
  unsigned __int16 *result; // rax
  char v6; // [rsp+24h] [rbp-35h] BYREF
  char v7[3]; // [rsp+25h] [rbp-34h] BYREF
  _QWORD v8[3]; // [rsp+28h] [rbp-31h] BYREF
  int v9; // [rsp+40h] [rbp-19h]
  unsigned __int16 *v10; // [rsp+48h] [rbp-11h]
  unsigned __int16 v11; // [rsp+50h] [rbp-9h] BYREF
  _BYTE v12[32]; // [rsp+58h] [rbp-1h] BYREF
  char v13; // [rsp+78h] [rbp+1Fh]
  __int16 v14; // [rsp+80h] [rbp+27h]
  _BYTE v15[40]; // [rsp+88h] [rbp+2Fh] BYREF
  int v16; // [rsp+D0h] [rbp+77h] BYREF

  v6 = a3;
  v7[0] = a4;
  v8[1] = 0;
  v8[2] = 0;
  v9 = 0;
  v8[0] = &PXEngine::ByteStreamWriter::`vftable';
  v16 = a2;
  if ( sub_1401D0820(a1: v8, a2: &v16) != 0
    && (unsigned __int8)sub_1402B8840(a1: v8, a2: &v6) != 0
    && (unsigned __int8)sub_1402B8840(a1: v8, a2: v7) != 0 )
  {
    v14 = word_141313E24;
    sub_140A255B0(a1: v15, a2: v8);
    v11 = v14;
    sub_140A255B0(a1: v12, a2: v15);
    v13 = 1;
    sub_140A25690(a1: v15);
  }
  else
  {
    v13 = 0;
  }
  sub_140A25690(a1: v8);
  result = &v11;
  v10 = &v11;
  if ( v13 != 0 )
  {
    result = (unsigned __int16 *)sub_1407D5600(a1, a2: v11, a3: v12);
    if ( v13 != 0 )
      return (unsigned __int16 *)sub_140A25690(a1: v12);
  }
  return result;
}