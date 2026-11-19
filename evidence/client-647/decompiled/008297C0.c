char __fastcall sub_1408297C0(_DWORD *a1, __int64 a2)
{
  int *v2; // rbx
  char result; // al
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = (int *)a2;
  if ( a2 == 0 || *(_BYTE *)(a2 + 4) != 1 )
    v2 = nullptr;
  v4 = *v2;
  result = sub_1401D0820(a1, a2: &v4);
  if ( result != 0 )
  {
    *v2 = v4;
    return 1;
  }
  return result;
}