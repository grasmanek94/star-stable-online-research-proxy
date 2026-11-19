__int64 __fastcall sub_140522190(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // bl
  void *v4; // rax
  _QWORD v6[4]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v7[4]; // [rsp+40h] [rbp-40h] BYREF
  __m128i si128; // [rsp+60h] [rbp-20h] BYREF
  __int128 v9; // [rsp+70h] [rbp-10h]
  __int64 v10; // [rsp+98h] [rbp+18h] BYREF

  si128 = 0;
  v9 = 0;
  *(_OWORD *)v7 = 1u;
  *(_OWORD *)&v7[2] = 0;
  BYTE8(v9) = 0;
  v6[0] = &si128;
  v6[1] = &v7[1];
  v6[2] = (char *)v7 + 4;
  v6[3] = v7;
  v10 = a2;
  if ( (unsigned __int8)sub_14051F200(a1: v6, a2: &v10, a3: 0) != 0 )
  {
    (*(void (__fastcall **)(__int64, _QWORD *))(a1 + 8))(a1: a1 + 16, a2: v7);
    v3 = 1;
  }
  else
  {
    v3 = 0;
  }
  if ( BYTE8(v9) != 0 )
  {
    if ( si128.m128i_i64[0] != 0 )
    {
      if ( (unsigned __int64)(8 * ((__int64)(v9 - si128.m128i_i64[0]) >> 3)) < 0x1000 )
      {
        v4 = (void *)si128.m128i_i64[0];
      }
      else
      {
        v4 = *(void **)(si128.m128i_i64[0] - 8);
        if ( (unsigned __int64)(si128.m128i_i64[0] - (_QWORD)v4 - 8) > 0x1F )
          __fastfail(5u);
      }
      sub_1409DB4C0(lpMem: v4);
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_140EEE200);
    *(_QWORD *)&v9 = 19937;
    BYTE8(v9) = 0;
  }
  sub_140519410(a1: &v7[1]);
  return v3;
}