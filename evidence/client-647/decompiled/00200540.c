char __fastcall sub_140200540(_DWORD *a1, int *a2)
{
  int v4; // eax
  int v5; // r10d
  int v6; // ecx
  char v7; // r8
  int v8; // r11d
  char v9; // bl
  unsigned int v10; // edx
  unsigned int v11; // eax
  unsigned __int64 v12; // rax
  unsigned __int8 v13; // cl
  char *v14; // rbx
  int v15; // edi
  unsigned int v16; // eax
  unsigned __int8 i; // r9
  int v19; // [rsp+28h] [rbp-30h]
  char v20; // [rsp+2Ch] [rbp-2Ch]
  int v21; // [rsp+30h] [rbp-28h] BYREF
  char v22; // [rsp+34h] [rbp-24h]
  char v23; // [rsp+35h] [rbp-23h] BYREF

  v21 = 0;
  v22 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1) == 0 )
  {
    v4 = *a2;
    v5 = 0;
    v6 = *a2;
    v19 = 0;
    v6 >>= 31;
    v4 *= 2;
    v7 = 0;
    v8 = v4 ^ v6;
    v9 = 0;
    v20 = 0;
    v10 = v4 ^ v6;
    if ( v6 != v4 )
    {
      do
      {
        v11 = v10;
        ++v7;
        v10 >>= 1;
      }
      while ( v11 >= 2 );
    }
    v12 = 0;
    v13 = v7 / 7 + (v7 != 7 * (v7 / 7));
    if ( v13 > 5u )
    {
      if ( (unsigned __int8)sub_140059CA0(a1: off_140F50E58) != 0 )
        __debugbreak();
      sub_1409E29B8(a1: 999);
      __debugbreak();
    }
    if ( v13 != 0 )
    {
      do
      {
        if ( v12 >= 5 )
          __fastfail(5u);
        *((_BYTE *)&v19 + v12) = ((127LL << (7 * (unsigned __int8)v12)) & (unsigned __int64)v8) >> (7
                                                                                                  * (unsigned __int8)v12);
        if ( v12 != 0 )
          *((_BYTE *)&v19 + v12 - 1) |= 0x80u;
        ++v12;
      }
      while ( v12 < v13 );
      v9 = v20;
      v5 = v19;
    }
    v21 = v5;
    v22 = v9;
  }
  v14 = (char *)&v21;
  v15 = 0;
  do
  {
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, char *, __int64))(*(_QWORD *)a1 + 16LL))(a1, a2: v14, a3: 1) == 0 )
      return 0;
    ++v15;
    if ( *v14 >= 0 )
      break;
    ++v14;
  }
  while ( v14 != &v23 );
  a1[6] += 4 - v15;
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1) != 0 )
  {
    v16 = 0;
    for ( i = 0; i < 5u; ++i )
    {
      v16 |= (unsigned __int64)(*((_BYTE *)&v21 + i) & 0x7F) << (7 * i);
      if ( *((char *)&v21 + i) >= 0 )
        break;
    }
    *a2 = -(v16 & 1) ^ (v16 >> 1);
  }
  return 1;
}