char __fastcall sub_140829610(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 (__fastcall *v6)(); // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF
  __int16 v8; // [rsp+35h] [rbp+Dh]
  char v9; // [rsp+37h] [rbp+Fh]

  if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 8))(a1) == 0 )
  {
    LOBYTE(v7) = *(_BYTE *)(a2 + 4);
    if ( (*(unsigned __int8 (__fastcall **)(__int64 *, int *, __int64))(*a1 + 16))(a1, a2: &v7, a3: 1) != 0 )
    {
      if ( (unsigned __int8)v7 < 3uLL )
        return ((__int64 (__fastcall *)(__int64 *, __int64))funcs_1408296F2[(unsigned __int8)v7])(a1, a2);
LABEL_11:
      __fastfail(5u);
    }
    return 0;
  }
  v4 = *a1;
  LOBYTE(v7) = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, int *, __int64))(v4 + 16))(a1, a2: &v7, a3: 1) == 0
    || (unsigned __int8)v7 >= 3u )
  {
    return 0;
  }
  if ( (unsigned __int8)v7 >= 3uLL )
    goto LABEL_11;
  v6 = funcs_1408296B0[(unsigned __int8)v7];
  if ( v6 != sub_1408297A0 )
    return ((__int64 (__fastcall *)(__int64 *, __int64))v6)(a1, a2);
  *(_DWORD *)a2 = v7;
  *(_WORD *)(a2 + 5) = v8;
  *(_BYTE *)(a2 + 7) = v9;
  *(_BYTE *)(a2 + 4) = 0;
  return 1;
}