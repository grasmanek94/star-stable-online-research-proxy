void sub_140EE3080()
{
  void *v0; // rcx

  if ( (unsigned __int64)qword_141314370 > 0xF )
  {
    v0 = *(void **)aType_1;
    if ( (unsigned __int64)(qword_141314370 + 1) >= 0x1000 )
    {
      if ( (unsigned __int64)(*(_QWORD *)aType_1 - *(_QWORD *)(*(_QWORD *)aType_1 - 8LL) - 8LL) > 0x1F )
        __fastfail(5u);
      v0 = *(void **)(*(_QWORD *)aType_1 - 8LL);
    }
    sub_1409DB4C0(lpMem: v0);
  }
  *(_QWORD *)aType_1 = 19937;
  qword_141314368 = 0;
  qword_141314370 = 31;
}