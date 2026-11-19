__int64 __fastcall sub_140504FA0(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // bl
  void *v4; // rcx
  __int128 v6; // [rsp+20h] [rbp-19h] BYREF
  LPVOID lpMem[2]; // [rsp+30h] [rbp-9h]
  __m128i si128; // [rsp+40h] [rbp+7h]
  __int128 v9; // [rsp+50h] [rbp+17h] BYREF
  __int128 v10; // [rsp+60h] [rbp+27h]
  __int64 v11; // [rsp+70h] [rbp+37h]
  __int64 v12; // [rsp+78h] [rbp+3Fh]
  __int64 v13; // [rsp+80h] [rbp+47h]

  v9 = 0;
  v10 = 0;
  v12 = 1;
  v13 = 0;
  v6 = 0;
  *(_OWORD *)lpMem = 0;
  si128 = 0;
  BYTE8(v10) = 0;
  v11 = 0;
  if ( (unsigned __int8)sub_1404FDBB0(a1: a2, a2: &v6) != 0 )
  {
    (*(void (__fastcall **)(__int64, __int128 *))(a1 + 8))(a1: a1 + 16, a2: &v6);
    v3 = 1;
  }
  else
  {
    v3 = 0;
  }
  if ( (_BYTE)v12 != 0 )
  {
    if ( BYTE8(v10) != 0 )
    {
      sub_14002AE40(a1: &v9);
      BYTE8(v10) = 0;
    }
    if ( lpMem[1] != nullptr )
    {
      if ( ((si128.m128i_i64[1] - (unsigned __int64)lpMem[1]) & 0xFFFFFFFFFFFFFFF0uLL) < 0x1000 )
      {
        v4 = lpMem[1];
      }
      else
      {
        v4 = *((void **)lpMem[1] - 1);
        if ( (unsigned __int64)((char *)lpMem[1] - (char *)v4 - 8) > 0x1F )
          __fastfail(5u);
      }
      sub_1409DB4C0(lpMem: v4);
    }
    lpMem[1] = (LPVOID)19937;
    si128 = _mm_load_si128((const __m128i *)&xmmword_140EEE200);
    sub_14050BEF0(a1: &v6);
  }
  return v3;
}