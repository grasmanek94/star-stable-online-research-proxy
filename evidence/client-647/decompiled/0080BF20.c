__int64 __fastcall sub_14080BF20(__int64 a1, __int64 a2)
{
  _BYTE v3[52]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v4; // [rsp+60h] [rbp-18h]

  *(_OWORD *)&v3[36] = 0;
  memset(v3, 0, 20);
  *(__m128i *)&v3[20] = _mm_load_si128((const __m128i *)&xmmword_140FED100);
  *(_OWORD *)a2 = *(_OWORD *)v3;
  BYTE4(v4) = 0;
  *(_OWORD *)(a2 + 16) = *(_OWORD *)&v3[16];
  *(_OWORD *)(a2 + 32) = *(_OWORD *)&v3[32];
  *(_OWORD *)(a2 + 48) = 0u;
  *(_QWORD *)(a2 + 64) = v4;
  if ( *(_BYTE *)(a2 + 68) != 0 )
    a2 = 0;
  return sub_14080BDB0(a1, a2);
}