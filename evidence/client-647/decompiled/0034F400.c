__int64 __fastcall sub_14034F400(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rax
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 i; // r15
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  void (__fastcall ***v14)(_QWORD, _QWORD); // rbx
  void (__fastcall ***v15)(_QWORD, _QWORD); // rdi
  __int64 v16; // r14
  __int64 v17; // r15
  __m128i si128; // xmm6
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // r8
  unsigned __int8 *v28; // rbx
  unsigned __int8 *v29; // r12
  __int64 v30; // r13
  unsigned int v31; // r15d
  __int64 v32; // rdi
  __int64 v33; // r14
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rbx
  __int64 v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  char *v42; // rbx
  char *v43; // rdi
  _BYTE *v44; // rcx
  void (__fastcall ***v45)(_QWORD, _QWORD); // rbx
  void (__fastcall ***v46)(_QWORD, _QWORD); // rdi
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  _QWORD *v50; // rbx
  char **v51; // rcx
  char **v52; // rcx
  char **v53; // rcx
  LPVOID lpMem[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v55; // [rsp+30h] [rbp-D0h]
  int v56; // [rsp+38h] [rbp-C8h]
  void **v57; // [rsp+40h] [rbp-C0h] BYREF
  int v58; // [rsp+48h] [rbp-B8h]
  int v59; // [rsp+4Ch] [rbp-B4h]
  void **v60; // [rsp+50h] [rbp-B0h] BYREF
  int v61; // [rsp+58h] [rbp-A8h]
  int v62; // [rsp+5Ch] [rbp-A4h]
  void **v63; // [rsp+60h] [rbp-A0h] BYREF
  int v64; // [rsp+68h] [rbp-98h]
  int v65; // [rsp+6Ch] [rbp-94h]
  __int64 v66; // [rsp+70h] [rbp-90h]
  _BYTE v67[16]; // [rsp+78h] [rbp-88h] BYREF
  __int16 v68; // [rsp+88h] [rbp-78h]
  _BYTE v69[32]; // [rsp+90h] [rbp-70h] BYREF
  __int16 v70; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v71[40]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v72[16]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v73[16]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v74[16]; // [rsp+100h] [rbp+0h] BYREF
  unsigned int v75; // [rsp+168h] [rbp+68h] BYREF
  __int64 v76; // [rsp+170h] [rbp+70h]
  __int64 v77; // [rsp+178h] [rbp+78h]

  if ( *(_QWORD *)&nExitCode != 0 )
  {
    result = sub_1405F1EE0(a1: (__int64)&off_141310F50);
    if ( result != 0 )
    {
      result = sub_1406456B0(a1: result, a2: 120);
      if ( (_BYTE)result != 0 )
      {
        dword_14138DFD0 = 0;
        byte_14138DFD4 = 0;
        v3 = sub_1405F1EE0(a1: (__int64)&off_141313B68);
        v4 = v3;
        v77 = v3;
        if ( v3 != 0 )
          *(_BYTE *)(v3 + 2385) = *(_BYTE *)(v3 + 2385) & 0xFE | (dword_14138DFD0 != 0);
        if ( sub_1401E06C0() != 0 )
          sub_1401FB3E0();
        v5 = *(_QWORD *)(a1 + 760);
        if ( v5 != *(_QWORD *)(a1 + 768) )
          *(_QWORD *)(a1 + 768) = v5;
        v6 = *(_QWORD *)(a1 + 784);
        if ( v6 != *(_QWORD *)(a1 + 792) )
          *(_QWORD *)(a1 + 792) = v6;
        v7 = *(_QWORD *)(a1 + 152);
        for ( i = *(_QWORD *)(a1 + 160); v7 != i; v7 += 16 )
        {
          v9 = sub_1405F1EE0(a1: v7);
          v10 = v9;
          if ( v9 == 0 )
          {
            if ( (unsigned __int8)sub_140059CA0(a1: off_140F77078) != 0 )
              __debugbreak();
            sub_1409E29B8(a1: 999);
            __debugbreak();
          }
          if ( (unsigned __int8)sub_1401E88C0(a1: v9) != 0 )
          {
            sub_14035E6A0(a1, a2: v10);
            sub_14035E560(a1, a2: *(unsigned int *)(v10 + 3112));
          }
          v12 = *(_QWORD *)v10;
          v13 = sub_1400FBAF0(a1: v11);
          (*(void (__fastcall **)(__int64, __int64))(v12 + 208))(a1: v10, a2: v13);
          sub_1400AF390(a1: v10);
        }
        v14 = *(void (__fastcall ****)(_QWORD, _QWORD))(a1 + 152);
        v15 = *(void (__fastcall ****)(_QWORD, _QWORD))(a1 + 160);
        if ( v14 != v15 )
        {
          do
          {
            (**v14)(a1: v14, a2: 0);
            v14 += 2;
          }
          while ( v14 != v15 );
          *(_QWORD *)(a1 + 160) = *(_QWORD *)(a1 + 152);
        }
        v16 = *(_QWORD *)(a1 + 184);
        v76 = v16;
        v17 = *(_QWORD *)(a1 + 192);
        v66 = v17;
        if ( v16 == v17 )
          goto LABEL_63;
        si128 = _mm_load_si128((const __m128i *)&xmmword_140EEE200);
        while ( 1 )
        {
          v19 = sub_1405F1EE0(a1: v16 + 304);
          v20 = v19;
          if ( v19 != 0 )
          {
            if ( (unsigned __int8)sub_1401E88C0(a1: v19) != 0 )
            {
              sub_14035E6A0(a1, a2: v20);
              sub_14035E560(a1, a2: *(unsigned int *)(v20 + 3112));
            }
            v22 = *(_QWORD *)v20;
            v23 = sub_1400FBAF0(a1: v21);
            (*(void (__fastcall **)(__int64, __int64))(v22 + 208))(a1: v20, a2: v23);
            sub_1400AF390(a1: v20);
            goto LABEL_62;
          }
          if ( v4 == 0 || *(_DWORD *)(v16 + 80) != *(_DWORD *)(v4 + 1720) )
            goto LABEL_62;
          v24 = qword_14138A6F0;
          if ( qword_14138A6F0 == 0 )
          {
            v53 = off_140F35058;
            goto LABEL_94;
          }
          v25 = sub_1405FD2E0(a1: qword_14138A6F0, a2: v72, a3: "EquipmentManager");
          if ( (unsigned __int8)sub_1406006A0(a1: v24, a2: v25, a3: 342) != 0 )
          {
            sub_1405F1D60(a1: &v57, a2: *(unsigned int *)(v25 + 12), a3: *(unsigned int *)(v25 + 8));
          }
          else
          {
            v58 = 0;
            v59 = 195948557;
          }
          v57 = &PXEngine::SafeActorPtrAs<PXEngine::EquipmentManager>::`vftable';
          v26 = sub_1405F1EE0(a1: (__int64)&v57);
          if ( v26 == 0 )
            goto LABEL_92;
          LOBYTE(v27) = 2;
          sub_140488180(a1: v26, a2: lpMem, a3: v27);
          v28 = (unsigned __int8 *)lpMem[0];
          v29 = (unsigned __int8 *)lpMem[1];
          if ( lpMem[0] == lpMem[1] )
            goto LABEL_45;
          v30 = v16 + 8;
          do
          {
            v31 = sub_1407F3550(a1: v30, a2: v28[8]);
            v75 = v31;
            v32 = qword_14138A6F0;
            if ( qword_14138A6F0 == 0 )
            {
              if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
                __debugbreak();
              sub_1409E29B8(a1: 999);
              __debugbreak();
            }
            v33 = sub_1405FD2E0(a1: qword_14138A6F0, a2: v73, a3: "PlayerItemManager");
            if ( (unsigned __int8)sub_1406006A0(a1: v32, a2: v33, a3: 163) != 0 )
            {
              sub_1405F1D60(a1: &v60, a2: *(unsigned int *)(v33 + 12), a3: *(unsigned int *)(v33 + 8));
            }
            else
            {
              v61 = 0;
              v62 = 195948557;
            }
            v60 = &PXEngine::SafeActorPtrAs<CPXPlayerItemManager>::`vftable';
            v34 = sub_1405F1EE0(a1: (__int64)&v60);
            if ( v34 == 0 )
            {
              v52 = off_140F770C8;
              goto LABEL_86;
            }
            if ( sub_1401E0840(a1: v34, a2: v31, a3: v35, a4: v36) != 0
              && sub_1409D1F10(a1: *(_QWORD *)(a1 + 760), a2: *(_QWORD *)(a1 + 768), a3: v31) == *(_QWORD *)(a1 + 768) )
            {
              sub_1400A9840(a1: a1 + 760, a2: &v75);
            }
            v28 += 72;
          }
          while ( v28 != v29 );
          v16 = v76;
          v4 = v77;
          v17 = v66;
LABEL_45:
          v37 = qword_14138A6F0;
          if ( qword_14138A6F0 == 0 )
          {
            if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
              __debugbreak();
            sub_1409E29B8(a1: 999);
LABEL_92:
            v53 = off_140F40268;
LABEL_94:
            if ( (unsigned __int8)sub_140059CA0(a1: v53) != 0 )
              __debugbreak();
            sub_1409E29B8(a1: 999);
            __debugbreak();
          }
          v38 = sub_1405FD2E0(a1: qword_14138A6F0, a2: v74, a3: "HorseForSaleManager");
          if ( (unsigned __int8)sub_1406006A0(a1: v37, a2: v38, a3: 165) != 0 )
          {
            sub_1405F1D60(a1: &v63, a2: *(unsigned int *)(v38 + 12), a3: *(unsigned int *)(v38 + 8));
          }
          else
          {
            v64 = 0;
            v65 = 195948557;
          }
          v63 = &PXEngine::SafeActorPtrAs<CPXHorseManager>::`vftable';
          v39 = sub_1405F1EE0(a1: (__int64)&v63);
          if ( v39 == 0 )
          {
            v52 = off_140F770F0;
LABEL_86:
            if ( (unsigned __int8)sub_140059CA0(a1: v52) != 0 )
              __debugbreak();
            sub_1409E29B8(a1: 999);
            __debugbreak();
          }
          v40 = sub_140312350(a1: v39, a2: v67, a3: *(unsigned int *)(v16 + 12), a4: 0);
          v41 = sub_1405F1EE0(a1: v40);
          if ( v41 != 0 )
            sub_14035E560(a1, a2: *(unsigned int *)(v41 + 368));
          v42 = (char *)lpMem[0];
          if ( lpMem[0] != nullptr )
          {
            v43 = (char *)lpMem[1];
            if ( lpMem[0] != lpMem[1] )
            {
              do
              {
                (**(void (__fastcall ***)(LPVOID, _QWORD))v42)(a1: v42, a2: 0);
                v42 += 72;
              }
              while ( v42 != v43 );
              v42 = (char *)lpMem[0];
            }
            if ( (unsigned __int64)(72 * ((v55 - (__int64)v42) / 72)) < 0x1000 )
            {
              v44 = v42;
            }
            else
            {
              v44 = *((_BYTE **)v42 - 1);
              if ( (unsigned __int64)(v42 - v44 - 8) > 0x1F )
                __fastfail(5u);
            }
            sub_1409DB4C0(lpMem: v44);
          }
          *(__m128i *)lpMem = si128;
          v55 = 19937;
LABEL_62:
          v16 += 320;
          v76 = v16;
          if ( v16 == v17 )
          {
LABEL_63:
            v45 = *(void (__fastcall ****)(_QWORD, _QWORD))(a1 + 184);
            v46 = *(void (__fastcall ****)(_QWORD, _QWORD))(a1 + 192);
            if ( v45 != v46 )
            {
              do
              {
                (**v45)(a1: v45, a2: 0);
                v45 += 40;
              }
              while ( v45 != v46 );
              *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 184);
            }
            *(_BYTE *)(a1 + 176) = 0;
            if ( qword_14138A6F0 != 0 )
            {
              v47 = sub_1403AB8B0(a1: v67);
              v48 = sub_1405F1EE0(a1: v47);
              if ( v48 != 0 )
              {
                sub_1403AB2B0(a1: v48);
                *(_DWORD *)(a1 + 252) = 0;
                v49 = sub_140636E40();
                sub_14063C030(a1: v49, a2: 0);
                goto LABEL_69;
              }
              v51 = off_140F75400;
            }
            else
            {
              v51 = off_140F35058;
            }
            if ( (unsigned __int8)sub_140059CA0(a1: v51) != 0 )
              __debugbreak();
            sub_1409E29B8(a1: 999);
            __debugbreak();
          }
        }
      }
    }
  }
  else
  {
LABEL_69:
    if ( *(_BYTE *)(a1 + 260) == 0 && (unsigned __int8)sub_14034C6F0(a1) != 0 )
    {
      *(_DWORD *)(a1 + 680) = 0;
      sub_14000D680(a1: a1 + 648, a2: &byte_140EEC5C5, a3: 0);
      *(_DWORD *)(a1 + 684) = 0;
      v50 = *(_QWORD **)(a1 + 688);
      sub_1403484E0(a1: a1 + 688, a2: a1 + 688, a3: v50[1]);
      v50[1] = v50;
      *v50 = v50;
      v50[2] = v50;
      *(_QWORD *)(a1 + 696) = 0;
    }
    lpMem[1] = nullptr;
    v55 = 0;
    v56 = 0;
    lpMem[0] = &PXEngine::ByteStreamWriter::`vftable';
    v68 = word_141313CE0;
    sub_140A255B0(a1: v69, a2: lpMem);
    v70 = v68;
    sub_140A255B0(a1: v71, a2: v69);
    v71[32] = 1;
    sub_140A25690(a1: v69);
    sub_140A25690(a1: lpMem);
    sub_1407EE6B0(a1: &v70);
    result = sub_140059D90(a1: off_140F77118, a2: "ExitStable - Player Exits MyStable");
    if ( (_BYTE)result != 0 )
      __debugbreak();
  }
  return result;
}