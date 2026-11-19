__int64 __fastcall sub_140A47B80(__int64 a1, _BYTE *a2, unsigned int a3, _DWORD *a4, unsigned int a5, _DWORD *a6)
{
  unsigned int v11; // ecx
  unsigned __int8 v12; // r12
  __int64 v13; // r14
  unsigned int *v14; // rbx
  unsigned __int8 v15; // r13
  __int64 v16; // r8
  int v17; // eax
  int v18; // edx
  int v19; // edx
  int v20; // edi
  unsigned int v21; // r11d
  unsigned int v22; // r10d
  unsigned int i; // eax
  unsigned int v24; // r9d
  unsigned int v25; // edx
  __int64 v26; // [rsp+20h] [rbp-38h]
  int v27; // [rsp+80h] [rbp+28h]

  v26 = (a3 + 7) & 0xFFFFFFF8;
  if ( a5 < (unsigned __int64)(v26 + 8) )
    return 1;
  v11 = (a3 + 7) >> 3;
  v12 = 8 * v11 - a3;
  v13 = v11;
  LOBYTE(v27) = v12;
  v14 = a4 + 2;
  LOBYTE(v11) = (_BYTE)a2 + _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 40), (unsigned int)a2);
  v15 = v11 & *a2 & *(_BYTE *)(a1 + 8);
  BYTE1(v27) = v11;
  *(_QWORD *)&a4[2 * v13] = 0;
  HIWORD(v27) = v15;
  sub_140E82100(a1: a4 + 2, a2, a3);
  v16 = 0;
  v17 = -2128831035;
  if ( a2 == (_BYTE *)a4 )
  {
    if ( a3 != 0 )
    {
      do
      {
        v18 = (unsigned __int8)a2[v16 + 8];
        v16 = (unsigned int)(v16 + 1);
        v17 = 16777619 * (v17 ^ v18);
      }
      while ( (unsigned int)v16 < a3 );
    }
  }
  else if ( a3 != 0 )
  {
    do
    {
      v19 = (unsigned __int8)a2[v16];
      v16 = (unsigned int)(v16 + 1);
      v17 = 16777619 * (v17 ^ v19);
    }
    while ( (unsigned int)v16 < a3 );
  }
  *a4 = 637696617 * (v15 ^ (16777619 * (BYTE1(v27) ^ (16777619 * (v17 ^ v12)))));
  for ( a4[1] = v27; (_DWORD)v13 != 0; LODWORD(v13) = v13 - 1 )
  {
    v20 = *(_DWORD *)(a1 + 44);
    v21 = 0;
    v22 = *v14;
    for ( i = v14[1]; v20 != 0; --v20 )
    {
      v24 = v21;
      v25 = v21 + *(_DWORD *)(a1 + 4LL * (v21 & 3) + 8);
      v21 -= 1640531527;
      v22 += v25 ^ (i + ((16 * i) ^ (i >> 5)));
      i += (*(_DWORD *)(a1 + 4LL * ((v21 >> 11) & 3) + 8) + v24 - 1640531527) ^ (v22 + ((16 * v22) ^ (v22 >> 5)));
    }
    *v14 = v22;
    v14[1] = i;
    v14 += 2;
  }
  *a6 = v26 + 8;
  return 0;
}