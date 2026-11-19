void sub_140EE2C20()
{
  void *v0; // rcx

  if ( (unsigned __int64)qword_1413142B0 > 0xF )
  {
    v0 = *(void **)aGardencentre_0;
    if ( (unsigned __int64)(qword_1413142B0 + 1) >= 0x1000 )
    {
      if ( (unsigned __int64)(*(_QWORD *)aGardencentre_0 - *(_QWORD *)(*(_QWORD *)aGardencentre_0 - 8LL) - 8LL) > 0x1F )
        __fastfail(5u);
      v0 = *(void **)(*(_QWORD *)aGardencentre_0 - 8LL);
    }
    sub_1409DB4C0(lpMem: v0);
  }
  *(_QWORD *)aGardencentre_0 = 19937;
  qword_1413142A8 = 0;
  qword_1413142B0 = 31;
}