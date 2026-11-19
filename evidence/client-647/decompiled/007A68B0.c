char __fastcall sub_1407A68B0(_DWORD *a1, __int128 *a2)
{
  char result; // al
  bool v5; // zf
  unsigned __int64 v6; // rcx
  char *v7; // rax
  char *v8; // r8
  _BYTE v9[4]; // [rsp+20h] [rbp-48h] BYREF
  int v10; // [rsp+24h] [rbp-44h] BYREF
  __int128 v11; // [rsp+28h] [rbp-40h] BYREF

  v9[0] = *((_BYTE *)a2 + 40);
  result = (*(__int64 (__fastcall **)(_DWORD *, _BYTE *, __int64))(*(_QWORD *)a1 + 16LL))(a1, a2: v9, a3: 1);
  if ( result == 0 )
    return result;
  if ( v9[0] == 0 )
  {
    if ( *((_BYTE *)a2 + 40) != 0 )
    {
      sub_14001B5A0(a1: a2);
      *(_QWORD *)a2 = 19937;
      *((_QWORD *)a2 + 2) = 0;
      *((_QWORD *)a2 + 3) = 31;
      *((_BYTE *)a2 + 40) = 0;
    }
    return 1;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1) != 0 )
  {
    v5 = *((_BYTE *)a2 + 40) == 0;
    v11 = 0;
    if ( v5 )
    {
      *((_QWORD *)a2 + 1) = *((_QWORD *)&v11 + 1);
      *(_QWORD *)a2 = 0;
      *((_QWORD *)a2 + 2) = 0;
      *((_QWORD *)a2 + 3) = 15;
      *((_BYTE *)a2 + 40) = 1;
    }
    else if ( a2 != &v11 )
    {
      v6 = *((_QWORD *)a2 + 3);
      if ( v6 > 0xF )
      {
        v7 = *(char **)a2;
        if ( v6 + 1 < 0x1000 )
        {
          v8 = *(char **)a2;
        }
        else
        {
          v8 = *((char **)v7 - 1);
          if ( (unsigned __int64)(v7 - v8 - 8) > 0x1F )
            goto LABEL_19;
        }
        sub_1409DB4C0(lpMem: v8);
      }
      *((_QWORD *)a2 + 1) = *((_QWORD *)&v11 + 1);
      *(_QWORD *)a2 = 0;
      *((_QWORD *)a2 + 2) = 0;
      *((_QWORD *)a2 + 3) = 15;
    }
    *((_BYTE *)a2 + 36) = 0;
    *((_DWORD *)a2 + 8) = 0;
  }
  if ( *((_BYTE *)a2 + 40) == 0 )
LABEL_19:
    __fastfail(5u);
  result = false;
  if ( sub_1402B4D00(a1, (__int64 *)a2) != 0 )
  {
    v10 = *((_DWORD *)a2 + 8);
    if ( sub_1401D0820(a1, a2: &v10) != 0 )
    {
      *((_DWORD *)a2 + 8) = v10;
      if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a1 + 16LL))(
             a1,
             a2: (__int64)a2 + 36,
             a3: 1) != 0 )
        return true;
    }
  }
  return result;
}