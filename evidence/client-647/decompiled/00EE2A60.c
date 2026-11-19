void sub_140EE2A60()
{
  void *v0; // rcx

  if ( (unsigned __int64)qword_141314250 > 0xF )
  {
    v0 = *(void **)aBasicplantinfo;
    if ( (unsigned __int64)(qword_141314250 + 1) >= 0x1000 )
    {
      if ( (unsigned __int64)(*(_QWORD *)aBasicplantinfo - *(_QWORD *)(*(_QWORD *)aBasicplantinfo - 8LL) - 8LL) > 0x1F )
        __fastfail(5u);
      v0 = *(void **)(*(_QWORD *)aBasicplantinfo - 8LL);
    }
    sub_1409DB4C0(lpMem: v0);
  }
  *(_QWORD *)aBasicplantinfo = 19937;
  qword_141314248 = 0;
  qword_141314250 = 31;
}