char __fastcall sub_1402B88B0(_DWORD *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  int v9; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1) == 0 )
  {
    if ( a3 != 0 )
    {
      while ( 1 )
      {
        v9 = *(_DWORD *)(a2 + 4 * v6);
        if ( sub_1401D0820(a1, a2: &v9) == 0 )
          break;
        if ( ++v6 >= a3 )
          return 1;
      }
      return 0;
    }
    return 1;
  }
  v7 = 0;
  if ( a3 == 0 )
    return 1;
  while ( 1 )
  {
    v9 = 0;
    if ( sub_1401D0820(a1, a2: &v9) == 0 )
      break;
    *(_DWORD *)(a2 + 4 * v7++) = v9;
    if ( v7 >= a3 )
      return 1;
  }
  return 0;
}