__int64 __fastcall sub_1402F1DD0(__int64 a1, _DWORD *a2)
{
  unsigned __int8 v3; // bl
  void *v4; // rax
  void *v5; // rax
  __int64 v7; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v8[7]; // [rsp+28h] [rbp-38h] BYREF
  int v9; // [rsp+78h] [rbp+18h] BYREF
  _DWORD *v10; // [rsp+80h] [rbp+20h] BYREF

  v7 = 0;
  memset(v8, 0, 48);
  v10 = a2;
  v9 = 0;
  if ( sub_1401D0820(a1: a2, a2: &v9) != 0
    && (LODWORD(v7) = v9, (unsigned __int8)sub_1402E7D10(a1: &v10, a2: v8) != 0)
    && (unsigned __int8)sub_1402E7D10(a1: &v10, a2: &v8[3]) != 0 )
  {
    (*(void (__fastcall **)(__int64, __int64 *))(a1 + 8))(a1: a1 + 16, a2: &v7);
    v3 = 1;
  }
  else
  {
    v3 = 0;
  }
  if ( v8[3] != 0 )
  {
    if ( (unsigned __int64)(4 * ((__int64)(v8[5] - v8[3]) >> 2)) < 0x1000 )
    {
      v4 = (void *)v8[3];
    }
    else
    {
      v4 = *(void **)(v8[3] - 8LL);
      if ( (unsigned __int64)(v8[3] - (_QWORD)v4 - 8LL) > 0x1F )
        goto LABEL_15;
    }
    sub_1409DB4C0(lpMem: v4);
  }
  *(__m128i *)&v8[3] = _mm_load_si128((const __m128i *)&xmmword_140EEE200);
  v8[5] = 19937;
  if ( v8[0] != 0 )
  {
    if ( (unsigned __int64)(4 * ((__int64)(v8[2] - v8[0]) >> 2)) < 0x1000 )
    {
      v5 = (void *)v8[0];
    }
    else
    {
      v5 = *(void **)(v8[0] - 8LL);
      if ( (unsigned __int64)(v8[0] - (_QWORD)v5 - 8LL) > 0x1F )
LABEL_15:
        __fastfail(5u);
    }
    sub_1409DB4C0(lpMem: v5);
  }
  return v3;
}