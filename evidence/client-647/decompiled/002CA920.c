char __fastcall sub_1402CA920(__int64 a1, _DWORD *a2)
{
  _QWORD v5[2]; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0;
  *(_OWORD *)v5 = 0;
  LODWORD(v5[1]) = 0;
  BYTE4(v5[1]) = 0;
  if ( sub_1401D0820(a1: a2, a2: &v6) == 0 )
    return 0;
  LODWORD(v5[0]) = v6;
  v6 = HIDWORD(v5[0]);
  if ( sub_1401D0820(a1: a2, a2: &v6) == 0 )
    return 0;
  HIDWORD(v5[0]) = v6;
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, _QWORD *, __int64))(*(_QWORD *)a2 + 16LL))(
         a1: a2,
         a2: &v5[1],
         a3: 4) == 0
    || (*(unsigned __int8 (__fastcall **)(_DWORD *, char *, __int64))(*(_QWORD *)a2 + 16LL))(
         a1: a2,
         a2: (char *)&v5[1] + 4,
         a3: 1) == 0 )
  {
    return 0;
  }
  (*(void (__fastcall **)(__int64, _QWORD *))(a1 + 8))(a1: a1 + 16, a2: v5);
  return 1;
}