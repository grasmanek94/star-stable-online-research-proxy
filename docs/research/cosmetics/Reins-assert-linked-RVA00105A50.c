// Hex-Rays export; function matched through nearby assertion-record references; confirm role in the text.
__int64 __fastcall sub_140105A50(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 i; // rdi
  __int64 v6; // rdi
  __int64 j; // rbx

  result = sub_1405F8CF0(a1: (__int64)(a1 + 77));
  v3 = result;
  if ( result == 0 )
  {
    if ( (unsigned __int8)sub_140059A00(a1: off_140EFEA18) != 0 )
      __debugbreak();
    sub_1409E7D98(a1: 999);
    JUMPOUT(0x140105B27LL);
  }
  v4 = a1[79];
  for ( i = a1[80]; v4 != i; v4 += 16 )
  {
    result = sub_1405F8CF0(a1: v4);
    if ( result != 0 )
      result = sub_1400E6500(a1: v3, a2: v4, a3: 4);
  }
  v6 = a1[83];
  for ( j = a1[82]; j != v6; j += 16 )
  {
    result = sub_1405F8CF0(a1: j);
    if ( result != 0 )
      result = sub_1400E6500(a1: v3, a2: j, a3: 4);
  }
  return result;
}