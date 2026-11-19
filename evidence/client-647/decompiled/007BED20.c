__int64 __fastcall sub_1407BED20(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v4)(); // rax
  unsigned __int8 v5; // bl
  char v6; // al
  void *v7; // rcx
  _BYTE v9[4]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v10; // [rsp+24h] [rbp-5Ch]
  __int16 v11; // [rsp+35h] [rbp-4Bh]
  char v12; // [rsp+37h] [rbp-49h]
  __int128 v13; // [rsp+38h] [rbp-48h] BYREF
  __int64 v14; // [rsp+48h] [rbp-38h]
  unsigned __int64 v15; // [rsp+50h] [rbp-30h]
  __int128 v16; // [rsp+58h] [rbp-28h] BYREF
  __int64 v17; // [rsp+68h] [rbp-18h]

  v16 = 0;
  v17 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 15;
  LOBYTE(v13) = 0;
  if ( (unsigned __int8)sub_1402B4D00(a1: a2, a2: &v13) == 0 )
    goto LABEL_15;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a1: a2) == 0 )
  {
    v9[0] = v17;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a2 + 16LL))(a1: a2, a2: v9, a3: 1) == 0 )
      goto LABEL_15;
    if ( v9[0] < 3uLL )
    {
      v6 = ((__int64 (__fastcall *)(__int64, __int128 *))funcs_1407BEE3F[v9[0]])(a1: a2, a2: &v16);
      goto LABEL_13;
    }
LABEL_11:
    __fastfail(5u);
  }
  v9[0] = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a2 + 16LL))(a1: a2, a2: v9, a3: 1) == 0
    || v9[0] >= 3u )
  {
    goto LABEL_15;
  }
  if ( v9[0] >= 3uLL )
    goto LABEL_11;
  v4 = funcs_1407BEE0B[v9[0]];
  if ( v4 == sub_1407AAF40 )
  {
    v16 = v10;
    LOBYTE(v17) = 0;
    *(_WORD *)((char *)&v17 + 1) = v11;
    BYTE3(v17) = v12;
    (*(void (__fastcall **)(_QWORD, __int128 *))(a1 + 8))(a1: *(_QWORD *)(a1 + 16), a2: &v13);
    v5 = 1;
    goto LABEL_16;
  }
  v6 = ((__int64 (__fastcall *)(__int64, __int128 *))v4)(a1: a2, a2: &v16);
LABEL_13:
  if ( v6 != 0 )
  {
    (*(void (__fastcall **)(_QWORD, __int128 *))(a1 + 8))(a1: *(_QWORD *)(a1 + 16), a2: &v13);
    v5 = 1;
    goto LABEL_16;
  }
LABEL_15:
  v5 = 0;
LABEL_16:
  if ( v15 > 0xF )
  {
    v7 = (void *)v13;
    if ( v15 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v13 - *(_QWORD *)(v13 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v7 = *(void **)(v13 - 8);
    }
    sub_1409DB4C0(lpMem: v7);
  }
  return v5;
}