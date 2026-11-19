__int64 __fastcall sub_1407C0FE0(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // bl
  void *v4; // rcx
  _QWORD v6[4]; // [rsp+20h] [rbp-58h] BYREF
  char v7; // [rsp+40h] [rbp-38h]
  _QWORD v8[4]; // [rsp+48h] [rbp-30h] BYREF
  char v9; // [rsp+68h] [rbp-10h]

  v7 = 0;
  if ( (unsigned __int8)sub_1407A9120(a1: a2, a2: v6) != 0 )
  {
    v9 = 0;
    if ( v7 != 0 )
    {
      qmemcpy(v8, v6, sizeof(v8));
      v6[2] = 0;
      v6[3] = 15;
      LOBYTE(v6[0]) = 0;
      v9 = 1;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD *))(a1 + 8))(a1: *(_QWORD *)(a1 + 16), a2: v8);
    v3 = 1;
  }
  else
  {
    v3 = 0;
  }
  if ( v7 != 0 && v6[3] > 0xFu )
  {
    v4 = (void *)v6[0];
    if ( (unsigned __int64)(v6[3] + 1LL) >= 0x1000 )
    {
      if ( (unsigned __int64)(v6[0] - *(_QWORD *)(v6[0] - 8LL) - 8LL) > 0x1F )
        __fastfail(5u);
      v4 = *(void **)(v6[0] - 8LL);
    }
    sub_1409DB4C0(lpMem: v4);
  }
  return v3;
}