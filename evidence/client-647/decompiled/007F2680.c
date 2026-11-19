__int64 __fastcall sub_1407F2680(__int64 a1, unsigned int a2, __int64 a3)
{
  _QWORD *v5; // r14
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 result; // rax
  void *v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rcx
  void *v16; // rcx
  __int64 v17; // rdx
  unsigned int v18; // ecx
  __int64 v19; // rax
  _BYTE v20[8]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v21; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD *v22; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v23[6]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v24; // [rsp+70h] [rbp-90h] BYREF
  __int128 *v25; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v26[6]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v27[16]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v28[48]; // [rsp+C0h] [rbp-40h] BYREF
  char v29; // [rsp+F0h] [rbp-10h]
  char v30; // [rsp+F8h] [rbp-8h]
  __int64 v31; // [rsp+100h] [rbp+0h] BYREF
  __int128 v32; // [rsp+108h] [rbp+8h]
  __int128 v33; // [rsp+118h] [rbp+18h]
  _QWORD v34[6]; // [rsp+128h] [rbp+28h]
  __int64 v35; // [rsp+158h] [rbp+58h]
  int v36; // [rsp+160h] [rbp+60h]
  _QWORD v37[6]; // [rsp+168h] [rbp+68h] BYREF
  __int64 v38; // [rsp+198h] [rbp+98h]
  _BYTE v39[104]; // [rsp+1A0h] [rbp+A0h] BYREF
  int v40; // [rsp+208h] [rbp+108h] BYREF
  __int16 v41; // [rsp+20Ch] [rbp+10Ch]
  _DWORD v42[2]; // [rsp+210h] [rbp+110h] BYREF
  __int128 v43; // [rsp+218h] [rbp+118h]
  __int64 v44; // [rsp+228h] [rbp+128h] BYREF
  __int64 v45; // [rsp+230h] [rbp+130h]
  __int64 v46; // [rsp+238h] [rbp+138h]
  int v47; // [rsp+240h] [rbp+140h] BYREF
  char v48; // [rsp+244h] [rbp+144h] BYREF
  __int128 v49; // [rsp+248h] [rbp+148h] BYREF
  __int64 v50; // [rsp+258h] [rbp+158h]
  unsigned __int64 v51; // [rsp+260h] [rbp+160h]
  char v52; // [rsp+268h] [rbp+168h]
  char v53; // [rsp+269h] [rbp+169h]
  __int16 v54; // [rsp+26Ah] [rbp+16Ah]
  int v55; // [rsp+26Ch] [rbp+16Ch]
  int v56; // [rsp+270h] [rbp+170h]
  _DWORD v57[7]; // [rsp+274h] [rbp+174h] BYREF
  int v58; // [rsp+290h] [rbp+190h]
  int v59; // [rsp+294h] [rbp+194h]

  v5 = (_QWORD *)(a1 + 256);
  if ( a1 == -256 || *(_BYTE *)(a1 + 320) != 2 )
  {
    v6 = 0;
    v7 = 1;
  }
  else
  {
    v6 = a1 + 256;
    v7 = a1 + 257;
  }
  if ( v6 != 0 )
  {
    v8 = 384;
    if ( *(_BYTE *)v7 == 0 )
      v8 = 328;
    qmemcpy(v37, (const void *)(a1 + v8), sizeof(v37));
    v38 = *(_QWORD *)(a1 + v8 + 48);
    LODWORD(v21) = a2;
    v9 = *(_QWORD *)(a3 + 56);
    if ( v9 == 0 )
    {
      sub_1409D2AC0(a1: 0);
      __debugbreak();
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64 *, _QWORD *))(*(_QWORD *)v9 + 16LL))(
           a1: v9,
           a2: a1 + 24,
           a3: &v21,
           a4: v37) == 0 )
    {
      sub_140736DD0(a1: a1 + 24, a2: 0, a3: a2);
      v47 = 255;
      v48 = 0;
      v49 = 0;
      v50 = 0;
      v51 = 15;
      LOBYTE(v49) = 0;
      memset(&v23[1], 0, 20);
      v23[0] = &PXEngine::ByteStreamWriter::`vftable';
      v25 = &v49;
      v26[0] = &v48;
      v26[1] = &v47;
      v21 = (__int64)v23;
      if ( (unsigned __int8)sub_1407AFD20(a1: &v25, a2: &v21, a3: 0) != 0 )
      {
        LOWORD(v25) = word_141314008;
        sub_140A255B0(a1: v26, a2: v23);
        LOWORD(v40) = (_WORD)v25;
        sub_140A255B0(a1: v42, a2: v26);
        LOBYTE(v45) = 1;
        sub_140A25690(a1: v26);
      }
      else
      {
        LOBYTE(v45) = 0;
      }
      result = sub_140A25690(a1: v23);
      if ( (_BYTE)v45 == 0 )
      {
        if ( v51 <= 0xF )
          return result;
        v11 = (void *)v49;
        if ( v51 + 1 < 0x1000 )
          return sub_1409DB4C0(lpMem: v11);
        if ( (unsigned __int64)(v49 - *(_QWORD *)(v49 - 8) - 8) <= 0x1F )
        {
          v11 = *(void **)(v49 - 8);
          return sub_1409DB4C0(lpMem: v11);
        }
LABEL_46:
        __fastfail(5u);
      }
      v12 = HIDWORD(v43);
      v13 = sub_1409DBF00(a1: HIDWORD(v43));
      v14 = v13;
      if ( v13 != 0 )
        sub_140E827B0(a1: v13, a2: 0, a3: v12);
      else
        v14 = 0;
      v22 = (_QWORD *)v14;
      if ( (_BYTE)v45 == 0 )
        goto LABEL_47;
      sub_140083990(a1: v14, a2: v43, a3: HIDWORD(v43));
      v52 = 0;
      v54 = 0;
      v55 = 0;
      v56 = -1;
      *(_OWORD *)v57 = 0;
      sub_1409CB2E0(a1: &v57[5]);
      v58 = 0;
      v52 = 0;
      if ( (_BYTE)v45 == 0 )
LABEL_47:
        __fastfail(5u);
      v54 = v40;
      v55 = 0;
      v56 = *(_DWORD *)(a1 + 64);
      *(_OWORD *)v57 = *(_OWORD *)(a1 + 72);
      v26[4] = &v31;
      v22 = nullptr;
      v24 = &v21;
      v15 = *(_QWORD *)(a1 + 24);
      LOBYTE(v23[0]) = 0;
      BYTE1(v23[0]) = v53;
      WORD1(v23[0]) = v40;
      *(_QWORD *)((char *)v23 + 4) = __PAIR64__(v56, 0);
      qmemcpy((char *)&v23[1] + 4, v57, 28);
      LODWORD(v23[5]) = 0;
      HIDWORD(v23[5]) = v59;
      v31 = v15;
      v32 = *(_OWORD *)(a1 + 32);
      v33 = *(_OWORD *)(a1 + 48);
      qmemcpy(v34, v23, sizeof(v34));
      v21 = 0;
      v35 = v14;
      v36 = HIDWORD(v43);
      if ( HIDWORD(v43) != 0 && v14 == 0 && (unsigned __int8)sub_140059CA0(a1: off_141018FF8) != 0 )
        __debugbreak();
      if ( v21 != 0 )
        sub_1409DB4C0(lpMem: (LPVOID)v21);
      v21 = 19937;
      sub_140736840(a1: v39, a2: &v31);
      if ( v35 != 0 )
        sub_1409DB4C0(lpMem: (LPVOID)v35);
      v35 = 19937;
      sub_1407F1BC0(a1: a1 + 192, a2: v39);
      if ( (_BYTE)v45 != 0 )
      {
        sub_140A25690(a1: v42);
        LOBYTE(v45) = 0;
      }
      if ( v51 > 0xF )
      {
        v16 = (void *)v49;
        if ( v51 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v49 - *(_QWORD *)(v49 - 8) - 8) > 0x1F )
            goto LABEL_46;
          v16 = *(void **)(v49 - 8);
        }
        sub_1409DB4C0(lpMem: v16);
      }
    }
  }
  if ( *(char *)(a1 + 320) == -1 )
    sub_140466030(a1: v27, a2: &v24);
  result = *(char *)(a1 + 320);
  if ( result == 1 )
  {
    while ( 1 )
    {
      (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 8) + 40LL))(a1: *(_QWORD *)(a1 + 8), a2: &v21);
      v17 = *(unsigned int *)(a1 + 308);
      result = v17 + 2000;
      if ( (unsigned int)v21 != v17 + 2000 && (unsigned int)v21 < (unsigned __int64)(v17 + 2000) )
        break;
      v18 = *(_DWORD *)(a1 + 312);
      if ( v18 >= 8 )
      {
        v20[0] = 0;
        sub_1407F3210(a1: *v5, a2: v20);
        v29 = 0;
        v30 = 1;
        v22 = v5;
        result = sub_1407F0C00(a1: 1, a2: &v22, a3: v27);
        if ( v30 != 0 )
        {
          result = v29 + 1LL;
          if ( v29 != -1 )
          {
            result = v29;
            if ( v29 != 0 && v29 == 1 )
            {
              sub_140A25690(a1: v28);
              return sub_140017CB0(a1: v27);
            }
          }
        }
        return result;
      }
      *(_DWORD *)(a1 + 308) = v17 + 2000;
      *(_DWORD *)(a1 + 312) = v18 + 1;
      v40 = 1;
      v41 = 1;
      v42[0] = -1;
      v42[1] = 0;
      v43 = 0;
      sub_1409CB2E0(a1: &v44);
      v45 = 0;
      v46 = 0;
      v19 = sub_140801580(a1: (__int64)&v40, a2: a1 + 272);
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 8) + 16LL))(a1: *(_QWORD *)(a1 + 8), a2: v19);
    }
  }
  return result;
}