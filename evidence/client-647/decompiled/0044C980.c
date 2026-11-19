bool __fastcall sub_14044C980(_DWORD *a1, __int64 *a2)
{
  __int64 v4; // rbx
  int v6; // [rsp+50h] [rbp+8h] BYREF

  v6 = *(_DWORD *)a2;
  if ( sub_1401D0820(a1, a2: &v6) != 0 )
  {
    *(_DWORD *)a2 = v6;
    if ( sub_1402B4D00(a1, a2: a2 + 1) != 0 )
    {
      v4 = 0;
      while ( sub_1402B4D00(a1, a2: &a2[4 * v4 + 5]) != 0 )
      {
        if ( (unsigned __int64)++v4 >= 9 )
          return (unsigned __int8)sub_14044C050(a1, a2: a2 + 41) != 0
              && (unsigned __int8)sub_14044CB30(a1, a2: a2 + 44) != 0;
      }
    }
  }
  return false;
}