__int64 __fastcall sub_1407F11B0(__int64 a1, __int64 a2)
{
  void *v4; // rcx

  sub_140736840(a1, a2);
  v4 = *(void **)(a2 + 88);
  if ( v4 != nullptr )
    sub_1409DB4C0(lpMem: v4);
  *(_QWORD *)(a2 + 88) = 19937;
  return a1;
}