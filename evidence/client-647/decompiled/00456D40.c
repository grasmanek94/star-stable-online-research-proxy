__int64 __fastcall sub_140456D40(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v4)(); // rax
  char v5; // al
  unsigned __int8 v6; // bl
  _BYTE v8[376]; // [rsp+20h] [rbp-188h] BYREF
  unsigned __int8 v9; // [rsp+198h] [rbp-10h]
  unsigned __int8 v10; // [rsp+1B8h] [rbp+10h] BYREF

  sub_140E827B0(a1: v8, a2: 0, a3: 376);
  sub_14044F530(a1: v8);
  v9 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a1: a2) == 0 )
  {
    v10 = v9;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int8 *, __int64))(*(_QWORD *)a2 + 16LL))(
           a1: a2,
           a2: &v10,
           a3: 1) == 0 )
    {
LABEL_14:
      v6 = 0;
      goto LABEL_15;
    }
    if ( v10 < 2uLL )
    {
      v5 = ((__int64 (__fastcall *)(__int64, _BYTE *))funcs_140456E2C[v10])(a1: a2, a2: v8);
      goto LABEL_12;
    }
LABEL_10:
    __fastfail(5u);
  }
  v10 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int8 *, __int64))(*(_QWORD *)a2 + 16LL))(
         a1: a2,
         a2: &v10,
         a3: 1) == 0
    || v10 >= 2u )
  {
    goto LABEL_14;
  }
  if ( v10 >= 2uLL )
    goto LABEL_10;
  v4 = funcs_140456DEB[v10];
  if ( (char *)v4 == (char *)sub_14044CED0 )
    v5 = sub_14044CED0(a1: a2, a2: v8);
  else
    v5 = ((__int64 (__fastcall *)(__int64, _BYTE *))v4)(a1: a2, a2: v8);
LABEL_12:
  if ( v5 == 0 )
    goto LABEL_14;
  (*(void (__fastcall **)(__int64, _BYTE *))(a1 + 8))(a1: a1 + 16, a2: v8);
  v6 = 1;
LABEL_15:
  if ( (char)v9 != -1 && v9 == 0 )
    sub_1404505B0(a1: v8);
  return v6;
}