char __fastcall sub_1407A8EA0(__int64 a1, __int64 a2)
{
  char result; // al
  unsigned __int64 v5; // rcx
  char *v6; // rax
  char *v7; // r8
  char **v8; // r14
  unsigned __int64 v9; // rcx
  char *v10; // rax
  char *v11; // r8
  unsigned __int64 v12; // rax
  char v13[16]; // [rsp+20h] [rbp-88h] BYREF
  __int128 v14; // [rsp+30h] [rbp-78h] BYREF
  __int128 v15; // [rsp+50h] [rbp-58h] BYREF
  char v16; // [rsp+60h] [rbp-48h]

  v13[0] = *(_BYTE *)(a2 + 88);
  result = (*(__int64 (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)a1 + 16LL))(a1, a2: v13, a3: 1);
  if ( result == 0 )
    return result;
  if ( v13[0] != 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1) != 0 )
    {
      v16 = 0;
      v15 = 0;
      LOBYTE(v15) = 0;
      v14 = 0;
      LOBYTE(v14) = 0;
      if ( *(_BYTE *)(a2 + 88) != 0 )
      {
        if ( (__int128 *)a2 != &v14 )
        {
          v5 = *(_QWORD *)(a2 + 24);
          if ( v5 > 0xF )
          {
            v6 = *(char **)a2;
            if ( v5 + 1 < 0x1000 )
            {
              v7 = *(char **)a2;
            }
            else
            {
              v7 = *((char **)v6 - 1);
              if ( (unsigned __int64)(v6 - v7 - 8) > 0x1F )
                goto LABEL_27;
            }
            sub_1409DB4C0(lpMem: v7);
          }
          *(_OWORD *)a2 = v14;
          *(_QWORD *)(a2 + 16) = 0;
          *(_QWORD *)(a2 + 24) = 15;
          LOBYTE(v14) = 0;
        }
        v8 = (char **)(a2 + 32);
        if ( (__int128 *)(a2 + 32) != &v15 )
        {
          v9 = *(_QWORD *)(a2 + 56);
          if ( v9 > 0xF )
          {
            v10 = *v8;
            if ( v9 + 1 < 0x1000 )
            {
              v11 = *v8;
            }
            else
            {
              v11 = *((char **)v10 - 1);
              if ( (unsigned __int64)(v10 - v11 - 8) > 0x1F )
                goto LABEL_27;
            }
            sub_1409DB4C0(lpMem: v11);
          }
          *v8 = (char *)v15;
          *(_QWORD *)(a2 + 40) = *((_QWORD *)&v15 + 1);
          *(_QWORD *)(a2 + 48) = 0;
          *(_QWORD *)(a2 + 56) = 15;
        }
        *(_QWORD *)(a2 + 64) = 0;
        *(_QWORD *)(a2 + 72) = 0;
        *(_DWORD *)(a2 + 80) = 0;
      }
      else
      {
        *(_OWORD *)a2 = v14;
        v12 = v15;
        *(_QWORD *)(a2 + 16) = 0;
        *(_QWORD *)(a2 + 24) = 15;
        *(_OWORD *)(a2 + 32) = __PAIR128__(*((unsigned __int64 *)&v15 + 1), v12);
        *(_QWORD *)(a2 + 48) = 0;
        *(_QWORD *)(a2 + 56) = 15;
        *(_QWORD *)(a2 + 64) = 0;
        *(_QWORD *)(a2 + 72) = 0;
        *(_DWORD *)(a2 + 80) = 0;
        *(_BYTE *)(a2 + 88) = 1;
      }
    }
    if ( *(_BYTE *)(a2 + 88) != 0 )
      return sub_1407AAA70(a1, a2);
LABEL_27:
    __fastfail(5u);
  }
  if ( *(_BYTE *)(a2 + 88) != 0 )
  {
    sub_14001B5A0(a1: a2 + 32);
    *(_QWORD *)(a2 + 32) = 19937;
    *(_QWORD *)(a2 + 48) = 0;
    *(_QWORD *)(a2 + 56) = 31;
    sub_14001B5A0(a1: a2);
    *(_QWORD *)a2 = 19937;
    *(_QWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = 31;
    *(_BYTE *)(a2 + 88) = 0;
  }
  return 1;
}