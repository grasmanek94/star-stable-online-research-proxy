void __fastcall sub_1407F2310(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  char (__fastcall *v6)(__int64, __int64); // rax
  char v7; // al
  _QWORD *v8; // rsi
  int *v9; // rax
  int v10; // eax
  char v11; // r14
  __int64 v12; // rax
  char *v13; // rcx
  __int64 v14; // rax
  void *v15; // rcx
  __int64 v16; // rax
  unsigned __int8 v17; // [rsp+20h] [rbp-E0h] BYREF
  char v18; // [rsp+21h] [rbp-DFh] BYREF
  _BYTE v19[6]; // [rsp+22h] [rbp-DEh] BYREF
  __int64 v20; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v21[8]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v22[2]; // [rsp+70h] [rbp-90h] BYREF
  int v23; // [rsp+80h] [rbp-80h]
  __int64 v24; // [rsp+84h] [rbp-7Ch]
  _QWORD v25[8]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v26[104]; // [rsp+D0h] [rbp-30h] BYREF
  char v27; // [rsp+138h] [rbp+38h] BYREF
  __int64 v28; // [rsp+1A0h] [rbp+A0h]

  v4 = a2;
  v28 = a2;
  if ( *(_WORD *)(a2 + 42) != 2 )
  {
    if ( *(_BYTE *)(a1 + 184) == 0 )
    {
      v15 = *(void **)(a2 + 88);
      goto LABEL_32;
    }
    v13 = &v27;
    goto LABEL_30;
  }
  v21[0] = 0xFFFFFFFFLL;
  memset(&v21[1], 0, 49);
  v22[1] = *(_QWORD *)(a2 + 88);
  v23 = *(_DWORD *)(a2 + 96);
  v24 = 0;
  v22[0] = &PXEngine::ByteStreamReader::`vftable';
  v17 = 0;
  if ( sub_140A4BF00(a1: (__int64)v22, a2: (__int64)&v17, a3: 1u) == 0 || v17 >= 3u )
    goto LABEL_25;
  if ( v17 >= 3uLL )
    __fastfail(5u);
  v6 = (char (__fastcall *)(__int64, __int64))funcs_1407D1C64[v17];
  if ( (char *)v6 == (char *)sub_1407AAE50 )
  {
    v25[0] = 0xFFFFFFFFLL;
    memset(&v25[1], 0, 49);
    qmemcpy(v21, v25, 60);
    v7 = sub_1407AA810(a1: v22, a2: (int *)v21);
  }
  else
  {
    v7 = v6(a1: (__int64)v22, a2: (__int64)v21);
  }
  if ( v7 == 0 )
  {
LABEL_25:
    if ( (unsigned __int8)sub_140059D90(
                            a1: off_141019268,
                            a2: "ClientGameServerConnection: Failed to deserialize ConnectionResponse!") != 0 )
      __debugbreak();
    goto LABEL_31;
  }
  v8 = (_QWORD *)(a1 + 256);
  if ( a1 != -256 && *(_BYTE *)(a1 + 320) == 1 )
  {
    if ( LOBYTE(v21[7]) != 0 )
    {
      v19[0] = 0;
      sub_1407F3210(a1: *v8, a2: v19);
      v14 = *(char *)(a1 + 320);
      if ( (_BYTE)v14 != 0 )
      {
        if ( v14 == 1 )
        {
          sub_140A25690(a1: a1 + 272);
          sub_140017CB0(a1: a1 + 256);
        }
        *(_BYTE *)(a1 + 320) = 0;
      }
      a2 = v4;
      v13 = v26;
    }
    else
    {
      v9 = (int *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 8) + 40LL))(
                    a1: *(_QWORD *)(a1 + 8),
                    a2: &v20);
      if ( *(_BYTE *)(a1 + 184) != 1 )
      {
        v10 = *v9;
        *(_BYTE *)(a1 + 184) = 1;
        *(_DWORD *)(a1 + 176) = v10;
        *(_DWORD *)(a1 + 180) = v10;
      }
      *(_DWORD *)(a1 + 64) = v21[0];
      *(_OWORD *)(a1 + 72) = *(_OWORD *)&v21[5];
      (*(void (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(a1 + 16) + 64LL))(a1: *(_QWORD *)(a1 + 16), a2: &v21[1]);
      v18 = 1;
      sub_1407F3210(a1: *v8, a2: &v18);
      v11 = *(_BYTE *)(a1 + 304);
      v12 = *(char *)(a1 + 320);
      if ( (_BYTE)v12 != 2 )
      {
        if ( v12 == 1 )
        {
          sub_140A25690(a1: a1 + 272);
          sub_140017CB0(a1: a1 + 256);
        }
        *(_BYTE *)(a1 + 320) = 2;
      }
      *(_BYTE *)v8 = v11;
      *(_BYTE *)(a1 + 257) = 0;
      a2 = v4;
      v13 = v26;
    }
LABEL_30:
    v16 = sub_140736840(a1: v13, a2);
    sub_1407369E0(a1: a3, a2: a1 + 24, a3: v16);
  }
LABEL_31:
  v15 = *(void **)(v4 + 88);
LABEL_32:
  if ( v15 != nullptr )
    sub_1409DB4C0(lpMem: v15);
  *(_QWORD *)(v4 + 88) = 19937;
}