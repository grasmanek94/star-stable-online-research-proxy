char __fastcall sub_1407AAD60(_DWORD *a1, _QWORD *a2)
{
  unsigned int v4; // ebx
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF

  if ( a2[1] - *a2 >= 0x1FFFFFFFE0uLL && (unsigned __int8)sub_140059CA0(a1: off_141016598) != 0 )
    __debugbreak();
  v6 = (__int64)(a2[1] - *a2) >> 5;
  if ( sub_1401D0820(a1, a2: &v6) == 0 || v6 > 0x3E80 )
    return 0;
  v4 = v6;
  sub_1401B8350(a1: a2, a2: v6);
  return sub_14044CFE0(a1, a2: *a2, a3: v4);
}