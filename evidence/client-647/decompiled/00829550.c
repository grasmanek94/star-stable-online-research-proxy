bool __fastcall sub_140829550(_DWORD *a1, _QWORD *a2)
{
  unsigned __int64 *v2; // rsi
  _DWORD *v5; // rsi
  _DWORD *v6; // rsi
  bool result; // al
  unsigned __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (unsigned __int64 *)a2[3];
  v8 = *v2;
  result = false;
  if ( sub_1402AF380(a1, a2: &v8) != 0 )
  {
    *v2 = v8;
    v5 = (_DWORD *)a2[2];
    LODWORD(v8) = *v5;
    if ( sub_1401D0820(a1, a2: &v8) != 0 )
    {
      *v5 = v8;
      v6 = (_DWORD *)a2[1];
      LODWORD(v8) = *v6;
      if ( sub_1401D0820(a1, a2: &v8) != 0 )
      {
        *v6 = v8;
        if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, _QWORD, __int64))(*(_QWORD *)a1 + 16LL))(a1, a2: *a2, a3: 1) != 0 )
          return true;
      }
    }
  }
  return result;
}