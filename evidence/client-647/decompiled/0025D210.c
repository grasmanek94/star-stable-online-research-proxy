unsigned __int64 __fastcall sub_14025D210(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v3; // rax
  __int64 v4; // r14
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rbx
  char v7; // r10
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  _BYTE *v12; // rcx
  unsigned __int64 i; // rcx
  _QWORD *v14; // rbx
  __int64 v15; // rax
  unsigned int v16; // ebp
  unsigned __int8 v17; // bl
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  void *v21; // rcx
  char v22[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v23; // [rsp+28h] [rbp-80h] BYREF
  __int128 v24; // [rsp+30h] [rbp-78h] BYREF
  __int64 v25; // [rsp+40h] [rbp-68h]
  unsigned __int64 v26; // [rsp+48h] [rbp-60h]

  if ( (unsigned __int8)sub_1405F1E20(a1: a1 + 440) == 0 )
  {
    result = sub_14025D910(a1);
    if ( (_BYTE)result == 0 )
      return result;
  }
  v3 = sub_1405F1EE0(a1: a1 + 440);
  v4 = v3;
  if ( v3 != 0 )
    sub_1402622C0(a1, a2: v3);
  result = sub_14025DD10(a1);
  v5 = result;
  if ( result == 0 )
    return result;
  v6 = **(_QWORD **)(a1 + 496);
  if ( *(_BYTE *)(v6 + 25) != 0 )
    goto LABEL_26;
  v7 = 0;
  do
  {
    v22[0] = *(_BYTE *)(v6 + 26);
    v8 = *(_QWORD *)(a1 + 1064);
    result = 2 * (*(_QWORD *)(a1 + 1088) & (0x100000001B3LL * ((unsigned __int8)v22[0] ^ 0xCBF29CE484222325uLL)));
    v9 = *(_QWORD *)(v8
                   + 16
                   * (*(_QWORD *)(a1 + 1088) & (0x100000001B3LL * ((unsigned __int8)v22[0] ^ 0xCBF29CE484222325uLL)))
                   + 8);
    if ( v9 != *(_QWORD *)(a1 + 1048) )
    {
      result = *(_QWORD *)(v8
                         + 16
                         * (*(_QWORD *)(a1 + 1088)
                          & (0x100000001B3LL * ((unsigned __int8)v22[0] ^ 0xCBF29CE484222325uLL))));
      if ( v22[0] == *(_BYTE *)(v9 + 16) )
        goto LABEL_14;
      while ( v9 != result )
      {
        v9 = *(_QWORD *)(v9 + 8);
        if ( v22[0] == *(_BYTE *)(v9 + 16) )
          goto LABEL_14;
      }
    }
    v9 = 0;
LABEL_14:
    if ( v9 != 0 )
    {
      v10 = sub_140259DD0(a1: a1 + 1040, a2: &v24, a3: v22);
      v23 = v4;
      v11 = *(_QWORD *)(*(_QWORD *)v10 + 80LL);
      if ( v11 == 0 )
      {
        sub_1409D2AC0(a1: 0);
        JUMPOUT(0x14025D50ALL);
      }
      result = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *, unsigned __int64))(*(_QWORD *)v11 + 16LL))(
                 a1: v11,
                 a2: a1,
                 a3: &v23,
                 a4: v5);
      v7 = result;
    }
    v12 = *(_BYTE **)(v6 + 16);
    if ( v12[25] != 0 )
    {
      for ( i = *(_QWORD *)(v6 + 8); *(_BYTE *)(i + 25) == 0; i = *(_QWORD *)(i + 8) )
      {
        if ( v6 != *(_QWORD *)(i + 16) )
          break;
        v6 = i;
      }
      v6 = i;
    }
    else
    {
      v6 = *(_QWORD *)(v6 + 16);
      result = *(_QWORD *)v12;
      if ( *(_BYTE *)(*(_QWORD *)v12 + 25LL) == 0 )
      {
        do
        {
          v6 = *(_QWORD *)v6;
          result = *(_QWORD *)v6;
        }
        while ( *(_BYTE *)(*(_QWORD *)v6 + 25LL) == 0 );
      }
    }
  }
  while ( *(_BYTE *)(v6 + 25) == 0 );
  if ( v7 == 0 )
  {
LABEL_26:
    v14 = (_QWORD *)(a1 + 800);
    if ( *(_QWORD *)(a1 + 824) > 0xFu )
      v14 = (_QWORD *)*v14;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v15 = sub_140E82CD0(a1: v14);
    sub_14000D7F0(a1: &v24, a2: v14, a3: v15);
    if ( v25 != 0 )
    {
      result = sub_14025CFE0(a1, a2: v5);
    }
    else
    {
      v16 = sub_1400E3910(a1: v5, a2: a1 + 712);
      v17 = *(_BYTE *)(a1 + 368);
      if ( v17 == 0 )
      {
        v18 = sub_14005D330();
        if ( v4 != 0 )
        {
          if ( (unsigned __int8)sub_140645790(a1: v4, a2: 226, a3: v18) != 0 )
          {
            LOBYTE(v19) = 1;
            v17 = sub_140787600(a1: v4, a2: v19);
          }
          else
          {
            v20 = sub_14005D330();
            if ( (unsigned __int8)sub_140645790(a1: v4, a2: 215, a3: v20) != 0 )
              v17 = *(_BYTE *)(v4 + 478);
          }
        }
        else
        {
          sub_14005D330();
        }
      }
      sub_1400F4D20(a1: v5, a2: a1 + 712, a3: v17);
      sub_1400E07A0(a1: v5, a2: v16);
      result = sub_1400F4630(a1: v5, a2: *(unsigned int *)(a1 + 748));
    }
    if ( v26 > 0xF )
    {
      v21 = (void *)v24;
      if ( v26 + 1 >= 0x1000 )
      {
        if ( (unsigned __int64)(v24 - *(_QWORD *)(v24 - 8) - 8) > 0x1F )
          __fastfail(5u);
        v21 = *(void **)(v24 - 8);
      }
      return sub_1409DB4C0(lpMem: v21);
    }
  }
  return result;
}