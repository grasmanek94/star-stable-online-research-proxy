char __fastcall sub_14080BCE0(__int64 *a1, __int64 a2)
{
  int v5; // [rsp+30h] [rbp+8h] BYREF

  if ( sub_1402B8840(a1, (char *)a2) == 0 )
    return 0;
  if ( (unsigned __int8)sub_140A25C40((__int64)a1, a2: a2 + 4) == 0 )
    return 0;
  if ( sub_140A25B40((__int64)a1, a2: (float *)(a2 + 16)) == 0 )
    return 0;
  if ( (unsigned __int8)sub_140A25C40((__int64)a1, a2: a2 + 32) == 0 )
    return 0;
  if ( (unsigned __int8)sub_140A25C40((__int64)a1, a2: a2 + 44) == 0 )
    return 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 16))(a1, a2: a2 + 56, a3: 4) == 0 )
    return 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 16))(a1, a2: a2 + 60, a3: 4) == 0 )
    return 0;
  v5 = *(_DWORD *)(a2 + 64);
  if ( sub_1401D0820(a1, a2: &v5) == 0 )
    return 0;
  *(_DWORD *)(a2 + 64) = v5;
  return 1;
}