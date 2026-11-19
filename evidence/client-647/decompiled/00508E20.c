char __fastcall sub_140508E20(__int64 a1)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // r8
  __int64 v4; // rbx
  __int128 *v5; // rdx
  __int128 *v6; // rdx
  __int64 v7; // rax
  char v8; // bl
  void *v9; // rcx
  void *v10; // rcx
  _BYTE v12[56]; // [rsp+28h] [rbp-61h] BYREF
  __int128 v13; // [rsp+60h] [rbp-29h] BYREF
  __int64 v14; // [rsp+70h] [rbp-19h]
  unsigned __int64 v15; // [rsp+78h] [rbp-11h]
  __int128 v16; // [rsp+80h] [rbp-9h] BYREF
  __int64 v17; // [rsp+90h] [rbp+7h]
  unsigned __int64 v18; // [rsp+98h] [rbp+Fh]
  char v19; // [rsp+A0h] [rbp+17h]
  char v20; // [rsp+A8h] [rbp+1Fh]

  if ( (unsigned __int8)sub_1405036F0(a1: a1 + 216) != 0 && *(_BYTE *)(a1 + 227) == 0 )
  {
    v13 = 0;
    v14 = 0;
    v15 = 15;
    LOBYTE(v13) = 0;
    v16 = 0;
    v17 = 0;
    v18 = 15;
    LOBYTE(v16) = 0;
    v19 = 0;
    v20 = 0;
    v2 = *(_QWORD *)(a1 + 408);
    v3 = *(unsigned __int8 *)(a1 + 924);
    if ( v3 >= (*(_QWORD *)(a1 + 416) - v2) / 88 )
    {
      v14 = 4;
      strcpy((char *)&v13, "Idle");
      v17 = 4;
      strcpy((char *)&v16, "Idle");
    }
    else
    {
      v4 = 88 * v3;
      v5 = (__int128 *)(88 * v3 + v2 + 8);
      if ( &v13 != v5 )
      {
        if ( *(_QWORD *)(v4 + v2 + 32) > 0xFu )
          v5 = *(__int128 **)v5;
        sub_14000D680(a1: &v13, a2: v5, a3: *(_QWORD *)(v4 + v2 + 24));
      }
      v6 = (__int128 *)(v4 + v2 + 40);
      if ( &v16 != v6 )
      {
        if ( *(_QWORD *)(v4 + v2 + 64) > 0xFu )
          v6 = *(__int128 **)v6;
        sub_14000D680(a1: &v16, a2: v6, a3: *(_QWORD *)(v4 + v2 + 56));
      }
    }
    v7 = sub_140502E90(a1: &unk_141314140, a2: v12, a3: a1 + 224, a4: &v13);
    v8 = sub_1407EE6B0(a1: v7);
    *(_BYTE *)(a1 + 227) = v8;
    if ( v18 > 0xF )
    {
      v9 = (void *)v16;
      if ( v18 + 1 >= 0x1000 )
      {
        if ( (unsigned __int64)(v16 - *(_QWORD *)(v16 - 8) - 8) > 0x1F )
          goto LABEL_24;
        v9 = *(void **)(v16 - 8);
      }
      sub_1409DB4C0(lpMem: v9);
    }
    *(_QWORD *)&v16 = 19937;
    v17 = 0;
    v18 = 31;
    if ( v15 <= 0xF )
      return v8;
    v10 = (void *)v13;
    if ( v15 + 1 < 0x1000 )
    {
LABEL_22:
      sub_1409DB4C0(lpMem: v10);
      return v8;
    }
    if ( (unsigned __int64)(v13 - *(_QWORD *)(v13 - 8) - 8) <= 0x1F )
    {
      v10 = *(void **)(v13 - 8);
      goto LABEL_22;
    }
LABEL_24:
    __fastfail(5u);
  }
  return 0;
}