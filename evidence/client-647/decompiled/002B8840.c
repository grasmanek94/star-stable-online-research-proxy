char __fastcall sub_1402B8840(__int64 *a1, char *a2)
{
  __int64 v4; // rax
  char result; // al
  char v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 8))(a1) != 0 )
  {
    v4 = *a1;
    v6 = 0;
    result = (*(__int64 (__fastcall **)(__int64 *, char *, __int64))(v4 + 16))(a1, a2: &v6, a3: 1);
    if ( result != 0 )
    {
      *a2 = v6;
      return 1;
    }
  }
  else
  {
    v6 = *a2;
    return (*(__int64 (__fastcall **)(__int64 *, char *, __int64))(*a1 + 16))(a1, a2: &v6, a3: 1);
  }
  return result;
}