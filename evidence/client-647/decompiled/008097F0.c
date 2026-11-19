__int64 __fastcall sub_1408097F0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // r13
  __int64 v6; // r12
  unsigned int v7; // r14d
  unsigned int v8; // ecx
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 i; // rdi
  unsigned __int64 v14; // rdx
  __int64 v15; // r8
  __int64 *v16; // rbx
  __int64 v17; // r9
  char v18; // cl
  __int64 v19; // rdi
  void *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdi
  void *v23; // rcx
  int v24; // eax
  unsigned int v25; // r12d
  unsigned __int16 v26; // r15
  __int64 v27; // r8
  __int64 v28; // rdi
  unsigned __int64 v29; // rdx
  __int64 v30; // r14
  __int64 v31; // rax
  char *v32; // r13
  char *v33; // r12
  unsigned __int16 v34; // r15
  __int64 v35; // r14
  __int64 v36; // rdi
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 v39; // r15
  __int64 v40; // r14
  __int64 j; // rdi
  void *v42; // rcx
  void *v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // r14
  void *v46; // rcx
  __int64 v47; // rdi
  void *v48; // rcx
  void *v49; // rcx
  __int64 v50; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v51; // [rsp+28h] [rbp-D8h]
  unsigned int v53; // [rsp+38h] [rbp-C8h]
  int v54; // [rsp+3Ch] [rbp-C4h]
  LPVOID v55; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v56; // [rsp+48h] [rbp-B8h]
  LPVOID *v57; // [rsp+50h] [rbp-B0h]
  __int64 v58; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v59; // [rsp+60h] [rbp-A0h]
  __int128 v60; // [rsp+70h] [rbp-90h]
  __int128 v61; // [rsp+80h] [rbp-80h]
  __int128 v62; // [rsp+90h] [rbp-70h]
  __int128 v63; // [rsp+A0h] [rbp-60h]
  LPVOID lpMem; // [rsp+B0h] [rbp-50h]
  unsigned int v65; // [rsp+B8h] [rbp-48h]
  __int64 *v66; // [rsp+C0h] [rbp-40h]
  _BYTE v67[88]; // [rsp+C8h] [rbp-38h] BYREF
  LPVOID v68; // [rsp+120h] [rbp+20h]
  __int64 v69; // [rsp+130h] [rbp+30h]
  int v70; // [rsp+1B0h] [rbp+B0h] BYREF

  v70 = a3;
  v4 = a4;
  v6 = a1;
  v56 = a1;
  v69 = a4;
  v54 = 0;
  if ( (*(_BYTE *)(a4 + 40) & 1) == 0 && (unsigned __int8)sub_140059CA0(a1: off_14101B320) != 0 )
    __debugbreak();
  v7 = *(_DWORD *)(v4 + 80);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 160) + 8LL))(a1: *(_QWORD *)(v6 + 160));
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v6 + 40LL))(a1: v6, a2, a3: v4);
  v8 = *(_DWORD *)(a2 + 64);
  if ( v7 < v8 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 176) + 8LL))(a1: *(_QWORD *)(v6 + 176));
    goto LABEL_82;
  }
  if ( v7 == v8 && (*(_BYTE *)(v4 + 40) & 3) != 3 && *(_QWORD *)(a2 + 72) == *(_QWORD *)(a2 + 80) )
  {
    *(_DWORD *)(a2 + 64) = v8 + 1;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 192) + 8LL))(a1: *(_QWORD *)(v6 + 192));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 144) + 8LL))(a1: *(_QWORD *)(v6 + 144));
    v10 = sub_140736840(a1: v67, a2: v4);
    v11 = sub_1407F11B0(a1: &v58, a2: v10);
    result = sub_1407369E0(a1: v6 + 72, a2, a3: v11);
    goto LABEL_82;
  }
  v12 = *(_QWORD *)(a2 + 80);
  for ( i = *(_QWORD *)(a2 + 72); i != v12; i += 112 )
  {
    if ( (*(_BYTE *)(i + 40) & 1) == 0 && (unsigned __int8)sub_140059CA0(a1: off_14101B320) != 0 )
      __debugbreak();
    if ( *(_DWORD *)(i + 80) == v7 )
      break;
  }
  if ( i != *(_QWORD *)(a2 + 80) )
  {
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 208) + 8LL))(a1: *(_QWORD *)(v6 + 208));
    goto LABEL_82;
  }
  sub_140807250(a1: a2 + 72, a2: v4, a3: &v70);
  result = sub_140806F20(
             a1: *(_QWORD *)(a2 + 72),
             a2: *(_QWORD *)(a2 + 80),
             a3: (*(_QWORD *)(a2 + 80) - *(_QWORD *)(a2 + 72)) / 112LL,
             a4: v51);
  v16 = *(__int64 **)(a2 + 72);
  if ( v16 != *(__int64 **)(a2 + 80) )
  {
    while ( 1 )
    {
      v17 = a2 + 96;
      if ( (v16[5] & 1) == 0 )
      {
        if ( (unsigned __int8)sub_140059CA0(a1: off_14101B320) != 0 )
          __debugbreak();
        v17 = a2 + 96;
      }
      result = *(unsigned int *)(a2 + 64);
      if ( *((_DWORD *)v16 + 20) != (_DWORD)result )
      {
LABEL_81:
        v4 = a4;
        break;
      }
      v18 = *((_BYTE *)v16 + 40);
      if ( (v18 & 3) == 3 )
      {
        v24 = *((unsigned __int16 *)v16 + 42);
        if ( (_WORD)v24 == 0 )
          goto LABEL_88;
        v15 = *((unsigned __int16 *)v16 + 42);
        if ( *((unsigned __int16 *)v16 + 43) + 1 == v24 )
        {
          v14 = (*(_QWORD *)(a2 + 104) - *(_QWORD *)(a2 + 96)) / 112LL;
          if ( v14 < (unsigned int)(v15 - 1) )
          {
LABEL_88:
            result = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64, __int64))(**(_QWORD **)(v6 + 256)
                                                                                           + 8LL))(
                       a1: *(_QWORD *)(v6 + 256),
                       a2: v14,
                       a3: v15,
                       a4: v17);
            v4 = a4;
            break;
          }
          v25 = *((_DWORD *)v16 + 24);
          v53 = v25;
          v26 = 0;
          if ( (int)v15 - 1 > 0 )
          {
            while ( 1 )
            {
              v27 = v26;
              v28 = *(_QWORD *)(a2 + 96);
              v29 = (*(_QWORD *)(a2 + 104) - v28) / 112;
              if ( v26 >= v29 )
                __fastfail(5u);
              v30 = 112LL * v26;
              if ( (*(_BYTE *)(v28 + v30 + 40) & 3) != 3 && (unsigned __int8)sub_140059CA0(a1: off_14101B390) != 0 )
                __debugbreak();
              if ( *(_WORD *)(v28 + v30 + 84) != *((_WORD *)v16 + 42) )
                break;
              if ( (*(_BYTE *)(v28 + v30 + 40) & 3) != 3 && (unsigned __int8)sub_140059CA0(a1: off_14101B390) != 0 )
                __debugbreak();
              if ( *(_WORD *)(v28 + v30 + 86) != v26 )
                break;
              v25 += *(_DWORD *)(v28 + v30 + 96);
              v53 = v25;
              if ( ++v26 >= *((unsigned __int16 *)v16 + 42) - 1 )
                goto LABEL_50;
            }
            result = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64, __int64))(**(_QWORD **)(v56 + 256)
                                                                                           + 8LL))(
                       a1: *(_QWORD *)(v56 + 256),
                       a2: v29,
                       a3: v27,
                       a4: v17);
            v4 = a4;
            break;
          }
LABEL_50:
          v31 = sub_1409DBF00(a1: v25);
          v32 = (char *)v31;
          if ( v31 != 0 )
            sub_140E827B0(a1: v31, a2: 0, a3: v25);
          else
            v32 = nullptr;
          v33 = v32;
          v34 = 0;
          if ( *((unsigned __int16 *)v16 + 42) > 1u )
          {
            do
            {
              v35 = *(_QWORD *)(a2 + 96);
              if ( v34 >= (unsigned __int64)((*(_QWORD *)(a2 + 104) - v35) / 112) )
                __fastfail(5u);
              v36 = 112LL * v34;
              sub_140083990(a1: v33, a2: *(_QWORD *)(v35 + v36 + 88), a3: *(unsigned int *)(v35 + v36 + 96));
              v33 += *(unsigned int *)(v35 + v36 + 96);
              ++v34;
            }
            while ( v34 < *((unsigned __int16 *)v16 + 42) - 1 );
          }
          sub_140083990(a1: v33, a2: v16[11], a3: *((unsigned int *)v16 + 24));
          v37 = *(_QWORD *)(a2 + 96);
          v38 = v37 + 112LL * *((unsigned __int16 *)v16 + 42) - 112;
          if ( v37 != v38 )
          {
            v39 = sub_140806530(a1: v38, a2: *(_QWORD *)(a2 + 104), a3: v37);
            v40 = *(_QWORD *)(a2 + 104);
            for ( j = v39; j != v40; j += 112 )
            {
              v42 = *(void **)(j + 88);
              if ( v42 != nullptr )
                sub_1409DB4C0(lpMem: v42);
              *(_QWORD *)(j + 88) = 19937;
            }
            *(_QWORD *)(a2 + 104) = v39;
          }
          ++*(_DWORD *)(a2 + 64);
          v6 = v56;
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v56 + 240) + 8LL))(a1: *(_QWORD *)(v56 + 240));
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 144) + 8LL))(a1: *(_QWORD *)(v6 + 144));
          v66 = &v58;
          v57 = &v55;
          v58 = *v16;
          v59 = *(_OWORD *)(v16 + 1);
          v60 = *(_OWORD *)(v16 + 3);
          v61 = *(_OWORD *)(v16 + 5);
          v62 = *(_OWORD *)(v16 + 7);
          v63 = *(_OWORD *)(v16 + 9);
          v43 = nullptr;
          v55 = nullptr;
          lpMem = v32;
          v65 = v53;
          if ( v53 != 0 && v32 == nullptr )
          {
            if ( (unsigned __int8)sub_140059CA0(a1: off_141018FF8) != 0 )
              __debugbreak();
            v43 = v55;
          }
          if ( v43 != nullptr )
            sub_1409DB4C0(lpMem: v43);
          v55 = (LPVOID)19937;
          sub_140736840(a1: v67, a2: &v58);
          if ( lpMem != nullptr )
            sub_1409DB4C0(lpMem);
          lpMem = (LPVOID)19937;
          v57 = (LPVOID *)v67;
          v44 = *(_QWORD *)(v6 + 128);
          if ( v44 == 0 )
          {
            sub_1409D2AC0(a1: 0);
LABEL_90:
            sub_1409D2AC0(a1: v21);
            JUMPOUT(0x140809F42LL);
          }
          v54 |= 1u;
          (*(void (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v44 + 16LL))(a1: v44, a2, a3: v67);
          if ( v68 != nullptr )
            sub_1409DB4C0(lpMem: v68);
          v68 = (LPVOID)19937;
          sub_140806530(a1: v16 + 14, a2: *(_QWORD *)(a2 + 80), a3: v16);
          v45 = *(_QWORD *)(a2 + 80);
          v46 = *(void **)(v45 - 24);
          if ( v46 != nullptr )
            sub_1409DB4C0(lpMem: v46);
          *(_QWORD *)(v45 - 24) = 19937;
          *(_QWORD *)(a2 + 80) -= 112LL;
          v50 = 19937;
        }
        else
        {
          ++*(_DWORD *)(a2 + 64);
          sub_140807250(a1: v17, a2: v16, a3: &v70);
          sub_140806530(a1: v16 + 14, a2: *(_QWORD *)(a2 + 80), a3: v16);
          v47 = *(_QWORD *)(a2 + 80);
          v48 = *(void **)(v47 - 24);
          if ( v48 != nullptr )
            sub_1409DB4C0(lpMem: v48);
          *(_QWORD *)(v47 - 24) = 19937;
          *(_QWORD *)(a2 + 80) -= 112LL;
        }
      }
      else
      {
        if ( (v18 & 1) == 0 && (unsigned __int8)sub_140059CA0(a1: off_14101B320) != 0 )
          __debugbreak();
        ++*(_DWORD *)(a2 + 64);
        (*(void (__fastcall **)(_QWORD, unsigned __int64, __int64, __int64, __int64))(**(_QWORD **)(v6 + 224) + 8LL))(
          a1: *(_QWORD *)(v6 + 224),
          a2: v14,
          a3: v15,
          a4: v17,
          a5: v50);
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 144) + 8LL))(a1: *(_QWORD *)(v6 + 144));
        v19 = sub_140736840(a1: v67, a2: v16);
        sub_140736840(a1: &v58, a2: v19);
        v20 = *(void **)(v19 + 88);
        if ( v20 != nullptr )
          sub_1409DB4C0(lpMem: v20);
        *(_QWORD *)(v19 + 88) = 19937;
        v50 = (__int64)&v58;
        v21 = *(_QWORD *)(v6 + 128);
        if ( v21 == 0 )
          goto LABEL_90;
        (*(void (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v21 + 16LL))(a1: v21, a2, a3: &v58);
        if ( lpMem != nullptr )
          sub_1409DB4C0(lpMem);
        lpMem = (LPVOID)19937;
        sub_140806530(a1: v16 + 14, a2: *(_QWORD *)(a2 + 80), a3: v16);
        v22 = *(_QWORD *)(a2 + 80);
        v23 = *(void **)(v22 - 24);
        if ( v23 != nullptr )
          sub_1409DB4C0(lpMem: v23);
        *(_QWORD *)(v22 - 24) = 19937;
        *(_QWORD *)(a2 + 80) -= 112LL;
      }
      result = *(_QWORD *)(a2 + 80);
      if ( v16 == (__int64 *)result )
        goto LABEL_81;
    }
  }
LABEL_82:
  v49 = *(void **)(v4 + 88);
  if ( v49 != nullptr )
    result = sub_1409DB4C0(lpMem: v49);
  *(_QWORD *)(v4 + 88) = 19937;
  return result;
}