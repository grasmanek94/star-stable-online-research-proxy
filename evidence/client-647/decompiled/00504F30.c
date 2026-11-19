__int64 __fastcall sub_140504F30(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // bl
  __int128 v5; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+30h] [rbp-28h]
  __int64 v7; // [rsp+38h] [rbp-20h]
  __int64 v8; // [rsp+40h] [rbp-18h]

  v7 = 1;
  v8 = 0;
  v5 = 0;
  v6 = 0;
  if ( (unsigned __int8)sub_1404FE4F0(a1: a2, a2: &v5) != 0 )
  {
    (*(void (__fastcall **)(__int64, __int128 *))(a1 + 8))(a1: a1 + 16, a2: &v5);
    v3 = 1;
  }
  else
  {
    v3 = 0;
  }
  if ( (_BYTE)v7 != 0 )
    sub_14050BEF0(a1: &v5);
  return v3;
}