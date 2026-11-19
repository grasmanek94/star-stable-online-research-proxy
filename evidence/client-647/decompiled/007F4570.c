LPVOID __fastcall sub_1407F4570(__int64 a1, char a2, int a3, int a4, LPVOID *a5)
{
  __int64 (__fastcall *v6)(); // rdx
  LPVOID result; // rax
  void *v8; // rcx
  _QWORD v9[3]; // [rsp+20h] [rbp-61h] BYREF
  int v10; // [rsp+38h] [rbp-49h]
  char v11[4]; // [rsp+40h] [rbp-41h] BYREF
  int v12; // [rsp+44h] [rbp-3Dh]
  int v13; // [rsp+48h] [rbp-39h]
  int v14; // [rsp+4Ch] [rbp-35h]
  LPVOID lpMem[2]; // [rsp+50h] [rbp-31h] BYREF
  __int64 v16; // [rsp+60h] [rbp-21h]
  __int16 v17; // [rsp+70h] [rbp-11h]
  _BYTE v18[32]; // [rsp+78h] [rbp-9h] BYREF
  __int16 v19; // [rsp+98h] [rbp+17h] BYREF
  char v20[32]; // [rsp+A0h] [rbp+1Fh] BYREF
  char v21; // [rsp+C0h] [rbp+3Fh]
  int v22; // [rsp+E8h] [rbp+67h] BYREF

  v14 = 0;
  *(_OWORD *)lpMem = 0;
  v16 = 0;
  v11[0] = a2;
  v12 = a4;
  v13 = a3;
  if ( a3 == 2 )
  {
    v14 = 1;
    if ( lpMem != a5 )
      sub_1407AB480(a1: lpMem, a2: *a5, a3: ((_BYTE *)a5[1] - (_BYTE *)*a5) >> 4);
  }
  v9[1] = 0;
  v9[2] = 0;
  v10 = 0;
  v9[0] = &PXEngine::ByteStreamWriter::`vftable';
  sub_140A25890(a1: v9, a2: v11, a3: 1);
  v22 = v12;
  if ( sub_1401D0820(a1: v9, a2: &v22) == 0 )
    goto LABEL_13;
  v12 = v22;
  v6 = *(__int64 (__fastcall **)())(v9[0] + 8LL);
  if ( v6 == sub_14001A530 || ((unsigned __int8 (__fastcall *)(_QWORD *))v6)(a1: v9) == 0 )
  {
    v22 = v13;
    if ( sub_1401D0820(a1: v9, a2: &v22) == 0 )
      goto LABEL_13;
  }
  else
  {
    v22 = 0;
    if ( sub_1401D0820(a1: v9, a2: &v22) == 0 )
      goto LABEL_13;
    v13 = v22;
  }
  v22 = v14;
  if ( sub_1401D0820(a1: v9, a2: &v22) != 0 )
  {
    v14 = v22;
    if ( (unsigned __int8)sub_14051AAA0(a1: v9, a2: lpMem) != 0 )
    {
      v17 = word_141313E04;
      sub_140A255B0(a1: v18, a2: v9);
      v19 = v17;
      sub_140A255B0(a1: v20, a2: v18);
      v21 = 1;
      sub_140A25690(a1: v18);
      goto LABEL_14;
    }
  }
LABEL_13:
  v21 = 0;
LABEL_14:
  sub_140A25690(a1: v9);
  sub_1407F41E0(a1, a2: &v19);
  result = lpMem[0];
  if ( lpMem[0] != nullptr )
  {
    if ( ((v16 - (unsigned __int64)lpMem[0]) & 0xFFFFFFFFFFFFFFF0uLL) < 0x1000 )
    {
      v8 = lpMem[0];
    }
    else
    {
      v8 = *((void **)lpMem[0] - 1);
      if ( (unsigned __int64)((char *)lpMem[0] - (char *)v8 - 8) > 0x1F )
        __fastfail(5u);
    }
    return (LPVOID)sub_1409DB4C0(lpMem: v8);
  }
  return result;
}