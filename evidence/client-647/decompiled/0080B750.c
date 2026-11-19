char __fastcall sub_14080B750(__int64 a1, __int64 a2)
{
  unsigned int v3; // ecx
  const char *v4; // r8
  void *v6; // rcx
  unsigned int v7; // [rsp+38h] [rbp-50h] BYREF
  __int64 v8; // [rsp+40h] [rbp-48h]
  char v9; // [rsp+48h] [rbp-40h]
  void *v10; // [rsp+58h] [rbp-30h] BYREF
  unsigned __int64 v11; // [rsp+70h] [rbp-18h]

  v3 = *(_DWORD *)(a2 + 48);
  if ( v3 <= 0x5DC )
  {
    sub_140A4BB70(
      a1: (__int64)&v7,
      a2: (SOCKET *)(a1 + 56),
      a3: *(const char **)(a2 + 40),
      a4: *(_DWORD *)(a2 + 48),
      a5: a2 + 8);
    if ( v9 != 0 )
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 136) + 8LL))(a1: *(_QWORD *)(a1 + 136));
      return 1;
    }
    else
    {
      (*(void (__fastcall **)(__int64, void **, _QWORD))(*(_QWORD *)v8 + 16LL))(a1: v8, a2: &v10, a3: v7);
      if ( v11 > 0xF )
      {
        v6 = v10;
        if ( v11 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)v10 - *((_QWORD *)v10 - 1) - 8 > 0x1F )
            __fastfail(5u);
          v6 = *((void **)v10 - 1);
        }
        sub_1409DB4C0(lpMem: v6);
      }
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 152) + 8LL))(a1: *(_QWORD *)(a1 + 152));
      return 0;
    }
  }
  else
  {
    v4 = (const char *)(a1 + 8);
    if ( *(_QWORD *)(a1 + 32) > 0xFu )
      v4 = *(const char **)v4;
    if ( (unsigned __int8)sub_140059D90(
                            a1: off_14101BC88,
                            a2: "[%s] UdpNetworkLayer tried to send packet with invalid size: %u (max: %zu)!",
                            v4,
                            v3,
                            0x5DCu) != 0 )
      __debugbreak();
    return 0;
  }
}