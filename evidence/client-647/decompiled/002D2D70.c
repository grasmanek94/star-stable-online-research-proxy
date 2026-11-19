char __fastcall sub_1402D2D70(_DWORD *a1, __int16 *a2)
{
  char result; // al
  __int16 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = *a2;
  result = sub_1402D2B10(a1, a2: &v4);
  if ( result != 0 )
  {
    *a2 = v4;
    return 1;
  }
  return result;
}