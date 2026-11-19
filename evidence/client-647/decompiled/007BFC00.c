__int64 __fastcall sub_1407BFC00(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v4)(); // rax
  char v5; // al
  unsigned __int8 v6; // bl
  _BYTE v8[8]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v9[40]; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int8 v10; // [rsp+50h] [rbp-18h]
  unsigned __int8 v11; // [rsp+78h] [rbp+10h] BYREF

  v8[0] = 0;
  v10 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a1: a2) == 0 )
  {
    v11 = v10;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int8 *, __int64))(*(_QWORD *)a2 + 16LL))(
           a1: a2,
           a2: &v11,
           a3: 1) == 0 )
    {
LABEL_14:
      v6 = 0;
      goto LABEL_15;
    }
    if ( v11 < 2uLL )
    {
      v5 = ((__int64 (__fastcall *)(__int64, _BYTE *))funcs_1407BFCBD[v11])(a1: a2, a2: v8);
      goto LABEL_12;
    }
LABEL_10:
    __fastfail(5u);
  }
  v11 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int8 *, __int64))(*(_QWORD *)a2 + 16LL))(
         a1: a2,
         a2: &v11,
         a3: 1) == 0
    || v11 >= 2u )
  {
    goto LABEL_14;
  }
  if ( v11 >= 2uLL )
    goto LABEL_10;
  v4 = funcs_1407BFC85[v11];
  if ( (char *)v4 == (char *)sub_1407AB2A0 )
    v5 = sub_1407AB2A0(a1: a2, a2: v8);
  else
    v5 = ((__int64 (__fastcall *)(__int64, _BYTE *))v4)(a1: a2, a2: v8);
LABEL_12:
  if ( v5 == 0 )
    goto LABEL_14;
  (*(void (__fastcall **)(_QWORD, _BYTE *))(a1 + 8))(a1: *(_QWORD *)(a1 + 16), a2: v8);
  v6 = 1;
LABEL_15:
  if ( (char)v10 != -1 && v10 != 0 )
    sub_14001B5A0(a1: v9);
  return v6;
}