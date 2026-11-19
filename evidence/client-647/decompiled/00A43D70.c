bool __fastcall sub_140A43D70(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rdx

  v1 = *a1;
  if ( *a1 == 0 )
    v1 = a1[1] - _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  return v1 != 0;
}