void sub_140EE2E50()
{
  void *v0; // rcx

  if ( (unsigned __int64)qword_141314330 > 0xF )
  {
    v0 = *(void **)aFunction;
    if ( (unsigned __int64)(qword_141314330 + 1) >= 0x1000 )
    {
      if ( (unsigned __int64)(*(_QWORD *)aFunction - *(_QWORD *)(*(_QWORD *)aFunction - 8LL) - 8LL) > 0x1F )
        __fastfail(5u);
      v0 = *(void **)(*(_QWORD *)aFunction - 8LL);
    }
    sub_1409DB4C0(lpMem: v0);
  }
  *(_QWORD *)aFunction = 19937;
  qword_141314328 = 0;
  qword_141314330 = 31;
}