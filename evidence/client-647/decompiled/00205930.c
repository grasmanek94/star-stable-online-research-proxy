char __fastcall sub_140205930(__int64 a1, _DWORD *a2)
{
  int v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0;
  v5 = 0;
  if ( sub_140200540(a1: a2, a2: &v5) == 0 )
    return 0;
  LODWORD(v6) = v5;
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, char *, __int64))(*(_QWORD *)a2 + 16LL))(
         a1: a2,
         a2: (char *)&v6 + 4,
         a3: 1) == 0 )
    return 0;
  (*(void (__fastcall **)(__int64, __int64 *))(a1 + 8))(a1: a1 + 16, a2: &v6);
  return 1;
}