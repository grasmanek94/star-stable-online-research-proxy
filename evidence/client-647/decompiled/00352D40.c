__int64 __fastcall sub_140352D40(__int64 a1, int *a2)
{
  unsigned int v4; // r15d
  unsigned int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  int v10; // eax
  void *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 i; // rdx
  char **v24; // rcx
  void **v25; // [rsp+20h] [rbp-E0h] BYREF
  int v26; // [rsp+28h] [rbp-D8h]
  int v27; // [rsp+2Ch] [rbp-D4h]
  _QWORD v28[3]; // [rsp+30h] [rbp-D0h] BYREF
  int v29; // [rsp+48h] [rbp-B8h]
  __int16 v30; // [rsp+50h] [rbp-B0h]
  _BYTE v31[32]; // [rsp+58h] [rbp-A8h] BYREF
  __int16 v32; // [rsp+78h] [rbp-88h] BYREF
  char v33[32]; // [rsp+80h] [rbp-80h] BYREF
  char v34; // [rsp+A0h] [rbp-60h]
  int v35; // [rsp+B0h] [rbp-50h]
  int v36; // [rsp+B4h] [rbp-4Ch]
  _QWORD v37[3]; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v38; // [rsp+D0h] [rbp-30h]
  int v39; // [rsp+D8h] [rbp-28h]
  char v40; // [rsp+DCh] [rbp-24h]
  __int128 v41; // [rsp+E0h] [rbp-20h]
  __int64 v42; // [rsp+F0h] [rbp-10h]
  int v43; // [rsp+F8h] [rbp-8h]
  int v44; // [rsp+FCh] [rbp-4h]
  int v45; // [rsp+100h] [rbp+0h]
  int v46; // [rsp+104h] [rbp+4h]
  char v47; // [rsp+108h] [rbp+8h]
  char v48; // [rsp+109h] [rbp+9h]
  char v49; // [rsp+10Ah] [rbp+Ah]
  char v50; // [rsp+10Bh] [rbp+Bh]
  int v51; // [rsp+10Ch] [rbp+Ch]
  int v52; // [rsp+110h] [rbp+10h]
  int v53; // [rsp+114h] [rbp+14h]
  int v54; // [rsp+118h] [rbp+18h]
  int v55; // [rsp+11Ch] [rbp+1Ch]
  int v56; // [rsp+120h] [rbp+20h]
  int v57; // [rsp+124h] [rbp+24h]
  int v58; // [rsp+128h] [rbp+28h]
  int v59; // [rsp+12Ch] [rbp+2Ch]
  int v60; // [rsp+130h] [rbp+30h]
  __int64 v61; // [rsp+134h] [rbp+34h]
  int v62; // [rsp+13Ch] [rbp+3Ch]
  char v63; // [rsp+140h] [rbp+40h]
  char v64[8]; // [rsp+148h] [rbp+48h] BYREF
  _BYTE v65[16]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v66[24]; // [rsp+160h] [rbp+60h] BYREF
  __int64 v67; // [rsp+178h] [rbp+78h]
  __int64 v68; // [rsp+180h] [rbp+80h]
  char v69; // [rsp+188h] [rbp+88h]
  __int64 v70; // [rsp+18Ch] [rbp+8Ch]
  int v71; // [rsp+194h] [rbp+94h]
  __int64 v72; // [rsp+198h] [rbp+98h]
  int v73; // [rsp+1A0h] [rbp+A0h]
  __int128 v74; // [rsp+1A4h] [rbp+A4h]
  __int128 v75; // [rsp+1B4h] [rbp+B4h]
  __int64 v76; // [rsp+1C4h] [rbp+C4h]
  int v77; // [rsp+1CCh] [rbp+CCh]
  int v78; // [rsp+1D0h] [rbp+D0h]
  __int16 v79; // [rsp+1D4h] [rbp+D4h]
  char v80; // [rsp+1D6h] [rbp+D6h]
  char v81; // [rsp+1D7h] [rbp+D7h]

  v4 = 0;
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 152);
  if ( (*(_QWORD *)(a1 + 160) - v6) >> 4 != 0 )
  {
    while ( 1 )
    {
      if ( v5 >= (unsigned __int64)((*(_QWORD *)(a1 + 160) - v6) >> 4) )
        goto LABEL_18;
      v7 = sub_1405F1EE0(a1: v6 + 16LL * v5);
      if ( v7 == 0 )
      {
        if ( (unsigned __int8)sub_140059CA0(a1: off_140F78880) != 0 )
          __debugbreak();
        sub_1409E29B8(a1: 999);
        __debugbreak();
      }
      LOBYTE(v8) = 1;
      v9 = sub_1401E09C0(a1: v7, a2: v8);
      v35 = *(_DWORD *)v9;
      v36 = *(_DWORD *)(v9 + 4);
      sub_140016F80(a1: v37, a2: v9 + 8);
      v39 = *(_DWORD *)(v9 + 40);
      v40 = *(_BYTE *)(v9 + 44);
      v41 = *(_OWORD *)(v9 + 48);
      v42 = *(_QWORD *)(v9 + 64);
      v43 = *(_DWORD *)(v9 + 72);
      v44 = *(_DWORD *)(v9 + 76);
      v45 = *(_DWORD *)(v9 + 80);
      v46 = *(_DWORD *)(v9 + 84);
      v47 = *(_BYTE *)(v9 + 88);
      v48 = *(_BYTE *)(v9 + 89);
      v49 = *(_BYTE *)(v9 + 90);
      v50 = *(_BYTE *)(v9 + 91);
      v51 = *(_DWORD *)(v9 + 92);
      v52 = *(_DWORD *)(v9 + 96);
      v53 = *(_DWORD *)(v9 + 100);
      v54 = *(_DWORD *)(v9 + 104);
      v55 = *(_DWORD *)(v9 + 108);
      v56 = *(_DWORD *)(v9 + 112);
      v57 = *(_DWORD *)(v9 + 116);
      v58 = *(_DWORD *)(v9 + 120);
      v59 = *(_DWORD *)(v9 + 124);
      v60 = *(_DWORD *)(v9 + 128);
      v61 = *(_QWORD *)(v9 + 132);
      v62 = *(_DWORD *)(v9 + 140);
      v63 = *(_BYTE *)(v9 + 144);
      sub_1401D1DC0(a1: v64, a2: v9 + 152);
      v69 = *(_BYTE *)(v9 + 216);
      v70 = *(_QWORD *)(v9 + 220);
      v71 = *(_DWORD *)(v9 + 228);
      v72 = *(_QWORD *)(v9 + 232);
      v73 = *(_DWORD *)(v9 + 240);
      v74 = *(_OWORD *)(v9 + 244);
      v75 = *(_OWORD *)(v9 + 260);
      v76 = *(_QWORD *)(v9 + 276);
      v77 = *(_DWORD *)(v9 + 284);
      v78 = *(_DWORD *)(v9 + 288);
      v79 = *(_WORD *)(v9 + 292);
      v80 = *(_BYTE *)(v9 + 294);
      v81 = *(_BYTE *)(v9 + 295);
      v10 = *a2;
      v67 = 7;
      v68 = 8;
      if ( v35 == v10 )
        break;
      sub_140017A10(a1: v66);
      sub_140082DD0(a1: v65);
      if ( v38 > 0xF )
      {
        v11 = (void *)v37[0];
        if ( v38 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v37[0] - *(_QWORD *)(v37[0] - 8LL) - 8LL) > 0x1F )
            goto LABEL_18;
          v11 = *(void **)(v37[0] - 8LL);
        }
        sub_1409DB4C0(lpMem: v11);
      }
      ++v5;
      v6 = *(_QWORD *)(a1 + 152);
      if ( v5 >= (unsigned __int64)((*(_QWORD *)(a1 + 160) - v6) >> 4) )
        goto LABEL_11;
    }
    v4 = v5;
    sub_140017A10(a1: v66);
    sub_140082DD0(a1: v65);
    sub_14001B5A0(a1: v37);
    v37[0] = 19937;
    v38 = 31;
  }
LABEL_11:
  v28[1] = 0;
  v28[2] = 0;
  v29 = 0;
  v28[0] = &PXEngine::ByteStreamWriter::`vftable';
  LODWORD(v25) = 0;
  if ( sub_1401D0820(a1: v28, a2: &v25) != 0
    && (LODWORD(v25) = 0, sub_1401D0820(a1: v28, a2: &v25) != 0)
    && (LODWORD(v25) = *a2, sub_1401D0820(a1: v28, a2: &v25) != 0) )
  {
    *a2 = (int)v25;
    v30 = word_141313D3C;
    sub_140A255B0(a1: v31, a2: v28);
    v32 = v30;
    sub_140A255B0(a1: v33, a2: v31);
    v34 = 1;
    sub_140A25690(a1: v31);
  }
  else
  {
    v34 = 0;
  }
  sub_140A25690(a1: v28);
  sub_1407EE6B0(a1: &v32);
  v12 = *(_QWORD *)(a1 + 152);
  if ( (int)v4 >= (unsigned __int64)((*(_QWORD *)(a1 + 160) - v12) >> 4) )
LABEL_18:
    __fastfail(5u);
  v13 = 16LL * (int)v4;
  v14 = sub_1405F1EE0(a1: v13 + v12);
  v16 = v14;
  if ( v14 == 0 )
  {
    v24 = off_140F77F80;
    goto LABEL_30;
  }
  LOBYTE(v15) = 1;
  sub_1401F7270(a1: v14, a2: v15);
  v17 = sub_1405F1EE0(a1: (__int64)&off_141311CD0);
  if ( v17 == 0 )
  {
    v24 = off_140F78818;
LABEL_30:
    if ( (unsigned __int8)sub_140059CA0(a1: v24) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  sub_14034C530(a1: v17, a2: 0, a3: v16);
  v26 = 0;
  v27 = 195948557;
  v25 = &PXEngine::SafeActorPtrAs<CPXHorse>::`vftable';
  LOBYTE(v18) = 1;
  v19 = sub_1401E09C0(a1: v16, a2: v18);
  sub_140349780(a1: a1 + 184, a2: v19, a3: &v25);
  sub_1400AF390(a1: v16);
  v20 = v13 + *(_QWORD *)(a1 + 152);
  v21 = *(_QWORD *)(a1 + 160);
  for ( i = v20 + 16; i != v21; i += 16 )
  {
    *(_DWORD *)(v20 + 8) = *(_DWORD *)(i + 8);
    *(_DWORD *)(v20 + 12) = *(_DWORD *)(i + 12);
    v20 += 16;
  }
  (**(void (__fastcall ***)(__int64, _QWORD))(*(_QWORD *)(a1 + 160) - 16LL))(a1: *(_QWORD *)(a1 + 160) - 16LL, a2: 0);
  *(_QWORD *)(a1 + 160) -= 16LL;
  return sub_14034DB20(a1, a2: *(unsigned int *)(a1 + 704));
}