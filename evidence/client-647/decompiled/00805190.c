__int64 __fastcall sub_140805190(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 result; // rax
  _BYTE v5[40]; // [rsp+20h] [rbp-48h] BYREF
  LPVOID lpMem; // [rsp+48h] [rbp-20h]

  v1 = *(__int64 **)(a1 + 16);
  v2 = *v1;
  v3 = sub_140801360(a1: v5);
  result = (*(__int64 (__fastcall **)(__int64 *, __int64))(v2 + 24))(a1: v1, a2: v3);
  if ( lpMem != nullptr )
    return sub_1409DB4C0(lpMem);
  return result;
}