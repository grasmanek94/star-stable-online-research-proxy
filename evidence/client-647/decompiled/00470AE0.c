__int64 __fastcall sub_140470AE0(__int64 a1, _DWORD *a2)
{
  unsigned __int8 v4; // bl
  void *v5; // rcx
  int v7; // [rsp+20h] [rbp-58h] BYREF
  int v8; // [rsp+28h] [rbp-50h]
  __int64 v9; // [rsp+30h] [rbp-48h] BYREF
  __int128 v10; // [rsp+38h] [rbp-40h]
  __int64 v11; // [rsp+48h] [rbp-30h]
  __int128 v12; // [rsp+50h] [rbp-28h]

  v8 = -1;
  v9 = 0xFFFFFFFFLL;
  v10 = 0;
  v11 = 0;
  v12 = 0xFu;
  LOBYTE(v10) = 0;
  if ( (unsigned __int8)sub_1407F7890(a1: a2, a2: &v9) != 0 && (v7 = v8, sub_1401D0820(a1: a2, a2: &v7) != 0) )
  {
    v8 = v7;
    (*(void (__fastcall **)(__int64, __int64 *))(a1 + 8))(a1: a1 + 16, a2: &v9);
    v4 = 1;
  }
  else
  {
    v4 = 0;
  }
  if ( (unsigned __int64)v12 > 0xF )
  {
    v5 = (void *)v10;
    if ( (unsigned __int64)(v12 + 1) >= 0x1000 )
    {
      if ( (unsigned __int64)(v10 - *(_QWORD *)(v10 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v5 = *(void **)(v10 - 8);
    }
    sub_1409DB4C0(lpMem: v5);
  }
  return v4;
}