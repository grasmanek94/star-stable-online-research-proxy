void sub_140EE2EC0()
{
  void *v0; // rcx

  if ( (unsigned __int64)qword_1413142F0 > 0xF )
  {
    v0 = *(void **)aInstancedtype;
    if ( (unsigned __int64)(qword_1413142F0 + 1) >= 0x1000 )
    {
      if ( (unsigned __int64)(*(_QWORD *)aInstancedtype - *(_QWORD *)(*(_QWORD *)aInstancedtype - 8LL) - 8LL) > 0x1F )
        __fastfail(5u);
      v0 = *(void **)(*(_QWORD *)aInstancedtype - 8LL);
    }
    sub_1409DB4C0(lpMem: v0);
  }
  *(_QWORD *)aInstancedtype = 19937;
  qword_1413142E8 = 0;
  qword_1413142F0 = 31;
}