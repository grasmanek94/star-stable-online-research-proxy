__int64 __fastcall sub_1407C10C0(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // bl
  void *v5; // rcx
  _QWORD v7[3]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v8; // [rsp+38h] [rbp-40h]
  char v9; // [rsp+60h] [rbp-18h]
  _DWORD v10[4]; // [rsp+68h] [rbp-10h] BYREF

  v9 = 0;
  v10[0] = 0;
  if ( (unsigned __int8)sub_1402D2DB0(a1: a2, a2: v10) != 0 && (unsigned __int8)sub_1407A7DA0(a1: a2, a2: v7) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD *))(a1 + 8))(a1: *(_QWORD *)(a1 + 16), a2: v10[0], a3: v7);
    v4 = 1;
  }
  else
  {
    v4 = 0;
  }
  if ( v9 != 0 && v8 > 0xF )
  {
    v5 = (void *)v7[0];
    if ( v8 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v7[0] - *(_QWORD *)(v7[0] - 8LL) - 8LL) > 0x1F )
        __fastfail(5u);
      v5 = *(void **)(v7[0] - 8LL);
    }
    sub_1409DB4C0(lpMem: v5);
  }
  return v4;
}