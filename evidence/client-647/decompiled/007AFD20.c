bool __fastcall sub_1407AFD20(__int64 a1, __int64 **a2)
{
  __int64 *v2; // rbx
  int *v4; // rdi
  __int64 *v6; // rbx
  _BYTE *v7; // rdi
  __int64 v8; // rax
  int v10; // [rsp+50h] [rbp+8h] BYREF

  v2 = *a2;
  v4 = *(int **)(a1 + 16);
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(**a2 + 8))(a1: *a2) != 0 )
  {
    v10 = 0;
    if ( sub_1401D0820(a1: v2, a2: &v10) == 0 )
      return false;
    *v4 = v10;
  }
  else
  {
    v10 = *v4;
    if ( sub_1401D0820(a1: v2, a2: &v10) == 0 )
      return false;
  }
  v6 = *a2;
  v7 = *(_BYTE **)(a1 + 8);
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(**a2 + 8))(a1: *a2) != 0 )
  {
    v8 = *v6;
    LOBYTE(v10) = 0;
    if ( (*(unsigned __int8 (__fastcall **)(__int64 *, int *, __int64))(v8 + 16))(a1: v6, a2: &v10, a3: 1) == 0 )
      return false;
    *v7 = v10;
  }
  else
  {
    LOBYTE(v10) = *v7;
    if ( (*(unsigned __int8 (__fastcall **)(__int64 *, int *, __int64))(*v6 + 16))(a1: v6, a2: &v10, a3: 1) == 0 )
      return false;
  }
  return sub_1402B4D00(a1: *a2, a2: *(__int64 **)a1) != 0;
}