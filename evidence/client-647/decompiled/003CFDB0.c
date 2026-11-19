char __fastcall sub_1403CFDB0(__int64 *a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  char v13; // r15
  __int64 v14; // rcx
  char (__fastcall *v15)(__int64, __int64, __int64); // r9
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rax
  _QWORD v22[2]; // [rsp+20h] [rbp-89h] BYREF
  int v23; // [rsp+30h] [rbp-79h]
  __int64 v24; // [rsp+38h] [rbp-71h]
  unsigned int v25; // [rsp+40h] [rbp-69h]
  _BYTE v26[4]; // [rsp+44h] [rbp-65h] BYREF
  _QWORD v27[3]; // [rsp+48h] [rbp-61h] BYREF
  int v28; // [rsp+60h] [rbp-49h]
  __int16 v29; // [rsp+68h] [rbp-41h]
  _BYTE v30[32]; // [rsp+70h] [rbp-39h] BYREF
  __int16 v31; // [rsp+90h] [rbp-19h] BYREF
  char v32[32]; // [rsp+98h] [rbp-11h] BYREF
  char v33; // [rsp+B8h] [rbp+Fh]

  v8 = sub_1405F1EE0(a1: a2);
  v9 = v8;
  if ( v8 == 0 )
    return 0;
  v10 = sub_1403D07C0(a1, a2: v22, a3: *(unsigned int *)(v8 + 152));
  if ( sub_1405F1EE0(a1: v10) == 0 )
    return 0;
  sub_1405F1D80(a1: a1 + 21, a2);
  v11 = sub_1405F1EE0(a1: (__int64)(a1 + 27));
  if ( v11 == 0 )
  {
    if ( (unsigned __int8)sub_140059CA0(a1: off_140F8A7A8) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  if ( v11 != v9 + 80 )
  {
    if ( *(_QWORD *)(v9 + 400) <= 0xFu )
      v12 = v9 + 376;
    else
      v12 = *(_QWORD *)(v9 + 376);
    sub_14000D680(a1: v11 + 296, a2: v12, a3: *(_QWORD *)(v9 + 392));
  }
  sub_1403624C0(a1: v9, a2: a3);
  v13 = sub_140363060(a1: v9);
  sub_1403D0B10(a1, a2: v9 + 376);
  if ( *(_QWORD *)&nExitCode != 0 )
  {
    v23 = *(_DWORD *)(v9 + 152);
    v24 = *(_QWORD *)(v9 + 160);
    v25 = a3 - 1;
    v26[0] = v13;
    v27[1] = 0;
    v27[2] = 0;
    v28 = 0;
    v27[0] = &PXEngine::ByteStreamWriter::`vftable';
    LODWORD(v22[0]) = v23;
    if ( sub_1401D0820(a1: v27, a2: v22) != 0 )
    {
      v23 = v22[0];
      v22[0] = v24;
      if ( (unsigned __int8)sub_1402AF380(a1: v27, a2: v22) != 0 )
      {
        v24 = v22[0];
        LODWORD(v22[0]) = v25;
        if ( sub_1401D0820(a1: v27, a2: v22) != 0 )
        {
          v25 = v22[0];
          v15 = *(char (__fastcall **)(__int64, __int64, __int64))(v27[0] + 16LL);
          if ( v15 == sub_1401F6C10 )
          {
            sub_140A25890(a1: v27, a2: v26, a3: 1);
LABEL_16:
            v29 = word_141313D18;
            sub_140A255B0(a1: v30, a2: v27);
            v31 = v29;
            sub_140A255B0(a1: v32, a2: v30);
            v33 = 1;
            sub_140A25690(a1: v30);
LABEL_18:
            sub_140A25690(a1: v27);
            sub_1407EE6B0(a1: &v31);
            goto LABEL_19;
          }
          if ( v15(a1: (__int64)v27, a2: (__int64)v26, a3: 1) != 0 )
            goto LABEL_16;
        }
      }
    }
    v33 = 0;
    goto LABEL_18;
  }
LABEL_19:
  if ( a4 != 0 )
  {
    v16 = *a1;
    v17 = sub_1400FBAF0(a1: v14);
    (*(void (__fastcall **)(__int64 *, __int64, __int64, __int64))(v16 + 776))(a1, a2: 247003, a3: v9, a4: v17);
    if ( v13 != 0 )
    {
      v19 = *a1;
      v20 = sub_1400FBAF0(a1: v18);
      (*(void (__fastcall **)(__int64 *, __int64, __int64, __int64))(v19 + 776))(a1, a2: 247002, a3: v9, a4: v20);
    }
    sub_1405F1D40(a1: v22, a2);
    v22[0] = &PXEngine::SafeActorPtrAs<CPXCollection>::`vftable';
    ((void (__fastcall *)(__int64 *, _QWORD *, _QWORD, _QWORD))sub_1403D0270)(a1, a2: v22, a3, a4: 0);
  }
  return 1;
}