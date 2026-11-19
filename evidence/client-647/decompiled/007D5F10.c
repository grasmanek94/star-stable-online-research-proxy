unsigned __int16 *__fastcall sub_1407D5F10(__int64 a1, int a2, float a3, char a4)
{
  char (__fastcall *v5)(__int64, __int64, __int64); // r9
  char (__fastcall *v6)(__int64, __int64, __int64); // r9
  unsigned __int16 *result; // rax
  float v8; // [rsp+24h] [rbp-35h] BYREF
  char v9[8]; // [rsp+28h] [rbp-31h] BYREF
  _QWORD v10[3]; // [rsp+30h] [rbp-29h] BYREF
  int v11; // [rsp+48h] [rbp-11h]
  unsigned __int16 *v12; // [rsp+50h] [rbp-9h]
  unsigned __int16 v13; // [rsp+58h] [rbp-1h] BYREF
  _BYTE v14[32]; // [rsp+60h] [rbp+7h] BYREF
  char v15; // [rsp+80h] [rbp+27h]
  __int16 v16; // [rsp+88h] [rbp+2Fh]
  _BYTE v17[32]; // [rsp+90h] [rbp+37h] BYREF
  int v18; // [rsp+D8h] [rbp+7Fh] BYREF

  v8 = a3;
  v9[0] = a4;
  v10[1] = 0;
  v10[2] = 0;
  v11 = 0;
  v10[0] = &PXEngine::ByteStreamWriter::`vftable';
  v18 = a2;
  if ( sub_1401D0820(a1: v10, a2: &v18) == 0 )
    goto LABEL_9;
  v5 = *(char (__fastcall **)(__int64, __int64, __int64))(v10[0] + 16LL);
  if ( v5 == sub_1401F6C10 )
  {
    sub_140A25890(a1: v10, a2: &v8, a3: 4);
  }
  else if ( v5(a1: (__int64)v10, a2: (__int64)&v8, a3: 4) == 0 )
  {
    goto LABEL_9;
  }
  v6 = *(char (__fastcall **)(__int64, __int64, __int64))(v10[0] + 16LL);
  if ( v6 == sub_1401F6C10 )
  {
    sub_140A25890(a1: v10, a2: v9, a3: 1);
LABEL_8:
    v16 = word_141313E28;
    sub_140A255B0(a1: v17, a2: v10);
    v13 = v16;
    sub_140A255B0(a1: v14, a2: v17);
    v15 = 1;
    sub_140A25690(a1: v17);
    goto LABEL_10;
  }
  if ( v6(a1: (__int64)v10, a2: (__int64)v9, a3: 1) != 0 )
    goto LABEL_8;
LABEL_9:
  v15 = 0;
LABEL_10:
  sub_140A25690(a1: v10);
  result = &v13;
  v12 = &v13;
  if ( v15 != 0 )
  {
    result = (unsigned __int16 *)sub_1407D5600(a1, a2: v13, a3: v14);
    if ( v15 != 0 )
      return (unsigned __int16 *)sub_140A25690(a1: v14);
  }
  return result;
}