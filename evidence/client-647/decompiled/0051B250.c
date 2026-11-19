bool __fastcall sub_14051B250(_DWORD *a1, _QWORD *a2)
{
  int *v2; // rsi
  int *v5; // rsi
  int *v6; // rsi
  bool result; // al
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (int *)a2[3];
  v8 = *v2;
  result = false;
  if ( sub_1401D0820(a1, a2: &v8) != 0 )
  {
    *v2 = v8;
    v5 = (int *)a2[2];
    v8 = *v5;
    if ( sub_1401D0820(a1, a2: &v8) != 0 )
    {
      *v5 = v8;
      v6 = (int *)a2[1];
      v8 = *v6;
      if ( sub_1401D0820(a1, a2: &v8) != 0 )
      {
        *v6 = v8;
        if ( (unsigned __int8)sub_14051B520(a1, a2: *a2) != 0 )
          return true;
      }
    }
  }
  return result;
}