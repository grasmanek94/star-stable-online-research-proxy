__int64 __fastcall sub_1403BD260(__int64 a1, int a2)
{
  int v2; // ebx
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 916);
  *(_DWORD *)(a1 + 916) = v2 ^ ((unsigned __int8)a2 ^ (unsigned __int8)v2) & 1;
  result = sub_1400AE640(a1);
  if ( (_BYTE)result == 0 && a2 != 0 )
  {
    result = *(_DWORD *)(a1 + 916) & 1;
    if ( (*(_BYTE *)(a1 + 916) & 1) != (v2 & 1) )
      *(_DWORD *)(a1 + 504) = 0;
  }
  return result;
}