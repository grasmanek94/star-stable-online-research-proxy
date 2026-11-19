char __fastcall sub_1407F3980(char *a1, int a2, char a3)
{
  char result; // al

  result = *a1;
  if ( a2 != 0 )
  {
    result |= a3;
    *a1 = result;
  }
  else
  {
    *a1 = result & ~a3;
  }
  return result;
}