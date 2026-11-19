char __fastcall sub_1407A71F0(_DWORD *a1, __int64 a2)
{
  char result; // al
  char **v5; // rbx
  unsigned __int64 v6; // rcx
  char *v7; // rax
  char *v8; // r8
  char **v9; // r12
  __int64 v10; // r15
  LPVOID v11; // rcx
  unsigned __int64 v12; // rax
  char **v13; // rbx
  unsigned __int64 v14; // rcx
  char *v15; // rax
  char *v16; // r8
  _BYTE *v17; // rcx
  __int64 v18; // rax
  char v19; // [rsp+20h] [rbp-39h] BYREF
  char v20[3]; // [rsp+21h] [rbp-38h] BYREF
  int v21; // [rsp+24h] [rbp-35h] BYREF
  _DWORD *v22; // [rsp+28h] [rbp-31h] BYREF
  LPVOID lpMem[3]; // [rsp+30h] [rbp-29h] BYREF
  __int128 v24; // [rsp+48h] [rbp-11h] BYREF
  char v25; // [rsp+58h] [rbp-1h]

  v20[0] = *(_BYTE *)(a2 + 80);
  result = (*(__int64 (__fastcall **)(_DWORD *, char *, __int64))(*(_QWORD *)a1 + 16LL))(a1, a2: v20, a3: 1);
  if ( result == 0 )
    return result;
  if ( v20[0] != 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1) != 0 )
    {
      v25 = 0;
      *(_OWORD *)lpMem = 0;
      v24 = 0;
      LOBYTE(v24) = 0;
      if ( *(_BYTE *)(a2 + 80) != 0 )
      {
        if ( (LPVOID *)a2 != lpMem )
        {
          sub_14001B300(a1: a2);
          *(_OWORD *)a2 = *(_OWORD *)lpMem;
          *(_QWORD *)(a2 + 16) = 0;
          *(_OWORD *)lpMem = 0;
        }
        v5 = (char **)(a2 + 24);
        if ( (__int128 *)(a2 + 24) != &v24 )
        {
          v6 = *(_QWORD *)(a2 + 48);
          if ( v6 > 0xF )
          {
            v7 = *v5;
            if ( v6 + 1 < 0x1000 )
            {
              v8 = *v5;
            }
            else
            {
              v8 = *((char **)v7 - 1);
              if ( (unsigned __int64)(v7 - v8 - 8) > 0x1F )
                goto LABEL_36;
            }
            sub_1409DB4C0(lpMem: v8);
          }
          *v5 = (char *)v24;
          *(_QWORD *)(a2 + 32) = *((_QWORD *)&v24 + 1);
          *(_QWORD *)(a2 + 40) = 0;
          *(_QWORD *)(a2 + 48) = 15;
        }
        v9 = (char **)lpMem[1];
        v10 = (__int64)lpMem[0];
      }
      else
      {
        v9 = nullptr;
        v11 = lpMem[1];
        v10 = 0;
        *(LPVOID *)a2 = lpMem[0];
        v12 = v24;
        *(_QWORD *)(a2 + 8) = v11;
        *(_QWORD *)(a2 + 16) = 0;
        *(_OWORD *)(a2 + 24) = __PAIR128__(*((unsigned __int64 *)&v24 + 1), v12);
        *(_QWORD *)(a2 + 40) = 0;
        *(_QWORD *)(a2 + 48) = 15;
        *(_BYTE *)(a2 + 80) = 1;
      }
      *(_QWORD *)(a2 + 56) = 0;
      *(_BYTE *)(a2 + 64) = 0;
      *(_QWORD *)(a2 + 68) = 0;
      *(_DWORD *)(a2 + 76) = 0;
      if ( v10 != 0 )
      {
        if ( (char **)v10 != v9 )
        {
          v13 = (char **)v10;
          do
          {
            v14 = (unsigned __int64)v13[3];
            if ( v14 > 0xF )
            {
              v15 = *v13;
              if ( v14 + 1 < 0x1000 )
              {
                v16 = *v13;
              }
              else
              {
                v16 = *((char **)v15 - 1);
                if ( (unsigned __int64)(v15 - v16 - 8) > 0x1F )
                  goto LABEL_36;
              }
              sub_1409DB4C0(lpMem: v16);
            }
            *v13 = (char *)19937;
            v13[2] = nullptr;
            v13[3] = (char *)31;
            v13 += 5;
          }
          while ( v13 != v9 );
        }
        if ( (unsigned __int64)(40 * (-v10 / 40)) < 0x1000 )
        {
          v17 = (_BYTE *)v10;
        }
        else
        {
          v17 = *(_BYTE **)(v10 - 8);
          if ( (unsigned __int64)(v10 - (_QWORD)v17 - 8) > 0x1F )
            goto LABEL_36;
        }
        sub_1409DB4C0(lpMem: v17);
      }
    }
    if ( *(_BYTE *)(a2 + 80) == 0 )
LABEL_36:
      __fastfail(5u);
    v22 = a1;
    if ( (unsigned __int8)sub_1407A7F50(a1, a2) != 0 && sub_1402B4D00(a1, a2: (__int64 *)(a2 + 24)) != 0 )
    {
      v21 = *(_DWORD *)(a2 + 56);
      if ( sub_1401D0820(a1, a2: &v21) != 0 )
      {
        *(_DWORD *)(a2 + 56) = v21;
        v21 = *(_DWORD *)(a2 + 60);
        if ( sub_1401D0820(a1, a2: &v21) != 0 )
        {
          *(_DWORD *)(a2 + 60) = v21;
          if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1) != 0 )
          {
            v18 = *(_QWORD *)a1;
            v19 = 0;
            if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, char *, __int64))(v18 + 16))(a1, a2: &v19, a3: 1) != 0 )
            {
              *(_BYTE *)(a2 + 64) = v19;
LABEL_45:
              if ( sub_1402B7CD0(a1: &v22, a2: (int *)(a2 + 68)) != 0
                && sub_1402B7CD0(a1: &v22, a2: (int *)(a2 + 72)) != 0
                && sub_1402B7CD0(a1: &v22, a2: (int *)(a2 + 76)) != 0 )
              {
                return 1;
              }
            }
          }
          else
          {
            v19 = *(_BYTE *)(a2 + 64);
            if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, char *, __int64))(*(_QWORD *)a1 + 16LL))(
                   a1,
                   a2: &v19,
                   a3: 1) != 0 )
              goto LABEL_45;
          }
        }
      }
    }
    return 0;
  }
  if ( *(_BYTE *)(a2 + 80) != 0 )
  {
    sub_14001B5A0(a1: a2 + 24);
    *(_QWORD *)(a2 + 24) = 19937;
    *(_QWORD *)(a2 + 40) = 0;
    *(_QWORD *)(a2 + 48) = 31;
    sub_14001B300(a1: a2);
    *(_QWORD *)a2 = 19937;
    *(_QWORD *)(a2 + 8) = 19937;
    *(_QWORD *)(a2 + 16) = 19937;
    *(_BYTE *)(a2 + 80) = 0;
  }
  return 1;
}