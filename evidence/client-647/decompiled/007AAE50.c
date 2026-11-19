bool __fastcall sub_1407AAE50(_DWORD *a1, _BYTE *a2)
{
  _QWORD v3[9]; // [rsp+20h] [rbp-48h] BYREF

  v3[0] = 0xFFFFFFFFLL;
  memset(&v3[1], 0, 49);
  qmemcpy(a2, v3, 60);
  if ( a2[56] != 0 )
    a2 = nullptr;
  return sub_1407AA810(a1, (int *)a2);
}