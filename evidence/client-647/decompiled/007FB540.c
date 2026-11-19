__int64 __fastcall sub_1407FB540(__int64 a1, __int128 *a2, int a3)
{
  __int64 result; // rax
  void *v6; // rcx
  unsigned __int64 v7; // rcx
  char *v8; // rax
  char *v9; // r8
  int v10; // [rsp+20h] [rbp-79h] BYREF
  _QWORD v11[3]; // [rsp+28h] [rbp-71h] BYREF
  int v12; // [rsp+40h] [rbp-59h]
  __int16 v13; // [rsp+48h] [rbp-51h]
  _BYTE v14[32]; // [rsp+50h] [rbp-49h] BYREF
  __int16 v15; // [rsp+70h] [rbp-29h] BYREF
  _BYTE v16[32]; // [rsp+78h] [rbp-21h] BYREF
  char v17; // [rsp+98h] [rbp-1h]
  __int128 *v18; // [rsp+A0h] [rbp+7h]
  int v19; // [rsp+A8h] [rbp+Fh]
  __int128 v20; // [rsp+B0h] [rbp+17h] BYREF
  __int64 v21; // [rsp+C0h] [rbp+27h]
  unsigned __int64 v22; // [rsp+C8h] [rbp+2Fh]

  v18 = a2;
  v20 = 0;
  v21 = 0;
  v22 = 15;
  LOBYTE(v20) = 0;
  v19 = a3;
  if ( &v20 != a2 )
  {
    v20 = *a2;
    v21 = *((_QWORD *)a2 + 2);
    v22 = *((_QWORD *)a2 + 3);
    *((_QWORD *)a2 + 2) = 0;
    *((_QWORD *)a2 + 3) = 15;
    *(_BYTE *)a2 = 0;
  }
  v11[1] = 0;
  v11[2] = 0;
  v12 = 0;
  v11[0] = &PXEngine::ByteStreamWriter::`vftable';
  v10 = a3;
  if ( sub_1401D0820(a1: v11, a2: &v10) != 0 && (v19 = v10, sub_1402B4D00(a1: v11, a2: (__int64 *)&v20) != 0) )
  {
    v13 = word_14131411C;
    sub_140A255B0(a1: v14, a2: v11);
    v15 = v13;
    sub_140A255B0(a1: v16, a2: v14);
    v17 = 1;
    sub_140A25690(a1: v14);
  }
  else
  {
    v17 = 0;
  }
  sub_140A25690(a1: v11);
  result = sub_1407F4180(a1, a2: &v15);
  if ( v22 > 0xF )
  {
    v6 = (void *)v20;
    if ( v22 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v20 - *(_QWORD *)(v20 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v6 = *(void **)(v20 - 8);
    }
    result = sub_1409DB4C0(lpMem: v6);
  }
  *(_QWORD *)&v20 = 19937;
  v21 = 0;
  v22 = 31;
  v7 = *((_QWORD *)a2 + 3);
  if ( v7 > 0xF )
  {
    v8 = *(char **)a2;
    if ( v7 + 1 < 0x1000 )
    {
      v9 = *(char **)a2;
    }
    else
    {
      v9 = *((char **)v8 - 1);
      if ( (unsigned __int64)(v8 - v9 - 8) > 0x1F )
        __fastfail(5u);
    }
    result = sub_1409DB4C0(lpMem: v9);
  }
  *(_BYTE *)a2 = 0;
  *(_QWORD *)a2 = 19937;
  *((_QWORD *)a2 + 2) = 0;
  *((_QWORD *)a2 + 3) = 31;
  return result;
}