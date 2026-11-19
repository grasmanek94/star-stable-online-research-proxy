bool __fastcall sub_1402EA470(_DWORD *a1, int *a2)
{
  int v2; // eax
  bool result; // al
  int v6; // [rsp+30h] [rbp+8h] BYREF
  _DWORD *v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a2;
  v7 = a1;
  v6 = v2;
  result = false;
  if ( sub_1401D0820(a1, a2: &v6) != 0 )
  {
    *a2 = v6;
    v6 = a2[1];
    if ( sub_1401D0820(a1, a2: &v6) != 0 )
    {
      a2[1] = v6;
      if ( sub_1402B8840((__int64 *)a1, a2: (char *)a2 + 8) != 0 )
      {
        v6 = a2[3];
        if ( sub_1401D0820(a1, a2: &v6) != 0 )
        {
          a2[3] = v6;
          if ( sub_1402B7CD0(a1: &v7, a2: a2 + 4) != 0
            && sub_1402B7CD0(a1: &v7, a2: a2 + 5) != 0
            && sub_1402B7CD0(a1: &v7, a2: a2 + 6) != 0 )
          {
            return true;
          }
        }
      }
    }
  }
  return result;
}