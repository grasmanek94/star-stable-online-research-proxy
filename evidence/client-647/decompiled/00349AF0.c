bool __fastcall sub_140349AF0(__int64 a1, _DWORD **a2)
{
  int *v2; // rsi
  _DWORD *v5; // rcx
  int *v6; // rsi
  _DWORD *v7; // rcx
  int *v8; // rsi
  _DWORD *v9; // rcx
  _DWORD *v10; // rsi
  _BYTE *v11; // r14
  __int64 v12; // rax
  int v14; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(int **)(a1 + 192);
  v5 = *a2;
  v14 = *v2;
  if ( sub_1401D0820(a1: v5, a2: &v14) == 0 )
    return false;
  *v2 = v14;
  if ( sub_1402B4D00(a1: *a2, a2: *(__int64 **)(a1 + 184)) == 0 )
    return false;
  v6 = *(int **)(a1 + 176);
  v7 = *a2;
  v14 = *v6;
  if ( sub_1401D0820(a1: v7, a2: &v14) == 0 )
    return false;
  *v6 = v14;
  v8 = *(int **)(a1 + 168);
  v9 = *a2;
  v14 = *v8;
  if ( sub_1401D0820(a1: v9, a2: &v14) == 0 )
    return false;
  *v8 = v14;
  if ( sub_1402B7CD0(a1: a2, a2: *(int **)(a1 + 160)) == 0
    || (unsigned __int8)sub_140A25C40(a1: (__int64)*a2, a2: *(_QWORD *)(a1 + 152)) == 0
    || sub_140A25B40(a1: (__int64)*a2, a2: *(float **)(a1 + 144)) == 0
    || (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*a2 + 16LL))(
         a1: *a2,
         a2: *(_QWORD *)(a1 + 136),
         a3: 13) == 0
    || (unsigned __int8)sub_1403476F0(a1: *a2, a2: *(_QWORD *)(a1 + 128)) == 0
    || sub_1402B7CD0(a1: a2, a2: *(int **)(a1 + 120)) == 0
    || sub_1402B7CD0(a1: a2, a2: *(int **)(a1 + 112)) == 0
    || sub_1402B7CD0(a1: a2, a2: *(int **)(a1 + 104)) == 0
    || (unsigned __int8)sub_140344090(a1: a2, a2: *(_QWORD *)(a1 + 96)) == 0
    || sub_1402B7CD0(a1: a2, a2: *(int **)(a1 + 88)) == 0
    || (unsigned __int8)sub_140344090(a1: a2, a2: *(_QWORD *)(a1 + 80)) == 0 )
  {
    return false;
  }
  v10 = *a2;
  v11 = *(_BYTE **)(a1 + 72);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 8LL))(a1: *a2) != 0 )
  {
    v12 = *(_QWORD *)v10;
    LOBYTE(v14) = 0;
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, int *, __int64))(v12 + 16))(a1: v10, a2: &v14, a3: 1) == 0 )
      return false;
    *v11 = v14;
  }
  else
  {
    LOBYTE(v14) = *v11;
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, int *, __int64))(*(_QWORD *)v10 + 16LL))(a1: v10, a2: &v14, a3: 1) == 0 )
      return false;
  }
  return sub_1402B8840(a1: (__int64 *)*a2, a2: *(char **)(a1 + 64)) != 0
      && sub_1402B8840(a1: (__int64 *)*a2, a2: *(char **)(a1 + 56)) != 0
      && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*a2 + 16LL))(
           a1: *a2,
           a2: *(_QWORD *)(a1 + 48),
           a3: 1) != 0
      && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*a2 + 16LL))(
           a1: *a2,
           a2: *(_QWORD *)(a1 + 40),
           a3: 1) != 0
      && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*a2 + 16LL))(
           a1: *a2,
           a2: *(_QWORD *)(a1 + 32),
           a3: 1) != 0
      && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*a2 + 16LL))(
           a1: *a2,
           a2: *(_QWORD *)(a1 + 24),
           a3: 1) != 0
      && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*a2 + 16LL))(
           a1: *a2,
           a2: *(_QWORD *)(a1 + 16),
           a3: 1) != 0
      && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*a2 + 16LL))(
           a1: *a2,
           a2: *(_QWORD *)(a1 + 8),
           a3: 1) != 0
      && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*a2 + 16LL))(
           a1: *a2,
           a2: *(_QWORD *)a1,
           a3: 1) != 0;
}