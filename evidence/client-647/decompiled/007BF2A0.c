__int64 __fastcall sub_1407BF2A0(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // bl
  void *v5; // rcx
  void *v6; // rcx
  _BYTE v8[8]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v9; // [rsp+28h] [rbp-60h] BYREF
  __int64 v10; // [rsp+38h] [rbp-50h]
  unsigned __int64 v11; // [rsp+40h] [rbp-48h]
  __int128 v12; // [rsp+48h] [rbp-40h] BYREF
  __int64 v13; // [rsp+58h] [rbp-30h]
  unsigned __int64 v14; // [rsp+60h] [rbp-28h]

  v8[0] = 0;
  v9 = 0;
  v10 = 0;
  v11 = 15;
  LOBYTE(v9) = 0;
  v12 = 0;
  v13 = 0;
  v14 = 15;
  LOBYTE(v12) = 0;
  if ( (unsigned __int8)sub_1402B4D00(a1: a2, a2: &v12) != 0
    && (unsigned __int8)sub_1402B4D00(a1: a2, a2: &v9) != 0
    && (*(unsigned __int8 (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a2 + 16LL))(a1: a2, a2: v8, a3: 1) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, __int128 *, __int128 *, _QWORD))(a1 + 8))(
      a1: *(_QWORD *)(a1 + 16),
      a2: &v12,
      a3: &v9,
      a4: v8[0]);
    v4 = 1;
  }
  else
  {
    v4 = 0;
  }
  if ( v14 > 0xF )
  {
    v5 = (void *)v12;
    if ( v14 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v12 - *(_QWORD *)(v12 - 8) - 8) > 0x1F )
        goto LABEL_17;
      v5 = *(void **)(v12 - 8);
    }
    sub_1409DB4C0(lpMem: v5);
  }
  *(_QWORD *)&v12 = 19937;
  v13 = 0;
  v14 = 31;
  if ( v11 > 0xF )
  {
    v6 = (void *)v9;
    if ( v11 + 1 < 0x1000 )
    {
LABEL_15:
      sub_1409DB4C0(lpMem: v6);
      return v4;
    }
    if ( (unsigned __int64)(v9 - *(_QWORD *)(v9 - 8) - 8) <= 0x1F )
    {
      v6 = *(void **)(v9 - 8);
      goto LABEL_15;
    }
LABEL_17:
    __fastfail(5u);
  }
  return v4;
}