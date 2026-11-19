char __fastcall sub_1402BB410(__int64 a1, __int64 **a2)
{
  int *v2; // rsi
  __int64 *v5; // rcx
  int *v6; // rsi
  __int64 *v7; // rcx
  int *v8; // rsi
  __int64 *v9; // rcx
  int *v10; // rsi
  __int64 *v11; // rcx
  int *v12; // rsi
  __int64 *v13; // rcx
  int v15; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(int **)(a1 + 192);
  v5 = *a2;
  v15 = *v2;
  if ( sub_1401D0820(a1: v5, a2: &v15) == 0 )
    return 0;
  *v2 = v15;
  v6 = *(int **)(a1 + 184);
  v7 = *a2;
  v15 = *v6;
  if ( sub_1401D0820(a1: v7, a2: &v15) == 0 )
    return 0;
  *v6 = v15;
  v8 = *(int **)(a1 + 176);
  v9 = *a2;
  v15 = *v8;
  if ( sub_1401D0820(a1: v9, a2: &v15) == 0 )
    return 0;
  *v8 = v15;
  v10 = *(int **)(a1 + 168);
  v11 = *a2;
  v15 = *v10;
  if ( sub_1401D0820(a1: v11, a2: &v15) == 0 )
    return 0;
  *v10 = v15;
  if ( sub_1402B7CD0(a1: (_DWORD **)a2, a2: *(int **)(a1 + 160)) != 0
    && sub_1402B7CD0(a1: (_DWORD **)a2, a2: *(int **)(a1 + 152)) != 0
    && sub_1402B7CD0(a1: (_DWORD **)a2, a2: *(int **)(a1 + 144)) != 0
    && sub_1402B7CD0(a1: (_DWORD **)a2, a2: *(int **)(a1 + 136)) != 0
    && (v12 = *(int **)(a1 + 128), v13 = *a2, v15 = *v12, sub_140200540(a1: v13, a2: &v15) != 0)
    && (*v12 = v15, sub_1402B7CD0(a1: (_DWORD **)a2, a2: *(int **)(a1 + 120)) != 0)
    && sub_1402B7CD0(a1: (_DWORD **)a2, a2: *(int **)(a1 + 112)) != 0
    && sub_1402B7CD0(a1: (_DWORD **)a2, a2: *(int **)(a1 + 104)) != 0
    && sub_1402B7CD0(a1: (_DWORD **)a2, a2: *(int **)(a1 + 96)) != 0
    && sub_1402B7CD0(a1: (_DWORD **)a2, a2: *(int **)(a1 + 88)) != 0
    && sub_1402B7CD0(a1: (_DWORD **)a2, a2: *(int **)(a1 + 80)) != 0
    && sub_1402B7CD0(a1: (_DWORD **)a2, a2: *(int **)(a1 + 72)) != 0
    && sub_1402B7CD0(a1: (_DWORD **)a2, a2: *(int **)(a1 + 64)) != 0
    && sub_1402B7CD0(a1: (_DWORD **)a2, a2: *(int **)(a1 + 56)) != 0
    && sub_1402B7CD0(a1: (_DWORD **)a2, a2: *(int **)(a1 + 48)) != 0
    && sub_1402B7CD0(a1: (_DWORD **)a2, a2: *(int **)(a1 + 40)) != 0
    && sub_1402B7CD0(a1: (_DWORD **)a2, a2: *(int **)(a1 + 32)) != 0
    && sub_1402B7CD0(a1: (_DWORD **)a2, a2: *(int **)(a1 + 24)) != 0
    && sub_1402B8840(a1: *a2, a2: *(char **)(a1 + 16)) != 0
    && sub_1402B8720(a1: *a2, a2: *(__int64 **)(a1 + 8)) != 0
    && sub_1402B8720(a1: *a2, a2: *(__int64 **)a1) != 0 )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}