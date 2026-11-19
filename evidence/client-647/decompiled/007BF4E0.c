char __fastcall sub_1407BF4E0(__int64 a1, _DWORD *a2)
{
  __int64 v5; // [rsp+20h] [rbp-20h] BYREF
  __int64 v6; // [rsp+28h] [rbp-18h] BYREF
  _QWORD v7[2]; // [rsp+30h] [rbp-10h] BYREF
  int v8; // [rsp+58h] [rbp+18h] BYREF
  _DWORD *v9; // [rsp+60h] [rbp+20h] BYREF

  v9 = a2;
  v7[0] = 0;
  v5 = 0;
  v6 = 0;
  v8 = 0;
  if ( sub_1401D0820(a1: a2, a2: &v8) == 0 )
    return 0;
  LODWORD(v5) = v8;
  v8 = HIDWORD(v5);
  if ( sub_1401D0820(a1: a2, a2: &v8) == 0 )
    return 0;
  HIDWORD(v5) = v8;
  v8 = v6;
  if ( sub_1401D0820(a1: a2, a2: &v8) == 0 )
    return 0;
  LODWORD(v6) = v8;
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, char *, __int64))(*(_QWORD *)a2 + 16LL))(
         a1: a2,
         a2: (char *)&v6 + 4,
         a3: 4) == 0
    || (unsigned __int8)sub_1402B7CD0(a1: &v9, a2: v7) == 0
    || (*(unsigned __int8 (__fastcall **)(_DWORD *, char *, __int64))(*(_QWORD *)a2 + 16LL))(
         a1: a2,
         a2: (char *)v7 + 4,
         a3: 1) == 0
    || (*(unsigned __int8 (__fastcall **)(_DWORD *, char *, __int64))(*(_QWORD *)a2 + 16LL))(
         a1: a2,
         a2: (char *)v7 + 5,
         a3: 1) == 0 )
  {
    return 0;
  }
  (*(void (__fastcall **)(_QWORD, __int64 *))(a1 + 8))(a1: *(_QWORD *)(a1 + 16), a2: &v5);
  return 1;
}