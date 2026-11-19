char __fastcall sub_1407C07E0(__int64 a1, __int64 a2)
{
  char result; // al
  __int64 v4; // rcx
  _QWORD v5[8]; // [rsp+20h] [rbp-29h] BYREF
  _QWORD v6[8]; // [rsp+60h] [rbp+17h] BYREF

  memset(v5, 0, 60);
  result = sub_14080D980(a1: a2, a2: v5);
  if ( result != 0 )
  {
    v4 = *(_QWORD *)(a1 + 16);
    qmemcpy(v6, v5, 60);
    (*(void (__fastcall **)(__int64, _QWORD *))(a1 + 8))(a1: v4, a2: v6);
    return 1;
  }
  return result;
}