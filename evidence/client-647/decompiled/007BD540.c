void __fastcall sub_1407BD540(__int64 a1, __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rax
  void *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  void *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r15
  int v18; // ecx
  int v19; // edx
  char *v20; // rdi
  char *i; // r14
  __int64 v22; // rax
  __int64 v23; // rbx
  _QWORD *v24; // rax
  _QWORD *v25; // rbx
  __int64 v26; // rax
  _BYTE *v27; // rax
  __int64 j; // rax
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rax
  char *v32; // rbx
  char *v33; // rdi
  _BYTE *v34; // rcx
  char **v35; // rcx
  char **k; // rcx
  void **v37; // [rsp+40h] [rbp-C0h] BYREF
  int v38; // [rsp+48h] [rbp-B8h]
  int v39; // [rsp+4Ch] [rbp-B4h]
  _BYTE v40[16]; // [rsp+50h] [rbp-B0h] BYREF
  void **v41; // [rsp+60h] [rbp-A0h] BYREF
  int v42; // [rsp+68h] [rbp-98h]
  int v43; // [rsp+6Ch] [rbp-94h]
  LPVOID lpMem[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v45; // [rsp+80h] [rbp-80h]
  unsigned __int16 v46; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v47[32]; // [rsp+90h] [rbp-70h] BYREF
  char v48; // [rsp+B0h] [rbp-50h]
  char v49; // [rsp+B8h] [rbp-48h] BYREF
  char v50; // [rsp+C8h] [rbp-38h] BYREF
  char v51; // [rsp+D8h] [rbp-28h] BYREF
  char v52; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v53; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v54; // [rsp+108h] [rbp+8h]
  unsigned __int64 v55; // [rsp+110h] [rbp+10h]
  _WORD v56[6]; // [rsp+118h] [rbp+18h] BYREF
  int v57; // [rsp+124h] [rbp+24h]
  __int64 v58; // [rsp+128h] [rbp+28h]
  unsigned __int64 v59; // [rsp+130h] [rbp+30h]

  if ( (float)(*(float *)(a1 + 2512) + 3.0) <= sub_1400AED80(a1) )
  {
    if ( qword_14138A6F0 == 0 )
      goto LABEL_57;
    sub_1405FD2E0(a1: qword_14138A6F0, a2: v40, a3: "InspectCharacterSheet");
    if ( sub_1405F1EE0(a1: (__int64)v40) != 0 )
    {
      v4 = qword_14138A6F0;
      v5 = sub_1405FADF0(
             a1: qword_14138A6F0,
             a2: (unsigned int)&v41,
             a3: (unsigned int)v40,
             a4: (unsigned int)"CharacterItemRoot",
             a5: -1,
             a6: -1,
             a7: -1,
             a8: 1);
      v6 = sub_1405F1EE0(a1: v5);
      if ( v6 == 0 )
      {
        v53 = 0;
        v54 = 0;
        v55 = 0;
        *(_QWORD *)&v53 = sub_1409DB470(a1: 32);
        v54 = 17;
        v55 = 31;
        strcpy((char *)v53, "CharacterItemRoot");
        v7 = sub_1405F1EE0(a1: (__int64)v40);
        v8 = sub_1405F8F90(a1: v4, a2: (unsigned int)&v49, a3: 1, a4: 0, a5: v7, a6: (__int64)&v53, a7: 1243, a8: 1);
        v6 = sub_1405F1EE0(a1: v8);
        if ( v55 > 0xF )
        {
          v9 = (void *)v53;
          if ( v55 + 1 >= 0x1000 )
          {
            if ( (unsigned __int64)(v53 - *(_QWORD *)(v53 - 8) - 8) > 0x1F )
              goto LABEL_52;
            v9 = *(void **)(v53 - 8);
          }
          sub_1409DB4C0(lpMem: v9);
        }
        *(_QWORD *)&v53 = 19937;
        v54 = 0;
        v55 = 31;
        if ( v6 == 0 )
        {
          v35 = off_141014308;
          goto LABEL_60;
        }
      }
      v10 = sub_1405FADF0(
              a1: v4,
              a2: (unsigned int)&v50,
              a3: (unsigned int)v40,
              a4: (unsigned int)"HorseItemRoot",
              a5: -1,
              a6: -1,
              a7: -1,
              a8: 1);
      v11 = sub_1405F1EE0(a1: v10);
      if ( v11 == 0 )
      {
        v58 = 13;
        v59 = 15;
        qmemcpy(v56, "HorseItemRoo", sizeof(v56));
        v57 = (unsigned __int8)aHorseitemroot[12];
        v12 = sub_1405F1EE0(a1: (__int64)v40);
        v13 = sub_1405F8F90(a1: v4, a2: (unsigned int)&v51, a3: 1, a4: 0, a5: v12, a6: (__int64)v56, a7: 1243, a8: 1);
        v11 = sub_1405F1EE0(a1: v13);
        if ( v59 > 0xF )
        {
          v14 = *(void **)v56;
          if ( v59 + 1 >= 0x1000 )
          {
            if ( (unsigned __int64)(*(_QWORD *)v56 - *(_QWORD *)(*(_QWORD *)v56 - 8LL) - 8LL) > 0x1F )
              goto LABEL_52;
            v14 = *(void **)(*(_QWORD *)v56 - 8LL);
          }
          sub_1409DB4C0(lpMem: v14);
        }
        *(_QWORD *)v56 = 19937;
        v58 = 0;
        v59 = 31;
        if ( v11 == 0 )
        {
          v35 = off_141014368;
          goto LABEL_60;
        }
      }
      v15 = sub_1405FADF0(
              a1: v4,
              a2: (unsigned int)&v37,
              a3: (unsigned int)v40,
              a4: (unsigned int)"InspectFactionList",
              a5: -1,
              a6: -1,
              a7: -1,
              a8: 1);
      *(_DWORD *)(a1 + 1952) = *(_DWORD *)(v15 + 8);
      *(_DWORD *)(a1 + 1956) = *(_DWORD *)(v15 + 12);
      v16 = sub_1405FADF0(
              a1: v4,
              a2: (unsigned int)&v37,
              a3: (unsigned int)v40,
              a4: (unsigned int)"InspectHorseList",
              a5: -1,
              a6: -1,
              a7: -1,
              a8: 1);
      *(_DWORD *)(a1 + 1968) = *(_DWORD *)(v16 + 8);
      *(_DWORD *)(a1 + 1972) = *(_DWORD *)(v16 + 12);
      v17 = sub_1405FADF0(
              a1: v4,
              a2: (unsigned int)&v52,
              a3: (unsigned int)v40,
              a4: (unsigned int)"DataInfoReceived",
              a5: -1,
              a6: -1,
              a7: -1,
              a8: 1);
      if ( (unsigned __int8)sub_1405F1F70(a1: v17, a2: 91) != 0 )
      {
        sub_1405F1D60(a1: &v37, a2: *(unsigned int *)(v17 + 12), a3: *(unsigned int *)(v17 + 8));
        v18 = v39;
        v19 = v38;
      }
      else
      {
        v19 = 0;
        v18 = 195948557;
      }
      v37 = &PXEngine::SafeActorPtrAs<CPXData>::`vftable';
      *(_DWORD *)(a1 + 2504) = v19;
      *(_DWORD *)(a1 + 2508) = v18;
      sub_1406453B0(a1: v6);
      sub_1406453B0(a1: v11);
      *(_OWORD *)lpMem = 0;
      v45 = 0;
      sub_1402E9E20(a1: v4, a2: (unsigned int)v40, a3: (unsigned int)lpMem, a4: 117, a5: -1, a6: 1);
      v20 = (char *)lpMem[0];
      for ( i = (char *)lpMem[1]; v20 != i; v20 += 16 )
      {
        v22 = sub_1405F1EE0(a1: (__int64)v20);
        v23 = v22;
        if ( v22 == 0 )
          goto LABEL_63;
        v41 = &PXEngine::SafeActorPtr::`vftable';
        v42 = 0;
        v43 = 195948557;
        (*(void (__fastcall **)(__int64, void ***))(*(_QWORD *)v22 + 1272LL))(a1: v22, a2: &v41);
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v23 + 1256LL))(a1: v23, a2: 0);
      }
      sub_1400775B0(a1: &v41, a2: &String2);
      sub_1400787F0(a1: &v41, a2);
      sub_14007E430(a1: &v41, a2: 65001);
      v24 = *(_QWORD **)(a1 + 1912);
      v25 = (_QWORD *)*v24;
      if ( (_QWORD *)*v24 == v24 )
      {
LABEL_35:
        v29 = 0;
      }
      else
      {
        while ( 1 )
        {
          v26 = sub_1405F1EE0(a1: (__int64)(v25 + 5));
          if ( v26 != 0 && (unsigned __int8)sub_1400789F0(a1: v26 + 1728, a2: &v41) != 0 )
            break;
          v27 = (_BYTE *)v25[2];
          if ( v27[25] != 0 )
          {
            for ( j = v25[1]; *(_BYTE *)(j + 25) == 0; j = *(_QWORD *)(j + 8) )
            {
              if ( v25 != *(_QWORD **)(j + 16) )
                break;
              v25 = (_QWORD *)j;
            }
            v25 = (_QWORD *)j;
          }
          else
          {
            v25 = (_QWORD *)v25[2];
            if ( *(_BYTE *)(*(_QWORD *)v27 + 25LL) == 0 )
            {
              do
                v25 = (_QWORD *)*v25;
              while ( *(_BYTE *)(*v25 + 25LL) == 0 );
            }
          }
          if ( v25 == *(_QWORD **)(a1 + 1912) )
            goto LABEL_35;
        }
        v29 = *((_DWORD *)v25 + 8);
      }
      *((_QWORD *)&v53 + 1) = 0;
      v54 = 0;
      LODWORD(v55) = 0;
      *(_QWORD *)&v53 = &PXEngine::ByteStreamWriter::`vftable';
      LODWORD(v37) = v29;
      if ( sub_1401D0820(a1: &v53, a2: &v37) != 0 )
      {
        v56[0] = word_141313D14;
        sub_140A255B0(a1: &v56[4], a2: &v53);
        v46 = v56[0];
        sub_140A255B0(a1: v47, a2: &v56[4]);
        v48 = 1;
        sub_140A25690(a1: &v56[4]);
      }
      else
      {
        v48 = 0;
      }
      sub_140A25690(a1: &v53);
      v37 = (void **)&v46;
      if ( v48 != 0 )
      {
        sub_1407D5600(a1, a2: v46, a3: v47);
        if ( v48 != 0 )
        {
          sub_140A25690(a1: v47);
          v48 = 0;
        }
      }
      sub_1400778C0(a1: &v41);
      *(float *)(a1 + 2512) = sub_1400AED80(a1);
      v30 = sub_1405F1EE0(a1: a1 + 2496);
      if ( v30 == 0 )
      {
        for ( k = off_140F4EB58; ; k = off_140F5D7E8 )
        {
          if ( (unsigned __int8)sub_140059CA0(a1: k) != 0 )
            __debugbreak();
          sub_1409E29B8(a1: 999);
LABEL_57:
          v35 = off_140F35058;
LABEL_60:
          if ( (unsigned __int8)sub_140059CA0(a1: v35) != 0 )
            __debugbreak();
          sub_1409E29B8(a1: 999);
LABEL_63:
          ;
        }
      }
      if ( (*(_BYTE *)(v30 + 244) & 2) == 0 )
        sub_1400784D0(a1: v30 + 152, a2: 0);
      v31 = sub_1405F1EE0(a1: (__int64)v40);
      sub_1400C29E0(a1: v31);
      v32 = (char *)lpMem[0];
      if ( lpMem[0] != nullptr )
      {
        v33 = (char *)lpMem[1];
        if ( lpMem[0] != lpMem[1] )
        {
          do
          {
            (**(void (__fastcall ***)(LPVOID, _QWORD))v32)(a1: v32, a2: 0);
            v32 += 16;
          }
          while ( v32 != v33 );
          v32 = (char *)lpMem[0];
        }
        if ( ((v45 - (_QWORD)v32) & 0xFFFFFFFFFFFFFFF0uLL) < 0x1000 )
        {
          v34 = v32;
        }
        else
        {
          v34 = *((_BYTE **)v32 - 1);
          if ( (unsigned __int64)(v32 - v34 - 8) > 0x1F )
LABEL_52:
            __fastfail(5u);
        }
        sub_1409DB4C0(lpMem: v34);
      }
    }
  }
}