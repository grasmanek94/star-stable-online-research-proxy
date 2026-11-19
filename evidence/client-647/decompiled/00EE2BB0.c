void sub_140EE2BB0()
{
  void *v0; // rcx

  if ( (unsigned __int64)qword_141314290 > 0xF )
  {
    v0 = *(void **)aGardenbed;
    if ( (unsigned __int64)(qword_141314290 + 1) >= 0x1000 )
    {
      if ( (unsigned __int64)(*(_QWORD *)aGardenbed - *(_QWORD *)(*(_QWORD *)aGardenbed - 8LL) - 8LL) > 0x1F )
        __fastfail(5u);
      v0 = *(void **)(*(_QWORD *)aGardenbed - 8LL);
    }
    sub_1409DB4C0(lpMem: v0);
  }
  *(_QWORD *)aGardenbed = 19937;
  qword_141314288 = 0;
  qword_141314290 = 31;
}