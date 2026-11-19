__int64 __fastcall sub_1400617A0(__int64 a1, const WCHAR *a2)
{
  int v3; // r15d
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  LPWSTR *v8; // r13
  unsigned __int64 v9; // rdi
  _QWORD *v10; // r14
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  char *v13; // rsi
  _QWORD *v14; // rcx
  char *v15; // rbx
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  void *v18; // r8
  void *v19; // rcx
  const WCHAR *v20; // r14
  unsigned int v21; // eax
  __int64 v22; // rsi
  CHAR *v23; // rdx
  LPSTR *v24; // rcx
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  LPSTR *v27; // rcx
  unsigned __int64 v28; // r14
  LPSTR *v29; // rsi
  char *v30; // rsi
  LPSTR v31; // rcx
  unsigned __int8 v33; // [rsp+30h] [rbp-39h]
  LPVOID lpMem[2]; // [rsp+38h] [rbp-31h] BYREF
  _BYTE *v35; // [rsp+48h] [rbp-21h]
  int pNumArgs[4]; // [rsp+50h] [rbp-19h] BYREF
  LPSTR lpMultiByteStr[2]; // [rsp+60h] [rbp-9h] BYREF
  int cbMultiByte[2]; // [rsp+70h] [rbp+7h]
  unsigned __int64 v39; // [rsp+78h] [rbp+Fh]

  *(_QWORD *)pNumArgs = a1;
  v3 = 0;
  v8 = CommandLineToArgvW(lpCmdLine: a2, pNumArgs);
  if ( v8 == nullptr )
  {
    *(_OWORD *)a1 = 0;
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 16) = 0;
    return a1;
  }
  *(_OWORD *)lpMem = 0;
  v35 = nullptr;
  if ( pNumArgs[0] != 0 )
  {
    if ( (unsigned __int64)pNumArgs[0] > 0x7FFFFFFFFFFFFFFLL )
      sub_14001B6A0(a1: v5, a2: v4, a3: v6, a4: v7);
    v9 = 32LL * pNumArgs[0];
    if ( v9 != 0 )
    {
      if ( v9 < 0x1000 )
      {
        v10 = (_QWORD *)sub_1409DB470(a1: v9);
      }
      else
      {
        v11 = v9 + 39;
        if ( v9 + 39 < v9 )
        {
          sub_14001B170(a1: v11, a2: v4, a3: v6, a4: v7);
          __debugbreak();
        }
        v12 = sub_1409DB470(a1: v11);
        if ( v12 == 0 )
          goto LABEL_61;
        v10 = (_QWORD *)((v12 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *(v10 - 1) = v12;
      }
    }
    else
    {
      v10 = nullptr;
    }
    v13 = (char *)lpMem[1];
    v14 = v10;
    v15 = (char *)lpMem[0];
    if ( lpMem[0] != lpMem[1] )
    {
      do
      {
        *(_OWORD *)v14 = 0;
        v14[2] = 0;
        v14[3] = 0;
        *(_OWORD *)v14 = *(_OWORD *)v15;
        *((_OWORD *)v14 + 1) = *((_OWORD *)v15 + 1);
        *((_QWORD *)v15 + 2) = 0;
        *((_QWORD *)v15 + 3) = 15;
        *v15 = 0;
        v14 += 4;
        v15 += 32;
      }
      while ( v15 != v13 );
      v13 = (char *)lpMem[1];
      v15 = (char *)lpMem[0];
    }
    if ( v15 == nullptr )
      goto LABEL_30;
    if ( v15 != v13 )
    {
      do
      {
        v16 = *((_QWORD *)v15 + 3);
        if ( v16 > 0xF )
        {
          v17 = *(_QWORD *)v15;
          if ( v16 + 1 < 0x1000 )
          {
            v18 = *(void **)v15;
          }
          else
          {
            v18 = *(void **)(v17 - 8);
            if ( (unsigned __int64)(v17 - (_QWORD)v18 - 8) > 0x1F )
              goto LABEL_61;
          }
          sub_1409DB4C0(lpMem: v18);
        }
        *(_QWORD *)v15 = 19937;
        *((_QWORD *)v15 + 2) = 0;
        *((_QWORD *)v15 + 3) = 31;
        v15 += 32;
      }
      while ( v15 != v13 );
      v15 = (char *)lpMem[0];
    }
    if ( ((v35 - v15) & 0xFFFFFFFFFFFFFFE0uLL) < 0x1000 )
    {
      v19 = v15;
LABEL_29:
      sub_1409DB4C0(lpMem: v19);
LABEL_30:
      lpMem[0] = v10;
      lpMem[1] = v10;
      v35 = &v10[v9 / 8];
      goto LABEL_31;
    }
    v19 = *((void **)v15 - 1);
    if ( (unsigned __int64)(v15 - (_BYTE *)v19 - 8) <= 0x1F )
      goto LABEL_29;
LABEL_61:
    __fastfail(5u);
  }
LABEL_31:
  if ( pNumArgs[0] > 0 )
  {
    do
    {
      v20 = v8[v3];
      v21 = 2 * sub_14006A8E0(a1: v20);
      if ( v21 != 0 )
      {
        *(_OWORD *)lpMultiByteStr = 0;
        *(_QWORD *)cbMultiByte = 0;
        v39 = 15;
        LOBYTE(lpMultiByteStr[0]) = 0;
        v22 = v21;
        if ( v21 > 0xF )
        {
          sub_140057960(a1: (unsigned int)lpMultiByteStr, a2: v21, a3: v33, a4: v21, a5: 0);
        }
        else
        {
          *(_QWORD *)cbMultiByte = v21;
          sub_140E827B0(a1: lpMultiByteStr, a2: 0, a3: v21);
          *((_BYTE *)lpMultiByteStr + v22) = 0;
        }
        v23 = (CHAR *)lpMultiByteStr;
        if ( v39 > 0xF )
          v23 = lpMultiByteStr[0];
        if ( (unsigned __int8)sub_14006AE00(lpWideCharStr: v20, lpMultiByteStr: v23, cbMultiByte: cbMultiByte[0]) != 0 )
        {
          v24 = lpMultiByteStr;
          if ( v39 > 0xF )
            v24 = (LPSTR *)lpMultiByteStr[0];
          v25 = sub_140069470(a1: v24);
          v26 = *(_QWORD *)cbMultiByte;
          if ( v25 > *(_QWORD *)cbMultiByte )
          {
            v28 = v25 - *(_QWORD *)cbMultiByte;
            if ( v25 - *(_QWORD *)cbMultiByte > v39 - *(_QWORD *)cbMultiByte )
            {
              sub_140057960(
                a1: (unsigned int)lpMultiByteStr,
                a2: v25 - cbMultiByte[0],
                a3: v33,
                a4: v25 - cbMultiByte[0],
                a5: 0);
            }
            else
            {
              *(_QWORD *)cbMultiByte = v25;
              v29 = lpMultiByteStr;
              if ( v39 > 0xF )
                v29 = (LPSTR *)lpMultiByteStr[0];
              v30 = (char *)v29 + v26;
              sub_140E827B0(a1: v30, a2: 0, a3: v25 - v26);
              v30[v28] = 0;
            }
          }
          else
          {
            *(_QWORD *)cbMultiByte = v25;
            v27 = lpMultiByteStr;
            if ( v39 > 0xF )
              v27 = (LPSTR *)lpMultiByteStr[0];
            *((_BYTE *)v27 + v25) = 0;
          }
          if ( lpMem[1] == v35 )
          {
            sub_14005FEF0(a1: lpMem, a2: lpMem[1], a3: lpMultiByteStr);
          }
          else
          {
            sub_140016F80(a1: lpMem[1], a2: lpMultiByteStr);
            lpMem[1] = (char *)lpMem[1] + 32;
          }
        }
        if ( v39 > 0xF )
        {
          v31 = lpMultiByteStr[0];
          if ( v39 + 1 >= 0x1000 )
          {
            if ( (unsigned __int64)&lpMultiByteStr[0][-*((_QWORD *)lpMultiByteStr[0] - 1) - 8] > 0x1F )
              goto LABEL_61;
            v31 = *((LPSTR *)lpMultiByteStr[0] - 1);
          }
          sub_1409DB4C0(lpMem: v31);
        }
      }
      ++v3;
    }
    while ( v3 < pNumArgs[0] );
  }
  LocalFree(hMem: v8);
  sub_1400603F0(a1, a2: lpMem);
  sub_14001B3E0(a1: lpMem);
  return a1;
}