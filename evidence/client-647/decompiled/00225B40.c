char __fastcall sub_140225B40(__int64 a1, __int64 a2, char a3, int a4, unsigned int a5, unsigned int a6)
{
  __int64 v9; // rax
  __int64 v10; // r13
  char v11; // bl
  char v12; // r12
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rax
  int v20; // r14d
  __int64 v21; // rbx
  int v22; // ecx
  int v23; // edx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rcx
  int v30; // ebx
  int v31; // ebx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rbx
  int v36; // eax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  _QWORD *v40; // rbx
  __int64 v41; // rax
  void **v42; // [rsp+20h] [rbp-89h] BYREF
  int v43; // [rsp+28h] [rbp-81h]
  int v44; // [rsp+2Ch] [rbp-7Dh]
  char v45[8]; // [rsp+30h] [rbp-79h] BYREF
  unsigned int v46; // [rsp+38h] [rbp-71h]
  unsigned int v47; // [rsp+3Ch] [rbp-6Dh]
  _QWORD v48[3]; // [rsp+40h] [rbp-69h] BYREF
  int v49; // [rsp+58h] [rbp-51h]
  __int16 v50; // [rsp+60h] [rbp-49h]
  _BYTE v51[32]; // [rsp+68h] [rbp-41h] BYREF
  __int16 v52; // [rsp+88h] [rbp-21h] BYREF
  _BYTE v53[96]; // [rsp+90h] [rbp-19h] BYREF
  float v54; // [rsp+100h] [rbp+57h] BYREF
  int v55; // [rsp+118h] [rbp+6Fh]

  v55 = a4;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 928LL))(a1) == 0 )
    return 0;
  v9 = sub_1405F1EE0(a1: (__int64)&off_141313B68);
  v10 = v9;
  if ( v9 == 0 )
    return 0;
  if ( *(_BYTE *)(a1 + 1166) != 0 || a2 != 0 && (*(_BYTE *)(a2 + 896) & 0x40) != 0 )
  {
    v11 = 1;
    v12 = 4;
  }
  else
  {
    v11 = 0;
    v12 = 0;
  }
  if ( (unsigned __int8)sub_1407874D0(a1: v9) == 0 && v11 != 0 )
  {
    v13 = sub_1400AF100();
    v14 = sub_1405FD2E0(a1: v13, a2: v45, a3: "QuestMustBeOnHorseDialog");
    v15 = sub_1405F1EE0(a1: v14);
    if ( v15 != 0 )
      sub_1400C29E0(a1: v15);
    return 0;
  }
  if ( (unsigned __int8)sub_1402C9DC0() != 0 && a3 != 0 )
  {
    v17 = sub_1400AF100();
    v18 = sub_1405FD2E0(a1: v17, a2: v45, a3: "Network");
    if ( (unsigned __int8)sub_1406006A0(a1: v17, a2: v18, a3: 122) != 0 )
    {
      sub_1405F1D60(a1: &v42, a2: *(unsigned int *)(v18 + 12), a3: *(unsigned int *)(v18 + 8));
    }
    else
    {
      v43 = 0;
      v44 = 195948557;
    }
    v42 = &PXEngine::SafeActorPtrAs<CPXNetwork>::`vftable';
    v19 = sub_1405F1EE0(a1: (__int64)&v42);
    if ( v19 == 0 )
    {
      if ( (unsigned __int8)sub_140059CA0(a1: off_140F527F8) != 0 )
        __debugbreak();
      sub_1409E29B8(a1: 999);
      __debugbreak();
    }
    sub_1407BAE00(a1: v19, a2: 0);
    return 0;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 952LL))(a1);
  v20 = 195948557;
  if ( a2 != 0
    && (v21 = qword_14138A6F0,
        sub_1405F1D40(a1: v45, a2: a2 + 120),
        (unsigned __int8)sub_1406006A0(a1: v21, a2: v45, a3: 123) != 0) )
  {
    sub_1405F1D60(a1: &v42, a2: v47, a3: v46);
    v22 = v44;
    v23 = v43;
  }
  else
  {
    v23 = 0;
    v22 = 195948557;
  }
  v42 = &PXEngine::SafeActorPtrAs<CPXQuest>::`vftable';
  *(_DWORD *)(a1 + 192) = v23;
  *(_DWORD *)(a1 + 196) = v22;
  *(_DWORD *)(a1 + 248) = v55;
  *(_BYTE *)(a1 + 1168) &= ~2u;
  *(_BYTE *)(a1 + 1168) = v12 | (*(_BYTE *)(a1 + 1168) | (2 * a3)) & 0xFB;
  if ( (unsigned __int8)sub_14021CF00(a1) == 0 )
    return 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 960LL))(a1) == 0 )
  {
    if ( *(_QWORD *)(a1 + 520) != 0 )
    {
      v24 = sub_1405F1EE0(a1: a1 + 200);
      if ( v24 != 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 872LL))(a1: v24);
    }
    return 0;
  }
  if ( *(_QWORD *)&nExitCode != 0 )
  {
    v25 = sub_1400AF100();
    v26 = sub_1400D83A0(a1: v25, a2: v45);
    v27 = sub_1405F1EE0(a1: v26);
    v28 = v27;
    if ( v27 != 0 && (*(_BYTE *)(a1 + 1168) & 2) != 0 )
    {
      v29 = *(_QWORD *)(v27 + 1504);
      if ( v29 != 0 )
      {
        v30 = *(_DWORD *)(v10 + 1720);
        if ( *(_DWORD *)(sub_1407F6B40(a1: v29, a2: 0) + 4) == v30 )
        {
          v31 = *(_DWORD *)(a1 + 960);
          v54 = (float)(int)(v31 + (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 992LL))(a1));
          v48[1] = 0;
          v48[2] = 0;
          v49 = 0;
          v48[0] = &PXEngine::ByteStreamWriter::`vftable';
          sub_140A25890(a1: v48, a2: &v54, a3: 4);
          v50 = word_141313C58;
          sub_140A255B0(a1: v51, a2: v48);
          v52 = v50;
          sub_140A255B0(a1: v53, a2: v51);
          v53[32] = 1;
          sub_140A25690(a1: v51);
          sub_140A25690(a1: v48);
          sub_1407D6C20(a1: v28, a2: &v52);
        }
      }
    }
  }
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 1024LL))(a1, a2: a5, a3: a6);
  v32 = sub_1400AF100();
  v33 = sub_140218070(a1: v32, a2: v48);
  v34 = sub_1405F1EE0(a1: v33);
  v35 = v34;
  if ( v34 == 0 )
  {
    if ( (unsigned __int8)sub_140059CA0(a1: off_140F52F58) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  sub_1402C8C50(a1: v34, a2: a1 + 632);
  sub_1405F1D40(a1: v45, a2: v35 + 256);
  if ( (unsigned __int8)sub_1405F1F70(a1: v45, a2: 40) != 0 )
  {
    sub_1405F1D60(a1: &v42, a2: v47, a3: v46);
    v20 = v44;
    v36 = v43;
  }
  else
  {
    v36 = 0;
  }
  dword_141311048 = v36;
  dword_14131104C = v20;
  sub_1400BA030(a1);
  if ( *(_BYTE *)(a1 + 1167) == 0 )
  {
    v37 = sub_1400AF100();
    v38 = sub_1401D0A70(a1: v37, a2: v48);
    v39 = sub_1405F1EE0(a1: v38);
    if ( v39 != 0 )
      *(_BYTE *)(v39 + 1160) = 0;
  }
  sub_1405F1D40(a1: v45, a2: a1 + 120);
  v40 = (_QWORD *)(a1 + 152);
  if ( *(_QWORD *)(a1 + 176) > 0xFu )
    v40 = (_QWORD *)*v40;
  v41 = sub_1400AF100();
  sub_14021B300(a1: v41, a2: v40, a3: v45);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 944LL))(a1);
  return 1;
}