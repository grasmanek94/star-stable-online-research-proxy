// Baseline 645.348067; IDA base 0x140000000. Exported through Official IDA MCP.
char __fastcall sub_14036D600(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rax
  unsigned __int8 v7; // r12
  float v8; // xmm11_4
  __int64 v9; // rdx
  __int64 v10; // rcx
  double v11; // xmm0_8
  float v12; // xmm12_4
  __int64 v13; // rbx
  __int64 v14; // rax
  __m128 *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  __m128 v20; // xmm5
  __m128 v21; // xmm4
  __m128 v22; // xmm7
  __m128 v23; // xmm10
  __int64 v24; // rcx
  char v25; // al
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // r12
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rsi
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rax
  _QWORD *v38; // rsi
  char v39; // bl
  __int64 v40; // rcx
  _QWORD *v41; // rsi
  __int64 v42; // rbx
  __int64 v43; // rax
  _DWORD v45[4]; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD v46[4]; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v47; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v48; // [rsp+78h] [rbp-90h]
  __int128 v49; // [rsp+88h] [rbp-80h]
  __int128 v50; // [rsp+98h] [rbp-70h]
  __m128 v51; // [rsp+A8h] [rbp-60h] BYREF
  __m128 v52; // [rsp+B8h] [rbp-50h]
  __m128 v53; // [rsp+C8h] [rbp-40h]
  __m128 v54; // [rsp+D8h] [rbp-30h]
  _QWORD v55[2]; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v56; // [rsp+F8h] [rbp-10h]
  float v57; // [rsp+108h] [rbp+0h]
  __int128 v58; // [rsp+110h] [rbp+8h]
  _UNKNOWN *retaddr; // [rsp+1C0h] [rbp+B8h] BYREF

  v3 = &retaddr;
  if ( (*(_BYTE *)(a1 + 144) & 0x40) == 0 )
    return (char)v3;
  if ( *(char *)(a1 + 145) < 0 )
  {
LABEL_41:
    LOBYTE(v3) = sub_1400D6040(a1, a2, a3);
    return (char)v3;
  }
  v7 = 0;
  v8 = sub_1400B3260(a1, a2: a3);
  if ( sub_1400CF220(a1) )
  {
    v11 = (*(double (__fastcall **)(__int64))(*(_QWORD *)a1 + 720LL))(a1);
    v12 = *(float *)&v11;
    if ( *(float *)&v11 > 0.0 && v8 < 60.0 )
    {
      if ( v8 > 56.0 )
        v12 = *(float *)&v11 * (float)((float)(60.0 - v8) * 0.25);
      if ( *(_QWORD *)(a1 + 248) != 0 )
      {
        v13 = *(_QWORD *)a1;
        v14 = sub_1400B5440(a1: v10, a2: v9);
        v15 = (__m128 *)(*(__int64 (__fastcall **)(__int64, __int64))(v13 + 696))(a1, a2: v14);
        v51 = *v15;
        v52 = v15[1];
        v53 = v15[2];
        v54 = v15[3];
        if ( *(_BYTE *)(a1 + 451) != 0 )
        {
          sub_1400B50C0(a1);
          v47 = 0;
          v48 = 0;
          v54.m128_f32[1] = v54.m128_f32[1] + (float)(sub_140A003B0(a1: v19) * 0.1);
          v49 = 0;
          v50 = 0;
          sub_14009D650(a1: &v47);
          v20 = _mm_add_ps(
                  _mm_add_ps(
                    _mm_add_ps(
                      _mm_mul_ps(v51, _mm_shuffle_ps((__m128)(unsigned int)v48, (__m128)(unsigned int)v48, 0)),
                      _mm_mul_ps(v52, _mm_shuffle_ps((__m128)DWORD1(v48), (__m128)DWORD1(v48), 0))),
                    _mm_mul_ps(v53, _mm_shuffle_ps((__m128)DWORD2(v48), (__m128)DWORD2(v48), 0))),
                  _mm_mul_ps(v54, _mm_shuffle_ps((__m128)HIDWORD(v48), (__m128)HIDWORD(v48), 0)));
          v21 = _mm_add_ps(
                  _mm_add_ps(
                    _mm_add_ps(
                      _mm_mul_ps(v51, _mm_shuffle_ps((__m128)(unsigned int)v49, (__m128)(unsigned int)v49, 0)),
                      _mm_mul_ps(v52, _mm_shuffle_ps((__m128)DWORD1(v49), (__m128)DWORD1(v49), 0))),
                    _mm_mul_ps(v53, _mm_shuffle_ps((__m128)DWORD2(v49), (__m128)DWORD2(v49), 0))),
                  _mm_mul_ps(v54, _mm_shuffle_ps((__m128)HIDWORD(v49), (__m128)HIDWORD(v49), 0)));
          v22 = _mm_mul_ps(v53, _mm_shuffle_ps((__m128)DWORD2(v50), (__m128)DWORD2(v50), 0));
          v23 = _mm_add_ps(
                  _mm_mul_ps(v51, _mm_shuffle_ps((__m128)(unsigned int)v50, (__m128)(unsigned int)v50, 0)),
                  _mm_mul_ps(v52, _mm_shuffle_ps((__m128)DWORD1(v50), (__m128)DWORD1(v50), 0)));
          v51 = _mm_add_ps(
                  _mm_add_ps(
                    _mm_add_ps(
                      _mm_mul_ps(v51, _mm_shuffle_ps((__m128)(unsigned int)v47, (__m128)(unsigned int)v47, 0)),
                      _mm_mul_ps(v52, _mm_shuffle_ps((__m128)DWORD1(v47), (__m128)DWORD1(v47), 0))),
                    _mm_mul_ps(v53, _mm_shuffle_ps((__m128)DWORD2(v47), (__m128)DWORD2(v47), 0))),
                  _mm_mul_ps(v54, _mm_shuffle_ps((__m128)HIDWORD(v47), (__m128)HIDWORD(v47), 0)));
          v52 = v20;
          v53 = v21;
          v54 = _mm_add_ps(
                  _mm_add_ps(v23, v22),
                  _mm_mul_ps(v54, _mm_shuffle_ps((__m128)HIDWORD(v50), (__m128)HIDWORD(v50), 0)));
        }
        v55[0] = *(_QWORD *)(a1 + 248);
        if ( v55[0] == 0 )
          sub_14005A4C0(a1: v17, a2: v16, a3: v18);
        v57 = v12;
        v55[1] = &v51;
        v56 = 0;
        v58 = 0;
        sub_14069EBC0(a1: a3, a2: v55);
      }
      v7 = *(_BYTE *)(a1 + 300);
    }
  }
  if ( sub_1406214A0(a1: a2) != 0 )
  {
    sub_1406214A0(a1: a2);
    v25 = *(_BYTE *)(a1 + 308);
    if ( v25 != 0 || v8 >= 75.0 )
    {
      if ( v8 > 90.0 && v25 != 0 )
      {
        v35 = *(_QWORD *)a1;
        v36 = sub_140101B20(a1: v24);
        (*(void (__fastcall **)(__int64, __int64))(v35 + 208))(a1, a2: v36);
        *(_BYTE *)(a1 + 308) = 0;
        v37 = sub_1405F8CF0(a1: a1 + 312);
        if ( v37 != 0 )
          sub_1400B56D0(a1: v37);
      }
      goto LABEL_33;
    }
    v26 = sub_140101B20(a1: v24);
    sub_1400B64D0(a1, a2: v26);
    *(_BYTE *)(a1 + 308) = 1;
    if ( (unsigned __int8)sub_1405F8C30(a1: a1 + 312) == 0 && *(_BYTE *)(a1 + 448) == 0 )
    {
      v27 = sub_1405F8CF0(a1: a1 + 352);
      v28 = sub_1405F8CF0(a1: (__int64)&off_141300E60);
      if ( v27 != 0 && *(_BYTE *)(a1 + 449) != 0 )
      {
        v29 = qword_141379EF0;
        v30 = sub_1400B24E0(a1: v27, a2: a1, a3: 1, a4: 1, a5: 0, a6: -1, a7: 0);
        if ( v30 != 0 )
        {
          sub_1405F8B50(a1: v45, a2: v30 + 120);
          v31 = v29;
LABEL_26:
          if ( (unsigned __int8)sub_140607410(a1: v31, a2: v45, a3: 1) != 0 )
          {
            sub_1405F8B70(a1: v46, a2: v45[3], a3: v45[2]);
            v34 = v46[3];
            *(_DWORD *)(a1 + 320) = v46[2];
            *(_DWORD *)(a1 + 324) = v34;
            goto LABEL_33;
          }
        }
LABEL_28:
        *(_DWORD *)(a1 + 320) = 0;
        *(_DWORD *)(a1 + 324) = 195948557;
        goto LABEL_33;
      }
      if ( v28 != 0 )
      {
        v32 = qword_141379EF0;
        v33 = sub_1400B24E0(a1: v28, a2: a1, a3: 1, a4: 1, a5: 0, a6: -1, a7: 0);
        if ( v33 == 0 )
          goto LABEL_28;
        sub_1405F8B50(a1: v45, a2: v33 + 120);
        v31 = v32;
        goto LABEL_26;
      }
    }
LABEL_33:
    v3 = (_QWORD *)sub_1405F8CF0(a1: a1 + 312);
    v38 = v3;
    if ( v3 != nullptr )
    {
      v39 = sub_1400CF220(a1: (__int64)v3);
      LOBYTE(v3) = sub_1400CF220(a1);
      if ( v39 != (_BYTE)v3 )
      {
        if ( sub_1400CF220(a1) )
          LOBYTE(v3) = sub_1400C9130(a1: v38);
        else
          LOBYTE(v3) = sub_1400C9170(a1: v38);
      }
    }
    goto LABEL_40;
  }
  v3 = (_QWORD *)sub_140101670(a1);
  v41 = v3;
  if ( v3 != nullptr )
  {
    v42 = *v3;
    v43 = sub_140101B20(a1: v40);
    LOBYTE(v3) = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64))(v42 + 632))(a1: v41, a2: v7, a3: v43);
  }
LABEL_40:
  if ( v8 <= 60.0 )
    goto LABEL_41;
  return (char)v3;
}
