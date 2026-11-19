void __fastcall sub_1402F4FF0(__int64 a1, int a2, int a3, int a4)
{
  char (__fastcall *v4)(__int64, __int64, __int64); // r9
  char (__fastcall *v5)(__int64, __int64, __int64); // r9
  char (__fastcall *v6)(__int64, __int64, __int64); // r9
  int v7; // [rsp+20h] [rbp-69h] BYREF
  int v8; // [rsp+28h] [rbp-61h]
  int v9; // [rsp+2Ch] [rbp-5Dh]
  int v10; // [rsp+30h] [rbp-59h]
  __int64 v11; // [rsp+34h] [rbp-55h] BYREF
  _WORD v12[2]; // [rsp+3Ch] [rbp-4Dh] BYREF
  _QWORD v13[3]; // [rsp+40h] [rbp-49h] BYREF
  int v14; // [rsp+58h] [rbp-31h]
  _QWORD *v15; // [rsp+60h] [rbp-29h] BYREF
  _QWORD v16[3]; // [rsp+68h] [rbp-21h] BYREF
  int v17; // [rsp+80h] [rbp-9h]
  __int16 v18; // [rsp+88h] [rbp-1h]
  _BYTE v19[32]; // [rsp+90h] [rbp+7h] BYREF
  __int16 v20; // [rsp+B0h] [rbp+27h] BYREF
  _BYTE v21[32]; // [rsp+B8h] [rbp+2Fh] BYREF
  char v22; // [rsp+D8h] [rbp+4Fh]

  if ( *(_QWORD *)&nExitCode != 0 )
  {
    byte_141310980 = 0;
    v16[1] = 0;
    v16[2] = 0;
    v17 = 0;
    v16[0] = &PXEngine::ByteStreamWriter::`vftable';
    v11 = 0;
    v12[0] = 0;
    v8 = a2;
    v9 = a4;
    v10 = a3;
    v13[1] = 0;
    v13[2] = 0;
    v14 = 0;
    v13[0] = &PXEngine::ByteStreamWriter::`vftable';
    v15 = v13;
    v7 = a2;
    if ( sub_1401D0820(a1: v13, a2: &v7) == 0 )
      goto LABEL_16;
    v8 = v7;
    v7 = v9;
    if ( sub_1401D0820(a1: v13, a2: &v7) == 0 )
      goto LABEL_16;
    v9 = v7;
    v7 = v10;
    if ( sub_1401D0820(a1: v13, a2: &v7) == 0 )
      goto LABEL_16;
    v10 = v7;
    v4 = *(char (__fastcall **)(__int64, __int64, __int64))(v13[0] + 16LL);
    if ( v4 == sub_1401F6C10 )
    {
      sub_140A25890(a1: v13, a2: &v11, a3: 4);
    }
    else if ( v4(a1: (__int64)v13, a2: (__int64)&v11, a3: 4) == 0 )
    {
      goto LABEL_16;
    }
    if ( (unsigned __int8)sub_1402B7CD0(a1: &v15, a2: (char *)&v11 + 4) != 0 )
    {
      v5 = *(char (__fastcall **)(__int64, __int64, __int64))(v13[0] + 16LL);
      if ( v5 == sub_1401F6C10 )
      {
        sub_140A25890(a1: v13, a2: v12, a3: 1);
      }
      else if ( v5(a1: (__int64)v13, a2: (__int64)v12, a3: 1) == 0 )
      {
        goto LABEL_16;
      }
      v6 = *(char (__fastcall **)(__int64, __int64, __int64))(v13[0] + 16LL);
      if ( v6 == sub_1401F6C10 )
      {
        sub_140A25890(a1: v13, a2: (char *)v12 + 1, a3: 1);
LABEL_15:
        v18 = word_141313C74;
        sub_140A255B0(a1: v19, a2: v13);
        v20 = v18;
        sub_140A255B0(a1: v21, a2: v19);
        v22 = 1;
        sub_140A25690(a1: v19);
LABEL_17:
        sub_140A25690(a1: v13);
        sub_1407EE6B0(a1: &v20);
        sub_140A25690(a1: v16);
        return;
      }
      if ( v6(a1: (__int64)v13, a2: (__int64)v12 + 1, a3: 1) != 0 )
        goto LABEL_15;
    }
LABEL_16:
    v22 = 0;
    goto LABEL_17;
  }
}