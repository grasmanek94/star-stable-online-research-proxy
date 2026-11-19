void sub_140EE2FA0()
{
  void *v0; // rcx

  if ( (unsigned __int64)qword_141314350 > 0xF )
  {
    v0 = *(void **)aProperty;
    if ( (unsigned __int64)(qword_141314350 + 1) >= 0x1000 )
    {
      if ( (unsigned __int64)(*(_QWORD *)aProperty - *(_QWORD *)(*(_QWORD *)aProperty - 8LL) - 8LL) > 0x1F )
        __fastfail(5u);
      v0 = *(void **)(*(_QWORD *)aProperty - 8LL);
    }
    sub_1409DB4C0(lpMem: v0);
  }
  *(_QWORD *)aProperty = 19937;
  qword_141314348 = 0;
  qword_141314350 = 31;
}