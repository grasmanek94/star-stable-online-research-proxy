char __fastcall sub_1402F1D80(__int64 a1, __int64 a2)
{
  char result; // al
  _QWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+30h] [rbp-18h]

  v5 = 40;
  v4[0] = 0;
  v4[1] = 0;
  result = sub_1402EA550(a1: a2, a2: v4);
  if ( result != 0 )
  {
    (*(void (__fastcall **)(__int64, _QWORD *))(a1 + 8))(a1: a1 + 16, a2: v4);
    return 1;
  }
  return result;
}