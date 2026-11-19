char __fastcall sub_1401D0C80(_DWORD *a1, int *a2)
{
  char result; // al
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = *a2;
  result = sub_1401D0820(a1, a2: &v4);
  if ( result != 0 )
  {
    *a2 = v4;
    return 1;
  }
  return result;
}