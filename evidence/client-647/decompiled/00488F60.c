__int64 __fastcall sub_140488F60(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // bl
  void *v4; // rcx
  void *v5; // rcx
  __int64 v7; // [rsp+20h] [rbp-68h] BYREF
  __int128 v8; // [rsp+28h] [rbp-60h]
  __int64 v9; // [rsp+38h] [rbp-50h]
  LPVOID lpMem[2]; // [rsp+40h] [rbp-48h]
  __m128i si128; // [rsp+50h] [rbp-38h]
  __int128 v12; // [rsp+60h] [rbp-28h]

  v7 = 0;
  v8 = 0;
  v9 = 0;
  lpMem[0] = (LPVOID)15;
  LOBYTE(v8) = 0;
  lpMem[1] = nullptr;
  si128 = 0;
  v12 = 0u;
  if ( (unsigned __int8)sub_140481B60(a1: a2, a2: &v7) != 0 )
  {
    (*(void (__fastcall **)(__int64, __int64 *))(a1 + 8))(a1: a1 + 16, a2: &v7);
    v3 = 1;
  }
  else
  {
    v3 = 0;
  }
  if ( lpMem[1] != nullptr )
  {
    if ( (unsigned __int64)(28 * ((signed __int64)(si128.m128i_i64[1] - (unsigned __int64)lpMem[1]) / 28)) < 0x1000 )
    {
      v4 = lpMem[1];
    }
    else
    {
      v4 = *((void **)lpMem[1] - 1);
      if ( (unsigned __int64)((char *)lpMem[1] - (char *)v4 - 8) > 0x1F )
        goto LABEL_16;
    }
    sub_1409DB4C0(lpMem: v4);
  }
  lpMem[1] = (LPVOID)19937;
  si128 = _mm_load_si128((const __m128i *)&xmmword_140EEE200);
  if ( lpMem[0] > (LPVOID)0xF )
  {
    v5 = (void *)v8;
    if ( (unsigned __int64)lpMem[0] + 1 < 0x1000 )
    {
LABEL_14:
      sub_1409DB4C0(lpMem: v5);
      return v3;
    }
    if ( (unsigned __int64)(v8 - *(_QWORD *)(v8 - 8) - 8) <= 0x1F )
    {
      v5 = *(void **)(v8 - 8);
      goto LABEL_14;
    }
LABEL_16:
    __fastfail(5u);
  }
  return v3;
}