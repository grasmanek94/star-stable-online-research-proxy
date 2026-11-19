char __fastcall sub_1407A9120(_DWORD *a1, __int64 *a2)
{
  __int64 *v2; // rbx
  char result; // al
  void *v5; // rcx
  __int128 v6; // xmm1
  unsigned int v7; // edi
  _BYTE v8[4]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v9; // [rsp+24h] [rbp-34h] BYREF
  __int128 v10; // [rsp+28h] [rbp-30h] BYREF
  __int128 v11; // [rsp+38h] [rbp-20h]

  v2 = a2;
  v8[0] = *((_BYTE *)a2 + 32);
  result = (*(__int64 (__fastcall **)(_DWORD *, _BYTE *, __int64))(*(_QWORD *)a1 + 16LL))(a1, a2: v8, a3: 1);
  if ( result == 0 )
    return result;
  if ( v8[0] == 0 )
  {
    if ( *((_BYTE *)v2 + 32) != 0 )
    {
      sub_14001B5A0(a1: v2);
      *v2 = 19937;
      v2[2] = 0;
      v2[3] = 31;
      *((_BYTE *)v2 + 32) = 0;
    }
    return 1;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1) != 0 )
  {
    *((_QWORD *)&v11 + 1) = 15;
    *(_QWORD *)&v11 = 0;
    v10 = 0;
    LOBYTE(v10) = 0;
    if ( *((_BYTE *)v2 + 32) != 0 )
    {
      sub_140018C70(a1: v2, a2: &v10);
      if ( *((_QWORD *)&v11 + 1) > 0xFu )
      {
        v5 = (void *)v10;
        if ( (unsigned __int64)(*((_QWORD *)&v11 + 1) + 1LL) >= 0x1000 )
        {
          if ( (unsigned __int64)(v10 - *(_QWORD *)(v10 - 8) - 8) > 0x1F )
            goto LABEL_16;
          v5 = *(void **)(v10 - 8);
        }
        sub_1409DB4C0(lpMem: v5);
      }
    }
    else
    {
      v6 = v11;
      *(_OWORD *)v2 = v10;
      *((_OWORD *)v2 + 1) = v6;
      *((_BYTE *)v2 + 32) = 1;
    }
    *(_QWORD *)&v10 = 19937;
    *((_QWORD *)&v11 + 1) = 31;
  }
  if ( *((_BYTE *)v2 + 32) == 0 )
LABEL_16:
    __fastfail(5u);
  if ( (unsigned __int64)v2[2] >= 0xFFFFFFFF && (unsigned __int8)sub_140059CA0(a1: off_140F64800) != 0 )
    __debugbreak();
  v9 = *((_DWORD *)v2 + 4);
  if ( sub_1401D0820(a1, a2: &v9) == 0 )
    return 0;
  v7 = v9;
  if ( v9 > 0x1FA0 )
    return 0;
  sub_14005A6C0(a1: v2, a2: v9, a3: 0);
  if ( (unsigned __int64)v2[3] > 0xF )
    v2 = (__int64 *)*v2;
  return (*(__int64 (__fastcall **)(_DWORD *, __int64 *, _QWORD))(*(_QWORD *)a1 + 16LL))(a1, a2: v2, a3: v7);
}