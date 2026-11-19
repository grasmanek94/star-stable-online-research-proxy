char __fastcall sub_14044CB30(_DWORD *a1, __int64 *a2)
{
  unsigned int v4; // ebx
  _QWORD *v6; // rcx
  __int64 v7; // r8
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rbx
  unsigned int v13; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned __int64)(a2[1] - *a2) >= 0x7FFFFFFF8LL && (unsigned __int8)sub_140059CA0(a1: off_140F9A508) != 0 )
    __debugbreak();
  v13 = (a2[1] - *a2) >> 3;
  if ( sub_1401D0820(a1, a2: &v13) == 0 )
    return 0;
  v4 = v13;
  if ( v13 > 0x3E80 )
    return 0;
  v6 = (_QWORD *)a2[1];
  v7 = *a2;
  v8 = v13;
  v9 = ((__int64)v6 - *a2) >> 3;
  if ( v13 >= v9 )
  {
    if ( v13 > v9 )
    {
      if ( v13 <= (unsigned __int64)((a2[2] - v7) >> 3) )
      {
        v10 = v13 - v9;
        if ( v13 != v9 )
        {
          do
          {
            *v6++ = 0;
            --v10;
          }
          while ( v10 != 0 );
        }
        a2[1] = (__int64)v6;
      }
      else
      {
        sub_14044E400(a1: a2, a2: v13, a3: &v13);
      }
    }
  }
  else
  {
    a2[1] = v7 + 8LL * v13;
  }
  if ( v4 == 0 )
    return 1;
  v11 = *a2;
  v12 = 0;
  while ( 1 )
  {
    v13 = *(_DWORD *)(v11 + 8 * v12);
    if ( sub_1401D0820(a1, a2: &v13) == 0 )
      break;
    *(_DWORD *)(v11 + 8 * v12) = v13;
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1) != 0 )
    {
      v13 = 0;
      if ( sub_1401D0820(a1, a2: &v13) == 0 )
        return 0;
      *(_DWORD *)(v11 + 8 * v12 + 4) = v13;
    }
    else
    {
      v13 = *(_DWORD *)(v11 + 8 * v12 + 4);
      if ( sub_1401D0820(a1, a2: &v13) == 0 )
        return 0;
    }
    if ( ++v12 >= v8 )
      return 1;
  }
  return 0;
}