// Read-only Hex-Rays export, client 645.348067.
__int64 __fastcall sub_1406FAAE0(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 624) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 600);
    v5 = a1 + 592;
    if ( v4 == *(_QWORD *)(a1 + 608) )
    {
      return sub_1406F80D0(a1: v5, a2: v4, a3: a2);
    }
    else
    {
      result = sub_1406F9C30(a1: v5, a2: v4, a3: a2);
      *(_QWORD *)(a1 + 600) += 128LL;
    }
  }
  return result;
}