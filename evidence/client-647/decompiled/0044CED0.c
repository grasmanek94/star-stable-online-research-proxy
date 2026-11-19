bool __fastcall sub_14044CED0(_DWORD *a1, __int64 a2)
{
  _BYTE v5[376]; // [rsp+20h] [rbp-188h] BYREF
  char v6; // [rsp+198h] [rbp-10h]

  sub_140E827B0(a1: v5, a2: 0, a3: 376);
  sub_14044F530(a1: v5);
  v6 = 0;
  sub_140450720(a1: a2, a2: v5);
  if ( v6 != -1 && v6 == 0 )
    sub_1404505B0(a1: v5);
  if ( a2 == 0 || *(_BYTE *)(a2 + 376) != 0 )
    a2 = 0;
  return sub_14044C980(a1, (__int64 *)a2);
}