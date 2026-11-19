__int64 __fastcall sub_140E6C020(unsigned __int8 *a1, _OWORD *a2, int a3, int a4)
{
  _OWORD *v4; // r14
  unsigned __int8 *v5; // r10
  _OWORD *v6; // rdi
  unsigned __int8 *v8; // r15
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  unsigned __int8 *v12; // rdx
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // r12
  unsigned int v17; // esi
  unsigned __int64 v18; // rbx
  __int64 v19; // rbx
  __int64 v20; // rcx
  unsigned __int64 v21; // r9
  unsigned __int8 *v22; // rax
  __int128 v23; // xmm0
  unsigned __int8 *v24; // r10
  __int128 v25; // xmm0
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rcx
  __int64 v28; // rsi
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // r8
  __int64 v31; // r11
  __int64 v32; // rdx
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // r11
  char *v35; // r9
  __int64 v36; // rdx
  _DWORD *v37; // rdx
  __int64 *v38; // rdx
  char *v39; // rcx
  __int64 v40; // rax
  char *v41; // rdi
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rax
  __int128 v44; // xmm0
  unsigned __int64 v45; // rbx
  __int128 v46; // xmm0
  unsigned __int8 *v47; // r10
  __int64 v48; // rdx
  __int64 v49; // r8
  unsigned __int64 v50; // rbx
  __int64 v51; // rdx
  __int64 v52; // rcx
  unsigned __int8 *v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // r11
  __int64 v57; // r9
  __int64 v58; // rdx
  unsigned __int64 v59; // r8
  _DWORD *v60; // rcx
  char *v61; // rcx
  __int64 v62; // rax
  _QWORD *v63; // rdx
  unsigned __int64 v64; // r11
  _QWORD *v65; // rdi
  __int64 *v66; // r9
  __int64 v67; // rax
  unsigned __int64 v68; // rax
  char v69; // al
  _QWORD *v70; // rdi
  __int64 *v71; // rcx
  __int64 v72; // rax
  unsigned __int64 v73; // [rsp+20h] [rbp-68h]
  unsigned __int8 *v74; // [rsp+28h] [rbp-60h]
  unsigned __int64 v75; // [rsp+30h] [rbp-58h]
  unsigned __int8 *v76; // [rsp+38h] [rbp-50h]
  unsigned __int64 v77; // [rsp+40h] [rbp-48h]
  int v78; // [rsp+90h] [rbp+8h]

  v78 = (int)a1;
  v4 = a2;
  if ( a1 != nullptr && a4 >= 0 )
  {
    v5 = a1;
    v6 = a2;
    if ( a4 == 0 )
    {
      if ( a3 == 1 && *a1 == 0 )
        return 0;
    }
    else if ( a3 != 0 )
    {
      v8 = &a1[a3];
      v9 = (unsigned __int64)a2 + a4;
      v74 = v8;
      v77 = v9;
      v10 = (unsigned __int64)(v8 - 16);
      v11 = v9 - 32;
      v75 = v9 - 32;
      if ( (__int64)(v9 - (_QWORD)v4) < 64 )
        goto LABEL_58;
      v12 = v8 - 32;
      v13 = (unsigned __int64)(v8 - 15);
      v76 = v8 - 32;
      v14 = (unsigned __int64)(v8 - 17);
      v15 = (unsigned __int64)(v8 - 4);
      v16 = v9 - 64;
      while ( 1 )
      {
        while ( 1 )
        {
          v17 = *v5++;
          v18 = (unsigned __int64)v17 >> 4;
          if ( v18 == 15 )
          {
            if ( (unsigned __int64)v5 >= v13 )
              return (unsigned int)(v78 - (_DWORD)v5 - 1);
            v19 = 0;
            do
            {
              v20 = *v5++;
              if ( (unsigned __int64)v5 > v13 )
                return (unsigned int)(v78 - (_DWORD)v5 - 1);
              v19 += v20;
            }
            while ( (_BYTE)v20 == 0xFF );
            if ( v19 == -1 )
              return (unsigned int)(v78 - (_DWORD)v5 - 1);
            v21 = (unsigned __int64)v6 + v19 + 15;
            if ( v21 < (unsigned __int64)v6 )
              return (unsigned int)(v78 - (_DWORD)v5 - 1);
            v18 = v19 + 15;
            v22 = &v5[v18];
            if ( &v5[v18] < v5 )
              return (unsigned int)(v78 - (_DWORD)v5 - 1);
            if ( v21 > v11 || v22 > v12 )
            {
LABEL_72:
              v4 = a2;
              v8 = v74;
              goto LABEL_73;
            }
            do
            {
              v23 = *(_OWORD *)v5;
              v5 += 32;
              *v6 = v23;
              v6[1] = *((_OWORD *)v5 - 1);
              v6 += 2;
            }
            while ( (unsigned __int64)v6 < v21 );
            v24 = v22;
          }
          else
          {
            v21 = (unsigned __int64)v6 + v18;
            if ( (unsigned __int64)v5 > v14 )
              goto LABEL_72;
            v25 = *(_OWORD *)v5;
            v24 = &v5[v18];
            *v6 = v25;
          }
          v26 = *(unsigned __int16 *)v24;
          v27 = v21 - v26;
          v5 = v24 + 2;
          v28 = v17 & 0xF;
          v29 = v21;
          v30 = v21;
          if ( v28 != 15 )
            break;
          v31 = 0;
          do
          {
            v32 = *v5++;
            if ( (unsigned __int64)v5 > v15 )
              return (unsigned int)(v78 - (_DWORD)v5 - 1);
            v31 += v32;
          }
          while ( (_BYTE)v32 == 0xFF );
          if ( v31 == -1 )
            return (unsigned int)(v78 - (_DWORD)v5 - 1);
          v33 = v21 + v31 + 19;
          if ( v33 < v21 || v27 < (unsigned __int64)a2 )
            return (unsigned int)(v78 - (_DWORD)v5 - 1);
          v34 = v31 + 19;
          if ( v33 >= v16 )
            goto LABEL_84;
LABEL_33:
          v35 = (char *)(v34 + v21);
          if ( (unsigned int)v26 >= 0x10 )
          {
            do
            {
              v44 = *(_OWORD *)v27;
              v27 += 32LL;
              *(_OWORD *)v29 = v44;
              *(_OWORD *)(v29 + 16) = *(_OWORD *)(v27 - 16);
              v29 += 32LL;
            }
            while ( v29 < (unsigned __int64)v35 );
            goto LABEL_57;
          }
          switch ( v26 )
          {
            case 1uLL:
              LOBYTE(v73) = *(_BYTE *)v27;
              BYTE1(v73) = *(_BYTE *)v27;
              BYTE2(v73) = *(_BYTE *)v27;
              BYTE3(v73) = *(_BYTE *)v27;
              BYTE4(v73) = *(_BYTE *)v27;
              BYTE5(v73) = *(_BYTE *)v27;
              BYTE6(v73) = *(_BYTE *)v27;
              HIBYTE(v73) = *(_BYTE *)v27;
              goto LABEL_50;
            case 2uLL:
              LOWORD(v73) = *(_WORD *)v27;
              WORD1(v73) = *(_WORD *)v27;
              HIDWORD(v73) = v73;
              goto LABEL_50;
            case 4uLL:
              LODWORD(v73) = *(_DWORD *)v27;
              HIDWORD(v73) = *(_DWORD *)v27;
LABEL_50:
              *(_QWORD *)v29 = v73;
              v41 = (char *)(v29 + 8);
              v42 = (unsigned __int64)(v35 - v41 + 7) >> 3;
              if ( v41 > v35 )
                v42 = 0;
              if ( v42 != 0 )
              {
                v43 = (v35 - v41 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
                if ( v41 > v35 )
                  v43 = 0;
                v12 = v76;
                v11 = v75;
                memset64(v41, v73, v43 / 8);
                v6 = v35;
              }
              else
              {
LABEL_57:
                v12 = v76;
                v6 = v35;
                v11 = v75;
              }
              break;
            default:
              if ( (unsigned int)v26 >= 8 )
              {
                v38 = (__int64 *)(v27 + 8);
                *(_QWORD *)v29 = *(_QWORD *)v27;
              }
              else
              {
                *(_DWORD *)v29 = 0;
                v36 = (unsigned int)dword_141199968[v26];
                *(_BYTE *)v29 = *(_BYTE *)v27;
                v37 = (_DWORD *)(v27 + v36);
                *(_BYTE *)(v29 + 1) = *(_BYTE *)(v27 + 1);
                *(_BYTE *)(v29 + 2) = *(_BYTE *)(v27 + 2);
                *(_BYTE *)(v29 + 3) = *(_BYTE *)(v27 + 3);
                *(_DWORD *)(v29 + 4) = *v37;
                v38 = (__int64 *)((char *)v37 - dword_141199988[v26]);
              }
              v39 = (char *)(v30 + 8);
              do
              {
                v40 = *v38++;
                *(_QWORD *)v39 = v40;
                v39 += 8;
              }
              while ( v39 < v35 );
              v12 = v76;
              v6 = v35;
              v11 = v75;
              break;
          }
        }
        v34 = v28 + 4;
        if ( v21 + v28 + 4 >= v16 )
          break;
        if ( v27 < (unsigned __int64)a2 )
          return (unsigned int)(v78 - (_DWORD)v5 - 1);
        if ( (unsigned int)v26 < 8 )
          goto LABEL_33;
        v6 = (_OWORD *)(v21 + v28 + 4);
        v12 = v76;
        v11 = v75;
        *(_QWORD *)v21 = *(_QWORD *)v27;
        *(_QWORD *)(v21 + 8) = *(_QWORD *)(v27 + 8);
        *(_WORD *)(v21 + 16) = *(_WORD *)(v27 + 16);
      }
LABEL_84:
      v8 = v74;
      v4 = a2;
      while ( 1 )
      {
        if ( v27 < (unsigned __int64)v4 )
          return (unsigned int)(v78 - (_DWORD)v5 - 1);
        v59 = v34 + v29;
        if ( v26 >= 8 )
        {
          v62 = *(_QWORD *)v27;
          v61 = (char *)(v27 + 8);
          *(_QWORD *)v29 = v62;
        }
        else
        {
          *(_DWORD *)v29 = 0;
          *(_BYTE *)v29 = *(_BYTE *)v27;
          *(_BYTE *)(v29 + 1) = *(_BYTE *)(v27 + 1);
          *(_BYTE *)(v29 + 2) = *(_BYTE *)(v27 + 2);
          *(_BYTE *)(v29 + 3) = *(_BYTE *)(v27 + 3);
          v60 = (_DWORD *)((unsigned int)dword_141199968[v26] + v27);
          *(_DWORD *)(v29 + 4) = *v60;
          v61 = (char *)v60 - dword_141199988[v26];
        }
        v63 = (_QWORD *)(v29 + 8);
        if ( v59 <= v77 - 12 )
          break;
        if ( v59 > v77 - 5 )
          return (unsigned int)(v78 - (_DWORD)v5 - 1);
        v64 = v77 - 7;
        if ( (unsigned __int64)v63 < v77 - 7 )
        {
          v65 = (_QWORD *)(v29 + 8);
          v66 = (__int64 *)v61;
          do
          {
            v67 = *v66++;
            *v65++ = v67;
          }
          while ( (unsigned __int64)v65 < v64 );
          v68 = v64 - (_QWORD)v63;
          v63 = (_QWORD *)(v77 - 7);
          v61 += v68;
        }
        if ( (unsigned __int64)v63 >= v59 )
          goto LABEL_101;
        do
        {
          v69 = *v61++;
          *(_BYTE *)v63 = v69;
          v63 = (_QWORD *)((char *)v63 + 1);
        }
        while ( (unsigned __int64)v63 < v59 );
        v6 = (_OWORD *)v59;
        v10 = (unsigned __int64)(v8 - 16);
        v11 = v75;
LABEL_58:
        v45 = *v5++;
        LOBYTE(v17) = v45;
        v18 = v45 >> 4;
        if ( v18 == 15 )
        {
LABEL_64:
          if ( v5 < v8 - 15 )
          {
            v51 = 0;
            while ( 1 )
            {
              v52 = *v5++;
              if ( v5 > v8 - 15 )
                break;
              v51 += v52;
              if ( (_BYTE)v52 != 0xFF )
              {
                if ( v51 == -1 )
                  return (unsigned int)(v78 - (_DWORD)v5 - 1);
                v18 += v51;
                if ( (_OWORD *)((char *)v6 + v18) < v6 || &v5[v18] < v5 )
                  return (unsigned int)(v78 - (_DWORD)v5 - 1);
                goto LABEL_71;
              }
            }
          }
          return (unsigned int)(v78 - (_DWORD)v5 - 1);
        }
        while ( (unsigned __int64)v6 <= v11 && (unsigned __int64)v5 < v10 )
        {
          v46 = *(_OWORD *)v5;
          v47 = &v5[v18];
          v48 = v17 & 0xF;
          *v6 = v46;
          v29 = (unsigned __int64)v6 + v18;
          v49 = *(unsigned __int16 *)v47;
          v27 = v29 - v49;
          if ( v48 == 15 || (unsigned int)v49 < 8 || v27 < (unsigned __int64)v4 )
            goto LABEL_77;
          v11 = v75;
          *(_QWORD *)v29 = *(_QWORD *)v27;
          *(_QWORD *)(v29 + 8) = *(_QWORD *)(v27 + 8);
          *(_WORD *)(v29 + 16) = *(_WORD *)(v27 + 16);
          v6 = (_OWORD *)(v48 + 4 + v29);
          v50 = v47[2];
          v10 = (unsigned __int64)(v8 - 16);
          LOBYTE(v17) = v47[2];
          v5 = v47 + 3;
          v18 = v50 >> 4;
          if ( v18 == 15 )
            goto LABEL_64;
        }
LABEL_71:
        v21 = (unsigned __int64)v6 + v18;
LABEL_73:
        if ( v21 > v77 - 12 || (v53 = &v5[v18], &v5[v18] > v8 - 8) )
        {
          if ( &v5[v18] == v8 && v21 <= v77 )
          {
            sub_140E82100(a1: v6, a2: v5, a3: v18);
            return (unsigned int)((_DWORD)v6 + v18 - (_DWORD)v4);
          }
          return (unsigned int)(v78 - (_DWORD)v5 - 1);
        }
        do
        {
          v54 = *(_QWORD *)v5;
          v5 += 8;
          *(_QWORD *)v6 = v54;
          v6 = (_OWORD *)((char *)v6 + 8);
        }
        while ( (unsigned __int64)v6 < v21 );
        v55 = *(unsigned __int16 *)v53;
        v47 = v53;
        v29 = v21;
        v27 = v21 - v55;
        LOWORD(v49) = v55;
LABEL_77:
        v5 = v47 + 2;
        v56 = v17 & 0xF;
        if ( v56 == 15 )
        {
          v57 = 0;
          while ( 1 )
          {
            v58 = *v5++;
            if ( v5 > v8 - 4 )
              return (unsigned int)(v78 - (_DWORD)v5 - 1);
            v57 += v58;
            if ( (_BYTE)v58 != 0xFF )
            {
              if ( v57 == -1 )
                return (unsigned int)(v78 - (_DWORD)v5 - 1);
              v56 = v57 + 15;
              if ( v57 + 15 + v29 < v29 )
                return (unsigned int)(v78 - (_DWORD)v5 - 1);
              break;
            }
          }
        }
        v34 = v56 + 4;
        v26 = (unsigned __int16)v49;
      }
      *v63 = *(_QWORD *)v61;
      if ( v34 > 0x10 )
      {
        v70 = (_QWORD *)(v29 + 16);
        v71 = (__int64 *)(v61 + 8);
        do
        {
          v72 = *v71++;
          *v70++ = v72;
        }
        while ( (unsigned __int64)v70 < v59 );
      }
LABEL_101:
      v6 = (_OWORD *)v59;
      v10 = (unsigned __int64)(v8 - 16);
      v11 = v75;
      goto LABEL_58;
    }
    return 0xFFFFFFFFLL;
  }
  return 0xFFFFFFFFLL;
}