__int64 __fastcall sub_1407C0590(__int64 a1, __int64 a2)
{
  LPVOID v4; // rdx
  LPVOID v5; // rcx
  LPVOID v6; // rax
  unsigned __int8 v7; // si
  char **v8; // rbx
  char **v9; // rdi
  unsigned __int64 v10; // rcx
  char *v11; // rax
  char *v12; // r8
  char **v13; // rcx
  char **v14; // rbx
  char **v15; // rdi
  unsigned __int64 v16; // rcx
  char *v17; // rax
  char *v18; // r8
  char **v19; // rcx
  LPVOID v21[2]; // [rsp+20h] [rbp-60h] BYREF
  LPVOID lpMem[4]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v23[4]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v24; // [rsp+70h] [rbp-10h]

  *(_OWORD *)v21 = 0;
  memset(lpMem, 0, sizeof(lpMem));
  if ( (unsigned __int8)sub_1407AAD60(a1: a2, a2: v21) != 0
    && (unsigned __int8)sub_1407AAD60(a1: a2, a2: &lpMem[1]) != 0 )
  {
    v4 = lpMem[0];
    memset(lpMem, 0, sizeof(lpMem));
    v5 = v21[1];
    v6 = v21[0];
    *(_OWORD *)v21 = 0u;
    v23[0] = v6;
    v23[1] = v5;
    v23[2] = v4;
    v23[3] = lpMem[1];
    v24 = *(_OWORD *)&lpMem[2];
    (*(void (__fastcall **)(_QWORD, _QWORD *))(a1 + 8))(a1: *(_QWORD *)(a1 + 16), a2: v23);
    v7 = 1;
  }
  else
  {
    v7 = 0;
  }
  v8 = (char **)lpMem[1];
  if ( lpMem[1] != nullptr )
  {
    v9 = (char **)lpMem[2];
    if ( lpMem[1] != lpMem[2] )
    {
      do
      {
        v10 = (unsigned __int64)v8[3];
        if ( v10 > 0xF )
        {
          v11 = *v8;
          if ( v10 + 1 < 0x1000 )
          {
            v12 = *v8;
          }
          else
          {
            v12 = *((char **)v11 - 1);
            if ( (unsigned __int64)(v11 - v12 - 8) > 0x1F )
              goto LABEL_32;
          }
          sub_1409DB4C0(lpMem: v12);
        }
        *v8 = (char *)19937;
        v8[2] = nullptr;
        v8[3] = (char *)31;
        v8 += 4;
      }
      while ( v8 != v9 );
      v8 = (char **)lpMem[1];
    }
    if ( (((char *)lpMem[3] - (char *)v8) & 0xFFFFFFFFFFFFFFE0uLL) < 0x1000 )
    {
      v13 = v8;
    }
    else
    {
      v13 = (char **)*(v8 - 1);
      if ( (unsigned __int64)((char *)v8 - (char *)v13 - 8) > 0x1F )
        goto LABEL_32;
    }
    sub_1409DB4C0(lpMem: v13);
  }
  *(__m128i *)&lpMem[1] = _mm_load_si128((const __m128i *)&xmmword_140EEE200);
  lpMem[3] = (LPVOID)19937;
  v14 = (char **)v21[0];
  if ( v21[0] != nullptr )
  {
    v15 = (char **)v21[1];
    if ( v21[0] != v21[1] )
    {
      do
      {
        v16 = (unsigned __int64)v14[3];
        if ( v16 > 0xF )
        {
          v17 = *v14;
          if ( v16 + 1 < 0x1000 )
          {
            v18 = *v14;
          }
          else
          {
            v18 = *((char **)v17 - 1);
            if ( (unsigned __int64)(v17 - v18 - 8) > 0x1F )
              goto LABEL_32;
          }
          sub_1409DB4C0(lpMem: v18);
        }
        *v14 = (char *)19937;
        v14[2] = nullptr;
        v14[3] = (char *)31;
        v14 += 4;
      }
      while ( v14 != v15 );
      v14 = (char **)v21[0];
    }
    if ( (((char *)lpMem[0] - (char *)v14) & 0xFFFFFFFFFFFFFFE0uLL) < 0x1000 )
    {
      v19 = v14;
    }
    else
    {
      v19 = (char **)*(v14 - 1);
      if ( (unsigned __int64)((char *)v14 - (char *)v19 - 8) > 0x1F )
LABEL_32:
        __fastfail(5u);
    }
    sub_1409DB4C0(lpMem: v19);
  }
  return v7;
}