__int64 __fastcall sub_140351B60(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // bl
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v5 = 0;
  v6 = 0;
  if ( (unsigned __int8)sub_140346B80(a1: a2, a2: &v5) != 0 )
  {
    (*(void (__fastcall **)(__int64, __int128 *))(a1 + 8))(a1: a1 + 16, a2: &v5);
    v3 = 1;
  }
  else
  {
    v3 = 0;
  }
  sub_14034B830(a1: &v5);
  return v3;
}