char __fastcall sub_1402F1F20(__int64 a1, __int64 a2)
{
  char result; // al
  __int64 v4; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+28h] [rbp-30h] BYREF
  _QWORD v6[5]; // [rsp+30h] [rbp-28h] BYREF

  v4 = 0;
  v5 = 0;
  v6[0] = (char *)&v5 + 4;
  v6[1] = &v5;
  v6[2] = (char *)&v4 + 4;
  v6[3] = &v4;
  result = sub_1402EA660(a1: a2, a2: v6);
  if ( result != 0 )
  {
    (*(void (__fastcall **)(__int64, __int64 *))(a1 + 8))(a1: a1 + 16, a2: &v4);
    return 1;
  }
  return result;
}