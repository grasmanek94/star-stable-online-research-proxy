bool __fastcall sub_14080D980(_DWORD *a1, int *a2)
{
  int v4; // eax
  int *v5; // rdx
  int v7; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1) != 0 )
  {
    v7 = 0;
    if ( sub_1401D0820(a1, a2: &v7) == 0 )
      return false;
    *a2 = v7;
  }
  else
  {
    v7 = *a2;
    if ( sub_1401D0820(a1, a2: &v7) == 0 )
      return false;
  }
  v7 = a2[1];
  if ( sub_1401D0820(a1, a2: &v7) == 0 )
    return false;
  a2[1] = v7;
  v7 = a2[2];
  if ( sub_1401D0820(a1, a2: &v7) == 0 )
    return false;
  a2[2] = v7;
  v7 = a2[3];
  if ( sub_1401D0820(a1, a2: &v7) == 0 )
    return false;
  a2[3] = v7;
  if ( sub_1401D0C80(a1, a2: a2 + 4) == 0 )
    return false;
  v4 = *a2;
  if ( *a2 == 2 || v4 == 5 )
  {
    if ( sub_1401D0C80(a1, a2: a2 + 9) == 0
      || sub_1401D0C80(a1, a2: a2 + 10) == 0
      || sub_1401D0C80(a1, a2: a2 + 11) == 0
      || sub_1401D0C80(a1, a2: a2 + 12) == 0
      || sub_1401D0C80(a1, a2: a2 + 13) == 0 )
    {
      return false;
    }
    v5 = a2 + 14;
  }
  else
  {
    if ( ((v4 - 1) & 0xFFFFFFFD) != 0
      || sub_1401D0C80(a1, a2: a2 + 5) == 0
      || sub_1401D0C80(a1, a2: a2 + 6) == 0
      || sub_1401D0C80(a1, a2: a2 + 7) == 0 )
    {
      return false;
    }
    v5 = a2 + 8;
  }
  return sub_1401D0C80(a1, a2: v5) != 0;
}