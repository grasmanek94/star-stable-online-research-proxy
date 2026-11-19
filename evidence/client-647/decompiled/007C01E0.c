char __fastcall sub_1407C01E0(__int64 a1, _DWORD *a2)
{
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF
  unsigned int v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0;
  if ( sub_1401D0820(a1: a2, a2: &v6) == 0 )
    return 0;
  v5 = 0;
  if ( sub_1401D0820(a1: a2, a2: &v5) == 0 )
    return 0;
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 8))(a1: *(_QWORD *)(a1 + 16), a2: v6, a3: v5);
  return 1;
}