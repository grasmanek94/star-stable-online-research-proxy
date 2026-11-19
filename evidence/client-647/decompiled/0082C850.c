char __fastcall sub_14082C850(__int64 a1, __int16 a2, _DWORD *a3)
{
  __int64 *v6; // r8
  __int64 *v7; // rcx
  __int64 *i; // rax
  __int64 v9; // rax
  char v10; // al
  __int64 *v11; // r8
  __int64 *v12; // rcx
  __int64 *j; // rax
  __int64 v14; // rax
  __int64 *v15; // r8
  __int64 *v16; // rcx
  __int64 *k; // rax
  __int64 v18; // rax
  __int64 *v19; // r8
  __int64 *v20; // rcx
  __int64 *m; // rax
  __int64 v22; // rax
  int v23; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int64 v24; // [rsp+28h] [rbp-58h] BYREF
  _DWORD *v25; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v26; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 v27; // [rsp+40h] [rbp-40h] BYREF
  __int64 v28; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v29[8]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v30[5]; // [rsp+58h] [rbp-28h] BYREF
  int v31; // [rsp+98h] [rbp+18h] BYREF
  unsigned __int64 v32; // [rsp+A8h] [rbp+28h] BYREF

  switch ( a2 )
  {
    case 331:
      sub_14082B390(a1, a2: a3);
      return 1;
    case 333:
      v25 = a3;
      v26 = 0;
      v27 = 0;
      v28 = 0;
      v29[0] = 0;
      v24 = 0;
      if ( sub_1402AF380(a1: a3, a2: &v24) == 0
        || (v26 = v24, v31 = v27, sub_1401D0820(a1: a3, a2: &v31) == 0)
        || (LODWORD(v27) = v31, LODWORD(v32) = HIDWORD(v27), sub_1401D0820(a1: a3, a2: &v32) == 0)
        || (HIDWORD(v27) = v32, v23 = v28, sub_1401D0820(a1: a3, a2: &v23) == 0)
        || (LODWORD(v28) = v23, sub_1402B7CD0(a1: &v25, a2: (int *)&v28 + 1) == 0)
        || (*(unsigned __int8 (__fastcall **)(_DWORD *, _BYTE *, __int64))(*(_QWORD *)a3 + 16LL))(
             a1: a3,
             a2: v29,
             a3: 1) == 0 )
      {
        v10 = sub_140059D90(
                a1: off_141025178,
                a2: "GardenCentre::PlantItemResponse Failed to deserialize GardeningPlantItemMessageResponse!");
        goto LABEL_65;
      }
      v6 = *(__int64 **)(a1 + 216);
      v7 = v6;
      for ( i = (__int64 *)v6[1]; *((_BYTE *)i + 25) == 0; i = (__int64 *)*i )
      {
        if ( i[4] >= v26 )
          v7 = i;
        else
          i += 2;
      }
      if ( *((_BYTE *)v7 + 25) != 0 || v26 < v7[4] || v7 == v6 )
        return 1;
      v9 = sub_1405F1EE0(a1: (__int64)(v7 + 5));
      if ( v9 == 0 )
      {
        if ( (unsigned __int8)sub_140059CA0(a1: off_141024990) != 0 )
          __debugbreak();
        sub_1409E29B8(a1: 999);
        __debugbreak();
      }
      sub_14081EF70(a1: v9, a2: &v26);
      return 1;
    case 335:
      sub_14082B7F0(a1, a2: a3);
      return 1;
    case 337:
      LODWORD(v26) = -1;
      v27 = 0;
      LODWORD(v28) = 0;
      BYTE4(v28) = 0;
      v31 = -1;
      if ( sub_1401D0820(a1: a3, a2: &v31) == 0
        || (LODWORD(v26) = v31, v24 = v27, sub_1402AF380(a1: a3, a2: &v24) == 0)
        || (v27 = v24, LODWORD(v32) = v28, sub_1401D0820(a1: a3, a2: &v32) == 0)
        || (LODWORD(v28) = v32,
            (*(unsigned __int8 (__fastcall **)(_DWORD *, char *, __int64))(*(_QWORD *)a3 + 16LL))(
              a1: a3,
              a2: (char *)&v28 + 4,
              a3: 1) == 0) )
      {
        v10 = sub_140059D90(
                a1: off_141025418,
                a2: "GardenCentre::DestroyItemResponse Failed to deserialize GardeningDestroyItemMessageResponse!");
        goto LABEL_65;
      }
      v11 = *(__int64 **)(a1 + 216);
      v12 = v11;
      for ( j = (__int64 *)v11[1]; *((_BYTE *)j + 25) == 0; j = (__int64 *)*j )
      {
        if ( j[4] >= v27 )
          v12 = j;
        else
          j += 2;
      }
      if ( *((_BYTE *)v12 + 25) != 0 || v27 < v12[4] || v12 == v11 )
        return 1;
      v14 = sub_1405F1EE0(a1: (__int64)(v12 + 5));
      if ( v14 == 0 )
      {
        if ( (unsigned __int8)sub_140059CA0(a1: off_141024990) != 0 )
          __debugbreak();
        sub_1409E29B8(a1: 999);
        __debugbreak();
      }
      sub_14081DC70(a1: v14, a2: &v26);
      return 1;
    case 339:
      sub_14082AF00(a1, a2: a3);
      return 1;
    case 341:
      v26 = 0;
      v27 = 0;
      LOBYTE(v28) = 0;
      v30[0] = &v28;
      v30[1] = (char *)&v27 + 4;
      v30[2] = &v27;
      v30[3] = &v26;
      if ( (unsigned __int8)sub_140829550(a1: a3, a2: v30) == 0 )
      {
        v10 = sub_140059D90(
                a1: off_1410255A8,
                a2: "GardenCentre::PlantItemResponse Failed to deserialize GardeningPlantItemMessageResponse!");
        goto LABEL_65;
      }
      v15 = *(__int64 **)(a1 + 216);
      v16 = v15;
      for ( k = (__int64 *)v15[1]; *((_BYTE *)k + 25) == 0; k = (__int64 *)*k )
      {
        if ( k[4] >= v26 )
          v16 = k;
        else
          k += 2;
      }
      if ( *((_BYTE *)v16 + 25) != 0 || v26 < v16[4] || v16 == v15 )
        return 1;
      v18 = sub_1405F1EE0(a1: (__int64)(v16 + 5));
      if ( v18 == 0 )
      {
        if ( (unsigned __int8)sub_140059CA0(a1: off_141024990) != 0 )
          __debugbreak();
        sub_1409E29B8(a1: 999);
        __debugbreak();
      }
      sub_14081DCE0(a1: v18, a2: &v26);
      return 1;
    case 343:
      v26 = 0;
      LODWORD(v27) = 0;
      LOBYTE(v28) = 0;
      WORD2(v28) = 0;
      v32 = 0;
      if ( sub_1402AF380(a1: a3, a2: &v32) == 0
        || (v26 = v32, v31 = v27, sub_1401D0820(a1: a3, a2: &v31) == 0)
        || (LODWORD(v27) = v31, (unsigned __int8)sub_140829610(a1: a3, a2: (char *)&v27 + 4) == 0)
        || sub_1402B8840(a1: (__int64 *)a3, a2: (char *)&v28 + 4) == 0
        || (*(unsigned __int8 (__fastcall **)(_DWORD *, char *, __int64))(*(_QWORD *)a3 + 16LL))(
             a1: a3,
             a2: (char *)&v28 + 5,
             a3: 1) == 0 )
      {
        v10 = sub_140059D90(
                a1: off_1410257B0,
                a2: "GardenCentre::ModifyParameterResponse Failed to deserialize GardeningModifyParameterMessageResponse!");
LABEL_65:
        if ( v10 != 0 )
          __debugbreak();
        return 1;
      }
      v19 = *(__int64 **)(a1 + 216);
      v20 = v19;
      for ( m = (__int64 *)v19[1]; *((_BYTE *)m + 25) == 0; m = (__int64 *)*m )
      {
        if ( m[4] >= v26 )
          v20 = m;
        else
          m += 2;
      }
      if ( *((_BYTE *)v20 + 25) != 0 || v26 < v20[4] || v20 == v19 )
        return 1;
      v22 = sub_1405F1EE0(a1: (__int64)(v20 + 5));
      if ( v22 == 0 )
      {
        if ( (unsigned __int8)sub_140059CA0(a1: off_141024990) != 0 )
          __debugbreak();
        sub_1409E29B8(a1: 999);
        __debugbreak();
      }
      sub_14081E520(a1: v22, a2: &v26);
      return 1;
    default:
      return 0;
  }
}