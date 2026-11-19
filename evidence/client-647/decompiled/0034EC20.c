_UNKNOWN **__fastcall sub_14034EC20(__int64 a1)
{
  _UNKNOWN **result; // rax
  __int64 v3; // rdi
  __int64 v4; // rsi
  _UNKNOWN **v5; // rsi
  _DWORD *v6; // rdi
  char v7; // al
  __int64 v8; // rax
  unsigned int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  void **v15; // [rsp+28h] [rbp-49h] BYREF
  int v16; // [rsp+30h] [rbp-41h]
  int v17; // [rsp+34h] [rbp-3Dh]
  _QWORD v18[3]; // [rsp+38h] [rbp-39h] BYREF
  int v19; // [rsp+50h] [rbp-21h]
  __int16 v20; // [rsp+58h] [rbp-19h] BYREF
  _BYTE v21[40]; // [rsp+60h] [rbp-11h] BYREF
  __int16 v22; // [rsp+88h] [rbp+17h]
  _BYTE v23[40]; // [rsp+90h] [rbp+1Fh] BYREF
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+5Fh] BYREF
  unsigned int v25; // [rsp+E0h] [rbp+6Fh] BYREF

  result = &retaddr;
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
    v4 = sub_1405FD2E0(a1: qword_14138A6F0, a2: v18, a3: "Network");
    if ( (unsigned __int8)sub_1406006A0(a1: v3, a2: v4, a3: 122) != 0 )
    {
      sub_1405F1D60(a1: &v15, a2: *(unsigned int *)(v4 + 12), a3: *(unsigned int *)(v4 + 8));
    }
    else
    {
      v16 = 0;
      v17 = 195948557;
    }
    v15 = &PXEngine::SafeActorPtrAs<CPXNetwork>::`vftable';
    result = (_UNKNOWN **)sub_1405F1EE0(a1: (__int64)&v15);
    v5 = result;
    if ( result != nullptr )
    {
      result = (_UNKNOWN **)sub_1405F1EE0(a1: (__int64)&off_141310F50);
      v6 = result;
      if ( result != nullptr )
      {
        result = (_UNKNOWN **)sub_1406456B0(a1: result, a2: 120);
        if ( (_BYTE)result != 0 )
        {
          *(_DWORD *)(a1 + 348) = v6[4];
          v7 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 1064LL))(a1: v6);
          *(_DWORD *)(a1 + 248) = 0;
          *(_BYTE *)(a1 + 352) = v7;
          dword_14138DFD0 = 1;
          byte_14138DFD4 = 0;
          *(_BYTE *)(a1 + 260) = 0;
          v8 = sub_1405F1EE0(a1: (__int64)&off_141313B68);
          if ( v8 != 0 )
            *(_BYTE *)(v8 + 2385) = *(_BYTE *)(v8 + 2385) & 0xFE | (dword_14138DFD0 != 0);
          if ( (unsigned __int8)sub_140059D90(a1: off_140F77008, a2: "EnterStable - Player Enters MyStable") != 0 )
            __debugbreak();
          sub_14034E6D0(a1);
          sub_1400BA030(a1);
          if ( (unsigned __int8)sub_14034C6F0(a1) != 0 )
            v9 = *(_DWORD *)(a1 + 680);
          else
            v9 = *((_DWORD *)v5 + 482);
          v25 = v9;
          v10 = sub_1401D5630(a1: &unk_141313CDC, a2: &v20, a3: &v25);
          sub_1407EE6B0(a1: v10);
          if ( *(_DWORD *)(a1 + 252) == 0 )
          {
            v11 = sub_1401D5630(a1: &unk_141313D44, a2: &v20, a3: &v25);
            sub_1407EE6B0(a1: v11);
            v12 = sub_1404B3830();
            if ( v12 != 0 )
            {
              v14 = v25;
              *(_BYTE *)(a1 + 1168) = 0;
              LOBYTE(v13) = (_DWORD)v14 == *((_DWORD *)v5 + 482);
              sub_1404B4050(a1: v12, a2: v14, a3: v13);
            }
          }
          if ( qword_14138AA40 == 0 )
          {
            if ( (unsigned __int8)sub_140059CA0(a1: off_140F38D90) != 0 )
              __debugbreak();
            sub_1409E29B8(a1: 999);
            __debugbreak();
          }
          result = (_UNKNOWN **)sub_140608610(a1: qword_14138AA40, a2: 4);
          if ( (_BYTE)result != 0 )
          {
            v18[1] = 0;
            v18[0] = &PXEngine::ByteStreamWriter::`vftable';
            v22 = word_141313CFC;
            v18[2] = 0;
            v19 = 0;
            sub_140A255B0(a1: v23, a2: v18);
            v20 = v22;
            sub_140A255B0(a1: v21, a2: v23);
            v21[32] = 1;
            sub_140A25690(a1: v23);
            sub_140A25690(a1: v18);
            return (_UNKNOWN **)sub_1407EE6B0(a1: &v20);
          }
        }
      }
    }
  }
  return result;
}