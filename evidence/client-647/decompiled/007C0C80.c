char __fastcall sub_1407C0C80(__int64 a1, _DWORD *a2)
{
  char v4; // al
  __int64 v5; // rcx
  unsigned __int8 (__fastcall *v6)(_DWORD *, unsigned __int8 *, __int64); // r9
  unsigned __int8 v8; // [rsp+38h] [rbp+10h] BYREF
  int v9; // [rsp+3Ch] [rbp+14h]
  unsigned int v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = -1;
  v9 = 0;
  if ( sub_1401D0820(a1: a2, a2: &v10) != 0 )
  {
    v4 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 8LL))(a1: a2);
    v5 = *(_QWORD *)a2;
    v8 = 0;
    v6 = *(unsigned __int8 (__fastcall **)(_DWORD *, unsigned __int8 *, __int64))(v5 + 16);
    if ( v4 != 0 )
    {
      if ( v6(a1: a2, a2: &v8, a3: 1) != 0 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 8))(a1: *(_QWORD *)(a1 + 16), a2: v10, a3: v8);
        return 1;
      }
    }
    else if ( v6(a1: a2, a2: &v8, a3: 1) != 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 8))(a1: *(_QWORD *)(a1 + 16), a2: v10, a3: 0);
      return 1;
    }
  }
  return 0;
}