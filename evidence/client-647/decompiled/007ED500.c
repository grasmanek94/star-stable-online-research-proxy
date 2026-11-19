unsigned __int64 __fastcall sub_1407ED500(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // r14
  __int64 v5; // r14
  __int64 *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // ecx
  int v15; // ecx
  __int64 v16; // rdi
  __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // rbx
  int v22; // r9d
  __int64 v23; // rdx
  __int64 v24; // r13
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rbx
  __int64 v31; // r15
  int v32; // edi
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rbx
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // rax
  __int64 v40; // r15
  __int64 v41; // rbx
  int v42; // ecx
  int v43; // edx
  bool v44; // zf
  __int64 v45; // rdx
  __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rdx
  void **v49; // rbx
  __int64 v50; // rax
  __int64 v51; // rdx
  unsigned __int8 v52; // bl
  __int64 v53; // r15
  __int64 v54; // r13
  int v55; // ecx
  __int64 v56; // rax
  __int64 v57; // rbx
  __int64 v58; // rax
  __int64 v59; // rbx
  __int64 v60; // rax
  __int64 v61; // rbx
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rbx
  __int64 v65; // rdx
  unsigned __int64 v66; // r8
  __int64 v67; // rbx
  __int64 v68; // rax
  __int64 v69; // rdx
  char **v70; // rcx
  void **v71; // [rsp+50h] [rbp-59h] BYREF
  int v72; // [rsp+58h] [rbp-51h]
  int v73; // [rsp+5Ch] [rbp-4Dh]
  void **v74; // [rsp+60h] [rbp-49h] BYREF
  int v75; // [rsp+68h] [rbp-41h]
  int v76; // [rsp+6Ch] [rbp-3Dh]
  char v77; // [rsp+70h] [rbp-39h] BYREF
  _BYTE v78[48]; // [rsp+80h] [rbp-29h] BYREF
  __int128 v79; // [rsp+B0h] [rbp+7h] BYREF

  result = *(unsigned int *)(a1 + 432);
  if ( result >= (__int64)(*(_QWORD *)(a1 + 368) - *(_QWORD *)(a1 + 360)) >> 3 )
    return result;
  result = sub_1407E9D30(a1: a1 + 72);
  if ( (_BYTE)result == 0 )
    return result;
  v3 = *(_QWORD *)(a1 + 360);
  v4 = *(unsigned int *)(a1 + 432);
  if ( v4 >= (*(_QWORD *)(a1 + 368) - v3) >> 3 )
    __fastfail(5u);
  v5 = *(_QWORD *)(v3 + 8 * v4);
  sub_1407EE2B0(a1, a2: v5);
  if ( (unsigned __int8)sub_1405F1E20(a1: a1 + 216) != 0 )
  {
    if ( *(_BYTE *)(v5 + 164) == 0 || *(_BYTE *)(v5 + 164) == 1 || *(_BYTE *)(v5 + 164) == 6 )
    {
      v6 = (__int64 *)sub_1405F1F00(a1: a1 + 216);
      v7 = *v6;
      v9 = sub_1400FBAF0(a1: v11);
      LOBYTE(v10) = 1;
    }
    else
    {
      v6 = (__int64 *)sub_1405F1F00(a1: a1 + 216);
      v7 = *v6;
      v9 = sub_1400FBAF0(a1: v8);
      v10 = 0;
    }
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(v7 + 632))(a1: v6, a2: v10, a3: v9);
  }
  if ( (unsigned __int8)sub_1405F1E20(a1: a1 + 232) != 0 )
  {
    if ( *(_DWORD *)(v5 + 172) == 0 || *(_BYTE *)(v5 + 189) != 0 )
    {
      v12 = sub_1405F1EE0(a1: a1 + 232);
      if ( v12 == 0 )
      {
        v70 = off_140F99FF8;
        goto LABEL_90;
      }
      LOBYTE(v13) = 1;
    }
    else
    {
      v12 = sub_140453410(a1: a1 + 232);
      v13 = 0;
    }
    sub_140148000(a1: v12, a2: v13);
  }
  v14 = *(_DWORD *)(v5 + 172);
  if ( v14 != 0 )
  {
    v15 = v14 - 1;
    if ( v15 != 0 )
    {
      if ( v15 == 1 )
      {
        v16 = sub_1405F1EE0(a1: a1 + 200);
        v17 = sub_1405F1EE0(a1: a1 + 168);
        v18 = sub_1405F1EE0(a1: a1 + 184);
        v19 = v18;
        if ( v16 != 0 && v17 != 0 && v18 != 0 )
        {
          v20 = sub_1405F1EE0(a1: a1 + 120);
          v21 = v20;
          if ( v20 != 0 && sub_1400C8AD0(a1: v20) )
            sub_1400C2A20(a1: v21);
          v22 = *(_DWORD *)(v5 + 176);
          v79 = 0;
          sub_1400691F0(a1: &v79, a2: 16, a3: "%u", v22);
          sub_1401486E0(a1: v19, a2: &v79, a3: 1);
          LOBYTE(v23) = *(_BYTE *)(v5 + 189) == 0;
          sub_140148000(a1: v16, a2: v23);
          sub_140147900(a1: v16);
          sub_140147900(a1: v17);
          sub_1401487D0(a1: v19);
          sub_1400C29E0(a1: v16);
          if ( *(_BYTE *)(v5 + 189) == 0 )
            sub_1407EE380(a1);
        }
      }
    }
    else
    {
      v24 = sub_1405F1EE0(a1: a1 + 152);
      v25 = sub_1405F1EE0(a1: a1 + 120);
      v74 = (void **)v25;
      if ( v24 != 0 && v25 != 0 )
      {
        v26 = sub_1405F1EE0(a1: a1 + 200);
        v29 = v26;
        if ( v26 != 0 && sub_1400C8AD0(a1: v26) )
          sub_1400C2A20(a1: v29);
        v30 = sub_1400AF100(a1: v28, a2: v27);
        v31 = sub_1405FD2E0(a1: v30, a2: &v79, a3: "PlayerItemManager");
        v32 = 195948557;
        if ( (unsigned __int8)sub_1406006A0(a1: v30, a2: v31, a3: 163) != 0 )
        {
          sub_1405F1D60(a1: &v71, a2: *(unsigned int *)(v31 + 12), a3: *(unsigned int *)(v31 + 8));
        }
        else
        {
          v72 = 0;
          v73 = 195948557;
        }
        v71 = &PXEngine::SafeActorPtrAs<CPXPlayerItemManager>::`vftable';
        v33 = sub_1405F1EE0(a1: (__int64)&v71);
        if ( v33 == 0 )
        {
          v70 = off_141018BC0;
          goto LABEL_90;
        }
        v36 = sub_1401E0840(a1: v33, a2: *(unsigned int *)(v5 + 176), a3: v34, a4: v35);
        if ( v36 != 0 )
        {
          v37 = sub_1405F1EE0(a1: a1 + 384);
          if ( v37 != 0 )
          {
            sub_1400AF390(a1: v37);
            sub_1405F1FB0(a1: a1 + 384);
          }
          v38 = sub_1405F1EE0(a1: a1 + 344);
          v39 = sub_1400AC1A0(a1: v36, a2: v38, a3: 1, a4: 1, a5: 0, a6: -1, a7: 0);
          v40 = v39;
          if ( v39 != 0
            && (v41 = qword_14138A6F0,
                sub_1405F1D40(a1: &v79, a2: v39 + 120),
                (unsigned __int8)sub_1406006A0(a1: v41, a2: &v79, a3: 101) != 0) )
          {
            sub_1405F1D60(a1: &v71, a2: HIDWORD(v79), a3: DWORD2(v79));
            v42 = v73;
            v43 = v72;
          }
          else
          {
            v43 = 0;
            v42 = 195948557;
          }
          *(_DWORD *)(a1 + 392) = v43;
          *(_DWORD *)(a1 + 396) = v42;
          *(_BYTE *)(v40 + 188) = 1;
          v44 = *(_BYTE *)(v5 + 184) == 0;
          v71 = &PXEngine::SafeActorPtrAs<CPXPlayerItem>::`vftable';
          if ( v44 )
            v45 = 1;
          else
            v45 = *(unsigned int *)(v5 + 180);
          sub_1402699A0(a1: v40, a2: v45);
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 1256LL))(a1: v24, a2: v40);
          v46 = *(_QWORD *)v24;
          v47 = sub_1405F1D40(a1: &v79, a2: a1 + 344);
          (*(void (__fastcall **)(__int64, __int64))(v46 + 1272))(a1: v24, a2: v47);
          LOBYTE(v46) = *(_BYTE *)(v5 + 189) == 0;
          sub_140148000(a1: v24, a2: (unsigned __int8)v46);
          sub_140147900(a1: v24);
          v48 = (unsigned __int8)v46;
          v49 = v74;
          sub_140148000(a1: v74, a2: v48);
          sub_140147900(a1: v49);
          sub_1400C29E0(a1: v49);
          v50 = sub_1405F1EE0(a1: a1 + 384);
          if ( v50 == 0 )
          {
            v70 = off_140F402E0;
            goto LABEL_90;
          }
          LOBYTE(v51) = 10;
          v52 = sub_14025F400(a1: v50, a2: v51);
          if ( (*(_BYTE *)(v5 + 189) | v52) == 0 )
            sub_1407EE380(a1);
          if ( *(_BYTE *)(v5 + 189) != 0 || v52 != 0 )
          {
            if ( (unsigned __int8)sub_1405F1E20(a1: a1 + 400) == 0 )
            {
              v53 = qword_14138A6F0;
              if ( qword_14138A6F0 == 0 )
              {
                if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
                  __debugbreak();
                sub_1409E29B8(a1: 999);
                __debugbreak();
              }
              *(_QWORD *)&v79 = &PXEngine::SafeActorPtr::`vftable';
              v74 = &PXEngine::SafeActorPtr::`vftable';
              *((_QWORD *)&v79 + 1) = 0xBADF00D00000000LL;
              v75 = 0;
              v76 = 195948557;
              v54 = sub_1405FD6C0(
                      a1: qword_14138A6F0,
                      a2: (unsigned int)&v77,
                      a3: (int)a1 + 344,
                      a4: (unsigned int)"global/InventoryWindow",
                      a5: (__int64)&v74,
                      a6: (__int64)&v79,
                      a7: 0,
                      a8: 0,
                      a9: 0);
              if ( (unsigned __int8)sub_1406006A0(a1: v53, a2: v54, a3: 1) != 0 )
              {
                sub_1405F1D60(a1: &v71, a2: *(unsigned int *)(v54 + 12), a3: *(unsigned int *)(v54 + 8));
                v55 = v72;
                v32 = v73;
              }
              else
              {
                v55 = 0;
              }
              *(_DWORD *)(a1 + 408) = v55;
              *(_DWORD *)(a1 + 412) = v32;
            }
            v56 = sub_1405F1EE0(a1: a1 + 400);
            v57 = v56;
            if ( v56 != 0 && sub_1400C8AD0(a1: v56) )
              sub_1400C2A20(a1: v57);
          }
        }
      }
    }
  }
  else
  {
    v58 = sub_1405F1EE0(a1: a1 + 120);
    v59 = v58;
    if ( v58 != 0 && sub_1400C8AD0(a1: v58) )
      sub_1400C2A20(a1: v59);
    v60 = sub_1405F1EE0(a1: a1 + 200);
    v61 = v60;
    if ( v60 != 0 && sub_1400C8AD0(a1: v60) )
      sub_1400C2A20(a1: v61);
    v62 = sub_1405F1EE0(a1: a1 + 384);
    if ( v62 != 0 )
    {
      sub_1400AF390(a1: v62);
      sub_1405F1FB0(a1: a1 + 384);
    }
  }
  v63 = sub_1405F1EE0(a1: a1 + 72);
  v64 = v63;
  if ( v63 == 0 )
  {
    v70 = off_140F40348;
LABEL_90:
    if ( (unsigned __int8)sub_140059CA0(a1: v70) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  sub_1400C29E0(a1: v63);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v64 + 1208LL))(a1: v64);
  if ( *(_BYTE *)(v5 + 188) == 0 )
  {
    *(_BYTE *)(v5 + 188) = 1;
    v65 = *(_QWORD *)(a1 + 360);
    v66 = *(unsigned int *)(a1 + 432);
    if ( v66 < (*(_QWORD *)(a1 + 368) - v65) >> 3 )
    {
      LODWORD(v74) = *(_DWORD *)(*(_QWORD *)(v65 + 8 * v66) + 160LL);
      BYTE4(v74) = *(_BYTE *)(*(_QWORD *)(v65 + 8 * v66) + 164LL);
      v67 = sub_1405F1EE0(a1: a1 + 344);
      if ( v67 == 0 )
      {
        if ( (unsigned __int8)sub_140059CA0(a1: off_140F61968) != 0 )
          __debugbreak();
        sub_1409E29B8(a1: 999);
        __debugbreak();
      }
      v68 = sub_1407E9A90(a1: &unk_141313C98, a2: v78, a3: &v74);
      sub_1407D6C20(a1: v67, a2: v68);
    }
    result = *(_QWORD *)(a1 + 368);
    v69 = *(_QWORD *)(a1 + 360);
    if ( v69 == result )
    {
LABEL_79:
      result = sub_1405F1EE0(a1: a1 + 416);
      if ( result != 0 )
        return sub_1400C2A20(a1: result);
    }
    else
    {
      while ( *(_BYTE *)(*(_QWORD *)v69 + 188LL) != 0 )
      {
        v69 += 8;
        if ( v69 == result )
          goto LABEL_79;
      }
    }
  }
  return result;
}