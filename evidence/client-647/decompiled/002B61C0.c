__int64 __fastcall sub_1402B61C0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // r14
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // r14
  __int64 v15; // rbx
  _QWORD v17[3]; // [rsp+20h] [rbp-69h] BYREF
  int v18; // [rsp+38h] [rbp-51h]
  void **v19; // [rsp+40h] [rbp-49h] BYREF
  int v20; // [rsp+48h] [rbp-41h]
  int v21; // [rsp+4Ch] [rbp-3Dh]
  __int16 v22; // [rsp+60h] [rbp-29h]
  _BYTE v23[32]; // [rsp+68h] [rbp-21h] BYREF
  __int16 v24; // [rsp+88h] [rbp-1h] BYREF
  _BYTE v25[48]; // [rsp+90h] [rbp+7h] BYREF

  if ( a2 == 1301 )
  {
    if ( *(_QWORD *)&nExitCode != 0 )
    {
      v13 = qword_14138A6F0;
      if ( qword_14138A6F0 == 0 )
      {
        if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
          __debugbreak();
        sub_1409E29B8(a1: 999);
        __debugbreak();
      }
      v14 = sub_1405FD2E0(a1: qword_14138A6F0, a2: v17, a3: "Network");
      if ( (unsigned __int8)sub_1406006A0(a1: v13, a2: v14, a3: 122) != 0 )
      {
        sub_1405F1D60(a1: &v19, a2: *(unsigned int *)(v14 + 12), a3: *(unsigned int *)(v14 + 8));
      }
      else
      {
        v20 = 0;
        v21 = 195948557;
      }
      v19 = &PXEngine::SafeActorPtrAs<CPXNetwork>::`vftable';
      v15 = sub_1405F1EE0(a1: (__int64)&v19);
      if ( v15 != 0 )
      {
        sub_1402B44A0(a1);
        sub_1402B42C0(a1);
        v17[1] = 0;
        v17[0] = &PXEngine::ByteStreamWriter::`vftable';
        v22 = word_141313D00;
        v17[2] = 0;
        v18 = 0;
        sub_140A255B0(a1: v23, a2: v17);
        v24 = v22;
        sub_140A255B0(a1: v25, a2: v23);
        v25[32] = 1;
        sub_140A25690(a1: v23);
        sub_140A25690(a1: v17);
        sub_1407D6C20(a1: v15, a2: &v24);
      }
    }
  }
  else if ( a2 == 160020 )
  {
    v8 = sub_1405F1EE0(a1: a1 + 264);
    v9 = v8;
    if ( a3 != 0 && v8 != 0 )
    {
      v10 = *(_DWORD *)(a3 + 16);
      v11 = sub_140016F80(a1: &v19, a2: a3 + 152);
      LOBYTE(v12) = 1;
      sub_14058D350(a1: v9, a2: v11, a3: v10, a4: v12);
    }
  }
  return sub_1400CC5C0(a1, a2, a3, a4);
}