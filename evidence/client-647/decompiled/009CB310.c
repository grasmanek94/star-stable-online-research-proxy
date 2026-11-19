char __fastcall sub_1409CB310(__int64 a1, __int64 *a2)
{
  char result; // al
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = *a2;
  result = sub_1402AF380(a1, a2: &v4);
  if ( result != 0 )
  {
    *a2 = v4;
    return 1;
  }
  return result;
}