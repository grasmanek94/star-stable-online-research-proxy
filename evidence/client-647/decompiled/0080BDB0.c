bool __fastcall sub_14080BDB0(_DWORD *a1, __int64 a2)
{
  bool result; // al
  int v5; // [rsp+30h] [rbp+8h] BYREF

  result = false;
  if ( (unsigned __int8)sub_1402B8840(a1, a2) != 0
    && (unsigned __int8)sub_140A25C40(a1, a2: a2 + 4) != 0
    && (unsigned __int8)sub_140A25B40(a1, a2: a2 + 16) != 0
    && (unsigned __int8)sub_140A25C40(a1, a2: a2 + 32) != 0
    && (*(unsigned __int8 (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a1 + 16LL))(a1, a2: a2 + 44, a3: 4) != 0
    && (*(unsigned __int8 (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a1 + 16LL))(a1, a2: a2 + 48, a3: 4) != 0 )
  {
    v5 = *(_DWORD *)(a2 + 52);
    if ( sub_1401D0820(a1, a2: &v5) != 0 )
    {
      *(_DWORD *)(a2 + 52) = v5;
      if ( (unsigned __int8)sub_1404FEC60(a1, a2: a2 + 56) != 0 )
        return true;
    }
  }
  return result;
}