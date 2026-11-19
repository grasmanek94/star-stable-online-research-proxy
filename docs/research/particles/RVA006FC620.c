// Read-only Hex-Rays export, client 645.348067.
__int64 __fastcall sub_1406FC620(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 v6; // rcx

  result = *(unsigned int *)(a2 + 16);
  if ( (unsigned int)result < 0x10 )
  {
    v5 = 2LL * (unsigned int)result;
    result = sub_14074EDA0(a1: *(_QWORD *)(a1 + 16LL * (unsigned int)result));
    if ( (_BYTE)result != 0 )
    {
      v6 = *(_QWORD *)(a1 + 8 * v5);
      if ( v6 != 0 )
        return sub_14074F680(a1: v6, a2);
    }
  }
  return result;
}