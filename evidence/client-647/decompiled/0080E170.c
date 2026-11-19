char __fastcall sub_14080E170(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  _DWORD *v7; // r9
  unsigned int v8; // r8d
  _BYTE *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  unsigned int v14; // [rsp+20h] [rbp-68h]
  int v15; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v16[4]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v17; // [rsp+58h] [rbp-30h]
  __int64 v18; // [rsp+60h] [rbp-28h]
  int v19; // [rsp+68h] [rbp-20h]
  int v20; // [rsp+6Ch] [rbp-1Ch]

  sub_14080DE00(a1: (__int64)v16, a2: *(_QWORD *)(a2 + 40), a3: (int *)(a2 + 48));
  if ( (_BYTE)v19 == 0 )
    return 0;
  if ( (unsigned __int16)(WORD1(v16[0]) - 1) > 1u )
  {
    v4 = 72;
    v5 = 120;
  }
  else
  {
    v4 = 16;
    v5 = 64;
  }
  if ( *(_BYTE *)(v5 + a1) == 0 )
  {
    if ( (unsigned __int8)sub_140059D90(
                            a1: off_1410206B0,
                            a2: "NETWORK ERROR: GameServerEncryptedNetworkLayer couldn't send as Crypto key is not set!") != 0 )
      __debugbreak();
    return 0;
  }
  v7 = *(_DWORD **)(a1 + 136);
  v8 = *(_DWORD *)(a2 + 48);
  v9 = *(_BYTE **)(a2 + 40);
  v14 = *(_DWORD *)(a1 + 132);
  v15 = 0;
  if ( (unsigned int)sub_140A47B80(a1: a1 + v4, a2: v9, a3: v8, a4: v7, a5: v14, a6: &v15) != 0 )
    return 0;
  v10 = *(_QWORD *)(a1 + 136);
  v11 = *(_QWORD *)(a1 + 8);
  v12 = *(_OWORD *)(a2 + 16);
  *(_OWORD *)v16 = *(_OWORD *)a2;
  v13 = *(_OWORD *)(a2 + 32);
  *(_OWORD *)&v16[2] = v12;
  *(_QWORD *)&v12 = *(_QWORD *)(a2 + 48);
  v17 = v13;
  v18 = v10;
  v20 = DWORD1(v12);
  v19 = v15;
  return (*(char (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v11 + 48LL))(a1: v11, a2: v16);
}