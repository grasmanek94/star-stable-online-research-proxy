void __fastcall sub_1407BA490(__int64 a1, unsigned int a2, float a3)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  char (__fastcall *v13)(__int64, __int64, __int64); // r9
  __int64 v14; // rdx
  char **v15; // rcx
  _QWORD v16[3]; // [rsp+20h] [rbp-79h] BYREF
  int v17; // [rsp+38h] [rbp-61h]
  void **v18; // [rsp+40h] [rbp-59h] BYREF
  int v19; // [rsp+48h] [rbp-51h]
  int v20; // [rsp+4Ch] [rbp-4Dh]
  __int16 v21; // [rsp+50h] [rbp-49h]
  _BYTE v22[32]; // [rsp+58h] [rbp-41h] BYREF
  __int16 v23; // [rsp+78h] [rbp-21h] BYREF
  _BYTE v24[32]; // [rsp+80h] [rbp-19h] BYREF
  char v25; // [rsp+A0h] [rbp+7h]
  int v26; // [rsp+100h] [rbp+67h] BYREF

  v6 = *(_QWORD *)(a1 + 1504);
  if ( v6 == 0 )
    return;
  v7 = sub_1405F1EE0(a1: (__int64)&off_141313B68);
  if ( v7 == 0 )
  {
    v15 = off_140F4EF78;
    goto LABEL_25;
  }
  if ( sub_1407F6B00(a1: v6, a2: *(unsigned int *)(v7 + 1720)) == 0 )
    return;
  v8 = qword_14138A6F0;
  if ( qword_14138A6F0 == 0 )
  {
    v15 = off_140F35058;
    goto LABEL_25;
  }
  v9 = sub_1405FD2E0(a1: qword_14138A6F0, a2: v16, a3: "CompetitionManager");
  if ( (unsigned __int8)sub_1406006A0(a1: v8, a2: v9, a3: 155) != 0 )
  {
    sub_1405F1D60(a1: &v18, a2: *(unsigned int *)(v9 + 12), a3: *(unsigned int *)(v9 + 8));
  }
  else
  {
    v19 = 0;
    v20 = 195948557;
  }
  v18 = &PXEngine::SafeActorPtrAs<PXEngine::CompetitionManager>::`vftable';
  v10 = sub_1405F1EE0(a1: (__int64)&v18);
  if ( v10 == 0 )
  {
    v15 = off_140F52F58;
LABEL_25:
    if ( (unsigned __int8)sub_140059CA0(a1: v15) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  if ( sub_1402C9AC0(a1: v10, a2) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 1504);
    v12 = sub_1405F1EE0(a1: (__int64)&off_141313B68);
    if ( v12 == 0 )
    {
      if ( (unsigned __int8)sub_140059CA0(a1: off_140F4EF78) != 0 )
        __debugbreak();
      sub_1409E29B8(a1: 999);
      __debugbreak();
    }
    if ( (unsigned int)(*(_DWORD *)(sub_1407F6B00(a1: v11, a2: *(unsigned int *)(v12 + 1720)) + 8) - 1) > 1 )
    {
      *(_DWORD *)(a1 + 1704) = a2;
      *(float *)(a1 + 1708) = a3;
      v16[1] = 0;
      v16[2] = 0;
      v17 = 0;
      v16[0] = &PXEngine::ByteStreamWriter::`vftable';
      v26 = *(_DWORD *)(a1 + 1512);
      if ( sub_1401D0820(a1: v16, a2: &v26) != 0 )
      {
        *(_DWORD *)(a1 + 1512) = v26;
        v26 = *(_DWORD *)(a1 + 1704);
        if ( sub_1401D0820(a1: v16, a2: &v26) != 0 )
        {
          *(_DWORD *)(a1 + 1704) = v26;
          v13 = *(char (__fastcall **)(__int64, __int64, __int64))(v16[0] + 16LL);
          v14 = a1 + 1708;
          if ( v13 == sub_1401F6C10 )
          {
            sub_140A25890(a1: v16, a2: v14, a3: 4);
LABEL_17:
            v21 = word_141313C48;
            sub_140A255B0(a1: v22, a2: v16);
            v23 = v21;
            sub_140A255B0(a1: v24, a2: v22);
            v25 = 1;
            sub_140A25690(a1: v22);
LABEL_19:
            sub_140A25690(a1: v16);
            sub_1407D6C20(a1, a2: &v23);
            return;
          }
          if ( v13(a1: (__int64)v16, a2: v14, a3: 4) != 0 )
            goto LABEL_17;
        }
      }
      v25 = 0;
      goto LABEL_19;
    }
  }
}