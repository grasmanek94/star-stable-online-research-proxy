char __fastcall sub_14080E2A0(__int64 a1, const unsigned int *a2)
{
  int v3; // eax

  if ( *(_BYTE *)(a1 + 128) != 0 )
  {
    v3 = sub_140E82B50(a1: a1 + 80, a2);
    if ( v3 != 0 )
    {
      LOBYTE(v3) = sub_140059D90(a1: off_1410205F0, a2: "Different default keys can't be used at the same time!");
      if ( (_BYTE)v3 != 0 )
        __debugbreak();
    }
  }
  else
  {
    sub_140A485A0(context: a1 + 72, key_words: a2);
    LOBYTE(v3) = *(_BYTE *)(a1 + 128);
    *(_BYTE *)(a1 + 128) = 1;
  }
  return v3;
}