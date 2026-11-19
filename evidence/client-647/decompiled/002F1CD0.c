__int64 __fastcall sub_1402F1CD0(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // bl
  _QWORD v6[6]; // [rsp+20h] [rbp-58h] BYREF
  __m128i si128; // [rsp+50h] [rbp-28h]
  _QWORD v8[3]; // [rsp+60h] [rbp-18h] BYREF

  memset(v6, 0, sizeof(v6));
  si128 = 0;
  v8[0] = 0;
  sub_140082850(a1: v6);
  LOBYTE(v8[0]) = 0;
  if ( (unsigned __int8)sub_1402EA720(a1: a2, a2: v6) != 0
    && (*(unsigned __int8 (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a2 + 16LL))(a1: a2, a2: v8, a3: 1) != 0 )
  {
    (*(void (__fastcall **)(__int64, _QWORD *))(a1 + 8))(a1: a1 + 16, a2: v6);
    v4 = 1;
  }
  else
  {
    v4 = 0;
  }
  si128 = _mm_load_si128(&xmmword_140F6EFE0);
  sub_140017A10(a1: &v6[3]);
  sub_140082DD0(a1: &v6[1]);
  return v4;
}