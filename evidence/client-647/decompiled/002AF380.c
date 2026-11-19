char __fastcall sub_1402AF380(_DWORD *a1, unsigned __int64 *a2)
{
  unsigned __int64 v4; // r10
  __int16 v5; // r8
  char v6; // dl
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int8 v10; // cl
  char *v11; // rbx
  int v12; // edi
  unsigned __int64 v13; // rax
  unsigned __int8 i; // r9
  __int64 v16; // [rsp+38h] [rbp-40h]
  __int16 v17; // [rsp+40h] [rbp-38h]
  __int64 v18; // [rsp+48h] [rbp-30h] BYREF
  __int16 v19; // [rsp+50h] [rbp-28h]
  char v20; // [rsp+52h] [rbp-26h] BYREF

  v18 = 0;
  v19 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1) == 0 )
  {
    v4 = *a2;
    v5 = 0;
    v6 = 0;
    v16 = 0;
    v17 = 0;
    v7 = v4;
    if ( v4 != 0 )
    {
      do
      {
        v8 = v7;
        ++v6;
        v7 >>= 1;
      }
      while ( v8 >= 2 );
    }
    v9 = 0;
    v10 = v6 / 7 + (v6 != 7 * (v6 / 7));
    if ( v10 > 0xAu )
    {
      if ( (unsigned __int8)sub_140059CA0(a1: off_140F63F60) != 0 )
        __debugbreak();
      sub_1409E29B8(a1: 999);
      __debugbreak();
    }
    if ( v10 != 0 )
    {
      do
      {
        if ( v9 >= 0xA )
          __fastfail(5u);
        *((_BYTE *)&v16 + v9) = (v4 & (127LL << (7 * (unsigned __int8)v9))) >> (7 * (unsigned __int8)v9);
        if ( v9 != 0 )
          *((_BYTE *)&v16 + v9 - 1) |= 0x80u;
        ++v9;
      }
      while ( v9 < v10 );
      v5 = v17;
    }
    v18 = v16;
    v19 = v5;
  }
  v11 = (char *)&v18;
  v12 = 0;
  do
  {
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, char *, __int64))(*(_QWORD *)a1 + 16LL))(a1, a2: v11, a3: 1) == 0 )
      return 0;
    ++v12;
    if ( *v11 >= 0 )
      break;
    ++v11;
  }
  while ( v11 != &v20 );
  a1[6] += 8 - v12;
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1) != 0 )
  {
    v13 = 0;
    for ( i = 0; i < 0xAu; ++i )
    {
      v13 |= (unsigned __int64)(*((_BYTE *)&v18 + i) & 0x7F) << (7 * i);
      if ( *((char *)&v18 + i) >= 0 )
        break;
    }
    *a2 = v13;
  }
  return 1;
}