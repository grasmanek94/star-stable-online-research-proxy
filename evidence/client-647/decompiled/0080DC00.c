__int64 __fastcall sub_14080DC00(__int64 a1, __int64 a2, __int64 a3)
{
  char v6; // al
  bool v7; // al
  __int128 v8; // xmm0
  __int64 v9; // rbx
  int v11; // eax
  __int128 v12; // xmm1
  __int64 v13; // rcx
  __int64 v14; // xmm2_8
  unsigned int v15; // edx
  unsigned int v16; // [rsp+30h] [rbp-88h] BYREF
  __int64 v17[2]; // [rsp+38h] [rbp-80h] BYREF
  unsigned int v18; // [rsp+48h] [rbp-70h]
  __int64 v19; // [rsp+4Ch] [rbp-6Ch]
  _BYTE v20[2]; // [rsp+58h] [rbp-60h] BYREF
  __int16 v21; // [rsp+5Ah] [rbp-5Eh]
  int v22; // [rsp+5Ch] [rbp-5Ch]
  int v23; // [rsp+60h] [rbp-58h]
  __int128 v24; // [rsp+64h] [rbp-54h]
  __int64 v25; // [rsp+78h] [rbp-40h] BYREF
  int v26; // [rsp+80h] [rbp-38h]

  if ( *(_QWORD *)(a3 + 40) == 0 )
  {
    if ( (unsigned __int8)sub_140059CA0(a1: off_141020778) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  v6 = *(_BYTE *)(a1 + 128);
  v16 = 0;
  if ( v6 != 0
    && sub_140A47360(
         a1: a1 + 72,
         a2: *(int **)(a3 + 40),
         a3: *(_DWORD *)(a3 + 48),
         a4: *(unsigned int **)(a1 + 152),
         a5: *(_DWORD *)(a1 + 144),
         a6: &v16) )
  {
    goto LABEL_12;
  }
  v7 = sub_140A47360(
         a1: a1 + 16,
         a2: *(int **)(a3 + 40),
         a3: *(_DWORD *)(a3 + 48),
         a4: *(unsigned int **)(a1 + 152),
         a5: *(_DWORD *)(a1 + 144),
         a6: &v16);
  v8 = 0;
  if ( v7 )
  {
    v9 = *(_QWORD *)(a1 + 152);
    v20[0] = 0;
    v21 = 0;
    v22 = 0;
    v23 = -1;
    v24 = 0;
    sub_1409CB2E0(a1: &v25);
    v18 = v16;
    v26 = 0;
    v17[0] = (__int64)&PXEngine::ByteStreamReader::`vftable';
    v17[1] = v9;
    v19 = 0;
    if ( sub_140801400(a1: v17, a2: (__int64)v20) == 0 )
    {
      if ( (unsigned __int8)sub_140059D90(a1: off_1410204F0, a2: "Could not deserialize Packet Header!") != 0 )
        __debugbreak();
    }
    else if ( (unsigned __int16)(v21 - 1) <= 1u )
    {
LABEL_12:
      v11 = *(_DWORD *)(a3 + 52);
      v12 = *(_OWORD *)(a3 + 16);
      v13 = *(_QWORD *)(a1 + 152);
      v14 = *(_QWORD *)(a3 + 32);
      v15 = v16;
      *(_OWORD *)a2 = *(_OWORD *)a3;
      *(_QWORD *)(a2 + 40) = v13;
      *(_OWORD *)(a2 + 16) = v12;
      *(_DWORD *)(a2 + 48) = v15;
      *(_QWORD *)(a2 + 32) = v14;
      *(_DWORD *)(a2 + 52) = v11;
      return a2;
    }
    v8 = 0;
  }
  *(_QWORD *)(a2 + 48) = 0;
  *(_QWORD *)a2 = -1;
  *(_DWORD *)(a2 + 8) = 0;
  *(_OWORD *)(a2 + 12) = v8;
  *(_OWORD *)(a2 + 24) = v8;
  *(_QWORD *)(a2 + 40) = 0;
  return a2;
}