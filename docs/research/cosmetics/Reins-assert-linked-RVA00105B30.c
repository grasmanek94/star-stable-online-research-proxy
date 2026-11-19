// Hex-Rays export; function matched through nearby assertion-record references; confirm role in the text.
__int64 *__fastcall sub_140105B30(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // r9
  int v14; // [rsp+20h] [rbp-18h]

  v5 = sub_1405F8CF0(a1: a1 + 616);
  sub_1400E71A0(a1: v5, a2, a3);
  v14 = 1;
  v6 = 0;
  v7 = a2[1];
  v8 = *a2;
  if ( (v7 - *a2) >> 4 != 0 )
  {
    do
    {
      if ( v6 >= (v7 - v8) >> 4 )
        __fastfail(5u);
      v9 = sub_1405F8CF0(a1: v8 + 16 * v6);
      v11 = v9;
      if ( v9 == 0 )
      {
        if ( (unsigned __int8)sub_140059A00(a1: off_140EFE7D0) != 0 )
          __debugbreak();
        sub_1409E7D98(a1: 999);
        __debugbreak();
      }
      LOBYTE(v10) = 1;
      sub_1400CDA30(a1: v9, a2: v10);
      LOBYTE(v12) = 1;
      (*(void (__fastcall **)(__int64, __int128 *, __int64, __int64, int))(*(_QWORD *)v11 + 688LL))(
        a1: v11,
        a2: &xmmword_1412FF5E0,
        a3: 1,
        a4: v12,
        a5: v14);
      ++v6;
      v7 = a2[1];
      v8 = *a2;
    }
    while ( v6 < (v7 - *a2) >> 4 );
  }
  return a2;
}