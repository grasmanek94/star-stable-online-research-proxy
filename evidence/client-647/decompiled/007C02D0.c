char __fastcall sub_1407C02D0(__int64 a1, _DWORD *a2)
{
  unsigned __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v6; // [rsp+28h] [rbp-10h]
  unsigned int v7; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0xFFFFFFFF00000000uLL;
  v6 = 0;
  v7 = 0;
  if ( sub_1401D0820(a1: a2, a2: &v7) == 0 )
    return 0;
  v6 = v7;
  v7 = HIDWORD(v5);
  if ( sub_1401D0820(a1: a2, a2: &v7) == 0 )
    return 0;
  HIDWORD(v5) = v7;
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, unsigned __int64 *, __int64))(*(_QWORD *)a2 + 16LL))(
         a1: a2,
         a2: &v5,
         a3: 4) == 0 )
    return 0;
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 8))(a1: *(_QWORD *)(a1 + 16), a2: v6, a3: HIDWORD(v5));
  return 1;
}