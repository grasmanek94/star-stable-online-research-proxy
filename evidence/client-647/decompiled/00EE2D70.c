void sub_140EE2D70()
{
  void *v0; // rcx

  if ( (unsigned __int64)qword_1413142D0 > 0xF )
  {
    v0 = *(void **)aAttributeflags;
    if ( (unsigned __int64)(qword_1413142D0 + 1) >= 0x1000 )
    {
      if ( (unsigned __int64)(*(_QWORD *)aAttributeflags - *(_QWORD *)(*(_QWORD *)aAttributeflags - 8LL) - 8LL) > 0x1F )
        __fastfail(5u);
      v0 = *(void **)(*(_QWORD *)aAttributeflags - 8LL);
    }
    sub_1409DB4C0(lpMem: v0);
  }
  *(_QWORD *)aAttributeflags = 19937;
  qword_1413142C8 = 0;
  qword_1413142D0 = 31;
}