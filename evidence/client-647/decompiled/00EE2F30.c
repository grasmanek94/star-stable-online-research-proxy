void sub_140EE2F30()
{
  void *v0; // rcx

  if ( (unsigned __int64)qword_141314390 > 0xF )
  {
    v0 = *(void **)aBinarymodule;
    if ( (unsigned __int64)(qword_141314390 + 1) >= 0x1000 )
    {
      if ( (unsigned __int64)(*(_QWORD *)aBinarymodule - *(_QWORD *)(*(_QWORD *)aBinarymodule - 8LL) - 8LL) > 0x1F )
        __fastfail(5u);
      v0 = *(void **)(*(_QWORD *)aBinarymodule - 8LL);
    }
    sub_1409DB4C0(lpMem: v0);
  }
  *(_QWORD *)aBinarymodule = 19937;
  qword_141314388 = 0;
  qword_141314390 = 31;
}