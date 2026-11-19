char __fastcall sub_1407A7DA0(_DWORD *a1, __int128 *a2)
{
  char result; // al
  unsigned __int64 v5; // rcx
  char *v6; // rax
  char *v7; // r8
  _BYTE v8[16]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v9; // [rsp+30h] [rbp-58h] BYREF

  v8[0] = *((_BYTE *)a2 + 64);
  result = (*(__int64 (__fastcall **)(_DWORD *, _BYTE *, __int64))(*(_QWORD *)a1 + 16LL))(a1, a2: v8, a3: 1);
  if ( result == 0 )
    return result;
  if ( v8[0] == 0 )
  {
    if ( *((_BYTE *)a2 + 64) != 0 )
    {
      sub_14001B5A0(a1: a2);
      *(_QWORD *)a2 = 19937;
      *((_QWORD *)a2 + 2) = 0;
      *((_QWORD *)a2 + 3) = 31;
      *((_BYTE *)a2 + 64) = 0;
    }
    return 1;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1) != 0 )
  {
    v9 = 0;
    LOBYTE(v9) = 0;
    if ( *((_BYTE *)a2 + 64) != 0 )
    {
      if ( a2 != &v9 )
      {
        v5 = *((_QWORD *)a2 + 3);
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
              goto LABEL_19;
          }
          sub_1409DB4C0(lpMem: v7);
        }
        *a2 = v9;
        *((_QWORD *)a2 + 2) = 0;
        *((_QWORD *)a2 + 3) = 15;
      }
    }
    else
    {
      *a2 = v9;
      *((_QWORD *)a2 + 2) = 0;
      *((_QWORD *)a2 + 3) = 15;
      *((_BYTE *)a2 + 64) = 1;
    }
    *((_DWORD *)a2 + 15) = 1065353216;
    *((_DWORD *)a2 + 14) = 0;
    *((_QWORD *)a2 + 6) = 0;
    *((_QWORD *)a2 + 5) = 0;
    *((_QWORD *)a2 + 4) = 0;
  }
  if ( *((_BYTE *)a2 + 64) == 0 )
LABEL_19:
    __fastfail(5u);
  return sub_1402B4D00(a1, (__int64 *)a2) != 0
      && (unsigned __int8)sub_1407A98E0(a1, a2: a2 + 2) != 0
      && (unsigned __int8)sub_1407A9470(a1, a2: (char *)a2 + 34) != 0
      && (unsigned __int8)sub_140A25C40((__int64)a1, a2: (__int64)a2 + 36) != 0
      && sub_140A25B40((__int64)a1, a2: (float *)a2 + 12) != 0;
}