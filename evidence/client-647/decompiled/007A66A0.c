char __fastcall sub_1407A66A0(_DWORD *a1, __int64 *a2)
{
  unsigned __int64 v4; // r12
  __int64 v5; // r9
  _QWORD *v6; // rbx
  unsigned __int64 v7; // r8
  _QWORD *v8; // rbp
  _QWORD *i; // rdi
  unsigned __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rbx
  char v14; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v15; // [rsp+70h] [rbp+18h] BYREF

  if ( (unsigned __int64)((a2[1] - *a2) / 40) >= 0xFFFFFFFF && (unsigned __int8)sub_140059CA0(a1: off_141016548) != 0 )
    __debugbreak();
  v15 = (a2[1] - *a2) / 40;
  if ( sub_1401D0820(a1, a2: &v15) == 0 )
    return 0;
  v4 = v15;
  if ( v15 > 0x3E80 )
    return 0;
  v5 = *a2;
  v6 = (_QWORD *)a2[1];
  v7 = ((__int64)v6 - *a2) / 40;
  if ( v15 >= v7 )
  {
    if ( v15 > v7 )
    {
      if ( v15 <= (unsigned __int64)((a2[2] - v5) / 40) )
      {
        v10 = v15 - v7;
        if ( v15 != v7 )
        {
          do
          {
            v6[4] = 0;
            *(_OWORD *)v6 = 0;
            v6[2] = 0;
            v6[3] = 15;
            *(_BYTE *)v6 = 0;
            v6 += 5;
            --v10;
          }
          while ( v10 != 0 );
        }
        a2[1] = (__int64)v6;
      }
      else
      {
        sub_140180A90(a1: a2, a2: v15, a3: &v14);
      }
    }
  }
  else
  {
    v8 = (_QWORD *)(v5 + 40LL * v15);
    for ( i = v8; i != v6; i += 5 )
    {
      sub_14001B5A0(a1: i);
      *i = 19937;
      i[2] = 0;
      i[3] = 31;
    }
    a2[1] = (__int64)v8;
  }
  if ( (_DWORD)v4 == 0 )
    return 1;
  v11 = *a2;
  v12 = 0;
  while ( sub_1402B4D00(a1, a2: (__int64 *)(v11 + 40 * v12)) != 0
       && (*(unsigned __int8 (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a1 + 16LL))(
            a1,
            a2: v11 + 32 + 40 * v12,
            a3: 4) != 0 )
  {
    if ( ++v12 >= v4 )
      return 1;
  }
  return 0;
}