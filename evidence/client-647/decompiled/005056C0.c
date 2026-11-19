__int64 __fastcall sub_1405056C0(__int64 *a1, unsigned __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rdx
  unsigned int v8; // edx
  __int64 *v9; // r8
  __int64 *v10; // rax
  __int64 *v11; // rcx
  __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 **v16; // rax
  __int64 v17; // r14
  __int64 v18; // r8
  __int64 v19; // rdi
  char v20; // si
  int v21; // xmm7_4
  int v22; // ebx
  int v23; // eax
  int v24; // r8d
  unsigned __int8 v25; // al
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int8 v28; // al
  __int64 v29; // rax
  unsigned int v30; // eax
  __int64 v31; // rax
  unsigned int v32; // eax
  __int64 v33; // rax
  void *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  int *v41; // rax
  int v42; // eax
  _DWORD *v43; // rcx
  __int64 v44; // r8
  unsigned int *v45; // rdx
  unsigned int *v46; // rdx
  __int64 v47; // rsi
  __int64 v48; // r8
  __int64 v49; // r9
  unsigned int v50; // edx
  __int64 v51; // rbx
  __int64 v52; // rcx
  __int64 v53; // rax
  unsigned int v54; // r8d
  __int64 *v55; // rax
  __int64 *v56; // rcx
  __int64 *v57; // rdx
  __int64 v58; // r10
  __int64 v59; // r8
  unsigned int v60; // ecx
  __int64 v61; // rax
  __int64 v62; // rax
  unsigned __int8 v63; // al
  __int128 *v64; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v65[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v66; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v67; // [rsp+60h] [rbp-A8h]
  __int64 v68; // [rsp+68h] [rbp-A0h]
  __int128 v69; // [rsp+78h] [rbp-90h] BYREF
  __int64 v70; // [rsp+88h] [rbp-80h]
  unsigned __int64 v71; // [rsp+90h] [rbp-78h]
  __int16 v72; // [rsp+98h] [rbp-70h] BYREF
  char v73[24]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v74; // [rsp+B8h] [rbp-50h] BYREF
  char v75; // [rsp+C0h] [rbp-48h]
  __int64 v76; // [rsp+C8h] [rbp-40h]
  __int64 v77; // [rsp+D0h] [rbp-38h]
  _BYTE v78[21]; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v79[3]; // [rsp+EDh] [rbp-1Bh] BYREF

  if ( a3 > 0x566D1 )
  {
    switch ( a3 )
    {
      case 0x566D2u:
        v7 = *((unsigned __int8 *)a1 + 924);
        goto LABEL_24;
      case 0x566D3u:
        v14 = sub_1400895F0(a1: a4, a2: v78, a3: 0);
        *((_BYTE *)a1 + 924) = sub_14007FDC0(a1: v14, a2: 0);
        sub_1400778C0(a1: v78);
        v15 = sub_14005D330();
        v16 = (__int64 **)sub_1400895F0(a1: a4, a2: v78, a3: 1);
        v17 = **v16;
        if ( v17 != 0 && (unsigned __int8)sub_140645790(a1: **v16, a2: 269, a3: v15) != 0 )
        {
          sub_1400778C0(a1: v78);
          v18 = a1[52] - a1[51];
          if ( *((unsigned __int8 *)a1 + 924) >= (unsigned __int64)(v18 / 88) )
          {
            v66 = 0;
            v67 = 4;
            v68 = 15;
            strcpy((char *)&v66, "Idle");
            v65[1] = &v69;
            v69 = 0;
            v70 = 4;
            v71 = 15;
            strcpy((char *)&v69, "Idle");
            sub_1403EBEC0(a1: v17, a2: (unsigned int)&v69, a3: v18, a4: (unsigned int)&v66, a5: 0, a6: 0);
          }
          else
          {
            v19 = sub_140462AE0(a1: a1 + 51, a2: *((unsigned __int8 *)a1 + 924));
            v20 = *(_BYTE *)(v19 + 80);
            v21 = *(_DWORD *)(v19 + 76);
            v64 = &v69;
            v22 = sub_140016F80(a1: &v69, a2: v19 + 40);
            v23 = sub_140016F80(a1: &v66, a2: v19 + 8);
            sub_1403EBEC0(a1: v17, a2: v23, a3: v24, a4: v22, a5: v21, a6: v20);
          }
          return 1;
        }
        else
        {
          sub_1400778C0(a1: v78);
          return 1;
        }
      case 0x566D4u:
        if ( (unsigned __int8)sub_140508D60(a1) == 0
          && (unsigned __int8)sub_140059D90(a1: off_140FB8520, a2: "Failed to fetch status") != 0 )
        {
          __debugbreak();
        }
        return 1;
      case 0x566D5u:
        if ( (unsigned __int8)sub_140508E20(a1) == 0
          && (unsigned __int8)sub_140059D90(a1: off_140FB8600, a2: "Failed make submission") != 0 )
        {
          __debugbreak();
        }
        return 1;
      case 0x566D6u:
        sub_140508BC0(a1);
        if ( (unsigned __int8)sub_140508C90(a1) == 0
          && (unsigned __int8)sub_140059D90(a1: off_140FB8628, a2: "Failed to fetch submissions") != 0 )
        {
          __debugbreak();
        }
        return 1;
      case 0x566D7u:
        if ( (unsigned __int8)sub_140509150(a1) == 0
          && (unsigned __int8)sub_140059D90(a1: off_140FB8650, a2: "Failed to submit votes") != 0 )
        {
          __debugbreak();
        }
        return 1;
      case 0x566D8u:
        sub_140508860(a1);
        if ( qword_14138AA40 == 0 )
        {
          if ( (unsigned __int8)sub_140059CA0(a1: off_140F38D90) != 0 )
            __debugbreak();
          sub_1409E29B8(a1: 999);
          __debugbreak();
        }
        if ( (unsigned __int8)sub_140608600(a1: qword_14138AA40, a2: 12) == 0
          || *((_BYTE *)a1 + 240) != 0
          || *((_BYTE *)a1 + 216) == 8 )
        {
          goto LABEL_85;
        }
        *((_QWORD *)&v69 + 1) = 0;
        v70 = 0;
        LODWORD(v71) = 0;
        *(_QWORD *)&v69 = &PXEngine::ByteStreamWriter::`vftable';
        LOWORD(v66) = word_14131414C;
        sub_140A255B0(a1: (char *)&v66 + 8, a2: &v69);
        v72 = v66;
        sub_140A255B0(a1: v73, a2: (char *)&v66 + 8);
        v75 = 1;
        sub_140A25690(a1: (char *)&v66 + 8);
        sub_140A25690(a1: &v69);
        v28 = sub_1407EE6B0(a1: &v72);
        goto LABEL_53;
      case 0x566D9u:
        if ( (unsigned __int8)sub_140505110(a1: a1 + 27) == 0 )
          return 1;
        if ( a5 == sub_1405F1EE0(a1: (__int64)(a1 + 56)) )
        {
          if ( *((_BYTE *)a1 + 800) == 0 )
            return 1;
          v47 = sub_1405F1EE0(a1: (__int64)(a1 + 56));
          if ( v47 == 0 )
            return 1;
          LODWORD(v64) = 0;
          if ( *((_BYTE *)a1 + 800) == 0 )
LABEL_143:
            __fastfail(5u);
          v48 = a1[97];
          v49 = (a1[98] - v48) >> 4;
          if ( (_DWORD)v49 == 0 )
            return 1;
          v50 = 0;
          while ( 1 )
          {
            if ( v50 >= (unsigned __int64)((a1[98] - v48) >> 4) )
              goto LABEL_143;
            if ( *(_BYTE *)(v48 + 16LL * v50 + 12) != 0 )
              break;
            if ( ++v50 >= (unsigned int)v49 )
              goto LABEL_126;
          }
          LODWORD(v64) = v50;
        }
        else
        {
          if ( a5 != sub_1405F1EE0(a1: (__int64)(a1 + 58)) )
            return 1;
          v47 = sub_1405F1EE0(a1: (__int64)(a1 + 58));
          if ( v47 == 0 )
            return 1;
          v54 = (unsigned __int8)sub_140504400(a1);
          v55 = (__int64 *)a1[102];
          v56 = (__int64 *)v55[1];
          v57 = v55;
          while ( *((_BYTE *)v56 + 25) == 0 )
          {
            if ( *((_DWORD *)v56 + 8) >= v54 )
            {
              v57 = v56;
              v56 = (__int64 *)*v56;
            }
            else
            {
              v56 = (__int64 *)v56[2];
            }
          }
          if ( *((_BYTE *)v57 + 25) != 0 )
            return 1;
          if ( v54 < *((_DWORD *)v57 + 8) )
            return 1;
          if ( v57 == v55 )
            return 1;
          LODWORD(v64) = 0;
          v58 = v57[5];
          v59 = (v57[6] - v58) >> 4;
          v60 = 0;
          if ( (_DWORD)v59 == 0 )
            return 1;
          while ( 1 )
          {
            if ( v60 >= (unsigned __int64)((v57[6] - v58) >> 4) )
              goto LABEL_143;
            if ( *(_BYTE *)(v58 + 16LL * v60 + 12) != 0 )
              break;
            if ( ++v60 >= (unsigned int)v59 )
              goto LABEL_126;
          }
          LODWORD(v64) = v60;
        }
LABEL_126:
        sub_140441950(a1: v47);
        sub_140449800(a1: v47, a2: (unsigned int)v64, a3: 0);
        sub_140446CC0(a1: v47);
        v51 = *a1;
        v53 = sub_1400FBAF0(a1: v52);
        (*(void (__fastcall **)(__int64 *, __int64, __int128 **, __int64, __int64))(v51 + 24))(
          a1,
          a2: 40203,
          a3: &v64,
          a4: v47,
          a5: v53);
        result = 1;
        break;
      case 0x566DAu:
        v25 = sub_140505110(a1: a1 + 27);
        sub_1400896B0(a1: a4, a2: v25, a3: 4294967294LL);
        return 1;
      case 0x566DBu:
        v7 = *((unsigned __int8 *)a1 + 216);
        goto LABEL_24;
      case 0x566DCu:
        v26 = sub_14005A770(a1: &v69, a2: *((unsigned __int8 *)a1 + 216));
        sub_1400899A0(a1: a4, a2: v26, a3: 4294967294LL);
        goto LABEL_78;
      case 0x566DDu:
        v7 = *((unsigned __int8 *)a1 + 224);
        goto LABEL_24;
      case 0x566DEu:
        v27 = sub_140057AF0(a1: v79, a2: *((unsigned __int8 *)a1 + 224));
        sub_140056380(a1: &v69, a2: v27, a3: v79, a4: v65);
        sub_1400899A0(a1: a4, a2: &v69, a3: 4294967294LL);
        goto LABEL_78;
      case 0x566DFu:
        v7 = *((unsigned int *)a1 + 55);
        goto LABEL_24;
      case 0x566E0u:
        sub_1400896B0(a1: a4, a2: *((unsigned __int8 *)a1 + 227), a3: 4294967294LL);
        return 1;
      case 0x566E1u:
        v28 = sub_1405036F0(a1: a1 + 27);
        goto LABEL_53;
      case 0x566E2u:
        v28 = sub_140503750(a1: a1 + 27);
        goto LABEL_53;
      case 0x566E3u:
        if ( (unsigned __int8)sub_140505110(a1: a1 + 27) == 0 )
          goto LABEL_74;
        sub_140504BE0(a1, a2: &v72, a3: *((unsigned int *)a1 + 58));
        sub_1400899A0(a1: a4, a2: &v72, a3: 4294967294LL);
        sub_140018490(a1: &v72);
        return 1;
      case 0x566E4u:
        if ( (unsigned __int8)sub_140505110(a1: a1 + 27) == 0 )
          goto LABEL_74;
        sub_140504BE0(a1, a2: &v72, a3: *((unsigned int *)a1 + 58));
        sub_1400899A0(a1: a4, a2: &v74, a3: 4294967294LL);
        goto LABEL_61;
      case 0x566E5u:
        if ( (unsigned __int8)sub_140505110(a1: a1 + 27) == 0 )
          goto LABEL_74;
        sub_140504CB0(a1, a2: &v72, a3: *((unsigned int *)a1 + 58), a4: *((unsigned __int8 *)a1 + 224));
        sub_1400899A0(a1: a4, a2: &v72, a3: 4294967294LL);
        goto LABEL_61;
      case 0x566E6u:
        if ( (unsigned __int8)sub_140505110(a1: a1 + 27) == 0 )
          goto LABEL_74;
        sub_140504CB0(a1, a2: &v72, a3: *((unsigned int *)a1 + 58), a4: *((unsigned __int8 *)a1 + 224));
        sub_1400899A0(a1: a4, a2: &v74, a3: 4294967294LL);
        goto LABEL_61;
      case 0x566E7u:
        if ( (unsigned __int8)sub_140505110(a1: a1 + 27) == 0 )
          goto LABEL_74;
        v29 = sub_1400895F0(a1: a4, a2: v78, a3: 0);
        v30 = sub_14007FDC0(a1: v29, a2: 0);
        sub_140504CB0(a1, a2: &v72, a3: *((unsigned int *)a1 + 58), a4: v30);
        sub_1400778C0(a1: v78);
        sub_1400899A0(a1: a4, a2: &v72, a3: 4294967294LL);
LABEL_61:
        sub_14001B5A0(a1: &v74);
        v74 = 19937;
        v76 = 0;
        v77 = 31;
        sub_14001B5A0(a1: &v72);
        return 1;
      case 0x566E8u:
        if ( (unsigned __int8)sub_140505110(a1: a1 + 27) != 0 )
        {
          v31 = sub_1400895F0(a1: a4, a2: v78, a3: 0);
          v32 = sub_14007FDC0(a1: v31, a2: 0);
          sub_140504CB0(a1, a2: &v72, a3: *((unsigned int *)a1 + 58), a4: v32);
          sub_1400778C0(a1: v78);
          sub_1400899A0(a1: a4, a2: &v74, a3: 4294967294LL);
          sub_140018490(a1: &v72);
          return 1;
        }
LABEL_74:
        v69 = 0;
        v70 = 0;
        v71 = 15;
        LOBYTE(v69) = 0;
        sub_1400899A0(a1: a4, a2: &v69, a3: 4294967294LL);
LABEL_78:
        if ( v71 <= 0xF )
          return 1;
        v34 = (void *)v69;
        if ( v71 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v69 - *(_QWORD *)(v69 - 8) - 8) > 0x1F )
            goto LABEL_143;
          v34 = *(void **)(v69 - 8);
        }
        sub_1409DB4C0(lpMem: v34);
        result = 1;
        break;
      case 0x566E9u:
        LOBYTE(a2) = a1[70] != a1[71];
        goto LABEL_54;
      case 0x566EAu:
        v7 = (a1[71] - a1[70]) / 112;
        goto LABEL_24;
      case 0x566EBu:
        v33 = sub_14005A770(a1: &v69, a2: (a1[71] - a1[70]) / 112);
        sub_1400899A0(a1: a4, a2: v33, a3: 4294967294LL);
        goto LABEL_78;
      case 0x566ECu:
        v35 = a1[70];
        if ( v35 == a1[71] )
          goto LABEL_85;
        a1[73] = v35;
        if ( v35 == 0 )
          goto LABEL_85;
        goto LABEL_96;
      case 0x566EDu:
        v36 = a1[71];
        if ( a1[70] != v36 )
        {
          a1[73] = v36 - 112;
          if ( v36 != 112 )
            goto LABEL_96;
        }
        goto LABEL_85;
      case 0x566EEu:
        v37 = a1[71];
        if ( a1[70] != v37 )
        {
          v38 = a1[73] + 112;
          if ( v38 != v37 )
          {
            a1[73] = v38;
            if ( v38 != 0 )
              goto LABEL_96;
          }
        }
        goto LABEL_85;
      case 0x566EFu:
        v39 = a1[70];
        if ( v39 == a1[71] || (v40 = a1[73]) == v39 || (a1[73] = v40 - 112, v40 == 112) )
LABEL_85:
          v28 = 0;
        else
LABEL_96:
          v28 = sub_140507D80(a1);
LABEL_53:
        a2 = v28;
        goto LABEL_54;
      case 0x566F0u:
        v41 = (int *)a1[73];
        if ( v41 == (int *)a1[71] )
          goto LABEL_101;
        v42 = *v41;
        v43 = (_DWORD *)a1[88];
        a2 = a1[89];
        if ( v43 == (_DWORD *)a2 )
          goto LABEL_101;
        while ( *v43 != v42 )
        {
          v43 += 2;
          if ( v43 == (_DWORD *)a2 )
          {
LABEL_101:
            LOBYTE(a2) = 0;
            goto LABEL_54;
          }
        }
        LOBYTE(a2) = 1;
LABEL_54:
        sub_1400896B0(a1: a4, a2, a3: 4294967294LL);
        return 1;
      case 0x566F1u:
        if ( (unsigned __int8)sub_140503750(a1: a1 + 27) == 0 )
          return 1;
        v45 = (unsigned int *)a1[73];
        if ( v45 == (unsigned int *)a1[71] )
          return 1;
        LOBYTE(v44) = 1;
        sub_14050BA00(a1, a2: *v45, a3: v44);
        return 1;
      case 0x566F2u:
        if ( (unsigned __int8)sub_140503750(a1: a1 + 27) == 0 )
          return 1;
        v46 = (unsigned int *)a1[73];
        if ( v46 == (unsigned int *)a1[71] )
          return 1;
        sub_14050BA00(a1, a2: *v46, a3: 0);
        return 1;
      case 0x566F8u:
        if ( (unsigned __int8)sub_140505110(a1: a1 + 27) != 0 )
        {
          if ( *((_BYTE *)a1 + 216) <= 4u || *((_BYTE *)a1 + 228) != 0 )
            LOBYTE(a2) = *((_BYTE *)a1 + 800) != 0;
          else
            LOBYTE(a2) = a1[103] != 0;
        }
        else
        {
          a2 = 0;
        }
        goto LABEL_54;
      case 0x566F9u:
        sub_1400895F0(a1: a4, a2: v78, a3: 0);
        v61 = sub_14007ED10(a1: v78);
        v62 = sub_140017090(a1: &v69, a2: v61);
        v63 = sub_1405037B0(a1, a2: v62);
        sub_1400896B0(a1: a4, a2: v63, a3: 4294967294LL);
        sub_1400778C0(a1: v78);
        return 1;
      default:
        return sub_1400B0B50((_DWORD)a1, a2, a3, a4, a5);
    }
  }
  else
  {
    if ( a3 == 354001 )
    {
      v12 = sub_1400895F0(a1: a4, a2: v78, a3: 0);
      *((_BYTE *)a1 + 924) = sub_14007FDC0(a1: v12, a2: 0);
      sub_1400778C0(a1: v78);
      return 1;
    }
    if ( a3 == 40200 )
    {
      sub_1400899F0(a1: a4, a2: 0, a3: 4294967294LL);
      if ( a5 == 0 || (unsigned __int8)sub_140505110(a1: a1 + 27) == 0 )
        return 1;
      if ( a5 == sub_1405F1EE0(a1: (__int64)(a1 + 56)) )
      {
        if ( *((_BYTE *)a1 + 800) != 0 )
        {
          v7 = (a1[98] - a1[97]) >> 4;
LABEL_24:
          sub_1400899F0(a1: a4, a2: v7, a3: 4294967294LL);
        }
      }
      else
      {
        if ( a5 == sub_1405F1EE0(a1: (__int64)(a1 + 58)) )
        {
          v8 = (unsigned __int8)sub_140504400(a1);
          v9 = (__int64 *)a1[102];
          v10 = (__int64 *)v9[1];
          v11 = v9;
          while ( *((_BYTE *)v10 + 25) == 0 )
          {
            if ( *((_DWORD *)v10 + 8) >= v8 )
            {
              v11 = v10;
              v10 = (__int64 *)*v10;
            }
            else
            {
              v10 = (__int64 *)v10[2];
            }
          }
          if ( *((_BYTE *)v11 + 25) != 0 || v8 < *((_DWORD *)v11 + 8) || v11 == v9 )
            return 1;
          v7 = (v11[6] - v11[5]) >> 4;
          goto LABEL_24;
        }
        if ( a5 == sub_1405F1EE0(a1: (__int64)(a1 + 60)) )
        {
          v7 = *((unsigned int *)a1 + 210);
          goto LABEL_24;
        }
      }
      return 1;
    }
    return sub_1400B0B50((_DWORD)a1, a2, a3, a4, a5);
  }
  return result;
}