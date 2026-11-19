__int64 __fastcall sub_1407BF0E0(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // bl
  void *v5; // rcx
  void *v6; // rcx
  char v8; // [rsp+20h] [rbp-29h]
  _BYTE v9[16]; // [rsp+30h] [rbp-19h] BYREF
  __int16 v10; // [rsp+40h] [rbp-9h] BYREF
  __int128 v11; // [rsp+48h] [rbp-1h] BYREF
  __int64 v12; // [rsp+58h] [rbp+Fh]
  unsigned __int64 v13; // [rsp+60h] [rbp+17h]
  __int128 v14; // [rsp+68h] [rbp+1Fh] BYREF
  __int64 v15; // [rsp+78h] [rbp+2Fh]
  unsigned __int64 v16; // [rsp+80h] [rbp+37h]

  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 15;
  LOBYTE(v11) = 0;
  v14 = 0;
  v15 = 0;
  v16 = 15;
  LOBYTE(v14) = 0;
  if ( (unsigned __int8)sub_1402B4D00(a1: a2, a2: &v14) == 0 || (unsigned __int8)sub_1402B4D00(a1: a2, a2: &v11) == 0 )
    goto LABEL_9;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a1: a2) != 0 )
  {
    v9[0] = 0;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a2 + 16LL))(a1: a2, a2: v9, a3: 1) == 0 )
      goto LABEL_9;
    HIBYTE(v10) = v9[0];
  }
  else
  {
    v9[0] = HIBYTE(v10);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a2 + 16LL))(a1: a2, a2: v9, a3: 1) == 0 )
      goto LABEL_9;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int16 *, __int64))(*(_QWORD *)a2 + 16LL))(a1: a2, a2: &v10, a3: 1) != 0 )
  {
    v8 = v10;
    (*(void (__fastcall **)(_QWORD, __int128 *, __int128 *, _QWORD, char))(a1 + 8))(
      a1: *(_QWORD *)(a1 + 16),
      a2: &v14,
      a3: &v11,
      a4: HIBYTE(v10),
      a5: v8);
    v4 = 1;
    goto LABEL_10;
  }
LABEL_9:
  v4 = 0;
LABEL_10:
  if ( v16 > 0xF )
  {
    v5 = (void *)v14;
    if ( v16 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v14 - *(_QWORD *)(v14 - 8) - 8) > 0x1F )
        goto LABEL_21;
      v5 = *(void **)(v14 - 8);
    }
    sub_1409DB4C0(lpMem: v5);
  }
  *(_QWORD *)&v14 = 19937;
  v15 = 0;
  v16 = 31;
  if ( v13 > 0xF )
  {
    v6 = (void *)v11;
    if ( v13 + 1 < 0x1000 )
    {
LABEL_19:
      sub_1409DB4C0(lpMem: v6);
      return v4;
    }
    if ( (unsigned __int64)(v11 - *(_QWORD *)(v11 - 8) - 8) <= 0x1F )
    {
      v6 = *(void **)(v11 - 8);
      goto LABEL_19;
    }
LABEL_21:
    __fastfail(5u);
  }
  return v4;
}