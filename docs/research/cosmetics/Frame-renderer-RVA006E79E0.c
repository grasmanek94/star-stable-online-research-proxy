// Hex-Rays export, baseline 645.348067; descriptive analysis label.
char __fastcall sub_1406E79E0(__int64 a1, __int64 a2)
{
  float *v4; // rax
  float v5; // xmm6_4
  float v6; // xmm7_4
  float v7; // xmm8_4
  float v8; // xmm9_4
  _DWORD *v9; // rax
  int v10; // xmm1_4
  int v11; // xmm0_4
  _DWORD *v12; // rcx
  float v13; // xmm6_4
  float v14; // xmm0_4
  float *v15; // rbx
  _OWORD *v16; // r12
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // r15
  int v22; // eax
  int v23; // ecx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r14
  char v27; // al
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  int v36; // r9d
  _DWORD *v37; // rax
  int v38; // xmm0_4
  int v39; // xmm1_4
  int v40; // xmm2_4
  __int64 v41; // r9
  __int64 v42; // r8
  __int64 v43; // rax
  __int64 v44; // r9
  __int64 v45; // r8
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // r8
  __int64 v49; // rax
  int v50; // edx
  int v51; // r8d
  int v52; // r9d
  char **v54; // rcx
  _DWORD v55[4]; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD v56[4]; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v57[4]; // [rsp+68h] [rbp-A0h] BYREF
  _DWORD v58[6]; // [rsp+78h] [rbp-90h] BYREF
  void **v59; // [rsp+90h] [rbp-78h] BYREF
  int v60; // [rsp+98h] [rbp-70h]
  int v61; // [rsp+9Ch] [rbp-6Ch]
  _QWORD v62[3]; // [rsp+A0h] [rbp-68h] BYREF
  int v63; // [rsp+BCh] [rbp-4Ch]
  int v64; // [rsp+C0h] [rbp-48h]
  _BYTE v65[12]; // [rsp+D0h] [rbp-38h] BYREF
  _DWORD v66[3]; // [rsp+DCh] [rbp-2Ch] BYREF
  _QWORD v67[8]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v68[16]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v69[16]; // [rsp+138h] [rbp+30h] BYREF
  _BYTE v70[32]; // [rsp+148h] [rbp+40h] BYREF
  _BYTE v71[32]; // [rsp+168h] [rbp+60h] BYREF

  if ( a2 == 0 )
  {
    v54 = off_140FB9F90;
    goto LABEL_61;
  }
  if ( *(_BYTE *)(a2 + 380) != 0 )
  {
    v4 = *(float **)(a1 + 149496);
    v5 = v4[16];
    v6 = v4[17];
    v7 = v4[18];
    v8 = v4[19];
  }
  else
  {
    v5 = (float)(unsigned __int8)BYTE2(*(_DWORD *)(a2 + 400)) * 0.0039215689;
    v6 = (float)(unsigned __int8)BYTE1(*(_DWORD *)(a2 + 400)) * 0.0039215689;
    v7 = (float)(unsigned __int8)*(_DWORD *)(a2 + 400) * 0.0039215689;
    v8 = (float)HIBYTE(*(_DWORD *)(a2 + 400)) * 0.0039215689;
  }
  *(_QWORD *)(a1 + 400) = 0;
  *(_QWORD *)(a1 + 204) = 0;
  *(_QWORD *)(a1 + 408) = 0;
  *(_QWORD *)(a1 + 416) = 0;
  *(_QWORD *)(a1 + 424) = 0;
  *(_QWORD *)(a1 + 440) = 0;
  *(_BYTE *)(a1 + 448) = 0;
  *(_DWORD *)(a1 + 436) = 0;
  sub_140710010(a1: *(_QWORD *)(a1 + 147344), a2: 15);
  *(float *)v55 = v5;
  *(float *)&v55[1] = v6;
  *(float *)&v55[2] = v7;
  *(float *)&v55[3] = v8;
  sub_1406DABC0(a1, a2: 7, a3: v55);
  if ( *(_BYTE *)(a1 + 172) == 0 )
  {
    v9 = (_DWORD *)sub_14001CE50(a1: *(_QWORD *)(a1 + 149496) + 112LL);
    v10 = v9[2];
    v11 = v9[1];
    v12 = *(_DWORD **)(a1 + 149496);
    v12[32] = *v9;
    v12[33] = v11;
    v12[34] = v10;
    v12[35] = 0;
  }
  v13 = (float)(*(float *)(*(_QWORD *)&nExitCode + 816LL) * 0.0099999998) + *(float *)(a1 + 10392);
  *(float *)(a1 + 10392) = v13;
  v14 = sub_1409FFE20();
  v15 = *(float **)(a1 + 149496);
  v15[40] = v13;
  v15[41] = (float)(v14 * 0.5) + 0.5;
  v15[42] = sub_140A003B0();
  v15[43] = sub_1409FFE20();
  v16 = (_OWORD *)(a1 + 10320);
  if ( a1 != -10320 || MEMORY[0x44] != 1 )
  {
    *(_OWORD *)(a1 + 148944) = *v16;
    *(_OWORD *)(a1 + 148976) = *(_OWORD *)(a1 + 10368);
    *(_OWORD *)(a1 + 148992) = *(_OWORD *)(a1 + 10336);
    *(_OWORD *)(a1 + 148960) = *(_OWORD *)(a1 + 10352);
    *(float *)(a1 + 148972) = *(float *)(a1 + 10384) * 256.0;
  }
  *(_BYTE *)(a1 + 10388) = 1;
  *(_QWORD *)(a1 + 9728) = a2;
  *(_QWORD *)(a1 + 368) = a2 + 8;
  if ( a2 == -8 )
  {
    v54 = off_140FB9FD0;
LABEL_61:
    if ( (unsigned __int8)sub_140059A00(a1: v54) != 0 )
      __debugbreak();
    sub_1409E7D98(a1: 999);
    __debugbreak();
  }
  *(_OWORD *)(a1 + 10184) = *(_OWORD *)(a2 + 976);
  *(_OWORD *)(a1 + 10200) = *(_OWORD *)(a2 + 992);
  *(_OWORD *)(a1 + 10216) = *(_OWORD *)(a2 + 1008);
  *(_OWORD *)(a1 + 10232) = *(_OWORD *)(a2 + 1024);
  sub_140A9F340(a1: a1 + 149360, a2: a2 + 320);
  v17 = a1 + 12376;
  *(_QWORD *)(a1 + 12376) = *(_QWORD *)(a2 + 332);
  *(_DWORD *)(a1 + 12384) = *(_DWORD *)(a2 + 340);
  v18 = sub_1406A3E50(a1: a2, a2: v65);
  *(_QWORD *)(a1 + 12388) = *(_QWORD *)v18;
  *(_DWORD *)(a1 + 12396) = *(_DWORD *)(v18 + 8);
  v19 = sub_1406A3E90(a1: a2, a2: v66);
  *(_QWORD *)(a1 + 12400) = *(_QWORD *)v19;
  *(_DWORD *)(a1 + 12408) = *(_DWORD *)(v19 + 8);
  *(_OWORD *)(a1 + 12412) = *(_OWORD *)(a2 + 384);
  v60 = 0;
  v61 = 195948557;
  v59 = &PXEngine::SafeActorPtrAs<CPXTerrain>::`vftable';
  if ( (unsigned __int8)sub_1405F8BA0(a1: a1 + 149832, a2: &v59) != 0 )
  {
    v20 = qword_141379EF0;
    if ( qword_141379EF0 == 0 )
    {
      if ( (unsigned __int8)sub_140059A00(a1: off_140EFA938) != 0 )
        __debugbreak();
      sub_1409E7D98(a1: 999);
      __debugbreak();
    }
    v21 = sub_1406040E0(a1: qword_141379EF0, a2: v68, a3: "World");
    if ( (unsigned __int8)sub_140607410(a1: v20, a2: v21, a3: 60) != 0 )
    {
      sub_1405F8B70(a1: v56, a2: *(unsigned int *)(v21 + 12), a3: *(unsigned int *)(v21 + 8));
      v22 = v56[3];
      v23 = v56[2];
    }
    else
    {
      v23 = 0;
      v22 = 195948557;
    }
    *(_DWORD *)(a1 + 149840) = v23;
    *(_DWORD *)(a1 + 149844) = v22;
    v17 = a1 + 12376;
  }
  v24 = sub_1405F8CF0(a1: a1 + 149832);
  v26 = v24;
  if ( v24 != 0 )
  {
    *(float *)(a1 + 149848) = sub_1401A7870(a1: v24, a2: v17);
    *(float *)(a1 + 149852) = sub_1401A5D50(a1: v26);
    v27 = sub_1401A7C20(a1: v26);
  }
  else
  {
    v63 = 195948557;
    v64 = -23693671;
    *(_DWORD *)(a1 + 149840) = 0;
    *(_DWORD *)(a1 + 149844) = 195948557;
    *(_DWORD *)(a1 + 149848) = -23693671;
    *(_DWORD *)(a1 + 149852) = 0;
    v27 = 0;
  }
  *(_BYTE *)(a1 + 149856) = v27;
  v28 = *(unsigned int *)(a1 + 149848);
  *(_DWORD *)(qword_141379EF8 + 352) = v28;
  if ( *(_QWORD *)(a1 + 384) != 0 && *(_BYTE *)(a1 + 172) != 0 && *(_BYTE *)(a1 + 10316) == 0 )
  {
    v29 = sub_1400B5440(a1: v28, a2: v25);
    v30 = sub_1406040E0(a1: v29, a2: v69, a3: "Player");
    v31 = sub_1405F8CF0(a1: v30);
    if ( v31 != 0 )
    {
      sub_1405F8B50(a1: v62, a2: v31 + 32);
      v62[0] = &PXEngine::SafeActorPtrAs<CPXSpace>::`vftable';
      v32 = sub_1405F8CF0(a1: v62);
      if ( v32 == 0 )
      {
        if ( (unsigned __int8)sub_140059A00(a1: off_140F07B60) != 0 )
          __debugbreak();
        sub_1409E7D98(a1: 999);
        __debugbreak();
      }
      if ( *(_DWORD *)(v32 + 384) != 0 )
      {
        sub_1406DB000(
          a1,
          a2: *(_QWORD *)(a1 + 384),
          a3: 7,
          a4: (unsigned int)&xmmword_140EF3ED0,
          a5: (__int64)"Render ShadowMap",
          a6: 0);
        sub_1406ED000(a1);
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, a2: 0);
      }
    }
  }
  sub_1406F2EC0(a1, a2: a2 + 492);
  qmemcpy(v67, (const void *)(a2 + 428), sizeof(v67));
  sub_1406F1850(a1, a2: v67);
  if ( *(_BYTE *)(a1 + 10316) == 0 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 88LL))(a1, a2: a2 + 96);
  sub_1406F38B0(a1, a2);
  if ( a1 != -10320 || MEMORY[0x44] != 1 )
  {
    *(_OWORD *)(a1 + 148944) = *v16;
    *(_OWORD *)(a1 + 148976) = *(_OWORD *)(a1 + 10368);
    *(_OWORD *)(a1 + 148992) = *(_OWORD *)(a1 + 10336);
    *(_OWORD *)(a1 + 148960) = *(_OWORD *)(a1 + 10352);
    *(float *)(a1 + 148972) = *(float *)(a1 + 10384) * 256.0;
  }
  *(_BYTE *)(a1 + 10388) = 1;
  sub_1406E4000(a1);
  sub_1406E4420(a1);
  if ( a1 == -10248 )
    sub_14005A4C0(a1: v34, a2: v33, a3: v35);
  ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))sub_14009EEA0)(
    a1: a1 + 10248,
    a2: v33,
    a3: v35,
    a4: v36,
    a5: (float)*(int *)(a2 + 108),
    a6: *(_DWORD *)(a2 + 112),
    a7: *(_DWORD *)(a2 + 116));
  v37 = *(_DWORD **)(a1 + 149496);
  v38 = v37[19];
  v39 = v37[18];
  v40 = v37[17];
  if ( *(_BYTE *)(a1 + 173) != 0 )
  {
    v57[0] = v37[16];
    v57[1] = v40;
    v57[2] = v39;
    v57[3] = v38;
    sub_1406DB000(a1, a2: *(_QWORD *)(a1 + 216), a3: 7, a4: (unsigned int)v57, a5: (__int64)"Render Main Scene", a6: 0);
    v42 = *(_QWORD *)(a1 + 384);
    if ( v42 != 0 && *(_BYTE *)(a1 + 172) != 0 && *(_BYTE *)(a1 + 10316) == 0 )
    {
      LOBYTE(v41) = 1;
      sub_1406F0E30(a1, a2: 5, a3: v42, a4: v41);
    }
    sub_1406EC8D0(a1, a2: a2 + 8);
    v43 = sub_1406E36C0(a1);
    if ( v43 != 0 )
      sub_140672F80(a1: v43);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, a2: 0);
  }
  else
  {
    v58[0] = v37[16];
    v58[1] = v40;
    v58[2] = v39;
    v58[3] = v38;
    sub_1406DABC0(a1, a2: 7, a3: v58);
    v45 = *(_QWORD *)(a1 + 384);
    if ( v45 != 0 && *(_BYTE *)(a1 + 172) != 0 && *(_BYTE *)(a1 + 10316) == 0 )
    {
      LOBYTE(v44) = 1;
      sub_1406F0E30(a1, a2: 5, a3: v45, a4: v44);
    }
    sub_1406EC8D0(a1, a2: a2 + 8);
  }
  v46 = *(_QWORD *)(a1 + 147480);
  if ( v46 != 0 )
    sub_140738430(a1: v46, a2: a1);
  *(_QWORD *)(a1 + 10176) = 0;
  sub_140A9F410(a1: a1 + 149360, a2: a2 + 556);
  sub_140A9F340(a1: a1 + 149360, a2: &qword_140EF4CC0);
  if ( *(_BYTE *)(a1 + 173) != 0 )
  {
    *(_BYTE *)(a1 + 12738) = 1;
    v47 = sub_1406E36C0(a1);
    v48 = v47;
    if ( v47 != 0 && (unsigned int)((*(_QWORD *)(v47 + 240) - *(_QWORD *)(v47 + 232)) / 24LL) != 0
      || *(_BYTE *)(a1 + 173) != 0
      && (v49 = sub_1406E36C0(a1), v48 = v49, v49 != 0)
      && (unsigned int)((*(_QWORD *)(v49 + 240) - *(_QWORD *)(v49 + 232)) / 24LL) != 0 )
    {
      sub_140672610(a1: v48);
    }
    *(_BYTE *)(a1 + 12738) = 0;
  }
  sub_14070E4B0(a1: v70, a2: "Render GUI");
  sub_1406F0650(a1, a2: a2 + 8);
  sub_14070E540(a1: v70);
  sub_14070E4B0(a1: v71, a2: "Render GUI 2.0");
  *(_BYTE *)(a1 + 147472) = 1;
  ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))sub_14009EEA0)(
    a1: a1 + 10248,
    a2: v50,
    a3: v51,
    a4: v52,
    a5: (float)*(int *)(a2 + 108),
    a6: *(_DWORD *)(a2 + 112),
    a7: *(_DWORD *)(a2 + 116));
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 88LL))(a1, a2: a2 + 96);
  sub_1406EC6C0(a1, a2: a2 + 8, a3: 12);
  *(_BYTE *)(a1 + 147472) = 0;
  sub_14070E540(a1: v71);
  sub_1406E1930(a1);
  return 1;
}