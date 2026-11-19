char __fastcall sub_1402F1A90(__int64 a1, _DWORD *a2)
{
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  _QWORD v6[2]; // [rsp+28h] [rbp-10h] BYREF
  int v7; // [rsp+48h] [rbp+10h] BYREF

  v6[0] = 0;
  v5 = 0;
  v7 = 0;
  if ( sub_1401D0820(a1: a2, a2: &v7) == 0 )
    return 0;
  LODWORD(v5) = v7;
  v7 = HIDWORD(v5);
  if ( sub_1401D0820(a1: a2, a2: &v7) == 0 )
    return 0;
  HIDWORD(v5) = v7;
  v7 = v6[0];
  if ( sub_1401D0820(a1: a2, a2: &v7) == 0 )
    return 0;
  LODWORD(v6[0]) = v7;
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, char *, __int64))(*(_QWORD *)a2 + 16LL))(
         a1: a2,
         a2: (char *)v6 + 4,
         a3: 1) == 0
    || (*(unsigned __int8 (__fastcall **)(_DWORD *, char *, __int64))(*(_QWORD *)a2 + 16LL))(
         a1: a2,
         a2: (char *)v6 + 5,
         a3: 1) == 0 )
  {
    return 0;
  }
  (*(void (__fastcall **)(__int64, __int64 *))(a1 + 8))(a1: a1 + 16, a2: &v5);
  return 1;
}