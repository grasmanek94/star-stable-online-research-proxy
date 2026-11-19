__int64 __fastcall sub_1400992B0(__int64 a1, _QWORD *a2)
{
  if ( (_QWORD *)a1 != a2 )
  {
    sub_140083970(lpMem: *(LPVOID *)a1);
    *(_QWORD *)a1 = *a2;
    *a2 = 0;
    *(_QWORD *)(a1 + 8) = a2[1];
    a2[1] = 0;
    *(_QWORD *)(a1 + 16) = a2[2];
    a2[2] = 0;
  }
  return a1;
}