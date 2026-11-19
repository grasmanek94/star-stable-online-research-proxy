char __fastcall sub_1407D3360(__int64 a1, _DWORD *a2)
{
  __int64 *v4; // r8
  __int64 *v5; // rax
  __int64 *v6; // rdx
  __int64 v7; // rax
  __int64 *v8; // rdi
  __int128 *v9; // rbx
  __int64 v10; // rbx
  void *v11; // rcx
  unsigned int v13; // [rsp+50h] [rbp-69h] BYREF
  void **v14; // [rsp+58h] [rbp-61h] BYREF
  int v15; // [rsp+60h] [rbp-59h]
  int v16; // [rsp+64h] [rbp-55h]
  void **v17; // [rsp+68h] [rbp-51h] BYREF
  int v18; // [rsp+70h] [rbp-49h]
  int v19; // [rsp+74h] [rbp-45h]
  void **v20; // [rsp+78h] [rbp-41h] BYREF
  int v21; // [rsp+80h] [rbp-39h]
  int v22; // [rsp+84h] [rbp-35h]
  _BYTE v23[16]; // [rsp+88h] [rbp-31h] BYREF
  char v24[16]; // [rsp+98h] [rbp-21h] BYREF
  __int128 v25; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v26; // [rsp+B8h] [rbp-1h]
  unsigned __int64 v27; // [rsp+C0h] [rbp+7h]
  unsigned int v28; // [rsp+C8h] [rbp+Fh]
  unsigned int v29; // [rsp+CCh] [rbp+13h]

  v25 = 0;
  v26 = 0;
  v27 = 15;
  LOBYTE(v25) = 0;
  v28 = -1;
  v29 = 0;
  if ( sub_1402B4D00(a1: a2, a2: (__int64 *)&v25) != 0
    && (v13 = v28, sub_1401D0820(a1: a2, a2: &v13) != 0)
    && (v28 = v13, v13 = v29, sub_1401D0820(a1: a2, a2: &v13) != 0) )
  {
    v29 = v13;
    v4 = *(__int64 **)(a1 + 1912);
    v5 = (__int64 *)v4[1];
    v6 = v4;
    while ( *((_BYTE *)v5 + 25) == 0 )
    {
      if ( *((_DWORD *)v5 + 8) >= v28 )
      {
        v6 = v5;
        v5 = (__int64 *)*v5;
      }
      else
      {
        v5 = (__int64 *)v5[2];
      }
    }
    if ( *((_BYTE *)v6 + 25) != 0 || v28 < *((_DWORD *)v6 + 8) || v6 == v4 )
    {
      v15 = 0;
      v16 = 195948557;
    }
    else
    {
      sub_1405F1D40(a1: (__int64)&v14, a2: (__int64)(v6 + 5));
    }
    v14 = &PXEngine::SafeActorPtrAs<CPXPlayerTPNet>::`vftable';
    v7 = sub_1405F1EE0(a1: (__int64)&v14);
    if ( v7 != 0 )
    {
      LOBYTE(v7) = sub_14078A330(a1: v7);
      if ( (_BYTE)v7 == 0 )
      {
        v8 = (__int64 *)qword_14138A6F0;
        if ( qword_14138A6F0 == 0 )
        {
          if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
            __debugbreak();
          sub_1409E29B8(a1: 999);
          __debugbreak();
        }
        v17 = &PXEngine::SafeActorPtr::`vftable';
        v18 = 0;
        v19 = 195948557;
        v9 = &v25;
        if ( v27 > 0xF )
          v9 = (__int128 *)v25;
        sub_1405F1D40(a1: (__int64)v23, a2: a1 + 120);
        v20 = &PXEngine::SafeActorPtr::`vftable';
        v21 = 0;
        v22 = 195948557;
        v10 = sub_1405FD6C0(
                a1: v8,
                a2: (__int64)v24,
                a3: (__int64)v23,
                a4: v9,
                a5: (__int64)&v20,
                a6: (__int64)&v17,
                a7: nullptr,
                a8: 0,
                a9: 0);
        if ( (unsigned __int8)sub_1406006A0(a1: v8, a2: v10, a3: 126) != 0 )
        {
          sub_1405F1D60(a1: (__int64)&v14, a2: *(_DWORD *)(v10 + 12), a3: *(_DWORD *)(v10 + 8));
        }
        else
        {
          v15 = 0;
          v16 = 195948557;
        }
        v14 = &PXEngine::SafeActorPtrAs<CPXQuestItem>::`vftable';
        v7 = sub_1405F1EE0(a1: (__int64)&v14);
        if ( v7 != 0 && (*(_BYTE *)(v7 + 767) & 4) != 0 )
          LOBYTE(v7) = sub_14029D1E0(a1: v7, a2: v29);
      }
    }
  }
  else
  {
    LOBYTE(v7) = sub_140059D90(a1: off_141011E98, a2: "NetSerialize RemoteStartActorPushMessage!");
    if ( (_BYTE)v7 != 0 )
      __debugbreak();
  }
  if ( v27 > 0xF )
  {
    v11 = (void *)v25;
    if ( v27 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v25 - *(_QWORD *)(v25 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v11 = *(void **)(v25 - 8);
    }
    LOBYTE(v7) = sub_1409DB4C0(lpMem: v11);
  }
  return v7;
}