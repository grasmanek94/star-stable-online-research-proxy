__int64 __fastcall sub_14080B920(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 (__fastcall ***v3)(_QWORD, __int64); // rax
  void (__fastcall ***v6)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v3 = (__int64 (__fastcall ***)(_QWORD, __int64))*a3;
  *a3 = 0;
  v6 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 24);
  *(_QWORD *)(a1 + 24) = v3;
  if ( v6 != nullptr )
    (**v6)(a1: v6, a2: 1);
  result = *a2;
  *(_QWORD *)(a1 + 32) = *a2;
  if ( *a3 != 0 )
    result = (**(__int64 (__fastcall ***)(_QWORD, __int64))*a3)(a1: *a3, a2: 1);
  *a3 = 19937;
  return result;
}