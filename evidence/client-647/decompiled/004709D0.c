__int64 __fastcall sub_1404709D0(__int64 a1, _DWORD *a2)
{
  unsigned __int8 v4; // bl
  void *v5; // rcx
  int v7; // [rsp+20h] [rbp-48h] BYREF
  __int128 v8; // [rsp+28h] [rbp-40h] BYREF
  __int64 v9; // [rsp+38h] [rbp-30h]
  unsigned __int64 v10; // [rsp+40h] [rbp-28h]
  __int64 v11; // [rsp+48h] [rbp-20h]

  v8 = 0;
  v9 = 0;
  v10 = 15;
  LOBYTE(v8) = 0;
  v11 = -1;
  if ( (unsigned __int8)sub_1402B4D00(a1: a2, a2: &v8) != 0
    && (v7 = v11, sub_1401D0820(a1: a2, a2: &v7) != 0)
    && (LODWORD(v11) = v7, v7 = HIDWORD(v11), sub_1401D0820(a1: a2, a2: &v7) != 0) )
  {
    HIDWORD(v11) = v7;
    (*(void (__fastcall **)(__int64, __int128 *))(a1 + 8))(a1: a1 + 16, a2: &v8);
    v4 = 1;
  }
  else
  {
    v4 = 0;
  }
  if ( v10 > 0xF )
  {
    v5 = (void *)v8;
    if ( v10 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v8 - *(_QWORD *)(v8 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v5 = *(void **)(v8 - 8);
    }
    sub_1409DB4C0(lpMem: v5);
  }
  return v4;
}