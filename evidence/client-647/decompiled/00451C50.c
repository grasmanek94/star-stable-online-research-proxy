void __fastcall sub_140451C50(__int64 a1, char a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 (__fastcall *v10)(); // rax
  char (__fastcall *v11)(__int64, __int64, __int64); // r9
  char (__fastcall *v12)(__int64, __int64, __int64); // r9
  void *v13; // rcx
  _BYTE v14[8]; // [rsp+50h] [rbp-B0h] BYREF
  void **v15; // [rsp+58h] [rbp-A8h] BYREF
  int v16; // [rsp+60h] [rbp-A0h]
  int v17; // [rsp+64h] [rbp-9Ch]
  _QWORD v18[3]; // [rsp+68h] [rbp-98h] BYREF
  int v19; // [rsp+80h] [rbp-80h]
  void **v20; // [rsp+88h] [rbp-78h] BYREF
  int v21; // [rsp+90h] [rbp-70h]
  int v22; // [rsp+94h] [rbp-6Ch]
  void **v23; // [rsp+98h] [rbp-68h] BYREF
  int v24; // [rsp+A0h] [rbp-60h]
  int v25; // [rsp+A4h] [rbp-5Ch]
  _BYTE v26[16]; // [rsp+A8h] [rbp-58h] BYREF
  __int16 v27; // [rsp+B8h] [rbp-48h]
  _BYTE v28[32]; // [rsp+C0h] [rbp-40h] BYREF
  __int16 v29; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v30[32]; // [rsp+E8h] [rbp-18h] BYREF
  char v31; // [rsp+108h] [rbp+8h]
  int v32; // [rsp+110h] [rbp+10h]
  char v33; // [rsp+114h] [rbp+14h]
  __int128 v34; // [rsp+118h] [rbp+18h] BYREF
  __int64 v35; // [rsp+128h] [rbp+28h]
  unsigned __int64 v36; // [rsp+130h] [rbp+30h]

  if ( *(_QWORD *)(a1 + 1176) == 0 )
    return;
  v4 = qword_14138A6F0;
  v20 = &PXEngine::SafeActorPtr::`vftable';
  v21 = 0;
  v22 = 195948557;
  sub_1405F1D40(a1: v26, a2: a1 + 120);
  v23 = &PXEngine::SafeActorPtr::`vftable';
  v24 = 0;
  v25 = 195948557;
  v5 = sub_1405FD6C0(
         a1: v4,
         a2: (unsigned int)v18,
         a3: (unsigned int)v26,
         a4: (unsigned int)"global/ClubEditTextWindow/TranspBG/EditInfo/Text",
         a5: (__int64)&v23,
         a6: (__int64)&v20,
         a7: 0,
         a8: 0,
         a9: 0);
  if ( (unsigned __int8)sub_1406006A0(a1: v4, a2: v5, a3: 40) != 0 )
  {
    sub_1405F1D60(a1: &v15, a2: *(unsigned int *)(v5 + 12), a3: *(unsigned int *)(v5 + 8));
  }
  else
  {
    v16 = 0;
    v17 = 195948557;
  }
  v15 = &PXEngine::SafeActorPtrAs<CPXView>::`vftable';
  v6 = sub_1405F1EE0(a1: (__int64)&v15);
  if ( v6 == 0 )
    return;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 15;
  LOBYTE(v34) = 0;
  v32 = *(_DWORD *)(*(_QWORD *)(a1 + 1176) + 264LL);
  v33 = a2;
  v7 = sub_140139D60(a1: v6, a2: 65001);
  v8 = sub_140E82CD0(a1: v7);
  sub_14000D680(a1: &v34, a2: v7, a3: v8);
  v18[1] = 0;
  v18[2] = 0;
  v19 = 0;
  v18[0] = &PXEngine::ByteStreamWriter::`vftable';
  LODWORD(v15) = v32;
  if ( sub_1401D0820(a1: v18, a2: &v15) == 0 )
    goto LABEL_19;
  v32 = (int)v15;
  v9 = v18[0];
  v10 = *(__int64 (__fastcall **)())(v18[0] + 8LL);
  if ( v10 == sub_14001A530 )
  {
LABEL_14:
    v14[0] = v33;
    v12 = *(char (__fastcall **)(__int64, __int64, __int64))(v9 + 16);
    if ( v12 == sub_1401F6C10 )
    {
      sub_140A25890(a1: v18, a2: v14, a3: 1);
    }
    else if ( v12(a1: (__int64)v18, a2: (__int64)v14, a3: 1) == 0 )
    {
      goto LABEL_19;
    }
    goto LABEL_17;
  }
  if ( ((unsigned __int8 (__fastcall *)(_QWORD *))v10)(a1: v18) == 0 )
  {
    v9 = v18[0];
    goto LABEL_14;
  }
  v14[0] = 0;
  v11 = *(char (__fastcall **)(__int64, __int64, __int64))(v18[0] + 16LL);
  if ( v11 == sub_1401F6C10 )
  {
    sub_140A25890(a1: v18, a2: v14, a3: 1);
    v33 = v14[0];
  }
  else
  {
    if ( v11(a1: (__int64)v18, a2: (__int64)v14, a3: 1) == 0 )
      goto LABEL_19;
    v33 = v14[0];
  }
LABEL_17:
  if ( sub_1402B4D00(a1: v18, a2: (__int64 *)&v34) != 0 )
  {
    v27 = word_141313CB8;
    sub_140A255B0(a1: v28, a2: v18);
    v29 = v27;
    sub_140A255B0(a1: v30, a2: v28);
    v31 = 1;
    sub_140A25690(a1: v28);
    goto LABEL_20;
  }
LABEL_19:
  v31 = 0;
LABEL_20:
  sub_140A25690(a1: v18);
  sub_1407EE6B0(a1: &v29);
  if ( v36 > 0xF )
  {
    v13 = (void *)v34;
    if ( v36 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v34 - *(_QWORD *)(v34 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v13 = *(void **)(v34 - 8);
    }
    sub_1409DB4C0(lpMem: v13);
  }
}