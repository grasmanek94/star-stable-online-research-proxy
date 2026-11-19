void __fastcall sub_1402F4610(__int64 *a1, _DWORD *a2, int a3, int a4)
{
  unsigned int v5; // r14d
  _DWORD *v6; // r13
  __int64 *v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdi
  char v11; // al
  __int64 v12; // rbx
  unsigned int v13; // eax
  __int64 v14; // rax
  _DWORD *v15; // rbx
  _DWORD *v16; // r12
  int v17; // r14d
  int v18; // r14d
  _DWORD *v19; // rsi
  __int64 v20; // rcx
  int v21; // r15d
  __int64 v22; // rax
  _BYTE *v23; // rcx
  void *v24; // rcx
  void *v25; // rcx
  const char *v26; // r9
  unsigned int v27; // r15d
  unsigned int v28; // eax
  void *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // r9
  __int64 v34; // rcx
  char v35; // di
  int v36; // esi
  __int64 v37; // rbx
  __int64 v38; // rax
  int v39; // ebx
  __int64 v40; // rax
  __int16 *v41; // rcx
  __int64 v42; // rax
  int v43; // [rsp+30h] [rbp-D0h] BYREF
  __int128 *v44; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v45; // [rsp+40h] [rbp-C0h] BYREF
  int v46; // [rsp+48h] [rbp-B8h]
  int v47; // [rsp+4Ch] [rbp-B4h] BYREF
  LPVOID lpMem[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v49; // [rsp+60h] [rbp-A0h]
  __int128 v50; // [rsp+78h] [rbp-88h] BYREF
  int v51[6]; // [rsp+88h] [rbp-78h] BYREF
  char v52; // [rsp+A0h] [rbp-60h]
  int v53; // [rsp+A8h] [rbp-58h]
  __int128 v54; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v55; // [rsp+C0h] [rbp-40h]
  __int16 v56; // [rsp+C8h] [rbp-38h] BYREF
  char v57[32]; // [rsp+D0h] [rbp-30h] BYREF
  char v58; // [rsp+F0h] [rbp-10h]
  __int128 v59; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v60; // [rsp+108h] [rbp+8h]
  unsigned __int64 v61; // [rsp+110h] [rbp+10h]

  v53 = a4;
  v5 = a3;
  v43 = a3;
  v6 = a2;
  v7 = a1;
  v44 = (__int128 *)a1;
  if ( *(_QWORD *)&nExitCode == 0 || a2 == nullptr )
    return;
  byte_141310980 = 0;
  LOBYTE(a2) = 15;
  if ( (unsigned __int8)sub_14025F400(a1: v6, a2) != 0 )
  {
    v9 = sub_140205610();
    v45 = v9;
    if ( v9 != 0 )
    {
      v59 = 0;
      v60 = 0;
      v61 = 15;
      LOBYTE(v59) = 0;
      v54 = 0;
      v10 = 0;
      v55 = 0;
      *(_OWORD *)lpMem = 0;
      v49 = 0;
      if ( v5 != 0 )
      {
        if ( v5 != 1 )
        {
          if ( v5 != 2 )
          {
            v11 = sub_140059D90(
                    a1: off_140F6C330,
                    a2: "CPXPlayerItemManager::PlayerItemBuyEquipStyle: Attempting to buy a makeup item with an invalid currency type set!");
LABEL_35:
            if ( v11 != 0 )
              __debugbreak();
            if ( lpMem[0] == nullptr )
              goto LABEL_43;
            if ( ((v49 - (unsigned __int64)lpMem[0]) & 0xFFFFFFFFFFFFFFF0uLL) < 0x1000 )
            {
              v24 = lpMem[0];
LABEL_42:
              sub_1409DB4C0(lpMem: v24);
LABEL_43:
              *(__m128i *)lpMem = _mm_load_si128((const __m128i *)&xmmword_140EEE200);
              v49 = 19937;
LABEL_45:
              if ( v61 > 0xF )
              {
                v25 = (void *)v59;
                if ( v61 + 1 >= 0x1000 )
                {
                  if ( (unsigned __int64)(v59 - *(_QWORD *)(v59 - 8) - 8) > 0x1F )
                    __fastfail(5u);
                  v25 = *(void **)(v59 - 8);
                }
                sub_1409DB4C0(lpMem: v25);
              }
              return;
            }
            v24 = *((void **)lpMem[0] - 1);
            if ( (unsigned __int64)((char *)lpMem[0] - (char *)v24 - 8) <= 0x1F )
              goto LABEL_42;
LABEL_60:
            __fastfail(5u);
          }
          v60 = 13;
          strcpy((char *)&v59, "Item Currency");
          if ( v6[114] == 0 || v6[120] == 0 )
          {
            v11 = sub_140059D90(
                    a1: off_140F6C308,
                    a2: "CPXPlayerItemManager::PlayerItemBuyEquipStyle: pPlayerItem does not have an Item Currency Price.");
            goto LABEL_35;
          }
          v12 = sub_140491070();
          v13 = sub_140490C20(a1: v12);
          v14 = sub_140491340(a1: v12, a2: &v50, a3: (unsigned int)v6[114], a4: v13);
          if ( &v54 == (__int128 *)v14 )
          {
            v16 = *((_DWORD **)&v54 + 1);
            v15 = (_DWORD *)v54;
          }
          else
          {
            v15 = *(_DWORD **)v14;
            *(_QWORD *)&v54 = *(_QWORD *)v14;
            v16 = *(_DWORD **)(v14 + 8);
            *((_QWORD *)&v54 + 1) = v16;
            v10 = *(_QWORD *)(v14 + 16);
            v55 = v10;
            *(_QWORD *)v14 = 0;
            *(_QWORD *)(v14 + 8) = 0;
            *(_QWORD *)(v14 + 16) = 0;
          }
          sub_14002AE40(a1: &v50);
          v17 = v6[121];
          if ( v17 == 0 )
            v17 = 1;
          v18 = v6[120] * v17;
          v19 = v15;
          if ( v15 != v16 )
          {
            while ( 1 )
            {
              v20 = *(_QWORD *)v19;
              if ( *(_QWORD *)v19 == 0 )
                goto LABEL_99;
              v21 = *(_DWORD *)(v20 + 488);
              LODWORD(v50) = v19[3];
              DWORD1(v50) = v19[2];
              DWORD2(v50) = *(_DWORD *)(v20 + 16);
              HIDWORD(v50) = v21;
              if ( lpMem[1] == (LPVOID)v49 )
              {
                sub_1400DAA20(a1: lpMem, a2: lpMem[1], a3: &v50);
              }
              else
              {
                *(_OWORD *)lpMem[1] = v50;
                lpMem[1] = (char *)lpMem[1] + 16;
              }
              if ( v21 >= v18 )
                goto LABEL_24;
              v18 -= v21;
              if ( v18 <= 0 )
                break;
              v19 += 4;
              if ( v19 == v16 )
                goto LABEL_24;
            }
            if ( v18 < 0 )
            {
              if ( (unsigned __int8)sub_140059D90(
                                      a1: off_140F6EAC8,
                                      a2: "CPXPlayerItemManager::GatherCurrencyItems totalPrice is negative.") != 0 )
                __debugbreak();
              sub_14002AE40(a1: lpMem);
              goto LABEL_29;
            }
          }
LABEL_24:
          v22 = v59;
          v5 = v43;
          v9 = v45;
          v7 = (__int64 *)v44;
LABEL_53:
          v26 = (const char *)&v59;
          if ( v61 > 0xF )
            v26 = (const char *)v22;
          v27 = v53;
          if ( (unsigned __int8)sub_140059D90(
                                  a1: off_140F6C358,
                                  a2: "Buy makeup request: id = %u, currency = %s, shop id = %u",
                                  v6[4],
                                  v26,
                                  v53) != 0 )
            __debugbreak();
          v28 = sub_1402F0010(a1: v7, a2: v6);
          sub_140205010(a1: v9, a2: v28, a3: v5, a4: v27, a5: lpMem);
          if ( lpMem[0] != nullptr )
          {
            if ( ((v49 - (unsigned __int64)lpMem[0]) & 0xFFFFFFFFFFFFFFF0uLL) < 0x1000 )
            {
              v29 = lpMem[0];
            }
            else
            {
              v29 = *((void **)lpMem[0] - 1);
              if ( (unsigned __int64)((char *)lpMem[0] - (char *)v29 - 8) > 0x1F )
                goto LABEL_60;
            }
            sub_1409DB4C0(lpMem: v29);
          }
          *(__m128i *)lpMem = _mm_load_si128((const __m128i *)&xmmword_140EEE200);
          v49 = 19937;
LABEL_29:
          if ( v15 != nullptr )
          {
            if ( ((v10 - (_QWORD)v15) & 0xFFFFFFFFFFFFFFF0uLL) < 0x1000 )
            {
              v23 = v15;
            }
            else
            {
              v23 = *((_BYTE **)v15 - 1);
              if ( (unsigned __int64)((char *)v15 - v23 - 8) > 0x1F )
                __fastfail(5u);
            }
            sub_1409DB4C0(lpMem: v23);
          }
          goto LABEL_45;
        }
        v60 = 10;
        strcpy((char *)&v59, "Star Coins");
        v22 = 0x696F432072617453LL;
      }
      else
      {
        v22 = sub_1409DB470(a1: 32);
        v60 = 16;
        v61 = 31;
        strcpy((char *)v22, "Jorvik Shillings");
        *(_QWORD *)&v59 = v22;
      }
      v15 = (_DWORD *)v54;
      goto LABEL_53;
    }
    if ( (unsigned __int8)sub_140059CA0(a1: off_140F6C2A8) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
LABEL_99:
    if ( (unsigned __int8)sub_140059D90(a1: off_140F4B500, a2: "Failed to get item pointer in InventoryItemData") != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
LABEL_102:
    if ( (unsigned __int8)sub_140059D90(
                            a1: off_140F6C380,
                            a2: "CPXPlayerItemManager::PlayerItemBuyEquipStyle: Invalid currency type specified in parameters!") != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  LOBYTE(v8) = 16;
  if ( (unsigned __int8)sub_14025F400(a1: v6, a2: v8) == 0 )
  {
    LOBYTE(v30) = 28;
    if ( (unsigned __int8)sub_14025F400(a1: v6, a2: v30) == 0 )
      return;
  }
  LOBYTE(v30) = 16;
  if ( (unsigned __int8)sub_14025F400(a1: v6, a2: v30) != 0 )
  {
    v32 = sub_140491070();
    LOBYTE(v33) = 1;
    sub_1404943F0(a1: v32, a2: (unsigned int)v6[4], a3: 1, a4: v33);
  }
  LOBYTE(v31) = 28;
  if ( (unsigned __int8)sub_14025F400(a1: v6, a2: v31) != 0 )
  {
    v35 = 2;
    v36 = 11;
    v37 = *v7;
    v38 = sub_1400FBAF0(a1: v34);
    (*(void (__fastcall **)(__int64 *, __int64, _QWORD, __int64))(v37 + 776))(a1: v7, a2: 163033, a3: 0, a4: v38);
  }
  else
  {
    v35 = 1;
    v36 = 6;
  }
  if ( v5 == 3 )
    goto LABEL_102;
  v39 = v6[4];
  if ( v5 != 0 )
  {
    if ( v5 == 2
      && (unsigned __int8)sub_140059D90(
                            a1: off_140F6C3E0,
                            a2: "CPXPlayerItemManager::PlayerItemBuyEquipStyle: Function not implemented for item currency!") != 0 )
    {
      __debugbreak();
    }
    LODWORD(v50) = v39;
    DWORD2(v50) = v36;
    BYTE4(v50) = v35;
    v42 = sub_1402F0630();
    HIDWORD(v50) = sub_1407B9F30(a1: v42);
    v51[0] = a4;
    *((_QWORD *)&v59 + 1) = 0;
    v60 = 0;
    LODWORD(v61) = 0;
    *(_QWORD *)&v59 = &PXEngine::ByteStreamWriter::`vftable';
    v44 = &v59;
    v43 = v39;
    if ( sub_1401D0820(a1: &v59, a2: &v43) != 0
      && (LODWORD(v50) = v43, (unsigned __int8)sub_1402B8840(a1: &v59, a2: (char *)&v50 + 4) != 0)
      && (v43 = DWORD2(v50), sub_1401D0820(a1: &v59, a2: &v43) != 0)
      && (DWORD2(v50) = v43, v43 = HIDWORD(v50), sub_1401D0820(a1: &v59, a2: &v43) != 0)
      && (HIDWORD(v50) = v43, (unsigned __int8)sub_1402B7CD0(a1: &v44, a2: v51) != 0) )
    {
      LOWORD(lpMem[0]) = word_141313DB0;
      sub_140A255B0(a1: &lpMem[1], a2: &v59);
      v56 = (__int16)lpMem[0];
      sub_140A255B0(a1: v57, a2: &lpMem[1]);
      v58 = 1;
      sub_140A25690(a1: &lpMem[1]);
    }
    else
    {
      v58 = 0;
    }
    sub_140A25690(a1: &v59);
    v41 = &v56;
  }
  else
  {
    LODWORD(v45) = v6[4];
    v46 = v36;
    BYTE4(v45) = v35;
    v40 = sub_1402F0630();
    v47 = sub_1407B9F30(a1: v40);
    *((_QWORD *)&v59 + 1) = 0;
    v60 = 0;
    LODWORD(v61) = 0;
    *(_QWORD *)&v59 = &PXEngine::ByteStreamWriter::`vftable';
    v44 = &v59;
    v43 = v39;
    if ( sub_1401D0820(a1: &v59, a2: &v43) != 0
      && (LODWORD(v45) = v43, (unsigned __int8)sub_1402B8840(a1: &v59, a2: (char *)&v45 + 4) != 0)
      && (v43 = v46, sub_1401D0820(a1: &v59, a2: &v43) != 0)
      && (v46 = v43, (unsigned __int8)sub_1402B7CD0(a1: &v44, a2: &v47) != 0) )
    {
      LOWORD(lpMem[0]) = word_141313DB4;
      sub_140A255B0(a1: &lpMem[1], a2: &v59);
      LOWORD(v50) = lpMem[0];
      sub_140A255B0(a1: (char *)&v50 + 8, a2: &lpMem[1]);
      v52 = 1;
      sub_140A25690(a1: &lpMem[1]);
    }
    else
    {
      v52 = 0;
    }
    sub_140A25690(a1: &v59);
    v41 = (__int16 *)&v50;
  }
  sub_1407EE6B0(a1: v41);
}