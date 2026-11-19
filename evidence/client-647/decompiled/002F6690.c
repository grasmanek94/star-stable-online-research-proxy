void __fastcall sub_1402F6690(__int64 a1, __int64 a2, int a3, int a4, int a5, char a6)
{
  char (__fastcall *v6)(__int64, __int64, __int64); // r9
  int v7; // [rsp+20h] [rbp-59h] BYREF
  int v8; // [rsp+28h] [rbp-51h]
  int v9; // [rsp+2Ch] [rbp-4Dh]
  int v10; // [rsp+30h] [rbp-49h]
  int v11; // [rsp+34h] [rbp-45h]
  char v12[8]; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v13[3]; // [rsp+40h] [rbp-39h] BYREF
  int v14; // [rsp+58h] [rbp-21h]
  __int16 v15; // [rsp+60h] [rbp-19h]
  _BYTE v16[32]; // [rsp+68h] [rbp-11h] BYREF
  __int16 v17; // [rsp+88h] [rbp+Fh] BYREF
  _BYTE v18[32]; // [rsp+90h] [rbp+17h] BYREF
  char v19; // [rsp+B0h] [rbp+37h]

  if ( *(_QWORD *)&nExitCode != 0 )
  {
    byte_141310980 = 0;
    v8 = *(_DWORD *)(a2 + 16);
    v9 = a4;
    v10 = a5;
    v11 = a3;
    v12[0] = a6;
    v13[1] = 0;
    v13[2] = 0;
    v14 = 0;
    v13[0] = &PXEngine::ByteStreamWriter::`vftable';
    v7 = v8;
    if ( sub_1401D0820(a1: v13, a2: &v7) != 0 )
    {
      v8 = v7;
      v7 = v9;
      if ( sub_1401D0820(a1: v13, a2: &v7) != 0 )
      {
        v9 = v7;
        v7 = v10;
        if ( sub_1401D0820(a1: v13, a2: &v7) != 0 )
        {
          v10 = v7;
          v7 = v11;
          if ( sub_1401D0820(a1: v13, a2: &v7) != 0 )
          {
            v11 = v7;
            v6 = *(char (__fastcall **)(__int64, __int64, __int64))(v13[0] + 16LL);
            if ( v6 == sub_1401F6C10 )
            {
              sub_140A25890(a1: v13, a2: v12, a3: 1);
LABEL_9:
              v15 = word_141313D9C;
              sub_140A255B0(a1: v16, a2: v13);
              v17 = v15;
              sub_140A255B0(a1: v18, a2: v16);
              v19 = 1;
              sub_140A25690(a1: v16);
LABEL_11:
              sub_140A25690(a1: v13);
              sub_1407EE6B0(a1: &v17);
              return;
            }
            if ( v6(a1: (__int64)v13, a2: (__int64)v12, a3: 1) != 0 )
              goto LABEL_9;
          }
        }
      }
    }
    v19 = 0;
    goto LABEL_11;
  }
}