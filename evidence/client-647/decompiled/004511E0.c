__int64 __fastcall sub_1404511E0(__int64 a1, unsigned int a2, __int64 a3)
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
  __int64 v17; // rax
  unsigned __int8 v18; // [rsp+30h] [rbp-89h]
  unsigned int v19; // [rsp+38h] [rbp-81h] BYREF
  _QWORD v20[3]; // [rsp+40h] [rbp-79h] BYREF
  int v21; // [rsp+58h] [rbp-61h]
  _BYTE v22[16]; // [rsp+60h] [rbp-59h] BYREF
  __int16 v23; // [rsp+70h] [rbp-49h] BYREF
  _BYTE v24[32]; // [rsp+78h] [rbp-41h] BYREF
  char v25; // [rsp+98h] [rbp-21h]
  __int16 v26; // [rsp+A0h] [rbp-19h]
  _BYTE v27[32]; // [rsp+A8h] [rbp-11h] BYREF
  __int128 v28; // [rsp+C8h] [rbp+Fh] BYREF
  unsigned __int64 v29; // [rsp+D8h] [rbp+1Fh]
  unsigned __int64 v30; // [rsp+E0h] [rbp+27h]

  if ( a3 == 0 )
  {
    v19 = a2;
    v17 = sub_1401D5630(a1: &unk_141313CC0, a2: &v23, a3: &v19);
    return sub_1407EE6B0(a1: v17);
  }
  sub_1400775B0(a1: v22, a2: &String2);
  sub_1400787F0(a1: v22, a2: a3);
  sub_14007E430(a1: v22, a2: 65001);
  v4 = sub_140081CC0(a1: v22, a2: 0);
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v5 = sub_140E82CD0(a1: v4);
  sub_14000D7F0(a1: &v28, a2: v4, a3: v5);
  v20[1] = 0;
  v20[2] = 0;
  v21 = 0;
  v20[0] = &PXEngine::ByteStreamWriter::`vftable';
  v6 = v29;
  if ( v29 >= 0xFFFFFFFF )
  {
    if ( (unsigned __int8)sub_140059CA0(a1: off_140F64800) != 0 )
      __debugbreak();
    v6 = v29;
  }
  v19 = v6;
  if ( sub_1401D0820(a1: v20, a2: &v19) == 0 )
    goto LABEL_23;
  v7 = v19;
  if ( v19 > 0x1FA0 )
    goto LABEL_23;
  v8 = v29;
  if ( v19 > v29 )
  {
    v10 = v19 - v29;
    if ( v10 > v30 - v29 )
    {
      sub_140057960(a1: (unsigned int)&v28, a2: v19 - v29, a3: v18, a4: v19 - v29, a5: 0);
    }
    else
    {
      v29 = v19;
      v11 = &v28;
      if ( v30 > 0xF )
        v11 = (__int128 *)v28;
      v12 = (char *)v11 + v8;
      sub_140E827B0(a1: v12, a2: 0, a3: v19 - v8);
      v12[v10] = 0;
    }
  }
  else
  {
    v29 = v19;
    v9 = &v28;
    if ( v30 > 0xF )
      v9 = (__int128 *)v28;
    *((_BYTE *)v9 + v19) = 0;
  }
  v13 = &v28;
  if ( v30 > 0xF )
    v13 = (__int128 *)v28;
  v14 = *(char (__fastcall **)(__int64, __int64, __int64))(v20[0] + 16LL);
  if ( v14 != sub_1401F6C10 )
  {
    if ( v14(a1: (__int64)v20, a2: (__int64)v13, a3: v7) != 0 )
      goto LABEL_22;
LABEL_23:
    v25 = 0;
    goto LABEL_24;
  }
  sub_140A25890(a1: v20, a2: v13, a3: v7);
LABEL_22:
  v26 = word_141313CC4;
  sub_140A255B0(a1: v27, a2: v20);
  v23 = v26;
  sub_140A255B0(a1: v24, a2: v27);
  v25 = 1;
  sub_140A25690(a1: v27);
LABEL_24:
  sub_140A25690(a1: v20);
  sub_1407EE6B0(a1: &v23);
  if ( v30 > 0xF )
  {
    v15 = (void *)v28;
    if ( v30 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v28 - *(_QWORD *)(v28 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v15 = *(void **)(v28 - 8);
    }
    sub_1409DB4C0(lpMem: v15);
  }
  return sub_1400778C0(a1: v22);
}