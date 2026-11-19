__int64 __fastcall sub_1404882D0(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r8

  v6 = sub_1405F1EE0(a1: a2);
  v7 = v6;
  if ( v6 == 0 )
    return 0;
  if ( (unsigned __int8)sub_1406456B0(a1: v6, a2: 226) != 0 )
  {
    LOBYTE(v8) = 1;
  }
  else
  {
    if ( (unsigned __int8)sub_1406456B0(a1: v7, a2: 120) == 0 )
      return 0;
    LOBYTE(v8) = 2;
  }
  if ( a3 != 0xFF )
    return sub_140487BD0(a1, a2, a3: v8, a4: a3);
  return 0;
}