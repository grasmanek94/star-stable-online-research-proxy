__int64 __fastcall sub_1407B9080(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // esi
  unsigned __int64 v7; // rdx
  __int128 *v8; // rax
  unsigned __int64 v9; // rdi
  __int128 *v10; // rbx
  char *v11; // rbx
  __int128 *v12; // rdx
  char (__fastcall *v13)(__int64, __int64, __int64); // r9
  void *v14; // rcx
  unsigned __int8 v16; // [rsp+30h] [rbp-79h]
  unsigned __int16 *v17; // [rsp+38h] [rbp-71h] BYREF
  _QWORD v18[3]; // [rsp+40h] [rbp-69h] BYREF
  int v19; // [rsp+58h] [rbp-51h]
  _BYTE v20[16]; // [rsp+60h] [rbp-49h] BYREF
  unsigned __int16 v21; // [rsp+70h] [rbp-39h] BYREF
  _BYTE v22[32]; // [rsp+78h] [rbp-31h] BYREF
  char v23; // [rsp+98h] [rbp-11h]
  __int16 v24; // [rsp+A0h] [rbp-9h]
  _BYTE v25[32]; // [rsp+A8h] [rbp-1h] BYREF
  __int128 v26; // [rsp+C8h] [rbp+1Fh] BYREF
  unsigned __int64 v27; // [rsp+D8h] [rbp+2Fh]
  unsigned __int64 v28; // [rsp+E0h] [rbp+37h]

  sub_1400775B0(a1: v20, a2);
  sub_14007E430(a1: v20, a2: 65001);
  v3 = sub_140081CC0(a1: v20, a2: 0);
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v4 = sub_140E82CD0(a1: v3);
  sub_14000D7F0(a1: &v26, a2: v3, a3: v4);
  v18[1] = 0;
  v18[2] = 0;
  v19 = 0;
  v18[0] = &PXEngine::ByteStreamWriter::`vftable';
  v5 = v27;
  if ( v27 >= 0xFFFFFFFF )
  {
    if ( (unsigned __int8)sub_140059CA0(a1: off_140F64800) != 0 )
      __debugbreak();
    v5 = v27;
  }
  LODWORD(v17) = v5;
  if ( sub_1401D0820(a1: v18, a2: &v17) == 0 )
    goto LABEL_22;
  v6 = (unsigned int)v17;
  if ( (unsigned int)v17 > 0x1FA0 )
    goto LABEL_22;
  v7 = v27;
  if ( (unsigned int)v17 > v27 )
  {
    v9 = (unsigned int)v17 - v27;
    if ( v9 > v28 - v27 )
    {
      sub_140057960(a1: (unsigned int)&v26, a2: (_DWORD)v17 - v27, a3: v16, a4: (_DWORD)v17 - v27, a5: 0);
    }
    else
    {
      v27 = (unsigned int)v17;
      v10 = &v26;
      if ( v28 > 0xF )
        v10 = (__int128 *)v26;
      v11 = (char *)v10 + v7;
      sub_140E827B0(a1: v11, a2: 0, a3: (unsigned int)v17 - v7);
      v11[v9] = 0;
    }
  }
  else
  {
    v27 = (unsigned int)v17;
    v8 = &v26;
    if ( v28 > 0xF )
      v8 = (__int128 *)v26;
    *((_BYTE *)v8 + (unsigned int)v17) = 0;
  }
  v12 = &v26;
  if ( v28 > 0xF )
    v12 = (__int128 *)v26;
  v13 = *(char (__fastcall **)(__int64, __int64, __int64))(v18[0] + 16LL);
  if ( v13 != sub_1401F6C10 )
  {
    if ( v13(a1: (__int64)v18, a2: (__int64)v12, a3: v6) != 0 )
      goto LABEL_21;
LABEL_22:
    v23 = 0;
    goto LABEL_23;
  }
  sub_140A25890(a1: v18, a2: v12, a3: v6);
LABEL_21:
  v24 = word_141313C20;
  sub_140A255B0(a1: v25, a2: v18);
  v21 = v24;
  sub_140A255B0(a1: v22, a2: v25);
  v23 = 1;
  sub_140A25690(a1: v25);
LABEL_23:
  sub_140A25690(a1: v18);
  v17 = &v21;
  if ( v23 != 0 )
  {
    sub_1407D5600(a1, a2: v21, a3: v22);
    if ( v23 != 0 )
    {
      sub_140A25690(a1: v22);
      v23 = 0;
    }
  }
  if ( v28 > 0xF )
  {
    v14 = (void *)v26;
    if ( v28 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v26 - *(_QWORD *)(v26 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v14 = *(void **)(v26 - 8);
    }
    sub_1409DB4C0(lpMem: v14);
  }
  return sub_1400778C0(a1: v20);
}