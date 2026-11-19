__int64 __fastcall sub_14080DE00(__int64 a1, __int64 a2, int *a3)
{
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  _QWORD v10[2]; // [rsp+20h] [rbp-88h] BYREF
  int v11; // [rsp+30h] [rbp-78h]
  __int64 v12; // [rsp+34h] [rbp-74h]
  __m256i v13; // [rsp+40h] [rbp-68h] BYREF
  __int128 v14; // [rsp+60h] [rbp-48h] BYREF

  v13.m256i_i8[0] = 0;
  v13.m256i_i16[1] = 0;
  *(__int64 *)((char *)v13.m256i_i64 + 4) = 0xFFFFFFFF00000000uLL;
  *(_OWORD *)((char *)&v13.m256i_u64[1] + 4) = 0;
  sub_1409CB2E0(a1: &v14);
  v11 = *a3;
  DWORD2(v14) = 0;
  v10[0] = &PXEngine::ByteStreamReader::`vftable';
  v10[1] = a2;
  v12 = 0;
  if ( (unsigned __int8)sub_140801400(a1: v10, a2: &v13) != 0 )
  {
    v6 = *(_OWORD *)v13.m256i_i8;
    *(_BYTE *)(a1 + 48) = 1;
    v7 = *(_OWORD *)&v13.m256i_u64[2];
    *(_OWORD *)a1 = v6;
    v8 = v14;
    *(_OWORD *)(a1 + 16) = v7;
    *(_OWORD *)(a1 + 32) = v8;
  }
  else
  {
    if ( (unsigned __int8)sub_140059D90(a1: off_1410204F0, a2: "Could not deserialize Packet Header!") != 0 )
      __debugbreak();
    *(_BYTE *)(a1 + 48) = 0;
  }
  return a1;
}