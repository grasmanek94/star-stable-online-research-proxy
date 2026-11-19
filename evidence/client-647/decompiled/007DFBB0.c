__int64 __fastcall sub_1407DFBB0(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // bl
  char v5; // al
  void *v6; // rcx
  _BYTE v8[16]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v9; // [rsp+30h] [rbp-40h] BYREF
  __int128 v10; // [rsp+38h] [rbp-38h] BYREF
  __int64 v11; // [rsp+48h] [rbp-28h]
  _QWORD v12[2]; // [rsp+50h] [rbp-20h] BYREF

  v9 = 0;
  v10 = 0;
  v11 = 0;
  *(_OWORD *)v12 = 0xFu;
  LOBYTE(v10) = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a1: a2) != 0 )
  {
    v8[0] = 0;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a2 + 16LL))(a1: a2, a2: v8, a3: 1) == 0 )
      goto LABEL_17;
    LOBYTE(v9) = v8[0];
  }
  else
  {
    v8[0] = v9;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a2 + 16LL))(a1: a2, a2: v8, a3: 1) == 0 )
      goto LABEL_17;
  }
  if ( (unsigned __int8)sub_1402B4D00(a1: a2, a2: &v10) != 0
    && (*(unsigned __int8 (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a2 + 16LL))(
         a1: a2,
         a2: &v12[1],
         a3: 1) != 0 )
  {
    v8[0] = BYTE2(v12[1]);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a2 + 16LL))(a1: a2, a2: v8, a3: 1) != 0 )
    {
      if ( v8[0] == 0 )
      {
        BYTE2(v12[1]) = 0;
        (*(void (__fastcall **)(__int64, __int64 *))(a1 + 8))(a1: a1 + 16, a2: &v9);
        v4 = 1;
        goto LABEL_18;
      }
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a1: a2) != 0 )
      {
        *(_WORD *)((char *)&v12[1] + 1) = 256;
        v5 = 1;
      }
      else
      {
        v5 = BYTE2(v12[1]);
      }
      if ( v5 == 0 )
        __fastfail(5u);
      if ( (*(unsigned __int8 (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)a2 + 16LL))(
             a1: a2,
             a2: (char *)&v12[1] + 1,
             a3: 1) != 0 )
      {
        (*(void (__fastcall **)(__int64, __int64 *))(a1 + 8))(a1: a1 + 16, a2: &v9);
        v4 = 1;
        goto LABEL_18;
      }
    }
  }
LABEL_17:
  v4 = 0;
LABEL_18:
  if ( v12[0] > 0xFu )
  {
    v6 = (void *)v10;
    if ( (unsigned __int64)(v12[0] + 1LL) >= 0x1000 )
    {
      if ( (unsigned __int64)(v10 - *(_QWORD *)(v10 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v6 = *(void **)(v10 - 8);
    }
    sub_1409DB4C0(lpMem: v6);
  }
  return v4;
}