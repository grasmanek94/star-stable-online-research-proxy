char __fastcall sub_14077EDE0(_DWORD *a1, int *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = *a2;
  if ( sub_1401D0820(a1, a2: &v7) == 0 )
    return 0;
  *a2 = v7;
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1) != 0 )
  {
    v4 = *(_QWORD *)a1;
    LOBYTE(v7) = 0;
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, int *, __int64))(v4 + 16))(a1, a2: &v7, a3: 1) == 0 )
      return 0;
    *((_BYTE *)a2 + 4) = v7;
  }
  else
  {
    LOBYTE(v7) = *((_BYTE *)a2 + 4);
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, int *, __int64))(*(_QWORD *)a1 + 16LL))(a1, a2: &v7, a3: 1) == 0 )
      return 0;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1) != 0 )
  {
    v5 = *(_QWORD *)a1;
    LOBYTE(v7) = 0;
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, int *, __int64))(v5 + 16))(a1, a2: &v7, a3: 1) != 0 )
    {
      *((_BYTE *)a2 + 5) = v7;
      return 1;
    }
  }
  else
  {
    LOBYTE(v7) = *((_BYTE *)a2 + 5);
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, int *, __int64))(*(_QWORD *)a1 + 16LL))(a1, a2: &v7, a3: 1) != 0 )
      return 1;
  }
  return 0;
}