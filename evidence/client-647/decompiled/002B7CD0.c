char __fastcall sub_1402B7CD0(_DWORD **a1, int *a2)
{
  _DWORD *v3; // rcx
  char result; // al
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  v5 = *a2;
  result = sub_1401D0820(a1: v3, a2: &v5);
  if ( result != 0 )
  {
    *a2 = v5;
    return 1;
  }
  return result;
}