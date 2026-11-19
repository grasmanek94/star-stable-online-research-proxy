__int64 __fastcall sub_1407CF960(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 *v9; // r9
  __int64 *v10; // rcx
  __int64 *v11; // rax
  __int64 *i; // rdx
  unsigned int v13; // r8d
  _QWORD v15[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v16[40]; // [rsp+30h] [rbp-28h] BYREF

  v4 = sub_1405F1EE0(a1: a2 + 1608);
  v5 = *(_DWORD *)(a2 + 1720);
  v6 = v4;
  v7 = sub_140787420(a1: a2);
  if ( v7 != 0 )
    sub_1400AF390(a1: v7);
  if ( v6 != 0 )
  {
    v8 = qword_14138A6F0;
    if ( qword_14138A6F0 == 0 )
    {
      if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
        __debugbreak();
      sub_1409E29B8(a1: 999);
      __debugbreak();
    }
    sub_1405F1D40(a1: (__int64)v15, a2: a2 + 120);
    sub_1405F1D40(a1: (__int64)v16, a2: v6 + 120);
    if ( (unsigned __int8)sub_1406005E0(a1: v8, a2: v16, a3: v15) == 0 )
      sub_1400AF390(a1: a2);
    sub_1400AF390(a1: v6);
  }
  v9 = *(__int64 **)(a1 + 1912);
  v10 = v9;
  v11 = (__int64 *)v9[1];
  for ( i = v11; *((_BYTE *)i + 25) == 0; i = (__int64 *)*i )
  {
    v13 = *((_DWORD *)i + 8);
    if ( v13 >= v5 )
    {
      if ( *((_BYTE *)v10 + 25) != 0 && v5 < v13 )
        v10 = i;
      v9 = i;
    }
    else
    {
      i += 2;
    }
  }
  if ( *((_BYTE *)v10 + 25) == 0 )
    v11 = (__int64 *)*v10;
  while ( *((_BYTE *)v11 + 25) == 0 )
  {
    if ( v5 >= *((_DWORD *)v11 + 8) )
    {
      v11 = (__int64 *)v11[2];
    }
    else
    {
      v10 = v11;
      v11 = (__int64 *)*v11;
    }
  }
  v15[1] = v10;
  v15[0] = v9;
  sub_1407DB340(a1: a1 + 1912, a2: v15);
  if ( v5 == *(_DWORD *)(a1 + 1100) )
    *(_DWORD *)(a1 + 1100) = 0;
  return sub_140607ED0(a1: 19, a2: (unsigned int)--*(_DWORD *)(a1 + 1908));
}