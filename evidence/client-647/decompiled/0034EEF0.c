__int64 __fastcall sub_14034EEF0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // r12
  unsigned int v6; // esi
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  void (__fastcall ***v12)(LPVOID, _QWORD); // rbx
  void (__fastcall ***v13)(LPVOID, _QWORD); // r15
  __int64 v14; // r12
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned int v23; // r8d
  __int64 v24; // r14
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  char v28; // r9
  __int64 v29; // rcx
  __int64 v30; // rsi
  int v31; // edi
  __int64 v32; // rax
  _BYTE *v33; // rcx
  char **v35; // rcx
  unsigned int v36; // [rsp+20h] [rbp-79h] BYREF
  void **v37; // [rsp+28h] [rbp-71h] BYREF
  int v38; // [rsp+30h] [rbp-69h]
  int v39; // [rsp+34h] [rbp-65h]
  void **v40; // [rsp+38h] [rbp-61h] BYREF
  int v41; // [rsp+40h] [rbp-59h]
  int v42; // [rsp+44h] [rbp-55h]
  __int64 v43; // [rsp+50h] [rbp-49h] BYREF
  int v44; // [rsp+58h] [rbp-41h]
  int v45; // [rsp+5Ch] [rbp-3Dh]
  __int64 v46; // [rsp+60h] [rbp-39h] BYREF
  __int64 v47; // [rsp+68h] [rbp-31h]
  LPVOID lpMem[2]; // [rsp+70h] [rbp-29h] BYREF
  __int64 v49; // [rsp+80h] [rbp-19h]
  char v50[16]; // [rsp+A0h] [rbp+7h] BYREF
  char v51[64]; // [rsp+B0h] [rbp+17h] BYREF

  v4 = a4;
  v5 = a3;
  v6 = a2;
  if ( a2 != 1301 )
    return sub_1400CC5C0(a1, a2: v6, a3: v5, a4: v4);
  v8 = qword_14138A6F0;
  if ( qword_14138A6F0 == 0 )
    goto LABEL_55;
  v9 = sub_1405FD2E0(a1: qword_14138A6F0, a2: &v46, a3: "Network");
  if ( (unsigned __int8)sub_1406006A0(a1: v8, a2: v9, a3: 122) != 0 )
  {
    sub_1405F1D60(a1: &v37, a2: *(unsigned int *)(v9 + 12), a3: *(unsigned int *)(v9 + 8));
  }
  else
  {
    v38 = 0;
    v39 = 195948557;
  }
  v37 = &PXEngine::SafeActorPtrAs<CPXNetwork>::`vftable';
  if ( sub_1405F1EE0(a1: (__int64)&v37) != 0 )
  {
    sub_1403451B0(a1);
    sub_140344DF0(a1);
    sub_140344670(a1);
    sub_140344850(a1);
    sub_140345930(a1);
    sub_140345750(a1);
    sub_1403460B0(a1);
    sub_140345B10(a1);
    sub_140344FD0(a1);
    sub_140346290(a1);
    sub_140345CF0(a1);
    sub_140345390(a1);
    sub_140344490(a1);
    sub_140344A30(a1);
    sub_140345ED0(a1);
    sub_140344C10(a1);
    sub_1403442B0(a1);
    sub_140346470(a1);
    sub_140345570(a1);
    sub_1403440D0(a1);
    v10 = sub_1405F1EE0(a1: (__int64)&off_141313B68);
    if ( v10 == 0 )
    {
      if ( (unsigned __int8)sub_140059CA0(a1: off_140F4EF78) != 0 )
        __debugbreak();
      sub_1409E29B8(a1: 999);
      goto LABEL_61;
    }
    v36 = *(_DWORD *)(v10 + 1720);
    v11 = sub_1401D5630(a1: &unk_141313D44, a2: lpMem, a3: &v36);
    sub_1407EE6B0(a1: v11);
  }
  if ( *(_QWORD *)(a1 + 240) != 0 )
    return sub_1400CC5C0(a1, a2: v6, a3: v5, a4: v4);
  *(_OWORD *)lpMem = 0;
  v49 = 0;
  if ( qword_14138A6F0 == 0 )
  {
LABEL_61:
    if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  if ( (unsigned __int8)sub_1405F8040(a1: qword_14138A6F0, a2: lpMem, a3: "EnterMyStable_") == 0 )
    goto LABEL_43;
  v12 = (void (__fastcall ***)(LPVOID, _QWORD))lpMem[0];
  v13 = (void (__fastcall ***)(LPVOID, _QWORD))lpMem[1];
  if ( lpMem[0] != lpMem[1] )
  {
    v14 = a1 + 232;
    while ( 1 )
    {
      v15 = sub_1405F1EE0(a1: (__int64)v12);
      if ( v15 != 0 )
      {
        v16 = sub_1400AF100();
        sub_1400C5F00(a1: v15, a2: &v37, a3: v16);
        v17 = qword_14138A6F0;
        if ( qword_14138A6F0 == 0 )
        {
          v35 = off_140F35058;
LABEL_67:
          if ( (unsigned __int8)sub_140059CA0(a1: v35) != 0 )
            __debugbreak();
          sub_1409E29B8(a1: 999);
LABEL_55:
          if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
            __debugbreak();
          sub_1409E29B8(a1: 999);
          __debugbreak();
        }
        v18 = sub_1405FD2E0(a1: qword_14138A6F0, a2: v50, a3: "LocationManager");
        if ( (unsigned __int8)sub_1406006A0(a1: v17, a2: v18, a3: 159) != 0 )
        {
          sub_1405F1D60(a1: &v40, a2: *(unsigned int *)(v18 + 12), a3: *(unsigned int *)(v18 + 8));
        }
        else
        {
          v41 = 0;
          v42 = 195948557;
        }
        v40 = &PXEngine::SafeActorPtrAs<CPXLocationManager>::`vftable';
        v19 = sub_1405F1EE0(a1: (__int64)&v40);
        if ( v19 == 0 )
        {
          v35 = off_140F66F18;
          goto LABEL_67;
        }
        LOBYTE(v20) = 1;
        v21 = sub_1402D5400(a1: v19, a2: v51, a3: &v37, a4: v20);
        v22 = sub_1405F1EE0(a1: v21);
        if ( v22 != 0 )
        {
          v23 = *(_DWORD *)(v22 + 16);
          v24 = *(_QWORD *)v14;
          v25 = *(_QWORD *)(*(_QWORD *)v14 + 8LL);
          v26 = *(_QWORD *)v14;
          v27 = v25;
          v28 = *(_BYTE *)(v25 + 25);
          if ( v28 == 0 )
          {
            do
            {
              if ( *(_DWORD *)(v27 + 32) >= v23 )
              {
                v26 = v27;
                v27 = *(_QWORD *)v27;
              }
              else
              {
                v27 = *(_QWORD *)(v27 + 16);
              }
            }
            while ( *(_BYTE *)(v27 + 25) == 0 );
          }
          if ( *(_BYTE *)(v26 + 25) != 0 || v23 < *(_DWORD *)(v26 + 32) || v26 == v24 )
          {
            v36 = v23;
            v29 = v24;
            if ( v28 != 0 )
            {
              v31 = 0;
              v30 = v25;
            }
            else
            {
              do
              {
                v30 = v25;
                if ( *(_DWORD *)(v25 + 32) >= v23 )
                {
                  v31 = 1;
                  v29 = v25;
                  v25 = *(_QWORD *)v25;
                }
                else
                {
                  v31 = 0;
                  v25 = *(_QWORD *)(v25 + 16);
                }
              }
              while ( *(_BYTE *)(v25 + 25) == 0 );
            }
            if ( *(_BYTE *)(v29 + 25) != 0 || v23 < *(_DWORD *)(v29 + 32) )
            {
              if ( *(_QWORD *)(a1 + 240) == 0x492492492492492LL )
                sub_14005A5D0();
              v46 = a1 + 232;
              v47 = 0;
              v32 = sub_1409DB470(a1: 56);
              *(_DWORD *)(v32 + 32) = v36;
              *(_QWORD *)(v32 + 40) = &PXEngine::SafeActorPtr::`vftable';
              *(_DWORD *)(v32 + 48) = 0;
              *(_DWORD *)(v32 + 52) = 195948557;
              *(_QWORD *)v32 = v24;
              *(_QWORD *)(v32 + 8) = v24;
              *(_QWORD *)(v32 + 16) = v24;
              *(_WORD *)(v32 + 24) = 0;
              v47 = 0;
              v43 = v30;
              v44 = v31;
              v45 = HIDWORD(lpMem[1]);
              v29 = sub_14005A200(a1: a1 + 232, a2: &v43, a3: v32);
            }
            sub_1405F1D80(a1: v29 + 40, a2: v12);
          }
        }
      }
      v12 += 2;
      if ( v12 == v13 )
      {
        v6 = 1301;
        v4 = a4;
        v5 = a3;
LABEL_43:
        v13 = (void (__fastcall ***)(LPVOID, _QWORD))lpMem[1];
        v12 = (void (__fastcall ***)(LPVOID, _QWORD))lpMem[0];
        break;
      }
    }
  }
  if ( v12 != nullptr )
  {
    if ( v12 != v13 )
    {
      do
      {
        (**v12)(a1: v12, a2: 0);
        v12 += 2;
      }
      while ( v12 != v13 );
      v12 = (void (__fastcall ***)(LPVOID, _QWORD))lpMem[0];
    }
    if ( ((v49 - (_QWORD)v12) & 0xFFFFFFFFFFFFFFF0uLL) < 0x1000 )
    {
      v33 = v12;
    }
    else
    {
      v33 = *(v12 - 1);
      if ( (unsigned __int64)((char *)v12 - v33 - 8) > 0x1F )
        __fastfail(5u);
    }
    sub_1409DB4C0(lpMem: v33);
  }
  return sub_1400CC5C0(a1, a2: v6, a3: v5, a4: v4);
}