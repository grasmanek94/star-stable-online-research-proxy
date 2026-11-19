char __fastcall sub_1407A8330(_DWORD *a1, __int64 *a2)
{
  __int64 v4; // r9
  _QWORD *v5; // rbx
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r8
  _QWORD *v8; // rbp
  _QWORD *i; // rdi
  unsigned __int64 v10; // rax
  __int64 v11; // r15
  unsigned __int64 v12; // rdi
  __int64 v13; // rbx
  int v15; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v16; // [rsp+60h] [rbp+18h] BYREF

  if ( (unsigned __int64)((a2[1] - *a2) / 40) >= 0xFFFFFFFF && (unsigned __int8)sub_140059CA0(a1: off_1410165C0) != 0 )
    __debugbreak();
  v16 = (a2[1] - *a2) / 40;
  if ( sub_1401D0820(a1, a2: &v16) == 0 || v16 > 0x3E80 )
    return 0;
  v4 = *a2;
  v5 = (_QWORD *)a2[1];
  v6 = v16;
  v7 = ((__int64)v5 - *a2) / 40;
  if ( v16 >= v7 )
  {
    if ( v16 > v7 )
    {
      if ( v16 <= (unsigned __int64)((a2[2] - v4) / 40) )
      {
        v10 = v16 - v7;
        if ( v16 != v7 )
        {
          do
          {
            *(_OWORD *)v5 = 0;
            v5[2] = 0;
            v5[3] = 15;
            *(_BYTE *)v5 = 0;
            v5[4] = 0;
            v5 += 5;
            --v10;
          }
          while ( v10 != 0 );
        }
        a2[1] = (__int64)v5;
      }
      else
      {
        sub_1407AD970(a1: a2, a2: v16, a3: &v15);
      }
    }
  }
  else
  {
    v8 = (_QWORD *)(v4 + 40LL * v16);
    for ( i = v8; i != v5; i += 5 )
    {
      sub_14001B5A0(a1: i);
      *i = 19937;
      i[2] = 0;
      i[3] = 31;
    }
    a2[1] = (__int64)v8;
  }
  v11 = *a2;
  v12 = 0;
  if ( v16 == 0 )
    return 1;
  while ( 1 )
  {
    v13 = v11 + 40 * v12;
    if ( sub_1402B4D00(a1, a2: (__int64 *)v13) == 0 )
      break;
    v15 = *(_DWORD *)(v13 + 32);
    if ( sub_1401D0820(a1, a2: &v15) == 0 )
      break;
    *(_DWORD *)(v13 + 32) = v15;
    v15 = *(_DWORD *)(v13 + 36);
    if ( sub_1401D0820(a1, a2: &v15) == 0 )
      break;
    ++v12;
    *(_DWORD *)(v13 + 36) = v15;
    if ( v12 >= v6 )
      return 1;
  }
  return 0;
}