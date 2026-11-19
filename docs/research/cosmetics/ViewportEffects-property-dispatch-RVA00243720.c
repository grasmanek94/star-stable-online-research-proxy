// Hex-Rays export, baseline 645.348067; descriptive analysis label.
__int64 __fastcall sub_140243720(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, void ***a5)
{
  unsigned int v6; // r12d
  __int64 v8; // r13
  _QWORD *v9; // r8
  _QWORD *v10; // r8
  _QWORD *v11; // r8
  _QWORD *v12; // r8
  __int64 v13; // rcx
  _QWORD *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v19; // r9
  unsigned __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 i; // rcx
  unsigned int v24; // r13d
  __int64 v25; // rcx
  __int64 v26; // rdx
  _QWORD *v27; // rsi
  __int64 v28; // rax
  unsigned int v29; // r13d
  unsigned __int64 v30; // r15
  unsigned __int64 v31; // r15
  unsigned __int64 v32; // rsi
  unsigned __int64 v33; // rcx
  __int64 v34; // rax
  char *v35; // r15
  char *v36; // r12
  __int64 v37; // rsi
  __int64 j; // r15
  __int64 v39; // rax
  void *v40; // rcx
  char **v41; // rsi
  char *v42; // rcx
  char *v43; // rax
  _QWORD *v44; // rsi
  _QWORD *v45; // r14
  __int64 v46; // rcx
  unsigned __int64 v47; // r8
  __int128 v48; // xmm6
  __int64 v49; // rcx
  unsigned __int64 v50; // r8
  __int64 v51; // rcx
  unsigned __int64 v52; // r8
  int v53; // xmm6_4
  __int64 v54; // rcx
  unsigned __int64 v55; // r8
  __int64 v56; // rcx
  unsigned __int64 v57; // r8
  int v58; // xmm6_4
  __int64 v59; // rcx
  unsigned __int64 v60; // r9
  __int128 *v61; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v62; // [rsp+38h] [rbp-C8h]
  void ***v63; // [rsp+40h] [rbp-C0h]
  unsigned int v64; // [rsp+48h] [rbp-B8h]
  LPVOID lpMem[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE *v66; // [rsp+60h] [rbp-A0h]
  __int128 v67; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v68; // [rsp+78h] [rbp-88h]
  __int128 v69; // [rsp+80h] [rbp-80h] BYREF
  __int64 v70; // [rsp+90h] [rbp-70h]
  __m128i v71; // [rsp+98h] [rbp-68h] BYREF
  __int64 v72; // [rsp+A8h] [rbp-58h]
  __int64 v73; // [rsp+B0h] [rbp-50h]
  __int128 *v74; // [rsp+B8h] [rbp-48h]
  void **v75; // [rsp+C0h] [rbp-40h] BYREF
  __m128i si128; // [rsp+C8h] [rbp-38h]
  __m128i v77; // [rsp+D8h] [rbp-28h]
  __int64 v78; // [rsp+E8h] [rbp-18h]

  v6 = a3;
  v64 = a3;
  v73 = a2;
  v8 = (__int64)a5;
  v63 = a5;
  if ( (unsigned int)a3 > 0x153D8 )
  {
    switch ( (int)a3 )
    {
      case 87001:
        *(_DWORD *)a4 = *(unsigned __int8 *)(a1 + 522);
        return sub_1400B8460((_DWORD *)a1, a2: v73, a3: v6, a4, a5: v8);
      case 87002:
        v13 = a1 + 192;
        if ( (__int64 *)(a1 + 192) == a4 )
          return sub_1400B8460((_DWORD *)a1, a2: v73, a3: v6, a4, a5: v8);
        if ( (unsigned __int64)a4[3] <= 0xF )
          goto LABEL_18;
        goto LABEL_33;
      case 87003:
        sub_1400184F0(a1: a4, a2: a1 + 192);
        return sub_1400B8460((_DWORD *)a1, a2: v73, a3: v6, a4, a5: v8);
      case 87004:
        v13 = a1 + 272;
        if ( (__int64 *)(a1 + 272) == a4 )
          return sub_1400B8460((_DWORD *)a1, a2: v73, a3: v6, a4, a5: v8);
        if ( (unsigned __int64)a4[3] > 0xF )
          goto LABEL_33;
        goto LABEL_18;
      case 87005:
        sub_1400184F0(a1: a4, a2: a1 + 272);
        return sub_1400B8460((_DWORD *)a1, a2: v73, a3: v6, a4, a5: v8);
      case 87006:
        *(_BYTE *)(a1 + 524) = *(_DWORD *)a4 != 0;
        return sub_1400B8460((_DWORD *)a1, a2: v73, a3: v6, a4, a5: v8);
      case 87007:
        *(_DWORD *)a4 = *(unsigned __int8 *)(a1 + 524);
        return sub_1400B8460((_DWORD *)a1, a2: v73, a3: v6, a4, a5: v8);
      case 87008:
        sub_140244990(a1);
        return sub_1400B8460((_DWORD *)a1, a2: v73, a3: v6, a4, a5: v8);
      case 87009:
        *(_DWORD *)(a1 + 248) = *(_DWORD *)a4;
        return sub_1400B8460((_DWORD *)a1, a2: v73, a3: v6, a4, a5: v8);
      case 87010:
        *(_DWORD *)a4 = *(_DWORD *)(a1 + 248);
        return sub_1400B8460((_DWORD *)a1, a2: v73, a3: v6, a4, a5: v8);
      case 87011:
        *(_BYTE *)(a1 + 523) = *(_DWORD *)a4 != 0;
        sub_140241260(a1);
        return sub_1400B8460((_DWORD *)a1, a2: v73, a3: v6, a4, a5: v8);
      case 87012:
        *(_DWORD *)a4 = *(unsigned __int8 *)(a1 + 523);
        return sub_1400B8460((_DWORD *)a1, a2: v73, a3: v6, a4, a5: v8);
      case 87013:
        v13 = a1 + 336;
        if ( (__int64 *)(a1 + 336) == a4 )
          return sub_1400B8460((_DWORD *)a1, a2: v73, a3: v6, a4, a5: v8);
        if ( (unsigned __int64)a4[3] <= 0xF )
LABEL_18:
          sub_14000D6E0(a1: v13, a2: a4, a3: a4[2]);
        else
LABEL_33:
          sub_14000D6E0(a1: v13, a2: *a4, a3: a4[2]);
        return sub_1400B8460((_DWORD *)a1, a2: v73, a3: v6, a4, a5: v8);
      case 87014:
        sub_1400184F0(a1: a4, a2: a1 + 336);
        return sub_1400B8460((_DWORD *)a1, a2: v73, a3: v6, a4, a5: v8);
      case 87015:
        *(_DWORD *)(a1 + 392) = *(_DWORD *)a4;
        return sub_1400B8460((_DWORD *)a1, a2: v73, a3: v6, a4, a5: v8);
      case 87016:
        *(_DWORD *)a4 = *(_DWORD *)(a1 + 392);
        return sub_1400B8460((_DWORD *)a1, a2: v73, a3: v6, a4, a5: v8);
      case 87017:
        *(_DWORD *)(a1 + 396) = *(_DWORD *)a4;
        return sub_1400B8460((_DWORD *)a1, a2: v73, a3: v6, a4, a5: v8);
      case 87018:
        *(_DWORD *)a4 = *(_DWORD *)(a1 + 396);
        return sub_1400B8460((_DWORD *)a1, a2: v73, a3: v6, a4, a5: v8);
      case 87019:
        *(_DWORD *)(a1 + 400) = *(_DWORD *)a4;
        return sub_1400B8460((_DWORD *)a1, a2: v73, a3: v6, a4, a5: v8);
      case 87020:
        *(_DWORD *)a4 = *(_DWORD *)(a1 + 400);
        return sub_1400B8460((_DWORD *)a1, a2: v73, a3: v6, a4, a5: v8);
      case 87021:
        *(_DWORD *)(a1 + 404) = *(_DWORD *)a4;
        return sub_1400B8460((_DWORD *)a1, a2: v73, a3: v6, a4, a5: v8);
      case 87022:
        *(_DWORD *)a4 = *(_DWORD *)(a1 + 404);
        return sub_1400B8460((_DWORD *)a1, a2: v73, a3: v6, a4, a5: v8);
      case 87023:
        *(_BYTE *)(a1 + 521) = *(_DWORD *)a4 != 0;
        return sub_1400B8460((_DWORD *)a1, a2: v73, a3: v6, a4, a5: v8);
      case 87024:
        *(_DWORD *)a4 = *(unsigned __int8 *)(a1 + 521);
        return sub_1400B8460((_DWORD *)a1, a2: v73, a3: v6, a4, a5: v8);
      case 87025:
        *(_DWORD *)(a1 + 440) = *(_DWORD *)a4;
        return sub_1400B8460((_DWORD *)a1, a2: v73, a3: v6, a4, a5: v8);
      case 87026:
        *(_DWORD *)a4 = *(_DWORD *)(a1 + 440);
        return sub_1400B8460((_DWORD *)a1, a2: v73, a3: v6, a4, a5: v8);
      case 87027:
        v14 = (_QWORD *)(a1 + 480);
        if ( (__int64 *)(a1 + 480) != a4 )
        {
          if ( (unsigned __int64)a4[3] <= 0xF )
            v15 = (__int64)a4;
          else
            v15 = *a4;
          sub_14000D6E0(a1: a1 + 480, a2: v15, a3: a4[2]);
        }
        sub_14064F3F0(a1: *(_QWORD *)(a1 + 472));
        *(_QWORD *)(a1 + 464) = 0;
        *(_QWORD *)(a1 + 472) = 0;
        if ( *(_QWORD *)(a1 + 496) != 0 )
        {
          if ( *(_QWORD *)(a1 + 504) > 0xFu )
            v14 = (_QWORD *)*v14;
          v16 = sub_1400B60F0(a1, a2: &v61, a3: v14, a4: 2);
          sub_1400B1720(a1: a1 + 464, a2: v16);
          sub_14064F3F0(a1: v62);
        }
        return sub_1400B8460((_DWORD *)a1, a2: v73, a3: v6, a4, a5: v8);
      case 87028:
        sub_1400184F0(a1: a4, a2: a1 + 480);
        return sub_1400B8460((_DWORD *)a1, a2: v73, a3: v6, a4, a5: v8);
      case 87029:
        v75 = &CPXDetailGrassInfo::`vftable';
        si128 = _mm_load_si128((const __m128i *)&xmmword_140EF5A80);
        v77 = _mm_load_si128((const __m128i *)&xmmword_140F1AF20);
        v17 = *(_QWORD *)(a1 + 416);
        if ( v17 == *(_QWORD *)(a1 + 424) )
        {
          sub_1402401C0(a1: a1 + 408, a2: v17, a3: &v75);
        }
        else
        {
          *(_QWORD *)v17 = &CPXDetailGrassInfo::`vftable';
          *(_DWORD *)(v17 + 8) = 1065353216;
          *(_DWORD *)(v17 + 12) = 1065353216;
          *(_DWORD *)(v17 + 16) = 1065353216;
          *(_DWORD *)(v17 + 20) = 1065353216;
          *(_DWORD *)(v17 + 24) = 1065353216;
          *(_QWORD *)(v17 + 28) = 1065353216;
          *(_DWORD *)(v17 + 36) = 0;
          *(_QWORD *)(a1 + 416) += 40LL;
        }
        return 200;
      case 87030:
        v19 = *(_QWORD *)(a1 + 408);
        v20 = *(unsigned int *)(a1 + 432);
        if ( v20 < (*(_QWORD *)(a1 + 416) - v19) / 40 )
        {
          v21 = v19 + 40 * v20;
          v22 = *(_QWORD *)(a1 + 416);
          for ( i = v21 + 40; i != v22; i += 40 )
          {
            *(_OWORD *)(v21 + 8) = *(_OWORD *)(i + 8);
            *(_DWORD *)(v21 + 24) = *(_DWORD *)(i + 24);
            *(_DWORD *)(v21 + 28) = *(_DWORD *)(i + 28);
            *(_DWORD *)(v21 + 32) = *(_DWORD *)(i + 32);
            *(_DWORD *)(v21 + 36) = *(_DWORD *)(i + 36);
            v21 += 40;
          }
          (**(void (__fastcall ***)(__int64, _QWORD))(*(_QWORD *)(a1 + 416) - 40LL))(
            a1: *(_QWORD *)(a1 + 416) - 40LL,
            a2: 0);
          *(_QWORD *)(a1 + 416) -= 40LL;
        }
        *(_DWORD *)(a1 + 432) = -1;
        if ( *(_QWORD *)(a1 + 408) != *(_QWORD *)(a1 + 416) )
          *(_DWORD *)(a1 + 432) = 0;
        return 200;
      case 87031:
        *(_DWORD *)(a1 + 432) = *(_DWORD *)a4;
        return 200;
      case 87032:
        *(_OWORD *)lpMem = 0;
        v66 = nullptr;
        v24 = 0;
        v25 = *(_QWORD *)(a1 + 416) - *(_QWORD *)(a1 + 408);
        v26 = v25 / 40;
        if ( v25 / 40 != 0 )
        {
          do
          {
            sub_140068F00(a1: &v75, a2: 64, a3: "Grass: %u", ++v24);
            v27 = lpMem[1];
            if ( lpMem[1] == v66 )
            {
              sub_14023FF80(a1: lpMem, a2: lpMem[1], a3: &v75);
            }
            else
            {
              v74 = (__int128 *)lpMem[1];
              *(_OWORD *)lpMem[1] = 0;
              v27[2] = 0;
              v27[3] = 0;
              v28 = sub_140E79C30(a1: &v75);
              sub_14000D850(a1: v27, a2: &v75, a3: v28);
              lpMem[1] = (char *)lpMem[1] + 32;
            }
            v25 = *(_QWORD *)(a1 + 416) - *(_QWORD *)(a1 + 408);
            v26 = v25 / 40;
          }
          while ( v24 < (unsigned __int64)(v25 / 40) );
        }
        v29 = *(_DWORD *)(a1 + 432);
        v74 = &v67;
        v67 = 0;
        v68 = 0;
        if ( (LPVOID)((char *)lpMem[1] - (char *)lpMem[0]) < (LPVOID)0x20 )
          goto LABEL_87;
        v30 = ((char *)lpMem[1] - (char *)lpMem[0]) >> 5;
        if ( v30 > 0x7FFFFFFFFFFFFFFLL )
          goto LABEL_130;
        v31 = 32 * v30;
        if ( v31 != 0 )
        {
          if ( v31 < 0x1000 )
          {
            v32 = sub_1409E0850(a1: v31);
          }
          else
          {
            v33 = v31 + 39;
            if ( v31 + 39 < v31 )
            {
              sub_14001A900(a1: v33, a2: v26);
LABEL_130:
              sub_14001ADC0(a1: v25, a2: v26, a3, a4);
            }
            v34 = sub_1409E0850(a1: v33);
            if ( v34 == 0 )
              __fastfail(5u);
            v32 = (v34 + 39) & 0xFFFFFFFFFFFFFFE0uLL;
            *(_QWORD *)(v32 - 8) = v34;
          }
        }
        else
        {
          v32 = 0;
        }
        *(_QWORD *)&v67 = v32;
        *((_QWORD *)&v67 + 1) = v32;
        v68 = v31 + v32;
        v61 = &v67;
        v35 = (char *)lpMem[0];
        v36 = (char *)lpMem[1];
        v75 = (void **)v32;
        si128.m128i_i64[0] = v32;
        for ( si128.m128i_i64[1] = (__int64)&v67; v35 != v36; v35 += 32 )
        {
          sub_140016F60(a1: v32, a2: v35);
          v32 += 32LL;
          si128.m128i_i64[0] = v32;
        }
        *((_QWORD *)&v67 + 1) = v32;
        v6 = v64;
LABEL_87:
        sub_1405C7800(a1: &v69, a2: &v67, a3: v29);
        if ( a4 == (__int64 *)&v69 )
          goto LABEL_97;
        v37 = *a4;
        if ( *a4 != 0 )
        {
          for ( j = a4[1]; v37 != j; v37 += 32 )
            sub_1400178D0(a1: v37);
          v39 = *a4;
          if ( ((a4[2] - *a4) & 0xFFFFFFFFFFFFFFE0uLL) < 0x1000 )
          {
            v40 = (void *)*a4;
          }
          else
          {
            v40 = *(void **)(v39 - 8);
            if ( (unsigned __int64)(v39 - (_QWORD)v40 - 8) > 0x1F )
              goto LABEL_101;
          }
          sub_1409E08A0(lpMem: v40);
        }
        *(_OWORD *)a4 = v69;
        a4[2] = v70;
        v69 = 0;
        v70 = 0;
LABEL_97:
        v41 = (char **)(a4 + 3);
        if ( a4 + 3 != (__int64 *)&v71 )
        {
          v42 = *v41;
          if ( *v41 != nullptr )
          {
            if ( (unsigned __int64)(4 * ((a4[5] - (__int64)v42) >> 2)) < 0x1000 )
            {
              v43 = *v41;
            }
            else
            {
              v43 = *((char **)v42 - 1);
              if ( (unsigned __int64)(v42 - v43 - 8) > 0x1F )
LABEL_101:
                __fastfail(5u);
            }
            sub_1409E08A0(lpMem: v43);
          }
          *v41 = (char *)v71.m128i_i64[0];
          a4[4] = v71.m128i_i64[1];
          a4[5] = v72;
          v71 = 0;
          v72 = 0;
        }
        sub_14001AA20(a1: &v71);
        v71 = _mm_load_si128((const __m128i *)&xmmword_140EE4280);
        v72 = 19937;
        sub_14001AB70(a1: &v69);
        v44 = lpMem[0];
        if ( lpMem[0] != nullptr )
        {
          v45 = lpMem[1];
          if ( lpMem[0] != lpMem[1] )
          {
            do
            {
              sub_1400178D0(a1: v44);
              v44 += 4;
            }
            while ( v44 != v45 );
            v44 = lpMem[0];
          }
          if ( ((v66 - (_BYTE *)v44) & 0xFFFFFFFFFFFFFFE0uLL) >= 0x1000 )
          {
            if ( (unsigned __int64)v44 - *(v44 - 1) - 8 > 0x1F )
              __fastfail(5u);
            v44 = (_QWORD *)*(v44 - 1);
          }
          sub_1409E08A0(lpMem: v44);
        }
        v8 = (__int64)v63;
        return sub_1400B8460((_DWORD *)a1, a2: v73, a3: v6, a4, a5: v8);
      case 87033:
        v46 = a1 + 408;
        v47 = *(unsigned int *)(a1 + 432);
        if ( v47 < (*(_QWORD *)(a1 + 416) - *(_QWORD *)(a1 + 408)) / 40LL )
        {
          v48 = *(_OWORD *)a4;
          *(_OWORD *)(sub_140240B70(a1: v46, a2: (unsigned int)v47) + 8) = v48;
        }
        return sub_1400B8460((_DWORD *)a1, a2: v73, a3: v6, a4, a5: v8);
      case 87034:
        v49 = a1 + 408;
        v50 = *(unsigned int *)(a1 + 432);
        if ( v50 < (*(_QWORD *)(a1 + 416) - *(_QWORD *)(a1 + 408)) / 40LL )
          *(_OWORD *)a4 = *(_OWORD *)(sub_140240B70(a1: v49, a2: (unsigned int)v50) + 8);
        return sub_1400B8460((_DWORD *)a1, a2: v73, a3: v6, a4, a5: v8);
      case 87035:
        v51 = a1 + 408;
        v52 = *(unsigned int *)(a1 + 432);
        if ( v52 < (*(_QWORD *)(a1 + 416) - *(_QWORD *)(a1 + 408)) / 40LL )
        {
          v53 = *(_DWORD *)a4;
          *(_DWORD *)(sub_140240B70(a1: v51, a2: (unsigned int)v52) + 24) = v53;
        }
        return sub_1400B8460((_DWORD *)a1, a2: v73, a3: v6, a4, a5: v8);
      case 87036:
        v54 = a1 + 408;
        v55 = *(unsigned int *)(a1 + 432);
        if ( v55 < (*(_QWORD *)(a1 + 416) - *(_QWORD *)(a1 + 408)) / 40LL )
          *(_DWORD *)a4 = *(_DWORD *)(sub_140240B70(a1: v54, a2: (unsigned int)v55) + 24);
        return sub_1400B8460((_DWORD *)a1, a2: v73, a3: v6, a4, a5: v8);
      case 87037:
        v56 = a1 + 408;
        v57 = *(unsigned int *)(a1 + 432);
        if ( v57 < (*(_QWORD *)(a1 + 416) - *(_QWORD *)(a1 + 408)) / 40LL )
        {
          v58 = *(_DWORD *)a4;
          *(_DWORD *)(sub_140240B70(a1: v56, a2: (unsigned int)v57) + 28) = v58;
        }
        return sub_1400B8460((_DWORD *)a1, a2: v73, a3: v6, a4, a5: v8);
      case 87038:
        v59 = a1 + 408;
        v60 = *(unsigned int *)(a1 + 432);
        if ( v60 < (*(_QWORD *)(a1 + 416) - *(_QWORD *)(a1 + 408)) / 40LL )
          *(_DWORD *)a4 = *(_DWORD *)(sub_140240B70(a1: v59, a2: (unsigned int)v60) + 28);
        return sub_1400B8460((_DWORD *)a1, a2: v73, a3: v6, a4, a5: v8);
      default:
        return sub_1400B8460((_DWORD *)a1, a2: v73, a3: v6, a4, a5: v8);
    }
  }
  if ( (_DWORD)a3 == 87000 )
  {
    *(_BYTE *)(a1 + 522) = *(_DWORD *)a4 != 0;
    sub_1402410F0();
  }
  else if ( (_DWORD)a3 == 3 )
  {
    v63 = &v75;
    v78 = 0;
    v75 = &PXEngine::VersionDependency::`vftable';
    si128 = 0;
    v77.m128i_i64[0] = 0;
    v77.m128i_i64[1] = 15;
    si128.m128i_i8[0] = 0;
    v61 = *(__int128 **)(a1 + 176);
    v62 = *(_QWORD *)(a1 + 184);
    sub_14064F610(a1: v62);
    v9 = (_QWORD *)(a1 + 192);
    if ( *(_QWORD *)(a1 + 216) > 0xFu )
      v9 = (_QWORD *)*v9;
    sub_14068C430(a1: (_DWORD)a4, a2: a1, a3: (_DWORD)v9, a4: (unsigned int)&v61, a5: (__int64)&v75);
    v63 = &v75;
    v78 = 0;
    v75 = &PXEngine::VersionDependency::`vftable';
    si128 = 0;
    v77.m128i_i64[0] = 0;
    v77.m128i_i64[1] = 15;
    si128.m128i_i8[0] = 0;
    v61 = *(__int128 **)(a1 + 256);
    v62 = *(_QWORD *)(a1 + 264);
    sub_14064F610(a1: v62);
    v10 = (_QWORD *)(a1 + 272);
    if ( *(_QWORD *)(a1 + 296) > 0xFu )
      v10 = (_QWORD *)*v10;
    sub_14068C430(a1: (_DWORD)a4, a2: a1, a3: (_DWORD)v10, a4: (unsigned int)&v61, a5: (__int64)&v75);
    v63 = &v75;
    v78 = 0;
    v75 = &PXEngine::VersionDependency::`vftable';
    si128 = 0;
    v77.m128i_i64[0] = 0;
    v77.m128i_i64[1] = 15;
    si128.m128i_i8[0] = 0;
    v61 = *(__int128 **)(a1 + 320);
    v62 = *(_QWORD *)(a1 + 328);
    sub_14064F610(a1: v62);
    v11 = (_QWORD *)(a1 + 336);
    if ( *(_QWORD *)(a1 + 360) > 0xFu )
      v11 = (_QWORD *)*v11;
    sub_14068C430(a1: (_DWORD)a4, a2: a1, a3: (_DWORD)v11, a4: (unsigned int)&v61, a5: (__int64)&v75);
    v63 = &v75;
    v78 = 0;
    v75 = &PXEngine::VersionDependency::`vftable';
    si128 = 0;
    v77.m128i_i64[0] = 0;
    v77.m128i_i64[1] = 15;
    si128.m128i_i8[0] = 0;
    v61 = *(__int128 **)(a1 + 464);
    v62 = *(_QWORD *)(a1 + 472);
    sub_14064F610(a1: v62);
    v12 = (_QWORD *)(a1 + 480);
    if ( *(_QWORD *)(a1 + 504) > 0xFu )
      v12 = (_QWORD *)*v12;
    sub_14068C430(a1: (_DWORD)a4, a2: a1, a3: (_DWORD)v12, a4: (unsigned int)&v61, a5: (__int64)&v75);
  }
  return sub_1400B8460((_DWORD *)a1, a2: v73, a3: v6, a4, a5: v8);
}