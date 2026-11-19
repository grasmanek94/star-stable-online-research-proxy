// Hex-Rays export, baseline 645.348067; descriptive analysis label.
__int64 __fastcall sub_140105CC0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = sub_1405F8CF0(a1: a1 + 616);
  if ( result != 0 )
  {
    result = sub_1400E5610(a1: result);
    if ( (_BYTE)result != 0 )
    {
      sub_140105D20(a1: a3, a2: a1 + 656);
      return sub_140105D20(a1: a3, a2: a1 + 632);
    }
  }
  return result;
}