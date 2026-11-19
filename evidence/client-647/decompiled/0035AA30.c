void __fastcall sub_14035AA30(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  int v5; // ecx
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rsi
  int v9; // ebx
  __int64 v10; // rbx
  __int64 v11; // rax
  void **v12; // [rsp+50h] [rbp-B0h] BYREF
  int v13; // [rsp+58h] [rbp-A8h]
  int v14; // [rsp+5Ch] [rbp-A4h]
  void **v15; // [rsp+60h] [rbp-A0h] BYREF
  int v16; // [rsp+68h] [rbp-98h]
  int v17; // [rsp+6Ch] [rbp-94h]
  _QWORD v18[3]; // [rsp+70h] [rbp-90h] BYREF
  int v19; // [rsp+88h] [rbp-78h]
  void **v20; // [rsp+90h] [rbp-70h] BYREF
  int v21; // [rsp+98h] [rbp-68h]
  int v22; // [rsp+9Ch] [rbp-64h]
  _BYTE v23[16]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v24[16]; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v25; // [rsp+C0h] [rbp-40h]
  _BYTE v26[32]; // [rsp+C8h] [rbp-38h] BYREF
  __int16 v27; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v28[32]; // [rsp+F0h] [rbp-10h] BYREF
  char v29; // [rsp+110h] [rbp+10h]

  if ( *(_QWORD *)&nExitCode != 0 )
  {
    v4 = sub_1405F1EE0(a1: (__int64)&off_141313B68);
    if ( v4 != 0 && *a2 != a2[1] )
    {
      v5 = *(_DWORD *)(a1 + 680);
      if ( v5 != 0 && v5 != *(_DWORD *)(v4 + 1720) )
      {
        if ( (unsigned __int8)sub_14034C6F0(a1) != 0 )
          return;
        sub_14034EA80(a1);
      }
      if ( *(_QWORD *)(a1 + 696) < 4u )
      {
        v18[1] = 0;
        v18[2] = 0;
        v19 = 0;
        v18[0] = &PXEngine::ByteStreamWriter::`vftable';
        if ( (unsigned __int8)sub_140346D30(a1: v18, a2) != 0 )
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
        sub_1407EE6B0(a1: &v27);
      }
      else
      {
        v6 = sub_1400AF100();
        v20 = &PXEngine::SafeActorPtr::`vftable';
        v21 = 0;
        v22 = 195948557;
        sub_1405F1D40(a1: v24, a2: a1 + 120);
        v12 = &PXEngine::SafeActorPtr::`vftable';
        v13 = 0;
        v14 = 195948557;
        v7 = sub_1405FD6C0(
               a1: v6,
               a2: (unsigned int)v23,
               a3: (unsigned int)v24,
               a4: (unsigned int)"global/GenericRequestWindow",
               a5: (__int64)&v12,
               a6: (__int64)&v20,
               a7: 0,
               a8: 0,
               a9: 0);
        if ( (unsigned __int8)sub_1406006A0(a1: v6, a2: v7, a3: 40) != 0 )
        {
          sub_1405F1D60(a1: &v15, a2: *(unsigned int *)(v7 + 12), a3: *(unsigned int *)(v7 + 8));
        }
        else
        {
          v16 = 0;
          v17 = 195948557;
        }
        v15 = &PXEngine::SafeActorPtrAs<CPXView>::`vftable';
        v8 = sub_1405F1EE0(a1: (__int64)&v15);
        if ( v8 != 0 )
        {
          v9 = sub_1400AF100();
          sub_1405F1D40(a1: v23, a2: v8 + 120);
          v10 = sub_1405FADF0(
                  a1: v9,
                  a2: (unsigned int)v18,
                  a3: (unsigned int)v23,
                  a4: (unsigned int)"Message",
                  a5: -1,
                  a6: -1,
                  a7: -1,
                  a8: 1);
          if ( (unsigned __int8)sub_1405F1F70(a1: v10, a2: 40) != 0 )
          {
            sub_1405F1D60(a1: &v12, a2: *(unsigned int *)(v10 + 12), a3: *(unsigned int *)(v10 + 8));
          }
          else
          {
            v13 = 0;
            v14 = 195948557;
          }
          v12 = &PXEngine::SafeActorPtrAs<CPXView>::`vftable';
          v11 = sub_1405F1EE0(a1: (__int64)&v12);
          if ( v11 != 0 )
          {
            sub_1401486E0(a1: v11, a2: "INVITE_LIST_FULL", a3: 1);
            sub_1400C29E0(a1: v8);
          }
        }
      }
    }
  }
}