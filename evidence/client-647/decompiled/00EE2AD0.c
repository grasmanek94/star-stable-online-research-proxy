void sub_140EE2AD0()
{
  void *v0; // rcx

  if ( (unsigned __int64)qword_141314230 > 0xF )
  {
    v0 = *(void **)aGarden_0;
    if ( (unsigned __int64)(qword_141314230 + 1) >= 0x1000 )
    {
      if ( (unsigned __int64)(*(_QWORD *)aGarden_0 - *(_QWORD *)(*(_QWORD *)aGarden_0 - 8LL) - 8LL) > 0x1F )
        __fastfail(5u);
      v0 = *(void **)(*(_QWORD *)aGarden_0 - 8LL);
    }
    sub_1409DB4C0(lpMem: v0);
  }
  *(_QWORD *)aGarden_0 = 19937;
  qword_141314228 = 0;
  qword_141314230 = 31;
}