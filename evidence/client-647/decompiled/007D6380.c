void __fastcall sub_1407D6380(__int64 *a1, int a2, int a3)
{
  char (__fastcall *v4)(__int64, __int64, __int64); // r9
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-29h] BYREF
  int v9; // [rsp+38h] [rbp-11h]
  __int16 v10; // [rsp+40h] [rbp-9h]
  _BYTE v11[32]; // [rsp+48h] [rbp-1h] BYREF
  __int16 v12; // [rsp+68h] [rbp+1Fh] BYREF
  _BYTE v13[32]; // [rsp+70h] [rbp+27h] BYREF
  char v14; // [rsp+90h] [rbp+47h]
  int v15; // [rsp+B0h] [rbp+67h] BYREF
  int v16; // [rsp+C8h] [rbp+7Fh]
  bool v17; // [rsp+CCh] [rbp+83h] BYREF

  if ( *((_BYTE *)a1 + 3017) == 0 )
  {
    v16 = a3;
    v17 = a2 != 0;
    v8[1] = 0;
    v8[2] = 0;
    v9 = 0;
    v8[0] = &PXEngine::ByteStreamWriter::`vftable';
    v15 = a3;
    if ( sub_1401D0820(a1: v8, a2: &v15) != 0 )
    {
      v16 = v15;
      v4 = *(char (__fastcall **)(__int64, __int64, __int64))(v8[0] + 16LL);
      if ( v4 == sub_1401F6C10 )
      {
        sub_140A25890(a1: v8, a2: &v17, a3: 1);
LABEL_6:
        v10 = word_141313D48;
        sub_140A255B0(a1: v11, a2: v8);
        v12 = v10;
        sub_140A255B0(a1: v13, a2: v11);
        v14 = 1;
        sub_140A25690(a1: v11);
LABEL_8:
        sub_140A25690(a1: v8);
        sub_1407D6C20(a1, a2: &v12);
        *((_BYTE *)a1 + 3017) = 1;
        v5 = *a1;
        v7 = sub_1400FBAF0(a1: v6);
        (*(void (__fastcall **)(__int64 *, __int64, _QWORD, __int64))(v5 + 776))(a1, a2: 122137, a3: 0, a4: v7);
        return;
      }
      if ( v4(a1: (__int64)v8, a2: (__int64)&v17, a3: 1) != 0 )
        goto LABEL_6;
    }
    v14 = 0;
    goto LABEL_8;
  }
}