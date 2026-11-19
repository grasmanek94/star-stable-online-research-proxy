__int64 __fastcall sub_1405FD6C0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        _BYTE *a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        char a8,
        __int64 a9)
{
  _BYTE *v9; // r13
  __int64 *v11; // r15
  __int64 v12; // rbx
  unsigned __int64 v13; // rdx
  __int64 v14; // r12
  _QWORD *v15; // r14
  char *v16; // rdi
  __int64 v17; // rbx
  unsigned __int64 v18; // rax
  char v19; // cl
  unsigned __int64 v20; // rdx
  unsigned int v21; // eax
  int v22; // edx
  __int64 v23; // rdi
  int v24; // eax
  char v25; // di
  unsigned int v26; // eax
  unsigned int v27; // ebx
  char v28; // cl
  char v29; // al
  char *v30; // rdx
  __int64 v31; // rdi
  unsigned __int64 v32; // rax
  char v33; // cl
  unsigned int v34; // eax
  unsigned __int64 v35; // r8
  __int64 v36; // rdx
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rsi
  __int64 v39; // r8
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  unsigned int **v42; // r13
  _QWORD *v43; // r12
  __int64 v44; // rcx
  unsigned __int64 v45; // rbx
  __int64 v46; // rax
  _DWORD *v47; // rcx
  _DWORD *v48; // rdx
  unsigned __int64 v49; // rbx
  char v50; // al
  __int64 v51; // rax
  _DWORD *v52; // rcx
  _DWORD *v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rbx
  __int64 v57; // rax
  unsigned __int64 v58; // r15
  LPVOID *v59; // r14
  LPVOID *v60; // rbx
  unsigned __int64 v61; // rsi
  unsigned __int64 v62; // r8
  char *v63; // rcx
  unsigned __int8 *v64; // r8
  LPVOID *v65; // rdx
  void *v66; // rcx
  LPVOID *v67; // r14
  unsigned int *v68; // rdi
  unsigned int *v69; // r15
  __int64 *v70; // rdx
  unsigned __int64 v71; // rsi
  unsigned __int64 v72; // rbx
  _QWORD *v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // rsi
  int v76; // edi
  unsigned __int64 v77; // rbx
  __int64 v78; // rax
  _DWORD *v79; // rcx
  _DWORD *v80; // rdx
  unsigned __int64 v81; // rbx
  __int64 v82; // rax
  _DWORD *v83; // rcx
  _DWORD *v84; // rdx
  __int64 v85; // r8
  __int64 result; // rax
  __int64 v87; // rdx
  char v88; // [rsp+40h] [rbp-C0h]
  char v89; // [rsp+41h] [rbp-BFh]
  void **v90; // [rsp+48h] [rbp-B8h] BYREF
  int v91; // [rsp+50h] [rbp-B0h]
  unsigned int v92; // [rsp+54h] [rbp-ACh]
  __int64 v93; // [rsp+58h] [rbp-A8h]
  unsigned int v94; // [rsp+60h] [rbp-A0h]
  _BYTE *v95; // [rsp+68h] [rbp-98h]
  _QWORD *v96; // [rsp+70h] [rbp-90h]
  int v97; // [rsp+78h] [rbp-88h]
  __int64 *v98; // [rsp+80h] [rbp-80h]
  int v99; // [rsp+88h] [rbp-78h]
  unsigned int v100; // [rsp+8Ch] [rbp-74h]
  _DWORD *v101; // [rsp+90h] [rbp-70h]
  __int64 v102; // [rsp+98h] [rbp-68h]
  unsigned __int64 v103; // [rsp+A0h] [rbp-60h] BYREF
  int v104; // [rsp+A8h] [rbp-58h]
  unsigned int v105; // [rsp+ACh] [rbp-54h]
  _BYTE v106[256]; // [rsp+B0h] [rbp-50h] BYREF
  LPVOID lpMem[2]; // [rsp+1B0h] [rbp+B0h] BYREF
  __m128i v108; // [rsp+1C0h] [rbp+C0h]
  __int128 v109; // [rsp+1D0h] [rbp+D0h] BYREF
  __m128i v110; // [rsp+1E0h] [rbp+E0h]
  _BYTE v111[254]; // [rsp+1F0h] [rbp+F0h] BYREF
  char v112; // [rsp+2EEh] [rbp+1EEh]

  v9 = a4;
  v95 = a4;
  v102 = a2;
  v11 = a1;
  v98 = a1;
  v101 = a7;
  v12 = a9;
  v99 = 0;
  v88 = 0;
  v13 = *(unsigned int *)(a6 + 12);
  v14 = (__int64)(a1 + 1);
  if ( (_DWORD)v13 == 195948557
    || v13 >= (*(_QWORD *)v14 - *a1) >> 6
    || *(_DWORD *)(((unsigned __int64)(unsigned int)v13 << 6) + *a1 + 44) != *(_DWORD *)(a6 + 8) )
  {
    v96 = a1 + 1;
    if ( (unsigned int)sub_140069480(a1: a4, a2: "global", a3: 6) == 0 )
    {
      v16 = v9 + 7;
      sub_140E827B0(a1: v111, a2: 0, a3: 256);
      v17 = 0;
      if ( v9[7] != 0 )
      {
        while ( 2 )
        {
          v18 = 0;
          v19 = *v16;
          do
          {
            if ( v19 == asc_140FDDF6C[v18] )
            {
              v111[v17] = 0;
              goto LABEL_13;
            }
            ++v18;
          }
          while ( v18 < 2 );
          if ( (_DWORD)v17 == 255 )
          {
            v112 = 0;
          }
          else
          {
            v111[v17] = v19;
            v17 = (unsigned int)(v17 + 1);
            if ( *++v16 != 0 )
              continue;
          }
          break;
        }
      }
      LODWORD(v17) = 0;
LABEL_13:
      sub_1405FD2E0(a1: v11, a2: (__int64)&v90, a3: (__int64)v111);
      if ( v92 == 195948557
        || v92 >= (unsigned __int64)((*(_QWORD *)v14 - *v11) >> 6)
        || *(_DWORD *)(((unsigned __int64)v92 << 6) + *v11 + 44) != v91 )
      {
        goto LABEL_188;
      }
      v9 += (unsigned int)v17 + 7;
      v14 = (unsigned int)(v17 + 7);
      goto LABEL_42;
    }
    v93 = 4;
    if ( (unsigned int)sub_140069480(a1: v9, a2: "this", a3: 4) == 0 )
    {
      v20 = *(unsigned int *)(a3 + 12);
      if ( (_DWORD)v20 == 195948557
        || v20 >= (*(_QWORD *)v14 - *v11) >> 6
        || *(_DWORD *)(((unsigned __int64)(unsigned int)v20 << 6) + *v11 + 44) != *(_DWORD *)(a3 + 8) )
      {
        goto LABEL_188;
      }
      v9 += 4;
      v95 = v9;
      v15 = (_QWORD *)v14;
      LODWORD(v14) = 4;
      goto LABEL_44;
    }
    if ( (unsigned int)sub_140069480(a1: v9, a2: "parent", a3: 6) != 0 )
    {
      v23 = 1;
      if ( (unsigned int)sub_140069480(a1: v9, a2: "/", a3: 1) != 0 )
      {
        v23 = 3;
        if ( (unsigned int)sub_140069480(a1: v9, a2: "sys", a3: 3) != 0 )
        {
          if ( (unsigned int)sub_140069480(a1: v9, a2: "local", a3: 5) != 0
            || (unsigned int)sub_1405FAFE0(a1: v11, a2: a5) == 195948557 )
          {
            goto LABEL_188;
          }
          v9 += 5;
          v14 = 5;
LABEL_42:
          v15 = v96;
          v95 = v9;
          goto LABEL_43;
        }
        if ( a9 == 0 )
        {
          v12 = *(_QWORD *)&nExitCode;
          if ( *(_QWORD *)&nExitCode == 0 )
            goto LABEL_188;
        }
        sub_1405F1D40(a1: (__int64)&v90, a2: v12 + 120);
        v24 = sub_1405FAFE0(a1: v11, a2: &v90);
      }
      else
      {
        if ( a9 == 0 )
        {
          v12 = *(_QWORD *)&nExitCode;
          if ( *(_QWORD *)&nExitCode == 0 )
            goto LABEL_188;
        }
        sub_1405F1D40(a1: (__int64)&v90, a2: v12 + 120);
        v24 = sub_1405FAFE0(a1: v11, a2: &v90);
        v88 = 1;
      }
      v14 = (unsigned int)v23;
      v22 = v24;
    }
    else
    {
      v21 = sub_1405FAFE0(a1: v11, a2: a3);
      if ( v21 == 195948557 )
        goto LABEL_188;
      if ( v21 >= (unsigned __int64)((*(_QWORD *)v14 - *v11) >> 6) )
        goto LABEL_185;
      v22 = *(_DWORD *)(((unsigned __int64)v21 << 6) + *v11 + 40);
      v14 = 6;
      v23 = 6;
    }
    v93 = v14;
    if ( v22 == 195948557 )
      goto LABEL_188;
    v15 = v96;
    v9 += v23;
    v95 = v9;
    goto LABEL_44;
  }
  v14 = 0;
  v15 = a1 + 1;
LABEL_43:
  v93 = v14;
LABEL_44:
  v25 = 0;
  v89 = 0;
  v26 = sub_140602F40(a1: v11);
  v27 = v26;
  v94 = v26;
  if ( *v9 == 0 )
  {
    if ( v101 != nullptr )
      *v101 = v14;
    if ( v26 == 195948557 )
    {
      v91 = 0;
      v92 = 195948557;
    }
    else
    {
      if ( v26 >= (unsigned __int64)((*v15 - *v11) >> 6) )
        goto LABEL_185;
      sub_1405F1D60(a1: (__int64)&v103, a2: v26, a3: *(_DWORD *)(((unsigned __int64)v26 << 6) + *v11 + 44));
      v91 = v104;
      v92 = v105;
    }
    v90 = &PXEngine::SafeActorPtrAs<CPXActor>::`vftable';
    v87 = v102;
    *(_QWORD *)v102 = &PXEngine::SafeActorPtr::`vftable';
    *(_DWORD *)(v87 + 8) = v91;
    *(_DWORD *)(v87 + 12) = v92;
    return v87;
  }
  v28 = v88;
  while ( 1 )
  {
    v29 = *v9;
    if ( *v9 == 47 )
    {
      if ( v28 == 0 )
      {
        v95 = ++v9;
        LODWORD(v14) = v14 + 1;
        v93 = (unsigned int)v14;
      }
    }
    else if ( v28 == 0 )
    {
      goto LABEL_170;
    }
    v96 = v15;
    if ( (unsigned int)sub_140069480(a1: v9, a2: "parent", a3: 6) != 0 )
      break;
    if ( v27 >= (unsigned __int64)((*v15 - *v11) >> 6) )
      goto LABEL_185;
    v27 = sub_140602F40(a1: v11);
    v94 = v27;
    if ( v27 == 195948557 )
      goto LABEL_188;
    v9 += 6;
    v14 = (unsigned int)(v14 + 6);
LABEL_168:
    v28 = 0;
    v93 = v14;
    v95 = v9;
LABEL_169:
    v29 = *v9;
LABEL_170:
    if ( v29 != 47 )
    {
      if ( v101 != nullptr )
        *v101 = v14;
      if ( v25 != 0 || v27 == 195948557 )
      {
        v91 = 0;
        v92 = 195948557;
LABEL_179:
        v90 = &PXEngine::SafeActorPtrAs<CPXActor>::`vftable';
        v85 = v102;
        *(_QWORD *)v102 = &PXEngine::SafeActorPtr::`vftable';
        *(_DWORD *)(v85 + 8) = v91;
        *(_DWORD *)(v85 + 12) = v92;
        return v85;
      }
      if ( v27 < (unsigned __int64)((*v15 - *v11) >> 6) )
      {
        sub_1405F1D60(a1: (__int64)&v103, a2: v27, a3: *(_DWORD *)(((unsigned __int64)v27 << 6) + *v11 + 44));
        v91 = v104;
        v92 = v105;
        goto LABEL_179;
      }
LABEL_185:
      __fastfail(5u);
    }
  }
  sub_140E827B0(a1: v111, a2: 0, a3: 256);
  v30 = v9;
  v31 = 0;
  v97 = 0;
  if ( *v9 != 0 )
  {
    while ( 2 )
    {
      v32 = 0;
      v33 = *v30;
      do
      {
        if ( v33 == asc_140FDDF78[v32] )
        {
          v111[v31] = 0;
          goto LABEL_62;
        }
        ++v32;
      }
      while ( v32 < 2 );
      if ( (_DWORD)v31 == 255 )
      {
        v112 = 0;
      }
      else
      {
        v111[v31] = v33;
        v31 = (unsigned int)(v31 + 1);
        v97 = v31;
        if ( *++v30 != 0 )
          continue;
      }
      break;
    }
  }
  v97 = 0;
LABEL_62:
  v34 = 0;
  v35 = v27;
  v103 = v27;
  while ( 2 )
  {
    v100 = v34;
    v36 = *v11;
    v37 = (*v15 - *v11) >> 6;
    if ( v35 >= v37 )
      goto LABEL_185;
    v38 = v35 << 6;
    v39 = *(_QWORD *)((v35 << 6) + v36);
    if ( v34 >= (unsigned __int64)((*(_QWORD *)(v38 + v36 + 8) - v39) >> 2) )
    {
      if ( v94 == 195948557 )
        goto LABEL_165;
      v81 = *(unsigned int *)(v38 + v36 + 48);
      if ( (_DWORD)v81 != 33 )
      {
        if ( v81 >= sub_14005C7D0(a1: v11[27])
          || (v82 = sub_14005C800(a1: v11[27], a2: (unsigned int)v81),
              v83 = *(_DWORD **)(v82 + 32),
              v84 = *(_DWORD **)(v82 + 40),
              v83 == v84) )
        {
LABEL_165:
          if ( v101 != nullptr )
            *v101 = v93;
          goto LABEL_188;
        }
        while ( *v83 != 33 )
        {
          if ( ++v83 == v84 )
            goto LABEL_165;
        }
      }
      v9 = &v95[v97];
      v14 = (unsigned int)(v97 + v93);
      v25 = 1;
      v89 = 1;
      v27 = v94;
      goto LABEL_168;
    }
    v40 = *(unsigned int *)(v39 + 4LL * v34);
    v90 = (void **)v40;
    if ( v40 >= v37 )
      goto LABEL_185;
    v41 = v40 << 6;
    v42 = (unsigned int **)(v41 + v36);
    v43 = (_QWORD *)(v41 + v36 + 24);
    if ( *(_BYTE *)(v41 + v36 + 31) != 0 )
      v44 = 2LL * *v43;
    else
      v44 = v41 + v36 + 24;
    if ( (unsigned int)sub_1400692A0(a1: v44, a2: v111) != 0 )
    {
LABEL_138:
      v34 = v100 + 1;
      v35 = v103;
      continue;
    }
    break;
  }
  v45 = *((unsigned int *)v42 + 12);
  if ( (_DWORD)v45 != 34 )
  {
    if ( v45 >= sub_14005C7D0(a1: v11[27]) )
      goto LABEL_146;
    v46 = sub_14005C800(a1: v11[27], a2: (unsigned int)v45);
    v47 = *(_DWORD **)(v46 + 32);
    v48 = *(_DWORD **)(v46 + 40);
    if ( v47 == v48 )
      goto LABEL_146;
    while ( *v47 != 34 )
    {
      if ( ++v47 == v48 )
        goto LABEL_146;
    }
  }
  if ( v94 == 195948557 )
    goto LABEL_146;
  if ( v103 >= (*v15 - *v11) >> 6 )
    goto LABEL_185;
  v49 = *(unsigned int *)(v38 + *v11 + 48);
  if ( (_DWORD)v49 == 33 )
  {
LABEL_81:
    v50 = 1;
  }
  else
  {
    if ( v49 < sub_14005C7D0(a1: v11[27]) )
    {
      v51 = sub_14005C800(a1: v11[27], a2: (unsigned int)v49);
      v52 = *(_DWORD **)(v51 + 32);
      v53 = *(_DWORD **)(v51 + 40);
      if ( v52 != v53 )
      {
        while ( *v52 != 33 )
        {
          if ( ++v52 == v53 )
            goto LABEL_86;
        }
        goto LABEL_81;
      }
    }
LABEL_86:
    v50 = 0;
  }
  if ( v50 == 0 )
    goto LABEL_146;
  if ( *((_BYTE *)v42 + 31) != 0 )
    v54 = 2LL * *v43;
  else
    v54 = (__int64)v43;
  v55 = sub_140069470(a1: v54);
  v56 = (__int64)&v95[v55];
  if ( v95[v55] == 47 )
    v56 = (__int64)&v95[v55 + 1];
  *(_OWORD *)lpMem = 0;
  v108 = 0u;
  v57 = sub_140E82CD0(a1: v56);
  sub_14000D7F0(a1: lpMem, a2: v56, a3: v57);
  v58 = v108.m128i_i64[0];
  v59 = lpMem;
  v60 = (LPVOID *)lpMem[0];
  v61 = v108.m128i_u64[1];
  if ( v108.m128i_i64[1] > 0xFuLL )
    v59 = (LPVOID *)lpMem[0];
  if ( v108.m128i_i64[0] == 0 )
    goto LABEL_103;
  if ( (unsigned __int64)(v108.m128i_i64[0] + 2) >= 0x10 )
  {
    v62 = sub_1409D1BB0(a1: v59, a2: v108.m128i_i64[0], a3: "/.", a4: 2);
    v61 = v108.m128i_u64[1];
    v58 = v108.m128i_i64[0];
    v60 = (LPVOID *)lpMem[0];
    goto LABEL_104;
  }
  sub_140E827B0(a1: v106, a2: 0, a3: 256);
  v63 = "/.";
  do
    v106[(unsigned __int8)*v63++] = 1;
  while ( v63 != "" );
  v64 = (unsigned __int8 *)v59;
  if ( v59 < (LPVOID *)((char *)v59 + v58) )
  {
    while ( v106[*v64] == 0 )
    {
      if ( ++v64 >= (unsigned __int8 *)v59 + v58 )
        goto LABEL_103;
    }
    v62 = v64 - (unsigned __int8 *)v59;
  }
  else
  {
LABEL_103:
    v62 = -1;
  }
LABEL_104:
  if ( v62 != -1 )
  {
    v109 = 0;
    v110 = 0u;
    if ( v58 < v62 )
      v62 = v58;
    v65 = lpMem;
    if ( v61 > 0xF )
      v65 = v60;
    sub_14000D7F0(a1: &v109, a2: v65, a3: v62);
    if ( v108.m128i_i64[1] > 0xFuLL )
    {
      v66 = lpMem[0];
      if ( (unsigned __int64)(v108.m128i_i64[1] + 1) >= 0x1000 )
      {
        if ( (unsigned __int64)lpMem[0] - *((_QWORD *)lpMem[0] - 1) - 8 > 0x1F )
LABEL_175:
          __fastfail(5u);
        v66 = *((void **)lpMem[0] - 1);
      }
      sub_1409DB4C0(lpMem: v66);
    }
    v99 |= 0x10u;
    *(_OWORD *)lpMem = v109;
    v108 = v110;
    v61 = _mm_srli_si128(v110, 8).m128i_u64[0];
    v58 = v110.m128i_i64[0];
    v60 = (LPVOID *)v109;
  }
  if ( v58 == 0 )
    goto LABEL_140;
  v67 = lpMem;
  if ( v61 > 0xF )
    v67 = v60;
  v68 = *v42;
  v69 = v42[1];
  if ( *v42 == v69 )
  {
LABEL_132:
    if ( v61 > 0xF )
    {
      if ( v61 + 1 >= 0x1000 )
      {
        if ( (unsigned __int64)((char *)v60 - (_BYTE *)*(v60 - 1) - 8) > 0x1F )
          goto LABEL_185;
        v60 = (LPVOID *)*(v60 - 1);
      }
      sub_1409DB4C0(lpMem: v60);
    }
    v15 = v96;
    v11 = v98;
    goto LABEL_138;
  }
  v70 = v98;
  while ( 1 )
  {
    v71 = *v68;
    if ( v71 >= (*v96 - *v70) >> 6 )
      goto LABEL_175;
    v72 = *v70 + ((unsigned __int64)(unsigned int)v71 << 6);
    if ( *(_DWORD *)(v72 + 48) != -1 )
      break;
LABEL_127:
    if ( ++v68 == v69 )
      goto LABEL_131;
  }
  v73 = (_QWORD *)(v72 + 24);
  if ( *(_BYTE *)(v72 + 31) != 0 )
    v73 = (_QWORD *)(2LL * *v73);
  if ( (unsigned int)sub_1400692A0(a1: v73, a2: v67) != 0 )
  {
    if ( (unsigned int)sub_1405FC1B0(a1: (_DWORD)v98, a2: v72, a3: (_DWORD)v67, a4: -1, a5: -1, a6: -1, a7: 1) != 195948557 )
      goto LABEL_139;
    v70 = v98;
    goto LABEL_127;
  }
  if ( (_DWORD)v71 == 195948557 )
  {
LABEL_131:
    v61 = v108.m128i_u64[1];
    v60 = (LPVOID *)lpMem[0];
    goto LABEL_132;
  }
LABEL_139:
  v61 = v108.m128i_u64[1];
  v60 = (LPVOID *)lpMem[0];
LABEL_140:
  if ( v61 > 0xF )
  {
    if ( v61 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)((char *)v60 - (_BYTE *)*(v60 - 1) - 8) > 0x1F )
        goto LABEL_185;
      v60 = (LPVOID *)*(v60 - 1);
    }
    sub_1409DB4C0(lpMem: v60);
  }
  v15 = v96;
  v11 = v98;
LABEL_146:
  if ( *((_BYTE *)v42 + 31) != 0 )
    v74 = 2LL * *v43;
  else
    v74 = (__int64)v43;
  v75 = sub_140069470(a1: v74);
  if ( *((_BYTE *)v42 + 31) != 0 )
    v43 = (_QWORD *)(2LL * *v43);
  v76 = sub_140069470(a1: v43);
  if ( v89 == 0 || (_DWORD)(v77 = *((unsigned int *)v42 + 12)) == 34 )
  {
LABEL_158:
    v9 = &v95[v75];
    v95 += v75;
    LODWORD(v14) = v76 + v93;
    v93 = (unsigned int)(v76 + v93);
    v27 = sub_140602F40(a1: v11);
    v94 = v27;
    v25 = 0;
    v89 = 0;
    v28 = 0;
    goto LABEL_169;
  }
  if ( v77 < sub_14005C7D0(a1: v11[27]) )
  {
    v78 = sub_14005C800(a1: v11[27], a2: (unsigned int)v77);
    v79 = *(_DWORD **)(v78 + 32);
    v80 = *(_DWORD **)(v78 + 40);
    if ( v79 != v80 )
    {
      while ( *v79 != 34 )
      {
        if ( ++v79 == v80 )
          goto LABEL_188;
      }
      goto LABEL_158;
    }
  }
LABEL_188:
  result = v102;
  *(_DWORD *)(v102 + 12) = 195948557;
  *(_DWORD *)(result + 8) = 0;
  *(_QWORD *)result = &PXEngine::SafeActorPtr::`vftable';
  return result;
}