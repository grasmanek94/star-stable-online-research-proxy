__int64 __fastcall sub_1407F3DD0(__int64 a1, unsigned int a2)
{
  __int64 *v2; // r8
  __int64 *v3; // rcx
  __int64 *i; // rax

  v2 = *(__int64 **)(a1 + 8);
  v3 = v2;
  for ( i = (__int64 *)v2[1]; *((_BYTE *)i + 25) == 0; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 8) >= a2 )
      v3 = i;
    else
      i += 2;
  }
  if ( *((_BYTE *)v3 + 25) != 0 || a2 < *((_DWORD *)v3 + 8) || v3 == v2 )
    return 0;
  else
    return v3[5];
}