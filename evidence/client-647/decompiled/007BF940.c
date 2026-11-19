__int64 __fastcall sub_1407BF940(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // bl
  _BYTE v6[200]; // [rsp+30h] [rbp-108h] BYREF
  __int128 v7; // [rsp+F8h] [rbp-40h]
  __int64 v8; // [rsp+108h] [rbp-30h]
  __int64 v9; // [rsp+110h] [rbp-28h]

  sub_140E827B0(a1: v6, a2: 0, a3: 232);
  sub_14034B3B0(a1: v6);
  v7 = 0;
  v8 = 0;
  v9 = 0;
  if ( (unsigned __int8)sub_1403474B0(a1: a2, a2: v6) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, _BYTE *))(a1 + 8))(a1: *(_QWORD *)(a1 + 16), a2: v6);
    v4 = 1;
  }
  else
  {
    v4 = 0;
  }
  sub_14034BD00(a1: v6);
  return v4;
}