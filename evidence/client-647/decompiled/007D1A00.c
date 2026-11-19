__int64 __fastcall sub_1407D1A00(__int64 a1, unsigned __int16 a2, __int64 a3, int a4)
{
  int v4; // ebx
  __int64 v6; // r10
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 result; // rax
  const char *v11; // rax
  const char *v12; // rax
  char (__fastcall *v13)(__int64, __int64); // r8
  char v14; // al
  _QWORD v15[2]; // [rsp+20h] [rbp-79h] BYREF
  int v16; // [rsp+30h] [rbp-69h]
  __int64 v17; // [rsp+34h] [rbp-65h]
  _QWORD v18[8]; // [rsp+40h] [rbp-59h] BYREF
  _QWORD v19[8]; // [rsp+80h] [rbp-19h] BYREF
  _BYTE v20[48]; // [rsp+C0h] [rbp+27h] BYREF
  unsigned __int8 v21; // [rsp+108h] [rbp+6Fh] BYREF

  v4 = a2;
  v15[1] = a3;
  v16 = a4;
  v6 = *(_QWORD *)(a1 + 2896);
  v15[0] = &PXEngine::ByteStreamReader::`vftable';
  v17 = 0;
  v7 = *(_QWORD *)(a1 + 2912);
  v8 = *(_QWORD *)(a1 + 2936)
     & (0x100000001B3LL * (HIBYTE(a2) ^ (0x100000001B3LL * ((unsigned __int8)a2 ^ 0xCBF29CE484222325uLL))));
  v9 = *(_QWORD *)(v7 + 16 * v8 + 8);
  if ( v9 == v6 )
  {
LABEL_6:
    v9 = 0;
    goto LABEL_7;
  }
  if ( (_WORD)v4 != *(_WORD *)(v9 + 16) )
  {
    while ( v9 != *(_QWORD *)(v7 + 16 * v8) )
    {
      v9 = *(_QWORD *)(v9 + 8);
      if ( (_WORD)v4 == *(_WORD *)(v9 + 16) )
        goto LABEL_7;
    }
    goto LABEL_6;
  }
LABEL_7:
  if ( v9 != 0 && v9 != v6 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(v9 + 24) + 8LL))(
               a1: *(_QWORD *)(v9 + 24),
               a2: v15);
    if ( (_BYTE)result != 0 )
      return result;
    v11 = sub_14080C330(message_id: v4);
    result = sub_140059D90(a1: off_141012D48, a2: "Failed to execute '%s' sent from server!", v11);
    goto LABEL_28;
  }
  if ( v4 != 2 )
  {
    v12 = sub_14080C330(message_id: v4);
    result = sub_140059D90(
               a1: off_141012D98,
               a2: "Unknown message '%s' received from server that isn't handled by the RPC executor!",
               v12);
    goto LABEL_28;
  }
  v18[0] = 0xFFFFFFFFLL;
  memset(&v18[1], 0, 49);
  v21 = 0;
  if ( sub_140A4BF00(a1: (__int64)v15, a2: (__int64)&v21, a3: 1u) != 0 && v21 < 3u )
  {
    if ( v21 >= 3uLL )
      __fastfail(5u);
    v13 = (char (__fastcall *)(__int64, __int64))funcs_1407D1C64[v21];
    if ( (char *)v13 == (char *)sub_1407AAE50 )
    {
      v19[0] = 0xFFFFFFFFLL;
      memset(&v19[1], 0, 49);
      qmemcpy(v18, v19, 60);
      v14 = sub_1407AA810(a1: v15, a2: (int *)v18);
    }
    else
    {
      v14 = v13(a1: (__int64)v15, a2: (__int64)v18);
    }
    if ( v14 != 0 )
    {
      if ( SLOBYTE(v18[7]) == -1 )
        sub_140466030(a1: v20, a2: v18);
      result = SLOBYTE(v18[7]);
      if ( LOBYTE(v18[7]) != 0 )
      {
        if ( SLOBYTE(v18[7]) == 1 )
          *(_DWORD *)(a1 + 556) = 3140;
        else
          *(_DWORD *)(a1 + 556) = 3040;
        *(_DWORD *)(a1 + 316) = 1;
        *(_DWORD *)(a1 + 320) = 1065353216;
      }
      return result;
    }
  }
  result = sub_140059D90(a1: off_141012DC0, a2: "Failed to deserialize ConnectionResponse!");
LABEL_28:
  if ( (_BYTE)result != 0 )
    __debugbreak();
  return result;
}