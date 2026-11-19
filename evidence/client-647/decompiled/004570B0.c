char __fastcall sub_1404570B0(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rax
  char v5; // al
  char v6; // cl
  int v7; // eax
  __int64 v9; // [rsp+20h] [rbp-20h]
  int v10; // [rsp+28h] [rbp-18h]
  __int64 v11; // [rsp+30h] [rbp-10h] BYREF
  int v12; // [rsp+38h] [rbp-8h]
  char v13; // [rsp+58h] [rbp+18h] BYREF
  int v14; // [rsp+60h] [rbp+20h] BYREF

  v9 = 0;
  v10 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 8LL))(a1: a2) != 0 )
  {
    v4 = *(_QWORD *)a2;
    v13 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, char *, __int64))(v4 + 16))(a1: a2, a2: &v13, a3: 1) == 0 )
      return 0;
    LOBYTE(v9) = v13;
  }
  else
  {
    v13 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, char *, __int64))(*(_QWORD *)a2 + 16LL))(a1: a2, a2: &v13, a3: 1) == 0 )
      return 0;
  }
  v13 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, char *, __int64))(*(_QWORD *)a2 + 16LL))(a1: a2, a2: &v13, a3: 1) != 0 )
  {
    if ( v13 == 0 )
    {
      LOBYTE(v10) = 0;
LABEL_16:
      v11 = v9;
      v12 = v10;
      (*(void (__fastcall **)(__int64, __int64 *))(a1 + 8))(a1: a1 + 16, a2: &v11);
      return 1;
    }
    v5 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 8LL))(a1: a2);
    v6 = 0;
    if ( v5 != 0 )
    {
      v7 = -1;
      v6 = 1;
      LOBYTE(v10) = 1;
    }
    else
    {
      v7 = 0;
    }
    if ( v6 == 0 )
      __fastfail(5u);
    v14 = v7;
    if ( sub_1401D0820(a1: a2, a2: &v14) != 0 )
    {
      HIDWORD(v9) = v14;
      goto LABEL_16;
    }
  }
  return 0;
}