char __fastcall sub_1402F1C80(__int64 a1, __int64 a2)
{
  char result; // al
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF

  memset(v4, 0, 24);
  result = sub_1402EA380(a1: a2, a2: v4);
  if ( result != 0 )
  {
    (*(void (__fastcall **)(__int64, _QWORD *))(a1 + 8))(a1: a1 + 16, a2: v4);
    return 1;
  }
  return result;
}