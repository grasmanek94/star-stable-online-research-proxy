char __fastcall sub_1407A87B0(_DWORD *a1, __int64 *a2)
{
  int v4; // ebx
  _QWORD *v5; // r8
  __int64 v6; // r10
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned __int64)((a2[1] - *a2) / 24) >= 0xFFFFFFFF && (unsigned __int8)sub_140059CA0(a1: off_141016838) != 0 )
    __debugbreak();
  LODWORD(v14) = (a2[1] - *a2) / 24;
  if ( sub_1401D0820(a1, a2: &v14) == 0 )
    return 0;
  v4 = v14;
  if ( (unsigned int)v14 > 0x3E80 )
    return 0;
  v5 = (_QWORD *)a2[1];
  v6 = *a2;
  v7 = 0;
  v8 = (unsigned int)v14;
  v9 = ((__int64)v5 - *a2) / 24;
  if ( (unsigned int)v14 >= v9 )
  {
    if ( (unsigned int)v14 > v9 )
    {
      if ( (unsigned int)v14 <= (unsigned __int64)((a2[2] - v6) / 24) )
      {
        v10 = (unsigned int)v14 - v9;
        if ( (unsigned int)v14 != v9 )
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
        sub_1403C0FF0(a1: a2, a2: (unsigned int)v14, a3: &v14);
      }
    }
  }
  else
  {
    a2[1] = v6 + 24LL * (unsigned int)v14;
  }
  v11 = *a2;
  if ( v4 == 0 )
    return 1;
  while ( 1 )
  {
    v12 = 3 * v7;
    LODWORD(v14) = *(_DWORD *)(v11 + 24 * v7);
    if ( sub_1401D0820(a1, a2: &v14) == 0 )
      break;
    *(_DWORD *)(v11 + 24 * v7) = v14;
    LODWORD(v14) = *(_DWORD *)(v11 + 24 * v7 + 4);
    if ( sub_1401D0820(a1, a2: &v14) == 0 )
      break;
    *(_DWORD *)(v11 + 24 * v7 + 4) = v14;
    v14 = *(_QWORD *)(v11 + 24 * v7 + 8);
    if ( (unsigned __int8)sub_1407A9D50(a1, a2: &v14) == 0 )
      break;
    *(_QWORD *)(v11 + 24 * v7 + 8) = v14;
    v14 = *(_QWORD *)(v11 + 24 * v7 + 16);
    if ( (unsigned __int8)sub_1407A9D50(a1, a2: &v14) == 0 )
      break;
    ++v7;
    *(_QWORD *)(v11 + 8 * v12 + 16) = v14;
    if ( v7 >= v8 )
      return 1;
  }
  return 0;
}