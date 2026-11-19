__int64 __fastcall sub_1407C1320(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // bl
  __int64 v5; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v6[12]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v7; // [rsp+90h] [rbp-70h] BYREF
  __int128 v8; // [rsp+A0h] [rbp-60h] BYREF
  __m128i si128; // [rsp+B0h] [rbp-50h]
  _QWORD v10[4]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v11[4]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v12; // [rsp+100h] [rbp+0h] BYREF
  __int128 v13; // [rsp+110h] [rbp+10h] BYREF

  v7 = 0;
  v13 = 0;
  LODWORD(v7) = 0;
  BYTE4(v7) = 0;
  DWORD2(v7) = 0;
  v8 = 0;
  si128 = _mm_load_si128(xmmword_140EF7920);
  LOBYTE(v8) = 0;
  *(_OWORD *)v10 = 0;
  *(__m128i *)&v10[2] = si128;
  LOBYTE(v10[0]) = 0;
  *(_OWORD *)v11 = 0;
  *(__m128i *)&v11[2] = si128;
  LOBYTE(v11[0]) = 0;
  v12 = 0u;
  LOBYTE(v13) = 0;
  DWORD1(v13) = 0;
  BYTE8(v13) = 0;
  v6[0] = (char *)&v13 + 8;
  v6[1] = (char *)&v13 + 4;
  v6[2] = &v13;
  v6[3] = (char *)&v12 + 8;
  v6[4] = (char *)&v12 + 4;
  v6[5] = &v12;
  v6[6] = v11;
  v6[7] = v10;
  v6[8] = &v8;
  v6[9] = (char *)&v7 + 8;
  v6[10] = (char *)&v7 + 4;
  v6[11] = &v7;
  v5 = a2;
  if ( (unsigned __int8)sub_1407AF080(a1: v6, a2: &v5, a3: 0) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, __int128 *))(a1 + 8))(a1: *(_QWORD *)(a1 + 16), a2: &v7);
    v3 = 1;
  }
  else
  {
    v3 = 0;
  }
  sub_1407B33E0(a1: &v7);
  return v3;
}