char __fastcall sub_1404819E0(_DWORD *a1, __int64 *a2)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // rbx
  char v8; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v9; // [rsp+50h] [rbp+18h] BYREF

  if ( (unsigned __int64)((a2[1] - *a2) / 28) >= 0xFFFFFFFF && (unsigned __int8)sub_140059CA0(a1: off_140FA4DD0) != 0 )
    __debugbreak();
  v9 = (a2[1] - *a2) / 28;
  if ( sub_1401D0820(a1, a2: &v9) == 0 || v9 > 0x3E80 )
    return 0;
  v4 = v9;
  sub_140482C30(a1: a2, a2: v9, a3: &v8);
  v5 = *a2;
  v6 = 0;
  if ( v9 == 0 )
    return 1;
  while ( sub_1402EA470(a1, a2: (int *)(v5 + 28 * v6)) )
  {
    if ( ++v6 >= v4 )
      return 1;
  }
  return 0;
}