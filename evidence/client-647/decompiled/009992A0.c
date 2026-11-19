__int64 __fastcall sub_1409992A0(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r13
  int v8; // ecx
  __int64 v9; // rax
  __int64 result; // rax
  const CHAR *v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  unsigned int v14; // ebx
  __int64 v15; // rax
  __int64 v16; // rax
  int *v17; // rdx
  DWORD v18; // ebx
  const char *v19; // rax
  const char *v20; // rax
  const char *v21; // rax
  int v22; // ebx
  __int64 v23; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD *v24; // [rsp+68h] [rbp-98h]
  __int64 v25; // [rsp+70h] [rbp-90h] BYREF
  __int64 v26; // [rsp+78h] [rbp-88h]
  int v27; // [rsp+80h] [rbp-80h] BYREF
  int v28; // [rsp+84h] [rbp-7Ch]
  __int64 *v29; // [rsp+88h] [rbp-78h]
  size_t v30; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v31[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 *v32; // [rsp+A0h] [rbp-60h]
  char v33[36]; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v34; // [rsp+CCh] [rbp-34h]
  _DWORD v35[2]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int16 v36; // [rsp+D8h] [rbp-28h]
  _BYTE v37[118]; // [rsp+DAh] [rbp-26h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v30 = 0;
  v5 = *(_QWORD *)(v2 + 56);
  v6 = sub_140968B80();
  v7 = v6;
  if ( *(_QWORD *)(v2 + 48) == 0 || (v8 = 8, byte_1413B4BB8 == 0) )
    v8 = 0;
  *(_DWORD *)(v5 + 168) &= ~8u;
  *(_DWORD *)(v5 + 168) |= v8;
  if ( *(_QWORD *)(v6 + 8) != 0 || *(_QWORD *)(v6 + 112) != 0 )
  {
    if ( (unsigned __int8)sub_140975640(a1: 6, a2: 1, a3: 0, a4: 2, a5: 3) == 0 )
    {
      sub_140971AD0(
        a1: a2,
        a2: "schannel: this version of Windows is too old to support certificate verification via CA bundle file.");
      return 77;
    }
    *(_DWORD *)(v5 + 168) |= 0x10u;
  }
  else
  {
    *(_DWORD *)(v5 + 168) &= ~0x10u;
  }
  *(_QWORD *)(v5 + 64) = 0;
  if ( (unsigned __int8)sub_1409865B0(a1, a2) != 0 )
  {
    sub_140986460(a1: a2);
    v9 = sub_1409862C0(a1, a2, a3: *(_QWORD *)(v2 + 32));
    if ( v9 != 0 )
    {
      *(_QWORD *)(v5 + 64) = v9;
      ++*(_DWORD *)(v9 + 32);
    }
    sub_140986500(a1: a2);
  }
  if ( *(_QWORD *)(v5 + 64) != 0 )
  {
LABEL_19:
    if ( *(_DWORD *)(v2 + 40) != 0 && a2 != 0 && (*(_DWORD *)(a2 + 1300) & 0x20000000) != 0 )
    {
      v13 = *(_QWORD *)(a2 + 2488);
      if ( v13 == 0 || *(int *)(v13 + 8) >= 1 )
        sub_140971C40(a1: a2, a2: "schannel: using IP address, SNI is not supported by OS.");
    }
    if ( (*(_BYTE *)(v5 + 168) & 8) != 0 )
    {
      v35[1] = 2;
      if ( (unsigned int)sub_140968290(a1: v33, a2: *(_QWORD *)(v2 + 48)) != 0 )
      {
        sub_140971AD0(a1: a2, a2: "Error setting ALPN");
        return 35;
      }
      v14 = v34;
      sub_140E82100(a1: v37, a2: v33, a3: (int)v34);
      v14 += 10;
      v36 = sub_1407AF070(a1: v14 - 10);
      v35[0] = v36 + 6;
      v24 = v35;
      v29 = &v23;
      v23 = v14 | 0x1200000000LL;
      v27 = 0;
      v28 = 1;
      sub_140968330(a1: v33, a2: *(_QWORD *)(v2 + 48));
      if ( a2 != 0 && (*(_DWORD *)(a2 + 1300) & 0x20000000) != 0 )
      {
        v15 = *(_QWORD *)(a2 + 2488);
        if ( v15 == 0 || *(int *)(v15 + 8) >= 1 )
          sub_140971C40(a1: a2, a2: "ALPN: curl offers %s", v33);
      }
    }
    else
    {
      v23 = 0;
      v29 = &v23;
      v24 = nullptr;
      v27 = 0;
      v28 = 1;
    }
    v25 = 0;
    v32 = &v25;
    v26 = 0;
    v31[0] = 0;
    v31[1] = 1;
    *(_DWORD *)(v5 + 124) = ~(unsigned __int8)*(_DWORD *)(v7 + 152) & 0x80 | 0x811C;
    v16 = off_14131D240();
    *(_QWORD *)(v5 + 72) = v16;
    if ( v16 == 0 )
    {
      sub_140971AD0(a1: a2, a2: "schannel: unable to allocate memory");
      return 27;
    }
    v17 = &v27;
    if ( (*(_BYTE *)(v5 + 168) & 8) == 0 )
      v17 = nullptr;
    v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, int *, _DWORD, __int64, _DWORD *, __int64, _QWORD))(qword_1413B4AC8 + 48))(
            a1: *(_QWORD *)(v5 + 64),
            a2: 0,
            a3: *(_QWORD *)(*(_QWORD *)(v5 + 64) + 16LL),
            a4: *(unsigned int *)(v5 + 124),
            a5: 0,
            a6: 0,
            a7: v17,
            a8: 0,
            a9: v16,
            a10: v31,
            a11: v5 + 128,
            a12: 0);
    if ( v18 == 590610 )
    {
      v22 = sub_14096A270(a1: *(_QWORD *)(a1 + 8), a2, a3: v26, a4: v25, a5: 0, a6: (__int64)&v30);
      (*(void (__fastcall **)(__int64))(qword_1413B4AC8 + 128))(a1: v26);
      if ( v22 == 0 && (unsigned int)v25 == v30 )
      {
        *(_DWORD *)(v5 + 168) &= 0xFFFFFF38;
        *(_DWORD *)(v5 + 132) = 0;
        *(_BYTE *)(v5 + 136) = 0;
        *(_QWORD *)(v5 + 96) = 0;
        *(_OWORD *)(v5 + 80) = 0;
        *(_DWORD *)(v2 + 188) = 1;
        return 0;
      }
      sub_140971AD0(a1: a2, a2: "schannel: failed to send initial handshake data: sent %zu of %lu bytes", v30, v25);
      return 35;
    }
    off_14131D228(lpMem: *(LPVOID *)(v5 + 72));
    *(_QWORD *)(v5 + 72) = 0;
    if ( v18 != -2146893056 )
    {
      if ( v18 == -2146893022 )
      {
        v20 = (const char *)sub_14094C7C0(dwMessageId: 0x80090322);
        sub_140971AD0(a1: a2, a2: "schannel: SNI or certificate check failed: %s", v20);
        return 60;
      }
      v19 = (const char *)sub_14094C7C0(dwMessageId: v18);
      sub_140971AD0(a1: a2, a2: "schannel: initial InitializeSecurityContext failed: %s", v19);
      return 35;
    }
    v21 = (const char *)sub_14094C7C0(dwMessageId: 0x80090300);
    sub_140971AD0(a1: a2, a2: "schannel: initial InitializeSecurityContext failed: %s", v21);
    return 27;
  }
  result = sub_140998F50(a1, a2);
  if ( (_DWORD)result == 0 && *(_QWORD *)(v5 + 64) != 0 )
  {
    v11 = *(const CHAR **)(v2 + 24);
    if ( v11 == nullptr )
      v11 = *(const CHAR **)(*(_QWORD *)(v2 + 8) + 8LL);
    v12 = *(_QWORD *)(v5 + 64);
    *(_QWORD *)(v12 + 16) = sub_14098C150(lpMultiByteStr: v11);
    if ( *(_QWORD *)(*(_QWORD *)(v5 + 64) + 16LL) == 0 )
      return 27;
    goto LABEL_19;
  }
  return result;
}