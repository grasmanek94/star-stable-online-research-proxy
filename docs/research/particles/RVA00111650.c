// Read-only Hex-Rays export, client 645.348067.
void __fastcall sub_140111650(__int64 a1)
{
  int v2; // edx
  unsigned __int8 v3; // r9
  unsigned int v4; // r10d
  int v5; // r8d
  int v6; // xmm0_4
  int v7; // xmm0_4
  int v8; // xmm1_4
  int v9; // xmm0_4
  int v10; // xmm1_4
  int v11; // xmm0_4
  int v12; // xmm1_4
  int v13; // xmm0_4
  int v14; // xmm1_4
  float v15; // xmm6_4
  int v16; // xmm0_4
  int v17; // xmm1_4
  int v18; // xmm0_4
  int v19; // edi
  int v20; // r8d
  int v21; // edx
  unsigned int v22; // eax
  float v23; // xmm1_4
  float v24; // xmm2_4
  float v25; // xmm3_4
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // eax
  volatile signed __int32 *v30; // rbx
  __int128 v31; // [rsp+20h] [rbp-38h] BYREF
  __int64 v32; // [rsp+30h] [rbp-28h]
  __int64 v33; // [rsp+38h] [rbp-20h]

  v2 = *(_DWORD *)(a1 + 728);
  *(_DWORD *)(a1 + 644) = *(_DWORD *)(a1 + 1152);
  *(_DWORD *)(a1 + 648) = *(_DWORD *)(a1 + 1156);
  v3 = *(_BYTE *)(a1 + 1365);
  v4 = *(unsigned __int8 *)(a1 + 1364);
  v5 = v2 ^ ((v3 >> 1) ^ (unsigned __int8)v2) & 1;
  *(_DWORD *)(a1 + 652) = *(_DWORD *)(a1 + 1352);
  *(_DWORD *)(a1 + 656) = *(_DWORD *)(a1 + 1004);
  *(_DWORD *)(a1 + 660) = *(_DWORD *)(a1 + 1012);
  *(_DWORD *)(a1 + 664) = *(_DWORD *)(a1 + 1008);
  *(_DWORD *)(a1 + 668) = *(_DWORD *)(a1 + 1140);
  *(_DWORD *)(a1 + 672) = *(_DWORD *)(a1 + 1144);
  *(_DWORD *)(a1 + 676) = *(_DWORD *)(a1 + 1028);
  *(_DWORD *)(a1 + 680) = *(_DWORD *)(a1 + 1036);
  *(_DWORD *)(a1 + 684) = *(_DWORD *)(a1 + 1032);
  v6 = *(_DWORD *)(a1 + 1016);
  *(_DWORD *)(a1 + 440) = v6;
  *(_DWORD *)(a1 + 444) = v6;
  *(_DWORD *)(a1 + 448) = v6;
  *(_DWORD *)(a1 + 452) = 1065353216;
  v7 = *(_DWORD *)(a1 + 1024);
  *(_DWORD *)(a1 + 456) = v7;
  *(_DWORD *)(a1 + 460) = v7;
  *(_DWORD *)(a1 + 464) = v7;
  *(_DWORD *)(a1 + 468) = 1065353216;
  v8 = *(_DWORD *)(a1 + 1020);
  *(_DWORD *)(a1 + 472) = v8;
  *(_DWORD *)(a1 + 476) = v8;
  *(_DWORD *)(a1 + 480) = v8;
  *(_DWORD *)(a1 + 484) = 1065353216;
  v9 = *(_DWORD *)(a1 + 1048);
  v10 = *(_DWORD *)(a1 + 1052);
  *(_DWORD *)(a1 + 488) = *(_DWORD *)(a1 + 1044);
  *(_DWORD *)(a1 + 492) = v9;
  *(_DWORD *)(a1 + 496) = v10;
  *(_DWORD *)(a1 + 500) = 1065353216;
  v11 = *(_DWORD *)(a1 + 1040);
  *(_DWORD *)(a1 + 504) = v11;
  *(_DWORD *)(a1 + 508) = v11;
  *(_DWORD *)(a1 + 512) = v11;
  *(_DWORD *)(a1 + 516) = 1065353216;
  v12 = *(_DWORD *)(a1 + 1072);
  *(_DWORD *)(a1 + 520) = v12;
  *(_DWORD *)(a1 + 524) = v12;
  *(_DWORD *)(a1 + 528) = v12;
  *(_DWORD *)(a1 + 532) = 1065353216;
  v13 = *(_DWORD *)(a1 + 1076);
  *(_DWORD *)(a1 + 536) = v13;
  *(_DWORD *)(a1 + 540) = v13;
  *(_DWORD *)(a1 + 544) = v13;
  *(_DWORD *)(a1 + 548) = 1065353216;
  v14 = *(_DWORD *)(a1 + 1080);
  *(_DWORD *)(a1 + 552) = v14;
  *(_DWORD *)(a1 + 556) = v14;
  *(_DWORD *)(a1 + 560) = v14;
  v15 = 0.0;
  *(_DWORD *)(a1 + 564) = 1065353216;
  v16 = *(_DWORD *)(a1 + 1088);
  *(_DWORD *)(a1 + 568) = v16;
  *(_DWORD *)(a1 + 572) = v16;
  *(_DWORD *)(a1 + 576) = v16;
  *(_DWORD *)(a1 + 580) = 1065353216;
  v17 = *(_DWORD *)(a1 + 1084);
  *(_DWORD *)(a1 + 584) = v17;
  *(_DWORD *)(a1 + 588) = v17;
  *(_DWORD *)(a1 + 592) = v17;
  *(_DWORD *)(a1 + 596) = 1065353216;
  v18 = *(_DWORD *)(a1 + 1056);
  *(_DWORD *)(a1 + 600) = v18;
  *(_DWORD *)(a1 + 604) = v18;
  *(_DWORD *)(a1 + 608) = v18;
  *(_DWORD *)(a1 + 612) = 1065353216;
  v19 = *(_DWORD *)(a1 + 708);
  *(_DWORD *)(a1 + 696) = *(_DWORD *)(a1 + 1160);
  *(_OWORD *)(a1 + 392) = *(_OWORD *)(a1 + 1092);
  *(_DWORD *)(a1 + 404) = *(_DWORD *)(a1 + 1060);
  v20 = v5
      ^ ((unsigned __int8)v5
       ^ (unsigned __int8)((char)v4 >> 7))
      & 2
      ^ (v3
       ^ (unsigned __int8)(v5 ^ (v5 ^ ((char)v4 >> 7)) & 2))
      & 4
      ^ ((unsigned __int8)(v4 >> 2)
       ^ (unsigned __int8)(v5 ^ (v5 ^ ((char)v4 >> 7)) & 2 ^ (v3 ^ v5 ^ (v5 ^ ((char)v4 >> 7)) & 2) & 4))
      & 8;
  *(_OWORD *)(a1 + 408) = *(_OWORD *)(a1 + 1124);
  *(_DWORD *)(a1 + 420) = *(_DWORD *)(a1 + 1068);
  *(_OWORD *)(a1 + 424) = *(_OWORD *)(a1 + 1108);
  *(_DWORD *)(a1 + 436) = 0;
  *(_DWORD *)(a1 + 688) = *(_DWORD *)(a1 + 1148);
  *(_DWORD *)(a1 + 692) = *(_DWORD *)(a1 + 1064);
  v21 = *(_DWORD *)(a1 + 1164);
  *(_DWORD *)(a1 + 712) = v21;
  *(_DWORD *)(a1 + 716) = *(_DWORD *)(a1 + 1168);
  *(_DWORD *)(a1 + 720) = *(_DWORD *)(a1 + 1172);
  *(_DWORD *)(a1 + 728) = v20 ^ ((unsigned __int8)(4 * v4) ^ (unsigned __int8)v20) & 0x10;
  *(float *)(a1 + 624) = fmaxf(0.0, *(float *)(a1 + 1000));
  v22 = *(_DWORD *)(a1 + 984);
  *(_DWORD *)(a1 + 640) = 1065091072;
  if ( v22 > 0x124924 )
    v22 = 1198372;
  *(_DWORD *)(a1 + 708) = v22;
  if ( v21 == 1 )
    *(_DWORD *)(a1 + 640) = 1047527424;
  if ( (v4 & 0x40) == 0 )
    goto LABEL_9;
  v23 = *(float *)(a1 + 1356);
  v24 = *(float *)(a1 + 1208);
  if ( v24 < v23 )
  {
    v25 = *(float *)(a1 + 1360);
    if ( v24 > (float)(v23 - v25) )
    {
      v15 = (float)(v23 - v24) * (float)(1.0 / v25);
      goto LABEL_10;
    }
LABEL_9:
    v15 = 1.0;
  }
LABEL_10:
  *(float *)(a1 + 636) = (*(float (__fastcall **)(__int64))(*(_QWORD *)a1 + 720LL))(a1) * v15;
  if ( v19 != *(_DWORD *)(a1 + 708) )
  {
    v29 = sub_1409E7DA4(a1: v27, a2: v26, a3: v28);
    *(_DWORD *)(a1 + 620) = 0;
    *(_DWORD *)(a1 + 632) = 0;
    v32 = -1;
    v33 = -1;
    *(float *)(a1 + 628) = (float)((float)v29 / 32767.0) * 3.1415927;
    v31 = 0;
    sub_14010A930(a1: a1 + 840, a2: &v31);
    *(_QWORD *)(a1 + 856) = v32;
    *(_QWORD *)(a1 + 864) = v33;
    v30 = *((volatile signed __int32 **)&v31 + 1);
    if ( *((_QWORD *)&v31 + 1) != 0
      && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v31 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v30)(a1: v30);
      if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(a1: v30);
    }
  }
}