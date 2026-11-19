__int64 __fastcall sub_1403BC970(__int64 a1, char a2)
{
  __int64 result; // rax
  __int64 v4; // rbx
  const char *v5; // rdx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  *(_BYTE *)(a1 + 533) = a2;
  result = sub_1405F1E20(a1: a1 + 440);
  if ( (_BYTE)result != 0 )
  {
    v4 = sub_1405F1EE0(a1: a1 + 440);
    sub_1405F1D40(a1: (__int64)v6, a2: a1 + 120);
    v5 = "PetInSaddleBag";
    if ( *(_BYTE *)(a1 + 533) != 0 )
      v5 = "PetOnGround";
    return sub_1400CC9A0(a1: v4, a2: v5, a3: v6);
  }
  return result;
}