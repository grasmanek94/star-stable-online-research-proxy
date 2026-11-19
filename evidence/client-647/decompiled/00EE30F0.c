void sub_140EE30F0()
{
  void *v0; // rcx

  if ( (unsigned __int64)qword_1413143D0 > 0xF )
  {
    v0 = *(void **)aNebulaprogram;
    if ( (unsigned __int64)(qword_1413143D0 + 1) >= 0x1000 )
    {
      if ( (unsigned __int64)(*(_QWORD *)aNebulaprogram - *(_QWORD *)(*(_QWORD *)aNebulaprogram - 8LL) - 8LL) > 0x1F )
        __fastfail(5u);
      v0 = *(void **)(*(_QWORD *)aNebulaprogram - 8LL);
    }
    sub_1409DB4C0(lpMem: v0);
  }
  *(_QWORD *)aNebulaprogram = 19937;
  qword_1413143C8 = 0;
  qword_1413143D0 = 31;
}