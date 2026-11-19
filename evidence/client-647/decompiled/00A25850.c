char __fastcall sub_140A25850(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r8d

  v2 = *(_DWORD *)(a1 + 20);
  if ( a2 <= v2 )
  {
    *(_DWORD *)(a1 + 20) = a2;
    return 1;
  }
  else
  {
    if ( (unsigned __int8)sub_140059D90(
                            a1: off_14109EDE0,
                            a2: "Cannot extend written bytes! current size is %u, requested position %u",
                            v2,
                            a2) != 0 )
      __debugbreak();
    return 0;
  }
}