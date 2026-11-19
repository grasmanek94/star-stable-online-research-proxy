char __fastcall sub_1402D2B10(_DWORD *a1, _WORD *a2)
{
  unsigned __int64 v4; // r11
  __int16 v5; // r8
  char v6; // dl
  char v7; // r10
  unsigned __int16 v8; // cx
  unsigned __int16 v9; // ax
  unsigned __int64 v10; // rax
  unsigned __int8 v11; // cl
  char *v12; // rbx
  int v13; // esi
  __int16 v14; // r10
  unsigned __int8 i; // r9
  __int16 v17; // [rsp+20h] [rbp-28h] BYREF
  char v18; // [rsp+22h] [rbp-26h]
  char v19; // [rsp+23h] [rbp-25h] BYREF
  __int16 v20; // [rsp+50h] [rbp+8h]
  char v21; // [rsp+52h] [rbp+Ah]

  v17 = 0;
  v18 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1) == 0 )
  {
    v4 = (unsigned __int16)*a2;
    v5 = 0;
    v6 = 0;
    v20 = 0;
    v21 = 0;
    v7 = 0;
    v8 = v4;
    if ( (_WORD)v4 != 0 )
    {
      do
      {
        v9 = v8;
        ++v6;
        v8 >>= 1;
      }
      while ( v9 >= 2u );
    }
    v10 = 0;
    v11 = v6 / 7 + (v6 != 7 * (v6 / 7));
    if ( v11 > 3u )
    {
      if ( (unsigned __int8)sub_140059CA0(a1: off_140F693F8) != 0 )
        __debugbreak();
      sub_1409E29B8(a1: 999);
      __debugbreak();
    }
    if ( v11 != 0 )
    {
      do
      {
        if ( v10 >= 3 )
          __fastfail(5u);
        *((_BYTE *)&v20 + v10) = ((127LL << (7 * (unsigned __int8)v10)) & v4) >> (7 * (unsigned __int8)v10);
        if ( v10 != 0 )
          *((_BYTE *)&v20 + v10 - 1) |= 0x80u;
        ++v10;
      }
      while ( v10 < v11 );
      v7 = v21;
      v5 = v20;
    }
    v17 = v5;
    v18 = v7;
  }
  v12 = (char *)&v17;
  v13 = 0;
  do
  {
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, char *, __int64))(*(_QWORD *)a1 + 16LL))(a1, a2: v12, a3: 1) == 0 )
      return 0;
    ++v13;
    if ( *v12 >= 0 )
      break;
    ++v12;
  }
  while ( v12 != &v19 );
  a1[6] += 2 - v13;
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1) != 0 )
  {
    v14 = 0;
    for ( i = 0; i < 3u; ++i )
    {
      v14 |= (unsigned __int64)(*((_BYTE *)&v17 + i) & 0x7F) << (7 * i);
      if ( *((char *)&v17 + i) >= 0 )
        break;
    }
    *a2 = v14;
  }
  return 1;
}