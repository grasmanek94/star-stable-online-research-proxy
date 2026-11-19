void __fastcall sub_1407BAB40(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  unsigned int v6; // eax
  unsigned int v7; // esi
  unsigned __int64 v8; // rdx
  __int128 *v9; // rax
  unsigned __int64 v10; // rdi
  __int128 *v11; // rbx
  char *v12; // rbx
  __int128 *v13; // rdx
  char (__fastcall *v14)(__int64, __int64, __int64); // r9
  void *v15; // rcx
  __int64 v16; // rax
  unsigned __int8 v17; // [rsp+30h] [rbp-89h]
  unsigned int v18; // [rsp+38h] [rbp-81h] BYREF
  _QWORD v19[3]; // [rsp+40h] [rbp-79h] BYREF
  int v20; // [rsp+58h] [rbp-61h]
  _BYTE v21[16]; // [rsp+60h] [rbp-59h] BYREF
  __int16 v22; // [rsp+70h] [rbp-49h] BYREF
  _BYTE v23[32]; // [rsp+78h] [rbp-41h] BYREF
  char v24; // [rsp+98h] [rbp-21h]
  __int16 v25; // [rsp+A0h] [rbp-19h]
  _BYTE v26[32]; // [rsp+A8h] [rbp-11h] BYREF
  __int128 v27; // [rsp+C8h] [rbp+Fh] BYREF
  unsigned __int64 v28; // [rsp+D8h] [rbp+1Fh]
  unsigned __int64 v29; // [rsp+E0h] [rbp+27h]

  if ( *(_BYTE *)(a1 + 480) == 0 )
    return;
  if ( a2 == 0 )
  {
    v18 = *(_DWORD *)(a1 + 1100);
    v16 = sub_1401D5630(a1: &unk_141313C3C, a2: &v22, a3: &v18);
    sub_1407D6C20(a1, a2: v16);
    return;
  }
  sub_1400775B0(a1: v21, a2: &String2);
  sub_1400787F0(a1: v21, a2);
  sub_14007E430(a1: v21, a2: 65001);
  v4 = sub_140081CC0(a1: v21, a2: 0);
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v5 = sub_140E82CD0(a1: v4);
  sub_14000D7F0(a1: &v27, a2: v4, a3: v5);
  v19[1] = 0;
  v19[2] = 0;
  v20 = 0;
  v19[0] = &PXEngine::ByteStreamWriter::`vftable';
  v6 = v28;
  if ( v28 >= 0xFFFFFFFF )
  {
    if ( (unsigned __int8)sub_140059CA0(a1: off_140F64800) != 0 )
      __debugbreak();
    v6 = v28;
  }
  v18 = v6;
  if ( sub_1401D0820(a1: v19, a2: &v18) == 0 )
    goto LABEL_24;
  v7 = v18;
  if ( v18 > 0x1FA0 )
    goto LABEL_24;
  v8 = v28;
  if ( v18 > v28 )
  {
    v10 = v18 - v28;
    if ( v10 > v29 - v28 )
    {
      sub_140057960(a1: (unsigned int)&v27, a2: v18 - v28, a3: v17, a4: v18 - v28, a5: 0);
    }
    else
    {
      v28 = v18;
      v11 = &v27;
      if ( v29 > 0xF )
        v11 = (__int128 *)v27;
      v12 = (char *)v11 + v8;
      sub_140E827B0(a1: v12, a2: 0, a3: v18 - v8);
      v12[v10] = 0;
    }
  }
  else
  {
    v28 = v18;
    v9 = &v27;
    if ( v29 > 0xF )
      v9 = (__int128 *)v27;
    *((_BYTE *)v9 + v18) = 0;
  }
  v13 = &v27;
  if ( v29 > 0xF )
    v13 = (__int128 *)v27;
  v14 = *(char (__fastcall **)(__int64, __int64, __int64))(v19[0] + 16LL);
  if ( v14 != sub_1401F6C10 )
  {
    if ( v14(a1: (__int64)v19, a2: (__int64)v13, a3: v7) != 0 )
      goto LABEL_23;
LABEL_24:
    v24 = 0;
    goto LABEL_25;
  }
  sub_140A25890(a1: v19, a2: v13, a3: v7);
LABEL_23:
  v25 = word_141313C40;
  sub_140A255B0(a1: v26, a2: v19);
  v22 = v25;
  sub_140A255B0(a1: v23, a2: v26);
  v24 = 1;
  sub_140A25690(a1: v26);
LABEL_25:
  sub_140A25690(a1: v19);
  sub_1407D6C20(a1, a2: &v22);
  if ( v29 > 0xF )
  {
    v15 = (void *)v27;
    if ( v29 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v27 - *(_QWORD *)(v27 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v15 = *(void **)(v27 - 8);
    }
    sub_1409DB4C0(lpMem: v15);
  }
  *(_QWORD *)&v27 = 19937;
  v28 = 0;
  v29 = 31;
  sub_1400778C0(a1: v21);
}