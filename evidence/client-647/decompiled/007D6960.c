__int64 __fastcall sub_1407D6960(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v7; // r8
  __int64 v8; // rbx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  int v12; // [rsp+20h] [rbp-79h] BYREF
  __int16 v13; // [rsp+28h] [rbp-71h]
  _BYTE v14[32]; // [rsp+30h] [rbp-69h] BYREF
  __int16 v15; // [rsp+50h] [rbp-49h] BYREF
  char v16[32]; // [rsp+58h] [rbp-41h] BYREF
  char v17; // [rsp+78h] [rbp-21h]
  __int128 v18; // [rsp+80h] [rbp-19h] BYREF
  __int64 v19; // [rsp+90h] [rbp-9h]
  unsigned __int64 v20; // [rsp+98h] [rbp-1h]
  int v21; // [rsp+A0h] [rbp+7h]
  int v22; // [rsp+A4h] [rbp+Bh]
  _QWORD v23[3]; // [rsp+A8h] [rbp+Fh] BYREF
  unsigned __int64 v24; // [rsp+C0h] [rbp+27h]

  result = sub_1405F1EE0(a1: (__int64)&off_141313B68);
  if ( result == 0 )
    return result;
  v18 = 0;
  v19 = 0;
  v20 = 15;
  LOBYTE(v18) = 0;
  v21 = -1;
  v22 = 0;
  v21 = *(_DWORD *)(result + 1720);
  LOBYTE(v7) = 1;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a2 + 472LL))(a1: a2, a2: v23, a3: v7);
  if ( &v18 != (__int128 *)v8 )
  {
    if ( v20 > 0xF )
    {
      v9 = (void *)v18;
      if ( v20 + 1 >= 0x1000 )
      {
        if ( (unsigned __int64)(v18 - *(_QWORD *)(v18 - 8) - 8) > 0x1F )
          goto LABEL_18;
        v9 = *(void **)(v18 - 8);
      }
      sub_1409DB4C0(lpMem: v9);
    }
    v19 = 0;
    v20 = 15;
    LOBYTE(v18) = 0;
    v18 = *(_OWORD *)v8;
    v19 = *(_QWORD *)(v8 + 16);
    v20 = *(_QWORD *)(v8 + 24);
    *(_QWORD *)(v8 + 16) = 0;
    *(_QWORD *)(v8 + 24) = 15;
    *(_BYTE *)v8 = 0;
  }
  if ( v24 > 0xF )
  {
    v10 = (void *)v23[0];
    if ( v24 + 1 < 0x1000 )
    {
LABEL_13:
      sub_1409DB4C0(lpMem: v10);
      goto LABEL_14;
    }
    if ( (unsigned __int64)(v23[0] - *(_QWORD *)(v23[0] - 8LL) - 8LL) <= 0x1F )
    {
      v10 = *(void **)(v23[0] - 8LL);
      goto LABEL_13;
    }
LABEL_18:
    __fastfail(5u);
  }
LABEL_14:
  v22 = a3;
  v23[1] = 0;
  v23[2] = 0;
  LODWORD(v24) = 0;
  v23[0] = &PXEngine::ByteStreamWriter::`vftable';
  if ( sub_1402B4D00(a1: v23, a2: (__int64 *)&v18) != 0
    && (v12 = v21, sub_1401D0820(a1: v23, a2: &v12) != 0)
    && (v21 = v12, v12 = v22, sub_1401D0820(a1: v23, a2: &v12) != 0) )
  {
    v22 = v12;
    v13 = word_141313D70;
    sub_140A255B0(a1: v14, a2: v23);
    v15 = v13;
    sub_140A255B0(a1: v16, a2: v14);
    v17 = 1;
    sub_140A25690(a1: v14);
  }
  else
  {
    v17 = 0;
  }
  sub_140A25690(a1: v23);
  result = sub_1407D6C20(a1, a2: &v15);
  if ( v20 > 0xF )
  {
    v11 = (void *)v18;
    if ( v20 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v18 - *(_QWORD *)(v18 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v11 = *(void **)(v18 - 8);
    }
    return sub_1409DB4C0(lpMem: v11);
  }
  return result;
}