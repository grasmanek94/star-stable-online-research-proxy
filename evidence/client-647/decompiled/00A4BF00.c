char __fastcall sub_140A4BF00(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // ecx

  if ( a3 == 0 )
    return 1;
  v5 = *(_DWORD *)(a1 + 20);
  if ( v5 + a3 <= *(_DWORD *)(a1 + 16) )
  {
    sub_140083990(a1: a2, a2: *(_QWORD *)(a1 + 8) + v5, a3);
    *(_DWORD *)(a1 + 20) += a3;
    return 1;
  }
  return 0;
}