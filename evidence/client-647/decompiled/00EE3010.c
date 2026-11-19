void sub_140EE3010()
{
  void *v0; // rcx

  if ( (unsigned __int64)qword_141314310 > 0xF )
  {
    v0 = *(void **)aSignature;
    if ( (unsigned __int64)(qword_141314310 + 1) >= 0x1000 )
    {
      if ( (unsigned __int64)(*(_QWORD *)aSignature - *(_QWORD *)(*(_QWORD *)aSignature - 8LL) - 8LL) > 0x1F )
        __fastfail(5u);
      v0 = *(void **)(*(_QWORD *)aSignature - 8LL);
    }
    sub_1409DB4C0(lpMem: v0);
  }
  *(_QWORD *)aSignature = 19937;
  qword_141314308 = 0;
  qword_141314310 = 31;
}