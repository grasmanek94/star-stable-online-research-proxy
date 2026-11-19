__int64 __fastcall sub_140470EE0(__int64 a1, _DWORD *a2)
{
  unsigned __int8 v4; // si
  _QWORD *v5; // rbx
  _QWORD *v6; // rdi
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  void *v9; // r8
  _BYTE *v10; // rcx
  LPVOID lpMem[2]; // [rsp+20h] [rbp-30h] BYREF
  __int128 v13; // [rsp+30h] [rbp-20h]
  __int64 v14; // [rsp+40h] [rbp-10h]
  unsigned int v15; // [rsp+48h] [rbp-8h]
  int v16; // [rsp+78h] [rbp+28h] BYREF

  *(_OWORD *)lpMem = 0;
  v13 = 0;
  v14 = 0;
  LODWORD(lpMem[0]) = -1;
  v15 = -1;
  v16 = -1;
  if ( sub_1401D0820(a1: a2, a2: &v16) != 0
    && (v15 = v16, v16 = (int)lpMem[0], sub_1401D0820(a1: a2, a2: &v16) != 0)
    && (LODWORD(lpMem[0]) = v16, (unsigned __int8)sub_14046D370(a1: a2, a2: &lpMem[1]) != 0) )
  {
    (*(void (__fastcall **)(__int64, _QWORD, LPVOID *))(a1 + 8))(a1: a1 + 16, a2: v15, a3: lpMem);
    v4 = 1;
  }
  else
  {
    v4 = 0;
  }
  if ( (_BYTE)v14 != 0 )
  {
    v5 = lpMem[1];
    if ( lpMem[1] != nullptr )
    {
      v6 = (_QWORD *)v13;
      if ( lpMem[1] != (LPVOID)v13 )
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
                  goto LABEL_22;
              }
              sub_1409DB4C0(lpMem: v9);
            }
            v5[3] = 19937;
            v5[5] = 0;
            v5[6] = 31;
          }
          *((_BYTE *)v5 + 56) = -1;
          v5 += 8;
        }
        while ( v5 != v6 );
        v5 = lpMem[1];
      }
      if ( ((*((_QWORD *)&v13 + 1) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFC0uLL) < 0x1000 )
      {
        v10 = v5;
      }
      else
      {
        v10 = (_BYTE *)*(v5 - 1);
        if ( (unsigned __int64)((char *)v5 - v10 - 8) > 0x1F )
LABEL_22:
          __fastfail(5u);
      }
      sub_1409DB4C0(lpMem: v10);
    }
  }
  return v4;
}