__int64 __fastcall sub_140471580(__int64 a1, _DWORD *a2)
{
  unsigned __int8 v4; // si
  _QWORD *v5; // rbx
  _QWORD *v6; // rdi
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  void *v9; // r8
  _BYTE *v10; // rcx
  _QWORD *v11; // rbx
  _QWORD *v12; // rdi
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  void *v15; // r8
  _BYTE *v16; // rcx
  _DWORD v18[4]; // [rsp+20h] [rbp-29h] BYREF
  int v19; // [rsp+30h] [rbp-19h] BYREF
  _DWORD v20[5]; // [rsp+34h] [rbp-15h] BYREF
  _QWORD *v21; // [rsp+48h] [rbp-1h] BYREF
  __int128 v22; // [rsp+50h] [rbp+7h]
  LPVOID lpMem[2]; // [rsp+60h] [rbp+17h] BYREF
  __int64 v24; // [rsp+70h] [rbp+27h]
  unsigned int v25; // [rsp+78h] [rbp+2Fh]

  v19 = 0;
  memset(v20, 0, sizeof(v20));
  v21 = nullptr;
  v22 = 0;
  *(_OWORD *)lpMem = 0;
  v24 = 0;
  v25 = -1;
  v18[0] = -1;
  if ( sub_1401D0820(a1: a2, a2: v18) != 0
    && (v25 = v18[0], v18[0] = v19, sub_1401D0820(a1: a2, a2: v18) != 0)
    && (v19 = v18[0],
        (*(unsigned __int8 (__fastcall **)(_DWORD *, _DWORD *, __int64))(*(_QWORD *)a2 + 16LL))(a1: a2, a2: v20, a3: 16) != 0)
    && (unsigned __int8)sub_14046D530(a1: a2, a2: &v21) != 0
    && (unsigned __int8)sub_14046DD60(a1: a2, a2: lpMem) != 0 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1: a1 + 16, a2: v25, a3: &v19);
    v4 = 1;
  }
  else
  {
    v4 = 0;
  }
  v5 = lpMem[0];
  if ( lpMem[0] != nullptr )
  {
    v6 = lpMem[1];
    if ( lpMem[0] != lpMem[1] )
    {
      do
      {
        if ( *((char *)v5 + 56) != -1 && (unsigned __int64)*((char *)v5 + 56) >= 2 )
        {
          v7 = v5[6];
          if ( v7 > 0xF )
          {
            v8 = v5[3];
            if ( v7 + 1 < 0x1000 )
            {
              v9 = (void *)v5[3];
            }
            else
            {
              v9 = *(void **)(v8 - 8);
              if ( (unsigned __int64)(v8 - (_QWORD)v9 - 8) > 0x1F )
                goto LABEL_38;
            }
            sub_1409DB4C0(lpMem: v9);
          }
          *((_BYTE *)v5 + 24) = 0;
          v5[3] = 19937;
          v5[5] = 0;
          v5[6] = 31;
        }
        *((_BYTE *)v5 + 56) = -1;
        v5 += 8;
      }
      while ( v5 != v6 );
      v5 = lpMem[0];
    }
    if ( ((v24 - (_QWORD)v5) & 0xFFFFFFFFFFFFFFC0uLL) < 0x1000 )
    {
      v10 = v5;
    }
    else
    {
      v10 = (_BYTE *)*(v5 - 1);
      if ( (unsigned __int64)((char *)v5 - v10 - 8) > 0x1F )
        goto LABEL_38;
    }
    sub_1409DB4C0(lpMem: v10);
  }
  *(__m128i *)lpMem = _mm_load_si128((const __m128i *)&xmmword_140EEE200);
  v24 = 19937;
  v11 = v21;
  if ( v21 != nullptr )
  {
    v12 = (_QWORD *)v22;
    if ( v21 != (_QWORD *)v22 )
    {
      do
      {
        v13 = v11[4];
        if ( v13 > 0xF )
        {
          v14 = v11[1];
          if ( v13 + 1 < 0x1000 )
          {
            v15 = (void *)v11[1];
          }
          else
          {
            v15 = *(void **)(v14 - 8);
            if ( (unsigned __int64)(v14 - (_QWORD)v15 - 8) > 0x1F )
              goto LABEL_38;
          }
          sub_1409DB4C0(lpMem: v15);
        }
        *((_BYTE *)v11 + 8) = 0;
        v11[1] = 19937;
        v11[3] = 0;
        v11[4] = 31;
        v11 += 6;
      }
      while ( v11 != v12 );
      v11 = v21;
    }
    if ( (unsigned __int64)(48 * ((*((_QWORD *)&v22 + 1) - (_QWORD)v11) / 48LL)) < 0x1000 )
    {
      v16 = v11;
    }
    else
    {
      v16 = (_BYTE *)*(v11 - 1);
      if ( (unsigned __int64)((char *)v11 - v16 - 8) > 0x1F )
LABEL_38:
        __fastfail(5u);
    }
    sub_1409DB4C0(lpMem: v16);
  }
  return v4;
}