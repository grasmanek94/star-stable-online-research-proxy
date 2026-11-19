__int64 __fastcall sub_1407C1460(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v4)(); // rax
  char v5; // al
  unsigned __int8 v6; // bl
  _QWORD v8[8]; // [rsp+20h] [rbp-50h] BYREF
  __int128 v9; // [rsp+60h] [rbp-10h]
  unsigned __int8 v10; // [rsp+88h] [rbp+18h] BYREF

  memset(v8, 0, sizeof(v8));
  v9 = 0;
  LOWORD(v8[0]) = 0;
  BYTE8(v9) = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a1: a2) != 0 )
  {
    v10 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int8 *, __int64))(*(_QWORD *)a2 + 16LL))(
           a1: a2,
           a2: &v10,
           a3: 1) == 0 )
      goto LABEL_19;
    LOBYTE(v8[0]) = v10;
  }
  else
  {
    v10 = v8[0];
    if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int8 *, __int64))(*(_QWORD *)a2 + 16LL))(
           a1: a2,
           a2: &v10,
           a3: 1) == 0 )
      goto LABEL_19;
  }
  if ( (unsigned __int8)sub_1402B8840(a1: a2, a2: (char *)v8 + 1) == 0 )
    goto LABEL_19;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a1: a2) == 0 )
  {
    v10 = BYTE8(v9);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int8 *, __int64))(*(_QWORD *)a2 + 16LL))(
           a1: a2,
           a2: &v10,
           a3: 1) != 0 )
    {
      if ( v10 < 3uLL )
      {
        v5 = ((__int64 (__fastcall *)(__int64, _QWORD *))funcs_1407C158E[v10])(a1: a2, a2: &v8[1]);
        goto LABEL_17;
      }
LABEL_15:
      __fastfail(5u);
    }
LABEL_19:
    v6 = 0;
    goto LABEL_20;
  }
  v10 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int8 *, __int64))(*(_QWORD *)a2 + 16LL))(
         a1: a2,
         a2: &v10,
         a3: 1) == 0
    || v10 >= 3u )
  {
    goto LABEL_19;
  }
  if ( v10 >= 3uLL )
    goto LABEL_15;
  v4 = funcs_1407C155A[v10];
  if ( (char *)v4 == (char *)sub_1407AB190 )
    v5 = sub_1407AB190(a1: a2, a2: &v8[1]);
  else
    v5 = ((__int64 (__fastcall *)(__int64, _QWORD *))v4)(a1: a2, a2: &v8[1]);
LABEL_17:
  if ( v5 == 0 )
    goto LABEL_19;
  (*(void (__fastcall **)(_QWORD, _QWORD *))(a1 + 8))(a1: *(_QWORD *)(a1 + 16), a2: v8);
  v6 = 1;
LABEL_20:
  sub_1407DB1B0(a1: &v8[1]);
  return v6;
}