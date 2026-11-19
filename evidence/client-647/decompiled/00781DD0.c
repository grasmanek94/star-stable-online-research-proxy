_QWORD *__fastcall sub_140781DD0(_QWORD *lpMem, char a2)
{
  void (__fastcall ***v4)(_QWORD, __int64); // rcx

  v4 = (void (__fastcall ***)(_QWORD, __int64))lpMem[3];
  if ( v4 != nullptr )
    (**v4)(a1: v4, a2: 1);
  lpMem[3] = 19937;
  sub_1407F7770(a1: lpMem);
  if ( (a2 & 1) != 0 )
    sub_1409DB4C0(lpMem);
  return lpMem;
}