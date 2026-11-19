char __fastcall sub_1407D08D0(_QWORD *a1, __int64 a2, __int64 a3)
{
  int v5; // ebx
  unsigned __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // r10
  const char *v10; // rax
  char v11; // al
  __int64 *v12; // r8
  __int64 *v13; // rax
  __int64 *v14; // rcx
  __int64 v15; // rcx
  int v17; // ebx
  __int64 v18; // r15
  __m128i si128; // xmm6
  __int64 *v20; // rcx
  __int64 *v21; // rax
  __int64 *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // r14
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // r9d
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  unsigned __int8 v40; // di
  __int64 v41; // rcx
  unsigned __int8 (__fastcall *v42)(__int64 *); // rdx
  char (__fastcall *v43)(__int64, __int64, unsigned int); // r9
  char v44; // al
  char (__fastcall *v45)(__int64, __int64, unsigned int); // rax
  char v46; // al
  unsigned int v47; // ebx
  unsigned int v48; // edi
  __int64 v49; // rax
  __int64 v50; // rbx
  __int64 v51; // rsi
  __int64 v52; // rax
  __int64 v53; // rbx
  char (__fastcall *v54)(__int64, __int64, unsigned int); // r9
  char v55; // al
  char (__fastcall *v56)(__int64, __int64, unsigned int); // r9
  char v57; // al
  unsigned __int64 v58; // rdx
  _QWORD *v59; // rcx
  char (__fastcall *v60)(__int64, __int64, unsigned int); // r9
  char v61; // al
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rbx
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  unsigned __int8 (__fastcall *v68)(__int64 *); // rdx
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rdi
  char (__fastcall *v72)(__int64, __int64, unsigned int); // r9
  char v73; // al
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  _BYTE v87[4]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v88; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v89[8]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v90[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v91; // [rsp+50h] [rbp-B0h]
  __int64 v92; // [rsp+54h] [rbp-ACh]
  _BYTE v93[12]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v94[4]; // [rsp+6Ch] [rbp-94h] BYREF
  __int128 *v95; // [rsp+70h] [rbp-90h] BYREF
  __int128 v96; // [rsp+78h] [rbp-88h] BYREF
  __int64 v97; // [rsp+88h] [rbp-78h]
  unsigned __int64 v98; // [rsp+90h] [rbp-70h]
  __m256i v99; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v100; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v101; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v102; // [rsp+D8h] [rbp-28h]
  __int128 v103; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v104; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v105; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v106[8]; // [rsp+108h] [rbp+8h] BYREF
  __int128 v107; // [rsp+110h] [rbp+10h]
  __m128i v108; // [rsp+120h] [rbp+20h]
  __int128 v109; // [rsp+130h] [rbp+30h]
  __int128 v110; // [rsp+140h] [rbp+40h]
  char v111; // [rsp+154h] [rbp+54h]
  char v112; // [rsp+160h] [rbp+60h]
  char v113; // [rsp+180h] [rbp+80h]
  char v114; // [rsp+184h] [rbp+84h]
  __int64 v115; // [rsp+188h] [rbp+88h]
  _BYTE v116[200]; // [rsp+1D8h] [rbp+D8h] BYREF

  v5 = *(unsigned __int16 *)(a2 + 42);
  v90[1] = *(_QWORD *)(a2 + 88);
  v91 = *(_DWORD *)(a2 + 96);
  v92 = 0;
  v90[0] = (__int64)&PXEngine::ByteStreamReader::`vftable';
  v6 = a1[375] & (0x100000001B3LL * (BYTE1(v5) ^ (0x100000001B3LL * ((unsigned __int8)v5 ^ 0xCBF29CE484222325uLL))));
  v7 = a1[372];
  v8 = *(_QWORD *)(v7 + 16 * v6 + 8);
  v9 = a1[370];
  if ( v8 == v9 )
  {
LABEL_6:
    v8 = 0;
    goto LABEL_7;
  }
  if ( (_WORD)v5 != *(_WORD *)(v8 + 16) )
  {
    while ( v8 != *(_QWORD *)(v7 + 16 * v6) )
    {
      v8 = *(_QWORD *)(v8 + 8);
      if ( (_WORD)v5 == *(_WORD *)(v8 + 16) )
        goto LABEL_7;
    }
    goto LABEL_6;
  }
LABEL_7:
  if ( v8 != 0 && v8 != v9 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(v8 + 24) + 8LL))(
           a1: *(_QWORD *)(v8 + 24),
           a2: v90) == 0 )
    {
      v10 = sub_14080C330(message_id: v5);
      v11 = sub_140059D90(a1: off_141012F78, a2: "Failed to execute '%s' sent from server!", v10);
LABEL_175:
      if ( v11 != 0 )
        __debugbreak();
      return 0;
    }
    return 1;
  }
  v12 = (__int64 *)a1[350];
  v13 = (__int64 *)v12[1];
  v14 = v12;
  while ( *((_BYTE *)v13 + 25) == 0 )
  {
    if ( *((_WORD *)v13 + 16) >= (unsigned __int16)v5 )
    {
      v14 = v13;
      v13 = (__int64 *)*v13;
    }
    else
    {
      v13 = (__int64 *)v13[2];
    }
  }
  if ( *((_BYTE *)v14 + 25) != 0 || (unsigned __int16)v5 < *((_WORD *)v14 + 16) || v14 == v12 )
  {
    switch ( v5 )
    {
      case 282:
        v17 = -1;
        v18 = sub_1405F1EE0(a1: (__int64)&off_141313B68);
        si128 = _mm_load_si128((const __m128i *)&xmmword_140EFE3F0);
        while ( 2 )
        {
          v88 = v17;
          if ( sub_1401D0820(a1: v90, a2: &v88) != 0 )
          {
            LOWORD(v103) = 0;
            BYTE2(v103) = 0;
            BYTE8(v103) = 0;
            HIDWORD(v103) = 0;
            v106[4] = 0;
            v107 = 0u;
            v108 = si128;
            v109 = 0;
            v110 = 0u;
            BYTE12(v110) = 0;
            v111 = 0;
            v113 = 0;
            v114 = 0;
            v115 = 0;
            if ( sub_14080BFE0(a1: v90, a2: (__int64)&v103) )
            {
              v17 = v88;
              v20 = (__int64 *)a1[239];
              v21 = (__int64 *)v20[1];
              v22 = v20;
              while ( *((_BYTE *)v21 + 25) == 0 )
              {
                if ( *((_DWORD *)v21 + 8) >= v88 )
                {
                  v22 = v21;
                  v21 = (__int64 *)*v21;
                }
                else
                {
                  v21 = (__int64 *)v21[2];
                }
              }
              if ( *((_BYTE *)v22 + 25) != 0 || v88 < *((_DWORD *)v22 + 8) || v22 == v20 )
                *(_QWORD *)&v96 = 0xBADF00D00000000LL;
              else
                sub_1405F1D40(a1: (__int64)&v95, a2: (__int64)(v22 + 5));
              v95 = (__int128 *)&PXEngine::SafeActorPtrAs<CPXPlayerTPNet>::`vftable';
              v23 = sub_1405F1EE0(a1: (__int64)&v95);
              v24 = v23;
              if ( v23 != 0 )
              {
                sub_140790DD0(a1: v23, a2: &v103);
                if ( v24 != v18 )
                {
                  v25 = sub_1405F1EE0(a1: v24 + 1608);
                  if ( *(_BYTE *)(v24 + 252) < 0x12u )
                    v25 = v24;
                  sub_1405F1D40(a1: (__int64)&v99, a2: v25 + 32);
                  v99.m256i_i64[0] = (__int64)&PXEngine::SafeActorPtrAs<CPXSpace>::`vftable';
                  v26 = sub_1405F1EE0(a1: (__int64)&v99);
                  v29 = sub_1400AF100(a1: v28, a2: v27);
                  sub_1400C5F00(a1: v25, a2: v93, a3: v29);
                  v32 = sub_1400AF100(a1: v31, a2: v30);
                  v33 = sub_1400AEDB0(a1: v25, a2: v32);
                  v34 = sub_140164770(a1: v33, a2: v26, a3: v93);
                  if ( v34 != 0 && v34 != v26 )
                  {
                    LOBYTE(v35) = 1;
                    sub_1400B0580(a1: v25, a2: v34, a3: -1, a4: v35, a5: 0);
                  }
                }
                continue;
              }
            }
            else if ( (unsigned __int8)sub_140059D90(a1: off_141012FC8, a2: "Failed to deserialize PlayerStateData!") != 0 )
            {
              __debugbreak();
            }
          }
          break;
        }
        return 1;
      case 284:
        v87[0] = 0;
        v89[0] = 0;
        if ( sub_140A4BF00(a1: (__int64)v90, a2: (__int64)v89, a3: 1u) == 0 )
        {
          v11 = sub_140059D90(a1: off_141013068, a2: "Failed to deserialize BroadcastPlayerPushUpdate!");
          goto LABEL_175;
        }
        v87[0] = v89[0];
        sub_140A4BE90(a1: (__int64)v90, a2: (__int64)&v99, a3: v91 - v92);
        sub_1407D2C00(a1, a2: &v99, a3: v87[0]);
        return 1;
      case 285:
        v38 = sub_1407B9B80((__int64)a1, a2: (__int64)&v99, a3: *(_DWORD *)(a2 + 48));
        v39 = sub_1405F1EE0(a1: v38);
        if ( v39 != 0 )
          sub_1407CF960(a1, a2: v39);
        v40 = 0;
        v41 = v90[0];
        v42 = *(unsigned __int8 (__fastcall **)(__int64 *))(v90[0] + 8);
        if ( (char *)v42 == (char *)sub_14001A520 )
          goto LABEL_58;
        if ( v42(a1: v90) != 0 )
        {
          v41 = v90[0];
LABEL_58:
          v89[0] = 0;
          v45 = *(char (__fastcall **)(__int64, __int64, unsigned int))(v41 + 16);
          if ( v45 == sub_140736DC0 )
            v46 = sub_140A4BF00(a1: (__int64)v90, a2: (__int64)v89, a3: 1u);
          else
            v46 = v45(a1: (__int64)v90, a2: (__int64)v89, a3: 1u);
          if ( v46 == 0 )
            goto LABEL_56;
          v40 = v89[0];
        }
        else
        {
          v87[0] = 0;
          v43 = *(char (__fastcall **)(__int64, __int64, unsigned int))(v90[0] + 16);
          if ( v43 == sub_140736DC0 )
            v44 = sub_140A4BF00(a1: (__int64)v90, a2: (__int64)v87, a3: 1u);
          else
            v44 = v43(a1: (__int64)v90, a2: (__int64)v87, a3: 1u);
          if ( v44 == 0 )
            goto LABEL_56;
        }
        v88 = 0;
        if ( sub_1401D0820(a1: v90, a2: &v88) != 0 )
        {
          if ( *(_QWORD *)&nExitCode != 0 )
          {
            sub_1407B1A20(a1: &v103);
            sub_14034B3B0(a1: v116);
            if ( (unsigned __int8)sub_1407AA8F0(a1: (__int64)v90, a2: (__int64)&v103) != 0
              && (unsigned __int8)sub_140347560(a1: (__int64)v90, a2: (__int64)v116) != 0 )
            {
              sub_1407CE750(a1, a2: &v103, a3: v40, a4: v88);
              sub_14034BD00(a1: v116);
              sub_1407B3520(a1: &v103);
              return 1;
            }
            if ( (unsigned __int8)sub_140059D90(
                                    a1: off_141013040,
                                    a2: "Failed to deserialize PlayerCreateSharedMessage!") != 0 )
              __debugbreak();
            sub_14034BD00(a1: v116);
            sub_1407B3520(a1: &v103);
            return 0;
          }
          return 1;
        }
LABEL_56:
        v11 = sub_140059D90(a1: off_141013018, a2: "Failed to deserialize BroadcastPlayerPushComplete!");
        goto LABEL_175;
      case 286:
        *(_DWORD *)v93 = -1;
        v88 = -1;
        if ( sub_1401D0820(a1: v90, a2: &v88) == 0 )
        {
          v11 = sub_140059D90(a1: off_141012FF0, a2: "Failed to deserialize BroadcastPlayerRemove!");
          goto LABEL_175;
        }
        *(_DWORD *)v93 = v88;
        v36 = sub_1407B9B80((__int64)a1, a2: (__int64)&v99, a3: v88);
        v37 = sub_1405F1EE0(a1: v36);
        if ( v37 == 0 )
          return 1;
        sub_1407CF960(a1, a2: v37);
        return 1;
      case 287:
        v88 = -1;
        if ( sub_1401D0820(a1: v90, a2: &v88) == 0 || (v47 = v88, v88 = 0, sub_1401D0820(a1: v90, a2: &v88) == 0) )
        {
          v11 = sub_140059D90(a1: off_141013090, a2: "Failed to deserialize BroadcastHorseLevelUp!");
          goto LABEL_175;
        }
        v48 = v88;
        v49 = sub_1407B9B80((__int64)a1, a2: (__int64)&v99, a3: v47);
        v50 = sub_1405F1EE0(a1: v49);
        if ( v50 != 0 )
        {
          v51 = sub_14005D330();
          v52 = sub_1405F1EE0(a1: v50 + 1608);
          v53 = v52;
          if ( v52 != 0
            && (unsigned __int8)sub_140645790(a1: v52, a2: 120, a3: v51) != 0
            && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v53 + 904LL))(a1: v53) == v48 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 952LL))(a1: v53);
          }
        }
        return 1;
      case 289:
        *(_DWORD *)v93 = 0;
        *(_QWORD *)&v93[4] = -1;
        v94[0] = 0;
        v88 = 0;
        if ( sub_1401D0820(a1: v90, a2: &v88) != 0 )
        {
          *(_DWORD *)v93 = v88;
          v88 = *(_DWORD *)&v93[4];
          if ( sub_1401D0820(a1: v90, a2: &v88) != 0 )
          {
            *(_DWORD *)&v93[4] = v88;
            v88 = *(_DWORD *)&v93[8];
            if ( sub_1401D0820(a1: v90, a2: &v88) != 0 )
            {
              *(_DWORD *)&v93[8] = v88;
              v54 = *(char (__fastcall **)(__int64, __int64, unsigned int))(v90[0] + 16);
              v55 = v54 == sub_140736DC0
                  ? sub_140A4BF00(a1: (__int64)v90, a2: (__int64)v94, a3: 1u)
                  : v54(a1: (__int64)v90, a2: (__int64)v94, a3: 1u);
              if ( v55 != 0 )
              {
                sub_1407D8290(a1, a2: v93, a3);
                return 1;
              }
            }
          }
        }
        v11 = sub_140059D90(a1: off_1410130B8, a2: "Failed to deserialize BroadcastEmoteResponse!");
        goto LABEL_175;
      case 291:
        v99.m256i_i16[0] = 2;
        memset((char *)v99.m256i_i64 + 4, 0, 28);
        *(_QWORD *)&v100 = 15;
        v99.m256i_i8[8] = 0;
        v87[0] = 0;
        if ( sub_140A4BF00(a1: (__int64)v90, a2: (__int64)v87, a3: 1u) != 0 )
        {
          v99.m256i_i8[0] = v87[0];
          v60 = *(char (__fastcall **)(__int64, __int64, unsigned int))(v90[0] + 16);
          v61 = v60 == sub_140736DC0
              ? sub_140A4BF00(a1: (__int64)v90, a2: (__int64)v99.m256i_i64 + 1, a3: 1u)
              : v60(a1: (__int64)v90, a2: (__int64)v99.m256i_i64 + 1, a3: 1u);
          if ( v61 != 0 )
          {
            v88 = v99.m256i_u32[1];
            if ( sub_1401D0820(a1: v90, a2: &v88) != 0 )
            {
              v99.m256i_i32[1] = v88;
              if ( sub_1402B4D00(a1: v90, a2: &v99.m256i_i64[1]) != 0 )
              {
                sub_1407D7CA0(a1, a2: &v99, a3);
                sub_14001B5A0(a1: &v99.m256i_u64[1]);
                return 1;
              }
            }
          }
        }
        if ( (unsigned __int8)sub_140059D90(a1: off_141013108, a2: "Failed to deserialize ChatMessage!") != 0 )
          __debugbreak();
        v58 = v100;
        if ( (unsigned __int64)v100 > 0xF )
        {
          v59 = (_QWORD *)v99.m256i_i64[1];
          goto LABEL_111;
        }
        return 0;
      case 292:
        memset(&v99, 0, 17);
        *(__int64 *)((char *)&v99.m256i_i64[2] + 4) = -1;
        v100 = 0;
        v101 = 0;
        v102 = 15;
        LOBYTE(v100) = 0;
        if ( sub_140A44740(a1: v90, a2: (__int128 *)v99.m256i_i8) != 0 )
        {
          v56 = *(char (__fastcall **)(__int64, __int64, unsigned int))(v90[0] + 16);
          v57 = v56 == sub_140736DC0
              ? sub_140A4BF00(a1: (__int64)v90, a2: (__int64)&v99.m256i_i64[2], a3: 1u)
              : v56(a1: (__int64)v90, a2: (__int64)&v99.m256i_i64[2], a3: 1u);
          if ( v57 != 0 )
          {
            v88 = v99.m256i_u32[5];
            if ( sub_1401D0820(a1: v90, a2: &v88) != 0 )
            {
              v99.m256i_i32[5] = v88;
              v88 = v99.m256i_u32[6];
              if ( sub_1401D0820(a1: v90, a2: &v88) != 0 )
              {
                v99.m256i_i32[6] = v88;
                if ( sub_1402B4D00(a1: v90, a2: (__int64 *)&v100) != 0 )
                {
                  sub_1407D79F0(a1, a2: &v99, a3);
                  sub_14001B5A0(a1: &v100);
                  return 1;
                }
              }
            }
          }
        }
        if ( (unsigned __int8)sub_140059D90(a1: off_1410130E0, a2: "Failed to deserialize ChatMessage!") != 0 )
          __debugbreak();
        v58 = v102;
        if ( v102 <= 0xF )
          return 0;
        v59 = (_QWORD *)v100;
        goto LABEL_111;
      case 297:
      case 299:
      case 302:
        v65 = sub_1400AF100(a1: v14, a2: &PXEngine::ByteStreamReader::`vftable');
        v66 = sub_140218070(a1: v65, a2: (__int64)&v99);
        v67 = sub_1405F1EE0(a1: v66);
        if ( v67 == 0 )
          return 0;
        sub_1402CCD90(a1: v67);
        LODWORD(v95) = 0;
        v96 = 0;
        v97 = 0;
        v98 = 15;
        LOBYTE(v96) = 0;
        v68 = *(unsigned __int8 (__fastcall **)(__int64 *))(v90[0] + 8);
        if ( (char *)v68 == (char *)sub_14001A520 || v68(a1: v90) != 0 )
        {
          v88 = 0;
          if ( sub_1401D0820(a1: v90, a2: &v88) == 0 )
            goto LABEL_137;
          LODWORD(v95) = v88;
        }
        else
        {
          *(_DWORD *)v93 = (_DWORD)v95;
          if ( sub_1401D0820(a1: v90, a2: v93) == 0 )
            goto LABEL_137;
        }
        if ( sub_1402B4D00(a1: v90, a2: (__int64 *)&v96) != 0 )
        {
          sub_1407D8F90(a1, a2: (unsigned int)v95, a3: &v96);
          sub_14001B5A0(a1: &v96);
          return 1;
        }
LABEL_137:
        if ( (unsigned __int8)sub_140059D90(
                                a1: off_141013158,
                                a2: "Failed to deserialize GameServerMessages::ServerError!") != 0 )
          __debugbreak();
        v58 = v98;
        if ( v98 > 0xF )
        {
          v59 = (_QWORD *)v96;
LABEL_111:
          if ( v58 + 1 >= 0x1000 )
          {
            if ( (unsigned __int64)v59 - *(v59 - 1) - 8 > 0x1F )
              __fastfail(5u);
            v59 = (_QWORD *)*(v59 - 1);
          }
          sub_1409DB4C0(lpMem: v59);
        }
        return 0;
      case 298:
        v62 = sub_1400AF100(a1: v14, a2: &PXEngine::ByteStreamReader::`vftable');
        v63 = sub_140218070(a1: v62, a2: (__int64)&v99);
        v64 = sub_1405F1EE0(a1: v63);
        if ( v64 == 0 )
          return 0;
        v103 = 0;
        *(_QWORD *)&v104 = 0;
        DWORD2(v104) = 0;
        v108.m128i_i8[8] = 0;
        v95 = (__int128 *)&v105;
        *(_QWORD *)&v96 = (char *)&v104 + 8;
        *((_QWORD *)&v96 + 1) = &v103;
        *(_QWORD *)v93 = v90;
        if ( sub_1407AF9F0(a1: &v95, a2: v93) == 0 )
        {
          if ( (unsigned __int8)sub_140059D90(
                                  a1: off_141013130,
                                  a2: "Failed to deserialize RaceCompetitionListResponseMessage!") != 0 )
            __debugbreak();
          if ( v108.m128i_i8[8] != 0 )
          {
            sub_14001B5A0(a1: &v105);
            v105 = 19937;
            *(_QWORD *)&v107 = 0;
            *((_QWORD *)&v107 + 1) = 31;
            v108.m128i_i8[8] = 0;
          }
          sub_140018080(a1: &v103);
          return 0;
        }
        sub_1402C8B00(a1: v64, a2: &v103);
        if ( v108.m128i_i8[8] != 0 )
        {
          sub_14001B5A0(a1: &v105);
          v105 = 19937;
          *(_QWORD *)&v107 = 0;
          *((_QWORD *)&v107 + 1) = 31;
          v108.m128i_i8[8] = 0;
        }
        sub_140018080(a1: &v103);
        return 1;
      case 301:
        v69 = sub_1400AF100(a1: v14, a2: &PXEngine::ByteStreamReader::`vftable');
        v70 = sub_140218070(a1: v69, a2: (__int64)&v99);
        v71 = sub_1405F1EE0(a1: v70);
        if ( v71 == 0 )
          return 0;
        *(_QWORD *)v93 = 0;
        v88 = 0;
        if ( sub_1401D0820(a1: v90, a2: &v88) != 0 )
        {
          *(_DWORD *)v93 = v88;
          v72 = *(char (__fastcall **)(__int64, __int64, unsigned int))(v90[0] + 16);
          v73 = v72 == sub_140736DC0
              ? sub_140736DC0(a1: (__int64)v90, a2: (__int64)&v93[4], a3: 4u)
              : v72(a1: (__int64)v90, a2: (__int64)&v93[4], a3: 4u);
          if ( v73 != 0 )
          {
            sub_1402C8A70(a1: v71, a2: v93);
            return 1;
          }
        }
        v11 = sub_140059D90(a1: off_141013180, a2: "Failed to deserialize RaceCompetitionBestScoreResponseMessage!");
        goto LABEL_175;
      case 374:
        LODWORD(v103) = 0;
        *((_QWORD *)&v103 + 1) = 0;
        v104 = 0;
        LOWORD(v105) = 0;
        v112 = 0;
        v88 = 0;
        if ( sub_1401D0820(a1: v90, a2: &v88) != 0
          && (LODWORD(v103) = v88, sub_1407AABE0(a1: v90, a2: (__int64 *)&v103 + 1) != 0)
          && sub_1402B8840(a1: v90, a2: (char *)&v105) != 0
          && sub_1402B8840(a1: v90, a2: (char *)&v105 + 1) != 0
          && sub_1407A8EA0(a1: (__int64)v90, a2: (__int64)v106) != 0 )
        {
          v76 = sub_1400AF100(a1: v75, a2: v74);
          v77 = sub_140218070(a1: v76, a2: (__int64)&v99);
          v78 = sub_1405F1EE0(a1: v77);
          if ( v78 != 0 )
          {
            sub_1402CCA60(a1: v78, a2: &v103);
            if ( v112 != 0 )
            {
              sub_1407B4BC0(lpMem: v106);
              v112 = 0;
            }
            sub_1407B2660(a1: (char *)&v103 + 8);
            return 1;
          }
        }
        else if ( (unsigned __int8)sub_140059D90(
                                     a1: off_1410131A8,
                                     a2: "Failed to deserialize ShowJumpingLeaderboardResponse!") != 0 )
        {
          __debugbreak();
        }
        if ( v112 != 0 )
        {
          sub_1407B4BC0(lpMem: v106);
          v112 = 0;
        }
        sub_1407B2660(a1: (char *)&v103 + 8);
        return 0;
      case 375:
        v79 = sub_1400AF100(a1: v14, a2: &PXEngine::ByteStreamReader::`vftable');
        v80 = sub_140218070(a1: v79, a2: (__int64)&v99);
        v81 = sub_1405F1EE0(a1: v80);
        if ( v81 == 0 )
          return 0;
        sub_1402CC9A0(a1: v81);
        return 1;
      case 376:
        v95 = nullptr;
        *(_QWORD *)&v96 = 0;
        v88 = 0;
        if ( sub_1401D0820(a1: v90, a2: &v88) == 0
          || (LODWORD(v95) = v88,
              v99.m256i_i64[0] = (__int64)&v96 + 4,
              v99.m256i_i64[1] = (__int64)&v96,
              v99.m256i_i64[2] = (__int64)&v95 + 4,
              sub_1407AAB40(a1: v90, a2: (int **)&v99) == 0) )
        {
          v11 = sub_140059D90(a1: off_1410131D0, a2: "Failed to deserialize ShowJumpingLeaderboardResponse!");
          goto LABEL_175;
        }
        v84 = sub_1400AF100(a1: v83, a2: v82);
        v85 = sub_140218070(a1: v84, a2: (__int64)&v99);
        v86 = sub_1405F1EE0(a1: v85);
        if ( v86 == 0 )
          return 0;
        *(_QWORD *)v93 = __PAIR64__(v96, HIDWORD(v95));
        *(_DWORD *)&v93[8] = DWORD1(v96);
        sub_1402CCB30(a1: v86, a2: (unsigned int)v95, a3: v93);
        return 1;
      default:
        return 0;
    }
  }
  v15 = v14[12];
  if ( v15 == 0 )
  {
    sub_1409D2AC0(a1: 0);
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 16LL))(a1: v15, a2: v90);
  return 1;
}