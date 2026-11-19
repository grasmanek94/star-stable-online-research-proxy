void __fastcall sub_1402EE9F0(__int64 a1, __int64 a2, char a3, int a4)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  char (__fastcall *v7)(__int64, __int64, __int64); // r9
  int v8; // [rsp+20h] [rbp-69h] BYREF
  int v9; // [rsp+28h] [rbp-61h]
  _BYTE v10[4]; // [rsp+2Ch] [rbp-5Dh] BYREF
  int v11; // [rsp+30h] [rbp-59h]
  int v12; // [rsp+34h] [rbp-55h]
  bool v13[8]; // [rsp+38h] [rbp-51h] BYREF
  _QWORD v14[3]; // [rsp+40h] [rbp-49h] BYREF
  int v15; // [rsp+58h] [rbp-31h]
  __int16 v16; // [rsp+60h] [rbp-29h]
  _BYTE v17[32]; // [rsp+68h] [rbp-21h] BYREF
  __int16 v18; // [rsp+88h] [rbp-1h] BYREF
  _BYTE v19[32]; // [rsp+90h] [rbp+7h] BYREF
  char v20; // [rsp+B0h] [rbp+27h]

  if ( *(_QWORD *)&nExitCode != 0 )
  {
    v12 = 0;
    if ( a2 == 0 )
    {
      if ( (unsigned __int8)sub_140059CA0(a1: off_140F6CD38) != 0 )
        __debugbreak();
      sub_1409E29B8(a1: 999);
      __debugbreak();
    }
    v9 = *(_DWORD *)(a2 + 16);
    v11 = a4;
    v10[0] = a3;
    v13[0] = (*(_BYTE *)(a2 + 1225) & 0x10) != 0;
    v5 = sub_1405F1EE0(a1: (__int64)&off_141310F50);
    v6 = v5;
    if ( v5 == 0 || (unsigned __int8)sub_1406456B0(a1: v5, a2: 120) == 0 )
      v6 = 0;
    if ( a3 == 2 && v6 != 0 )
    {
      v12 = *(_DWORD *)(v6 + 16);
      if ( sub_1401E06C0() != 0 )
        v12 = *(_DWORD *)(sub_1401E06C0() + 16);
    }
    v14[1] = 0;
    v14[2] = 0;
    v15 = 0;
    v14[0] = &PXEngine::ByteStreamWriter::`vftable';
    v8 = v9;
    if ( sub_1401D0820(a1: v14, a2: &v8) != 0 )
    {
      v9 = v8;
      if ( (unsigned __int8)sub_1402B8840(a1: v14, a2: v10) != 0 )
      {
        v8 = v11;
        if ( sub_1401D0820(a1: v14, a2: &v8) != 0 )
        {
          v11 = v8;
          v8 = v12;
          if ( sub_1401D0820(a1: v14, a2: &v8) != 0 )
          {
            v12 = v8;
            v7 = *(char (__fastcall **)(__int64, __int64, __int64))(v14[0] + 16LL);
            if ( v7 == sub_1401F6C10 )
            {
              sub_140A25890(a1: v14, a2: v13, a3: 1);
LABEL_17:
              v16 = word_141313DB8;
              sub_140A255B0(a1: v17, a2: v14);
              v18 = v16;
              sub_140A255B0(a1: v19, a2: v17);
              v20 = 1;
              sub_140A25690(a1: v17);
LABEL_19:
              sub_140A25690(a1: v14);
              sub_1407EE6B0(a1: &v18);
              return;
            }
            if ( v7(a1: (__int64)v14, a2: (__int64)v13, a3: 1) != 0 )
              goto LABEL_17;
          }
        }
      }
    }
    v20 = 0;
    goto LABEL_19;
  }
}