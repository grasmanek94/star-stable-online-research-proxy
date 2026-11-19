char __fastcall sub_140A440C0(_QWORD *a1)
{
  _QWORD *v1; // rbx
  unsigned __int64 v2; // rdi
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  _QWORD *v10; // rax
  unsigned __int64 v11; // rax

  v1 = a1;
  if ( a1[2] == 36 )
  {
    v2 = a1[3];
    if ( v2 > 0xF )
      a1 = (_QWORD *)*a1;
    if ( (unsigned int)sub_140E82B50(a1, a2: "00000000-0000-0000-0000-000000000000") != 0 )
    {
      v3 = v1;
      if ( v2 > 0xF )
        v3 = (_QWORD *)*v1;
      if ( *((_BYTE *)v3 + 8) == 45 )
      {
        v4 = v1;
        if ( v2 > 0xF )
          v4 = (_QWORD *)*v1;
        if ( *((_BYTE *)v4 + 13) == 45 )
        {
          v5 = v1;
          if ( v2 > 0xF )
            v5 = (_QWORD *)*v1;
          if ( *((_BYTE *)v5 + 18) == 45 )
          {
            v6 = v1;
            if ( v2 > 0xF )
              v6 = (_QWORD *)*v1;
            if ( *((_BYTE *)v6 + 23) == 45 )
            {
              v7 = 0;
              v8 = 8659200;
              v9 = 0x7E0000007E03FFLL;
              while ( 1 )
              {
                if ( v7 > 0x17 || !_bittest64(&v8, v7) )
                {
                  v10 = v2 <= 0xF ? v1 : (_QWORD *)*v1;
                  v11 = *((unsigned __int8 *)v10 + v7);
                  LOBYTE(v11) = v11 - 48;
                  if ( (unsigned __int8)v11 > 0x36u || !_bittest64(&v9, v11) )
                    break;
                }
                if ( ++v7 >= 0x24 )
                  return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}