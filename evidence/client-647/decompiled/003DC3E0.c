void __fastcall sub_1403DC3E0(__int64 a1)
{
  unsigned int v2; // eax
  __int64 v3; // rdi
  __int64 v4; // rsi
  char (__fastcall *v5)(__int64, __int64, __int64); // r9
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rax
  unsigned int v12; // edi
  unsigned int v13; // edi
  unsigned int v14; // edx
  unsigned __int64 v15; // r8
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  int v18; // r9d
  __int64 v19; // rdx
  _QWORD v20[3]; // [rsp+30h] [rbp-59h] BYREF
  int v21; // [rsp+48h] [rbp-41h]
  void **v22; // [rsp+50h] [rbp-39h] BYREF
  int v23; // [rsp+58h] [rbp-31h]
  int v24; // [rsp+5Ch] [rbp-2Dh]
  __int16 v25; // [rsp+60h] [rbp-29h]
  _BYTE v26[32]; // [rsp+68h] [rbp-21h] BYREF
  __int16 v27; // [rsp+88h] [rbp-1h] BYREF
  char v28[32]; // [rsp+90h] [rbp+7h] BYREF
  char v29; // [rsp+B0h] [rbp+27h]
  unsigned int v30; // [rsp+F0h] [rbp+67h] BYREF
  float v31; // [rsp+F8h] [rbp+6Fh] BYREF

  if ( *(_BYTE *)(a1 + 293) == 0 )
  {
    v2 = *(_DWORD *)(a1 + 268);
    if ( v2 != 0 )
    {
      *(_BYTE *)(a1 + 293) = 1;
      *(_QWORD *)(a1 + 256) = 0;
      *(_DWORD *)(a1 + 264) = 0;
      if ( *(_BYTE *)(a1 + 295) != 0 )
      {
        if ( *(_BYTE *)(a1 + 292) == 0 )
        {
          v3 = *(_QWORD *)(a1 + 160);
          v4 = *(_QWORD *)(a1 + 152);
          v20[1] = 0;
          v20[2] = 0;
          v21 = 0;
          v20[0] = &PXEngine::ByteStreamWriter::`vftable';
          v30 = v2;
          if ( sub_1401D0820(a1: v20, a2: &v30) != 0 )
          {
            *(_DWORD *)(a1 + 268) = v30;
            v5 = *(char (__fastcall **)(__int64, __int64, __int64))(v20[0] + 16LL);
            v6 = a1 + 294;
            if ( v5 == sub_1401F6C10 )
            {
              sub_140A25890(a1: v20, a2: v6, a3: 1);
            }
            else if ( v5(a1: (__int64)v20, a2: v6, a3: 1) == 0 )
            {
              goto LABEL_11;
            }
            v30 = (v3 - v4) / 120;
            if ( sub_1401D0820(a1: v20, a2: &v30) != 0 )
            {
              v25 = word_141313D20;
              sub_140A255B0(a1: v26, a2: v20);
              v27 = v25;
              sub_140A255B0(a1: v28, a2: v26);
              v29 = 1;
              sub_140A25690(a1: v26);
LABEL_12:
              sub_140A25690(a1: v20);
              sub_1407EE6B0(a1: &v27);
              return;
            }
          }
LABEL_11:
          v29 = 0;
          goto LABEL_12;
        }
      }
      else
      {
        v7 = qword_14138A6F0;
        if ( qword_14138A6F0 == 0 )
        {
          if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
            __debugbreak();
          sub_1409E29B8(a1: 999);
          __debugbreak();
        }
        v8 = sub_1405FD2E0(a1: qword_14138A6F0, a2: v20, a3: "Network");
        if ( (unsigned __int8)sub_1406006A0(a1: v7, a2: v8, a3: 122) != 0 )
        {
          sub_1405F1D60(a1: &v22, a2: *(unsigned int *)(v8 + 12), a3: *(unsigned int *)(v8 + 8));
        }
        else
        {
          v23 = 0;
          v24 = 195948557;
        }
        v22 = &PXEngine::SafeActorPtrAs<CPXNetwork>::`vftable';
        v9 = sub_1405F1EE0(a1: (__int64)&v22);
        if ( v9 == 0 )
        {
          if ( (unsigned __int8)sub_140059CA0(a1: off_140F8BB10) != 0 )
            __debugbreak();
          sub_1409E29B8(a1: 999);
          __debugbreak();
        }
        if ( (unsigned int)sub_1407BA090(a1: v9, a2: (unsigned int)&v31, a3: 0, a4: 0, a5: 0) == 0 )
        {
          *(_WORD *)(a1 + 292) = 0;
          return;
        }
        *(_DWORD *)(a1 + 276) = (int)(float)(v31 * 1000.0);
        if ( *(_BYTE *)(a1 + 294) != 0 )
        {
          v10 = (*(_QWORD *)(a1 + 160) - *(_QWORD *)(a1 + 152)) / 120LL;
          v11 = *(_QWORD *)(a1 + 176);
          if ( v11 != *(_QWORD *)(a1 + 184) )
            *(_QWORD *)(a1 + 184) = v11;
          v30 = 0;
          if ( (_DWORD)v10 != 0 )
          {
            v12 = 0;
            do
            {
              sub_1400A9840(a1: a1 + 176, a2: &v30);
              v30 = ++v12;
            }
            while ( v12 < (unsigned int)v10 );
            v13 = 0;
            do
            {
              v14 = (unsigned int)sub_1409E29C4() % (unsigned int)v10;
              if ( v14 != v13 )
              {
                v15 = v14;
                v16 = *(_QWORD *)(a1 + 176);
                v17 = (*(_QWORD *)(a1 + 184) - v16) >> 2;
                if ( v15 >= v17
                  || v13 >= v17
                  || (v18 = *(_DWORD *)(v16 + 4 * v15),
                      *(_DWORD *)(v16 + 4 * v15) = *(_DWORD *)(v16 + 4LL * v13),
                      v19 = *(_QWORD *)(a1 + 176),
                      v13 >= (unsigned __int64)((*(_QWORD *)(a1 + 184) - v19) >> 2)) )
                {
                  __fastfail(5u);
                }
                *(_DWORD *)(v19 + 4LL * v13) = v18;
              }
              ++v13;
            }
            while ( v13 < (unsigned int)v10 );
          }
        }
        *(_BYTE *)(a1 + 292) = 1;
      }
      sub_1400BA030(a1);
    }
  }
}