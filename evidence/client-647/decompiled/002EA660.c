char __fastcall sub_1402EA660(_DWORD *a1, int **a2)
{
  int *v2; // rsi
  int *v5; // rsi
  int *v6; // rsi
  int *v7; // rbx
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2[3];
  v9 = *v2;
  if ( sub_1401D0820(a1, a2: &v9) == 0 )
    return 0;
  *v2 = v9;
  v5 = a2[2];
  v9 = *v5;
  if ( sub_1401D0820(a1, a2: &v9) == 0 )
    return 0;
  *v5 = v9;
  v6 = a2[1];
  v9 = *v6;
  if ( sub_1401D0820(a1, a2: &v9) == 0 )
    return 0;
  *v6 = v9;
  v7 = *a2;
  v9 = *v7;
  if ( sub_1401D0820(a1, a2: &v9) == 0 )
    return 0;
  *v7 = v9;
  return 1;
}