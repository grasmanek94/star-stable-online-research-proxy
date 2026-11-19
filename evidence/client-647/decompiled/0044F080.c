char __fastcall sub_14044F080(__int64 *a1, __int64 **a2)
{
  __int64 *v4; // rsi
  __int64 v5; // rdi
  __int128 *v7; // rbx
  bool v8; // zf
  unsigned __int64 v9; // rcx
  char *v10; // rax
  char *v11; // r8
  _BYTE v12[8]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+28h] [rbp-30h]
  __int128 v14; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+40h] [rbp-18h]

  if ( sub_1402B8840(a1: *a2, a2: (char *)a1[1]) != 0 )
  {
    v4 = *a2;
    v5 = *a1;
    v12[0] = *(_BYTE *)(v5 + 40);
    if ( (*(unsigned __int8 (__fastcall **)(__int64 *, _BYTE *, __int64))(*v4 + 16))(a1: v4, a2: v12, a3: 1) != 0 )
    {
      if ( v12[0] == 0 )
      {
        if ( *(_BYTE *)(v5 + 40) != 0 )
        {
          sub_14001B5A0(a1: v5 + 8);
          *(_QWORD *)(v5 + 8) = 19937;
          *(_QWORD *)(v5 + 24) = 0;
          *(_QWORD *)(v5 + 32) = 31;
          *(_BYTE *)(v5 + 40) = 0;
          return 1;
        }
        return 1;
      }
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*v4 + 8))(a1: v4) != 0 )
      {
        v7 = (__int128 *)(v5 + 8);
        v8 = *(_BYTE *)(v5 + 40) == 0;
        v15 = 0;
        v13 = 0;
        v14 = 0;
        LOBYTE(v14) = 0;
        *(_DWORD *)v5 = 0;
        if ( v8 )
        {
          *(_QWORD *)v7 = v14;
          *(_QWORD *)(v5 + 16) = *((_QWORD *)&v14 + 1);
          *(_QWORD *)(v5 + 24) = 0;
          *(_QWORD *)(v5 + 32) = 15;
          *(_BYTE *)(v5 + 40) = 1;
        }
        else if ( v7 != &v14 )
        {
          v9 = *(_QWORD *)(v5 + 32);
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
                goto LABEL_18;
            }
            sub_1409DB4C0(lpMem: v11);
          }
          *(_QWORD *)v7 = v14;
          *(_QWORD *)(v5 + 16) = *((_QWORD *)&v14 + 1);
          *(_QWORD *)(v5 + 24) = 0;
          *(_QWORD *)(v5 + 32) = 15;
        }
      }
      if ( *(_BYTE *)(v5 + 40) == 0 )
LABEL_18:
        __fastfail(5u);
      if ( (unsigned __int8)sub_14044CA20(a1: v4, a2: v5) != 0 )
        return 1;
    }
  }
  return 0;
}