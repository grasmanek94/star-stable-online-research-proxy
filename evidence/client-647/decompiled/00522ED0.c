__int64 __fastcall sub_140522ED0(__int64 a1, int a2, unsigned int a3, LPVOID *a4, LPVOID *a5)
{
  __int64 v6; // r15
  __int64 result; // rax
  __int64 v8; // r12
  char v9; // al
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rdi
  _QWORD *v13; // rbx
  char *v14; // rdi
  char *v15; // rbx
  __int64 *v16; // rdx
  __int64 v17; // rax
  void **v18; // r13
  char *v19; // rdi
  char *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r12
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // r15
  unsigned __int64 v27; // rbx
  __int64 v28; // rax
  unsigned __int64 v29; // r12
  char *v30; // r8
  char *v31; // rdx
  unsigned __int64 v32; // rcx
  signed __int64 v33; // r8
  void **v34; // r13
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // rdi
  const char *v39; // rax
  char *v40; // rbx
  char *i; // rdi
  char *v42; // r8
  _BYTE *v43; // rcx
  unsigned int v44; // r12d
  __int64 v45; // rbx
  unsigned __int64 v46; // rbx
  unsigned __int64 v47; // rbx
  unsigned __int64 v48; // r15
  unsigned __int64 v49; // rcx
  __int64 v50; // rax
  _BYTE *v51; // rdx
  __int64 v52; // rbx
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rax
  char *v57; // rbx
  char *v58; // rdi
  _BYTE *v59; // rcx
  unsigned int *v60; // r13
  unsigned int *v61; // r12
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rdi
  __int64 v65; // rbx
  unsigned __int64 v66; // rbx
  unsigned __int64 v67; // rbx
  unsigned __int64 v68; // r15
  unsigned __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rbx
  __m128i si128; // xmm0
  char *v74; // rbx
  char *v75; // r15
  _BYTE *v76; // rcx
  char *v77; // rbx
  char *v78; // r15
  _BYTE *v79; // rcx
  __int64 v80; // r15
  _QWORD *v81; // rax
  __int64 v82; // rax
  unsigned int v83; // r9d
  unsigned int v84; // ecx
  unsigned int v85; // edx
  _QWORD *v86; // rax
  __int64 v87; // rax
  __int64 *v88; // rcx
  __int64 *v89; // rax
  __int64 v91; // rbx
  __int64 v92; // rdi
  __int64 v93; // r13
  _QWORD *v94; // rax
  __int64 v95; // rax
  __int64 v96; // rdi
  char *v97; // rbx
  char *j; // r15
  char *v99; // rbx
  char *k; // rsi
  __int64 v101; // rbx
  __int64 v102; // r15
  __int64 v103; // r8
  __int64 v104; // r9
  __int64 v105; // rbx
  __int64 v106; // r12
  __int64 v107; // rax
  __int64 v108; // rdx
  __int64 v109; // r15
  __int64 v110; // rdx
  __int64 v111; // r15
  __int64 v112; // rax
  char *v113; // rbx
  char *v114; // rdi
  void *v115; // rcx
  char *v116; // rbx
  char *v117; // rdi
  _BYTE *v118; // rcx
  char *v119; // rbx
  char *m; // rdi
  char *v121; // r8
  _BYTE *v122; // rcx
  char **v123; // [rsp+30h] [rbp-D0h] BYREF
  void **v124; // [rsp+38h] [rbp-C8h] BYREF
  int v125; // [rsp+40h] [rbp-C0h]
  int v126; // [rsp+44h] [rbp-BCh]
  LPVOID v127[3]; // [rsp+48h] [rbp-B8h] BYREF
  void **v128; // [rsp+60h] [rbp-A0h] BYREF
  int v129; // [rsp+68h] [rbp-98h]
  int v130; // [rsp+6Ch] [rbp-94h]
  _DWORD *v131; // [rsp+70h] [rbp-90h]
  __int128 v132; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v133; // [rsp+88h] [rbp-78h]
  __int64 v134; // [rsp+A8h] [rbp-58h]
  _DWORD v135[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v136; // [rsp+B8h] [rbp-48h]
  LPVOID v137[2]; // [rsp+C0h] [rbp-40h] BYREF
  LPVOID v138[2]; // [rsp+D0h] [rbp-30h] BYREF
  __m128i v139; // [rsp+E0h] [rbp-20h]
  LPVOID lpMem[2]; // [rsp+F0h] [rbp-10h]
  __int64 v141; // [rsp+100h] [rbp+0h]
  __int64 v142; // [rsp+110h] [rbp+10h] BYREF
  __int64 v143; // [rsp+118h] [rbp+18h]
  __int128 v144; // [rsp+120h] [rbp+20h] BYREF
  __int128 v145; // [rsp+130h] [rbp+30h] BYREF
  __int128 v146; // [rsp+140h] [rbp+40h]
  _QWORD v147[12]; // [rsp+150h] [rbp+50h] BYREF

  v6 = a1;
  if ( qword_14138AA40 == 0 )
  {
    if ( (unsigned __int8)sub_140059CA0(a1: off_140F38D90) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  if ( (unsigned __int8)sub_140608610(a1: qword_14138AA40, a2: 6) == 0 || *(_BYTE *)(v6 + 658) != 0 )
  {
    sub_140519410(a1: a4);
    *a4 = (LPVOID)19937;
    a4[1] = (LPVOID)19937;
    a4[2] = (LPVOID)19937;
    result = sub_140519410(a1: a5);
    *a5 = (LPVOID)19937;
    a5[1] = (LPVOID)19937;
    a5[2] = (LPVOID)19937;
    return result;
  }
  v8 = sub_1405F1EE0(a1: v6 + 216);
  v131 = (_DWORD *)v8;
  if ( v8 == 0 )
  {
    v9 = sub_140059D90(
           a1: off_140FBC590,
           a2: "CraftingManager::RequestPerformCrafting Tried to perform crafting with no converter active");
LABEL_9:
    if ( v9 != 0 )
      __debugbreak();
    sub_1405135A0(a1: a4);
    return sub_1405135A0(a1: a5);
  }
  v134 = ((__int64 (*)(void))sub_140490FC0)();
  if ( v134 == 0 )
  {
    v9 = sub_140059D90(
           a1: off_140FBC5F0,
           a2: "CraftingManager::RequestPerformCrafting: Could not get InventoryManager.");
    goto LABEL_9;
  }
  v12 = a4[1];
  v13 = *a4;
  if ( *a4 != v12 )
  {
    do
    {
      sub_14051DC60(a1: v13[2], a2: v13[3], a3: (__int64)(v13[3] - v13[2]) >> 4, a4: 0, a5: 12);
      v13 += 5;
    }
    while ( v13 != v12 );
  }
  v14 = (char *)a5[1];
  v15 = (char *)*a5;
  if ( *a5 != v14 )
  {
    do
    {
      sub_14051DC60(
        a1: *((_QWORD *)v15 + 2),
        a2: *((_QWORD *)v15 + 3),
        a3: (__int64)(*((_QWORD *)v15 + 3) - *((_QWORD *)v15 + 2)) >> 4,
        a4: 0,
        a5: 12);
      v15 += 40;
    }
    while ( v15 != v14 );
  }
  v16 = (__int64 *)(v6 + 560);
  v123 = (char **)(v6 + 560);
  v17 = *(_QWORD *)(v6 + 560);
  if ( v17 != *(_QWORD *)(v6 + 568) )
    *(_QWORD *)(v6 + 568) = v17;
  v18 = (void **)*a4;
  v124 = (void **)a4[1];
  if ( v18 != v124 )
  {
    v11 = 0x3FFFFFFFFFFFFFFFLL;
    do
    {
      v19 = *(char **)(v6 + 568);
      v20 = *(char **)(v6 + 576);
      if ( v19 == v20 )
      {
        v21 = *v16;
        v22 = (__int64)&v19[-*v16];
        v23 = v22 >> 2;
        if ( v22 >> 2 == 0x3FFFFFFFFFFFFFFFLL )
          sub_14001B6A0(a1: v20, a2: 0x3FFFFFFFFFFFFFFFLL, a3: v10, a4: 0x3FFFFFFFFFFFFFFFLL);
        v24 = (__int64)&v20[-v21] >> 2;
        v25 = v24 >> 1;
        if ( v24 > 0x3FFFFFFFFFFFFFFFLL - (v24 >> 1) )
          goto LABEL_241;
        v128 = (void **)++v23;
        v26 = v23;
        if ( v25 + v24 >= v23 )
          v26 = v25 + v24;
        if ( v26 > 0x3FFFFFFFFFFFFFFFLL )
        {
LABEL_241:
          sub_14001B170(a1: v24, a2: v23, a3: v25, a4: 0x3FFFFFFFFFFFFFFFLL);
          __debugbreak();
        }
        v24 = 4 * v26;
        if ( 4 * v26 != 0 )
        {
          if ( v24 < 0x1000 )
          {
            v27 = sub_1409DB470(a1: v24);
          }
          else
          {
            if ( v24 + 39 < v24 )
              goto LABEL_241;
            v28 = sub_1409DB470(a1: v24 + 39);
            if ( v28 == 0 )
              goto LABEL_225;
            v27 = (v28 + 39) & 0xFFFFFFFFFFFFFFE0uLL;
            *(_QWORD *)(v27 - 8) = v28;
          }
        }
        else
        {
          v27 = 0;
        }
        v29 = v22 & 0xFFFFFFFFFFFFFFFCuLL;
        *(_DWORD *)(v29 + v27) = *((_DWORD *)v18 + 1);
        v30 = *(char **)(a1 + 568);
        v31 = *v123;
        v32 = v27;
        if ( v19 == v30 )
        {
          v33 = v30 - v31;
        }
        else
        {
          sub_140E82100(a1: v27, a2: v31, a3: v19 - v31);
          v32 = v29 + v27 + 4;
          v33 = *(_QWORD *)(a1 + 568) - (_QWORD)v19;
          v31 = v19;
        }
        sub_140E82100(a1: v32, a2: v31, a3: v33);
        sub_14004BDF0(a1: v123, a2: v27, a3: v128, a4: v26);
        v6 = a1;
        v16 = (__int64 *)v123;
        v11 = 0x3FFFFFFFFFFFFFFFLL;
      }
      else
      {
        *(_DWORD *)v19 = *((_DWORD *)v18 + 1);
        *(_QWORD *)(v6 + 568) += 4LL;
      }
      v18 += 5;
    }
    while ( v18 != v124 );
    v8 = (__int64)v131;
  }
  if ( a2 == 0 && *(_DWORD *)(v8 + 176) != 0 )
  {
    v34 = (void **)*a4;
    v124 = (void **)a4[1];
    v35 = 0xFFFFFFFFFFFFFFFLL;
    if ( v34 == v124 )
    {
LABEL_74:
      v124 = (void **)sub_140490FC0(a1: v35);
      if ( v124 != nullptr )
      {
        v60 = (unsigned int *)*a5;
        v61 = (unsigned int *)a5[1];
        if ( *a5 != v61 )
        {
          do
          {
            v62 = v60[1];
            LODWORD(v123) = v60[1];
            v63 = *(_QWORD *)(v6 + 384);
            v64 = *(_QWORD *)(v6 + 376);
            if ( v64 == v63 )
            {
LABEL_92:
              v64 = 0;
            }
            else
            {
              while ( *(_DWORD *)(v64 + 8) != (_DWORD)v62 )
              {
                v64 += 48;
                if ( v64 == v63 )
                  goto LABEL_92;
              }
            }
            if ( v64 != 0 )
            {
              v128 = (void **)&v132;
              v132 = 0;
              v133 = 0;
              v65 = *((_QWORD *)v60 + 3) - *((_QWORD *)v60 + 2);
              if ( (unsigned __int64)v65 >= 0x10 )
              {
                v66 = v65 >> 4;
                if ( v66 > 0xFFFFFFFFFFFFFFFLL )
                  sub_14001B6A0(a1: v62, a2: v53, a3: v54, a4: v55);
                v67 = 16 * v66;
                if ( v67 != 0 )
                {
                  if ( v67 < 0x1000 )
                  {
                    v68 = sub_1409DB470(a1: v67);
                  }
                  else
                  {
                    v69 = v67 + 39;
                    if ( v67 + 39 < v67 )
                    {
                      sub_14001B170(a1: v69, a2: v53, a3: v54, a4: v55);
                      __debugbreak();
                    }
                    v70 = sub_1409DB470(a1: v69);
                    if ( v70 == 0 )
                      __fastfail(5u);
                    v68 = (v70 + 39) & 0xFFFFFFFFFFFFFFE0uLL;
                    *(_QWORD *)(v68 - 8) = v70;
                  }
                }
                else
                {
                  v68 = 0;
                }
                *(_QWORD *)&v132 = v68;
                *((_QWORD *)&v132 + 1) = v68;
                v133 = v67 + v68;
                v71 = *((_QWORD *)v60 + 2);
                v72 = *((_QWORD *)v60 + 3) - v71;
                sub_140E82100(a1: v68, a2: v71, a3: v72);
                *((_QWORD *)&v132 + 1) = v68 + (v72 & 0xFFFFFFFFFFFFFFF0uLL);
                v6 = a1;
              }
              sub_1404903F0(a1: v124, a2: *(unsigned int *)(v64 + 12), a3: v60[2], a4: &v132);
            }
            else if ( (unsigned __int8)sub_140059D90(
                                         a1: off_140FBC360,
                                         a2: "CraftingManager::ConsumeConverterCostInClient: Failed to find ingredient for cost consumption.") != 0 )
            {
              __debugbreak();
            }
            v60 += 10;
          }
          while ( v60 != v61 );
        }
      }
      else if ( (unsigned __int8)sub_140059D90(
                                   a1: off_140FBC300,
                                   a2: "CraftingManager::ConsumeConverterCostInClient: Could not get InventoryManager.") != 0 )
      {
        __debugbreak();
      }
      v135[1] = 0;
      v136 = 1;
      *(_OWORD *)v137 = 0;
      *(_OWORD *)v138 = 0;
      v139 = 0;
      *(_OWORD *)lpMem = 0;
      v141 = 0;
      v135[0] = v131[4];
      if ( v137 != a4 )
      {
        *(_OWORD *)v137 = *(_OWORD *)a4;
        v138[0] = a4[2];
        *a4 = nullptr;
        a4[1] = nullptr;
        a4[2] = nullptr;
      }
      if ( &v138[1] != a5 )
      {
        v138[1] = *a5;
        v139 = *(__m128i *)(a5 + 1);
        *a5 = nullptr;
        a5[1] = nullptr;
        a5[2] = nullptr;
      }
      *(_BYTE *)(v6 + 658) = 1;
      v56 = sub_140520A30(a1: &unk_141313E10, a2: &v132, a3: v135);
      sub_1407EE6B0(a1: v56);
      v57 = (char *)lpMem[0];
      if ( lpMem[0] != nullptr )
      {
        v58 = (char *)lpMem[1];
        if ( lpMem[0] != lpMem[1] )
        {
          do
          {
            sub_14002AE40(a1: v57 + 8);
            v57 += 32;
          }
          while ( v57 != v58 );
          v57 = (char *)lpMem[0];
        }
        if ( ((v141 - (_QWORD)v57) & 0xFFFFFFFFFFFFFFE0uLL) < 0x1000 )
        {
          v59 = v57;
        }
        else
        {
          v59 = *((_BYTE **)v57 - 1);
          if ( (unsigned __int64)(v57 - v59 - 8) > 0x1F )
            goto LABEL_225;
        }
        sub_1409DB4C0(lpMem: v59);
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_140EEE200);
      *(__m128i *)lpMem = si128;
      v141 = 19937;
      v74 = (char *)v138[1];
      if ( v138[1] != nullptr )
      {
        v75 = (char *)v139.m128i_i64[0];
        if ( v138[1] != (LPVOID)v139.m128i_i64[0] )
        {
          do
          {
            sub_14002AE40(a1: v74 + 16);
            v74 += 40;
          }
          while ( v74 != v75 );
          v74 = (char *)v138[1];
        }
        if ( (unsigned __int64)(40 * ((v139.m128i_i64[1] - (__int64)v74) / 40)) < 0x1000 )
        {
          v76 = v74;
        }
        else
        {
          v76 = *((_BYTE **)v74 - 1);
          if ( (unsigned __int64)(v74 - v76 - 8) > 0x1F )
            goto LABEL_225;
        }
        sub_1409DB4C0(lpMem: v76);
        si128 = _mm_load_si128((const __m128i *)&xmmword_140EEE200);
      }
      v138[1] = (LPVOID)19937;
      v139 = si128;
      v77 = (char *)v137[0];
      if ( v137[0] != nullptr )
      {
        v78 = (char *)v137[1];
        if ( v137[0] != v137[1] )
        {
          do
          {
            sub_14002AE40(a1: v77 + 16);
            v77 += 40;
          }
          while ( v77 != v78 );
          v77 = (char *)v137[0];
        }
        if ( (unsigned __int64)(40 * (((char *)v138[0] - (char *)v77) / 40)) < 0x1000 )
        {
          v79 = v77;
        }
        else
        {
          v79 = *((_BYTE **)v77 - 1);
          if ( (unsigned __int64)(v77 - v79 - 8) > 0x1F )
            goto LABEL_225;
        }
        sub_1409DB4C0(lpMem: v79);
        si128 = _mm_load_si128((const __m128i *)&xmmword_140EEE200);
      }
      *(__m128i *)v137 = si128;
      v138[0] = (LPVOID)19937;
      sub_140519410(a1: a4);
    }
    else
    {
      while ( 1 )
      {
        v36 = *((unsigned int *)v34 + 1);
        LODWORD(v123) = *((_DWORD *)v34 + 1);
        v37 = *(_QWORD *)(v6 + 384);
        v38 = *(_QWORD *)(v6 + 376);
        if ( v38 == v37 )
          break;
        while ( *(_DWORD *)(v38 + 8) != (_DWORD)v36 )
        {
          v38 += 48;
          if ( v38 == v37 )
            goto LABEL_46;
        }
        if ( v38 == 0 )
          break;
        v44 = *((_DWORD *)v34 + 2);
        v128 = (void **)&v132;
        v132 = 0;
        v133 = 0;
        v45 = (_BYTE *)v34[3] - (_BYTE *)v34[2];
        if ( (unsigned __int64)v45 >= 0x10 )
        {
          v46 = v45 >> 4;
          if ( v46 > 0xFFFFFFFFFFFFFFFLL )
            sub_14001B6A0(a1: 0xFFFFFFFFFFFFFFFLL, a2: v16, a3: v36, a4: v11);
          v47 = 16 * v46;
          if ( v47 != 0 )
          {
            if ( v47 < 0x1000 )
            {
              v48 = sub_1409DB470(a1: v47);
            }
            else
            {
              v49 = v47 + 39;
              if ( v47 + 39 < v47 )
              {
                sub_14001B170(a1: v49, a2: v16, a3: v36, a4: v11);
                __debugbreak();
              }
              v50 = sub_1409DB470(a1: v49);
              if ( v50 == 0 )
                __fastfail(5u);
              v48 = (v50 + 39) & 0xFFFFFFFFFFFFFFE0uLL;
              *(_QWORD *)(v48 - 8) = v50;
            }
          }
          else
          {
            v48 = 0;
          }
          *(_QWORD *)&v132 = v48;
          *((_QWORD *)&v132 + 1) = v48;
          v133 = v47 + v48;
          v51 = v34[2];
          v52 = (_BYTE *)v34[3] - v51;
          sub_140E82100(a1: v48, a2: v51, a3: v52);
          *((_QWORD *)&v132 + 1) = v48 + (v52 & 0xFFFFFFFFFFFFFFF0uLL);
          v6 = a1;
        }
        sub_1404903F0(a1: v134, a2: *(unsigned int *)(v38 + 12), a3: v44, a4: &v132);
        v34 += 5;
        if ( v34 == v124 )
          goto LABEL_74;
      }
LABEL_46:
      if ( (unsigned __int8)sub_140059D90(
                              a1: off_140FBC188,
                              a2: "CraftingManager::RequestPerformCrafting: Could not get Ingredient: %u",
                              v36) != 0 )
        __debugbreak();
      v39 = (const char *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v131 + 176LL))(a1: v131);
      if ( (unsigned __int8)sub_140059D90(
                              a1: off_140FBC618,
                              a2: "CraftingManager::RequestPerformCrafting: Failed to consume input when crafting failed in converter: %s.",
                              v39) != 0 )
        __debugbreak();
      v40 = (char *)*a4;
      if ( *a4 != nullptr )
      {
        for ( i = (char *)a4[1]; v40 != i; v40 += 40 )
          sub_14002AE40(a1: v40 + 16);
        v42 = (char *)*a4;
        if ( (unsigned __int64)(40 * (((_BYTE *)a4[2] - (_BYTE *)*a4) / 40)) < 0x1000 )
        {
          v43 = *a4;
        }
        else
        {
          v43 = *((_BYTE **)v42 - 1);
          if ( (unsigned __int64)(v42 - v43 - 8) > 0x1F )
            __fastfail(5u);
        }
        sub_1409DB4C0(lpMem: v43);
        *a4 = nullptr;
      }
    }
    goto LABEL_73;
  }
  LODWORD(v123) = a2;
  v80 = v6 + 272;
  if ( (unsigned __int8)sub_140496EE0(a1: v80, a2: &v123) != 0 )
  {
    v81 = (_QWORD *)sub_14051DF80(a1: v80, a2: &v128, a3: &v123);
    sub_1405F1D40(a1: &v124, a2: *v81 + 24LL);
  }
  else
  {
    v125 = 0;
    v126 = 195948557;
  }
  v124 = &PXEngine::SafeActorPtrAs<PXEngine::CraftingRecipe>::`vftable';
  v82 = sub_1405F1EE0(a1: (__int64)&v124);
  if ( v82 != 0 && *(_BYTE *)(v82 + 424) != 0 )
  {
    v83 = *(_DWORD *)(v82 + 336);
    v84 = *(_DWORD *)(v82 + 184);
    v85 = a3;
    if ( v83 >= v84 || v84 - v83 < a3 )
    {
      if ( (unsigned __int8)sub_140059D90(
                              a1: off_140FBC640,
                              a2: "CraftingManager::RequestPerformCrafting: Recipe with ID %u has reached its maximum uses (c"
                              "rafted %u of %u, requested %u)",
                              a2,
                              v83,
                              v84,
                              a3) != 0 )
        __debugbreak();
LABEL_169:
      sub_140519410(a1: a4);
LABEL_73:
      *a4 = (LPVOID)19937;
      a4[1] = (LPVOID)19937;
      a4[2] = (LPVOID)19937;
      result = sub_140519410(a1: a5);
LABEL_236:
      a5[2] = (LPVOID)19937;
      a5[1] = (LPVOID)19937;
      *a5 = (LPVOID)19937;
      return result;
    }
  }
  else
  {
    v85 = a3;
  }
  *(_DWORD *)(a1 + 588) = v85;
  LODWORD(v123) = a2;
  if ( (unsigned __int8)sub_140496EE0(a1: v80, a2: &v123) == 0 )
  {
    if ( (unsigned __int8)sub_140059D90(
                            a1: off_140FBBFB8,
                            a2: "CraftingManager::IsRecipeUnlocked: Failed to find Recipe with ID %u in the m_Recipes",
                            a2) == 0 )
    {
LABEL_159:
      if ( (unsigned __int8)sub_140059D90(
                              a1: off_140FBC668,
                              a2: "CraftingManager::RequestPerformCrafting: Recipe with ID %u is not unlocked",
                              a2) != 0 )
        __debugbreak();
      goto LABEL_169;
    }
LABEL_147:
    __debugbreak();
  }
  v86 = (_QWORD *)sub_14051DF80(a1: v80, a2: &v124, a3: &v123);
  v87 = sub_1405F1EE0(a1: *v86 + 24LL);
  if ( v87 == 0 )
  {
    if ( (unsigned __int8)sub_140059D90(
                            a1: off_140FBC010,
                            a2: "CraftingManager::IsRecipeUnlocked: Could not get recipe with ID %u",
                            (_DWORD)v123) == 0 )
      goto LABEL_159;
    goto LABEL_147;
  }
  if ( *(_QWORD *)(v87 + 192) != *(_QWORD *)(v87 + 200) )
  {
    v88 = *(__int64 **)(a1 + 336);
    v89 = (__int64 *)v88[1];
    while ( *((_BYTE *)v89 + 25) == 0 )
    {
      if ( *((_DWORD *)v89 + 7) >= (unsigned int)v123 )
      {
        v88 = v89;
        v89 = (__int64 *)*v89;
      }
      else
      {
        v89 = (__int64 *)v89[2];
      }
    }
    if ( *((_BYTE *)v88 + 25) != 0 || (unsigned int)v123 < *((_DWORD *)v88 + 7) )
      goto LABEL_159;
  }
  v91 = qword_14138A6F0;
  if ( qword_14138A6F0 == 0 )
  {
    if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  v92 = sub_1405FD2E0(a1: qword_14138A6F0, a2: &v128, a3: "PlayerItemManager");
  if ( (unsigned __int8)sub_1406006A0(a1: v91, a2: v92, a3: 163) != 0 )
  {
    sub_1405F1D60(a1: &v124, a2: *(unsigned int *)(v92 + 12), a3: *(unsigned int *)(v92 + 8));
  }
  else
  {
    v125 = 0;
    v126 = 195948557;
  }
  v124 = &PXEngine::SafeActorPtrAs<CPXPlayerItemManager>::`vftable';
  v93 = sub_1405F1EE0(a1: (__int64)&v124);
  if ( v93 == 0 )
  {
    if ( (unsigned __int8)sub_140059D90(
                            a1: off_140FBC690,
                            a2: "CraftingManager::RequestPerformCrafting: Could not get CPXPlayerItemManager.") != 0 )
      __debugbreak();
    goto LABEL_169;
  }
  byte_141310980 = 0;
  LODWORD(v123) = a2;
  if ( (unsigned __int8)sub_140496EE0(a1: v80, a2: &v123) != 0 )
  {
    v94 = (_QWORD *)sub_14051DF80(a1: v80, a2: &v132, a3: &v123);
    sub_1405F1D40(a1: &v128, a2: *v94 + 24LL);
  }
  else
  {
    v129 = 0;
    v130 = 195948557;
  }
  v128 = &PXEngine::SafeActorPtrAs<PXEngine::CraftingRecipe>::`vftable';
  v95 = sub_1405F1EE0(a1: (__int64)&v128);
  v96 = v95;
  if ( v95 == 0 )
  {
    result = sub_140059D90(
               a1: off_140FBC6B8,
               a2: "CraftingManager::RequestPerformCrafting: Could not get Recipe: %u",
               a2);
    if ( (_BYTE)result != 0 )
      __debugbreak();
    byte_141310980 = 1;
    v97 = (char *)*a4;
    if ( *a4 != nullptr )
    {
      for ( j = (char *)a4[1]; v97 != j; v97 += 40 )
        sub_14002AE40(a1: v97 + 16);
      result = sub_14004DB80(a1: a4, a2: *a4, a3: ((_BYTE *)a4[2] - (_BYTE *)*a4) / 40);
      *a4 = nullptr;
    }
    *a4 = (LPVOID)19937;
    a4[1] = (LPVOID)19937;
    a4[2] = (LPVOID)19937;
    v99 = (char *)*a5;
    if ( *a5 != nullptr )
    {
      for ( k = (char *)a5[1]; v99 != k; v99 += 40 )
        sub_14002AE40(a1: v99 + 16);
      result = sub_14004DB80(a1: a5, a2: *a5, a3: ((_BYTE *)a5[2] - (_BYTE *)*a5) / 40);
      *a5 = nullptr;
    }
    goto LABEL_236;
  }
  v101 = v134;
  v102 = a1;
  if ( (unsigned __int8)sub_140520DC0(a1, a2: v134, a3: v95, a4: a3, a5: (__int64)a4, a6: (__int64)a5) == 0 )
  {
    sub_140490580(a1: v101);
    byte_141310980 = 1;
    sub_140519410(a1: a4);
    goto LABEL_73;
  }
  sub_140521900(a1, a2: a5);
  if ( (unsigned __int8)sub_140521AC0(a1, a2: v101, a3: a4, a4: v96) == 0 )
  {
    if ( (unsigned __int8)sub_140059D90(
                            a1: off_140FBC6E0,
                            a2: "CraftingManager::RequestPerformCrafting: Failed to consume input locally.") != 0 )
      __debugbreak();
    byte_141310980 = 1;
    goto LABEL_190;
  }
  memset(v127, 0, sizeof(v127));
  v105 = *(_QWORD *)(v96 + 296);
  v106 = *(_QWORD *)(v96 + 304);
  if ( v105 == v106 )
    goto LABEL_200;
  while ( 1 )
  {
    if ( *(_BYTE *)(v105 + 12) == 1 )
    {
      v107 = sub_1401E0840(a1: v93, a2: *(unsigned int *)(v105 + 16), a3: v103, a4: v104);
      v109 = v107;
      if ( v107 != 0 )
      {
        LOBYTE(v108) = 16;
        if ( (unsigned __int8)sub_14025F400(a1: v107, a2: v108) != 0 )
          goto LABEL_198;
        LOBYTE(v110) = 15;
        if ( (unsigned __int8)sub_14025F400(a1: v109, a2: v110) != 0 )
          goto LABEL_198;
      }
      v111 = v134;
      sub_1404916C0(a1: v134, a2: &v132, a3: *(unsigned int *)(v105 + 16), a4: *(_DWORD *)(v105 + 20) * a3);
      if ( (_QWORD)v132 == *((_QWORD *)&v132 + 1) )
        break;
      sub_14051C280(a1: v127, a2: v105 + 16, a3: &v132);
      sub_14002AE40(a1: &v132);
    }
LABEL_198:
    v105 += 24;
    if ( v105 == v106 )
    {
      v102 = a1;
LABEL_200:
      v142 = 0;
      v143 = 1;
      v144 = 0;
      v145 = 0;
      v146 = 0;
      memset(v147, 0, 24);
      LODWORD(v142) = v131[4];
      HIDWORD(v142) = a2;
      LODWORD(v143) = a3;
      HIDWORD(v143) = v131[88];
      if ( &v144 != (__int128 *)a4 )
      {
        v144 = *(_OWORD *)a4;
        *(_QWORD *)&v145 = a4[2];
        *a4 = nullptr;
        a4[1] = nullptr;
        a4[2] = nullptr;
      }
      if ( (LPVOID *)((char *)&v145 + 8) != a5 )
      {
        sub_140519410(a1: (char *)&v145 + 8);
        *((_QWORD *)&v145 + 1) = *a5;
        v146 = *(_OWORD *)(a5 + 1);
        *a5 = nullptr;
        a5[1] = nullptr;
        a5[2] = nullptr;
      }
      sub_140527740(a1: v147);
      qmemcpy(v147, v127, 24);
      memset(v127, 0, sizeof(v127));
      if ( (unsigned __int8)sub_140059D90(a1: off_140FBC730, a2: "REQUEST CRAFTING: Recipe ID %u (Amount: %u)", a2, a3) != 0 )
        __debugbreak();
      *(_BYTE *)(v102 + 658) = 1;
      v112 = sub_140520A30(a1: &unk_141313E10, a2: &v132, a3: &v142);
      sub_1407EE6B0(a1: v112);
      sub_1405201C0(a1: &v142);
      v113 = (char *)v127[0];
      if ( v127[0] != nullptr )
      {
        v114 = (char *)v127[1];
        if ( v127[0] != v127[1] )
        {
          do
          {
            sub_14002AE40(a1: v113 + 8);
            v113 += 32;
          }
          while ( v113 != v114 );
          v113 = (char *)v127[0];
        }
        if ( (((char *)v127[2] - (char *)v113) & 0xFFFFFFFFFFFFFFE0uLL) < 0x1000 )
        {
          v115 = v113;
          goto LABEL_227;
        }
        v115 = *((void **)v113 - 1);
        if ( (unsigned __int64)(v113 - (_BYTE *)v115 - 8) <= 0x1F )
        {
LABEL_227:
          sub_1409DB4C0(lpMem: v115);
          goto LABEL_228;
        }
LABEL_225:
        __fastfail(5u);
      }
LABEL_228:
      *(__m128i *)v127 = _mm_load_si128((const __m128i *)&xmmword_140EEE200);
      v127[2] = (LPVOID)19937;
      result = sub_140519410(a1: a4);
      *a4 = (LPVOID)19937;
      a4[1] = (LPVOID)19937;
      a4[2] = (LPVOID)19937;
      v119 = (char *)*a5;
      if ( *a5 != nullptr )
      {
        for ( m = (char *)a5[1]; v119 != m; v119 += 40 )
          sub_14002AE40(a1: v119 + 16);
        v121 = (char *)*a5;
        if ( (unsigned __int64)(40 * (((_BYTE *)a5[2] - (_BYTE *)*a5) / 40)) < 0x1000 )
        {
          v122 = *a5;
        }
        else
        {
          v122 = *((_BYTE **)v121 - 1);
          if ( (unsigned __int64)(v121 - v122 - 8) > 0x1F )
            __fastfail(5u);
        }
        result = sub_1409DB4C0(lpMem: v122);
        *a5 = nullptr;
      }
      goto LABEL_236;
    }
  }
  if ( (unsigned __int8)sub_140059D90(
                          a1: off_140FBC708,
                          a2: "CraftingManager::RequestPerformCrafting: Could not find output slots for item %u after the bac"
                          "kpack capacity check passed.",
                          *(_DWORD *)(v105 + 16)) != 0 )
    __debugbreak();
  sub_140490580(a1: v111);
  byte_141310980 = 1;
  sub_14002AE40(a1: &v132);
  v116 = (char *)v127[0];
  if ( v127[0] != nullptr )
  {
    v117 = (char *)v127[1];
    if ( v127[0] != v127[1] )
    {
      do
      {
        sub_14002AE40(a1: v116 + 8);
        v116 += 32;
      }
      while ( v116 != v117 );
      v116 = (char *)v127[0];
    }
    if ( (((char *)v127[2] - (char *)v116) & 0xFFFFFFFFFFFFFFE0uLL) < 0x1000 )
    {
      v118 = v116;
    }
    else
    {
      v118 = *((_BYTE **)v116 - 1);
      if ( (unsigned __int64)(v116 - v118 - 8) > 0x1F )
        goto LABEL_225;
    }
    sub_1409DB4C0(lpMem: v118);
  }
  *(__m128i *)v127 = _mm_load_si128((const __m128i *)&xmmword_140EEE200);
  v127[2] = (LPVOID)19937;
LABEL_190:
  sub_1405135A0(a1: a4);
  return sub_1405135A0(a1: a5);
}