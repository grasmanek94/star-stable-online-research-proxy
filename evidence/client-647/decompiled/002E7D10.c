char __fastcall sub_1402E7D10(_DWORD **a1, __int64 *a2)
{
  _DWORD *v3; // r14
  char result; // al
  unsigned __int64 v5; // rbp
  __int64 v6; // r15
  __int64 v7; // rbx
  unsigned __int64 v8; // rdi
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  if ( (unsigned __int64)(a2[1] - *a2) >= 0x3FFFFFFFCLL && (unsigned __int8)sub_140059CA0(a1: off_140F66170) != 0 )
    __debugbreak();
  v9 = (a2[1] - *a2) >> 2;
  result = sub_1401D0820(a1: v3, a2: &v9);
  if ( result != 0 )
  {
    v5 = v9;
    if ( v9 > 0x3E80 )
      return 0;
    sub_140213570(a1: a2, a2: v9);
    v6 = *a2;
    v7 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)v3 + 8LL))(a1: v3) != 0 )
    {
      v8 = 0;
      if ( (_DWORD)v5 != 0 )
      {
        while ( 1 )
        {
          v9 = 0;
          if ( sub_1401D0820(a1: v3, a2: &v9) == 0 )
            break;
          *(_DWORD *)(v6 + 4 * v8++) = v9;
          if ( v8 >= v5 )
            return 1;
        }
        return 0;
      }
    }
    else if ( (_DWORD)v5 != 0 )
    {
      while ( 1 )
      {
        v9 = *(_DWORD *)(v6 + 4 * v7);
        if ( sub_1401D0820(a1: v3, a2: &v9) == 0 )
          break;
        if ( ++v7 >= v5 )
          return 1;
      }
      return 0;
    }
    return 1;
  }
  return result;
}