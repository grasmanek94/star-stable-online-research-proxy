char __fastcall sub_1403521C0(__int64 a1, _DWORD *a2)
{
  _BYTE v5[4]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v6; // [rsp+24h] [rbp-14h]
  _BYTE v7[16]; // [rsp+28h] [rbp-10h] BYREF
  unsigned int v8; // [rsp+48h] [rbp+10h] BYREF

  v5[0] = 0;
  v6 = 0;
  v7[0] = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, _BYTE *, __int64))(*(_QWORD *)a2 + 16LL))(a1: a2, a2: v7, a3: 1) == 0 )
    return 0;
  v8 = v6;
  if ( sub_1401D0820(a1: a2, a2: &v8) == 0 )
    return 0;
  v6 = v8;
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, _BYTE *, __int64))(*(_QWORD *)a2 + 16LL))(a1: a2, a2: v5, a3: 1) == 0 )
    return 0;
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(a1 + 8))(a1: a1 + 16, a2: v7[0], a3: v6, a4: v5[0]);
  return 1;
}