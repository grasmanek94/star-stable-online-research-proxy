__int64 __fastcall sub_140471260(__int64 a1, _DWORD *a2)
{
  unsigned __int8 v4; // bl
  void *v5; // rcx
  int v7; // [rsp+20h] [rbp-50h] BYREF
  __int64 v8; // [rsp+28h] [rbp-48h] BYREF
  __int64 v9; // [rsp+30h] [rbp-40h]
  __int128 v10; // [rsp+38h] [rbp-38h] BYREF
  __int64 v11; // [rsp+48h] [rbp-28h]
  unsigned __int64 v12; // [rsp+50h] [rbp-20h]
  unsigned int v13; // [rsp+58h] [rbp-18h]

  v8 = 0;
  v9 = 0xFFFFFFFFLL;
  v10 = 0;
  v11 = 0;
  v12 = 15;
  LOBYTE(v10) = 0;
  v13 = -1;
  v7 = -1;
  if ( sub_1401D0820(a1: a2, a2: &v7) != 0
    && (v13 = v7, v7 = v8, sub_1401D0820(a1: a2, a2: &v7) != 0)
    && (LODWORD(v8) = v7, v7 = HIDWORD(v8), sub_1401D0820(a1: a2, a2: &v7) != 0)
    && (HIDWORD(v8) = v7, v7 = v9, sub_1401D0820(a1: a2, a2: &v7) != 0)
    && (LODWORD(v9) = v7, (unsigned __int8)sub_1402B4D00(a1: a2, a2: &v10) != 0) )
  {
    (*(void (__fastcall **)(__int64, _QWORD, __int64 *))(a1 + 8))(a1: a1 + 16, a2: v13, a3: &v8);
    v4 = 1;
  }
  else
  {
    v4 = 0;
  }
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