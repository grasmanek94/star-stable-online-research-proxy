char __fastcall sub_1404FE9D0(_DWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1) != 0 )
  {
    v4 = *(_QWORD *)a1;
    LOBYTE(v6) = 0;
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, int *, __int64))(v4 + 16))(a1, a2: &v6, a3: 1) == 0 )
      return 0;
    *(_BYTE *)a2 = v6;
  }
  else
  {
    LOBYTE(v6) = *(_BYTE *)a2;
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, int *, __int64))(*(_QWORD *)a1 + 16LL))(a1, a2: &v6, a3: 1) == 0 )
      return 0;
  }
  v6 = *(_DWORD *)(a2 + 4);
  if ( sub_1401D0820(a1, a2: &v6) != 0 )
  {
    *(_DWORD *)(a2 + 4) = v6;
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a1 + 16LL))(a1, a2: a2 + 8, a3: 1) != 0
      && (*(unsigned __int8 (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a1 + 16LL))(a1, a2: a2 + 9, a3: 1) != 0
      && (*(unsigned __int8 (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a1 + 16LL))(a1, a2: a2 + 10, a3: 1) != 0
      && (*(unsigned __int8 (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a1 + 16LL))(a1, a2: a2 + 11, a3: 1) != 0
      && (*(unsigned __int8 (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a1 + 16LL))(a1, a2: a2 + 12, a3: 1) != 0 )
    {
      return 1;
    }
  }
  return 0;
}