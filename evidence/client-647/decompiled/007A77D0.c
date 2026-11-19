char __fastcall sub_1407A77D0(_DWORD *a1, __int64 *a2)
{
  unsigned __int64 v4; // r13
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 v7; // rdi
  unsigned __int64 v8; // r8
  _QWORD *v9; // r12
  _QWORD *i; // rsi
  unsigned __int64 v11; // rax
  __int64 v12; // rsi
  char v14; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v15; // [rsp+70h] [rbp+18h] BYREF
  int v16; // [rsp+78h] [rbp+20h] BYREF

  if ( (unsigned __int64)((a2[1] - *a2) / 40) >= 0xFFFFFFFF && (unsigned __int8)sub_140059CA0(a1: off_1410168D8) != 0 )
    __debugbreak();
  v15 = (a2[1] - *a2) / 40;
  if ( sub_1401D0820(a1, a2: &v15) == 0 )
    return 0;
  v4 = v15;
  if ( v15 > 0x3E80 )
    return 0;
  v5 = *a2;
  v6 = 0;
  v7 = a2[1];
  v8 = (v7 - *a2) / 40;
  if ( v15 >= v8 )
  {
    if ( v15 > v8 )
    {
      if ( v15 <= (unsigned __int64)((a2[2] - v5) / 40) )
      {
        v11 = v15 - v8;
        if ( v15 != v8 )
        {
          do
          {
            *(_QWORD *)v7 = 0;
            *(_OWORD *)(v7 + 8) = 0;
            *(_QWORD *)(v7 + 24) = 0;
            *(_QWORD *)(v7 + 32) = 15;
            *(_BYTE *)(v7 + 8) = 0;
            v7 += 40;
            --v11;
          }
          while ( v11 != 0 );
        }
        a2[1] = v7;
      }
      else
      {
        sub_1407ACB70(a1: a2, a2: v15, a3: &v14);
      }
    }
  }
  else
  {
    v9 = (_QWORD *)(v5 + 40LL * v15);
    for ( i = v9; i != (_QWORD *)v7; i += 5 )
    {
      sub_14001B5A0(a1: i + 1);
      v6 = 0;
      i[1] = 19937;
      i[3] = 0;
      i[4] = 31;
    }
    a2[1] = (__int64)v9;
  }
  v12 = *a2;
  if ( (_DWORD)v4 == 0 )
    return 1;
  while ( 1 )
  {
    v16 = *(_DWORD *)(v12 + 40 * v6);
    if ( sub_1401D0820(a1, a2: &v16) == 0 )
      break;
    *(_DWORD *)(v12 + 40 * v6) = v16;
    if ( sub_1402B4D00(a1, a2: (__int64 *)(v12 + 8 + 40 * v6)) == 0 )
      break;
    if ( ++v6 >= v4 )
      return 1;
  }
  return 0;
}