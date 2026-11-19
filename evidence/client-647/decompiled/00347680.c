bool __fastcall sub_140347680(_DWORD *a1, __int64 *a2)
{
  bool result; // al
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = *(_DWORD *)a2;
  result = false;
  if ( sub_1401D0820(a1, a2: &v5) != 0 )
  {
    *(_DWORD *)a2 = v5;
    if ( sub_1402B4D00(a1, a2: a2 + 1) != 0
      && (*(unsigned __int8 (__fastcall **)(_DWORD *, int *, __int64))(*(_QWORD *)a1 + 16LL))(
           a1,
           a2: (int *)a2 + 10,
           a3: 1) != 0 )
    {
      return true;
    }
  }
  return result;
}