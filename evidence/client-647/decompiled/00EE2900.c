void sub_140EE2900()
{
  void *v0; // rcx

  if ( (unsigned __int64)qword_1413141D0 > 0xF )
  {
    v0 = *(void **)aGeometrypuzzle_24;
    if ( (unsigned __int64)(qword_1413141D0 + 1) >= 0x1000 )
    {
      if ( (unsigned __int64)(*(_QWORD *)aGeometrypuzzle_24 - *(_QWORD *)(*(_QWORD *)aGeometrypuzzle_24 - 8LL) - 8LL) > 0x1F )
        __fastfail(5u);
      v0 = *(void **)(*(_QWORD *)aGeometrypuzzle_24 - 8LL);
    }
    sub_1409DB4C0(lpMem: v0);
  }
  *(_QWORD *)aGeometrypuzzle_24 = 19937;
  qword_1413141C8 = 0;
  qword_1413141D0 = 31;
}