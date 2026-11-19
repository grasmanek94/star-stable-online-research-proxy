char __fastcall sub_14044CFE0(_DWORD *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rdi
  _QWORD *v7; // rbx
  unsigned int v8; // esi
  unsigned int v10; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0;
  if ( a3 == 0 )
    return 1;
  while ( 1 )
  {
    v7 = (_QWORD *)(a2 + 32 * v3);
    if ( v7[2] >= 0xFFFFFFFF && (unsigned __int8)sub_140059CA0(a1: off_140F64800) != 0 )
      __debugbreak();
    v10 = *((_DWORD *)v7 + 4);
    if ( sub_1401D0820(a1, a2: &v10) == 0 )
      break;
    v8 = v10;
    if ( v10 > 0x1FA0 )
      break;
    sub_14005A6C0(a1: a2 + 32 * v3, a2: v10, a3: 0);
    if ( v7[3] > 0xFu )
      v7 = (_QWORD *)*v7;
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, _QWORD *, _QWORD))(*(_QWORD *)a1 + 16LL))(a1, a2: v7, a3: v8) == 0 )
      break;
    if ( ++v3 >= a3 )
      return 1;
  }
  return 0;
}