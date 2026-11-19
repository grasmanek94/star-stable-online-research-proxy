// Hex-Rays export, baseline 645.348067; descriptive analysis label.
__int64 __fastcall sub_140235E40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 *v7; // rax
  int v8; // xmm1_4
  __int64 v9; // r9
  __int64 v10; // xmm0_8
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  float v18; // xmm0_4
  float v19; // xmm6_4
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // r9d
  __int64 v25; // r14
  unsigned int i; // ebx
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned int v29; // ebx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int128 v32; // [rsp+80h] [rbp-9h] BYREF
  __int128 v33; // [rsp+90h] [rbp+7h] BYREF
  int v34; // [rsp+F0h] [rbp+67h] BYREF

  result = sub_1405F8CF0(a1: (__int64)&off_141300248);
  if ( (*(_BYTE *)(a1 + 144) & 0x40) != 0 )
  {
    if ( result != a1 )
    {
      sub_1405F8B50(a1: &v33, a2: a1 + 120);
      if ( (unsigned __int8)sub_1405F8D80(a1: &v33, a2: 83) != 0 )
      {
        sub_1405F8B70(a1: &v32, a2: HIDWORD(v33), a3: DWORD2(v33));
        result = HIDWORD(v32);
        qword_141300250 = *((_QWORD *)&v32 + 1);
      }
      else
      {
        result = 195948557;
        qword_141300250 = 0xBADF00D00000000LL;
      }
    }
  }
  else if ( result == a1 )
  {
    result = sub_1405F8DC0(a1: &off_141300248);
  }
  if ( (*(_BYTE *)(a1 + 144) & 0x40) != 0 )
  {
    if ( !sub_1400CF220(a1) )
      return sub_1400B3390(a1, a2, a3);
    if ( *(_BYTE *)(a1 + 5640) != 0 )
    {
      v7 = (__int64 *)sub_1400CC630(a1);
      v8 = *(_DWORD *)(a3 + 328);
      LOBYTE(v9) = 1;
      v10 = *v7;
      v11 = *(_QWORD *)a1;
      *(_QWORD *)&v32 = v10;
      LODWORD(v32) = *(_DWORD *)(a3 + 320);
      DWORD2(v32) = v8;
      (*(void (__fastcall **)(__int64, __int128 *, __int64, __int64))(v11 + 680))(a1, a2: &v32, a3: 1, a4: v9);
    }
    *(_BYTE *)(a3 + 380) = *(_BYTE *)(a1 + 5641);
    *(_BYTE *)(a3 + 381) = *(_DWORD *)(a1 + 288) != 0;
    if ( *(_BYTE *)(a1 + 5641) != 0 )
    {
      v32 = 0;
      sub_14008FD90(a1: &v32, a2: a1 + 312, a3: a1 + 336);
      v33 = v32;
      sub_1406A49F0(a1: a3, a2: v12, a3: v13, a4: &v33);
    }
    v14 = sub_1406214C0(a1: a2);
    v15 = sub_1406288D0(a1: v14);
    v16 = sub_1405D2000(a1: v15);
    if ( v16 != 0 )
      sub_14011B280(a1: v16);
    *(_OWORD *)(a3 + 384) = *(_OWORD *)(a1 + 224);
    v17 = sub_1405F8CF0(a1: a1 + 192);
    if ( *(_BYTE *)(a1 + 5642) != 0 && v17 != 0 )
    {
      sub_140182300(a1: v17);
    }
    else
    {
      if ( *(float *)(a1 + 156) <= 0.0 )
      {
LABEL_23:
        sub_1402389E0(a1);
        v20 = *(_QWORD *)a1;
        v23 = sub_1400B5440(a1: v22, a2: v21);
        v25 = (*(__int64 (__fastcall **)(__int64, __int64))(v20 + 696))(a1, a2: v23);
        v34 = 1161527296;
        if ( *(_BYTE *)(a1 + 5644) != 0 )
        {
          for ( i = 0; i < 4; ++i )
          {
            v27 = 456LL * i;
            v28 = *(_QWORD *)(a1 + v27 + 1776);
            if ( v28 != 0 && *(float *)(a1 + v27 + 2216) > 0.0 )
            {
              LOBYTE(v24) = 5;
              sub_14069C5F0(
                a1: a3,
                a2: v27 + a1 + 1824,
                a3: 322,
                a4: v24,
                a5: 13,
                a6: v25,
                a7: v28,
                a8: (__int64)&v34,
                a9: 0,
                a10: 1065353216,
                a11: 0,
                a12: 0,
                a13: -1,
                a14: 1,
                a15: 0);
            }
          }
        }
        v29 = 0;
        v34 = 1163575296;
        do
        {
          v30 = 152LL * v29;
          v31 = *(_QWORD *)(a1 + v30 + 440);
          if ( v31 != 0 )
          {
            LOBYTE(v24) = 5;
            sub_14069C5F0(
              a1: a3,
              a2: v30 + a1 + 488,
              a3: 322,
              a4: v24,
              a5: 2,
              a6: v25,
              a7: v31,
              a8: (__int64)&v34,
              a9: 0,
              a10: 1065353216,
              a11: 0,
              a12: 0,
              a13: -1,
              a14: 1,
              a15: 0);
          }
          ++v29;
        }
        while ( v29 < 6 );
        return sub_1400B3390(a1, a2, a3);
      }
      v19 = *(float *)(a1 + 156);
      v18 = (float)(sub_1400B4560(a1) * v19) + *(float *)(a1 + 152);
    }
    *(float *)(a1 + 152) = v18;
    if ( v18 > 24.0 )
      *(_DWORD *)(a1 + 152) = 0;
    goto LABEL_23;
  }
  return result;
}