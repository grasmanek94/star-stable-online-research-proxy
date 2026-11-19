__int64 __fastcall sub_14048ABC0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r15
  __int64 result; // rax
  __int64 v6; // r13
  __int64 *v7; // r12
  void **v8; // rdi
  __int64 v9; // rax
  _QWORD *v10; // rax
  void *v11; // rax
  _QWORD **v12; // rcx
  _QWORD *v13; // rcx
  _QWORD *v14; // rbx
  _QWORD *v15; // rax
  void *v16; // rax
  _QWORD **v17; // rcx
  _QWORD *v18; // rcx
  _QWORD *v19; // rbx
  _QWORD *v20; // rax
  char *v21; // rcx
  unsigned int v22; // r14d
  __int64 v23; // rsi
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rbx
  void *v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rcx
  char v34; // al
  __int64 v35; // rax
  void *v36; // rcx
  __int64 v37; // rdx
  void *v38; // rax
  _BYTE *v39; // rax
  int v40; // r14d
  __int64 v41; // rsi
  __int64 (__fastcall **v42)(void **, __int64, __int64); // rbx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdi
  __int64 v46; // rbx
  void *v47; // rcx
  __int64 v48; // rbx
  __int64 v49; // rax
  __int64 v50; // rax
  _BYTE *v51; // rcx
  __int64 v52; // rdx
  _BYTE *v53; // rax
  __int64 v54; // rbx
  __int64 v55; // rdi
  char v56[8]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v57[4]; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v58; // [rsp+58h] [rbp-A8h]
  _QWORD v59[2]; // [rsp+60h] [rbp-A0h] BYREF
  void **v60; // [rsp+70h] [rbp-90h] BYREF
  int v61; // [rsp+78h] [rbp-88h]
  int v62; // [rsp+7Ch] [rbp-84h]
  LPVOID v63; // [rsp+80h] [rbp-80h] BYREF
  _BYTE *v64; // [rsp+88h] [rbp-78h] BYREF
  __int64 v65; // [rsp+90h] [rbp-70h]
  char v66; // [rsp+A8h] [rbp-58h]
  __int64 v67; // [rsp+B0h] [rbp-50h] BYREF
  char v68[8]; // [rsp+C0h] [rbp-40h] BYREF
  char v69[8]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v70; // [rsp+D0h] [rbp-30h]
  char v71[24]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v72; // [rsp+F0h] [rbp-10h]
  __int64 v73; // [rsp+F8h] [rbp-8h]
  char v74[8]; // [rsp+100h] [rbp+0h] BYREF
  char v75[8]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v76; // [rsp+110h] [rbp+10h]
  char v77[24]; // [rsp+118h] [rbp+18h] BYREF
  __int64 v78; // [rsp+130h] [rbp+30h]
  __int64 v79; // [rsp+138h] [rbp+38h]
  __int64 v80; // [rsp+140h] [rbp+40h] BYREF
  LPVOID lpMem; // [rsp+148h] [rbp+48h] BYREF
  __int64 v82; // [rsp+150h] [rbp+50h]
  __m128i si128; // [rsp+158h] [rbp+58h] BYREF
  __int64 v84; // [rsp+168h] [rbp+68h]
  __int64 v85; // [rsp+170h] [rbp+70h]
  __int64 v86; // [rsp+178h] [rbp+78h]
  int v87; // [rsp+180h] [rbp+80h] BYREF
  __int128 v88; // [rsp+188h] [rbp+88h] BYREF
  __int64 v89; // [rsp+198h] [rbp+98h]
  __int64 v90; // [rsp+1A0h] [rbp+A0h]
  __int64 v91; // [rsp+1A8h] [rbp+A8h] BYREF
  __int128 v92; // [rsp+1B0h] [rbp+B0h]
  __int64 v93; // [rsp+1C0h] [rbp+C0h]
  int v94; // [rsp+1C8h] [rbp+C8h]
  int v95; // [rsp+1CCh] [rbp+CCh]

  LOBYTE(a2) = 1;
  v4 = sub_140487B30(a1, a2);
  if ( v4 == 0 )
  {
    result = sub_140059D90(
               a1: off_140FA2460,
               a2: "EquipmentManager::RequestEquipWardrobeSet: could not get characterEquipmentDescription");
    if ( (_BYTE)result == 0 )
      return result;
LABEL_15:
    __debugbreak();
  }
  LOBYTE(v3) = 2;
  v6 = sub_140487B30(a1, a2: v3);
  if ( v6 == 0 )
  {
    result = sub_140059D90(
               a1: off_140FA24C0,
               a2: "EquipmentManager::RequestEquipWardrobeSet: could not get horseEquipmentDescription");
    if ( (_BYTE)result != 0 )
      goto LABEL_15;
    return result;
  }
  v7 = (__int64 *)sub_140487FE0(a1: v4);
  if ( v7 == nullptr )
  {
    result = sub_140059D90(
               a1: off_140FA24E8,
               a2: "EquipmentManager::RequestEquipWardrobeSet: could not get characterEquipmentItemsRoot");
    if ( (_BYTE)result != 0 )
      goto LABEL_15;
    return result;
  }
  v8 = (void **)sub_140487FE0(a1: v6);
  v60 = v8;
  if ( v8 == nullptr )
  {
    result = sub_140059D90(
               a1: off_140FA2510,
               a2: "EquipmentManager::RequestEquipWardrobeSet: could not get horseEquipmentItemsRoot");
    if ( (_BYTE)result != 0 )
      goto LABEL_15;
    return result;
  }
  v9 = sub_140490FC0();
  v67 = v9;
  if ( v9 != 0 )
  {
    v58 = sub_140490C20(a1: v9);
    v88 = 0;
    v89 = 0;
    v90 = 15;
    LOBYTE(v88) = 0;
    v91 = 0;
    v92 = 0;
    v93 = 0;
    v95 = 0;
    v94 = *(_DWORD *)(a1 + 240);
    v87 = *(_DWORD *)(a1 + 244);
    sub_140082850(a1: v74);
    sub_140082850(a1: v68);
    switch ( v94 )
    {
      case 0:
        LODWORD(v80) = 0;
        v59[0] = &lpMem;
        lpMem = nullptr;
        v82 = 0;
        v10 = (_QWORD *)sub_1409DB470(a1: 24);
        *v10 = v10;
        v10[1] = v10;
        lpMem = v10;
        si128 = 0;
        v84 = 0;
        v85 = 7;
        v86 = 8;
        LODWORD(v80) = 1065353216;
        sub_14004B820(a1: &si128, a2: 16, a3: v10);
        sub_140483F90(a1: v74, a2: &v80);
        v85 = 7;
        v86 = 8;
        if ( si128.m128i_i64[0] != 0 )
        {
          if ( (unsigned __int64)(8 * ((v84 - si128.m128i_i64[0]) >> 3)) < 0x1000 )
          {
            v11 = (void *)si128.m128i_i64[0];
          }
          else
          {
            v11 = *(void **)(si128.m128i_i64[0] - 8);
            if ( (unsigned __int64)(si128.m128i_i64[0] - (_QWORD)v11 - 8) > 0x1F )
              goto LABEL_120;
          }
          sub_1409DB4C0(lpMem: v11);
        }
        si128 = _mm_load_si128((const __m128i *)&xmmword_140EEE200);
        v84 = 19937;
        v12 = (_QWORD **)lpMem;
        **((_QWORD **)lpMem + 1) = 0;
        v13 = *v12;
        if ( v13 != nullptr )
        {
          do
          {
            v14 = (_QWORD *)*v13;
            sub_1409DB4C0(lpMem: v13);
            v13 = v14;
          }
          while ( v14 != nullptr );
        }
        sub_1409DB4C0(lpMem);
        LODWORD(v80) = 0;
        v59[0] = &lpMem;
        lpMem = nullptr;
        v82 = 0;
        v15 = (_QWORD *)sub_1409DB470(a1: 24);
        *v15 = v15;
        v15[1] = v15;
        lpMem = v15;
        si128 = 0;
        v84 = 0;
        v85 = 7;
        v86 = 8;
        LODWORD(v80) = 1065353216;
        sub_14004B820(a1: &si128, a2: 16, a3: v15);
        sub_140483F90(a1: v68, a2: &v80);
        v85 = 7;
        v86 = 8;
        if ( si128.m128i_i64[0] != 0 )
        {
          if ( (unsigned __int64)(8 * ((v84 - si128.m128i_i64[0]) >> 3)) < 0x1000 )
          {
            v16 = (void *)si128.m128i_i64[0];
          }
          else
          {
            v16 = *(void **)(si128.m128i_i64[0] - 8);
            if ( (unsigned __int64)(si128.m128i_i64[0] - (_QWORD)v16 - 8) > 0x1F )
              goto LABEL_120;
          }
          sub_1409DB4C0(lpMem: v16);
        }
        si128 = _mm_load_si128((const __m128i *)&xmmword_140EEE200);
        v84 = 19937;
        v17 = (_QWORD **)lpMem;
        **((_QWORD **)lpMem + 1) = 0;
        v18 = *v17;
        if ( v18 != nullptr )
        {
          do
          {
            v19 = (_QWORD *)*v18;
            sub_1409DB4C0(lpMem: v18);
            v18 = v19;
          }
          while ( v19 != nullptr );
        }
        sub_1409DB4C0(lpMem);
        lpMem = (LPVOID)19937;
        v82 = 0;
        goto LABEL_39;
      case 1:
        LODWORD(v80) = 0;
        v59[0] = &lpMem;
        lpMem = nullptr;
        v82 = 0;
        v20 = (_QWORD *)sub_1409DB470(a1: 24);
        *v20 = v20;
        v20[1] = v20;
        lpMem = v20;
        si128 = 0;
        v84 = 0;
        v85 = 7;
        v86 = 8;
        LODWORD(v80) = 1065353216;
        sub_14004B820(a1: &si128, a2: 16, a3: v20);
        v21 = v74;
        break;
      case 2:
        sub_140082850(a1: &v80);
        v21 = v68;
        break;
      default:
LABEL_39:
        if ( v76 != 0 )
        {
          v22 = 0;
          sub_14047D9E0(a1: v4);
          do
          {
            v57[0] = 0;
            LOBYTE(v57[1]) = 0;
            *(_QWORD *)((char *)&v57[1] + 4) = 0;
            *(_QWORD *)((char *)&v57[2] + 4) = 0;
            v23 = sub_14005D330();
            v24 = *v7;
            v25 = sub_14047DA40(a1: v4, a2: &v80, a3: (unsigned __int8)v22);
            v26 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(v24 + 352))(
                    a1: v7,
                    a2: v25,
                    a3: 0xFFFFFFFFLL);
            v27 = v26;
            if ( v26 != 0 )
            {
              v28 = 0;
              if ( (unsigned __int8)sub_140645790(a1: v26, a2: 1, a3: v23) != 0 )
                v28 = v27;
            }
            else
            {
              v28 = 0;
            }
            if ( si128.m128i_i64[0] > 0xFuLL )
            {
              v29 = (void *)v80;
              if ( (unsigned __int64)(si128.m128i_i64[0] + 1) >= 0x1000 )
              {
                if ( (unsigned __int64)(v80 - *(_QWORD *)(v80 - 8) - 8) > 0x1F )
                  goto LABEL_120;
                v29 = *(void **)(v80 - 8);
              }
              sub_1409DB4C0(lpMem: v29);
            }
            v80 = 19937;
            v82 = 0;
            si128.m128i_i64[0] = 31;
            if ( v28 != 0 )
            {
              if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v28 + 248LL))(a1: v28) != 0 )
              {
                if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v28 + 256LL))(a1: v28, a2: 0) == 0 )
                {
                  if ( (unsigned __int8)sub_140059D90(
                                          a1: off_140FA2560,
                                          a2: "EquipmentManager::RequestEquipWardrobeSet: Could not get child from character "
                                          "equipment folder") == 0 )
                    goto LABEL_135;
                  goto LABEL_130;
                }
                v30 = sub_14005D330();
                v31 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v28 + 256LL))(a1: v28, a2: 0);
                v32 = v31;
                if ( v31 != 0 )
                {
                  v34 = sub_140645790(a1: v31, a2: 101, a3: v30);
                  v33 = 0;
                  if ( v34 != 0 )
                    v33 = v32;
                }
                else
                {
                  v33 = 0;
                }
                LODWORD(v57[0]) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 152LL))(a1: v33);
                if ( LODWORD(v57[0]) == 0 )
                {
                  if ( (unsigned __int8)sub_140059D90(
                                          a1: off_140FA2588,
                                          a2: "EquipmentManager::RequestEquipWardrobeSet: could not get from item id") == 0 )
                    goto LABEL_135;
                  goto LABEL_130;
                }
              }
              v56[0] = v22;
              v35 = sub_140323F10(a1: v74, a2: v59, a3: v56);
              sub_140491340(a1: v67, a2: &v63, a3: *(unsigned int *)(*(_QWORD *)v35 + 20LL), a4: v58);
              v36 = v63;
              if ( v63 != v64 )
              {
                if ( (v64 - (_BYTE *)v63) >> 4 == 0 )
                  __fastfail(5u);
                if ( *(_QWORD *)v63 != 0 )
                {
                  HIDWORD(v57[0]) = *(_DWORD *)(*(_QWORD *)v63 + 16LL);
                  HIDWORD(v57[1]) = *((_DWORD *)v63 + 3);
                  LODWORD(v57[3]) = *((_DWORD *)v63 + 2);
                  LOBYTE(v57[1]) = 1;
                  v37 = v92;
                  if ( (_QWORD)v92 == *((_QWORD *)&v92 + 1) )
                  {
                    sub_140482140(a1: &v91, a2: v92, a3: v57);
                  }
                  else
                  {
                    *(_OWORD *)v92 = *(_OWORD *)v57;
                    *(_OWORD *)(v37 + 12) = *(_OWORD *)((char *)&v57[1] + 4);
                    *(_QWORD *)&v92 = v92 + 28;
                  }
                  v36 = v63;
                }
                if ( v91 == (_QWORD)v92 )
                {
                  if ( v36 == nullptr )
                    goto LABEL_135;
                  if ( ((v65 - (_QWORD)v36) & 0xFFFFFFFFFFFFFFF0uLL) < 0x1000 )
                  {
                    sub_1409DB4C0(lpMem: v36);
                    goto LABEL_135;
                  }
                  v38 = *((void **)v36 - 1);
                  if ( (unsigned __int64)((_BYTE *)v36 - (_BYTE *)v38 - 8) <= 0x1F )
                  {
                    sub_1409DB4C0(lpMem: v38);
                    goto LABEL_135;
                  }
LABEL_120:
                  __fastfail(5u);
                }
              }
              if ( v36 != nullptr )
              {
                if ( ((v65 - (_QWORD)v36) & 0xFFFFFFFFFFFFFFF0uLL) < 0x1000 )
                {
                  v39 = v36;
                }
                else
                {
                  v39 = *((_BYTE **)v36 - 1);
                  if ( (unsigned __int64)((_BYTE *)v36 - v39 - 8) > 0x1F )
                    goto LABEL_120;
                }
                sub_1409DB4C0(lpMem: v39);
              }
            }
            ++v22;
          }
          while ( v22 <= (unsigned __int8)sub_14047D9E0(a1: v4) );
          v8 = v60;
        }
        if ( v70 != 0 )
        {
          v40 = 0;
          sub_14047D9E0(a1: v6);
          while ( 1 )
          {
            v57[0] = 0;
            LOBYTE(v57[1]) = 0;
            *(_QWORD *)((char *)&v57[1] + 4) = 0;
            *(_QWORD *)((char *)&v57[2] + 4) = 0;
            v41 = sub_14005D330();
            v42 = (__int64 (__fastcall **)(void **, __int64, __int64))*v8;
            v43 = sub_14047DA40(a1: v6, a2: &v80, a3: (unsigned __int8)v40);
            v44 = v42[44](a1: v8, a2: v43, a3: 0xFFFFFFFFLL);
            v45 = v44;
            if ( v44 != 0 )
            {
              v46 = 0;
              if ( (unsigned __int8)sub_140645790(a1: v44, a2: 1, a3: v41) != 0 )
                v46 = v45;
            }
            else
            {
              v46 = 0;
            }
            if ( si128.m128i_i64[0] > 0xFuLL )
            {
              v47 = (void *)v80;
              if ( (unsigned __int64)(si128.m128i_i64[0] + 1) >= 0x1000 )
              {
                if ( (unsigned __int64)(v80 - *(_QWORD *)(v80 - 8) - 8) > 0x1F )
                  goto LABEL_120;
                v47 = *(void **)(v80 - 8);
              }
              sub_1409DB4C0(lpMem: v47);
            }
            v80 = 19937;
            v82 = 0;
            si128.m128i_i64[0] = 31;
            if ( v46 != 0 )
            {
              if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v46 + 248LL))(a1: v46) != 0 )
              {
                v48 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v46 + 256LL))(a1: v46, a2: 0);
                if ( v48 == 0 )
                {
                  if ( (unsigned __int8)sub_140059D90(
                                          a1: off_140FA25B0,
                                          a2: "EquipmentManager::RequestEquipWardrobeSet: Could not get child from horse equipment folder") != 0 )
                    goto LABEL_130;
                  goto LABEL_135;
                }
                v49 = sub_14005D330();
                if ( (unsigned __int8)sub_140645790(a1: v48, a2: 101, a3: v49) == 0 )
                  goto LABEL_135;
                LODWORD(v57[0]) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v48 + 152LL))(a1: v48);
                if ( LODWORD(v57[0]) == 0 )
                {
                  if ( (unsigned __int8)sub_140059D90(
                                          a1: off_140FA25D8,
                                          a2: "EquipmentManager::RequestEquipWardrobeSet: could not horse item id") == 0 )
                    goto LABEL_135;
LABEL_130:
                  __debugbreak();
                }
              }
              v56[0] = v40;
              v50 = sub_140323F10(a1: v68, a2: v59, a3: v56);
              sub_140491340(a1: v67, a2: &v63, a3: *(unsigned int *)(*(_QWORD *)v50 + 20LL), a4: v58);
              v51 = v63;
              if ( v63 != v64 )
              {
                if ( (v64 - (_BYTE *)v63) >> 4 == 0 )
                  __fastfail(5u);
                if ( *(_QWORD *)v63 != 0 )
                {
                  HIDWORD(v57[0]) = *(_DWORD *)(*(_QWORD *)v63 + 16LL);
                  HIDWORD(v57[1]) = *((_DWORD *)v63 + 3);
                  LODWORD(v57[3]) = *((_DWORD *)v63 + 2);
                  LOBYTE(v57[1]) = 2;
                  v52 = v92;
                  if ( (_QWORD)v92 == *((_QWORD *)&v92 + 1) )
                  {
                    sub_140482140(a1: &v91, a2: v92, a3: v57);
                  }
                  else
                  {
                    *(_OWORD *)v92 = *(_OWORD *)v57;
                    *(_OWORD *)(v52 + 12) = *(_OWORD *)((char *)&v57[1] + 4);
                    *(_QWORD *)&v92 = v92 + 28;
                  }
                  v51 = v63;
                }
              }
              if ( v51 != nullptr )
              {
                if ( ((v65 - (_QWORD)v51) & 0xFFFFFFFFFFFFFFF0uLL) < 0x1000 )
                {
                  v53 = v51;
                }
                else
                {
                  v53 = *((_BYTE **)v51 - 1);
                  if ( (unsigned __int64)(v51 - v53 - 8) > 0x1F )
                    goto LABEL_120;
                }
                sub_1409DB4C0(lpMem: v53);
              }
            }
            if ( ++v40 > (unsigned int)(unsigned __int8)sub_14047D9E0(a1: v6) )
              break;
            v8 = v60;
          }
        }
        if ( v91 == (_QWORD)v92 )
        {
          if ( (unsigned __int8)sub_140059D90(
                                  a1: off_140FA2600,
                                  a2: "EquipmentManager::RequestEquipWardrobeSet: Could not get items from the equipment set") != 0 )
            goto LABEL_130;
        }
        else
        {
          v54 = qword_14138A6F0;
          if ( qword_14138A6F0 == 0 )
          {
            if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
              __debugbreak();
            sub_1409E29B8(a1: 999);
            __debugbreak();
          }
          v55 = sub_1405FD2E0(a1: qword_14138A6F0, a2: &v67, a3: "Network");
          if ( (unsigned __int8)sub_1406006A0(a1: v54, a2: v55, a3: 122) != 0 )
          {
            sub_1405F1D60(a1: &v60, a2: *(unsigned int *)(v55 + 12), a3: *(unsigned int *)(v55 + 8));
          }
          else
          {
            v61 = 0;
            v62 = 195948557;
          }
          v60 = &PXEngine::SafeActorPtrAs<CPXNetwork>::`vftable';
          if ( sub_1405F1EE0(a1: (__int64)&v60) == 0 )
          {
            if ( (unsigned __int8)sub_140059D90(
                                    a1: off_140FA2628,
                                    a2: "EquipmentManager::RequestEquipWardrobeSet: could not get network") == 0 )
              goto LABEL_135;
            goto LABEL_130;
          }
          memset(&v57[1], 0, 20);
          v57[0] = &PXEngine::ByteStreamWriter::`vftable';
          if ( (unsigned __int8)sub_140481B60(a1: v57, a2: &v87) != 0 )
          {
            LOWORD(v80) = word_141313DCC;
            sub_140A255B0(a1: &lpMem, a2: v57);
            LOWORD(v63) = v80;
            sub_140A255B0(a1: &v64, a2: &lpMem);
            v66 = 1;
            sub_140A25690(a1: &lpMem);
          }
          else
          {
            v66 = 0;
          }
          sub_140A25690(a1: v57);
          sub_1407EE6B0(a1: &v63);
        }
LABEL_135:
        v72 = 7;
        v73 = 8;
        sub_140017A10(a1: v71);
        sub_140082DD0(a1: v69);
        v78 = 7;
        v79 = 8;
        sub_140017A10(a1: v77);
        sub_140082DD0(a1: v75);
        sub_140483F00(a1: &v91);
        return sub_14001B5A0(a1: &v88);
    }
    sub_140483F90(a1: v21, a2: &v80);
    v85 = 7;
    v86 = 8;
    sub_140017A10(a1: &si128);
    sub_140082DD0(a1: &lpMem);
    goto LABEL_39;
  }
  result = sub_140059D90(
             a1: off_140FA2538,
             a2: "EquipmentManager::RequestEquipWardrobeSet: could not get inventory manager");
  if ( (_BYTE)result != 0 )
    goto LABEL_15;
  return result;
}