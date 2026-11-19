__int64 __fastcall sub_1407BB210(__int64 a1, int a2, _QWORD *a3)
{
  int v5; // esi
  __int64 v6; // rax
  _QWORD *v7; // r9
  __int64 v8; // rdx
  _QWORD *v9; // r8
  __int64 result; // rax
  _QWORD *v11; // rcx

  v5 = sub_14008A0B0() - a2;
  v6 = sub_1407B9A80();
  v7 = a3;
  if ( a3[3] > 0xFu )
    v7 = (_QWORD *)*a3;
  v8 = *(_QWORD *)(*(_QWORD *)&nExitCode + 688LL);
  v9 = (_QWORD *)(v8 + 240);
  if ( *(_QWORD *)(v8 + 264) > 0xFu )
    v9 = (_QWORD *)*v9;
  result = sub_14060F030(a1: v6, a2: "ClientServerLatency", a3: v9, a4: v7, a5: v5);
  if ( a3[3] <= 0xFu )
    v11 = a3;
  else
    v11 = (_QWORD *)*a3;
  if ( a3[2] == 22 )
  {
    result = sub_140E82B50(a1: v11, a2: "broadcast_event_driven");
    if ( (_DWORD)result == 0 )
      *(_DWORD *)(a1 + 628) = v5;
  }
  return result;
}