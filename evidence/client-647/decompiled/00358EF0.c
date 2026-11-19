void __fastcall sub_140358EF0(__int64 a1)
{
  __int64 v2; // rdx
  unsigned int v3; // edi
  __int64 v4; // rax
  __int64 v5; // rdx
  void ***v6; // rsi
  __int64 v7; // rax
  bool v8; // di
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // r9d
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rax
  char **v21; // rcx
  _QWORD v22[3]; // [rsp+30h] [rbp-88h] BYREF
  int v23; // [rsp+48h] [rbp-70h]
  __int16 v24; // [rsp+50h] [rbp-68h]
  _BYTE v25[32]; // [rsp+58h] [rbp-60h] BYREF
  __int16 v26; // [rsp+78h] [rbp-40h] BYREF
  _BYTE v27[56]; // [rsp+80h] [rbp-38h] BYREF
  __int64 v28; // [rsp+C8h] [rbp+10h] BYREF

  if ( *(_QWORD *)&nExitCode != 0 )
  {
    if ( dword_14138DFD0 != 0 )
      sub_14034C640(a1, a2: 0);
    v2 = *(_QWORD *)(a1 + 152);
    v3 = 0;
    if ( (*(_QWORD *)(a1 + 160) - v2) >> 4 != 0 )
    {
      while ( 1 )
      {
        if ( v3 >= (unsigned __int64)((*(_QWORD *)(a1 + 160) - v2) >> 4) )
          __fastfail(5u);
        v4 = sub_1405F1EE0(a1: v2 + 16LL * v3);
        if ( v4 == 0 )
          break;
        sub_1400C6FF0(a1: v4, a2: &qword_140EFD640, a3: &xmmword_1413105E0, a4: 1);
        v2 = *(_QWORD *)(a1 + 152);
        if ( ++v3 >= (unsigned __int64)((*(_QWORD *)(a1 + 160) - v2) >> 4) )
          goto LABEL_8;
      }
      v21 = off_140F78880;
LABEL_26:
      if ( (unsigned __int8)sub_140059CA0(a1: v21) != 0 )
        __debugbreak();
      sub_1409E29B8(a1: 999);
      __debugbreak();
    }
LABEL_8:
    v6 = &off_141313B68;
    if ( (unsigned __int8)sub_14034C6F0(a1) != 0 )
    {
      v7 = sub_1405F1EE0(a1: (__int64)&off_141313B68);
      if ( v7 == 0 )
      {
        v21 = off_140F4EF78;
        goto LABEL_26;
      }
      v8 = *(_DWORD *)(a1 + 680) == *(_DWORD *)(v7 + 1720);
    }
    else
    {
      v8 = true;
    }
    if ( v8 )
    {
      v22[1] = 0;
      v22[0] = &PXEngine::ByteStreamWriter::`vftable';
      v24 = word_141313CE4;
      v22[2] = 0;
      v23 = 0;
      sub_140A255B0(a1: v25, a2: v22);
      v26 = v24;
      sub_140A255B0(a1: v27, a2: v25);
      v27[32] = 1;
      sub_140A25690(a1: v25);
      sub_140A25690(a1: v22);
      sub_1407EE6B0(a1: &v26);
    }
    if ( dword_14138DFD0 != 0 )
    {
      LOBYTE(v5) = 1;
      sub_14034C640(a1, a2: v5);
      if ( !v8 )
      {
        v9 = sub_140350270();
        v6 = (void ***)sub_1407B9B80(a1: v9, a2: v22, a3: *(unsigned int *)(a1 + 680));
      }
      v10 = sub_1405F1EE0(a1: (__int64)v6);
      v11 = v10;
      if ( v10 != 0 && (unsigned __int8)sub_140787480(a1: v10) == 0 )
      {
        v12 = sub_1405F1EE0(a1: v11 + 1608);
        v14 = (__int64 *)v12;
        if ( v12 != 0 )
        {
          LOBYTE(v13) = 1;
          v15 = sub_1401E09C0(a1: v12, a2: v13);
          v16 = sub_14034FCC0(a1, a2: *(unsigned int *)(v15 + 40));
          v28 = v16;
          if ( v16 != 0 )
          {
            LOBYTE(v17) = 1;
            sub_1400B0580(a1: (_DWORD)v14, a2: v16, a3: -1, a4: v17, a5: 0);
            v18 = *v14;
            v20 = sub_1400FBAF0(a1: v19);
            (*(void (__fastcall **)(__int64 *, __int64, __int64 *, _QWORD, __int64))(v18 + 24))(
              a1: v14,
              a2: 1036,
              a3: &v28,
              a4: 0,
              a5: v20);
          }
        }
      }
    }
  }
}