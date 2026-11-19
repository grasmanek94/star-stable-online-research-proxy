char __fastcall sub_140456CC0(__int64 a1, __int64 a2)
{
  char result; // al
  _QWORD v4[4]; // [rsp+20h] [rbp-38h] BYREF
  int v5; // [rsp+40h] [rbp-18h]

  v5 = 0;
  memset(v4, 0, sizeof(v4));
  result = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a2 + 16LL))(a1: a2, a2: v4, a3: 36);
  if ( result != 0 )
  {
    (*(void (__fastcall **)(__int64, _QWORD *))(a1 + 8))(a1: a1 + 16, a2: v4);
    return 1;
  }
  return result;
}