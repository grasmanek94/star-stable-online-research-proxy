__int64 __fastcall sub_1407C1170(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // bl
  __m256i v6; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]
  _DWORD v8[4]; // [rsp+48h] [rbp-10h] BYREF

  v7 = 0;
  memset(&v6.m256i_u64[1], 0, 24);
  v6.m256i_i64[0] = (__int64)&PXEngine::ByteStreamWriter::`vftable';
  v8[0] = 0;
  if ( (unsigned __int8)sub_1402D2DB0(a1: a2, a2: v8) != 0 && (unsigned __int8)sub_14080D7D0(a1: a2, a2: &v6) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, __m256i *))(a1 + 8))(a1: *(_QWORD *)(a1 + 16), a2: v8[0], a3: &v6);
    v4 = 1;
  }
  else
  {
    v4 = 0;
  }
  sub_140A25690(a1: &v6);
  return v4;
}