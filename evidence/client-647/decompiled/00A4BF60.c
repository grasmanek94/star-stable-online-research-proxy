__int64 __fastcall sub_140A4BF60(__int64 a1, int a2)
{
  __int64 result; // rax
  unsigned int v3; // r8d

  result = *(unsigned int *)(a1 + 16);
  v3 = a2 + *(_DWORD *)(a1 + 20);
  if ( (unsigned int)result < v3 )
    v3 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 20) = v3;
  return result;
}