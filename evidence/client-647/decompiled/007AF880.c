char __fastcall sub_1407AF880(__int64 a1, _QWORD *a2)
{
  __int64 v4; // r14
  __int64 v5; // rbx
  bool v6; // zf
  int *v7; // rbx
  _DWORD *v8; // rcx
  _DWORD *v9; // rbx
  int *v10; // r14
  int v12; // [rsp+50h] [rbp+8h] BYREF

  if ( (unsigned __int8)sub_1407A68B0(a1: *a2, a2: *(_QWORD *)(a1 + 56)) == 0 )
    return 0;
  if ( sub_1402B4D00(a1: (_DWORD *)*a2, a2: *(__int64 **)(a1 + 48)) == 0 )
    return 0;
  if ( sub_1402B4D00(a1: (_DWORD *)*a2, a2: *(__int64 **)(a1 + 40)) == 0 )
    return 0;
  if ( sub_1402B4D00(a1: (_DWORD *)*a2, a2: *(__int64 **)(a1 + 32)) == 0 )
    return 0;
  v4 = *a2;
  v5 = *(_QWORD *)(a1 + 24);
  LOBYTE(v12) = *(_BYTE *)(v5 + 16);
  if ( (*(unsigned __int8 (__fastcall **)(__int64, int *, __int64))(*(_QWORD *)v4 + 16LL))(a1: v4, a2: &v12, a3: 1) == 0 )
    return 0;
  if ( (_BYTE)v12 != 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(a1: v4) != 0 )
    {
      v6 = *(_BYTE *)(v5 + 16) == 0;
      *(_OWORD *)v5 = 0;
      if ( !v6 )
        goto LABEL_13;
      *(_BYTE *)(v5 + 16) = 1;
    }
    if ( *(_BYTE *)(v5 + 16) == 0 )
      __fastfail(5u);
LABEL_13:
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v4 + 16LL))(a1: v4, a2: v5, a3: 16) == 0 )
      return 0;
    goto LABEL_14;
  }
  *(_BYTE *)(v5 + 16) = 0;
LABEL_14:
  v7 = *(int **)(a1 + 16);
  v8 = (_DWORD *)*a2;
  v12 = *v7;
  if ( sub_1401D0820(a1: v8, a2: &v12) != 0 )
  {
    *v7 = v12;
    v9 = (_DWORD *)*a2;
    v10 = *(int **)(a1 + 8);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 8LL))(a1: *a2) != 0 )
    {
      v12 = 0;
      if ( sub_1401D0820(a1: v9, a2: &v12) == 0 )
        return 0;
      *v10 = v12;
    }
    else
    {
      v12 = *v10;
      if ( sub_1401D0820(a1: v9, a2: &v12) == 0 )
        return 0;
    }
    if ( (unsigned __int8)sub_1407A8330(a1: *a2, a2: *(_QWORD *)a1) != 0 )
      return 1;
  }
  return 0;
}