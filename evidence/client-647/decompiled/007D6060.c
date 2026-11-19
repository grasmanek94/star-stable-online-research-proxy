LPVOID __fastcall sub_1407D6060(__int64 a1, int a2, int a3, int a4, int a5, LPVOID *a6, int a7)
{
  int v7; // ecx
  LPVOID result; // rax
  void *v9; // rcx
  _QWORD v10[3]; // [rsp+20h] [rbp-71h] BYREF
  int v11; // [rsp+38h] [rbp-59h]
  int v12; // [rsp+40h] [rbp-51h]
  int v13; // [rsp+44h] [rbp-4Dh]
  int v14; // [rsp+48h] [rbp-49h]
  int v15; // [rsp+4Ch] [rbp-45h]
  int v16; // [rsp+50h] [rbp-41h] BYREF
  LPVOID lpMem[2]; // [rsp+58h] [rbp-39h] BYREF
  __int64 v18; // [rsp+68h] [rbp-29h]
  __int16 v19; // [rsp+70h] [rbp-21h]
  _BYTE v20[32]; // [rsp+78h] [rbp-19h] BYREF
  __int16 v21; // [rsp+98h] [rbp+7h] BYREF
  _BYTE v22[32]; // [rsp+A0h] [rbp+Fh] BYREF
  char v23; // [rsp+C0h] [rbp+2Fh]

  *(_OWORD *)lpMem = 0;
  v18 = 0;
  v7 = a7;
  v12 = a7;
  v13 = a2;
  v14 = a3;
  v15 = a4;
  v16 = a5;
  if ( lpMem != a6 )
  {
    sub_1407AB480(a1: lpMem, a2: *a6, a3: ((_BYTE *)a6[1] - (_BYTE *)*a6) >> 4);
    v7 = v12;
  }
  v10[1] = 0;
  v10[2] = 0;
  v11 = 0;
  v10[0] = &PXEngine::ByteStreamWriter::`vftable';
  a6 = (LPVOID *)v10;
  a7 = v7;
  if ( sub_1401D0820(a1: v10, a2: &a7) != 0
    && (v12 = a7, a7 = v13, sub_1401D0820(a1: v10, a2: &a7) != 0)
    && (v13 = a7, a7 = v14, sub_1401D0820(a1: v10, a2: &a7) != 0)
    && (v14 = a7, a7 = v15, sub_1401D0820(a1: v10, a2: &a7) != 0)
    && (v15 = a7, (unsigned __int8)sub_1402B7CD0(a1: &a6, a2: &v16) != 0)
    && (unsigned __int8)sub_14051AAA0(a1: v10, a2: lpMem) != 0 )
  {
    v19 = word_141313DBC;
    sub_140A255B0(a1: v20, a2: v10);
    v21 = v19;
    sub_140A255B0(a1: v22, a2: v20);
    v23 = 1;
    sub_140A25690(a1: v20);
  }
  else
  {
    v23 = 0;
  }
  sub_140A25690(a1: v10);
  sub_1407EE6B0(a1: &v21);
  result = lpMem[0];
  if ( lpMem[0] != nullptr )
  {
    if ( ((v18 - (unsigned __int64)lpMem[0]) & 0xFFFFFFFFFFFFFFF0uLL) < 0x1000 )
    {
      v9 = lpMem[0];
    }
    else
    {
      v9 = *((void **)lpMem[0] - 1);
      if ( (unsigned __int64)((char *)lpMem[0] - (char *)v9 - 8) > 0x1F )
        __fastfail(5u);
    }
    return (LPVOID)sub_1409DB4C0(lpMem: v9);
  }
  return result;
}