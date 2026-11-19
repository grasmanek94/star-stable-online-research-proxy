void __fastcall sub_140352A30(__int64 a1, int *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rdx
  char v7; // bp
  __int64 v8; // rdx
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // eax
  void *v14; // rcx
  int v15; // r9d
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rax
  int v21; // [rsp+30h] [rbp-198h] BYREF
  __int64 v22; // [rsp+38h] [rbp-190h] BYREF
  char v23; // [rsp+40h] [rbp-188h] BYREF
  int v24; // [rsp+70h] [rbp-158h] BYREF
  _QWORD v25[3]; // [rsp+78h] [rbp-150h] BYREF
  unsigned __int64 v26; // [rsp+90h] [rbp-138h]
  _BYTE v27[16]; // [rsp+110h] [rbp-B8h] BYREF
  _BYTE v28[24]; // [rsp+120h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+138h] [rbp-90h]
  __int64 v30; // [rsp+140h] [rbp-88h]

  if ( *a2 != 0 )
  {
    v4 = sub_1405F1EE0(a1: (__int64)&off_141310F50);
    v5 = v4;
    if ( v4 != 0
      && (unsigned __int8)sub_1406456B0(a1: v4, a2: 120) != 0
      && (LOBYTE(v6) = 1, *(_DWORD *)sub_1401E09C0(a1: v5, a2: v6) == *a2) )
    {
      v7 = 1;
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 152);
      v9 = 0;
      if ( (*(_QWORD *)(a1 + 160) - v8) >> 4 == 0 )
        return;
      while ( 1 )
      {
        if ( v9 >= (unsigned __int64)((*(_QWORD *)(a1 + 160) - v8) >> 4) )
LABEL_22:
          __fastfail(5u);
        v10 = sub_1405F1EE0(a1: v8 + 16LL * v9);
        v5 = v10;
        if ( v10 == 0 )
        {
          if ( (unsigned __int8)sub_140059CA0(a1: off_140F77FC8) != 0 )
            __debugbreak();
          sub_1409E29B8(a1: 999);
          __debugbreak();
        }
        LOBYTE(v11) = 1;
        v12 = sub_1401E09C0(a1: v10, a2: v11);
        sub_1401D44F0(a1: &v24, a2: v12);
        v13 = *a2;
        v29 = 7;
        v30 = 8;
        if ( v24 == v13 )
          break;
        sub_140017A10(a1: v28);
        sub_140082DD0(a1: v27);
        if ( v26 > 0xF )
        {
          v14 = (void *)v25[0];
          if ( v26 + 1 >= 0x1000 )
          {
            if ( (unsigned __int64)(v25[0] - *(_QWORD *)(v25[0] - 8LL) - 8LL) > 0x1F )
              goto LABEL_22;
            v14 = *(void **)(v25[0] - 8LL);
          }
          sub_1409DB4C0(lpMem: v14);
        }
        v8 = *(_QWORD *)(a1 + 152);
        if ( ++v9 >= (unsigned __int64)((*(_QWORD *)(a1 + 160) - v8) >> 4) )
          return;
      }
      sub_140017A10(a1: v28);
      sub_140082DD0(a1: v27);
      sub_14001B5A0(a1: v25);
      v7 = 0;
      v25[0] = 19937;
      v25[2] = 0;
      v26 = 31;
    }
    v22 = sub_14034FCC0(a1, a2: *(unsigned int *)(a1 + 704));
    *(_DWORD *)(v5 + 264) = *(_DWORD *)(a1 + 704);
    sub_14035CDE0(a1, a2: *(unsigned int *)(a1 + 704), a3: v5);
    LOBYTE(v15) = 1;
    sub_1400B0580(a1: v5, a2: v22, a3: -1, a4: v15, a5: 0);
    v21 = 0;
    v16 = sub_14034C350(
            a1: (unsigned int)&word_141313D3C,
            a2: (unsigned int)&v23,
            a3: (_DWORD)a2,
            a4: (int)a1 + 704,
            a5: (__int64)&v21);
    sub_1407EE6B0(a1: v16);
    if ( v7 == 0 )
      goto LABEL_21;
    v18 = sub_1405F1EE0(a1: (__int64)&off_141313B68);
    if ( v18 == 0 )
    {
      if ( (unsigned __int8)sub_140059CA0(a1: off_140F4EF78) != 0 )
        __debugbreak();
      sub_1409E29B8(a1: 999);
      __debugbreak();
    }
    if ( (unsigned __int8)sub_140787480(a1: v18) == 0 )
    {
LABEL_21:
      v19 = *(_QWORD *)v5;
      v20 = sub_1400FBAF0(a1: v17);
      (*(void (__fastcall **)(__int64, __int64, __int64 *, _QWORD, __int64))(v19 + 24))(
        a1: v5,
        a2: 1036,
        a3: &v22,
        a4: 0,
        a5: v20);
    }
  }
}