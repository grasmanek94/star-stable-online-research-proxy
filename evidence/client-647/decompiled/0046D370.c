char __fastcall sub_14046D370(__int64 a1, __int64 a2)
{
  char result; // al
  char *v5; // rbx
  char *i; // rbp
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  void *v9; // r8
  char *v10; // rax
  char *v11; // rcx
  char v12; // [rsp+20h] [rbp-38h] BYREF
  char v13; // [rsp+60h] [rbp+8h] BYREF

  v13 = *(_BYTE *)(a2 + 24);
  result = (*(__int64 (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)a1 + 16LL))(a1, a2: &v13, a3: 1);
  if ( result == 0 )
    return result;
  if ( v13 != 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1) != 0 )
    {
      if ( *(_BYTE *)(a2 + 24) != 0 )
      {
        if ( (char *)a2 != &v12 )
        {
          v5 = *(char **)a2;
          if ( *(_QWORD *)a2 != 0 )
          {
            for ( i = *(char **)(a2 + 8); v5 != i; v5 += 64 )
            {
              if ( v5[56] != -1 && (unsigned __int64)v5[56] >= 2 )
              {
                v7 = *((_QWORD *)v5 + 6);
                if ( v7 > 0xF )
                {
                  v8 = *((_QWORD *)v5 + 3);
                  if ( v7 + 1 < 0x1000 )
                  {
                    v9 = *((void **)v5 + 3);
                  }
                  else
                  {
                    v9 = *(void **)(v8 - 8);
                    if ( (unsigned __int64)(v8 - (_QWORD)v9 - 8) > 0x1F )
                      goto LABEL_29;
                  }
                  sub_1409DB4C0(lpMem: v9);
                }
                *((_QWORD *)v5 + 3) = 19937;
                *((_QWORD *)v5 + 5) = 0;
                *((_QWORD *)v5 + 6) = 31;
              }
              v5[56] = -1;
            }
            v10 = *(char **)a2;
            if ( ((*(_QWORD *)(a2 + 16) - *(_QWORD *)a2) & 0xFFFFFFFFFFFFFFC0uLL) < 0x1000 )
            {
              v11 = *(char **)a2;
            }
            else
            {
              v11 = *((char **)v10 - 1);
              if ( (unsigned __int64)(v10 - v11 - 8) > 0x1F )
                goto LABEL_29;
            }
            sub_1409DB4C0(lpMem: v11);
          }
          *(_QWORD *)a2 = 0;
          *(_QWORD *)(a2 + 8) = 0;
          *(_QWORD *)(a2 + 16) = 0;
        }
      }
      else
      {
        *(_QWORD *)a2 = 0;
        *(_QWORD *)(a2 + 8) = 0;
        *(_QWORD *)(a2 + 16) = 0;
        *(_BYTE *)(a2 + 24) = 1;
      }
    }
    if ( *(_BYTE *)(a2 + 24) != 0 )
      return sub_14046DD60(a1, a2);
LABEL_29:
    __fastfail(5u);
  }
  if ( *(_BYTE *)(a2 + 24) != 0 )
  {
    sub_140476000(a1: a2);
    *(_QWORD *)a2 = 19937;
    *(_QWORD *)(a2 + 8) = 19937;
    *(_QWORD *)(a2 + 16) = 19937;
    *(_BYTE *)(a2 + 24) = 0;
  }
  return 1;
}