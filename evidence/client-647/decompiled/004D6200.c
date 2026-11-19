__int64 __fastcall sub_1404D6200(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  __int128 *v10; // r15
  unsigned __int64 v11; // rax
  char *v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rsi
  void *v15; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 **v20; // rdx
  int v21; // esi
  __int64 v22; // rbx
  __int64 v23; // rax
  unsigned int v24; // esi
  __int64 *v25; // rbx
  _BYTE *v26; // rax
  __int64 *i; // rax
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  __int64 *v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // rdx
  __int64 v33; // rax
  __int64 *v34; // rdx
  __int64 *v35; // rax
  __int64 *v36; // rbx
  __int64 v37; // rax
  _QWORD *v38; // rdx
  __int64 v39; // rax
  unsigned int v40; // esi
  unsigned __int64 v41; // rcx
  unsigned int v42; // edx
  __int64 *v43; // r8
  __int64 *v44; // rax
  __int64 *v45; // rcx
  unsigned int v46; // edx
  unsigned int v47; // eax
  unsigned int v48; // r9d
  unsigned __int64 v49; // rcx
  unsigned int v50; // edx
  __int64 *v51; // r8
  __int64 *v52; // rax
  __int64 *v53; // rcx
  unsigned __int64 v54; // rcx
  __int64 v55; // rbx
  __int64 v56; // r14
  void **v57; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v58; // [rsp+50h] [rbp-B8h]
  _QWORD v59[3]; // [rsp+58h] [rbp-B0h] BYREF
  int v60; // [rsp+70h] [rbp-98h]
  _BYTE v61[16]; // [rsp+78h] [rbp-90h] BYREF
  __int16 v62; // [rsp+88h] [rbp-80h]
  _BYTE v63[32]; // [rsp+90h] [rbp-78h] BYREF
  __int16 v64; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v65[40]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v66; // [rsp+E0h] [rbp-28h] BYREF
  unsigned __int64 v67; // [rsp+F0h] [rbp-18h]
  unsigned __int64 v68; // [rsp+F8h] [rbp-10h]
  _BYTE v69[140]; // [rsp+108h] [rbp+0h] BYREF

  if ( a3 > 0x50146 )
  {
    v17 = (unsigned __int64)&_ImageBase;
    switch ( a3 )
    {
      case 0x50147u:
        sub_1400899F0(a1: a4, a2: *(unsigned int *)(a1 + 604), a3: 4294967294LL);
        return 1;
      case 0x50148u:
        v18 = (unsigned int)(*(_DWORD *)(a1 + 564) - *(_DWORD *)(a1 + 604));
        if ( (int)v18 < 0 )
          v18 = 0;
        sub_1400899F0(a1: a4, a2: v18, a3: 4294967294LL);
        return 1;
      case 0x50149u:
        v19 = sub_14005D330();
        if ( a5 == 0 )
          goto LABEL_55;
        if ( (unsigned __int8)sub_140645790(a1: a5, a2: 45, a3: v19) == 0 )
          goto LABEL_55;
        sub_14013A6D0(a1: a5);
        v21 = sub_140619130(a1: a2);
        sub_1405F1D40(a1: &v57, a2: a5 + 120);
        sub_1405FC430(a1: v21, a2: (unsigned int)v61, a3: (unsigned int)&v57, a4: 41, a5: -1, a6: 1);
        if ( (unsigned __int8)sub_1405F1E20(a1: v61) == 0 )
          goto LABEL_55;
        v22 = sub_1405FADF0(
                a1: v21,
                a2: (unsigned int)v59,
                a3: (unsigned int)v61,
                a4: (unsigned int)"JorvikRankCard",
                a5: -1,
                a6: -1,
                a7: -1,
                a8: 1);
        if ( (unsigned __int8)sub_1405F1F70(a1: v22, a2: 40) != 0 )
          sub_1405F1D60(a1: &v57, a2: *(unsigned int *)(v22 + 12), a3: *(unsigned int *)(v22 + 8));
        else
          v58 = 0xBADF00D00000000LL;
        v57 = &PXEngine::SafeActorPtrAs<CPXView>::`vftable';
        if ( (unsigned __int8)sub_1405F1E20(a1: &v57) == 0 )
          goto LABEL_55;
        v23 = sub_1405F1EE0(a1: (__int64)&v57);
        if ( v23 == 0 )
        {
          if ( (unsigned __int8)sub_140059CA0(a1: off_140F40348) != 0 )
            __debugbreak();
          sub_1409E29B8(a1: 999);
          __debugbreak();
        }
        sub_14013A6D0(a1: v23);
        v24 = *(_DWORD *)(a1 + 564);
        if ( *(_DWORD *)(a1 + 604) < v24 )
          v24 = *(_DWORD *)(a1 + 604);
        v20 = *(__int64 ***)(a1 + 584);
        v25 = *v20;
        if ( *((_BYTE *)*v20 + 25) != 0 )
          goto LABEL_55;
        break;
      case 0x5014Au:
        sub_1404D5A50(a1);
        sub_140089A40(a1: a4, a2: a1 + 624, a3: 4294967294LL);
        return 1;
      case 0x5014Bu:
        v17 = (unsigned __int8)sub_1404D9780(a1);
        goto LABEL_102;
      case 0x5014Cu:
        v54 = *(_QWORD *)(a1 + 592);
        if ( v54 != 0 && *(unsigned int *)(a1 + 600) >= v54 )
          goto LABEL_106;
        LOBYTE(v17) = 0;
        goto LABEL_102;
      case 0x5014Du:
        if ( (*(_BYTE *)(a1 + 696) & 1) != 0 )
          return 1;
        v55 = qword_14138A6F0;
        if ( qword_14138A6F0 == 0 )
        {
          if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
            __debugbreak();
          sub_1409E29B8(a1: 999);
          __debugbreak();
        }
        v56 = sub_1405FD2E0(a1: qword_14138A6F0, a2: v59, a3: "Network");
        if ( (unsigned __int8)sub_1406006A0(a1: v55, a2: v56, a3: 122) != 0 )
          sub_1405F1D60(a1: &v57, a2: *(unsigned int *)(v56 + 12), a3: *(unsigned int *)(v56 + 8));
        else
          v58 = 0xBADF00D00000000LL;
        v57 = &PXEngine::SafeActorPtrAs<CPXNetwork>::`vftable';
        if ( sub_1405F1EE0(a1: (__int64)&v57) == 0 )
          return 1;
        v59[1] = 0;
        v59[2] = 0;
        v60 = 0;
        v59[0] = &PXEngine::ByteStreamWriter::`vftable';
        v62 = word_141314174;
        sub_140A255B0(a1: v63, a2: v59);
        v64 = v62;
        sub_140A255B0(a1: v65, a2: v63);
        v65[32] = 1;
        sub_140A25690(a1: v63);
        sub_140A25690(a1: v59);
        *(_BYTE *)(a1 + 696) = sub_1407EE6B0(a1: &v64) | *(_BYTE *)(a1 + 696) & 0xFE;
        return 1;
      case 0x5014Eu:
LABEL_106:
        LOBYTE(v17) = 1;
LABEL_102:
        sub_1400896B0(a1: a4, a2: v17, a3: 4294967294LL);
        return 1;
      case 0x5014Fu:
        sub_1400787F0(a1: a1 + 608, a2: &String2);
        v31 = sub_1406193F0(a1: a2);
        v32 = (_QWORD *)(a1 + 224);
        if ( *(_QWORD *)(a1 + 248) > 0xFu )
          v32 = (_QWORD *)*v32;
        v33 = sub_140640A60(a1: *(_QWORD *)(v31 + 992), a2: v32, a3: 0);
        if ( v33 != 0 )
          sub_1400787F0(a1: a1 + 608, a2: v33);
        sub_140089A40(a1: a4, a2: a1 + 608, a3: 4294967294LL);
        return 1;
      case 0x50150u:
        sub_1400787F0(a1: a1 + 640, a2: &String2);
        v34 = *(__int64 **)(a1 + 584);
        v35 = (__int64 *)v34[1];
        v36 = v34;
        while ( *((_BYTE *)v35 + 25) == 0 )
        {
          if ( *((_DWORD *)v35 + 8) >= *(_DWORD *)(a1 + 600) )
          {
            v36 = v35;
            v35 = (__int64 *)*v35;
          }
          else
          {
            v35 = (__int64 *)v35[2];
          }
        }
        if ( *((_BYTE *)v36 + 25) == 0 && *(_DWORD *)(a1 + 600) >= *((_DWORD *)v36 + 8) && v36 != v34 )
        {
          v37 = sub_1406193F0(a1: a2);
          v38 = v36 + 6;
          if ( (unsigned __int64)v36[9] > 0xF )
            v38 = (_QWORD *)*v38;
          v39 = sub_140640A60(a1: *(_QWORD *)(v37 + 992), a2: v38, a3: 0);
          if ( v39 != 0 )
            sub_1400787F0(a1: a1 + 640, a2: v39);
        }
        sub_140089A40(a1: a4, a2: a1 + 640, a3: 4294967294LL);
        return 1;
      case 0x50151u:
        v40 = 0;
        v41 = *(_QWORD *)(a1 + 592);
        if ( v41 == 0 || *(unsigned int *)(a1 + 600) < v41 )
        {
          v42 = *(_DWORD *)(a1 + 600) + 1;
          v43 = *(__int64 **)(a1 + 584);
          v44 = (__int64 *)v43[1];
          v45 = v43;
          while ( *((_BYTE *)v44 + 25) == 0 )
          {
            if ( *((_DWORD *)v44 + 8) >= v42 )
            {
              v45 = v44;
              v44 = (__int64 *)*v44;
            }
            else
            {
              v44 = (__int64 *)v44[2];
            }
          }
          if ( *((_BYTE *)v45 + 25) == 0 && v42 >= *((_DWORD *)v45 + 8) && v45 != v43 )
          {
            v46 = *(_DWORD *)(a1 + 604);
            v47 = *((_DWORD *)v45 + 45);
            if ( v46 < v47 )
              v40 = v47 - v46;
          }
        }
        sub_1400899F0(a1: a4, a2: v40, a3: 4294967294LL);
        return 1;
      case 0x50152u:
        v48 = *(_DWORD *)(a1 + 564);
        v49 = *(_QWORD *)(a1 + 592);
        if ( v49 == 0 || *(unsigned int *)(a1 + 600) < v49 )
        {
          v50 = *(_DWORD *)(a1 + 600) + 1;
          v51 = *(__int64 **)(a1 + 584);
          v52 = (__int64 *)v51[1];
          v53 = v51;
          while ( *((_BYTE *)v52 + 25) == 0 )
          {
            if ( *((_DWORD *)v52 + 8) >= v50 )
            {
              v53 = v52;
              v52 = (__int64 *)*v52;
            }
            else
            {
              v52 = (__int64 *)v52[2];
            }
          }
          if ( *((_BYTE *)v53 + 25) == 0 && v50 >= *((_DWORD *)v53 + 8) && v53 != v51 )
            v48 = *((_DWORD *)v53 + 45);
        }
        sub_1400899F0(a1: a4, a2: v48, a3: 4294967294LL);
        return 1;
      case 0x50153u:
        sub_1400899F0(a1: a4, a2: *(unsigned int *)(a1 + 692), a3: 4294967294LL);
        return 1;
      default:
        return sub_1400B0B50(a1, a2, a3, a4, a5);
    }
    while ( v24 > *((_DWORD *)v25 + 45) )
    {
      v26 = (_BYTE *)v25[2];
      if ( v26[25] != 0 )
      {
        for ( i = (__int64 *)v25[1]; *((_BYTE *)i + 25) == 0; i = (__int64 *)i[1] )
        {
          if ( v25 != (__int64 *)i[2] )
            break;
          v25 = i;
        }
        v25 = i;
      }
      else
      {
        v25 = (__int64 *)v25[2];
        if ( *(_BYTE *)(*(_QWORD *)v26 + 25LL) == 0 )
        {
          do
            v25 = (__int64 *)*v25;
          while ( *(_BYTE *)(*v25 + 25) == 0 );
        }
      }
      if ( *((_BYTE *)v25 + 25) != 0 )
        goto LABEL_55;
    }
    v28 = *((_DWORD *)v25 + 8);
    if ( v28 > 1 )
    {
      v29 = v28 - 1;
      v30 = v20[1];
      while ( *((_BYTE *)v30 + 25) == 0 )
      {
        if ( *((_DWORD *)v30 + 8) >= v29 )
        {
          v20 = (__int64 **)v30;
          v30 = (__int64 *)*v30;
        }
        else
        {
          v30 = (__int64 *)v30[2];
        }
      }
      if ( *((_BYTE *)v20 + 25) != 0 || v29 < *((_DWORD *)v20 + 8) )
        sub_1409D2B40(a1: "invalid map<K, T> key");
      sub_1404D5550(a1: v69, a2: v20 + 5);
      sub_1404D5830(a1: v69);
    }
LABEL_55:
    sub_1400897A0(a1: a4, a2: v20, a3: 4294967294LL);
    return 1;
  }
  else if ( a3 == 328006 )
  {
    sub_1400899F0(a1: a4, a2: *(unsigned int *)(a1 + 564), a3: 4294967294LL);
    return 1;
  }
  else if ( a3 == 40200 && a5 != 0 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a5 + 176LL))(a1: a5);
    v66 = 0;
    v67 = 0;
    v68 = 0;
    v9 = sub_140E82CD0(a1: v8);
    sub_14000D7F0(a1: &v66, a2: v8, a3: v9);
    v10 = &v66;
    v11 = v68;
    if ( v68 > 0xF )
      v10 = (__int128 *)v66;
    if ( v67 < 0x1A
      || (v12 = (char *)v10 + v67,
          v13 = sub_1409D23E0(a1: v10, a2: (char *)v10 + v67, a3: "ListView_ChampionshipRanks", 26),
          v11 = v68,
          (char *)v13 == v12) )
    {
      v14 = -1;
    }
    else
    {
      v14 = v13 - (_QWORD)v10;
    }
    if ( v11 > 0xF )
    {
      v15 = (void *)v66;
      if ( v11 + 1 >= 0x1000 )
      {
        if ( (unsigned __int64)(v66 - *(_QWORD *)(v66 - 8) - 8) > 0x1F )
          __fastfail(5u);
        v15 = *(void **)(v66 - 8);
      }
      sub_1409DB4C0(lpMem: v15);
    }
    if ( v14 == -1 )
    {
      return 1;
    }
    else
    {
      sub_1400899F0(a1: a4, a2: *(unsigned int *)(a1 + 592), a3: 4294967294LL);
      return 1;
    }
  }
  else
  {
    return sub_1400B0B50(a1, a2, a3, a4, a5);
  }
}