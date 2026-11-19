char __fastcall sub_140829120(_DWORD *a1, __int64 *a2)
{
  __int64 v4; // r9
  unsigned __int64 v5; // rsi
  _QWORD *v6; // rdi
  unsigned __int64 v7; // r8
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rbx
  char v13; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v14; // [rsp+60h] [rbp+18h] BYREF

  if ( (unsigned __int64)((a2[1] - *a2) / 24) >= 0xFFFFFFFF && (unsigned __int8)sub_140059CA0(a1: off_141025A90) != 0 )
    __debugbreak();
  v14 = (a2[1] - *a2) / 24;
  if ( sub_1401D0820(a1, a2: &v14) == 0 || v14 > 0x3E80 )
    return 0;
  v4 = *a2;
  v5 = v14;
  v6 = (_QWORD *)a2[1];
  v7 = ((__int64)v6 - *a2) / 24;
  if ( v14 >= v7 )
  {
    if ( v14 > v7 )
    {
      if ( v14 <= (unsigned __int64)((a2[2] - v4) / 24) )
      {
        v9 = v14 - v7;
        if ( v14 != v7 )
        {
          do
          {
            *v6 = 0;
            v6[1] = 0;
            v6[2] = 0;
            v6 += 3;
            --v9;
          }
          while ( v9 != 0 );
        }
        sub_140829C00(a1: v6, a2: v6, a3: a2);
        a2[1] = (__int64)v6;
      }
      else
      {
        sub_14082A370(a1: a2, a2: v14, a3: &v13);
      }
    }
  }
  else
  {
    v8 = v4 + 24LL * v14;
    sub_140829C00(a1: v8, a2: v6, a3: a2);
    a2[1] = v8;
  }
  v10 = *a2;
  v11 = 0;
  if ( v14 == 0 )
    return 1;
  while ( (unsigned __int8)sub_140828D00(a1, a2: v10 + 24 * v11) != 0 )
  {
    if ( ++v11 >= v5 )
      return 1;
  }
  return 0;
}