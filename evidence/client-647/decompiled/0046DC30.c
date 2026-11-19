char __fastcall sub_14046DC30(_DWORD *a1, __int64 a2)
{
  char v5; // [rsp+20h] [rbp-28h] BYREF
  char v6; // [rsp+50h] [rbp+8h] BYREF
  int v7; // [rsp+58h] [rbp+10h] BYREF

  v6 = *(_BYTE *)(a2 + 32);
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, char *, __int64))(*(_QWORD *)a1 + 16LL))(a1, a2: &v6, a3: 1) == 0 )
    return 0;
  if ( v6 != 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1) != 0 )
    {
      if ( *(_BYTE *)(a2 + 32) != 0 )
      {
        if ( (char *)a2 != &v5 )
        {
          sub_14045BBA0(a1: a2);
          *(_QWORD *)a2 = 0;
          *(_QWORD *)(a2 + 8) = 0;
          *(_QWORD *)(a2 + 16) = 0;
        }
      }
      else
      {
        *(_QWORD *)a2 = 0;
        *(_QWORD *)(a2 + 8) = 0;
        *(_QWORD *)(a2 + 16) = 0;
        *(_BYTE *)(a2 + 32) = 1;
      }
      *(_QWORD *)(a2 + 24) = -1;
    }
    if ( *(_BYTE *)(a2 + 32) == 0 )
      __fastfail(5u);
    if ( sub_14046D530(a1, (__int64 *)a2) != 0 )
    {
      v7 = *(_DWORD *)(a2 + 24);
      if ( sub_1401D0820(a1, a2: &v7) != 0 )
      {
        *(_DWORD *)(a2 + 24) = v7;
        v7 = *(_DWORD *)(a2 + 28);
        if ( sub_1401D0820(a1, a2: &v7) != 0 )
        {
          *(_DWORD *)(a2 + 28) = v7;
          return 1;
        }
      }
    }
    return 0;
  }
  if ( *(_BYTE *)(a2 + 32) != 0 )
  {
    sub_14045BBA0(a1: a2);
    *(_QWORD *)a2 = 19937;
    *(_QWORD *)(a2 + 8) = 19937;
    *(_QWORD *)(a2 + 16) = 19937;
    *(_BYTE *)(a2 + 32) = 0;
  }
  return 1;
}