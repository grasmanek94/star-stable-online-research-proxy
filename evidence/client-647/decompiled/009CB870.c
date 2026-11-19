__int64 __fastcall sub_1409CB870(int a1, char *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbp
  char *v4; // rsi
  unsigned int v6; // ecx
  __int64 v7; // rax
  int v8; // r14d
  int v9; // r15d
  int v10; // r12d
  unsigned __int64 v11; // rdx
  int v12; // r13d
  unsigned __int64 v13; // rdx
  unsigned __int64 i; // rbp
  unsigned int v15; // ecx
  unsigned int v16; // r15d
  unsigned int v17; // r14d
  unsigned int v18; // r12d
  unsigned int v19; // r13d
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  int v35; // ecx
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  unsigned int v39; // edx
  unsigned int v40; // edx
  unsigned int v41; // edx
  unsigned int v42; // edx
  unsigned int v43; // edx
  unsigned int v44; // edx
  __int64 v45; // rcx
  char v46; // al
  char v47; // dl
  unsigned __int64 v48; // [rsp+50h] [rbp+18h]

  v3 = a3;
  v4 = a2;
  if ( a2 == nullptr )
    return 0;
  v6 = ~a1;
  if ( a3 >= 0x17 )
  {
    do
    {
      if ( ((unsigned __int8)v4 & 3) == 0 )
        break;
      v7 = (unsigned __int8)(v6 ^ *v4++);
      v6 = dword_141069060[v7] ^ (v6 >> 8);
      --v3;
    }
    while ( v3 != 0 );
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = v3 / 0x14;
    v12 = 0;
    v3 %= 0x14u;
    v48 = v3;
    v13 = v11 - 1;
    if ( v13 != 0 )
    {
      for ( i = v13; i != 0; --i )
      {
        v15 = *(_DWORD *)v4 ^ v6;
        v16 = *((_DWORD *)v4 + 2) ^ v9;
        v17 = *((_DWORD *)v4 + 1) ^ v8;
        v18 = *((_DWORD *)v4 + 3) ^ v10;
        v19 = *((_DWORD *)v4 + 4) ^ v12;
        v4 += 20;
        v6 = dword_141069860[(unsigned __int8)v15]
           ^ dword_141069C60[BYTE1(v15)]
           ^ dword_14106A460[(unsigned __int64)v15 >> 24]
           ^ dword_14106A060[BYTE2(v15)];
        v8 = dword_141069860[(unsigned __int8)v17]
           ^ dword_141069C60[BYTE1(v17)]
           ^ dword_14106A460[(unsigned __int64)v17 >> 24]
           ^ dword_14106A060[BYTE2(v17)];
        v9 = dword_141069860[(unsigned __int8)v16]
           ^ dword_141069C60[BYTE1(v16)]
           ^ dword_14106A460[(unsigned __int64)v16 >> 24]
           ^ dword_14106A060[BYTE2(v16)];
        v10 = dword_141069860[(unsigned __int8)v18]
            ^ dword_141069C60[BYTE1(v18)]
            ^ dword_14106A460[(unsigned __int64)v18 >> 24]
            ^ dword_14106A060[BYTE2(v18)];
        v12 = dword_141069860[(unsigned __int8)v19]
            ^ dword_141069C60[BYTE1(v19)]
            ^ dword_14106A460[(unsigned __int64)v19 >> 24]
            ^ dword_14106A060[BYTE2(v19)];
      }
      v3 = v48;
    }
    v20 = dword_141069060[(unsigned __int8)(*v4 ^ v6)] ^ ((*(_DWORD *)v4 ^ v6) >> 8);
    v21 = dword_141069060[(unsigned __int8)v20] ^ (v20 >> 8);
    v22 = dword_141069060[(unsigned __int8)v21] ^ (v21 >> 8);
    v23 = v8 ^ *((_DWORD *)v4 + 1) ^ dword_141069060[(unsigned __int8)v22] ^ (v22 >> 8);
    v24 = dword_141069060[(unsigned __int8)v23] ^ (v23 >> 8);
    v25 = dword_141069060[(unsigned __int8)v24] ^ (v24 >> 8);
    v26 = dword_141069060[(unsigned __int8)v25] ^ (v25 >> 8);
    v27 = v9 ^ *((_DWORD *)v4 + 2) ^ dword_141069060[(unsigned __int8)v26] ^ (v26 >> 8);
    v28 = dword_141069060[(unsigned __int8)v27] ^ (v27 >> 8);
    v29 = dword_141069060[(unsigned __int8)v28] ^ (v28 >> 8);
    v30 = dword_141069060[(unsigned __int8)v29] ^ (v29 >> 8);
    v31 = v10 ^ *((_DWORD *)v4 + 3) ^ dword_141069060[(unsigned __int8)v30] ^ (v30 >> 8);
    v32 = dword_141069060[(unsigned __int8)v31] ^ (v31 >> 8);
    v33 = dword_141069060[(unsigned __int8)v32] ^ (v32 >> 8);
    v34 = dword_141069060[(unsigned __int8)v33] ^ (v33 >> 8);
    v35 = *((_DWORD *)v4 + 4) ^ dword_141069060[(unsigned __int8)v34] ^ (v34 >> 8);
    v4 += 20;
    v36 = dword_141069060[(unsigned __int8)(v12 ^ v35)] ^ ((v12 ^ (unsigned int)v35) >> 8);
    v37 = dword_141069060[(unsigned __int8)v36] ^ (v36 >> 8);
    v38 = dword_141069060[(unsigned __int8)v37] ^ (v37 >> 8);
    v6 = dword_141069060[(unsigned __int8)v38] ^ (v38 >> 8);
  }
  for ( ; v3 >= 8; v6 = dword_141069060[(unsigned __int8)(v45 ^ v46)] ^ ((unsigned int)v45 >> 8) )
  {
    v3 -= 8LL;
    v39 = dword_141069060[(unsigned __int8)(v6 ^ *v4)] ^ (v6 >> 8);
    v40 = dword_141069060[(unsigned __int8)(v39 ^ v4[1])] ^ (v39 >> 8);
    v41 = dword_141069060[(unsigned __int8)(v40 ^ v4[2])] ^ (v40 >> 8);
    v42 = dword_141069060[(unsigned __int8)(v41 ^ v4[3])] ^ (v41 >> 8);
    v43 = dword_141069060[(unsigned __int8)(v42 ^ v4[4])] ^ (v42 >> 8);
    v44 = dword_141069060[(unsigned __int8)(v43 ^ v4[5])] ^ (v43 >> 8);
    v45 = (unsigned __int8)(v44 ^ v4[6]);
    v46 = v4[7];
    v4 += 8;
    LODWORD(v45) = dword_141069060[v45] ^ (v44 >> 8);
  }
  for ( ; v3 != 0; --v3 )
  {
    v47 = *v4++;
    v6 = dword_141069060[(unsigned __int8)(v6 ^ v47)] ^ (v6 >> 8);
  }
  return ~v6;
}