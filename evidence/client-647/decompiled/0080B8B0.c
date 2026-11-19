_QWORD *__fastcall sub_14080B8B0(_QWORD *a1, __int64 a2)
{
  sub_1407F7730();
  *a1 = &PXEngine::PlayerLook::`vftable';
  a1[3] = 0;
  a1[4] = 0;
  if ( *(_QWORD *)(a2 + 24) != 0 )
  {
    if ( (unsigned __int8)sub_140059D90(
                            a1: off_14101BE40,
                            a2: "This is only for copying uninitialized playerlook objects and to support actor copy!") != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  return a1;
}