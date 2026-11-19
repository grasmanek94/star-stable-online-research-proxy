__int64 __fastcall sub_1404DFD30(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rsi
  __int64 *v5; // r13
  __int64 v6; // r9
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rbx
  unsigned __int64 v14; // r8
  unsigned int v15; // ecx
  __int64 v16; // rdx
  __int64 *v17; // rax
  __int64 v18; // r14
  __int64 *v19; // rsi
  __int64 *v20; // r13
  int v21; // r12d
  unsigned __int64 v22; // xmm6_8
  __int64 v23; // r15
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdi
  int v27; // ebx
  __int64 v28; // rax
  __int64 v29; // rsi
  unsigned int v30; // edx
  __int64 *v31; // r12
  __int64 *v32; // r14
  int v33; // r15d
  unsigned __int64 v34; // xmm6_8
  __int64 v35; // rax
  __int64 v36; // rcx
  unsigned int v37; // edx
  __int64 v38; // rdi
  int v39; // ebx
  __int64 v40; // rax
  __int64 v41; // r15
  __int64 v42; // rax
  __int64 v43; // rdi
  __int64 v44; // r14
  int v45; // esi
  __int64 v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rsi
  _QWORD *v49; // r14
  _QWORD *v50; // rbx
  void *v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v55; // [rsp+28h] [rbp-D8h]
  int v56; // [rsp+30h] [rbp-D0h]
  int v57; // [rsp+34h] [rbp-CCh]
  char v58; // [rsp+38h] [rbp-C8h]
  __int128 v59; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v60; // [rsp+50h] [rbp-B0h]
  int v61; // [rsp+58h] [rbp-A8h]
  int v62; // [rsp+5Ch] [rbp-A4h]
  __int128 v63; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v64; // [rsp+70h] [rbp-90h]
  unsigned __int64 v65; // [rsp+78h] [rbp-88h]
  unsigned __int64 v66; // [rsp+80h] [rbp-80h]
  unsigned __int64 v67; // [rsp+90h] [rbp-70h]
  __int64 v68; // [rsp+A0h] [rbp-60h] BYREF
  int v69; // [rsp+A8h] [rbp-58h]
  int v70; // [rsp+ACh] [rbp-54h]
  __int64 v71; // [rsp+B0h] [rbp-50h] BYREF
  int v72; // [rsp+B8h] [rbp-48h]
  int v73; // [rsp+BCh] [rbp-44h]
  __int64 *v74; // [rsp+C0h] [rbp-40h]
  __int64 v75; // [rsp+C8h] [rbp-38h]
  __int64 v76; // [rsp+D0h] [rbp-30h] BYREF
  int v77; // [rsp+D8h] [rbp-28h]
  int v78; // [rsp+DCh] [rbp-24h]
  __int64 v79; // [rsp+E0h] [rbp-20h]
  __int64 v80; // [rsp+E8h] [rbp-18h]
  __int64 *v81; // [rsp+F0h] [rbp-10h]
  __int64 v82; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v84; // [rsp+168h] [rbp+68h]
  __int64 v85; // [rsp+170h] [rbp+70h]
  __int64 *v86; // [rsp+178h] [rbp+78h]

  v63 = 0;
  v64 = 0;
  if ( (unsigned __int8)sub_1404DD820(a1: a2, a2: &v63) != 0 )
  {
    __SET_PAIR__(v65, v4, v63);
    v85 = v63;
    if ( (_QWORD)v63 != *((_QWORD *)&v63 + 1) )
    {
      v5 = (__int64 *)(a1 + 264);
      v86 = (__int64 *)(a1 + 264);
      do
      {
        v6 = 0x555555555555555LL;
        v59 = 0;
        v60 = 0;
        v7 = *(_QWORD *)(v4 + 8) - *(_QWORD *)v4;
        v8 = v7 / 12;
        if ( v7 / 12 != 0 )
        {
          if ( v8 > 0x1555555555555555LL )
            sub_14001B6A0(a1: v7, a2: v8, a3: 0x1555555555555555LL, a4: 0x555555555555555LL);
          v9 = 12 * v8;
          if ( 12 * v8 != 0 )
          {
            if ( v9 < 0x1000 )
            {
              v10 = sub_1409DB470(a1: 12 * v8);
            }
            else
            {
              v11 = v9 + 39;
              if ( v9 + 39 < v9 )
              {
                sub_14001B170(a1: v11, a2: v8, a3: 0x1555555555555555LL, a4: 0x555555555555555LL);
                __debugbreak();
              }
              v12 = sub_1409DB470(a1: v11);
              if ( v12 == 0 )
                __fastfail(5u);
              v10 = (v12 + 39) & 0xFFFFFFFFFFFFFFE0uLL;
              *(_QWORD *)(v10 - 8) = v12;
            }
          }
          else
          {
            v10 = 0;
          }
          *(_QWORD *)&v59 = v10;
          *((_QWORD *)&v59 + 1) = v10;
          v60 = v9 + v10;
          v13 = *(_QWORD *)(v4 + 8) - *(_QWORD *)v4;
          sub_140E82100(a1: v10, a2: *(_QWORD *)v4, a3: v13);
          v14 = v10 + 12 * (v13 / 12);
          *((_QWORD *)&v59 + 1) = v14;
          v6 = 0x555555555555555LL;
        }
        else
        {
          v14 = *((_QWORD *)&v59 + 1);
        }
        v84 = v14;
        v15 = *(_DWORD *)(v4 + 24);
        v61 = v15;
        v62 = *(_DWORD *)(v4 + 28);
        v16 = *v5;
        v17 = *(__int64 **)(*v5 + 8);
        v18 = *v5;
        while ( *((_BYTE *)v17 + 25) == 0 )
        {
          if ( *((_DWORD *)v17 + 8) >= v15 )
          {
            v18 = (__int64)v17;
            v17 = (__int64 *)*v17;
          }
          else
          {
            v17 = (__int64 *)v17[2];
          }
        }
        if ( *(_BYTE *)(v18 + 25) != 0 || v15 < *(_DWORD *)(v18 + 32) || v18 == v16 )
        {
          v54 = 0;
          v55 = 0;
          v29 = sub_1409DB470(a1: 48);
          *(_QWORD *)v29 = v29;
          *(_QWORD *)(v29 + 8) = v29;
          *(_QWORD *)(v29 + 16) = v29;
          *(_WORD *)(v29 + 24) = 257;
          v54 = v29;
          v58 &= ~1u;
          v30 = v61;
          v56 = v61;
          v57 = v62;
          v31 = *((__int64 **)&v59 + 1);
          v32 = (__int64 *)v59;
          if ( (_QWORD)v59 != *((_QWORD *)&v59 + 1) )
          {
            while ( 1 )
            {
              v67 = *v32;
              v33 = *((_DWORD *)v32 + 2);
              v34 = v67;
              v35 = *(_QWORD *)(v29 + 8);
              v36 = v29;
              v37 = _mm_cvtsi128_si32((__m128i)v67);
              if ( *(_BYTE *)(v35 + 25) != 0 )
              {
                v39 = 0;
                v38 = *(_QWORD *)(v29 + 8);
              }
              else
              {
                do
                {
                  v38 = v35;
                  if ( *(_DWORD *)(v35 + 28) >= v37 )
                  {
                    v39 = 1;
                    v36 = v35;
                    v35 = *(_QWORD *)v35;
                  }
                  else
                  {
                    v39 = 0;
                    v35 = *(_QWORD *)(v35 + 16);
                  }
                }
                while ( *(_BYTE *)(v35 + 25) == 0 );
              }
              if ( *(_BYTE *)(v36 + 25) != 0 || v37 < *(_DWORD *)(v36 + 28) )
              {
                if ( v55 == 0x555555555555555LL )
                  ((void (__noreturn *)(void))sub_14005A5D0)();
                v81 = &v54;
                v82 = 0;
                v40 = sub_1409DB470(a1: 48);
                *(_DWORD *)(v40 + 28) = v67;
                *(_QWORD *)(v40 + 32) = 0;
                *(_DWORD *)(v40 + 40) = 0;
                *(_QWORD *)v40 = v29;
                *(_QWORD *)(v40 + 8) = v29;
                *(_QWORD *)(v40 + 16) = v29;
                *(_WORD *)(v40 + 24) = 0;
                v82 = 0;
                v71 = v38;
                v72 = v39;
                v73 = HIDWORD(v63);
                v36 = sub_14005A200(a1: &v54, a2: &v71, a3: v40);
              }
              *(_QWORD *)(v36 + 32) = v34;
              *(_DWORD *)(v36 + 40) = v33;
              v32 = (__int64 *)((char *)v32 + 12);
              if ( v32 == v31 )
                break;
              v29 = v54;
            }
            v30 = v61;
          }
          v41 = *v5;
          v42 = *(_QWORD *)(*v5 + 8);
          v43 = *v5;
          if ( *(_BYTE *)(v42 + 25) != 0 )
          {
            v45 = 0;
            v44 = *(_QWORD *)(*v5 + 8);
          }
          else
          {
            do
            {
              v44 = v42;
              if ( *(_DWORD *)(v42 + 32) >= v30 )
              {
                v45 = 1;
                v43 = v42;
                v42 = *(_QWORD *)v42;
              }
              else
              {
                v45 = 0;
                v42 = *(_QWORD *)(v42 + 16);
              }
            }
            while ( *(_BYTE *)(v42 + 25) == 0 );
          }
          if ( *(_BYTE *)(v43 + 25) != 0 || v30 < *(_DWORD *)(v43 + 32) )
          {
            if ( *(_QWORD *)(a1 + 272) == 0x38E38E38E38E38ELL )
              ((void (__noreturn *)(void))sub_14005A5D0)();
            v74 = v5;
            v75 = 0;
            v46 = sub_1409DB470(a1: 72);
            v75 = v46;
            *(_DWORD *)(v46 + 32) = v61;
            *(_QWORD *)(v46 + 56) = 0;
            *(_QWORD *)(v46 + 64) = 0;
            *(_QWORD *)(v46 + 40) = 0;
            *(_QWORD *)(v46 + 48) = 0;
            v47 = sub_1409DB470(a1: 48);
            *(_QWORD *)v47 = v47;
            *(_QWORD *)(v47 + 8) = v47;
            *(_QWORD *)(v47 + 16) = v47;
            *(_WORD *)(v47 + 24) = 257;
            *(_QWORD *)(v46 + 40) = v47;
            *(_QWORD *)(v46 + 56) = 0;
            *(_BYTE *)(v46 + 64) &= ~1u;
            *(_QWORD *)v46 = v41;
            *(_QWORD *)(v46 + 8) = v41;
            *(_QWORD *)(v46 + 16) = v41;
            *(_WORD *)(v46 + 24) = 0;
            v75 = 0;
            v76 = v44;
            v77 = v45;
            v78 = HIDWORD(v63);
            v43 = sub_14005A200(a1: v5, a2: &v76, a3: v46);
          }
          v48 = v43 + 40;
          if ( (__int64 *)(v43 + 40) != &v54 )
          {
            v49 = *(_QWORD **)v48;
            v50 = *(_QWORD **)(*(_QWORD *)v48 + 8LL);
            while ( *((_BYTE *)v50 + 25) == 0 )
            {
              sub_14005AA60(a1: v43 + 40, a2: v43 + 40, a3: v50[2]);
              v51 = v50;
              v50 = (_QWORD *)*v50;
              sub_1409DB4C0(lpMem: v51);
            }
            v49[1] = v49;
            *v49 = v49;
            v49[2] = v49;
            *(_QWORD *)(v43 + 48) = 0;
            v52 = *(_QWORD *)v48;
            *(_QWORD *)v48 = v54;
            v54 = v52;
            v53 = *(_QWORD *)(v43 + 48);
            *(_QWORD *)(v43 + 48) = v55;
            v55 = v53;
          }
          *(_DWORD *)(v43 + 56) = v56;
          *(_DWORD *)(v43 + 60) = v57;
          *(_BYTE *)(v43 + 64) = *(_BYTE *)(v43 + 64) & 0xFE | v58 & 1;
          sub_1402B90E0(a1: &v54, a2: &v54);
        }
        else
        {
          v19 = (__int64 *)v59;
          if ( (_QWORD)v59 != v14 )
          {
            v20 = (__int64 *)(v18 + 40);
            do
            {
              v66 = *v19;
              v21 = *((_DWORD *)v19 + 2);
              v22 = v66;
              v23 = *v20;
              v24 = *(_QWORD *)(*v20 + 8);
              v25 = *v20;
              v16 = (unsigned int)_mm_cvtsi128_si32((__m128i)v66);
              if ( *(_BYTE *)(v24 + 25) != 0 )
              {
                v27 = 0;
                v26 = *(_QWORD *)(*v20 + 8);
              }
              else
              {
                do
                {
                  v26 = v24;
                  if ( *(_DWORD *)(v24 + 28) >= (unsigned int)v16 )
                  {
                    v27 = 1;
                    v25 = v24;
                    v24 = *(_QWORD *)v24;
                  }
                  else
                  {
                    v27 = 0;
                    v24 = *(_QWORD *)(v24 + 16);
                  }
                }
                while ( *(_BYTE *)(v24 + 25) == 0 );
              }
              if ( *(_BYTE *)(v25 + 25) != 0 || (unsigned int)v16 < *(_DWORD *)(v25 + 28) )
              {
                if ( *(_QWORD *)(v18 + 48) == 0x555555555555555LL )
                  sub_14005A5D0(a1: v25, a2: v16, a3: v14, a4: 0x555555555555555LL);
                v79 = v18 + 40;
                v80 = 0;
                v28 = sub_1409DB470(a1: 48);
                *(_DWORD *)(v28 + 28) = v66;
                *(_QWORD *)(v28 + 32) = 0;
                *(_DWORD *)(v28 + 40) = 0;
                *(_QWORD *)v28 = v23;
                *(_QWORD *)(v28 + 8) = v23;
                *(_QWORD *)(v28 + 16) = v23;
                *(_WORD *)(v28 + 24) = 0;
                v80 = 0;
                v68 = v26;
                v69 = v27;
                v70 = HIDWORD(v63);
                v25 = sub_14005A200(a1: v18 + 40, a2: &v68, a3: v28);
                v14 = v84;
              }
              *(_QWORD *)(v25 + 32) = v22;
              *(_DWORD *)(v25 + 40) = v21;
              v19 = (__int64 *)((char *)v19 + 12);
              v6 = 0x555555555555555LL;
            }
            while ( v19 != (__int64 *)v14 );
            v5 = v86;
          }
        }
        sub_1400C3310(a1: &v59, a2: v16, a3: v14, a4: v6);
        v4 = v85 + 32;
        v85 = v4;
      }
      while ( v4 != v65 );
    }
  }
  else if ( (unsigned __int8)sub_140059D90(
                               a1: off_140FB1708,
                               a2: "RewardManager::FetchPledgesReponse Failed to deserialize PledgingFetchPledgeMessageResponse!") != 0 )
  {
    __debugbreak();
  }
  return sub_1404DF4F0(a1: &v63);
}