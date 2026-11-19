__int64 __fastcall sub_1407D7460(__int64 a1, int a2, int a3, int a4, int a5)
{
  __int64 v5; // rax
  int v9; // [rsp+28h] [rbp-49h]
  int v10; // [rsp+2Ch] [rbp-45h]
  int v11; // [rsp+30h] [rbp-41h] BYREF
  _QWORD v12[3]; // [rsp+38h] [rbp-39h] BYREF
  int v13; // [rsp+50h] [rbp-21h]
  _QWORD *v14; // [rsp+58h] [rbp-19h] BYREF
  __int16 v15; // [rsp+60h] [rbp-11h]
  _BYTE v16[32]; // [rsp+68h] [rbp-9h] BYREF
  __int16 v17; // [rsp+88h] [rbp+17h] BYREF
  _BYTE v18[32]; // [rsp+90h] [rbp+1Fh] BYREF
  char v19; // [rsp+B0h] [rbp+3Fh]
  int v20; // [rsp+E8h] [rbp+77h] BYREF

  v20 = a4;
  v11 = a4;
  v10 = a5;
  v5 = sub_140491070();
  v9 = sub_140490C20(a1: v5);
  v12[1] = 0;
  v12[2] = 0;
  v13 = 0;
  v12[0] = &PXEngine::ByteStreamWriter::`vftable';
  v14 = v12;
  v20 = a2;
  if ( sub_1401D0820(a1: v12, a2: &v20) != 0
    && (v20 = a3, sub_1401D0820(a1: v12, a2: &v20) != 0)
    && (v20 = v9, sub_1401D0820(a1: v12, a2: &v20) != 0)
    && (v20 = v10, sub_1401D0820(a1: v12, a2: &v20) != 0)
    && (unsigned __int8)sub_1402B7CD0(a1: &v14, a2: &v11) != 0 )
  {
    v15 = word_141313D5C;
    sub_140A255B0(a1: v16, a2: v12);
    v17 = v15;
    sub_140A255B0(a1: v18, a2: v16);
    v19 = 1;
    sub_140A25690(a1: v16);
  }
  else
  {
    v19 = 0;
  }
  sub_140A25690(a1: v12);
  return sub_1407EE6B0(a1: &v17);
}