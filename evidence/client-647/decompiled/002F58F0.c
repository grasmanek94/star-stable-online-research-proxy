void __fastcall sub_1402F58F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v7; // esi
  int v8; // r14d
  int v9; // r12d
  int v10; // r13d
  int v11; // r15d
  int v12; // eax
  char **v13; // rcx
  int v14; // [rsp+20h] [rbp-A1h] BYREF
  int v15; // [rsp+28h] [rbp-99h]
  int v16; // [rsp+2Ch] [rbp-95h]
  int v17; // [rsp+30h] [rbp-91h]
  int v18; // [rsp+34h] [rbp-8Dh]
  int v19; // [rsp+38h] [rbp-89h] BYREF
  int v20; // [rsp+3Ch] [rbp-85h] BYREF
  _QWORD *v21; // [rsp+40h] [rbp-81h] BYREF
  _QWORD v22[3]; // [rsp+48h] [rbp-79h] BYREF
  int v23; // [rsp+60h] [rbp-61h]
  __int16 v24; // [rsp+68h] [rbp-59h]
  _BYTE v25[32]; // [rsp+70h] [rbp-51h] BYREF
  __int16 v26; // [rsp+90h] [rbp-31h] BYREF
  _BYTE v27[32]; // [rsp+98h] [rbp-29h] BYREF
  char v28; // [rsp+B8h] [rbp-9h]
  _QWORD v29[3]; // [rsp+C0h] [rbp-1h] BYREF
  int v30; // [rsp+D8h] [rbp+17h]

  if ( *(_QWORD *)&nExitCode == 0 )
    return;
  byte_141310980 = 0;
  if ( a3 == 0 )
  {
    v13 = off_140F6CBE8;
    goto LABEL_29;
  }
  if ( a5 == 0 )
  {
    v13 = off_140F6CC50;
    goto LABEL_29;
  }
  v7 = 0;
  if ( a4 != 0 )
    v7 = *(_DWORD *)(a4 + 16);
  if ( a2 == 0 )
  {
    v13 = off_140F6CC90;
LABEL_29:
    if ( (unsigned __int8)sub_140059CA0(a1: v13) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  v8 = *(_DWORD *)(a2 + 16);
  v9 = sub_140152310(a1: a3);
  v10 = sub_140152330(a1: a3);
  v11 = sub_140152310(a1: a5);
  v14 = v11;
  v12 = sub_140152330(a1: a5);
  v29[1] = 0;
  v29[2] = 0;
  v30 = 0;
  v29[0] = &PXEngine::ByteStreamWriter::`vftable';
  v15 = v8;
  v16 = v10;
  v17 = v9;
  v22[1] = 0;
  v22[2] = 0;
  v23 = 0;
  v22[0] = &PXEngine::ByteStreamWriter::`vftable';
  if ( a4 != 0 )
  {
    v18 = v7;
    v19 = v12;
    v20 = v11;
    v21 = v22;
    v14 = v8;
    if ( sub_1401D0820(a1: v22, a2: &v14) != 0
      && (v15 = v14, v14 = v16, sub_1401D0820(a1: v22, a2: &v14) != 0)
      && (v16 = v14, v14 = v17, sub_1401D0820(a1: v22, a2: &v14) != 0)
      && (v17 = v14, v14 = v18, sub_1401D0820(a1: v22, a2: &v14) != 0)
      && (v18 = v14, (unsigned __int8)sub_1402B7CD0(a1: &v21, a2: &v19) != 0)
      && (unsigned __int8)sub_1402B7CD0(a1: &v21, a2: &v20) != 0 )
    {
      v24 = word_141313D94;
      sub_140A255B0(a1: v25, a2: v22);
      v26 = v24;
      sub_140A255B0(a1: v27, a2: v25);
      v28 = 1;
      sub_140A25690(a1: v25);
    }
    else
    {
      v28 = 0;
    }
  }
  else
  {
    v18 = v12;
    LOBYTE(v19) = v11;
    *(_WORD *)((char *)&v19 + 1) = *(_WORD *)((char *)&v14 + 1);
    HIBYTE(v19) = HIBYTE(v14);
    v21 = v22;
    v14 = v8;
    if ( sub_1401D0820(a1: v22, a2: &v14) != 0
      && (v15 = v14, v14 = v16, sub_1401D0820(a1: v22, a2: &v14) != 0)
      && (v16 = v14, v14 = v17, sub_1401D0820(a1: v22, a2: &v14) != 0)
      && (v17 = v14, v14 = v18, sub_1401D0820(a1: v22, a2: &v14) != 0)
      && (v18 = v14, (unsigned __int8)sub_1402B7CD0(a1: &v21, a2: &v19) != 0) )
    {
      v24 = word_141313D90;
      sub_140A255B0(a1: v25, a2: v22);
      v26 = v24;
      sub_140A255B0(a1: v27, a2: v25);
      v28 = 1;
      sub_140A25690(a1: v25);
    }
    else
    {
      v28 = 0;
    }
  }
  sub_140A25690(a1: v22);
  sub_1407EE6B0(a1: &v26);
  sub_140A25690(a1: v29);
}