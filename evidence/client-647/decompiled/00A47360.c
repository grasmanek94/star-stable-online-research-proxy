bool __fastcall sub_140A47360(
        __int64 a1,
        int *a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int a5,
        unsigned int *a6)
{
  unsigned int *v7; // r14
  unsigned int v9; // ecx
  int v10; // r10d
  int v11; // eax
  unsigned int *v12; // rsi
  unsigned int *v13; // r8
  int v14; // r15d
  int v15; // edi
  unsigned int v16; // r10d
  unsigned int v17; // r11d
  unsigned int v18; // ebx
  unsigned int v19; // r9d
  unsigned int v20; // ecx
  int v21; // r9d
  unsigned int v22; // eax
  unsigned int v23; // ebp
  __int64 v24; // rcx
  int i; // eax
  int v26; // r8d
  int v28; // [rsp+0h] [rbp-58h]
  int v30; // [rsp+70h] [rbp+18h]

  v7 = a4;
  if ( a3 < 8 )
    return false;
  if ( (a3 & 7) != 0 )
    return false;
  v9 = a5;
  if ( a5 < (unsigned __int64)a3 - 8 )
    return false;
  v10 = *a2;
  v11 = a2[1];
  v12 = (unsigned int *)(a2 + 2);
  v13 = a4;
  v28 = *a2;
  v14 = 0;
  v30 = v11;
  if ( a3 >> 3 != 1 )
  {
    while ( 1 )
    {
      v15 = *(_DWORD *)(a1 + 44);
      v16 = *v12;
      v17 = v12[1];
      v18 = -1640531527 * v15;
      if ( v15 != 0 )
      {
        do
        {
          v19 = v18;
          v20 = v18 + *(_DWORD *)(a1 + 4LL * ((v18 >> 11) & 3) + 8);
          v18 += 1640531527;
          v17 -= v20 ^ (v16 + ((16 * v16) ^ (v16 >> 5)));
          v16 -= (*(_DWORD *)(a1 + 4LL * (v18 & 3) + 8) + v19 + 1640531527) ^ (v17 + ((16 * v17) ^ (v17 >> 5)));
          --v15;
        }
        while ( v15 != 0 );
        v13 = a4;
      }
      *v7 = v16;
      v7[1] = v17;
      if ( v14 == 0 && BYTE2(v11) != (BYTE1(v11) & (unsigned __int8)(*(_BYTE *)v13 & *(_BYTE *)(a1 + 8))) )
        return false;
      v12 += 2;
      v7 += 2;
      if ( ++v14 >= (a3 >> 3) - 1 )
      {
        v9 = a5;
        v10 = v28;
        break;
      }
    }
  }
  v21 = (unsigned __int8)v11;
  v22 = (unsigned __int8)v11 + 8;
  if ( v22 >= a3 )
    return false;
  v23 = a3 - v22;
  *a6 = v23;
  if ( v23 > v9 )
    return false;
  v24 = 0;
  for ( i = -2128831035; (unsigned int)v24 < v23; v13 = a4 )
  {
    v26 = *((unsigned __int8 *)v13 + v24);
    v24 = (unsigned int)(v24 + 1);
    i = 16777619 * (i ^ v26);
  }
  return 16777619 * (HIBYTE(v30) ^ (16777619 * (BYTE2(v30) ^ (16777619 * (BYTE1(v30) ^ (16777619 * (i ^ v21))))))) == v10;
}