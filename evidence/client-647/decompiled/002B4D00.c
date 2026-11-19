char __fastcall sub_1402B4D00(_DWORD *a1, __int64 *a2)
{
  __int64 *v2; // rbx
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  if ( (unsigned __int64)a2[2] >= 0xFFFFFFFF && (unsigned __int8)sub_140059CA0(a1: off_140F64800) != 0 )
    __debugbreak();
  v5 = *((_DWORD *)v2 + 4);
  if ( sub_1401D0820(a1, a2: &v5) == 0 || v5 > 0x1FA0 )
    return 0;
  sub_14005A6C0(a1: v2, a2: v5, a3: 0);
  if ( (unsigned __int64)v2[3] > 0xF )
    v2 = (__int64 *)*v2;
  return (*(__int64 (__fastcall **)(_DWORD *, __int64 *, _QWORD))(*(_QWORD *)a1 + 16LL))(a1, a2: v2, a3: v5);
}