char __fastcall sub_1402D58C0(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rax
  __int16 v6; // dx
  char v7; // cl
  char v8; // [rsp+48h] [rbp+28h] BYREF
  char v9; // [rsp+4Bh] [rbp+2Bh]
  __int16 v10; // [rsp+50h] [rbp+30h] BYREF
  int v11; // [rsp+58h] [rbp+38h] BYREF
  __int16 v12; // [rsp+5Ch] [rbp+3Ch]

  v11 = 0;
  v12 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 8LL))(a1: a2) != 0 )
  {
    v4 = *(_QWORD *)a2;
    v8 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, char *, __int64))(v4 + 16))(a1: a2, a2: &v8, a3: 1) == 0 )
      return 0;
    LOBYTE(v11) = v8;
  }
  else
  {
    v8 = v11;
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, char *, __int64))(*(_QWORD *)a2 + 16LL))(a1: a2, a2: &v8, a3: 1) == 0 )
      return 0;
  }
  v8 = v12;
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, char *, __int64))(*(_QWORD *)a2 + 16LL))(a1: a2, a2: &v8, a3: 1) != 0 )
  {
    if ( v8 == 0 )
    {
      LOBYTE(v12) = 0;
      (*(void (__fastcall **)(__int64, int *))(a1 + 8))(a1: a1 + 16, a2: &v11);
      return 1;
    }
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 8LL))(a1: a2) != 0 )
    {
      v6 = 0;
      v7 = 1;
      HIWORD(v11) = 0;
      LOBYTE(v12) = 1;
      HIBYTE(v12) = v9;
    }
    else
    {
      v7 = v12;
      v6 = HIWORD(v11);
    }
    if ( v7 == 0 )
      __fastfail(5u);
    v10 = v6;
    if ( sub_1402D2B10(a1: a2, a2: &v10) != 0 )
    {
      HIWORD(v11) = v10;
      (*(void (__fastcall **)(__int64, int *))(a1 + 8))(a1: a1 + 16, a2: &v11);
      return 1;
    }
  }
  return 0;
}