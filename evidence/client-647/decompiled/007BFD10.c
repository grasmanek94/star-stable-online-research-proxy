__int64 __fastcall sub_1407BFD10(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // bl
  void *v5; // rcx
  __int64 v7; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8; // [rsp+28h] [rbp-40h] BYREF
  __int128 v9; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+40h] [rbp-28h]
  unsigned __int64 v11; // [rsp+48h] [rbp-20h]

  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 15;
  LOBYTE(v9) = 0;
  v7 = 0;
  if ( (unsigned __int8)sub_1402AF380(a1: a2, a2: &v7) != 0
    && (v8 = v7, (unsigned __int8)sub_1402B4D00(a1: a2, a2: &v9) != 0) )
  {
    (*(void (__fastcall **)(_QWORD, __int64, __int64 *))(a1 + 8))(a1: *(_QWORD *)(a1 + 152), a2: a1 + 16, a3: &v8);
    v4 = 1;
  }
  else
  {
    v4 = 0;
  }
  if ( v11 > 0xF )
  {
    v5 = (void *)v9;
    if ( v11 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v9 - *(_QWORD *)(v9 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v5 = *(void **)(v9 - 8);
    }
    sub_1409DB4C0(lpMem: v5);
  }
  return v4;
}