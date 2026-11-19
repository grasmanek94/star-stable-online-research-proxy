char __fastcall sub_14080A170(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx

  v5 = a3;
  if ( *(_BYTE *)(a4 + 48) != 0
    && (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 64LL))(
         a1,
         a2,
         a3,
         a4: *(_QWORD *)(a4 + 40)) != 0 )
  {
    return 0;
  }
  (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 56LL))(
    a1,
    a2,
    a3: v5,
    a4: *(_QWORD *)(a4 + 32));
  return 1;
}