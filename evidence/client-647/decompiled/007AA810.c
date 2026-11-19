bool __fastcall sub_1407AA810(_DWORD *a1, int *a2)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  int v7; // [rsp+50h] [rbp+8h] BYREF

  v7 = *a2;
  if ( sub_1401D0820(a1, a2: &v7) != 0 )
  {
    *a2 = v7;
    v7 = a2[1];
    if ( (unsigned __int8)sub_140200540(a1, a2: &v7) != 0 )
    {
      a2[1] = v7;
      v4 = 0;
      if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1) != 0 )
      {
        v5 = 0;
        while ( 1 )
        {
          v7 = 0;
          if ( sub_1401D0820(a1, a2: &v7) == 0 )
            break;
          a2[v5++ + 2] = v7;
          if ( v5 >= 8 )
            return (unsigned __int8)sub_140A44740(a1, a2: a2 + 10) != 0;
        }
      }
      else
      {
        while ( 1 )
        {
          v7 = a2[v4 + 2];
          if ( sub_1401D0820(a1, a2: &v7) == 0 )
            break;
          if ( (unsigned __int64)++v4 >= 8 )
            return (unsigned __int8)sub_140A44740(a1, a2: a2 + 10) != 0;
        }
      }
    }
  }
  return false;
}