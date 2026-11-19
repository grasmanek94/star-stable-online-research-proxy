_OWORD *__fastcall sub_140A441D0(_OWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  unsigned __int64 v4; // rsi
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  _QWORD *v13; // rax
  unsigned __int64 v14; // rax
  bool v15; // cc
  unsigned __int64 i; // rax
  _QWORD v18[2]; // [rsp+90h] [rbp-78h] BYREF
  __int128 v19; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v20; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v21; // [rsp+C0h] [rbp-48h] BYREF

  v2 = a2;
  if ( a2[2] == 36 )
  {
    v4 = a2[3];
    v5 = a2;
    if ( v4 > 0xF )
      v5 = (_QWORD *)*a2;
    if ( (unsigned int)sub_140E82B50(a1: v5, a2: "00000000-0000-0000-0000-000000000000") != 0 )
    {
      v6 = v2;
      if ( v4 > 0xF )
        v6 = (_QWORD *)*v2;
      if ( *((_BYTE *)v6 + 8) == 45 )
      {
        v7 = v2;
        if ( v4 > 0xF )
          v7 = (_QWORD *)*v2;
        if ( *((_BYTE *)v7 + 13) == 45 )
        {
          v8 = v2;
          if ( v4 > 0xF )
            v8 = (_QWORD *)*v2;
          if ( *((_BYTE *)v8 + 18) == 45 )
          {
            v9 = v2;
            if ( v4 > 0xF )
              v9 = (_QWORD *)*v2;
            if ( *((_BYTE *)v9 + 23) == 45 )
            {
              v10 = 0;
              v11 = 8659200;
              v12 = 0x7E0000007E03FFLL;
              while ( 1 )
              {
                if ( v10 > 0x17 || !_bittest64(&v11, v10) )
                {
                  v13 = v4 <= 0xF ? v2 : (_QWORD *)*v2;
                  v14 = *((unsigned __int8 *)v13 + v10);
                  LOBYTE(v14) = v14 - 48;
                  if ( (unsigned __int8)v14 > 0x36u || !_bittest64(&v12, v14) )
                    break;
                }
                if ( ++v10 >= 0x24 )
                {
                  *a1 = 0;
                  v15 = v2[3] <= 0xFu;
                  *(_OWORD *)v18 = 0;
                  v19 = 0;
                  v20 = 0;
                  v21 = 0;
                  if ( !v15 )
                    v2 = (_QWORD *)*v2;
                  if ( (unsigned int)sub_140094FD0(
                                       a1: v2,
                                       a2: "%02x%02x%02x%02x-%02x%02x-%02x%02x-%02x%02x-%02x%02x%02x%02x%02x%02x",
                                       (unsigned int)v18,
                                       (unsigned int)v18 + 4,
                                       (unsigned int)&v18[1],
                                       (unsigned int)&v18[1] + 4,
                                       (unsigned int)&v19,
                                       (unsigned int)&v19 + 4,
                                       (unsigned int)&v19 + 8,
                                       (unsigned int)&v19 + 12,
                                       (unsigned int)&v20,
                                       (unsigned int)&v20 + 4,
                                       (unsigned int)&v20 + 8,
                                       (unsigned int)&v20 + 12,
                                       (unsigned int)&v21,
                                       (unsigned int)&v21 + 4,
                                       (unsigned int)&v21 + 8,
                                       (unsigned int)&v21 + 12) != 16
                    && (unsigned __int8)sub_140059CA0(a1: off_14109FAC8) != 0 )
                  {
                    __debugbreak();
                  }
                  for ( i = 0; i < 0x10; ++i )
                    *((_BYTE *)a1 + i) = *((_BYTE *)v18 + 4 * i);
                  return a1;
                }
              }
            }
          }
        }
      }
    }
  }
  *a1 = 0;
  return a1;
}