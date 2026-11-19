void sub_140EE2820()
{
  void *v0; // rcx

  if ( (unsigned __int64)qword_141313C10 > 0xF )
  {
    v0 = (void *)qword_141313BF8;
    if ( (unsigned __int64)(qword_141313C10 + 1) >= 0x1000 )
    {
      if ( (unsigned __int64)(qword_141313BF8 - *(_QWORD *)(qword_141313BF8 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v0 = *(void **)(qword_141313BF8 - 8);
    }
    sub_1409DB4C0(lpMem: v0);
  }
  qword_141313BF8 = 19937;
  qword_141313C08 = 0;
  qword_141313C10 = 31;
}