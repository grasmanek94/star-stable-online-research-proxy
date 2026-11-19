bool __fastcall sub_1407AF3D0(__int64 a1, _DWORD **a2)
{
  int *v2; // rsi
  _DWORD *v5; // rcx
  int *v6; // rsi
  _DWORD *v7; // rcx
  bool result; // al
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(int **)(a1 + 184);
  v5 = *a2;
  v9 = *v2;
  result = false;
  if ( sub_1401D0820(a1: v5, a2: &v9) != 0 )
  {
    *v2 = v9;
    v6 = *(int **)(a1 + 176);
    v7 = *a2;
    v9 = *v6;
    if ( sub_1401D0820(a1: v7, a2: &v9) != 0 )
    {
      *v6 = v9;
      if ( sub_1402B4D00(a1: *a2, a2: *(__int64 **)(a1 + 168)) != 0
        && sub_1402B4D00(a1: *a2, a2: *(__int64 **)(a1 + 160)) != 0
        && sub_1402B7CD0(a1: a2, a2: *(int **)(a1 + 152)) != 0
        && sub_1402B8840(a1: (__int64 *)*a2, a2: *(char **)(a1 + 144)) != 0
        && sub_1402B8840(a1: (__int64 *)*a2, a2: *(char **)(a1 + 136)) != 0
        && sub_1402B8840(a1: (__int64 *)*a2, a2: *(char **)(a1 + 128)) != 0
        && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*a2 + 16LL))(
             a1: *a2,
             a2: *(_QWORD *)(a1 + 120),
             a3: 1) != 0
        && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*a2 + 16LL))(
             a1: *a2,
             a2: *(_QWORD *)(a1 + 112),
             a3: 1) != 0
        && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*a2 + 16LL))(
             a1: *a2,
             a2: *(_QWORD *)(a1 + 104),
             a3: 1) != 0
        && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*a2 + 16LL))(
             a1: *a2,
             a2: *(_QWORD *)(a1 + 96),
             a3: 1) != 0
        && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*a2 + 16LL))(
             a1: *a2,
             a2: *(_QWORD *)(a1 + 88),
             a3: 1) != 0
        && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*a2 + 16LL))(
             a1: *a2,
             a2: *(_QWORD *)(a1 + 80),
             a3: 1) != 0
        && sub_1402B7CD0(a1: a2, a2: *(int **)(a1 + 72)) != 0
        && sub_1402B7CD0(a1: a2, a2: *(int **)(a1 + 64)) != 0
        && (unsigned __int8)sub_1403476F0(a1: *a2, a2: *(_QWORD *)(a1 + 56)) != 0
        && (unsigned __int8)sub_140A25C40(a1: (__int64)*a2, a2: *(_QWORD *)(a1 + 48)) != 0
        && sub_140A25B40(a1: (__int64)*a2, a2: *(float **)(a1 + 40)) != 0
        && sub_1402B7CD0(a1: a2, a2: *(int **)(a1 + 32)) != 0
        && sub_1402B7CD0(a1: a2, a2: *(int **)(a1 + 24)) != 0
        && sub_1402B4D00(a1: *a2, a2: *(__int64 **)(a1 + 16)) != 0
        && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*a2 + 16LL))(
             a1: *a2,
             a2: *(_QWORD *)(a1 + 8),
             a3: 8) != 0
        && (unsigned __int8)sub_14077EDE0(a1: *a2, a2: *(_QWORD *)a1) != 0 )
      {
        return true;
      }
    }
  }
  return result;
}