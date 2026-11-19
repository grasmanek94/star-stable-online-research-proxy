char __fastcall sub_1407F94C0(_DWORD *a1, __int64 *a2)
{
  unsigned int v4; // ebp
  unsigned __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 (__fastcall *v10)(); // rax
  __int64 v11; // rdx
  char v12; // al
  unsigned int v14; // [rsp+58h] [rbp+10h] BYREF

  if ( (unsigned __int64)((a2[1] - *a2) / 56) >= 0xFFFFFFFF && (unsigned __int8)sub_140059CA0(a1: off_14101A350) != 0 )
    __debugbreak();
  v14 = (a2[1] - *a2) / 56;
  if ( sub_1401D0820(a1, a2: &v14) == 0 )
    return 0;
  v4 = v14;
  if ( v14 > 0x3E80 )
    return 0;
  v5 = v14;
  sub_1407F9C40(a1: a2, a2: v14, a3: &v14);
  v6 = *a2;
  v7 = 0;
  if ( v4 == 0 )
    return 1;
  while ( 1 )
  {
    v8 = 56 * v7;
    v14 = *(_DWORD *)(v6 + 56 * v7);
    if ( sub_1401D0820(a1, a2: &v14) == 0 )
      return 0;
    *(_DWORD *)(v6 + 56 * v7) = v14;
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1) != 0 )
    {
      v9 = *(_QWORD *)a1;
      LOBYTE(v14) = 0;
      if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, unsigned int *, __int64))(v9 + 16))(a1, a2: &v14, a3: 1) == 0
        || (unsigned __int8)v14 >= 4u )
      {
        return 0;
      }
      if ( (unsigned __int8)v14 >= 4uLL )
        goto LABEL_21;
      v10 = funcs_1407F962B[(unsigned __int8)v14];
      v11 = v8 + v6 + 8;
      if ( (char *)v10 == (char *)sub_1407F9950 )
        v12 = sub_1407F9950(a1, a2: v11);
      else
        v12 = ((__int64 (__fastcall *)(_DWORD *, __int64))v10)(a1, a2: v11);
    }
    else
    {
      LOBYTE(v14) = *(_BYTE *)(v6 + v8 + 48);
      if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, unsigned int *, __int64))(*(_QWORD *)a1 + 16LL))(
             a1,
             a2: &v14,
             a3: 1) == 0 )
        return 0;
      if ( (unsigned __int8)v14 >= 4uLL )
LABEL_21:
        __fastfail(5u);
      v12 = ((__int64 (__fastcall *)(_DWORD *, __int64))funcs_1407F9654[(unsigned __int8)v14])(a1, a2: v8 + v6 + 8);
    }
    if ( v12 == 0 )
      return 0;
    if ( ++v7 >= v5 )
      return 1;
  }
}