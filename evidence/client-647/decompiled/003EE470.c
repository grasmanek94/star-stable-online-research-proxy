char __fastcall sub_1403EE470(__int64 a1, __int64 a2)
{
  char v4; // al
  unsigned __int8 (__fastcall *v5)(__int64, unsigned __int8 *, __int64); // r9
  unsigned __int8 v6; // bl
  unsigned __int8 v8; // [rsp+38h] [rbp+10h] BYREF

  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a1: a2);
  v5 = *(unsigned __int8 (__fastcall **)(__int64, unsigned __int8 *, __int64))(*(_QWORD *)a2 + 16LL);
  if ( v4 != 0 )
  {
    v8 = 0;
    if ( v5(a1: a2, a2: &v8, a3: 1) != 0 )
    {
      v6 = v8;
LABEL_4:
      (*(void (__fastcall **)(_QWORD, _QWORD))(a1 + 8))(a1: *(_QWORD *)(a1 + 16), a2: v6);
      return 1;
    }
  }
  else
  {
    v6 = 0;
    v8 = 0;
    if ( v5(a1: a2, a2: &v8, a3: 1) != 0 )
      goto LABEL_4;
  }
  return 0;
}