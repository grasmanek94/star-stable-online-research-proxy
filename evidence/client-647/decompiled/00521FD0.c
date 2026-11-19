__int64 __fastcall sub_140521FD0(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  unsigned __int8 v5; // bl
  __int128 v7; // [rsp+20h] [rbp-69h] BYREF
  __int128 v8; // [rsp+30h] [rbp-59h] BYREF
  __int128 v9; // [rsp+40h] [rbp-49h] BYREF
  __int128 v10; // [rsp+50h] [rbp-39h] BYREF
  __int128 v11; // [rsp+60h] [rbp-29h]
  _QWORD v12[8]; // [rsp+70h] [rbp-19h] BYREF
  __int64 v13; // [rsp+B0h] [rbp+27h]
  __int128 *v14; // [rsp+C0h] [rbp+37h]

  v10 = 0;
  v11 = 0;
  memset(v12, 0, sizeof(v12));
  v13 = 0;
  v7 = 0;
  v8 = 0u;
  v14 = &v9;
  v9 = 0u;
  v4 = (_QWORD *)sub_1409DB470(a1: 24);
  *v4 = v4;
  v4[1] = v4;
  *(_QWORD *)&v9 = v4;
  v10 = 0;
  *(_QWORD *)&v11 = 0;
  *((_QWORD *)&v11 + 1) = 7;
  v12[0] = 8;
  DWORD2(v8) = 1065353216;
  sub_14004B820(a1: &v10, a2: 16, a3: v4);
  sub_14051F3C0(a1: &v12[1]);
  if ( (unsigned __int8)sub_1402B82C0(a1: a2, a2: &v7) != 0
    && (unsigned __int8)sub_14051B300(a1: a2, a2: (char *)&v8 + 8) != 0
    && (unsigned __int8)sub_14051A380(a1: a2, a2: &v12[1]) != 0 )
  {
    (*(void (__fastcall **)(__int64, __int128 *))(a1 + 8))(a1: a1 + 16, a2: &v7);
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  sub_140520090(a1: &v7);
  return v5;
}