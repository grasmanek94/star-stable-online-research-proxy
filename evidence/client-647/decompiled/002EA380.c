bool __fastcall sub_1402EA380(_DWORD *a1, int *a2)
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
      v6 = a2[2];
      if ( sub_1401D0820(a1, a2: &v6) != 0 )
      {
        a2[2] = v6;
        if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, int *, __int64))(*(_QWORD *)a1 + 16LL))(a1, a2: a2 + 3, a3: 4) != 0
          && sub_1402B7CD0(a1: &v7, a2: a2 + 4) != 0
          && (*(unsigned __int8 (__fastcall **)(_DWORD *, int *, __int64))(*(_QWORD *)a1 + 16LL))(a1, a2: a2 + 5, a3: 1) != 0
          && (*(unsigned __int8 (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a1 + 16LL))(
               a1,
               a2: (__int64)a2 + 21,
               a3: 1) != 0 )
        {
          return true;
        }
      }
    }
  }
  return result;
}