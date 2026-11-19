bool __fastcall sub_1402EA550(_DWORD *a1, int *a2)
{
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = *a2;
  if ( sub_1401D0820(a1, a2: &v5) == 0 )
    return false;
  *a2 = v5;
  v5 = a2[1];
  if ( sub_1401D0820(a1, a2: &v5) == 0 )
    return false;
  a2[1] = v5;
  v5 = a2[2];
  if ( sub_1401D0820(a1, a2: &v5) == 0 )
    return false;
  a2[2] = v5;
  v5 = a2[3];
  if ( sub_1401D0820(a1, a2: &v5) == 0 )
    return false;
  a2[3] = v5;
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1) != 0 )
  {
    LOWORD(v5) = 0;
    if ( sub_1402D2B10(a1, a2: &v5) == 0 )
      return false;
    *((_WORD *)a2 + 8) = v5;
  }
  else
  {
    LOWORD(v5) = *((_WORD *)a2 + 8);
    if ( sub_1402D2B10(a1, a2: &v5) == 0 )
      return false;
  }
  return (*(unsigned __int8 (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a1 + 16LL))(
           a1,
           a2: (__int64)a2 + 18,
           a3: 1) != 0;
}