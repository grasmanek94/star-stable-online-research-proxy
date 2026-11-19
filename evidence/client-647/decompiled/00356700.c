void __fastcall sub_140356700(__int64 a1, __int64 *a2)
{
  unsigned __int8 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // r13
  __int16 v11; // bx
  void *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rsi
  char v15; // al
  unsigned int v16; // edi
  __int64 v17; // rax
  __int64 v18; // rax
  _DWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rdi
  unsigned int v23; // edi
  __int64 v24; // r15
  __int64 v25; // rdi
  int v26; // r9d
  __int64 v27; // rdx
  __int64 v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdi
  int v35; // eax
  int v36; // ecx
  _QWORD *v37; // rdi
  unsigned int v38; // edi
  __int64 v39; // r15
  __int64 v40; // rdi
  int v41; // r9d
  __int64 v42; // rdx
  void *v43; // rcx
  char **v44; // rcx
  __int64 v45; // [rsp+30h] [rbp-D0h] BYREF
  int v46; // [rsp+38h] [rbp-C8h]
  int v47; // [rsp+3Ch] [rbp-C4h]
  void **v48; // [rsp+40h] [rbp-C0h] BYREF
  int v49; // [rsp+48h] [rbp-B8h]
  int v50; // [rsp+4Ch] [rbp-B4h]
  void **v51; // [rsp+50h] [rbp-B0h] BYREF
  int v52; // [rsp+58h] [rbp-A8h]
  int v53; // [rsp+5Ch] [rbp-A4h]
  void **v54; // [rsp+60h] [rbp-A0h] BYREF
  int v55; // [rsp+68h] [rbp-98h]
  int v56; // [rsp+6Ch] [rbp-94h]
  void **v57; // [rsp+70h] [rbp-90h] BYREF
  int v58; // [rsp+78h] [rbp-88h]
  int v59; // [rsp+7Ch] [rbp-84h]
  _QWORD v60[3]; // [rsp+80h] [rbp-80h] BYREF
  int v61; // [rsp+98h] [rbp-68h]
  void **v62; // [rsp+A0h] [rbp-60h] BYREF
  int v63; // [rsp+A8h] [rbp-58h]
  int v64; // [rsp+ACh] [rbp-54h]
  void **v65; // [rsp+B0h] [rbp-50h] BYREF
  int v66; // [rsp+B8h] [rbp-48h]
  int v67; // [rsp+BCh] [rbp-44h]
  __int64 v68; // [rsp+C0h] [rbp-40h]
  char v69[8]; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v70; // [rsp+D0h] [rbp-30h]
  unsigned int v71; // [rsp+D4h] [rbp-2Ch]
  char v72[8]; // [rsp+D8h] [rbp-28h] BYREF
  unsigned int v73; // [rsp+E0h] [rbp-20h]
  unsigned int v74; // [rsp+E4h] [rbp-1Ch]
  char v75[8]; // [rsp+E8h] [rbp-18h] BYREF
  unsigned int v76; // [rsp+F0h] [rbp-10h]
  unsigned int v77; // [rsp+F4h] [rbp-Ch]
  _BYTE v78[16]; // [rsp+110h] [rbp+10h] BYREF
  __int16 v79; // [rsp+120h] [rbp+20h]
  _BYTE v80[32]; // [rsp+128h] [rbp+28h] BYREF
  __int16 v81; // [rsp+148h] [rbp+48h] BYREF
  char v82[32]; // [rsp+150h] [rbp+50h] BYREF
  char v83; // [rsp+170h] [rbp+70h]
  char v84[16]; // [rsp+178h] [rbp+78h] BYREF
  char v85[16]; // [rsp+188h] [rbp+88h] BYREF
  char v86[24]; // [rsp+198h] [rbp+98h] BYREF
  unsigned int v87; // [rsp+1B0h] [rbp+B0h] BYREF
  void *v88; // [rsp+1B8h] [rbp+B8h] BYREF
  unsigned __int64 v89; // [rsp+1D0h] [rbp+D0h]
  unsigned int v90; // [rsp+1D8h] [rbp+D8h]
  char v91; // [rsp+209h] [rbp+109h]
  _BYTE v92[16]; // [rsp+250h] [rbp+150h] BYREF
  _BYTE v93[24]; // [rsp+260h] [rbp+160h] BYREF
  __int64 v94; // [rsp+278h] [rbp+178h]
  __int64 v95; // [rsp+280h] [rbp+180h]

  if ( *(_QWORD *)&nExitCode != 0 )
  {
    v4 = sub_14034C6F0(a1);
    v46 = v4;
    if ( (dword_14138DFD0 | v4) == 0 )
    {
      sub_1403570C0(a1, a2);
      return;
    }
    if ( (unsigned __int8)sub_140059D90(
                            a1: off_140F772E0,
                            a2: "FetchHorsesResponse - Horse count: %zu",
                            (a2[1] - *a2) / 232) != 0 )
      __debugbreak();
    if ( qword_14138A6F0 == 0 )
      goto LABEL_96;
    v5 = sub_1403AB8B0(a1: v84);
    v6 = sub_1405F1EE0(a1: v5);
    v7 = v6;
    if ( v4 == 0 && v6 != 0 )
      sub_1403AACF0(a1: v6);
    v8 = sub_1405F1EE0(a1: (__int64)&off_141310F50);
    v9 = v8;
    if ( v8 == 0 || (unsigned __int8)sub_1406456B0(a1: v8, a2: 120) == 0 )
      v9 = 0;
    v10 = *a2;
    v68 = a2[1];
    if ( v10 != v68 )
    {
      v47 = *(_DWORD *)(v9 + 264);
      v11 = word_141313D3C;
      do
      {
        sub_1407F3370(a1: &v87);
        sub_1407F3630(a1: &v87, a2: v10);
        if ( v4 != 0 && v91 != 0 )
        {
          v94 = 7;
          v95 = 8;
          sub_140017A10(a1: v93);
          sub_140082DD0(a1: v92);
          if ( v89 > 0xF )
          {
            v12 = v88;
            if ( v89 + 1 >= 0x1000 )
            {
              if ( (unsigned __int64)v88 - *((_QWORD *)v88 - 1) - 8 > 0x1F )
                goto LABEL_94;
              v12 = *((void **)v88 - 1);
            }
LABEL_21:
            sub_1409DB4C0(lpMem: v12);
          }
        }
        else
        {
          if ( (unsigned __int8)sub_140350EA0(a1, a2: v87) != 0 )
          {
            v94 = 7;
            v95 = 8;
            sub_140017A10(a1: v93);
            sub_140082DD0(a1: v92);
            sub_14001B5A0(a1: &v88);
            goto LABEL_91;
          }
          v14 = 0;
          v15 = v91;
          if ( v91 != 0 )
            goto LABEL_32;
          v63 = 0;
          v64 = 195948557;
          v62 = &PXEngine::SafeActorPtrAs<CPXPlayerTPNet>::`vftable';
          v14 = sub_14034E340(a1, a2: &v87, a3: &v62, a4: 0);
          if ( v14 != 0 )
          {
            v15 = v91;
LABEL_32:
            if ( v4 != 0 )
            {
              if ( v15 == 0 && v14 != 0 )
              {
                v38 = v90;
                *(_DWORD *)(v14 + 264) = v90;
                v39 = sub_14034FCC0(a1, a2: v38);
                sub_14035CDE0(a1, a2: v38, a3: v14);
                v40 = qword_14138A6F0;
                sub_1405F1D40(a1: v75, a2: v14 + 120);
                if ( (unsigned __int8)sub_1406006A0(a1: v40, a2: v75, a3: 120) != 0 )
                {
                  sub_1405F1D60(a1: &v54, a2: v77, a3: v76);
                }
                else
                {
                  v55 = 0;
                  v56 = 195948557;
                }
                v54 = &PXEngine::SafeActorPtrAs<CPXHorse>::`vftable';
                v42 = *(_QWORD *)(a1 + 160);
                if ( v42 == *(_QWORD *)(a1 + 168) )
                {
                  sub_140348040(a1: a1 + 152, a2: v42, a3: &v54);
                }
                else
                {
                  *(_QWORD *)v42 = &PXEngine::SafeActorPtr::`vftable';
                  *(_DWORD *)(v42 + 8) = v55;
                  *(_DWORD *)(v42 + 12) = v56;
                  *(_QWORD *)v42 = &PXEngine::SafeActorPtrAs<CPXHorse>::`vftable';
                  *(_QWORD *)(a1 + 160) += 16LL;
                }
                if ( v39 != 0 )
                {
                  LOBYTE(v41) = 1;
                  sub_1400B0580(a1: v14, a2: v39, a3: -1, a4: v41, a5: 0);
                  sub_14034C530(a1, a2: (unsigned int)dword_14138DFD0, a3: v14);
                  sub_140359BA0(a1, a2: v14);
                }
              }
            }
            else
            {
              if ( v15 != 0 )
                goto LABEL_64;
              v16 = v90;
              if ( v47 == v90 )
                goto LABEL_40;
              if ( qword_14138A6F0 == 0 )
              {
                v44 = off_140F35058;
LABEL_104:
                if ( (unsigned __int8)sub_140059CA0(a1: v44) != 0 )
                  __debugbreak();
                sub_1409E29B8(a1: 999);
                __debugbreak();
              }
              v17 = sub_1403A82D0(a1: v85, a2: qword_14138A6F0);
              v18 = sub_1405F1EE0(a1: v17);
              if ( v18 == 0 )
              {
                v44 = off_140F787B0;
                goto LABEL_104;
              }
              v19 = (_DWORD *)sub_1403A83A0(a1: v18);
              if ( v19 != nullptr && v16 > v19[38] )
              {
                (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v19 + 176LL))(a1: v19);
                goto LABEL_40;
              }
              v20 = sub_14034FCC0(a1, a2: v16);
              if ( v20 == 0 )
                goto LABEL_111;
              v21 = qword_14138A6F0;
              if ( qword_14138A6F0 == 0 )
                goto LABEL_99;
              sub_1405F1D40(a1: v78, a2: v20 + 120);
              v22 = sub_1405FBE10(a1: v21, a2: v86, a3: v78, a4: 120);
              if ( (unsigned __int8)sub_1405F1F70(a1: v22, a2: 120) != 0 )
              {
                sub_1405F1D60(a1: &v57, a2: *(unsigned int *)(v22 + 12), a3: *(unsigned int *)(v22 + 8));
              }
              else
              {
                v58 = 0;
                v59 = 195948557;
              }
              v57 = &PXEngine::SafeActorPtrAs<CPXHorse>::`vftable';
              if ( sub_1405F1EE0(a1: (__int64)&v57) != 0 )
              {
LABEL_40:
                v91 = 1;
                if ( v14 == 0 )
                {
                  if ( (unsigned __int8)sub_140059CA0(a1: off_140F77330) != 0 )
                    __debugbreak();
                  sub_1409E29B8(a1: 999);
LABEL_96:
                  if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
                    __debugbreak();
                  sub_1409E29B8(a1: 999);
LABEL_99:
                  if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
                    __debugbreak();
                  sub_1409E29B8(a1: 999);
                  __debugbreak();
                }
                LOBYTE(v13) = 1;
                sub_1401F7270(a1: v14, a2: v13);
                v60[1] = 0;
                v60[2] = 0;
                v61 = 0;
                v60[0] = &PXEngine::ByteStreamWriter::`vftable';
                LODWORD(v45) = 0;
                if ( sub_1401D0820(a1: v60, a2: &v45) == 0 )
                  goto LABEL_61;
                LODWORD(v45) = 0;
                if ( sub_1401D0820(a1: v60, a2: &v45) != 0
                  && (LODWORD(v45) = v87, sub_1401D0820(a1: v60, a2: &v45) != 0) )
                {
                  v87 = v45;
                  v79 = v11;
                  sub_140A255B0(a1: v80, a2: v60);
                  v81 = v79;
                  sub_140A255B0(a1: v82, a2: v80);
                  v83 = 1;
                  sub_140A25690(a1: v80);
                }
                else
                {
LABEL_61:
                  v83 = 0;
                }
                sub_140A25690(a1: v60);
                sub_1407EE6B0(a1: &v81);
              }
              else
              {
LABEL_111:
                if ( v14 != 0 )
                {
                  v23 = v90;
                  *(_DWORD *)(v14 + 264) = v90;
                  v24 = sub_14034FCC0(a1, a2: v23);
                  sub_14035CDE0(a1, a2: v23, a3: v14);
                  v25 = qword_14138A6F0;
                  sub_1405F1D40(a1: v69, a2: v14 + 120);
                  if ( (unsigned __int8)sub_1406006A0(a1: v25, a2: v69, a3: 120) != 0 )
                  {
                    sub_1405F1D60(a1: &v48, a2: v71, a3: v70);
                  }
                  else
                  {
                    v49 = 0;
                    v50 = 195948557;
                  }
                  v48 = &PXEngine::SafeActorPtrAs<CPXHorse>::`vftable';
                  v27 = *(_QWORD *)(a1 + 160);
                  if ( v27 == *(_QWORD *)(a1 + 168) )
                  {
                    sub_140348040(a1: a1 + 152, a2: v27, a3: &v48);
                  }
                  else
                  {
                    *(_QWORD *)v27 = &PXEngine::SafeActorPtr::`vftable';
                    *(_DWORD *)(v27 + 8) = v49;
                    *(_DWORD *)(v27 + 12) = v50;
                    *(_QWORD *)v27 = &PXEngine::SafeActorPtrAs<CPXHorse>::`vftable';
                    *(_QWORD *)(a1 + 160) += 16LL;
                  }
                  if ( v24 != 0 )
                  {
                    LOBYTE(v26) = 1;
                    sub_1400B0580(a1: v14, a2: v24, a3: -1, a4: v26, a5: 0);
                    sub_14034C530(a1, a2: (unsigned int)dword_14138DFD0, a3: v14);
                    if ( v7 != 0 )
                      sub_1403AA900(a1: v7, a2: &v87);
                  }
                }
              }
              if ( v91 != 0 )
              {
LABEL_64:
                if ( v7 != 0 )
                  sub_1403AB150(a1: v7, a2: &v87);
                if ( v14 == 0 )
                  goto LABEL_71;
                sub_1400CC300(a1: v14);
                v28 = *(_QWORD *)v14;
                v30 = sub_1400FBAF0(a1: v29);
                (*(void (__fastcall **)(__int64, _QWORD, __int64))(v28 + 632))(a1: v14, a2: 0, a3: v30);
                if ( sub_1401E02C0(a1: v14) != 0 )
                {
                  v31 = sub_1401E02C0(a1: v14);
                  v33 = sub_1400FBAF0(a1: v32);
                  sub_140147330(a1: v31, a2: 0, a3: v33);
                }
                sub_1405F1EE0(a1: (__int64)&off_141313B68);
                sub_1401DDA00(a1: v14, a2: 0);
                v34 = qword_14138A6F0;
                sub_1405F1D40(a1: v72, a2: v14 + 120);
                if ( (unsigned __int8)sub_1406006A0(a1: v34, a2: v72, a3: 120) != 0 )
                {
                  sub_1405F1D60(a1: &v51, a2: v74, a3: v73);
                  v35 = v53;
                  v36 = v52;
                }
                else
                {
LABEL_71:
                  v36 = 0;
                  v52 = 0;
                  v35 = 195948557;
                  v53 = 195948557;
                }
                v51 = &PXEngine::SafeActorPtrAs<CPXHorse>::`vftable';
                v37 = *(_QWORD **)(a1 + 192);
                if ( v37 == *(_QWORD **)(a1 + 200) )
                {
                  sub_140347C20(a1: a1 + 184, a2: *(_QWORD *)(a1 + 192), a3: &v87, a4: &v51);
                }
                else
                {
                  v45 = *(_QWORD *)(a1 + 192);
                  v66 = v36;
                  v67 = v35;
                  v65 = &PXEngine::SafeActorPtrAs<CPXHorse>::`vftable';
                  *v37 = &CPXInventoryHorse::`vftable';
                  sub_1401D44F0(a1: v37 + 1, a2: &v87);
                  sub_1405F1D40(a1: v37 + 38, a2: &v65);
                  v37[38] = &PXEngine::SafeActorPtrAs<CPXHorse>::`vftable';
                  *(_QWORD *)(a1 + 192) += 320LL;
                }
              }
            }
            v94 = 7;
            v95 = 8;
            sub_140017A10(a1: v93);
            sub_140082DD0(a1: v92);
            if ( v89 > 0xF )
            {
              v43 = v88;
              if ( v89 + 1 >= 0x1000 )
              {
                if ( (unsigned __int64)v88 - *((_QWORD *)v88 - 1) - 8 > 0x1F )
LABEL_94:
                  __fastfail(5u);
                v43 = *((void **)v88 - 1);
              }
              sub_1409DB4C0(lpMem: v43);
            }
            v4 = v46;
            goto LABEL_91;
          }
          v94 = 7;
          v95 = 8;
          sub_140017A10(a1: v93);
          sub_140082DD0(a1: v92);
          if ( v89 > 0xF )
          {
            v12 = v88;
            if ( v89 + 1 >= 0x1000 )
            {
              if ( (unsigned __int64)v88 - *((_QWORD *)v88 - 1) - 8 > 0x1F )
                goto LABEL_94;
              v12 = *((void **)v88 - 1);
            }
            goto LABEL_21;
          }
        }
LABEL_91:
        v10 += 232;
      }
      while ( v10 != v68 );
    }
    sub_140353270(a1);
    *(_DWORD *)(a1 + 252) = 1;
  }
}