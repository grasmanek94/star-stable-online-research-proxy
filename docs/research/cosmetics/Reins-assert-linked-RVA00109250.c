// Hex-Rays export; function matched through nearby assertion-record references; confirm role in the text.
__int64 __fastcall sub_140109250(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  float v7; // xmm0_4
  unsigned __int64 v8; // rbx
  __int64 i; // rcx
  __int64 v10; // rdi
  _QWORD *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rax
  unsigned __int64 v19; // rsi
  __int64 v20; // rbx
  _QWORD *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD v25[2]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v26; // [rsp+30h] [rbp-58h] BYREF
  __int64 v27; // [rsp+40h] [rbp-48h]
  __int64 v28; // [rsp+48h] [rbp-40h]

  sub_1400EA230(a1: a2, a2: v25);
  if ( v25[0] == 0 || (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)v25[0] + 544LL))(a1: v25[0]) != 8 )
    return sub_14064F3F0(a1: v25[1]);
  v3 = *(_QWORD *)&nExitCode;
  v4 = v25[0];
  if ( *(_QWORD *)&nExitCode != 0 )
  {
    if ( v25[0] == 0 )
    {
      if ( (unsigned __int8)sub_140059A00(a1: off_140EFD7E8) != 0 )
        __debugbreak();
      sub_1409E7D98(a1: 999);
      __debugbreak();
    }
    v5 = (*(__int64 (**)(void))(*(_QWORD *)v25[0] + 176LL))();
    v6 = sub_140017070(a1: &v26, a2: v5);
    v7 = sub_1406291B0(a1: v3, a2: v6);
    if ( v7 != -1.0 )
    {
LABEL_24:
      *(float *)(a1 + 160) = v7;
      return sub_14064F3F0(a1: v25[1]);
    }
    v8 = 0;
    for ( i = v25[0]; v25[0] != 0; i = v25[0] )
    {
      v10 = *(_QWORD *)(i + 200);
      if ( v8 >= (*(_QWORD *)(i + 208) - v10) >> 3 )
        return sub_14064F3F0(a1: v25[1]);
      if ( i == 0 )
        break;
      v11 = *(_QWORD **)(v10 + 8 * v8);
      v12 = (*(__int64 (__fastcall **)(_QWORD *))(*v11 + 176LL))(a1: v11);
      if ( (unsigned int)sub_140E79EA0(a1: v12, a2: "HorseBody") == 0
        || (v13 = (*(__int64 (__fastcall **)(_QWORD *))(*v11 + 176LL))(a1: v11),
            (unsigned int)sub_140E79EA0(a1: v13, a2: "horsebody") == 0) )
      {
        v14 = sub_14067BD40(a1: v11[11]);
        *(float *)(a1 + 160) = (float)(*(float *)(v14 + 16) - *(float *)(v14 + 4)) * 0.115;
        if ( v25[0] == 0 )
        {
          if ( (unsigned __int8)sub_140059A00(a1: off_140EFD7E8) != 0 )
            __debugbreak();
          sub_1409E7D98(a1: 999);
          __debugbreak();
        }
        v15 = *(_QWORD *)&nExitCode;
        v16 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v25[0] + 176LL))(a1: v25[0]);
        v26 = 0;
        v27 = 0;
        v28 = 0;
        v17 = sub_140E79C30(a1: v16);
        sub_14000D850(a1: &v26, a2: v16, a3: v17);
        sub_1406357D0(a1: v15, a2: &v26);
        return sub_14064F3F0(a1: v25[1]);
      }
      ++v8;
    }
LABEL_26:
    if ( (unsigned __int8)sub_140059A00(a1: off_140EFD7E8) != 0 )
      __debugbreak();
    sub_1409E7D98(a1: 999);
    __debugbreak();
  }
  v19 = 0;
  if ( v25[0] == 0 )
    goto LABEL_26;
  while ( 1 )
  {
    v20 = *(_QWORD *)(v4 + 200);
    if ( v19 >= (*(_QWORD *)(v4 + 208) - v20) >> 3 )
      return sub_14064F3F0(a1: v25[1]);
    if ( v4 == 0 )
      goto LABEL_26;
    v21 = *(_QWORD **)(v20 + 8 * v19);
    v22 = (*(__int64 (__fastcall **)(_QWORD *))(*v21 + 176LL))(a1: v21);
    if ( (unsigned int)sub_140E79EA0(a1: v22, a2: "HorseBody") == 0
      || (v23 = (*(__int64 (__fastcall **)(_QWORD *))(*v21 + 176LL))(a1: v21),
          (unsigned int)sub_140E79EA0(a1: v23, a2: "horsebody") == 0) )
    {
      v24 = sub_14067BD40(a1: v21[11]);
      v7 = (float)(*(float *)(v24 + 16) - *(float *)(v24 + 4)) * 0.115;
      goto LABEL_24;
    }
    ++v19;
    v4 = v25[0];
    if ( v25[0] == 0 )
      goto LABEL_26;
  }
}