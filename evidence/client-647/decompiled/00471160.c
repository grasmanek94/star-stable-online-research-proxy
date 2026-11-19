__int64 __fastcall sub_140471160(__int64 a1, _DWORD *a2)
{
  unsigned __int8 v4; // bl
  __int128 v6; // [rsp+20h] [rbp-50h] BYREF
  __int128 v7; // [rsp+30h] [rbp-40h]
  _QWORD v8[4]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v9; // [rsp+60h] [rbp-10h]
  unsigned int v10; // [rsp+68h] [rbp-8h]
  int v11; // [rsp+88h] [rbp+18h] BYREF

  v7 = 0;
  memset(v8, 0, sizeof(v8));
  v9 = 0;
  v6 = 0u;
  LODWORD(v7) = -1;
  v10 = -1;
  v11 = -1;
  if ( sub_1401D0820(a1: a2, a2: &v11) != 0
    && (v10 = v11, v11 = v6, sub_1401D0820(a1: a2, a2: &v11) != 0)
    && (LODWORD(v6) = v11, v11 = DWORD1(v6), sub_1401D0820(a1: a2, a2: &v11) != 0)
    && (DWORD1(v6) = v11, (unsigned __int8)sub_14046DAD0(a1: a2, a2: (char *)&v6 + 8) != 0) )
  {
    (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(a1 + 8))(a1: a1 + 16, a2: v10, a3: &v6);
    v4 = 1;
  }
  else
  {
    v4 = 0;
  }
  if ( (char)v9 != -1 && (_BYTE)v9 != 0 && (char)v9 != 1 )
    sub_14001B5A0(a1: v8);
  return v4;
}