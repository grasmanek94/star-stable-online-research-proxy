__int64 __fastcall sub_1407FB730(__int64 a1, __int64 a2, int a3, __int128 *a4)
{
  int v6; // ecx
  __int64 result; // rax
  void *v8; // rcx
  unsigned __int64 v9; // rcx
  char *v10; // rax
  char *v11; // r8
  int v12; // [rsp+20h] [rbp-79h] BYREF
  _QWORD v13[3]; // [rsp+28h] [rbp-71h] BYREF
  int v14; // [rsp+40h] [rbp-59h]
  __int16 v15; // [rsp+48h] [rbp-51h]
  _BYTE v16[32]; // [rsp+50h] [rbp-49h] BYREF
  __int16 v17; // [rsp+70h] [rbp-29h] BYREF
  _BYTE v18[32]; // [rsp+78h] [rbp-21h] BYREF
  char v19; // [rsp+98h] [rbp-1h]
  __int128 *v20; // [rsp+A0h] [rbp+7h]
  int v21; // [rsp+A8h] [rbp+Fh]
  int v22; // [rsp+ACh] [rbp+13h]
  int v23; // [rsp+B0h] [rbp+17h]
  __int128 v24; // [rsp+B8h] [rbp+1Fh] BYREF
  __int64 v25; // [rsp+C8h] [rbp+2Fh]
  unsigned __int64 v26; // [rsp+D0h] [rbp+37h]

  v20 = a4;
  v24 = 0;
  v25 = 0;
  v26 = 15;
  LOBYTE(v24) = 0;
  v6 = *(_DWORD *)(a1 + 160);
  v21 = v6;
  v22 = *(_DWORD *)(a2 + 104);
  v23 = a3;
  if ( &v24 != a4 )
  {
    v24 = *a4;
    v25 = *((_QWORD *)a4 + 2);
    v26 = *((_QWORD *)a4 + 3);
    *((_QWORD *)a4 + 2) = 0;
    *((_QWORD *)a4 + 3) = 15;
    *(_BYTE *)a4 = 0;
  }
  v13[1] = 0;
  v13[2] = 0;
  v14 = 0;
  v13[0] = &PXEngine::ByteStreamWriter::`vftable';
  v12 = v6;
  if ( sub_1401D0820(a1: v13, a2: &v12) != 0
    && (v21 = v12, v12 = v22, sub_1401D0820(a1: v13, a2: &v12) != 0)
    && (v22 = v12, v12 = v23, sub_1401D0820(a1: v13, a2: &v12) != 0)
    && (v23 = v12, sub_1402B4D00(a1: v13, a2: (__int64 *)&v24) != 0) )
  {
    v15 = word_141314130;
    sub_140A255B0(a1: v16, a2: v13);
    v17 = v15;
    sub_140A255B0(a1: v18, a2: v16);
    v19 = 1;
    sub_140A25690(a1: v16);
  }
  else
  {
    v19 = 0;
  }
  sub_140A25690(a1: v13);
  result = sub_1407F4180(a1, a2: &v17);
  if ( v26 > 0xF )
  {
    v8 = (void *)v24;
    if ( v26 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v24 - *(_QWORD *)(v24 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v8 = *(void **)(v24 - 8);
    }
    result = sub_1409DB4C0(lpMem: v8);
  }
  *(_QWORD *)&v24 = 19937;
  v25 = 0;
  v26 = 31;
  v9 = *((_QWORD *)a4 + 3);
  if ( v9 > 0xF )
  {
    v10 = *(char **)a4;
    if ( v9 + 1 < 0x1000 )
    {
      v11 = *(char **)a4;
    }
    else
    {
      v11 = *((char **)v10 - 1);
      if ( (unsigned __int64)(v10 - v11 - 8) > 0x1F )
        __fastfail(5u);
    }
    result = sub_1409DB4C0(lpMem: v11);
  }
  *(_BYTE *)a4 = 0;
  *(_QWORD *)a4 = 19937;
  *((_QWORD *)a4 + 2) = 0;
  *((_QWORD *)a4 + 3) = 31;
  return result;
}