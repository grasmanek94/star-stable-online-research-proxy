__int64 __fastcall sub_1407BA940(__int64 a1, float a2, char a3, _QWORD *a4)
{
  __int64 result; // rax
  unsigned int v7; // edi
  _QWORD *v8; // rdx
  char (__fastcall *v9)(__int64, __int64, __int64); // r9
  char (__fastcall *v10)(__int64, __int64, __int64); // r9
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  void *v13; // r8
  _BYTE v14[8]; // [rsp+20h] [rbp-79h] BYREF
  unsigned int v15; // [rsp+28h] [rbp-71h] BYREF
  float v16; // [rsp+30h] [rbp-69h] BYREF
  _QWORD v17[3]; // [rsp+38h] [rbp-61h] BYREF
  int v18; // [rsp+50h] [rbp-49h]
  __int16 v19; // [rsp+58h] [rbp-41h]
  _BYTE v20[32]; // [rsp+60h] [rbp-39h] BYREF
  __int16 v21; // [rsp+80h] [rbp-19h] BYREF
  _BYTE v22[32]; // [rsp+88h] [rbp-11h] BYREF
  char v23; // [rsp+A8h] [rbp+Fh]
  _QWORD *v24; // [rsp+B0h] [rbp+17h]

  v16 = a2;
  v14[0] = a3;
  v24 = a4;
  if ( *(_QWORD *)(a1 + 1504) == 0 )
  {
    result = sub_14001B5A0(a1: a4);
    goto LABEL_25;
  }
  v17[1] = 0;
  v17[2] = 0;
  v18 = 0;
  v17[0] = &PXEngine::ByteStreamWriter::`vftable';
  sub_140A25890(a1: v17, a2: &v16, a3: 4);
  if ( a4[2] >= 0xFFFFFFFF && (unsigned __int8)sub_140059CA0(a1: off_140F64800) != 0 )
    __debugbreak();
  v15 = *((_DWORD *)a4 + 4);
  if ( sub_1401D0820(a1: v17, a2: &v15) == 0 )
    goto LABEL_17;
  v7 = v15;
  if ( v15 > 0x1FA0 )
    goto LABEL_17;
  sub_14005A6C0(a1: a4, a2: v15, a3: 0);
  v8 = a4;
  if ( a4[3] > 0xFu )
    v8 = (_QWORD *)*a4;
  v9 = *(char (__fastcall **)(__int64, __int64, __int64))(v17[0] + 16LL);
  if ( v9 == sub_1401F6C10 )
  {
    sub_140A25890(a1: v17, a2: v8, a3: v7);
  }
  else if ( v9(a1: (__int64)v17, a2: (__int64)v8, a3: v7) == 0 )
  {
    goto LABEL_17;
  }
  v10 = *(char (__fastcall **)(__int64, __int64, __int64))(v17[0] + 16LL);
  if ( v10 != sub_1401F6C10 )
  {
    if ( v10(a1: (__int64)v17, a2: (__int64)v14, a3: 1) != 0 )
      goto LABEL_16;
LABEL_17:
    v23 = 0;
    goto LABEL_18;
  }
  sub_140A25890(a1: v17, a2: v14, a3: 1);
LABEL_16:
  v19 = word_141313C5C;
  sub_140A255B0(a1: v20, a2: v17);
  v21 = v19;
  sub_140A255B0(a1: v22, a2: v20);
  v23 = 1;
  sub_140A25690(a1: v20);
LABEL_18:
  sub_140A25690(a1: v17);
  result = sub_1407D6C20(a1, a2: &v21);
  v11 = a4[3];
  if ( v11 > 0xF )
  {
    v12 = *a4;
    if ( v11 + 1 < 0x1000 )
    {
      v13 = (void *)*a4;
    }
    else
    {
      v13 = *(void **)(v12 - 8);
      if ( (unsigned __int64)(v12 - (_QWORD)v13 - 8) > 0x1F )
        __fastfail(5u);
    }
    result = sub_1409DB4C0(lpMem: v13);
  }
  *(_BYTE *)a4 = 0;
LABEL_25:
  a4[3] = 31;
  a4[2] = 0;
  *a4 = 19937;
  return result;
}