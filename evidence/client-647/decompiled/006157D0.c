unsigned __int64 __fastcall sub_1406157D0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 v6; // rsi
  unsigned __int64 result; // rax
  __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  __int64 v11; // rax

  v4 = a1[8];
  v6 = (unsigned int)a2;
  result = (a1[10] - v4) >> 3;
  if ( (unsigned int)a2 > result )
  {
    v8 = a1[9];
    v9 = 8LL * (unsigned int)a2;
    if ( v9 != 0 )
    {
      if ( v9 < 0x1000 )
      {
        v10 = sub_1409DB470(a1: v9);
      }
      else
      {
        if ( v9 + 39 < v9 )
        {
          sub_14001B170(a1: v9, a2, a3, a4);
          JUMPOUT(0x1406158A0LL);
        }
        v11 = sub_1409DB470(a1: v9 + 39);
        if ( v11 == 0 )
          __fastfail(5u);
        v10 = (v11 + 39) & 0xFFFFFFFFFFFFFFE0uLL;
        *(_QWORD *)(v10 - 8) = v11;
      }
    }
    else
    {
      v10 = 0;
    }
    sub_140E82100(a1: v10, a2: a1[8], a3: a1[9] - a1[8]);
    return sub_1401B6F70(a1: a1 + 8, a2: v10, a3: (v8 - v4) >> 3, a4: v6);
  }
  return result;
}