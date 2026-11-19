void __fastcall sub_1402B0630(__int64 a1, char a2)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rdi
  int v6; // ecx
  char (__fastcall *v7)(__int64, __int64, __int64); // r9
  _QWORD v8[3]; // [rsp+20h] [rbp-49h] BYREF
  int v9; // [rsp+38h] [rbp-31h]
  void **v10; // [rsp+40h] [rbp-29h] BYREF
  int v11; // [rsp+48h] [rbp-21h]
  int v12; // [rsp+4Ch] [rbp-1Dh]
  __int16 v13; // [rsp+50h] [rbp-19h]
  _BYTE v14[32]; // [rsp+58h] [rbp-11h] BYREF
  __int16 v15; // [rsp+78h] [rbp+Fh] BYREF
  _BYTE v16[32]; // [rsp+80h] [rbp+17h] BYREF
  char v17; // [rsp+A0h] [rbp+37h]
  char v18; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v19; // [rsp+E0h] [rbp+77h] BYREF

  v18 = a2;
  if ( *(_QWORD *)&nExitCode != 0 )
  {
    v3 = qword_14138A6F0;
    if ( qword_14138A6F0 == 0 )
    {
      if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
        __debugbreak();
      sub_1409E29B8(a1: 999);
      __debugbreak();
    }
    v4 = sub_1405FD2E0(a1: qword_14138A6F0, a2: v8, a3: "Network");
    if ( (unsigned __int8)sub_1406006A0(a1: v3, a2: v4, a3: 122) != 0 )
    {
      sub_1405F1D60(a1: &v10, a2: *(unsigned int *)(v4 + 12), a3: *(unsigned int *)(v4 + 8));
    }
    else
    {
      v11 = 0;
      v12 = 195948557;
    }
    v10 = &PXEngine::SafeActorPtrAs<CPXNetwork>::`vftable';
    v5 = sub_1405F1EE0(a1: (__int64)&v10);
    if ( v5 != 0 )
    {
      v6 = *(_DWORD *)(a1 + 16);
      v8[1] = 0;
      v8[2] = 0;
      v9 = 0;
      v8[0] = &PXEngine::ByteStreamWriter::`vftable';
      LODWORD(v19) = v6;
      if ( sub_1401D0820(a1: v8, a2: &v19) != 0 )
      {
        LODWORD(v19) = *(_DWORD *)(a1 + 240);
        if ( sub_1401D0820(a1: v8, a2: &v19) != 0 )
        {
          *(_DWORD *)(a1 + 240) = v19;
          LODWORD(v19) = *(_DWORD *)(a1 + 208);
          if ( sub_1401D0820(a1: v8, a2: &v19) != 0 )
          {
            *(_DWORD *)(a1 + 208) = v19;
            v19 = *(_QWORD *)(a1 + 216);
            if ( (unsigned __int8)sub_1402AF380(a1: v8, a2: &v19) != 0 )
            {
              *(_QWORD *)(a1 + 216) = v19;
              v7 = *(char (__fastcall **)(__int64, __int64, __int64))(v8[0] + 16LL);
              if ( v7 == sub_1401F6C10 )
              {
                sub_140A25890(a1: v8, a2: &v18, a3: 1);
LABEL_14:
                v13 = word_141313D04;
                sub_140A255B0(a1: v14, a2: v8);
                v15 = v13;
                sub_140A255B0(a1: v16, a2: v14);
                v17 = 1;
                sub_140A25690(a1: v14);
LABEL_16:
                sub_140A25690(a1: v8);
                sub_1407D6C20(a1: v5, a2: &v15);
                return;
              }
              if ( v7(a1: (__int64)v8, a2: (__int64)&v18, a3: 1) != 0 )
                goto LABEL_14;
            }
          }
        }
      }
      v17 = 0;
      goto LABEL_16;
    }
  }
}