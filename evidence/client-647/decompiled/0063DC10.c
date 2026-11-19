__int64 __fastcall sub_14063DC10(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // rsi
  __int64 result; // rax

  v2 = a1 + 120;
  if ( a1 + 120 != a2 )
  {
    sub_14001B300(a1: a1 + 120);
    *v2 = *a2;
    a1[121] = a2[1];
    a1[122] = a2[2];
    *a2 = 0;
    a2[1] = 0;
    a2[2] = 0;
    return 0;
  }
  return result;
}