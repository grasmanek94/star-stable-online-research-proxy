char __fastcall sub_140A44740(__int64 *a1, __int128 *a2)
{
  __int64 v2; // rax
  char result; // al
  __int128 v5; // xmm0
  __int128 v6; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v7[16]; // [rsp+30h] [rbp-28h] BYREF

  v2 = *a1;
  v6 = *a2;
  result = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64))(v2 + 16))(a1, a2: &v6, a3: 16);
  if ( result != 0 )
  {
    v5 = *(_OWORD *)sub_140A44050(a1: v7, a2: &v6);
    *a2 = v5;
    return 1;
  }
  return result;
}