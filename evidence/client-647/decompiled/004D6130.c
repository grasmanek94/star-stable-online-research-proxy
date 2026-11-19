char __fastcall sub_1404D6130(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rax
  __int64 v6; // [rsp+20h] [rbp-18h]
  unsigned __int8 v7; // [rsp+28h] [rbp-10h]
  int v8; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 8LL))(a1: a2) != 0 )
  {
    v4 = *(_QWORD *)a2;
    LOBYTE(v8) = 0;
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, int *, __int64))(v4 + 16))(a1: a2, a2: &v8, a3: 1) == 0 )
      return 0;
    v7 = v8;
  }
  else
  {
    LOBYTE(v8) = 0;
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, int *, __int64))(*(_QWORD *)a2 + 16LL))(a1: a2, a2: &v8, a3: 1) == 0 )
      return 0;
  }
  v8 = 0;
  if ( sub_1401D0820(a1: a2, a2: &v8) != 0 )
  {
    LODWORD(v6) = v8;
    v8 = 0;
    if ( sub_1401D0820(a1: a2, a2: &v8) != 0 )
    {
      HIDWORD(v6) = v8;
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(a1 + 8))(a1: a1 + 16, a2: v7, a3: v6);
      return 1;
    }
  }
  return 0;
}