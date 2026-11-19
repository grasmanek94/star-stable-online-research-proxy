// Baseline 645.348067; IDA base 0x140000000. Exported through Official IDA MCP.
void __fastcall sub_14029E000(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 *v11; // r14
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r15
  __int64 v15; // rbx
  __int64 v16; // rax
  float v17; // xmm0_4
  bool v18; // cc
  unsigned int v19; // ebx
  unsigned int v20; // edi
  __int64 v21; // rax
  unsigned __int8 v22; // r14
  float v23; // xmm7_4
  __int64 v24; // rdx
  __int64 v25; // rcx
  double v26; // xmm0_8
  float v27; // xmm6_4
  float v28; // xmm2_4
  char v29; // di
  char v30; // al
  __int64 v31; // rbx
  __int64 v32; // rax
  __int128 *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  bool v37; // zf
  __int64 v38; // rbx
  __int64 v39; // rax
  __int128 *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rax
  unsigned __int64 v49; // xmm1_8
  int v50; // r8d
  __int64 v51; // rbx
  __int64 v52; // rax
  __int64 v53; // rax
  int v54; // r9d
  unsigned int v55; // xmm1_4
  unsigned int v56; // xmm2_4
  __int64 v57; // rcx
  float v58; // xmm2_4
  float v59; // xmm3_4
  float v60; // xmm4_4
  float v61; // xmm1_4
  float v62; // xmm5_4
  float v63; // xmm0_4
  int v64; // xmm6_4
  __int64 v65; // rbx
  __int64 v66; // rax
  int v67; // eax
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rbx
  __int64 v71; // rax
  _QWORD *v72; // rax
  __int64 v73; // rcx
  _QWORD *v74; // rdi
  __int64 v75; // rbx
  __int64 v76; // rax
  __int128 v77; // [rsp+30h] [rbp-89h] BYREF
  __int128 v78; // [rsp+40h] [rbp-79h]
  __m256i v79; // [rsp+50h] [rbp-69h]
  unsigned __int64 v80; // [rsp+70h] [rbp-49h] BYREF
  float v81; // [rsp+78h] [rbp-41h]
  __int128 v82; // [rsp+80h] [rbp-39h] BYREF
  __int128 v83; // [rsp+90h] [rbp-29h]
  __int128 v84; // [rsp+A0h] [rbp-19h]
  __int128 v85; // [rsp+B0h] [rbp-9h]
  float v86; // [rsp+120h] [rbp+67h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 640LL))(a1) != 0 )
  {
    v6 = (_QWORD *)sub_140101670(a1);
    v8 = v6;
    if ( v6 != nullptr )
    {
      v9 = *v6;
      v10 = sub_140101B20(a1: v7);
      (*(void (__fastcall **)(_QWORD *, bool, __int64))(v9 + 632))(
        a1: v8,
        a2: (*(_BYTE *)(a1 + 764) & 0x10) != 0,
        a3: v10);
    }
    if ( *(_BYTE *)(a1 + 240) != 16 )
    {
      v11 = (__int64 *)sub_1405F8CF0(a1: (__int64)&off_141300A98);
      v12 = sub_1405F8CF0(a1: (__int64)&off_141300A88);
      v14 = v12;
      if ( (*(_BYTE *)(a1 + 768) & 0x10) != 0 && v12 != 0 && v11 != nullptr )
      {
        v15 = *v11;
        v86 = (float)(*(float *)(a1 + 332) / *(float *)(a1 + 328)) * 100.0;
        v16 = sub_140101B20(a1: v13);
        (*(void (__fastcall **)(__int64 *, __int64, float *, __int64, __int64))(v15 + 24))(
          a1: v11,
          a2: 45008,
          a3: &v86,
          a4: a1,
          a5: v16);
        v17 = sub_1400B4560(a1) + *(float *)(a1 + 332);
        v18 = v17 <= *(float *)(a1 + 328);
        *(float *)(a1 + 332) = v17;
        if ( !v18 )
        {
          *(_BYTE *)(a1 + 768) &= ~0x10u;
          *(_DWORD *)(a1 + 332) = 0;
          sub_1400C9170(a1: v14);
          v19 = *(_DWORD *)(a1 + 524);
          v20 = *(_DWORD *)(a1 + 520);
          v21 = sub_1405F8CF0(a1: a1 + 504);
          sub_1402A2230(a1, a2: v21, a3: v20, a4: v19);
          if ( (*(_BYTE *)(a1 + 768) & 0x20) != 0 )
            sub_1405564E0(a1: v11, a2: 0);
        }
        if ( !sub_1400CF220(a1: v14) )
        {
          *(_BYTE *)(a1 + 768) &= ~0x10u;
          *(_DWORD *)(a1 + 332) = 0;
        }
      }
      v22 = 0;
      v23 = sub_1400B3260(a1, a2: a3);
      if ( sub_1400CF220(a1) )
      {
        v26 = (*(double (__fastcall **)(__int64))(*(_QWORD *)a1 + 720LL))(a1);
        v27 = *(float *)&v26;
        if ( *(float *)&v26 > 0.0 )
        {
          v28 = *(float *)(a1 + 712);
          if ( v28 > v23 )
          {
            if ( v23 > (float)(v28 - 4.0) )
              v27 = *(float *)&v26 * (float)((float)(v28 - v23) * 0.25);
            v29 = 1;
            if ( *(_QWORD *)(a1 + 584) != 0 )
            {
              v30 = *(_BYTE *)(a1 + 764);
              if ( (v30 & 8) != 0 || (*(_BYTE *)(a1 + 767) & 0x20) != 0 && (v30 & 4) != 0 )
              {
                v31 = *(_QWORD *)a1;
                v32 = sub_1400B5440(a1: v25, a2: v24);
                v33 = (__int128 *)(*(__int64 (__fastcall **)(__int64, __int64))(v31 + 696))(a1, a2: v32);
                v37 = (*(_BYTE *)(a1 + 765) & 0x40) == 0;
                v82 = *v33;
                v83 = v33[1];
                v84 = v33[2];
                v85 = v33[3];
                if ( !v37 )
                {
                  sub_1400B50C0(a1);
                  *((float *)&v85 + 1) = *((float *)&v85 + 1) + (float)(sub_140A003B0() * 0.1);
                }
                *(_QWORD *)&v77 = *(_QWORD *)(a1 + 584);
                if ( (_QWORD)v77 == 0 )
                  sub_14005A4C0(a1: v35, a2: v34, a3: v36);
                *(float *)v79.m256i_i32 = v27;
                *((_QWORD *)&v77 + 1) = &v82;
                v78 = 0;
                *(_OWORD *)&v79.m256i_u64[1] = 0;
                sub_14069EBC0(a1: a3, a2: &v77);
                if ( (*(_BYTE *)(a1 + 766) & 0x20) != 0 )
                  v29 = 0;
              }
            }
            if ( *(_QWORD *)(a1 + 536) != 0 && v29 != 0 )
            {
              v38 = *(_QWORD *)a1;
              v39 = sub_1400B5440(a1: v25, a2: v24);
              v40 = (__int128 *)(*(__int64 (__fastcall **)(__int64, __int64))(v38 + 696))(a1, a2: v39);
              v37 = (*(_BYTE *)(a1 + 765) & 0x40) == 0;
              v82 = *v40;
              v83 = v40[1];
              v84 = v40[2];
              v85 = v40[3];
              if ( !v37 )
              {
                sub_1400B50C0(a1);
                *((float *)&v85 + 1) = *((float *)&v85 + 1) + (float)(sub_140A003B0() * 0.1);
              }
              *(_QWORD *)&v77 = *(_QWORD *)(a1 + 536);
              if ( (_QWORD)v77 == 0 )
                sub_14005A4C0(a1: v42, a2: v41, a3: v43);
              *(float *)v79.m256i_i32 = v27;
              *((_QWORD *)&v77 + 1) = &v82;
              v78 = 0;
              *(_OWORD *)&v79.m256i_u64[1] = 0;
              sub_14069EBC0(a1: a3, a2: &v77);
            }
            if ( (*(_BYTE *)(a1 + 764) & 0x10) != 0 && *(_QWORD *)(a1 + 488) == 0 )
              v22 = 1;
          }
        }
      }
      if ( (*(_BYTE *)(a1 + 764) & 1) != 0 )
      {
        v44 = *(unsigned __int8 *)(a1 + 716);
        if ( *(_BYTE *)(a1 + 716) != 0 )
        {
          v45 = (unsigned int)(v44 - 1);
          if ( (_DWORD)v45 != 0 )
          {
            if ( (_DWORD)v45 == 1
              && (unsigned __int8)sub_140059AF0(a1: off_140F26798, a2: "Unknown snow deform shape kind!") != 0 )
            {
              __debugbreak();
            }
          }
          else
          {
            v46 = *(_QWORD *)a1;
            v47 = sub_1400B5440(a1: v45, a2: v24);
            v48 = (*(__int64 (__fastcall **)(__int64, __int64))(v46 + 696))(a1, a2: v47);
            v49 = _mm_add_ps((__m128)*(unsigned __int64 *)(a1 + 720), (__m128)*(unsigned __int64 *)(v48 + 48)).m128_u64[0];
            v81 = *(float *)(v48 + 56) + *(float *)(a1 + 728);
            v80 = v49;
            sub_1406A0170(a1: a3, a2: (unsigned int)&v80, a3: v50, a4: (unsigned int)&xmmword_140EF3D80, a5: 1, a6: 0);
          }
        }
        else
        {
          v51 = *(_QWORD *)a1;
          v52 = sub_1400B5440(a1: v44, a2: v24);
          v53 = (*(__int64 (__fastcall **)(__int64, __int64))(v51 + 696))(a1, a2: v52);
          LOBYTE(v54) = 1;
          v77 = *(_OWORD *)v53;
          v78 = *(_OWORD *)(v53 + 16);
          v79 = *(__m256i *)(v53 + 32);
          *(float *)&v55 = _mm_shuffle_ps(*(__m128 *)&v79.m256i_u64[2], *(__m128 *)&v79.m256i_u64[2], 85).m128_f32[0]
                         + *(float *)(a1 + 724);
          *(float *)&v56 = *(float *)&v79.m256i_i32[4] + *(float *)(a1 + 720);
          v79.m256i_i64[3] = COERCE_UNSIGNED_INT(
                               _mm_shuffle_ps(*(__m128 *)&v79.m256i_u64[2], *(__m128 *)&v79.m256i_u64[2], 170).m128_f32[0]
                             + *(float *)(a1 + 728))
                           | 0x3F80000000000000LL;
          v79.m256i_i64[2] = __PAIR64__(v55, v56);
          sub_14069BAC0(a1: a3, a2: a1 + 732, a3: (unsigned int)&xmmword_140EF3D80, a4: v54, a5: (__int64)&v77);
        }
      }
      if ( (*(_BYTE *)(a1 + 765) & 2) == 0 )
        goto LABEL_59;
      v57 = *(unsigned __int8 *)(a1 + 716);
      if ( *(_BYTE *)(a1 + 716) != 0 )
      {
        v57 = (unsigned int)(v57 - 1);
        if ( (_DWORD)v57 != 0 )
        {
          if ( (_DWORD)v57 == 1
            && (unsigned __int8)sub_140059AF0(a1: off_140F26720, a2: "Unknown snow deform shape kind") != 0 )
          {
            __debugbreak();
          }
          goto LABEL_59;
        }
        if ( *(float *)(a1 + 756) <= 0.0 )
        {
LABEL_59:
          if ( *(_QWORD *)&nExitCode != 0 )
          {
            v68 = *(unsigned __int8 *)(a1 + 764);
            LOBYTE(v68) = v68 & 2;
            if ( (_BYTE)v68 != 0 || (float)(*(float *)(a1 + 712) + 15.0) <= v23 )
            {
              if ( v23 > (float)(*(float *)(a1 + 712) + 30.0) && (_BYTE)v68 != 0 )
              {
                v70 = *(_QWORD *)a1;
                v71 = sub_140101B20(a1: v68);
                (*(void (__fastcall **)(__int64, __int64))(v70 + 208))(a1, a2: v71);
              }
            }
            else
            {
              v69 = sub_140101B20(a1: v68);
              sub_1400B64D0(a1, a2: v69);
            }
          }
          else
          {
            v72 = (_QWORD *)sub_140101670(a1);
            v74 = v72;
            if ( v72 != nullptr )
            {
              v75 = *v72;
              v76 = sub_140101B20(a1: v73);
              (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(v75 + 632))(a1: v74, a2: v22, a3: v76);
            }
          }
          if ( v23 <= *(float *)(a1 + 712) )
            sub_1400D6040(a1, a2, a3);
          return;
        }
      }
      else
      {
        v58 = *(float *)(a1 + 744);
        v59 = *(float *)(a1 + 732);
        if ( v58 < v59 )
          goto LABEL_59;
        v60 = *(float *)(a1 + 736);
        v61 = *(float *)(a1 + 748);
        if ( v61 < v60 )
          goto LABEL_59;
        v62 = *(float *)(a1 + 740);
        v63 = *(float *)(a1 + 752);
        if ( v63 < v62 || (float)(v58 - v59) == 0.0 && (float)(v61 - v60) == 0.0 && (float)(v63 - v62) == 0.0 )
          goto LABEL_59;
      }
      v64 = *(_DWORD *)(a1 + 756);
      v65 = *(_QWORD *)a1;
      v66 = sub_1400B5440(a1: v57, a2: v24);
      v67 = (*(__int64 (__fastcall **)(__int64, __int64))(v65 + 696))(a1, a2: v66);
      sub_14069FD30(a1: a3, a2: *(unsigned __int8 *)(a1 + 716), a3: v67, a4: a1 + 720, a5: a1 + 732, a6: v64);
      goto LABEL_59;
    }
  }
}
