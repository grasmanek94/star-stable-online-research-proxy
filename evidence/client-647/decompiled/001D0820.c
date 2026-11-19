char __fastcall sub_1401D0820(_DWORD *a1, _DWORD *a2)
{
  unsigned __int64 v4; // r11
  int v5; // r8d
  char v6; // dl
  char v7; // r10
  unsigned int v8; // ecx
  unsigned int v9; // eax
  unsigned __int64 v10; // rax
  unsigned __int8 v11; // cl
  char *v12; // rbx
  int v13; // edi
  int v14; // eax
  unsigned __int8 i; // r9
  int v17; // [rsp+28h] [rbp-30h]
  char v18; // [rsp+2Ch] [rbp-2Ch]
  int v19; // [rsp+30h] [rbp-28h] BYREF
  char v20; // [rsp+34h] [rbp-24h]
  char v21; // [rsp+35h] [rbp-23h] BYREF

  v19 = 0;
  v20 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1) == 0 )
  {
    v4 = (unsigned int)*a2;
    v5 = 0;
    v6 = 0;
    v17 = 0;
    v18 = 0;
    v7 = 0;
    v8 = v4;
    if ( (_DWORD)v4 != 0 )
    {
      do
      {
        v9 = v8;
        ++v6;
        v8 >>= 1;
      }
      while ( v9 >= 2 );
    }
    v10 = 0;
    v11 = v6 / 7 + (v6 != 7 * (v6 / 7));
    if ( v11 > 5u )
    {
      if ( (unsigned __int8)sub_140059CA0(a1: off_140F4F128) != 0 )
        __debugbreak();
      sub_1409E29B8(a1: 999);
      __debugbreak();
    }
    if ( v11 != 0 )
    {
      do
      {
        if ( v10 >= 5 )
          __fastfail(5u);
        *((_BYTE *)&v17 + v10) = ((127LL << (7 * (unsigned __int8)v10)) & v4) >> (7 * (unsigned __int8)v10);
        if ( v10 != 0 )
          *((_BYTE *)&v17 + v10 - 1) |= 0x80u;
        ++v10;
      }
      while ( v10 < v11 );
      v7 = v18;
      v5 = v17;
    }
    v19 = v5;
    v20 = v7;
  }
  v12 = (char *)&v19;
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
  while ( v12 != &v21 );
  a1[6] += 4 - v13;
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1) != 0 )
  {
    v14 = 0;
    for ( i = 0; i < 5u; ++i )
    {
      v14 |= (unsigned __int64)(*((_BYTE *)&v19 + i) & 0x7F) << (7 * i);
      if ( *((char *)&v19 + i) >= 0 )
        break;
    }
    *a2 = v14;
  }
  return 1;
}