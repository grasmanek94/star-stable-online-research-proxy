void sub_140EE29F0()
{
  void *v0; // rcx

  if ( (unsigned __int64)qword_1413141F0 > 0xF )
  {
    v0 = *(void **)aPlantbiology_0;
    if ( (unsigned __int64)(qword_1413141F0 + 1) >= 0x1000 )
    {
      if ( (unsigned __int64)(*(_QWORD *)aPlantbiology_0 - *(_QWORD *)(*(_QWORD *)aPlantbiology_0 - 8LL) - 8LL) > 0x1F )
        __fastfail(5u);
      v0 = *(void **)(*(_QWORD *)aPlantbiology_0 - 8LL);
    }
    sub_1409DB4C0(lpMem: v0);
  }
  *(_QWORD *)aPlantbiology_0 = 19937;
  qword_1413141E8 = 0;
  qword_1413141F0 = 31;
}