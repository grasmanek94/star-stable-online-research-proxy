__int64 __fastcall sub_1407B9B80(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 *v3; // r9
  __int64 *v5; // rdx
  __int64 *i; // rax

  v3 = *(__int64 **)(a1 + 1912);
  v5 = v3;
  for ( i = (__int64 *)v3[1]; *((_BYTE *)i + 25) == 0; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 8) >= a3 )
      v5 = i;
    else
      i += 2;
  }
  if ( *((_BYTE *)v5 + 25) != 0 || a3 < *((_DWORD *)v5 + 8) || v5 == v3 )
  {
    *(_DWORD *)(a2 + 8) = 0;
    *(_QWORD *)a2 = &PXEngine::SafeActorPtrAs<CPXPlayerTPNet>::`vftable';
    *(_DWORD *)(a2 + 12) = 195948557;
    return a2;
  }
  else
  {
    sub_1405F1D40(a1: a2, a2: (__int64)(v5 + 5));
    *(_QWORD *)a2 = &PXEngine::SafeActorPtrAs<CPXPlayerTPNet>::`vftable';
    return a2;
  }
}