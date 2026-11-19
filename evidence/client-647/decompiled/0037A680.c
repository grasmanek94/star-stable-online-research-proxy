__int64 __fastcall sub_14037A680(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // eax
  int v12; // r9d
  __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rax
  int v16; // r9d
  __int64 v17; // rax
  __int64 *v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  void **v26; // [rsp+40h] [rbp-68h] BYREF
  int v27; // [rsp+48h] [rbp-60h]
  int v28; // [rsp+4Ch] [rbp-5Ch]
  void **v29; // [rsp+50h] [rbp-58h] BYREF
  int v30; // [rsp+58h] [rbp-50h]
  int v31; // [rsp+5Ch] [rbp-4Ch]
  _BYTE v32[16]; // [rsp+60h] [rbp-48h] BYREF
  _BYTE v33[48]; // [rsp+70h] [rbp-38h] BYREF

  if ( a6 != 0 )
  {
    if ( a3 == 42026 )
    {
      if ( a6 == sub_1405F1EE0(a1: (__int64)&off_141311DC0) )
      {
        LOBYTE(v22) = 1;
        sub_14037AD60(a1, a2: v22);
      }
      else if ( a6 == sub_1405F1EE0(a1: (__int64)&off_141311DD0) && *(_QWORD *)&nExitCode != 0 )
      {
        sub_14037A580(a1);
      }
      v23 = sub_1405F1F00(a1: &off_141311DC0);
      sub_1400AC0D0(a1: v23);
      v24 = sub_1405F1F00(a1: &off_141311DD0);
      sub_1400AC0D0(a1: v24);
    }
    else if ( a3 == 58019 && sub_1406193D0(a1: a2) != 0 )
    {
      sub_1406193D0(a1: a2);
      if ( a6 == sub_1405F1EE0(a1: a1 + 256) )
      {
        if ( *(_QWORD *)&nExitCode != 0 )
        {
          v8 = sub_1401D5630(a1: &unk_14131416C, a2: v33, a3: a1 + 460);
          sub_1407EE6B0(a1: v8);
        }
        v9 = sub_140619130(a1: a2);
        v10 = sub_1401D0B70(a1: v9, a2: &v29);
        v11 = sub_1401E10A0(a1: v10);
        v28 = 195948557;
        v27 = 0;
        v26 = &PXEngine::SafeActorPtr::`vftable';
        LOBYTE(v12) = 1;
        sub_1402DB8A0(
          a1: v11,
          a2: 4,
          a3: (unsigned int)L"SQ_INFO_LEAVING_GROUP",
          a4: v12,
          a5: (__int64)&v26,
          a6: 0,
          a7: 0);
      }
      else if ( a6 == sub_1405F1EE0(a1: a1 + 272) && (float)(sub_1400AED80(a1) - *(float *)(a1 + 452)) > 2.0 )
      {
        *(float *)(a1 + 452) = sub_1400AED80(a1);
        v13 = sub_140619130(a1: a2);
        v14 = sub_1405FD2E0(a1: v13, a2: v32, a3: "NotificationManager");
        if ( (unsigned __int8)sub_1406006A0(a1: v13, a2: v14, a3: 160) != 0 )
        {
          sub_1405F1D60(a1: &v26, a2: *(unsigned int *)(v14 + 12), a3: *(unsigned int *)(v14 + 8));
        }
        else
        {
          v27 = 0;
          v28 = 195948557;
        }
        v26 = &PXEngine::SafeActorPtrAs<CPXNotificationManager>::`vftable';
        v15 = sub_1405F1EE0(a1: (__int64)&v26);
        if ( v15 == 0 )
        {
          if ( (unsigned __int8)sub_140059CA0(a1: off_140F4EA00) != 0 )
            __debugbreak();
          sub_1409E29B8(a1: 999);
          __debugbreak();
        }
        v30 = 0;
        v29 = &PXEngine::SafeActorPtr::`vftable';
        v31 = 195948557;
        LOBYTE(v16) = 1;
        sub_1402DB8A0(
          a1: v15,
          a2: 4,
          a3: (unsigned int)L"SQ_INFO_LEAVING_AREA",
          a4: v16,
          a5: (__int64)&v29,
          a6: 0,
          a7: 0);
        v17 = sub_1405F1EE0(a1: (__int64)&off_141310F50);
        v18 = (__int64 *)v17;
        if ( v17 != 0 && (unsigned __int8)sub_1406456B0(a1: v17, a2: 120) != 0 )
        {
          v20 = *v18;
          v21 = sub_1400FBAF0(a1: v19);
          (*(void (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD, __int64))(v20 + 24))(
            a1: v18,
            a2: 120125,
            a3: 0,
            a4: 0,
            a5: v21);
        }
      }
    }
  }
  return 1;
}