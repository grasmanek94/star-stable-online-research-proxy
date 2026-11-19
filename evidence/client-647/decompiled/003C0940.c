char __fastcall sub_1403C0940(_DWORD *a1, __int64 *a2)
{
  unsigned int v4; // ebx
  _QWORD *v5; // r8
  __int64 v6; // r10
  __int64 v7; // rsi
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rax
  __int64 v11; // rdi
  unsigned int v13; // [rsp+58h] [rbp+10h] BYREF
  _DWORD *v14; // [rsp+60h] [rbp+18h] BYREF

  if ( (unsigned __int64)((a2[1] - *a2) / 24) >= 0xFFFFFFFF && (unsigned __int8)sub_140059CA0(a1: off_140F87638) != 0 )
    __debugbreak();
  v13 = (a2[1] - *a2) / 24;
  if ( sub_1401D0820(a1, a2: &v13) == 0 )
    return 0;
  v4 = v13;
  if ( v13 > 0x3E80 )
    return 0;
  v5 = (_QWORD *)a2[1];
  v6 = *a2;
  v7 = 0;
  v8 = v13;
  v9 = ((__int64)v5 - *a2) / 24;
  if ( v13 >= v9 )
  {
    if ( v13 > v9 )
    {
      if ( v13 <= (unsigned __int64)((a2[2] - v6) / 24) )
      {
        v10 = v13 - v9;
        if ( v13 != v9 )
        {
          do
          {
            *v5 = 0;
            v5[1] = 0;
            v5[2] = 0;
            v5 += 3;
            --v10;
          }
          while ( v10 != 0 );
        }
        a2[1] = (__int64)v5;
      }
      else
      {
        sub_1403C0FF0(a1: a2, a2: v13, a3: &v13);
      }
    }
  }
  else
  {
    a2[1] = v6 + 24LL * v13;
  }
  v11 = *a2;
  if ( v4 == 0 )
    return 1;
  while ( 1 )
  {
    v14 = a1;
    v13 = *(_DWORD *)(v11 + 24 * v7);
    if ( sub_1401D0820(a1, a2: &v13) == 0 )
      break;
    *(_DWORD *)(v11 + 24 * v7) = v13;
    v13 = *(_DWORD *)(v11 + 24 * v7 + 4);
    if ( sub_1401D0820(a1, a2: &v13) == 0 )
      break;
    *(_DWORD *)(v11 + 24 * v7 + 4) = v13;
    v13 = *(_DWORD *)(v11 + 24 * v7 + 8);
    if ( sub_1401D0820(a1, a2: &v13) == 0 )
      break;
    *(_DWORD *)(v11 + 24 * v7 + 8) = v13;
    v13 = *(_DWORD *)(v11 + 24 * v7 + 12);
    if ( sub_140200540(a1, a2: (int *)&v13) == 0 )
      break;
    *(_DWORD *)(v11 + 24 * v7 + 12) = v13;
    if ( sub_1402B7CD0(a1: &v14, a2: (int *)(v11 + 16 + 24 * v7)) == 0
      || sub_1402B7CD0(a1: &v14, a2: (int *)(v11 + 20 + 24 * v7)) == 0 )
    {
      break;
    }
    if ( ++v7 >= v8 )
      return 1;
  }
  return 0;
}