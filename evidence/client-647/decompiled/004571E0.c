char __fastcall sub_1404571E0(__int64 a1, _DWORD *a2)
{
  char v4; // al
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF
  int v7; // [rsp+3Ch] [rbp+14h]
  unsigned int v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = -1;
  v7 = 0;
  if ( sub_1401D0820(a1: a2, a2: &v8) != 0 )
  {
    v4 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 8LL))(a1: a2);
    v6 = 0;
    if ( v4 != 0 )
    {
      if ( sub_1401D0820(a1: a2, a2: &v6) != 0 )
      {
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(a1 + 8))(a1: a1 + 16, a2: v8, a3: v6);
        return 1;
      }
    }
    else if ( sub_1401D0820(a1: a2, a2: &v6) != 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(a1 + 8))(a1: a1 + 16, a2: v8, a3: 0);
      return 1;
    }
  }
  return 0;
}