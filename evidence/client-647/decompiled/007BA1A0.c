void __fastcall sub_1407BA1A0(__int64 a1, char a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  char **v15; // rcx
  void **v16; // [rsp+20h] [rbp-59h] BYREF
  int v17; // [rsp+28h] [rbp-51h]
  int v18; // [rsp+2Ch] [rbp-4Dh]
  _QWORD v19[3]; // [rsp+30h] [rbp-49h] BYREF
  int v20; // [rsp+48h] [rbp-31h]
  __int16 v21; // [rsp+50h] [rbp-29h]
  _BYTE v22[32]; // [rsp+58h] [rbp-21h] BYREF
  __int16 v23; // [rsp+78h] [rbp-1h] BYREF
  _BYTE v24[48]; // [rsp+80h] [rbp+7h] BYREF
  char v25; // [rsp+E0h] [rbp+67h] BYREF

  if ( *(_QWORD *)(a1 + 1504) == 0 )
    return;
  v4 = qword_14138A6F0;
  if ( qword_14138A6F0 == 0 )
  {
    v15 = off_140F35058;
    goto LABEL_16;
  }
  v5 = sub_1405FD2E0(a1: qword_14138A6F0, a2: v19, a3: "CompetitionManager");
  if ( (unsigned __int8)sub_1406006A0(a1: v4, a2: v5, a3: 155) != 0 )
  {
    sub_1405F1D60(a1: &v16, a2: *(unsigned int *)(v5 + 12), a3: *(unsigned int *)(v5 + 8));
  }
  else
  {
    v17 = 0;
    v18 = 195948557;
  }
  v16 = &PXEngine::SafeActorPtrAs<PXEngine::CompetitionManager>::`vftable';
  v6 = sub_1405F1EE0(a1: (__int64)&v16);
  if ( v6 == 0 )
  {
    v15 = off_140F52F58;
LABEL_16:
    if ( (unsigned __int8)sub_140059CA0(a1: v15) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  sub_1405F1D40(a1: v19, a2: v6 + 368);
  v19[0] = &PXEngine::SafeActorPtrAs<PXEngine::Competition>::`vftable';
  v7 = sub_1405F1EE0(a1: (__int64)v19);
  if ( v7 != 0 )
  {
    v8 = v7 + 456;
    v9 = sub_140080FF0(a1: v7 + 456, a2: 0);
    if ( (unsigned int)sub_14006A8C0(a1: v9, a2: &String2) != 0 )
    {
      v10 = *(_QWORD *)(a1 + 1504);
      v11 = *(_QWORD *)(*(_QWORD *)&nExitCode + 992LL);
      v12 = sub_140080FF0(a1: v8, a2: 0);
      v13 = sub_140640AB0(a1: v11, a2: v12, a3: a1);
      v14 = sub_1405F1EE0(a1: (__int64)&off_141313B68);
      if ( v14 == 0 )
      {
        if ( (unsigned __int8)sub_140059CA0(a1: off_140F4EF78) != 0 )
          __debugbreak();
        sub_1409E29B8(a1: 999);
        __debugbreak();
      }
      sub_1407F6F90(a1: v10, a2: *(unsigned int *)(v14 + 1720), a3: v13);
    }
  }
  v19[1] = 0;
  v19[2] = 0;
  v20 = 0;
  v19[0] = &PXEngine::ByteStreamWriter::`vftable';
  v25 = a2;
  sub_140A25890(a1: v19, a2: &v25, a3: 1);
  v21 = word_141313C50;
  sub_140A255B0(a1: v22, a2: v19);
  v23 = v21;
  sub_140A255B0(a1: v24, a2: v22);
  v24[32] = 1;
  sub_140A25690(a1: v22);
  sub_140A25690(a1: v19);
  sub_1407D6C20(a1, a2: &v23);
}