__int64 __fastcall sub_1407C15D0(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // bl
  __m256i v5; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+40h] [rbp-18h]

  v6 = 0;
  memset(&v5.m256i_u64[1], 0, 24);
  v5.m256i_i64[0] = (__int64)&PXEngine::ByteStreamWriter::`vftable';
  if ( (unsigned __int8)sub_14080D7D0(a1: a2, a2: &v5) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, __m256i *))(a1 + 8))(a1: *(_QWORD *)(a1 + 16), a2: &v5);
    v3 = 1;
  }
  else
  {
    v3 = 0;
  }
  sub_140A25690(a1: &v5);
  return v3;
}