char __fastcall sub_1402B82C0(_DWORD *a1, __int64 *a2)
{
  unsigned __int64 v4; // rbp
  __int64 v5; // r15
  __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  unsigned int v9; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned __int64)(a2[1] - *a2) >= 0x3FFFFFFFCLL && (unsigned __int8)sub_140059CA0(a1: off_140F66170) != 0 )
    __debugbreak();
  v9 = (a2[1] - *a2) >> 2;
  if ( sub_1401D0820(a1, a2: &v9) == 0 )
    return 0;
  v4 = v9;
  if ( v9 > 0x3E80 )
    return 0;
  sub_140213570(a1: a2, a2: v9);
  v5 = *a2;
  v6 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1) != 0 )
  {
    v7 = 0;
    if ( (_DWORD)v4 != 0 )
    {
      while ( 1 )
      {
        v9 = 0;
        if ( sub_1401D0820(a1, a2: &v9) == 0 )
          break;
        *(_DWORD *)(v5 + 4 * v7++) = v9;
        if ( v7 >= v4 )
          return 1;
      }
      return 0;
    }
  }
  else if ( (_DWORD)v4 != 0 )
  {
    while ( 1 )
    {
      v9 = *(_DWORD *)(v5 + 4 * v6);
      if ( sub_1401D0820(a1, a2: &v9) == 0 )
        break;
      if ( ++v6 >= v4 )
        return 1;
    }
    return 0;
  }
  return 1;
}