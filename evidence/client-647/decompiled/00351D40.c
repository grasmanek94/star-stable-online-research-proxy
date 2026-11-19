__int64 __fastcall sub_140351D40(__int64 a1, _DWORD *a2)
{
  unsigned __int8 v4; // bl
  _DWORD v6[4]; // [rsp+20h] [rbp-128h] BYREF
  int v7; // [rsp+30h] [rbp-118h]
  _BYTE v8[232]; // [rsp+38h] [rbp-110h] BYREF
  unsigned int v9; // [rsp+120h] [rbp-28h]

  v7 = 0;
  sub_140E827B0(a1: v8, a2: 0, a3: 232);
  sub_14034B030(a1: v8);
  v9 = 0;
  v6[0] = 0;
  if ( sub_1401D0820(a1: a2, a2: v6) != 0
    && (v9 = v6[0], (unsigned __int8)sub_1403474B0(a1: a2, a2: v8) != 0)
    && (v6[0] = v7, sub_1401D0820(a1: a2, a2: v6) != 0) )
  {
    v7 = v6[0];
    (*(void (__fastcall **)(__int64, _QWORD, _BYTE *))(a1 + 8))(a1: a1 + 16, a2: v9, a3: v8);
    v4 = 1;
  }
  else
  {
    v4 = 0;
  }
  sub_14034BD00(a1: v8);
  return v4;
}