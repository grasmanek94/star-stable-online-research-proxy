__int64 __fastcall sub_1407C1210(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // bl
  _BYTE v6[24]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v7[7]; // [rsp+38h] [rbp-50h] BYREF
  char v8; // [rsp+70h] [rbp-18h]
  unsigned __int8 v9; // [rsp+78h] [rbp-10h]
  unsigned __int8 v10; // [rsp+98h] [rbp+10h] BYREF

  v8 = 0;
  v9 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a1: a2) != 0 )
  {
    v10 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int8 *, __int64))(*(_QWORD *)a2 + 16LL))(
           a1: a2,
           a2: &v10,
           a3: 1) == 0 )
      goto LABEL_7;
    v9 = v10;
  }
  else
  {
    v10 = v9;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int8 *, __int64))(*(_QWORD *)a2 + 16LL))(
           a1: a2,
           a2: &v10,
           a3: 1) == 0 )
      goto LABEL_7;
  }
  if ( (unsigned __int8)sub_1407A71F0(a1: a2, a2: v6) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _BYTE *))(a1 + 8))(a1: *(_QWORD *)(a1 + 16), a2: v9, a3: v6);
    v4 = 1;
    goto LABEL_8;
  }
LABEL_7:
  v4 = 0;
LABEL_8:
  if ( v8 != 0 )
  {
    sub_14001B5A0(a1: v7);
    v7[0] = 19937;
    v7[2] = 0;
    v7[3] = 31;
    sub_14001B300(a1: v6);
  }
  return v4;
}