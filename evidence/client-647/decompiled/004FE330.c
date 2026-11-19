char __fastcall sub_1404FE330(_DWORD *a1, __int64 *a2)
{
  unsigned int v4; // ebx
  _OWORD *v5; // rcx
  __int64 v6; // r8
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rbx
  unsigned int v14; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned __int64)(a2[1] - *a2) >= 0xFFFFFFFF0LL && (unsigned __int8)sub_140059CA0(a1: off_140FB8FE0) != 0 )
    __debugbreak();
  v14 = (a2[1] - *a2) >> 4;
  if ( sub_1401D0820(a1, a2: &v14) == 0 )
    return 0;
  v4 = v14;
  if ( v14 > 0x3E80 )
    return 0;
  v5 = (_OWORD *)a2[1];
  v6 = *a2;
  v7 = ((__int64)v5 - *a2) >> 4;
  v8 = v14;
  if ( v14 >= v7 )
  {
    if ( v14 > v7 )
    {
      if ( v14 <= (unsigned __int64)((a2[2] - v6) >> 4) )
      {
        v9 = v14 - v7;
        if ( v14 != v7 )
        {
          do
          {
            *v5 = 0;
            *(_DWORD *)v5++ = -1;
            --v9;
          }
          while ( v9 != 0 );
        }
        a2[1] = (__int64)v5;
      }
      else
      {
        sub_140500880(a1: a2, a2: v14, a3: &v14);
      }
    }
  }
  else
  {
    a2[1] = v6 + 16LL * v14;
  }
  if ( v4 == 0 )
    return 1;
  v10 = *a2;
  v11 = 0;
  while ( 1 )
  {
    v12 = 16 * v11;
    v14 = *(_DWORD *)(v10 + 16 * v11);
    if ( sub_1401D0820(a1, a2: &v14) == 0 )
      break;
    *(_DWORD *)(v10 + 16 * v11) = v14;
    v14 = *(_DWORD *)(v10 + v12 + 4);
    if ( sub_1401D0820(a1, a2: &v14) == 0 )
      break;
    *(_DWORD *)(v10 + v12 + 4) = v14;
    v14 = *(_DWORD *)(v10 + v12 + 8);
    if ( sub_1401D0820(a1, a2: &v14) == 0 )
      break;
    *(_DWORD *)(v10 + v12 + 8) = v14;
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a1 + 16LL))(
           a1,
           a2: v12 + v10 + 12,
           a3: 1) == 0 )
      break;
    if ( ++v11 >= v8 )
      return 1;
  }
  return 0;
}