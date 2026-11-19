__int64 __fastcall sub_1402C2B40(_QWORD *a1, LPVOID a2, __int64 a3)
{
  unsigned int v4; // ebx
  char *v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rdi
  int v10; // ebx
  bool v11; // al
  __int64 v12; // rsi
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rdi
  int v16; // ebx
  bool v17; // al
  char *v18; // rbx
  __int64 result; // rax
  void *v20; // rcx
  char *v21; // rdi
  __int64 v22; // r9
  int v23; // r12d
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // r8
  __int64 v27; // r13
  unsigned __int64 v28; // r14
  unsigned __int64 v29; // r14
  unsigned __int64 v30; // rsi
  __int64 v31; // rax
  unsigned __int64 v32; // r15
  char *v33; // rdx
  unsigned __int64 v34; // rcx
  signed __int64 v35; // r8
  void *v36; // rax
  _QWORD *v37; // rbx
  __int64 v38; // rdi
  __int64 v39; // rbx
  __int64 v40; // rbx
  char (__fastcall *v41)(__int64, __int64, __int64); // r9
  unsigned int v42; // edi
  void *v43; // rcx
  LPVOID lpMem[2]; // [rsp+20h] [rbp-B9h]
  unsigned __int64 v45; // [rsp+30h] [rbp-A9h]
  LPVOID v46[2]; // [rsp+38h] [rbp-A1h] BYREF
  LPVOID v47; // [rsp+48h] [rbp-91h]
  void **v48; // [rsp+50h] [rbp-89h] BYREF
  int v49; // [rsp+58h] [rbp-81h]
  int v50; // [rsp+5Ch] [rbp-7Dh]
  _QWORD v51[3]; // [rsp+60h] [rbp-79h] BYREF
  int v52; // [rsp+78h] [rbp-61h]
  _QWORD v53[2]; // [rsp+80h] [rbp-59h] BYREF
  __int64 v54; // [rsp+90h] [rbp-49h]
  bool v55[8]; // [rsp+98h] [rbp-41h] BYREF
  __int16 v56; // [rsp+A0h] [rbp-39h]
  _BYTE v57[32]; // [rsp+A8h] [rbp-31h] BYREF
  __int16 v58; // [rsp+C8h] [rbp-11h] BYREF
  char v59[32]; // [rsp+D0h] [rbp-9h] BYREF
  char v60; // [rsp+F0h] [rbp+17h]
  char *v61; // [rsp+140h] [rbp+67h] BYREF
  int v62; // [rsp+148h] [rbp+6Fh]

  v62 = (int)a2;
  v4 = 0;
  LODWORD(v61) = 0;
  *(_OWORD *)v46 = 0;
  v47 = nullptr;
  *(_OWORD *)lpMem = 0;
  v5 = nullptr;
  v45 = 0;
  v6 = a1[43];
  v7 = a1[44];
  if ( v6 != v7 )
  {
    do
    {
      sub_1405F1D40(a1: &v48, a2: v6);
      v48 = &PXEngine::SafeActorPtrAs<CPXQuest>::`vftable';
      v8 = sub_1405F1EE0(a1: (__int64)&v48);
      v9 = v8;
      v61 = (char *)v8;
      if ( v8 != 0 )
      {
        v10 = v4 | 1;
        sub_1405F1D40(a1: v51, a2: v8 + 648);
        v51[0] = &PXEngine::SafeActorPtrAs<CPXQuest>::`vftable';
        v11 = (unsigned __int8)sub_1405F1E20(a1: v51) != 0 && (unsigned int)sub_14026D9C0(a1: v9) == 0;
        v4 = v10 & 0xFFFFFFFE;
        if ( v11 )
        {
          a2 = v46[1];
          if ( v46[1] == v47 )
          {
            sub_140023440(a1: v46, a2: v46[1], a3: &v61);
          }
          else
          {
            *(_QWORD *)v46[1] = v9;
            v46[1] = (char *)v46[1] + 8;
          }
        }
      }
      v6 += 16;
    }
    while ( v6 != v7 );
    v5 = nullptr;
  }
  v12 = a1[55];
  v13 = a1[56];
  if ( v12 != v13 )
  {
    do
    {
      sub_1405F1D40(a1: v51, a2: v12);
      v51[0] = &PXEngine::SafeActorPtrAs<CPXQuest>::`vftable';
      v14 = sub_1405F1EE0(a1: (__int64)v51);
      v15 = v14;
      v61 = (char *)v14;
      if ( v14 != 0 )
      {
        v16 = v4 | 2;
        sub_1405F1D40(a1: &v48, a2: v14 + 648);
        v48 = &PXEngine::SafeActorPtrAs<CPXQuest>::`vftable';
        v17 = (unsigned __int8)sub_1405F1E20(a1: &v48) != 0 && (unsigned int)sub_14026D9C0(a1: v15) == 0;
        v4 = v16 & 0xFFFFFFFD;
        if ( v17 )
        {
          a2 = v46[1];
          if ( v46[1] == v47 )
          {
            sub_140023440(a1: v46, a2: v46[1], a3: &v61);
          }
          else
          {
            *(_QWORD *)v46[1] = v15;
            v46[1] = (char *)v46[1] + 8;
          }
        }
      }
      v12 += 16;
    }
    while ( v12 != v13 );
    v5 = nullptr;
  }
  v18 = (char *)v46[0];
  if ( v46[0] == v46[1] )
  {
    result = 0;
    if ( v46[0] != nullptr )
    {
      if ( (unsigned __int64)(8 * ((signed __int64)((__int64)v47 - (unsigned __int64)v46[0]) >> 3)) < 0x1000 )
      {
        return sub_1409DB4C0(lpMem: v46[0]);
      }
      else
      {
        v20 = *((void **)v46[0] - 1);
        if ( (unsigned __int64)((char *)v46[0] - (char *)v20 - 8) > 0x1F )
          __fastfail(5u);
        return sub_1409DB4C0(lpMem: v20);
      }
    }
    return result;
  }
  v61 = (char *)v46[1];
  v21 = nullptr;
  v22 = 0x3FFFFFFFFFFFFFFFLL;
  do
  {
    if ( *(_QWORD *)v18 == 0 )
      sub_14005A760(a1: v5, a2, a3, a4: 0x3FFFFFFFFFFFFFFFLL);
    v23 = *(_DWORD *)(*(_QWORD *)v18 + 16LL);
    if ( v21 == v5 )
    {
      v24 = (v21 - (char *)lpMem[0]) >> 2;
      if ( v24 == 0x3FFFFFFFFFFFFFFFLL )
        sub_14001B6A0(a1: v5, a2: 0x3FFFFFFFFFFFFFFFLL, a3, a4: 0x3FFFFFFFFFFFFFFFLL);
      v25 = (v5 - (char *)lpMem[0]) >> 2;
      v26 = v25 >> 1;
      if ( v25 > 0x3FFFFFFFFFFFFFFFLL - (v25 >> 1) )
        goto LABEL_91;
      v27 = v24 + 1;
      v28 = v24 + 1;
      if ( v26 + v25 >= v24 + 1 )
        v28 = v26 + v25;
      if ( v28 > 0x3FFFFFFFFFFFFFFFLL )
        goto LABEL_91;
      v29 = 4 * v28;
      if ( v29 != 0 )
      {
        if ( v29 < 0x1000 )
        {
          v30 = sub_1409DB470(a1: v29);
        }
        else
        {
          v25 = v29 + 39;
          if ( v29 + 39 < v29 )
            goto LABEL_91;
          v31 = sub_1409DB470(a1: v25);
          if ( v31 == 0 )
LABEL_81:
            __fastfail(5u);
          v30 = (v31 + 39) & 0xFFFFFFFFFFFFFFE0uLL;
          *(_QWORD *)(v30 - 8) = v31;
        }
      }
      else
      {
        v30 = 0;
      }
      v32 = (v21 - (char *)lpMem[0]) & 0xFFFFFFFFFFFFFFFCuLL;
      *(_DWORD *)(v30 + v32) = v23;
      v33 = (char *)lpMem[0];
      v34 = v30;
      if ( v21 == lpMem[1] )
      {
        v35 = (char *)lpMem[1] - (char *)lpMem[0];
      }
      else
      {
        sub_140E82100(a1: v30, a2: lpMem[0], a3: v21 - (char *)lpMem[0]);
        v35 = (char *)lpMem[1] - (char *)v21;
        v34 = v30 + v32 + 4;
        v33 = v21;
      }
      sub_140E82100(a1: v34, a2: v33, a3: v35);
      if ( lpMem[0] != nullptr )
      {
        if ( (unsigned __int64)(4 * ((__int64)(v45 - (unsigned __int64)lpMem[0]) >> 2)) < 0x1000 )
        {
          v36 = lpMem[0];
        }
        else
        {
          v36 = *((void **)lpMem[0] - 1);
          if ( (unsigned __int64)((char *)lpMem[0] - (char *)v36 - 8) > 0x1F )
            goto LABEL_81;
        }
        sub_1409DB4C0(lpMem: v36);
      }
      lpMem[0] = (LPVOID)v30;
      v21 = (char *)(v30 + 4 * v27);
      v5 = (char *)(v29 + v30);
      v45 = v29 + v30;
      v22 = 0x3FFFFFFFFFFFFFFFLL;
    }
    else
    {
      *(_DWORD *)v21 = v23;
      v21 = (char *)lpMem[1] + 4;
      v5 = (char *)v45;
    }
    lpMem[1] = v21;
    v18 += 8;
  }
  while ( v18 != v61 );
  v37 = v46[0];
  if ( *(_QWORD *)&nExitCode != 0 )
  {
    v53[0] = lpMem[0];
    v53[1] = v21;
    v54 = (__int64)v5;
    lpMem[0] = nullptr;
    v45 = 0;
    v55[0] = v62 != 0;
    v38 = qword_14138A6F0;
    if ( qword_14138A6F0 != 0 )
    {
      v39 = sub_1405FD2E0(a1: qword_14138A6F0, a2: v51, a3: "Network");
      if ( (unsigned __int8)sub_1406006A0(a1: v38, a2: v39, a3: 122) != 0 )
      {
        sub_1405F1D60(a1: &v48, a2: *(unsigned int *)(v39 + 12), a3: *(unsigned int *)(v39 + 8));
      }
      else
      {
        v49 = 0;
        v50 = 195948557;
      }
      v48 = &PXEngine::SafeActorPtrAs<CPXNetwork>::`vftable';
      v40 = sub_1405F1EE0(a1: (__int64)&v48);
      if ( v40 != 0 )
      {
        v51[1] = 0;
        v51[2] = 0;
        v52 = 0;
        v51[0] = &PXEngine::ByteStreamWriter::`vftable';
        if ( (unsigned __int8)sub_1402B8720(a1: v51, a2: v53) != 0 )
        {
          v41 = *(char (__fastcall **)(__int64, __int64, __int64))(v51[0] + 16LL);
          if ( v41 == sub_1401F6C10 )
          {
            sub_140A25890(a1: v51, a2: v55, a3: 1);
LABEL_69:
            v56 = word_141313C94;
            sub_140A255B0(a1: v57, a2: v51);
            v58 = v56;
            sub_140A255B0(a1: v59, a2: v57);
            v60 = 1;
            sub_140A25690(a1: v57);
LABEL_71:
            sub_140A25690(a1: v51);
            sub_1407D6C20(a1: v40, a2: &v58);
            sub_14001B290(a1: v53);
            v54 = 19937;
            v37 = v46[0];
            v5 = nullptr;
            goto LABEL_72;
          }
          if ( v41(a1: (__int64)v51, a2: (__int64)v55, a3: 1) != 0 )
            goto LABEL_69;
        }
        v60 = 0;
        goto LABEL_71;
      }
      if ( (unsigned __int8)sub_140059CA0(a1: off_140F65520) != 0 )
        __debugbreak();
      sub_1409E29B8(a1: 999);
LABEL_97:
      if ( (unsigned __int8)sub_140059CA0(a1: off_140F65578) != 0 )
        __debugbreak();
      sub_1409E29B8(a1: 999);
    }
    if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
LABEL_91:
    sub_14001B170(a1: v25, a2: v24, a3: v26, a4: v22);
    __debugbreak();
  }
LABEL_72:
  v42 = 0;
  if ( ((char *)v46[1] - (char *)v37) >> 3 != 0 )
  {
    do
    {
      if ( v42 >= (unsigned __int64)(((char *)v46[1] - (char *)v37) >> 3) )
        goto LABEL_81;
      if ( v37[v42] == 0 )
        goto LABEL_97;
      sub_1402839A0();
      ++v42;
      v37 = v46[0];
    }
    while ( v42 < (unsigned __int64)(((char *)v46[1] - (char *)v46[0]) >> 3) );
    v5 = (char *)v45;
  }
  if ( lpMem[0] != nullptr )
  {
    if ( (unsigned __int64)(4 * ((v5 - (char *)lpMem[0]) >> 2)) < 0x1000 )
    {
      v43 = lpMem[0];
    }
    else
    {
      v43 = *((void **)lpMem[0] - 1);
      if ( (unsigned __int64)((char *)lpMem[0] - (char *)v43 - 8) > 0x1F )
        __fastfail(5u);
    }
    sub_1409DB4C0(lpMem: v43);
  }
  return sub_14002ADC0(a1: v46);
}