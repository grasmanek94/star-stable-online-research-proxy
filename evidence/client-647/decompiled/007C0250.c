char __fastcall sub_1407C0250(__int64 a1, _DWORD *a2)
{
  int v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0;
  v5 = 0;
  if ( sub_1401D0820(a1: a2, a2: &v5) == 0 )
    return 0;
  HIDWORD(v6) = v5;
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, __int64 *, __int64))(*(_QWORD *)a2 + 16LL))(a1: a2, a2: &v6, a3: 4) == 0 )
    return 0;
  (*(void (__fastcall **)(_QWORD, _QWORD))(a1 + 8))(a1: *(_QWORD *)(a1 + 16), a2: HIDWORD(v6));
  return 1;
}