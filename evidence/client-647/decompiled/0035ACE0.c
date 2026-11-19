__int64 __fastcall sub_14035ACE0(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rsi
  int v7; // ebx
  __int64 v8; // rbx
  void *v9; // rax
  void **v10; // [rsp+50h] [rbp-B0h] BYREF
  int v11; // [rsp+58h] [rbp-A8h]
  int v12; // [rsp+5Ch] [rbp-A4h]
  void **v13; // [rsp+60h] [rbp-A0h] BYREF
  int v14; // [rsp+68h] [rbp-98h]
  int v15; // [rsp+6Ch] [rbp-94h]
  __int128 v16; // [rsp+70h] [rbp-90h] BYREF
  __int64 v17; // [rsp+80h] [rbp-80h]
  _QWORD v18[3]; // [rsp+88h] [rbp-78h] BYREF
  int v19; // [rsp+A0h] [rbp-60h]
  void **v20; // [rsp+A8h] [rbp-58h] BYREF
  int v21; // [rsp+B0h] [rbp-50h]
  int v22; // [rsp+B4h] [rbp-4Ch]
  _BYTE v23[16]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v24[16]; // [rsp+C8h] [rbp-38h] BYREF
  __int16 v25; // [rsp+D8h] [rbp-28h]
  _BYTE v26[32]; // [rsp+E0h] [rbp-20h] BYREF
  __int16 v27; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v28[32]; // [rsp+108h] [rbp+8h] BYREF
  char v29; // [rsp+128h] [rbp+28h]
  int v30; // [rsp+158h] [rbp+58h] BYREF

  v30 = a2;
  v16 = 0;
  v17 = 0;
  result = sub_1400A9840(a1: &v16, a2: &v30);
  if ( *(_QWORD *)&nExitCode != 0 )
  {
    result = sub_1405F1EE0(a1: (__int64)&off_141313B68);
    if ( result != 0 && (_QWORD)v16 != *((_QWORD *)&v16 + 1) )
    {
      if ( *(_DWORD *)(a1 + 680) != 0 && *(_DWORD *)(a1 + 680) != *(_DWORD *)(result + 1720) )
      {
        result = sub_14034C6F0(a1);
        if ( (_BYTE)result != 0 )
          goto LABEL_22;
        sub_14034EA80(a1);
      }
      if ( *(_QWORD *)(a1 + 696) < 4u )
      {
        v18[1] = 0;
        v18[2] = 0;
        v19 = 0;
        v18[0] = &PXEngine::ByteStreamWriter::`vftable';
        if ( (unsigned __int8)sub_140346D30(a1: v18, a2: &v16) != 0 )
        {
          v25 = word_141313C68;
          sub_140A255B0(a1: v26, a2: v18);
          v27 = v25;
          sub_140A255B0(a1: v28, a2: v26);
          v29 = 1;
          sub_140A25690(a1: v26);
        }
        else
        {
          v29 = 0;
        }
        sub_140A25690(a1: v18);
        result = sub_1407EE6B0(a1: &v27);
      }
      else
      {
        v4 = sub_1400AF100();
        v20 = &PXEngine::SafeActorPtr::`vftable';
        v21 = 0;
        v22 = 195948557;
        sub_1405F1D40(a1: v24, a2: a1 + 120);
        v10 = &PXEngine::SafeActorPtr::`vftable';
        v11 = 0;
        v12 = 195948557;
        v5 = sub_1405FD6C0(
               a1: v4,
               a2: (unsigned int)v23,
               a3: (unsigned int)v24,
               a4: (unsigned int)"global/GenericRequestWindow",
               a5: (__int64)&v10,
               a6: (__int64)&v20,
               a7: 0,
               a8: 0,
               a9: 0);
        if ( (unsigned __int8)sub_1406006A0(a1: v4, a2: v5, a3: 40) != 0 )
        {
          sub_1405F1D60(a1: &v13, a2: *(unsigned int *)(v5 + 12), a3: *(unsigned int *)(v5 + 8));
        }
        else
        {
          v14 = 0;
          v15 = 195948557;
        }
        v13 = &PXEngine::SafeActorPtrAs<CPXView>::`vftable';
        result = sub_1405F1EE0(a1: (__int64)&v13);
        v6 = result;
        if ( result != 0 )
        {
          v7 = sub_1400AF100();
          sub_1405F1D40(a1: v23, a2: v6 + 120);
          v8 = sub_1405FADF0(
                 a1: v7,
                 a2: (unsigned int)v18,
                 a3: (unsigned int)v23,
                 a4: (unsigned int)"Message",
                 a5: -1,
                 a6: -1,
                 a7: -1,
                 a8: 1);
          if ( (unsigned __int8)sub_1405F1F70(a1: v8, a2: 40) != 0 )
          {
            sub_1405F1D60(a1: &v10, a2: *(unsigned int *)(v8 + 12), a3: *(unsigned int *)(v8 + 8));
          }
          else
          {
            v11 = 0;
            v12 = 195948557;
          }
          v10 = &PXEngine::SafeActorPtrAs<CPXView>::`vftable';
          result = sub_1405F1EE0(a1: (__int64)&v10);
          if ( result != 0 )
          {
            sub_1401486E0(a1: result, a2: "INVITE_LIST_FULL", a3: 1);
            result = sub_1400C29E0(a1: v6);
          }
        }
      }
    }
  }
LABEL_22:
  if ( (_QWORD)v16 != 0 )
  {
    if ( (unsigned __int64)(4 * ((v17 - (__int64)v16) >> 2)) < 0x1000 )
    {
      v9 = (void *)v16;
    }
    else
    {
      v9 = *(void **)(v16 - 8);
      if ( (unsigned __int64)(v16 - (_QWORD)v9 - 8) > 0x1F )
        __fastfail(5u);
    }
    return sub_1409DB4C0(lpMem: v9);
  }
  return result;
}