char __fastcall sub_1407AF9F0(__int128 **a1, _QWORD *a2)
{
  int *v4; // rdi
  _DWORD *v5; // rcx
  _DWORD *v6; // rsi
  __int128 *v7; // rbx
  unsigned __int64 v9; // rcx
  char *v10; // rax
  char *v11; // r8
  _BYTE v12[4]; // [rsp+20h] [rbp-48h] BYREF
  int v13; // [rsp+24h] [rbp-44h] BYREF
  __int128 v14; // [rsp+28h] [rbp-40h] BYREF

  if ( (unsigned __int8)sub_1407A66A0(a1: *a2, a2: a1[2]) != 0 )
  {
    v4 = (int *)a1[1];
    v5 = (_DWORD *)*a2;
    v13 = *v4;
    if ( sub_1401D0820(a1: v5, a2: &v13) != 0 )
    {
      *v4 = v13;
      v6 = (_DWORD *)*a2;
      v7 = *a1;
      v12[0] = *((_BYTE *)v7 + 40);
      if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, _BYTE *, __int64))(*(_QWORD *)v6 + 16LL))(
             a1: v6,
             a2: v12,
             a3: 1) != 0 )
      {
        if ( v12[0] == 0 )
        {
          if ( *((_BYTE *)v7 + 40) != 0 )
          {
            sub_14001B5A0(a1: v7);
            *(_QWORD *)v7 = 19937;
            *((_QWORD *)v7 + 2) = 0;
            *((_QWORD *)v7 + 3) = 31;
            *((_BYTE *)v7 + 40) = 0;
            return 1;
          }
          return 1;
        }
        if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 8LL))(a1: v6) != 0 )
        {
          v14 = 0;
          if ( *((_BYTE *)v7 + 40) != 0 )
          {
            if ( v7 != &v14 )
            {
              v9 = *((_QWORD *)v7 + 3);
              if ( v9 > 0xF )
              {
                v10 = *(char **)v7;
                if ( v9 + 1 < 0x1000 )
                {
                  v11 = *(char **)v7;
                }
                else
                {
                  v11 = *((char **)v10 - 1);
                  if ( (unsigned __int64)(v10 - v11 - 8) > 0x1F )
                    goto LABEL_20;
                }
                sub_1409DB4C0(lpMem: v11);
              }
              *((_QWORD *)v7 + 1) = *((_QWORD *)&v14 + 1);
              *(_QWORD *)v7 = 0;
              *((_QWORD *)v7 + 2) = 0;
              *((_QWORD *)v7 + 3) = 15;
            }
          }
          else
          {
            *((_QWORD *)v7 + 1) = *((_QWORD *)&v14 + 1);
            *(_QWORD *)v7 = 0;
            *((_QWORD *)v7 + 2) = 0;
            *((_QWORD *)v7 + 3) = 15;
            *((_BYTE *)v7 + 40) = 1;
          }
          *((_DWORD *)v7 + 8) = 0;
        }
        if ( *((_BYTE *)v7 + 40) == 0 )
LABEL_20:
          __fastfail(5u);
        if ( sub_1402B4D00(a1: v6, a2: (__int64 *)v7) != 0
          && (*(unsigned __int8 (__fastcall **)(_DWORD *, __int64 *, __int64))(*(_QWORD *)v6 + 16LL))(
               a1: v6,
               a2: (__int64 *)v7 + 4,
               a3: 4) != 0 )
        {
          return 1;
        }
      }
    }
  }
  return 0;
}