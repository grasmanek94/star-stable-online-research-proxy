__int64 __fastcall sub_1402D4AB0(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  _DWORD *v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // r14
  __int64 v10; // rbx
  unsigned int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // rbx
  __int64 v17; // rax
  unsigned int v18; // ebx
  _DWORD *v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rax
  void **v23; // [rsp+20h] [rbp-89h] BYREF
  int v24; // [rsp+28h] [rbp-81h]
  int v25; // [rsp+2Ch] [rbp-7Dh]
  _QWORD v26[3]; // [rsp+30h] [rbp-79h] BYREF
  int v27; // [rsp+48h] [rbp-61h]
  _BYTE v28[16]; // [rsp+50h] [rbp-59h] BYREF
  __int16 v29; // [rsp+60h] [rbp-49h]
  _BYTE v30[32]; // [rsp+68h] [rbp-41h] BYREF
  __int16 v31; // [rsp+88h] [rbp-21h] BYREF
  _BYTE v32[32]; // [rsp+90h] [rbp-19h] BYREF
  char v33; // [rsp+B0h] [rbp+7h]
  __int16 v34; // [rsp+128h] [rbp+7Fh] BYREF

  result = sub_1405F1EE0(a1: a2);
  v7 = (_DWORD *)result;
  if ( result != 0 )
  {
    if ( *(_BYTE *)(a1 + 538) != 0 && *(_QWORD *)&nExitCode != 0 )
    {
      if ( (*(_BYTE *)(result + 441) & 1) != 0 )
      {
        sub_1402D73E0(a1, a2: result);
      }
      else
      {
        v8 = qword_14138A6F0;
        if ( qword_14138A6F0 == 0 )
        {
          if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
            __debugbreak();
          sub_1409E29B8(a1: 999);
          __debugbreak();
        }
        v9 = sub_1405FD2E0(a1: qword_14138A6F0, a2: v28, a3: "Network");
        if ( (unsigned __int8)sub_1406006A0(a1: v8, a2: v9, a3: 122) != 0 )
        {
          sub_1405F1D60(a1: &v23, a2: *(unsigned int *)(v9 + 12), a3: *(unsigned int *)(v9 + 8));
        }
        else
        {
          v24 = 0;
          v25 = 195948557;
        }
        v23 = &PXEngine::SafeActorPtrAs<CPXNetwork>::`vftable';
        v10 = sub_1405F1EE0(a1: (__int64)&v23);
        if ( v10 != 0 )
        {
          v11 = v7[4];
          if ( v11 <= 0xFFFF )
          {
            v26[1] = 0;
            v26[2] = 0;
            v27 = 0;
            v26[0] = &PXEngine::ByteStreamWriter::`vftable';
            v34 = v11;
            if ( sub_1402D2B10(a1: v26, a2: &v34) != 0 )
            {
              v29 = word_141313C80;
              sub_140A255B0(a1: v30, a2: v26);
              v31 = v29;
              sub_140A255B0(a1: v32, a2: v30);
              v33 = 1;
              sub_140A25690(a1: v30);
            }
            else
            {
              v33 = 0;
            }
            sub_140A25690(a1: v26);
            sub_1407D6C20(a1: v10, a2: &v31);
          }
          else if ( (unsigned __int8)sub_140059D90(a1: off_140F68BB0, a2: "locationId exceed uin16 limits!") != 0 )
          {
            __debugbreak();
          }
        }
      }
    }
    v12 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 176LL))(a1: v7);
    sub_140607FB0(a1: 11, a2: v12);
    if ( a3 != 0 )
      sub_1405F1FB0(a1: a1 + 232);
    if ( (unsigned __int8)sub_1405F1E20(a1: a1 + 232) != 0 )
      return sub_1405F1D80(a1: a1 + 216, a2);
    if ( *(_QWORD *)&nExitCode == 0 )
      goto LABEL_30;
    v13 = sub_1402D5260(a1, a2: v28, a3: (unsigned int)v7[4]);
    v14 = sub_1405F1EE0(a1: v13);
    v15 = qword_14138A6F0;
    if ( qword_14138A6F0 == 0 )
    {
      if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
        __debugbreak();
      sub_1409E29B8(a1: 999);
      __debugbreak();
    }
    v16 = sub_1405FD2E0(a1: qword_14138A6F0, a2: v26, a3: "Network");
    if ( (unsigned __int8)sub_1406006A0(a1: v15, a2: v16, a3: 122) != 0 )
    {
      sub_1405F1D60(a1: &v23, a2: *(unsigned int *)(v16 + 12), a3: *(unsigned int *)(v16 + 8));
    }
    else
    {
      v24 = 0;
      v25 = 195948557;
    }
    v23 = &PXEngine::SafeActorPtrAs<CPXNetwork>::`vftable';
    v17 = sub_1405F1EE0(a1: (__int64)&v23);
    if ( v17 != 0
      && v14 != 0
      && (v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 880LL))(a1: v17),
          (unsigned int)sub_140252EF0(a1: v14) <= v18) )
    {
      v19 = v7 + 40;
    }
    else
    {
LABEL_30:
      v20 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 240LL))(a1: v7);
      if ( v20 == 0 )
        return sub_1405F1D80(a1: a1 + 216, a2);
      v21 = sub_14005D330();
      if ( (unsigned __int8)sub_140645790(a1: v20, a2: 158, a3: v21) == 0 )
        return sub_1405F1D80(a1: a1 + 216, a2);
      v19 = (_DWORD *)(v20 + 160);
    }
    v22 = sub_140080FF0(a1: v19, a2: 0);
    sub_1402D9360(a1, a2: v22);
    return sub_1405F1D80(a1: a1 + 216, a2);
  }
  return result;
}