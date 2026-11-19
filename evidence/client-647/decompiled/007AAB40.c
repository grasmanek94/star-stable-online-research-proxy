char __fastcall sub_1407AAB40(_DWORD *a1, int **a2)
{
  int *v2; // rsi
  int *v5; // rsi
  int *v6; // rbx
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2[2];
  v8 = *v2;
  if ( sub_1401D0820(a1, a2: &v8) == 0 )
    return 0;
  *v2 = v8;
  v5 = a2[1];
  v8 = *v5;
  if ( sub_1401D0820(a1, a2: &v8) == 0 )
    return 0;
  *v5 = v8;
  v6 = *a2;
  v8 = *v6;
  if ( sub_1401D0820(a1, a2: &v8) == 0 )
    return 0;
  *v6 = v8;
  return 1;
}