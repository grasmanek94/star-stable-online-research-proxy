char __fastcall sub_1407A92E0(_DWORD *a1, char *a2)
{
  char *v5; // rcx
  char *v6; // rax
  unsigned int v7; // ebx
  char v8; // [rsp+20h] [rbp-28h] BYREF
  char v9; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v10; // [rsp+58h] [rbp+10h] BYREF

  v9 = a2[24];
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, char *, __int64))(*(_QWORD *)a1 + 16LL))(a1, a2: &v9, a3: 1) == 0 )
    return 0;
  if ( v9 != 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1) != 0 )
    {
      if ( a2[24] != 0 )
      {
        if ( a2 != &v8 )
        {
          v5 = *(char **)a2;
          if ( *(_QWORD *)a2 != 0 )
          {
            if ( (unsigned __int64)(4 * ((__int64)(*((_QWORD *)a2 + 2) - (_QWORD)v5) >> 2)) < 0x1000 )
            {
              v6 = *(char **)a2;
            }
            else
            {
              v6 = *((char **)v5 - 1);
              if ( (unsigned __int64)(v5 - v6 - 8) > 0x1F )
                goto LABEL_18;
            }
            sub_1409DB4C0(lpMem: v6);
          }
          *(_QWORD *)a2 = 0;
          *((_QWORD *)a2 + 1) = 0;
          *((_QWORD *)a2 + 2) = 0;
        }
      }
      else
      {
        *(_QWORD *)a2 = 0;
        *((_QWORD *)a2 + 1) = 0;
        *((_QWORD *)a2 + 2) = 0;
        a2[24] = 1;
      }
    }
    if ( a2[24] == 0 )
LABEL_18:
      __fastfail(5u);
    if ( *((_QWORD *)a2 + 1) - *(_QWORD *)a2 >= 0x3FFFFFFFCuLL && (unsigned __int8)sub_140059CA0(a1: off_140F66170) != 0 )
      __debugbreak();
    v10 = (__int64)(*((_QWORD *)a2 + 1) - *(_QWORD *)a2) >> 2;
    if ( sub_1401D0820(a1, a2: &v10) != 0 && v10 <= 0x3E80 )
    {
      v7 = v10;
      sub_140213570(a1: a2, a2: v10);
      return sub_1402B88B0(a1, a2: *(_QWORD *)a2, a3: v7);
    }
    return 0;
  }
  if ( a2[24] != 0 )
  {
    sub_14001B290(a1: a2);
    *(_QWORD *)a2 = 19937;
    *((_QWORD *)a2 + 1) = 19937;
    *((_QWORD *)a2 + 2) = 19937;
    a2[24] = 0;
  }
  return 1;
}