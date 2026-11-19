void sub_140EE2980()
{
  void *v0; // rcx

  if ( (unsigned __int64)qword_141314210 > 0xF )
  {
    v0 = *(void **)aPlantstage;
    if ( (unsigned __int64)(qword_141314210 + 1) >= 0x1000 )
    {
      if ( (unsigned __int64)(*(_QWORD *)aPlantstage - *(_QWORD *)(*(_QWORD *)aPlantstage - 8LL) - 8LL) > 0x1F )
        __fastfail(5u);
      v0 = *(void **)(*(_QWORD *)aPlantstage - 8LL);
    }
    sub_1409DB4C0(lpMem: v0);
  }
  *(_QWORD *)aPlantstage = 19937;
  qword_141314208 = 0;
  qword_141314210 = 31;
}