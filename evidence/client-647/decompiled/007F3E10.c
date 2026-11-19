char __fastcall sub_1407F3E10(__int64 a1, unsigned __int8 a2, _DWORD *a3)
{
  __int64 *v6; // r9
  __int64 *v7; // rdx
  __int64 *i; // rcx
  unsigned int v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = 0;
  if ( sub_1401D0820(a1: a3, a2: &v10) == 0 )
    return 0;
  v6 = *(__int64 **)(a1 + 8);
  v7 = v6;
  for ( i = (__int64 *)v6[1]; *((_BYTE *)i + 25) == 0; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 8) >= v10 )
      v7 = i;
    else
      i += 2;
  }
  if ( *((_BYTE *)v7 + 25) != 0 || v10 < *((_DWORD *)v7 + 8) || v7 == v6 )
    return 0;
  (*(void (__fastcall **)(__int64, _QWORD, _DWORD *))(*(_QWORD *)v7[5] + 8LL))(a1: v7[5], a2, a3);
  return 1;
}