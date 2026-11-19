__int64 __fastcall sub_140351950(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rax
  unsigned __int8 v5; // bl
  _QWORD v7[2]; // [rsp+20h] [rbp-50h] BYREF
  __int128 v8; // [rsp+30h] [rbp-40h] BYREF
  __int64 v9; // [rsp+40h] [rbp-30h]
  __int64 v10; // [rsp+48h] [rbp-28h]
  __int128 v11; // [rsp+50h] [rbp-20h] BYREF
  __int64 v12; // [rsp+60h] [rbp-10h]

  v7[0] = &v8;
  v8 = 0;
  v9 = 0;
  v10 = 15;
  LOBYTE(v8) = 0;
  v11 = 0u;
  v7[1] = (char *)&v11 + 8;
  v12 = 0;
  v4 = sub_1409DB470(a1: 88);
  *(_QWORD *)v4 = v4;
  *(_QWORD *)(v4 + 8) = v4;
  *(_QWORD *)(v4 + 16) = v4;
  *(_WORD *)(v4 + 24) = 257;
  *((_QWORD *)&v11 + 1) = v4;
  if ( (unsigned __int8)sub_1402B4D00(a1: a2, a2: &v8) != 0
    && (LODWORD(v7[0]) = v11, sub_1401D0820(a1: a2, a2: v7) != 0)
    && (LODWORD(v11) = v7[0], LODWORD(v7[0]) = DWORD1(v11), sub_1401D0820(a1: a2, a2: v7) != 0)
    && (DWORD1(v11) = v7[0], (unsigned __int8)sub_140346840(a1: a2, a2: (char *)&v11 + 8) != 0) )
  {
    (*(void (__fastcall **)(__int64, __int128 *))(a1 + 8))(a1: a1 + 16, a2: &v8);
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  sub_14034BC90(a1: &v8);
  return v5;
}