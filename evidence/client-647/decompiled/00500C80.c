char __fastcall sub_140500C80(__int64 a1, _QWORD *a2)
{
  __int64 *v4; // rdi
  _DWORD *v5; // rsi
  unsigned int v6; // ebx
  unsigned __int64 v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rbp
  __int64 v10; // rbx
  _DWORD *v11; // rdi
  __int64 v12; // rbx
  char *v13; // rax
  char *v14; // rcx
  unsigned int *v15; // rbx
  _DWORD *v16; // rcx
  char v18; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v19; // [rsp+90h] [rbp+8h] BYREF

  if ( sub_1404FE100(a1: (_DWORD *)*a2, a2: *(__int64 **)(a1 + 32)) != 0 )
  {
    v4 = *(__int64 **)(a1 + 24);
    v5 = (_DWORD *)*a2;
    if ( (unsigned __int64)(v4[1] - *v4) >= 0xFFFFFFFF0LL && (unsigned __int8)sub_140059CA0(a1: off_140FB8FB8) != 0 )
      __debugbreak();
    v19 = (v4[1] - *v4) >> 4;
    if ( sub_1401D0820(a1: v5, a2: &v19) != 0 )
    {
      v6 = v19;
      if ( v19 <= 0x3E80 )
      {
        v7 = v19;
        sub_1405001C0(a1: v4, a2: v19, a3: &v19);
        v8 = *v4;
        v9 = 0;
        if ( v6 != 0 )
        {
          do
          {
            v10 = 16 * v9;
            v19 = *(_DWORD *)(v8 + 16 * v9);
            if ( sub_1401D0820(a1: v5, a2: &v19) == 0 )
              return 0;
            *(_DWORD *)(v8 + 16 * v9) = v19;
            v19 = *(_DWORD *)(v8 + v10 + 4);
            if ( sub_1401D0820(a1: v5, a2: &v19) == 0 )
              return 0;
            *(_DWORD *)(v8 + v10 + 4) = v19;
            v19 = *(_DWORD *)(v8 + v10 + 8);
            if ( sub_1401D0820(a1: v5, a2: &v19) == 0 )
              return 0;
            *(_DWORD *)(v8 + v10 + 8) = v19;
            if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)v5 + 16LL))(
                   a1: v5,
                   a2: v10 + v8 + 12,
                   a3: 1) == 0
              || (*(unsigned __int8 (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)v5 + 16LL))(
                   a1: v5,
                   a2: v10 + v8 + 13,
                   a3: 1) == 0 )
            {
              return 0;
            }
          }
          while ( ++v9 < v7 );
        }
        v11 = (_DWORD *)*a2;
        v12 = *(_QWORD *)(a1 + 16);
        LOBYTE(v19) = *(_BYTE *)(v12 + 24);
        if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, unsigned int *, __int64))(*(_QWORD *)v11 + 16LL))(
               a1: v11,
               a2: &v19,
               a3: 1) != 0 )
        {
          if ( (_BYTE)v19 == 0 )
          {
            if ( *(_BYTE *)(v12 + 24) != 0 )
            {
              sub_14002AE40(a1: v12);
              *(_BYTE *)(v12 + 24) = 0;
            }
LABEL_32:
            v15 = *(unsigned int **)(a1 + 8);
            v16 = (_DWORD *)*a2;
            v19 = *v15;
            if ( sub_1401D0820(a1: v16, a2: &v19) != 0 )
            {
              *v15 = v19;
              if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*a2 + 16LL))(
                     a1: *a2,
                     a2: *(_QWORD *)a1,
                     a3: 4) != 0 )
                return 1;
            }
            return 0;
          }
          if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 8LL))(a1: v11) != 0 )
          {
            if ( *(_BYTE *)(v12 + 24) != 0 )
            {
              if ( (char *)v12 != &v18 )
              {
                v13 = *(char **)v12;
                if ( *(_QWORD *)v12 != 0 )
                {
                  if ( ((*(_QWORD *)(v12 + 16) - (_QWORD)v13) & 0xFFFFFFFFFFFFFFF0uLL) < 0x1000 )
                  {
                    v14 = *(char **)v12;
                  }
                  else
                  {
                    v14 = *((char **)v13 - 1);
                    if ( (unsigned __int64)(v13 - v14 - 8) > 0x1F )
                      goto LABEL_30;
                  }
                  sub_1409DB4C0(lpMem: v14);
                }
                *(_QWORD *)v12 = 0;
                *(_QWORD *)(v12 + 8) = 0;
                *(_QWORD *)(v12 + 16) = 0;
              }
            }
            else
            {
              *(_QWORD *)v12 = 0;
              *(_QWORD *)(v12 + 8) = 0;
              *(_QWORD *)(v12 + 16) = 0;
              *(_BYTE *)(v12 + 24) = 1;
            }
          }
          if ( *(_BYTE *)(v12 + 24) != 0 )
          {
            if ( (unsigned __int8)sub_1404FE330(a1: v11, a2: v12) == 0 )
              return 0;
            goto LABEL_32;
          }
LABEL_30:
          __fastfail(5u);
        }
      }
    }
  }
  return 0;
}