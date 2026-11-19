__int64 __fastcall sub_1402F2690(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned int v9; // ebx
  void *v10; // rcx
  unsigned int v11; // eax
  __int64 v13; // rbx
  __int64 v14; // rax
  unsigned int v15; // ebx
  void *v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rax
  unsigned int v19; // r9d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned int v27; // r9d
  unsigned __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // r11
  _DWORD *v31; // rbx
  _QWORD *v32; // rcx
  _DWORD *v33; // r10
  _QWORD *v34; // rax
  __int64 v35; // rdx
  _DWORD v36[4]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v37[16]; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v38; // [rsp+50h] [rbp-B0h]
  _BYTE v39[32]; // [rsp+58h] [rbp-A8h] BYREF
  __int16 v40; // [rsp+78h] [rbp-88h] BYREF
  char v41[32]; // [rsp+80h] [rbp-80h] BYREF
  char v42; // [rsp+A0h] [rbp-60h]
  char v43[8]; // [rsp+B0h] [rbp-50h] BYREF
  char v44[16]; // [rsp+B8h] [rbp-48h] BYREF
  char v45[24]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v46; // [rsp+E0h] [rbp-20h]
  __int64 v47; // [rsp+E8h] [rbp-18h]
  __int128 v48; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v49; // [rsp+100h] [rbp+0h]
  unsigned __int64 v50; // [rsp+108h] [rbp+8h]

  switch ( (int)a3 )
  {
    case 163024:
      sub_1400895F0(a1: a4, a2: v36, a3: 0);
      v13 = sub_140081CC0(a1: v36, a2: 0);
      v48 = 0;
      v49 = 0;
      v50 = 0;
      v14 = sub_140E82CD0(a1: v13);
      sub_14000D7F0(a1: &v48, a2: v13, a3: v14);
      v15 = sub_140251500(a1: &v48);
      if ( v50 > 0xF )
      {
        v16 = (void *)v48;
        if ( v50 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v48 - *(_QWORD *)(v48 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v16 = *(void **)(v48 - 8);
        }
        sub_1409DB4C0(lpMem: v16);
      }
      v17 = sub_1402F4E50(a1, a2: v15);
      sub_1400899F0(a1: a4, a2: v17, a3: 4294967294LL);
      sub_1400778C0(a1: v36);
      return 1;
    case 163025:
      sub_1400895F0(a1: a4, a2: v36, a3: 0);
      v7 = sub_140081CC0(a1: v36, a2: 0);
      v48 = 0;
      v49 = 0;
      v50 = 0;
      v8 = sub_140E82CD0(a1: v7);
      sub_14000D7F0(a1: &v48, a2: v7, a3: v8);
      v9 = sub_140251500(a1: &v48);
      if ( v50 > 0xF )
      {
        v10 = (void *)v48;
        if ( v50 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v48 - *(_QWORD *)(v48 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v10 = *(void **)(v48 - 8);
        }
        sub_1409DB4C0(lpMem: v10);
      }
      v11 = sub_1402F40E0(a1, a2: v9);
      sub_1400899F0(a1: a4, a2: v11, a3: 4294967294LL);
      sub_1400778C0(a1: v36);
      return 1;
    case 163027:
      v18 = sub_1400895F0(a1: a4, a2: v36, a3: 0);
      v19 = sub_14007FDC0(a1: v18, a2: 0);
      v20 = a1[49];
      v21 = *(_QWORD *)(v20
                      + 16
                      * (a1[52]
                       & (0x100000001B3LL
                        * (HIBYTE(v19)
                         ^ (0x100000001B3LL
                          * (BYTE2(v19)
                           ^ (0x100000001B3LL
                            * (BYTE1(v19) ^ (0x100000001B3LL * ((unsigned __int8)v19 ^ 0xCBF29CE484222325uLL)))))))))
                      + 8);
      if ( v21 == a1[47] )
        goto LABEL_21;
      if ( v19 != *(_DWORD *)(v21 + 16) )
      {
        while ( v21 != *(_QWORD *)(v20
                                 + 16
                                 * (a1[52]
                                  & (0x100000001B3LL
                                   * (HIBYTE(v19)
                                    ^ (0x100000001B3LL
                                     * (BYTE2(v19)
                                      ^ (0x100000001B3LL
                                       * (BYTE1(v19) ^ (0x100000001B3LL * ((unsigned __int8)v19 ^ 0xCBF29CE484222325uLL)))))))))) )
        {
          v21 = *(_QWORD *)(v21 + 8);
          if ( v19 == *(_DWORD *)(v21 + 16) )
            goto LABEL_22;
        }
LABEL_21:
        v21 = 0;
      }
LABEL_22:
      LOBYTE(v20) = v21 != 0;
      sub_1400896B0(a1: a4, a2: v20, a3: 4294967294LL);
      sub_1400778C0(a1: v36);
      return 1;
    case 163028:
      v22 = sub_1400895F0(a1: a4, a2: &v48, a3: 0);
      v36[0] = sub_14007FDC0(a1: v22, a2: 0);
      if ( *((_BYTE *)a1 + 790) != 0 )
      {
        sub_1402EC110(a1: a1 + 46, a2: v37, a3: v36);
        if ( v37[8] != 0 )
          *((_BYTE *)a1 + 791) = 1;
      }
      else
      {
        v24 = *a1;
        v25 = sub_1400FBAF0(a1: v23);
        (*(void (__fastcall **)(__int64 *, __int64, _QWORD, __int64))(v24 + 776))(a1, a2: 163036, a3: 0, a4: v25);
      }
      sub_1400778C0(a1: &v48);
      return 1;
    case 163029:
      v26 = sub_1400895F0(a1: a4, a2: &v48, a3: 0);
      v27 = sub_14007FDC0(a1: v26, a2: 0);
      v28 = 0x100000001B3LL * (BYTE1(v27) ^ (0x100000001B3LL * ((unsigned __int8)v27 ^ 0xCBF29CE484222325uLL)));
      v29 = a1[49];
      v30 = 2 * (a1[52] & (0x100000001B3LL * (HIBYTE(v27) ^ (0x100000001B3LL * (BYTE2(v27) ^ v28)))));
      v31 = *(_DWORD **)(v29
                       + 16 * (a1[52] & (0x100000001B3LL * (HIBYTE(v27) ^ (0x100000001B3LL * (BYTE2(v27) ^ v28)))))
                       + 8);
      v32 = v31;
      v33 = (_DWORD *)a1[47];
      if ( v31 == v33 )
        goto LABEL_33;
      if ( v27 != v31[4] )
      {
        while ( v32 != *(_QWORD **)(v29 + 8 * v30) )
        {
          v32 = (_QWORD *)v32[1];
          if ( v27 == *((_DWORD *)v32 + 4) )
            goto LABEL_34;
        }
LABEL_33:
        v32 = nullptr;
      }
LABEL_34:
      if ( v32 != nullptr )
      {
        v34 = *(_QWORD **)(v29 + 8 * v30);
        if ( v31 == (_DWORD *)v32 )
        {
          if ( v34 == v32 )
            *(_QWORD *)(v29 + 8 * v30) = v33;
          else
            v33 = (_DWORD *)v32[1];
          *(_QWORD *)(v29 + 8 * v30 + 8) = v33;
        }
        else if ( v34 == v32 )
        {
          *(_QWORD *)(v29 + 8 * v30) = *v32;
        }
        v35 = *v32;
        --a1[48];
        *(_QWORD *)v32[1] = v35;
        *(_QWORD *)(v35 + 8) = v32[1];
        sub_1409DB4C0(lpMem: v32);
      }
      *((_BYTE *)a1 + 791) = 1;
      sub_1400778C0(a1: &v48);
      return 1;
    case 163030:
      if ( *((_BYTE *)a1 + 790) != 0 && *((_BYTE *)a1 + 791) != 0 )
      {
        sub_140082850(a1: v43);
        sub_1402ECF60(a1: v43, a2: a1 + 46);
        *((_QWORD *)&v48 + 1) = 0;
        v49 = 0;
        LODWORD(v50) = 0;
        *(_QWORD *)&v48 = &PXEngine::ByteStreamWriter::`vftable';
        if ( (unsigned __int8)sub_1402EA720(a1: &v48, a2: v43) != 0 )
        {
          v38 = word_141313DC0;
          sub_140A255B0(a1: v39, a2: &v48);
          v40 = v38;
          sub_140A255B0(a1: v41, a2: v39);
          v42 = 1;
          sub_140A25690(a1: v39);
        }
        else
        {
          v42 = 0;
        }
        sub_140A25690(a1: &v48);
        sub_1407EE6B0(a1: &v40);
        v46 = 7;
        v47 = 8;
        sub_140017A10(a1: v45);
        sub_140082DD0(a1: v44);
      }
      return 1;
    case 163031:
      sub_1402F77E0(a1, a2, a3, a4: a5);
      return 1;
    default:
      return sub_1400B0B50((_DWORD)a1, a2, a3, a4, a5);
  }
}