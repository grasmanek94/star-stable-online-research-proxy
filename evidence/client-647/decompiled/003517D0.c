__int64 __fastcall sub_1403517D0(__int64 a1, _DWORD *a2)
{
  unsigned __int8 v4; // bl
  void *v5; // rax
  void *v6; // rax
  __int128 v8; // [rsp+20h] [rbp-40h] BYREF
  __int128 v9; // [rsp+30h] [rbp-30h] BYREF
  __m128i si128; // [rsp+40h] [rbp-20h]
  __int128 v11; // [rsp+50h] [rbp-10h] BYREF
  int v12; // [rsp+78h] [rbp+18h] BYREF
  _DWORD *v13; // [rsp+80h] [rbp+20h] BYREF

  v8 = 0;
  v9 = 0;
  si128 = 0;
  v11 = 0u;
  v13 = a2;
  if ( (unsigned __int8)sub_1402E7D10(a1: &v13, a2: &v8) != 0
    && (unsigned __int8)sub_1402E7D10(a1: &v13, a2: (char *)&v9 + 8) != 0
    && (v12 = v11, sub_1401D0820(a1: a2, a2: &v12) != 0)
    && (LODWORD(v11) = v12, v12 = DWORD1(v11), sub_1401D0820(a1: a2, a2: &v12) != 0)
    && (DWORD1(v11) = v12, (unsigned __int8)sub_1402B7CD0(a1: &v13, a2: (char *)&v11 + 8) != 0) )
  {
    (*(void (__fastcall **)(__int64, __int128 *))(a1 + 8))(a1: a1 + 16, a2: &v8);
    v4 = 1;
  }
  else
  {
    v4 = 0;
  }
  if ( *((_QWORD *)&v9 + 1) != 0 )
  {
    if ( (unsigned __int64)(4 * ((si128.m128i_i64[1] - *((_QWORD *)&v9 + 1)) >> 2)) < 0x1000 )
    {
      v5 = *((void **)&v9 + 1);
    }
    else
    {
      v5 = *(void **)(*((_QWORD *)&v9 + 1) - 8LL);
      if ( (unsigned __int64)(*((_QWORD *)&v9 + 1) - (_QWORD)v5 - 8LL) > 0x1F )
        goto LABEL_17;
    }
    sub_1409DB4C0(lpMem: v5);
  }
  *((_QWORD *)&v9 + 1) = 19937;
  si128 = _mm_load_si128((const __m128i *)&xmmword_140EEE200);
  if ( (_QWORD)v8 != 0 )
  {
    if ( (unsigned __int64)(4 * ((__int64)(v9 - v8) >> 2)) < 0x1000 )
    {
      v6 = (void *)v8;
    }
    else
    {
      v6 = *(void **)(v8 - 8);
      if ( (unsigned __int64)(v8 - (_QWORD)v6 - 8) > 0x1F )
LABEL_17:
        __fastfail(5u);
    }
    sub_1409DB4C0(lpMem: v6);
  }
  return v4;
}