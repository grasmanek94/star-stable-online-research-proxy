_QWORD *__fastcall sub_1404889A0(__int64 a1, __int64 a2, char a3, int a4, unsigned __int8 a5, __int64 a6)
{
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // r12
  _QWORD *result; // rax
  __int64 v16; // rbx
  __int64 v17; // r14
  __int64 v18; // rax
  int v19; // edi
  _QWORD *v20; // rdi
  _QWORD *v21; // rbx
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r15
  int v27; // esi
  __int64 v28; // r12
  _QWORD *v29; // rsi
  __int64 v30; // r8
  void *v31; // rcx
  unsigned int v32; // eax
  char v33; // al
  char **v34; // rcx
  __int64 v36; // [rsp+48h] [rbp-B8h]
  __int64 v37; // [rsp+58h] [rbp-A8h]
  void **v38; // [rsp+60h] [rbp-A0h] BYREF
  int v39; // [rsp+68h] [rbp-98h]
  int v40; // [rsp+6Ch] [rbp-94h]
  void **v41; // [rsp+70h] [rbp-90h] BYREF
  int v42; // [rsp+78h] [rbp-88h]
  int v43; // [rsp+7Ch] [rbp-84h]
  _BYTE v44[16]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v45; // [rsp+90h] [rbp-70h]
  void **v46; // [rsp+98h] [rbp-68h] BYREF
  int v47; // [rsp+A0h] [rbp-60h]
  int v48; // [rsp+A4h] [rbp-5Ch]
  _QWORD v49[2]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v50[16]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v51[16]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v52; // [rsp+D8h] [rbp-28h] BYREF
  int v53; // [rsp+E0h] [rbp-20h]
  _QWORD v54[3]; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 v55; // [rsp+100h] [rbp+0h]

  v45 = a6;
  v8 = qword_14138A6F0;
  if ( qword_14138A6F0 == 0 )
  {
LABEL_47:
    v33 = sub_140059CA0(a1: off_140F35058);
    goto LABEL_50;
  }
  sub_140487A60(a1, a2: v50, a3: a5);
  v9 = sub_1405F1EE0(a1: (__int64)v50);
  v10 = v9;
  v37 = v9;
  if ( v9 == 0 )
  {
    v33 = sub_140059D90(a1: off_140FA1FD8, a2: "Failed to find equipment description for equipment type: %u.", a5);
    goto LABEL_50;
  }
  v11 = sub_140461520(a1: v9);
  sub_1405FACE0(a1: v8, a2: (unsigned int)v44, a3: a4, a4: v11, a5: -1, a6: -1, a7: -1);
  if ( sub_1405F1EE0(a1: (__int64)v44) == 0 )
  {
    v33 = sub_140059D90(
            a1: off_140FA2048,
            a2: "Failed to find equipment player item root actor for equipment type %u.",
            a5);
LABEL_50:
    if ( v33 != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  v12 = qword_14138A6F0;
  if ( qword_14138A6F0 == 0 )
  {
    v34 = off_140F35058;
    goto LABEL_55;
  }
  v13 = sub_1405FD2E0(a1: (_QWORD *)qword_14138A6F0, a2: (__int64)v54, a3: (__int64)"PlayerItemManager");
  if ( (unsigned __int8)sub_1406006A0(a1: v12, a2: v13, a3: 163) != 0 )
  {
    sub_1405F1D60(a1: (__int64)&v41, a2: *(_DWORD *)(v13 + 12), a3: *(_DWORD *)(v13 + 8));
  }
  else
  {
    v42 = 0;
    v43 = 195948557;
  }
  v41 = &PXEngine::SafeActorPtrAs<CPXPlayerItemManager>::`vftable';
  v14 = sub_1405F1EE0(a1: (__int64)&v41);
  v36 = v14;
  if ( v14 == 0 )
  {
    v34 = off_140F40118;
LABEL_55:
    if ( (unsigned __int8)sub_140059CA0(a1: v34) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
LABEL_58:
    if ( (unsigned __int8)sub_140059D90(
                            a1: off_140FA2088,
                            a2: "EquipmentManager::InitializeEquipmentItems - Failed to find and create equipment folder for "
                            "equipment description id %u.",
                            a5) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    goto LABEL_47;
  }
  result = (_QWORD *)sub_14015F500(a1: v10);
  v16 = *result;
  v17 = result[1];
  if ( *result == v17 )
    goto LABEL_19;
  do
  {
    v18 = sub_1405FACE0(a1: v8, a2: (unsigned int)v51, a3: (unsigned int)v44, a4: (int)v16 + 16, a5: -1, a6: -1, a7: -1);
    result = (_QWORD *)sub_1405F1EE0(a1: v18);
    if ( result != nullptr )
      goto LABEL_17;
    v19 = sub_1405F1EE0(a1: (__int64)v44);
    if ( *(_BYTE *)(v8 + 1305) != 0 )
    {
      if ( (unsigned __int8)sub_1406008F0(a1: v8, a2: 1) == 0 )
        goto LABEL_15;
    }
    else if ( (unsigned __int8)sub_1406008F0(a1: v8, a2: 1) == 0 )
    {
      v53 = 1;
      v52 = 0x2000000000000000LL;
      v49[0] = 1;
      v49[1] = &v52;
      v54[0] = "Actor with class ID {}, cannot be created publicly!";
      v54[1] = 51;
      if ( (unsigned __int8)sub_140059F60(a1: off_140FA4BA0, a2: v54, a3: v49) != 0 )
        __debugbreak();
      goto LABEL_15;
    }
    v32 = sub_1405F9120(a1: v8, a2: 1, a3: 0, a4: v19, a5: v16 + 16, a6: 1243, a7: 1);
    if ( v32 != 195948557 )
    {
      if ( v32 >= (unsigned __int64)((__int64)(*(_QWORD *)(v8 + 8) - *(_QWORD *)v8) >> 6) )
LABEL_44:
        __fastfail(5u);
      sub_1405F1D60(a1: (__int64)&v46, a2: v32, a3: *(_DWORD *)(*(_QWORD *)v8 + ((unsigned __int64)v32 << 6) + 44));
      v46 = &PXEngine::SafeActorPtrAs<CPXActor>::`vftable';
      v39 = v47;
      v40 = v48;
      v38 = &PXEngine::SafeActorPtrAs<CPXActor>::`vftable';
      goto LABEL_16;
    }
LABEL_15:
    v39 = 0;
    v40 = 195948557;
    v38 = &PXEngine::SafeActorPtrAs<CPXActor>::`vftable';
LABEL_16:
    result = (_QWORD *)sub_1405F1EE0(a1: (__int64)&v38);
LABEL_17:
    v16 += 72;
  }
  while ( v16 != v17 );
  v10 = v37;
LABEL_19:
  v20 = *(_QWORD **)(a2 + 8);
  v21 = (_QWORD *)*v20;
  if ( (_QWORD *)*v20 != v20 )
  {
    while ( 1 )
    {
      if ( *((_DWORD *)v21 + 5) != 0 )
      {
        v22 = *((unsigned __int8 *)v21 + 16);
        sub_14047DA40(a1: v10, a2: v54, a3: (unsigned __int8)v22);
        v23 = sub_1405FACE0(
                a1: v8,
                a2: (unsigned int)v51,
                a3: (unsigned int)v44,
                a4: (unsigned int)v54,
                a5: -1,
                a6: -1,
                a7: -1);
        v26 = sub_1405F1EE0(a1: v23);
        if ( v26 == 0 )
          goto LABEL_58;
        result = (_QWORD *)sub_1401E0840(a1: v14, a2: *((unsigned int *)v21 + 5), a3: v24, a4: v25);
        v27 = (int)result;
        if ( result != nullptr )
        {
          v28 = sub_14005D330();
          result = (_QWORD *)sub_1400AC1A0(a1: v27, a2: v26, a3: 0, a4: 0, a5: 0, a6: -1, a7: 0);
          v29 = result;
          if ( result != nullptr )
          {
            result = (_QWORD *)sub_140645790(a1: result, a2: 101, a3: v28);
            if ( (_BYTE)result != 0 )
            {
              result = (_QWORD *)sub_14047D9D0(a1: v37);
              if ( (_BYTE)result == 0 )
                result = (_QWORD *)sub_1402699A0(a1: v29, a2: 1);
              if ( a3 != 0 )
                *((_BYTE *)v29 + 188) = 4;
              if ( a5 == 2 && (unsigned __int8)v22 < 0xDu )
              {
                LOBYTE(v30) = 1;
                result = (_QWORD *)sub_1402699C0(a1: v29, a2: *(unsigned __int8 *)(v45 + v22), a3: v30, a4: 0);
              }
            }
          }
          v14 = v36;
        }
        if ( v55 > 0xF )
        {
          v31 = (void *)v54[0];
          if ( v55 + 1 >= 0x1000 )
          {
            if ( (unsigned __int64)(v54[0] - *(_QWORD *)(v54[0] - 8LL) - 8LL) > 0x1F )
              goto LABEL_44;
            v31 = *(void **)(v54[0] - 8LL);
          }
          result = (_QWORD *)sub_1409DB4C0(lpMem: v31);
        }
      }
      v21 = (_QWORD *)*v21;
      if ( v21 == v20 )
        break;
      v10 = v37;
    }
  }
  return result;
}