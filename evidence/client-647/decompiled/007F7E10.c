__int64 __fastcall sub_1407F7E10(__int64 a1, __int64 a2)
{
  sub_1407F7730(a1, a2);
  *(_QWORD *)a1 = &PXEngine::NetActivity::`vftable';
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  sub_1407F7D80(a1: a1 + 40);
  *(_DWORD *)(a1 + 104) = 0;
  *(_OWORD *)(a1 + 108) = 0;
  *(_BYTE *)(a1 + 124) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 144) = 0;
  if ( *(_QWORD *)(a1 + 24) != 0 )
  {
    if ( (unsigned __int8)sub_140059D90(
                            a1: off_141019BA0,
                            a2: "This is only for copying uninitialized NetActivity objects and to support actor copy!") != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  return a1;
}