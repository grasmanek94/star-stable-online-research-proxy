char __fastcall sub_1405050A0(__int64 a1, __int64 a2)
{
  char result; // al
  __int128 v4; // [rsp+20h] [rbp-48h] BYREF
  __int64 v5; // [rsp+30h] [rbp-38h]
  __int128 v6; // [rsp+40h] [rbp-28h] BYREF
  __int64 v7; // [rsp+50h] [rbp-18h]

  v5 = 1;
  v4 = 0;
  *(_QWORD *)((char *)&v4 + 4) = 0;
  BYTE12(v4) = 0;
  LOBYTE(v4) = 8;
  result = sub_1404FEAE0(a1: a2, a2: &v4);
  if ( result != 0 )
  {
    v6 = v4;
    v7 = v5;
    (*(void (__fastcall **)(__int64, __int128 *))(a1 + 8))(a1: a1 + 16, a2: &v6);
    return 1;
  }
  return result;
}