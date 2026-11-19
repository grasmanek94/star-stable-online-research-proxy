// Hex-Rays export; function matched through nearby assertion-record references; confirm role in the text.
__int64 __fastcall sub_1401051F0(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  __int128 v12; // [rsp+28h] [rbp-28h] BYREF
  __int64 v13; // [rsp+38h] [rbp-18h]
  unsigned __int64 v14; // [rsp+40h] [rbp-10h]

  sub_1400B03A0(a1);
  *(_QWORD *)a1 = &CPXReinsSimulator::`vftable';
  *(_DWORD *)(a1 + 152) = 1045220557;
  *(_DWORD *)(a1 + 156) = 1065017672;
  *(_DWORD *)(a1 + 160) = -1082130432;
  *(_DWORD *)(a1 + 164) = 0x10000;
  *(_WORD *)(a1 + 168) = 1;
  v13 = 14;
  v14 = 15;
  strcpy((char *)&v12, "PlayerPosition");
  HIBYTE(v12) = 0;
  sub_140016F60(a1: a1 + 176, a2: &v12);
  *(_QWORD *)(a1 + 208) = &PXEngine::SafeActorPtr::`vftable';
  *(_DWORD *)(a1 + 216) = 0;
  *(_DWORD *)(a1 + 220) = 195948557;
  *(_DWORD *)(a1 + 224) = -1;
  if ( v14 > 0xF )
  {
    v2 = (void *)v12;
    if ( v14 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v12 - *(_QWORD *)(v12 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v2 = *(void **)(v12 - 8);
    }
    sub_1409E08A0(lpMem: v2);
  }
  *((_QWORD *)&v12 + 1) = 49;
  v13 = 9;
  v14 = 15;
  *(_QWORD *)&v12 = 0x317265676E694652LL;
  sub_140016F60(a1: a1 + 232, a2: &v12);
  *(_DWORD *)(a1 + 272) = 0;
  *(_DWORD *)(a1 + 276) = 195948557;
  *(_QWORD *)(a1 + 264) = &PXEngine::SafeActorPtrAs<CPXBone>::`vftable';
  if ( v14 > 0xF )
  {
    v3 = (void *)v12;
    if ( v14 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v12 - *(_QWORD *)(v12 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v3 = *(void **)(v12 - 8);
    }
    sub_1409E08A0(lpMem: v3);
  }
  *((_QWORD *)&v12 + 1) = 50;
  v13 = 9;
  v14 = 15;
  *(_QWORD *)&v12 = 0x6C696154796E6F50LL;
  sub_140016F60(a1: a1 + 280, a2: &v12);
  *(_DWORD *)(a1 + 320) = 0;
  *(_DWORD *)(a1 + 324) = 195948557;
  *(_QWORD *)(a1 + 312) = &PXEngine::SafeActorPtrAs<CPXBone>::`vftable';
  if ( v14 > 0xF )
  {
    v4 = (void *)v12;
    if ( v14 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v12 - *(_QWORD *)(v12 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v4 = *(void **)(v12 - 8);
    }
    sub_1409E08A0(lpMem: v4);
  }
  *((_QWORD *)&v12 + 1) = 49;
  v13 = 9;
  v14 = 15;
  *(_QWORD *)&v12 = 0x6C696154796E6F50LL;
  sub_140016F60(a1: a1 + 328, a2: &v12);
  *(_DWORD *)(a1 + 368) = 0;
  *(_DWORD *)(a1 + 372) = 195948557;
  *(_QWORD *)(a1 + 360) = &PXEngine::SafeActorPtrAs<CPXBone>::`vftable';
  if ( v14 > 0xF )
  {
    v5 = (void *)v12;
    if ( v14 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v12 - *(_QWORD *)(v12 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v5 = *(void **)(v12 - 8);
    }
    sub_1409E08A0(lpMem: v5);
  }
  v13 = 8;
  v14 = 15;
  v12 = 0x317265676E69464CuLL;
  sub_140016F60(a1: a1 + 376, a2: &v12);
  *(_DWORD *)(a1 + 416) = 0;
  *(_DWORD *)(a1 + 420) = 195948557;
  *(_QWORD *)(a1 + 408) = &PXEngine::SafeActorPtrAs<CPXBone>::`vftable';
  if ( v14 > 0xF )
  {
    v6 = (void *)v12;
    if ( v14 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v12 - *(_QWORD *)(v12 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v6 = *(void **)(v12 - 8);
    }
    sub_1409E08A0(lpMem: v6);
  }
  v13 = 8;
  v14 = 15;
  v12 = 0x317265676E694652uLL;
  sub_140016F60(a1: a1 + 424, a2: &v12);
  *(_DWORD *)(a1 + 464) = 0;
  *(_DWORD *)(a1 + 468) = 195948557;
  *(_QWORD *)(a1 + 456) = &PXEngine::SafeActorPtrAs<CPXBone>::`vftable';
  if ( v14 > 0xF )
  {
    v7 = (void *)v12;
    if ( v14 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v12 - *(_QWORD *)(v12 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v7 = *(void **)(v12 - 8);
    }
    sub_1409E08A0(lpMem: v7);
  }
  v12 = 0;
  v13 = 6;
  v14 = 15;
  strcpy((char *)&v12, "Spine3");
  sub_140016F60(a1: a1 + 472, a2: &v12);
  *(_DWORD *)(a1 + 512) = 0;
  *(_DWORD *)(a1 + 516) = 195948557;
  *(_QWORD *)(a1 + 504) = &PXEngine::SafeActorPtrAs<CPXBone>::`vftable';
  if ( v14 > 0xF )
  {
    v8 = (void *)v12;
    if ( v14 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v12 - *(_QWORD *)(v12 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v8 = *(void **)(v12 - 8);
    }
    sub_1409E08A0(lpMem: v8);
  }
  v12 = 0;
  v13 = 4;
  v14 = 15;
  strcpy((char *)&v12, "Neck");
  sub_140016F60(a1: a1 + 520, a2: &v12);
  *(_DWORD *)(a1 + 560) = 0;
  *(_DWORD *)(a1 + 564) = 195948557;
  *(_QWORD *)(a1 + 552) = &PXEngine::SafeActorPtrAs<CPXBone>::`vftable';
  if ( v14 > 0xF )
  {
    v9 = (void *)v12;
    if ( v14 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v12 - *(_QWORD *)(v12 - 8) - 8) > 0x1F )
        goto LABEL_54;
      v9 = *(void **)(v12 - 8);
    }
    sub_1409E08A0(lpMem: v9);
  }
  v12 = 0;
  v13 = 5;
  v14 = 15;
  strcpy((char *)&v12, "Neck2");
  sub_140016F60(a1: a1 + 568, a2: &v12);
  *(_DWORD *)(a1 + 608) = 0;
  *(_DWORD *)(a1 + 612) = 195948557;
  *(_QWORD *)(a1 + 600) = &PXEngine::SafeActorPtrAs<CPXBone>::`vftable';
  if ( v14 > 0xF )
  {
    v10 = (void *)v12;
    if ( v14 + 1 < 0x1000 )
    {
LABEL_45:
      sub_1409E08A0(lpMem: v10);
      goto LABEL_46;
    }
    if ( (unsigned __int64)(v12 - *(_QWORD *)(v12 - 8) - 8) <= 0x1F )
    {
      v10 = *(void **)(v12 - 8);
      goto LABEL_45;
    }
LABEL_54:
    __fastfail(5u);
  }
LABEL_46:
  *(_DWORD *)(a1 + 624) = 0;
  *(_DWORD *)(a1 + 628) = 195948557;
  *(_QWORD *)(a1 + 616) = &PXEngine::SafeActorPtrAs<CPXSkinMesh>::`vftable';
  *(_QWORD *)(a1 + 632) = 0;
  *(_QWORD *)(a1 + 640) = 0;
  *(_QWORD *)(a1 + 648) = 0;
  *(_QWORD *)(a1 + 656) = 0;
  *(_QWORD *)(a1 + 664) = 0;
  *(_QWORD *)(a1 + 672) = 0;
  *(_QWORD *)(a1 + 680) = 0;
  *(_DWORD *)(a1 + 688) = 0;
  *(_QWORD *)(a1 + 692) = 0;
  *(_DWORD *)(a1 + 700) = 0;
  return a1;
}