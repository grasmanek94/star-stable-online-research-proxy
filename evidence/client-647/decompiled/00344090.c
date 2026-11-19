char __fastcall sub_140344090(_DWORD **a1, int *a2)
{
  _DWORD *v3; // rcx
  char result; // al
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  v5 = *a2;
  result = sub_140200540(a1: v3, a2: &v5);
  if ( result != 0 )
  {
    *a2 = v5;
    return 1;
  }
  return result;
}