__int64 *__fastcall sub_140099710(__int64 *a1, _QWORD *a2)
{
  _QWORD v5[3]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v6; // [rsp+40h] [rbp-38h]
  __int128 v7; // [rsp+48h] [rbp-30h] BYREF
  __int128 v8; // [rsp+58h] [rbp-20h]

  v6 = sub_14094D810();
  v7 = 0;
  v8 = 0;
  sub_140952850(a1: v6, a2: 32, a3: 6);
  sub_140952850(a1: v6, a2: 78, a3: 10);
  sub_140952850(a1: v6, a2: 13, a3: 15);
  if ( a2[3] > 0xFu )
    a2 = (_QWORD *)*a2;
  sub_140952850(a1: v6, a2: 10002, a3: a2);
  memset(v5, 0, sizeof(v5));
  sub_1400992B0(a1: (char *)&v7 + 8, a2: v5);
  sub_140099290(a1: v5);
  sub_140952850(a1: v6, a2: 10015, a3: *((_QWORD *)&v7 + 1));
  sub_140952850(a1: v6, a2: 60, a3: *((_QWORD *)&v8 + 1));
  *a1 = v6;
  v6 = 0;
  a1[1] = v7;
  *(_QWORD *)&v7 = 0;
  sub_140099250(a1: a1 + 2, a2: (char *)&v7 + 8);
  sub_140099290(a1: (char *)&v7 + 8);
  if ( (_QWORD)v7 != 0 )
    sub_14094C760(lpMem: (LPVOID)v7);
  if ( v6 != 0 )
    sub_14094D750();
  return a1;
}