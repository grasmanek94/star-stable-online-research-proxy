__int64 __fastcall sub_140A4C590(__int64 a1, int a2, int a3, int a4, int a5)
{
  int v6; // eax

  v6 = sub_140E6ADF0(a1: a4, a2, a3: a5, a4: a3, a5: 1);
  if ( v6 != 0 || a5 == 0 )
  {
    *(_DWORD *)a1 = v6;
    *(_BYTE *)(a1 + 4) = 1;
    return a1;
  }
  else
  {
    *(_BYTE *)(a1 + 4) = 0;
    return a1;
  }
}