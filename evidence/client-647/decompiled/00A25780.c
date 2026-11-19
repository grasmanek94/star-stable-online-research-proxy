void __fastcall sub_140A25780(__int64 a1, int a2)
{
  if ( *(_DWORD *)(a1 + 16) >= (unsigned int)(a2 + *(_DWORD *)(a1 + 20)) )
  {
    *(_DWORD *)(a1 + 20) += a2;
  }
  else
  {
    if ( (unsigned __int8)sub_140059CA0(a1: off_14109ECD0) != 0 )
      __debugbreak();
    *(_DWORD *)(a1 + 20) += a2;
  }
}