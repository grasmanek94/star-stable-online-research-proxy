void sub_140EE2B40()
{
  void *v0; // rcx

  if ( (unsigned __int64)qword_141314270 > 0xF )
  {
    v0 = *(void **)aItemtrigger_0;
    if ( (unsigned __int64)(qword_141314270 + 1) >= 0x1000 )
    {
      if ( (unsigned __int64)(*(_QWORD *)aItemtrigger_0 - *(_QWORD *)(*(_QWORD *)aItemtrigger_0 - 8LL) - 8LL) > 0x1F )
        __fastfail(5u);
      v0 = *(void **)(*(_QWORD *)aItemtrigger_0 - 8LL);
    }
    sub_1409DB4C0(lpMem: v0);
  }
  *(_QWORD *)aItemtrigger_0 = 19937;
  qword_141314268 = 0;
  qword_141314270 = 31;
}