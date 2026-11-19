void __fastcall sub_1402F5F20(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // ebx
  int v6; // r15d
  int v7; // r12d
  int v8; // r14d
  _QWORD v9[3]; // [rsp+20h] [rbp-69h] BYREF
  int v10; // [rsp+38h] [rbp-51h]
  __int16 v11; // [rsp+40h] [rbp-49h]
  _BYTE v12[32]; // [rsp+48h] [rbp-41h] BYREF
  __int16 v13; // [rsp+68h] [rbp-21h] BYREF
  _BYTE v14[32]; // [rsp+70h] [rbp-19h] BYREF
  char v15; // [rsp+90h] [rbp+7h]
  int v16; // [rsp+108h] [rbp+7Fh] BYREF

  if ( *(_QWORD *)&nExitCode != 0 && a3 != 0 )
  {
    byte_141310980 = 0;
    if ( a2 == 0 )
    {
      if ( (unsigned __int8)sub_140059CA0(a1: off_140F6CAA0) != 0 )
        __debugbreak();
      sub_1409E29B8(a1: 999);
      __debugbreak();
    }
    v5 = *(_DWORD *)(a2 + 16);
    v6 = *(_DWORD *)(a2 + 488);
    v7 = sub_140152310(a1: a3);
    v8 = sub_140152330(a1: a3);
    v9[1] = 0;
    v9[2] = 0;
    v10 = 0;
    v9[0] = &PXEngine::ByteStreamWriter::`vftable';
    v16 = v5;
    if ( sub_1401D0820(a1: v9, a2: &v16) != 0
      && (v16 = v8, sub_1401D0820(a1: v9, a2: &v16) != 0)
      && (v16 = v6, sub_1401D0820(a1: v9, a2: &v16) != 0)
      && (v16 = v7, sub_1401D0820(a1: v9, a2: &v16) != 0) )
    {
      v11 = word_141313D88;
      sub_140A255B0(a1: v12, a2: v9);
      v13 = v11;
      sub_140A255B0(a1: v14, a2: v12);
      v15 = 1;
      sub_140A25690(a1: v12);
    }
    else
    {
      v15 = 0;
    }
    sub_140A25690(a1: v9);
    sub_1407EE6B0(a1: &v13);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a3 + 1256LL))(a1: a3, a2: 0);
    sub_1400AF390(a1: a2);
  }
}