void __fastcall sub_140A485A0(__int64 context, const unsigned int *key_words)
{
  __int128 v2; // xmm1

  *(_OWORD *)(context + 8) = *(_OWORD *)key_words;
  v2 = *((_OWORD *)key_words + 1);
  *(_BYTE *)(context + 48) = 1;
  *(_OWORD *)(context + 24) = v2;
}