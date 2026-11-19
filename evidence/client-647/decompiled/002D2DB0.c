char __fastcall sub_1402D2DB0(_DWORD *a1, int *a2)
{
  int v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1) != 0 )
  {
    v5 = 0;
    if ( sub_1401D0820(a1, a2: &v5) != 0 )
    {
      *a2 = v5;
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v5 = *a2;
    return sub_1401D0820(a1, a2: &v5);
  }
}