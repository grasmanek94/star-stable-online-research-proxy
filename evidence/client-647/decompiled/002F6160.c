void __fastcall sub_1402F6160(__int64 a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // [rsp+20h] [rbp-59h] BYREF
  int v7; // [rsp+28h] [rbp-51h]
  int v8; // [rsp+2Ch] [rbp-4Dh]
  int v9; // [rsp+30h] [rbp-49h]
  int v10; // [rsp+34h] [rbp-45h]
  int v11; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v12[3]; // [rsp+40h] [rbp-39h] BYREF
  int v13; // [rsp+58h] [rbp-21h]
  _QWORD *v14; // [rsp+60h] [rbp-19h] BYREF
  __int16 v15; // [rsp+68h] [rbp-11h]
  _BYTE v16[32]; // [rsp+70h] [rbp-9h] BYREF
  __int16 v17; // [rsp+90h] [rbp+17h] BYREF
  _BYTE v18[32]; // [rsp+98h] [rbp+1Fh] BYREF
  char v19; // [rsp+B8h] [rbp+3Fh]

  if ( *(_QWORD *)&nExitCode != 0 )
  {
    byte_141310980 = 0;
    v7 = a2;
    v8 = a3;
    v9 = a5;
    v10 = a6;
    v11 = a4;
    v12[1] = 0;
    v12[2] = 0;
    v13 = 0;
    v12[0] = &PXEngine::ByteStreamWriter::`vftable';
    v14 = v12;
    v6 = a2;
    if ( sub_1401D0820(a1: v12, a2: &v6) != 0
      && (v7 = v6, v6 = v8, sub_1401D0820(a1: v12, a2: &v6) != 0)
      && (v8 = v6, v6 = v9, sub_1401D0820(a1: v12, a2: &v6) != 0)
      && (v9 = v6, v6 = v10, sub_1401D0820(a1: v12, a2: &v6) != 0)
      && (v10 = v6, (unsigned __int8)sub_1402B7CD0(a1: &v14, a2: &v11) != 0) )
    {
      v15 = word_141313D98;
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
    sub_1407EE6B0(a1: &v17);
  }
}