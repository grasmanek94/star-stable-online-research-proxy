__int64 __fastcall sub_140470CB0(__int64 a1, _DWORD *a2)
{
  unsigned __int8 v4; // si
  _QWORD *v5; // rbx
  _QWORD *v6; // rdi
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  void *v9; // r8
  _BYTE *v10; // rcx
  void *v11; // rcx
  int v13[4]; // [rsp+20h] [rbp-39h] BYREF
  __int64 v14; // [rsp+30h] [rbp-29h] BYREF
  __int128 v15; // [rsp+38h] [rbp-21h]
  __int64 v16; // [rsp+48h] [rbp-11h]
  __int128 v17; // [rsp+50h] [rbp-9h]
  LPVOID lpMem[2]; // [rsp+60h] [rbp+7h] BYREF
  __int128 v19; // [rsp+70h] [rbp+17h]
  unsigned int v20; // [rsp+80h] [rbp+27h]

  *(_OWORD *)lpMem = 0;
  v19 = 0;
  v14 = 0xFFFFFFFFLL;
  v15 = 0;
  v16 = 0;
  v17 = 0xFu;
  LOBYTE(v15) = 0;
  BYTE8(v19) = 0;
  v20 = -1;
  v13[0] = -1;
  if ( sub_1401D0820(a1: a2, a2: v13) != 0
    && (v20 = v13[0], (unsigned __int8)sub_1407F7890(a1: a2, a2: &v14) != 0)
    && (unsigned __int8)sub_14046D370(a1: a2, a2: lpMem) != 0 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, __int64 *))(a1 + 8))(a1: a1 + 16, a2: v20, a3: &v14);
    v4 = 1;
  }
  else
  {
    v4 = 0;
  }
  if ( BYTE8(v19) != 0 )
  {
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
                  goto LABEL_32;
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
      if ( (((_QWORD)v19 - (_QWORD)v5) & 0xFFFFFFFFFFFFFFC0uLL) < 0x1000 )
      {
        v10 = v5;
      }
      else
      {
        v10 = (_BYTE *)*(v5 - 1);
        if ( (unsigned __int64)((char *)v5 - v10 - 8) > 0x1F )
          goto LABEL_32;
      }
      sub_1409DB4C0(lpMem: v10);
    }
    *(__m128i *)lpMem = _mm_load_si128((const __m128i *)&xmmword_140EEE200);
    *(_QWORD *)&v19 = 19937;
    BYTE8(v19) = 0;
  }
  if ( (unsigned __int64)v17 > 0xF )
  {
    v11 = (void *)v15;
    if ( (unsigned __int64)(v17 + 1) < 0x1000 )
    {
LABEL_30:
      sub_1409DB4C0(lpMem: v11);
      return v4;
    }
    if ( (unsigned __int64)(v15 - *(_QWORD *)(v15 - 8) - 8) <= 0x1F )
    {
      v11 = *(void **)(v15 - 8);
      goto LABEL_30;
    }
LABEL_32:
    __fastfail(5u);
  }
  return v4;
}