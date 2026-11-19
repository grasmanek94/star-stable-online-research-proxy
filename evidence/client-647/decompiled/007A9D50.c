char __fastcall sub_1407A9D50(_DWORD *a1, __int64 *a2)
{
  __int64 v4; // rax
  __int16 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // r10
  char v8; // r8
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int8 v12; // cl
  char *v13; // rbx
  int v14; // edi
  unsigned __int64 v15; // rax
  unsigned __int8 i; // r9
  __int64 v18; // [rsp+38h] [rbp-40h]
  __int16 v19; // [rsp+40h] [rbp-38h]
  __int64 v20; // [rsp+48h] [rbp-30h] BYREF
  __int16 v21; // [rsp+50h] [rbp-28h]
  char v22; // [rsp+52h] [rbp-26h] BYREF

  v20 = 0;
  v21 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1) == 0 )
  {
    v4 = *a2;
    v5 = 0;
    v6 = *a2;
    v18 = 0;
    v6 >>= 63;
    v4 *= 2;
    v19 = 0;
    v7 = v4 ^ v6;
    v8 = 0;
    v9 = v4 ^ v6;
    if ( v6 != v4 )
    {
      do
      {
        v10 = v9;
        ++v8;
        v9 >>= 1;
      }
      while ( v10 >= 2 );
    }
    v11 = 0;
    v12 = v8 / 7 + (v8 != 7 * (v8 / 7));
    if ( v12 > 0xAu )
    {
      if ( (unsigned __int8)sub_140059CA0(a1: off_1410166E0) != 0 )
        __debugbreak();
      sub_1409E29B8(a1: 999);
      __debugbreak();
    }
    if ( v12 != 0 )
    {
      do
      {
        if ( v11 >= 0xA )
          __fastfail(5u);
        *((_BYTE *)&v18 + v11) = (v7 & (unsigned __int64)(127LL << (7 * (unsigned __int8)v11))) >> (7
                                                                                                  * (unsigned __int8)v11);
        if ( v11 != 0 )
          *((_BYTE *)&v18 + v11 - 1) |= 0x80u;
        ++v11;
      }
      while ( v11 < v12 );
      v5 = v19;
    }
    v20 = v18;
    v21 = v5;
  }
  v13 = (char *)&v20;
  v14 = 0;
  do
  {
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, char *, __int64))(*(_QWORD *)a1 + 16LL))(a1, a2: v13, a3: 1) == 0 )
      return 0;
    ++v14;
    if ( *v13 >= 0 )
      break;
    ++v13;
  }
  while ( v13 != &v22 );
  a1[6] += 8 - v14;
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1) != 0 )
  {
    v15 = 0;
    for ( i = 0; i < 0xAu; ++i )
    {
      v15 |= (unsigned __int64)(*((_BYTE *)&v20 + i) & 0x7F) << (7 * i);
      if ( *((char *)&v20 + i) >= 0 )
        break;
    }
    *a2 = -(__int64)(v15 & 1) ^ (v15 >> 1);
  }
  return 1;
}