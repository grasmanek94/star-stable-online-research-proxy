__int64 __fastcall sub_14080BE80(__int64 a1, __int64 a2)
{
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int64 v5; // [rsp+60h] [rbp-18h]

  v2 = xmmword_1413105E0;
  LODWORD(v5) = 0;
  *(_OWORD *)a2 = 0u;
  BYTE4(v5) = 1;
  *((_QWORD *)&v3 + 1) = 0;
  *(_OWORD *)(a2 + 16) = v2;
  *(double *)&v3 = 0.0;
  *(_OWORD *)(a2 + 32) = v3;
  *(_OWORD *)(a2 + 48) = 0u;
  *(_QWORD *)(a2 + 64) = v5;
  if ( *(_BYTE *)(a2 + 68) != 1 )
    a2 = 0;
  return sub_14080BCE0(a1, a2);
}