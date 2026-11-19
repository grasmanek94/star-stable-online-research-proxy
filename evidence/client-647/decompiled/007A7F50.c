char __fastcall sub_1407A7F50(_DWORD *a1, __int64 *a2)
{
  unsigned __int64 v4; // r12
  __int64 v5; // r9
  __int64 v6; // rbx
  unsigned __int64 v7; // r8
  _QWORD *v8; // rbp
  _QWORD *i; // rdi
  unsigned __int64 v10; // rcx
  __int64 v11; // r15
  unsigned __int64 v12; // rdi
  __int64 v13; // rbx
  _DWORD v15[4]; // [rsp+20h] [rbp-48h] BYREF
  char v16; // [rsp+78h] [rbp+10h] BYREF
  __int16 v17; // [rsp+80h] [rbp+18h] BYREF
  unsigned int v18; // [rsp+88h] [rbp+20h] BYREF

  if ( (unsigned __int64)((a2[1] - *a2) / 40) >= 0xFFFFFFFF && (unsigned __int8)sub_140059CA0(a1: off_141016900) != 0 )
    __debugbreak();
  v18 = (a2[1] - *a2) / 40;
  if ( sub_1401D0820(a1, a2: &v18) == 0 )
    return 0;
  v4 = v18;
  if ( v18 > 0x3E80 )
    return 0;
  v5 = *a2;
  v6 = a2[1];
  v7 = (v6 - *a2) / 40;
  if ( v18 >= v7 )
  {
    if ( v18 > v7 )
    {
      if ( v18 <= (unsigned __int64)((a2[2] - v5) / 40) )
      {
        v10 = v18 - v7;
        if ( v18 != v7 )
        {
          do
          {
            *(_DWORD *)(v6 + 36) = 0;
            *(_OWORD *)v6 = 0;
            *(_QWORD *)(v6 + 16) = 0;
            *(_QWORD *)(v6 + 24) = 15;
            *(_BYTE *)v6 = 0;
            *(_DWORD *)(v6 + 32) = -1;
            v6 += 40;
            --v10;
          }
          while ( v10 != 0 );
        }
        a2[1] = v6;
      }
      else
      {
        sub_1407AD540(a1: a2, a2: v18, a3: &v16);
      }
    }
  }
  else
  {
    v8 = (_QWORD *)(v5 + 40LL * v18);
    for ( i = v8; i != (_QWORD *)v6; i += 5 )
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
  if ( (_DWORD)v4 == 0 )
    return 1;
  while ( 1 )
  {
    v13 = v11 + 40 * v12;
    if ( sub_1402B4D00(a1, a2: (__int64 *)v13) == 0 )
      break;
    v15[0] = *(_DWORD *)(v13 + 32);
    if ( sub_1401D0820(a1, a2: v15) == 0 )
      break;
    *(_DWORD *)(v13 + 32) = v15[0];
    v17 = *(_WORD *)(v13 + 36);
    if ( sub_1402D2B10(a1, a2: &v17) == 0 )
      break;
    ++v12;
    *(_WORD *)(v13 + 36) = v17;
    if ( v12 >= v4 )
      return 1;
  }
  return 0;
}