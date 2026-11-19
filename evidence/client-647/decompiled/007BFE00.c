__int64 __fastcall sub_1407BFE00(__int64 a1, _DWORD *a2)
{
  unsigned __int8 v4; // bl
  void *v5; // rcx
  _BYTE v7[4]; // [rsp+20h] [rbp-40h] BYREF
  int v8; // [rsp+24h] [rbp-3Ch] BYREF
  __int64 v9; // [rsp+28h] [rbp-38h] BYREF
  __int128 v10; // [rsp+30h] [rbp-30h] BYREF
  __int64 v11; // [rsp+40h] [rbp-20h]
  unsigned __int64 v12; // [rsp+48h] [rbp-18h]

  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 15;
  LOBYTE(v10) = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 8LL))(a1: a2) != 0 )
  {
    v8 = 0;
    if ( sub_1401D0820(a1: a2, a2: &v8) == 0 )
      goto LABEL_11;
    LODWORD(v9) = v8;
  }
  else
  {
    v8 = v9;
    if ( sub_1401D0820(a1: a2, a2: &v8) == 0 )
      goto LABEL_11;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 8LL))(a1: a2) != 0 )
  {
    v7[0] = 0;
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, _BYTE *, __int64))(*(_QWORD *)a2 + 16LL))(a1: a2, a2: v7, a3: 1) == 0 )
      goto LABEL_11;
    BYTE4(v9) = v7[0];
  }
  else
  {
    v7[0] = BYTE4(v9);
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, _BYTE *, __int64))(*(_QWORD *)a2 + 16LL))(a1: a2, a2: v7, a3: 1) == 0 )
      goto LABEL_11;
  }
  if ( (unsigned __int8)sub_1402B4D00(a1: a2, a2: &v10) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, __int64, __int64 *))(a1 + 8))(a1: *(_QWORD *)(a1 + 152), a2: a1 + 16, a3: &v9);
    v4 = 1;
    goto LABEL_12;
  }
LABEL_11:
  v4 = 0;
LABEL_12:
  if ( v12 > 0xF )
  {
    v5 = (void *)v10;
    if ( v12 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v10 - *(_QWORD *)(v10 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v5 = *(void **)(v10 - 8);
    }
    sub_1409DB4C0(lpMem: v5);
  }
  return v4;
}