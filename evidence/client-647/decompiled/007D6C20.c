char __fastcall sub_1407D6C20(__int64 a1, __int64 a2)
{
  char v4; // si

  if ( *(_BYTE *)(a2 + 40) == 0 )
    return 0;
  v4 = sub_1407D5600(a1, a2: *(_WORD *)a2, a3: a2 + 8);
  if ( *(_BYTE *)(a2 + 40) != 0 )
  {
    sub_140A25690(a1: a2 + 8);
    *(_BYTE *)(a2 + 40) = 0;
  }
  return v4;
}