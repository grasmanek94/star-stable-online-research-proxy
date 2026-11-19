char __fastcall sub_14051B140(_DWORD *a1, __int64 *a2)
{
  unsigned __int64 v4; // rbp
  __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  int v8; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v9; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned __int64)(a2[1] - *a2) >= 0x7FFFFFFF8LL && (unsigned __int8)sub_140059CA0(a1: off_140FBD830) != 0 )
    __debugbreak();
  v9 = (a2[1] - *a2) >> 3;
  if ( sub_1401D0820(a1, a2: &v9) == 0 || v9 > 0x3E80 )
    return 0;
  v4 = v9;
  sub_1403C0E60(a1: a2, a2: v9, a3: &v8);
  v5 = *a2;
  v6 = 0;
  if ( v9 == 0 )
    return 1;
  while ( 1 )
  {
    v8 = *(_DWORD *)(v5 + 8 * v6);
    if ( sub_1401D0820(a1, a2: &v8) == 0 )
      break;
    *(_DWORD *)(v5 + 8 * v6) = v8;
    v8 = *(_DWORD *)(v5 + 8 * v6 + 4);
    if ( sub_1401D0820(a1, a2: &v8) == 0 )
      break;
    *(_DWORD *)(v5 + 8 * v6++ + 4) = v8;
    if ( v6 >= v4 )
      return 1;
  }
  return 0;
}