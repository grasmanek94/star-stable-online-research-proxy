void __fastcall sub_1407CFC20(__int64 a1, __int64 a2)
{
  float v4; // xmm1_4
  __int64 v5; // r8
  char v6; // al
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rbp
  char v13; // al
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rax
  unsigned int v18; // eax
  _QWORD *v19; // rbx
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // r9
  bool v23; // zf
  _QWORD *v24; // rbx
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // r9
  unsigned int v28; // ebx
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int16 v31; // ax
  char v32; // al
  void **v33; // [rsp+20h] [rbp-38h] BYREF
  int v34; // [rsp+28h] [rbp-30h]
  int v35; // [rsp+2Ch] [rbp-2Ch]
  _BYTE v36[16]; // [rsp+30h] [rbp-28h] BYREF

  if ( (*(_BYTE *)(a1 + 144) & 0x40) == 0 )
    return;
  if ( *(_DWORD *)(a1 + 316) != -1 )
  {
    v4 = *(float *)(a1 + 320) - sub_1400AE220(a1);
    *(float *)(a1 + 320) = v4;
    if ( v4 < 0.0 )
    {
      v5 = *(unsigned int *)(a1 + 316);
      if ( (_DWORD)v5 != *(_DWORD *)(a1 + 312) )
      {
        v6 = *(_BYTE *)(a1 + 3024);
        *(_DWORD *)(a1 + 312) = v5;
        if ( v6 == 2 )
        {
          if ( *(_QWORD *)&nExitCode == 0 )
            goto LABEL_64;
          sub_1407B75D0(a1, a2: *(_QWORD *)&nExitCode, a3: v5);
        }
        else if ( ((_DWORD)v5 == 8 || (_DWORD)v5 == 1) && v6 == 0 && (unsigned __int8)sub_1400CCAD0(a1, a2: 122140) != 0 )
        {
          v8 = *(_QWORD *)a1;
          *(_BYTE *)(a1 + 3024) = 1;
          v9 = sub_1400FBAF0(a1: v7);
          (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64))(v8 + 776))(a1, a2: 122140, a3: 0, a4: v9);
        }
      }
      *(_DWORD *)(a1 + 316) = -1;
    }
  }
  v10 = (__int64 *)sub_140736C00(a1: a1 + 2656);
  v11 = *v10;
  v12 = v10[1];
  if ( *v10 != v12 )
  {
    do
    {
      v13 = *(_BYTE *)(a1 + 3024);
      v14 = *(unsigned __int16 *)(v11 + 42);
      if ( v13 == 2 )
        goto LABEL_23;
      switch ( (_WORD)v14 )
      {
        case 7:
          goto LABEL_25;
        case 2:
LABEL_23:
          if ( (unsigned __int16)v14 < 0x114u )
          {
LABEL_25:
            sub_1407D1A00(a1, a2: v14, a3: *(_QWORD *)(v11 + 88), a4: *(_DWORD *)(v11 + 96));
            break;
          }
          sub_1407D08D0((_QWORD *)a1, a2: v11, a3: a2);
          break;
        case 5:
          if ( v13 == 0 && (unsigned __int8)sub_1400CCAD0(a1, a2: 122140) != 0 )
          {
            v16 = *(_QWORD *)a1;
            *(_BYTE *)(a1 + 3024) = 1;
            v17 = sub_1400FBAF0(a1: v15);
            (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64))(v16 + 776))(a1, a2: 122140, a3: 0, a4: v17);
          }
          sub_140736130(a1: a1 + 2656, a2: v11);
          break;
        default:
          v31 = sub_1407AF070(a1: v14);
          v32 = sub_140059D90(a1: off_141012988, a2: "Unexpected message from server: %u", v31);
          goto LABEL_65;
      }
      v11 += 104;
    }
    while ( v11 != v12 );
  }
  sub_1407D1960(a1);
  if ( *(_DWORD *)(a1 + 312) == 9 )
    sub_1407BB2B0(a1);
  v18 = sub_14060BBD0(a1: qword_141389CB8);
  if ( *(_BYTE *)(a1 + 1932) == 0 )
  {
    if ( v18 <= 0x1B7740 )
    {
      if ( v18 <= 0x7530 )
      {
        if ( *(_BYTE *)(a1 + 1933) != 0 )
        {
          v24 = (_QWORD *)sub_140619130(a1: a2);
          v25 = sub_1405FD2E0(a1: v24, a2: (__int64)v36, a3: (__int64)"MetricsManager");
          if ( (unsigned __int8)sub_1406006A0(a1: v24, a2: v25, a3: 238) != 0 )
          {
            sub_1405F1D60(a1: (__int64)&v33, a2: *(_DWORD *)(v25 + 12), a3: *(_DWORD *)(v25 + 8));
          }
          else
          {
            v34 = 0;
            v35 = 195948557;
          }
          v33 = &PXEngine::SafeActorPtrAs<CPXMetricsManager>::`vftable';
          v26 = sub_1405F1EE0(a1: (__int64)&v33);
          if ( v26 != 0 )
          {
            sub_14060F030(a1: v26, a2: "UserIdle", a3: *(unsigned int *)(a1 + 1936), a4: v27, a5: (_DWORD)v33);
            *(_BYTE *)(a1 + 1933) = 0;
          }
        }
      }
      else
      {
        *(_DWORD *)(a1 + 1936) = v18;
        *(_BYTE *)(a1 + 1933) = 1;
      }
    }
    else
    {
      v19 = (_QWORD *)sub_140619130(a1: a2);
      v20 = sub_1405FD2E0(a1: v19, a2: (__int64)v36, a3: (__int64)"MetricsManager");
      if ( (unsigned __int8)sub_1406006A0(a1: v19, a2: v20, a3: 238) != 0 )
      {
        sub_1405F1D60(a1: (__int64)&v33, a2: *(_DWORD *)(v20 + 12), a3: *(_DWORD *)(v20 + 8));
      }
      else
      {
        v34 = 0;
        v35 = 195948557;
      }
      v33 = &PXEngine::SafeActorPtrAs<CPXMetricsManager>::`vftable';
      v21 = sub_1405F1EE0(a1: (__int64)&v33);
      if ( v21 != 0 )
      {
        sub_14060F030(a1: v21, a2: "UserIdle", a3: *(unsigned int *)(a1 + 1936), a4: v22, a5: (_DWORD)v33);
        *(_BYTE *)(a1 + 1932) = 1;
        *(_BYTE *)(a1 + 480) = 0;
        sub_1407D86E0(a1, a2: 0, a3: 0);
        if ( *(_DWORD *)(a1 + 312) != 6 )
        {
          v23 = *(_BYTE *)(a1 + 3024) == 2;
          *(_DWORD *)(a1 + 312) = 6;
          if ( v23 )
          {
            if ( *(_QWORD *)&nExitCode == 0 )
              goto LABEL_64;
            sub_1407B75D0(a1, a2: *(_QWORD *)&nExitCode, a3: 6);
          }
        }
      }
    }
  }
  if ( *(_BYTE *)(a1 + 480) == 0 )
    goto LABEL_55;
  v28 = *(_DWORD *)(a1 + 560) + 120000;
  if ( (unsigned int)sub_14008A0B0() > v28 )
  {
    if ( (unsigned __int8)sub_140059D90(
                            a1: off_1410129C8,
                            a2: "Disconnected beacuse of main process locked for a while") != 0 )
      __debugbreak();
    *(_BYTE *)(a1 + 1932) = 1;
    *(_BYTE *)(a1 + 480) = 0;
    sub_1407D86E0(a1, a2: 0, a3: 0);
    if ( *(_DWORD *)(a1 + 312) != 6 )
    {
      v23 = *(_BYTE *)(a1 + 3024) == 2;
      *(_DWORD *)(a1 + 312) = 6;
      if ( v23 )
      {
        if ( *(_QWORD *)&nExitCode == 0 )
        {
LABEL_64:
          v32 = sub_140059CA0(a1: off_140F34FA8);
LABEL_65:
          if ( v32 != 0 )
            __debugbreak();
          sub_1409E29B8(a1: 999);
          __debugbreak();
        }
        sub_1407B75D0(a1, a2: *(_QWORD *)&nExitCode, a3: 6);
      }
    }
  }
LABEL_55:
  *(_DWORD *)(a1 + 560) = sub_14008A0B0();
  if ( *(_QWORD *)(a1 + 2560) != *(_QWORD *)(a1 + 2568) )
    sub_1407EFC70(a1: a1 + 2528);
  sub_1407DA070(a1);
  if ( *(_DWORD *)(a1 + 312) == 0 )
  {
    v29 = sub_1406193F0(a1: a2);
    sub_1407D0120(a1, a2: v29);
  }
  if ( *(_DWORD *)(a1 + 312) == 10 )
  {
    v30 = sub_1406193F0(a1: a2);
    sub_1407C1AF0(a1, a2: v30);
  }
}