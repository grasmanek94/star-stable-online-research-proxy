__int64 __fastcall sub_1407EBD50(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v9; // r14
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int128 *v13; // rcx
  __int128 *v14; // rcx
  unsigned __int64 v15; // rax
  __int128 *v16; // rcx
  __int128 *v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rbx
  void *v21; // rcx
  void *v22; // rcx
  void *v23; // rcx
  void *v24; // rcx
  void *v25; // rcx
  int v26; // [rsp+20h] [rbp-E0h] BYREF
  const char *v27; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v28; // [rsp+30h] [rbp-D0h]
  __int64 v29; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v30; // [rsp+40h] [rbp-C0h]
  __int64 v31; // [rsp+48h] [rbp-B8h]
  int v32; // [rsp+50h] [rbp-B0h]
  __int16 v33; // [rsp+58h] [rbp-A8h]
  _BYTE v34[32]; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v35; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v36[32]; // [rsp+88h] [rbp-78h] BYREF
  char v37; // [rsp+A8h] [rbp-58h]
  __int64 v38; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v39; // [rsp+B8h] [rbp-48h]
  __int128 v40; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v41; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v42; // [rsp+D8h] [rbp-28h]
  __int128 v43; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v44; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v45; // [rsp+F8h] [rbp-8h]
  _BYTE v46[4]; // [rsp+100h] [rbp+0h] BYREF
  int v47; // [rsp+104h] [rbp+4h]
  __int128 v48; // [rsp+108h] [rbp+8h] BYREF
  __int64 v49; // [rsp+118h] [rbp+18h]
  unsigned __int64 v50; // [rsp+120h] [rbp+20h]
  __int128 v51; // [rsp+128h] [rbp+28h] BYREF
  __int64 v52; // [rsp+138h] [rbp+38h]
  unsigned __int64 v53; // [rsp+140h] [rbp+40h]
  __int128 v54; // [rsp+148h] [rbp+48h] BYREF
  __int64 v55; // [rsp+158h] [rbp+58h]
  unsigned __int64 v56; // [rsp+160h] [rbp+60h]
  __int64 v57; // [rsp+168h] [rbp+68h] BYREF
  _DWORD v58[4]; // [rsp+170h] [rbp+70h] BYREF

  v9 = a1 + 344;
  result = sub_1405F1EE0(a1: a1 + 344);
  if ( result == 0 )
  {
    if ( (unsigned __int8)sub_140059CA0(a1: off_140F61968) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
    __debugbreak();
  }
  if ( *(_BYTE *)(result + 676) != 0 )
    return sub_1407B6960(a1: result);
  if ( a3 != 0 && a4 != 0 && a5 != 0 )
  {
    v43 = 0;
    v44 = 0;
    v45 = 0;
    v11 = sub_140E82CD0(a1: a4);
    sub_14000D7F0(a1: &v43, a2: a4, a3: v11);
    v40 = 0;
    v41 = 0;
    v42 = 0;
    v12 = sub_140E82CD0(a1: a5);
    sub_14000D7F0(a1: &v40, a2: a5, a3: v12);
    v13 = &v43;
    if ( v45 > 0xF )
      v13 = (__int128 *)v43;
    if ( (unsigned int)sub_140089EF0(a1: v13, a2: v44) == 0 )
    {
      v38 = 0;
      v39 = 0;
      v27 = "Trying to send mail with subject that is not valid UTF-8. The request will not be sent.";
      v28 = 87;
      result = sub_140059F60(a1: off_141018618, a2: &v27, a3: &v38);
      if ( (_BYTE)result == 0 )
        goto LABEL_57;
LABEL_30:
      __debugbreak();
    }
    v14 = &v43;
    if ( v45 > 0xF )
      v14 = (__int128 *)v43;
    v15 = sub_14008A030(a1: v14);
    if ( v15 > 0x30 )
    {
      if ( (unsigned __int8)sub_140059D90(a1: off_141018660, a2: "Mail subject length %zu", v15) != 0 )
        __debugbreak();
      LODWORD(v39) = 48;
      v38 = 0x1000000000000000LL;
      v27 = (const char *)1;
      v28 = (__int64)&v38;
      v29 = (__int64)"Trying to send mail with subject that is above length limit {}. The request will not be sent.";
      v30 = 93;
      result = sub_140059F60(a1: off_141018688, a2: &v29, a3: &v27);
      if ( (_BYTE)result == 0 )
        goto LABEL_57;
      goto LABEL_30;
    }
    v16 = &v40;
    if ( v42 > 0xF )
      v16 = (__int128 *)v40;
    if ( (unsigned int)sub_140089EF0(a1: v16, a2: v41) == 0 )
    {
      v29 = 0;
      v30 = 0;
      v27 = "Trying to send mail with message that is not valid UTF-8. The request will not be sent.";
      v28 = 87;
      result = sub_140059F60(a1: off_1410186B0, a2: &v27, a3: &v29);
      if ( (_BYTE)result == 0 )
        goto LABEL_57;
      goto LABEL_30;
    }
    v17 = &v40;
    if ( v42 > 0xF )
      v17 = (__int128 *)v40;
    v18 = sub_14008A030(a1: v17);
    if ( v18 > 0x400 )
    {
      if ( (unsigned __int8)sub_140059D90(a1: off_1410186D8, a2: "Mail message length %zu", v18) != 0 )
        __debugbreak();
      LODWORD(v39) = 1024;
      v38 = 0x1000000000000000LL;
      v29 = 1;
      v30 = (__int64)&v38;
      v27 = "Trying to send mail with message that is above length limit {}. The request will not be sent.";
      v28 = 93;
      result = sub_140059F60(a1: off_141018700, a2: &v27, a3: &v29);
      if ( (_BYTE)result == 0 )
        goto LABEL_57;
      goto LABEL_30;
    }
    v46[0] = a2;
    v47 = 0;
    v48 = 0;
    v49 = 0;
    v50 = 0;
    v19 = sub_140E82CD0(a1: a3);
    sub_14000D7F0(a1: &v48, a2: a3, a3: v19);
    v51 = v43;
    v52 = v44;
    v53 = v45;
    v44 = 0;
    v45 = 15;
    LOBYTE(v43) = 0;
    v54 = v40;
    v55 = v41;
    v56 = v42;
    v41 = 0;
    v42 = 15;
    LOBYTE(v40) = 0;
    v57 = 0;
    v58[0] = a6;
    v20 = sub_140298110(a1: v9);
    v30 = 0;
    v31 = 0;
    v32 = 0;
    v29 = (__int64)&PXEngine::ByteStreamWriter::`vftable';
    v38 = (__int64)&v29;
    if ( (unsigned __int8)sub_1402B8840(a1: &v29, a2: v46) != 0
      && (v26 = v47, sub_1401D0820(a1: &v29, a2: &v26) != 0)
      && (v47 = v26, sub_1402B4D00(a1: &v29, a2: (__int64 *)&v48) != 0)
      && sub_1402B4D00(a1: &v29, a2: (__int64 *)&v51) != 0
      && sub_1402B4D00(a1: &v29, a2: (__int64 *)&v54) != 0
      && (unsigned __int8)sub_1402B7CD0(a1: &v38, a2: &v57) != 0
      && (unsigned __int8)sub_1402B7CD0(a1: &v38, a2: (char *)&v57 + 4) != 0
      && (unsigned __int8)sub_1402B7CD0(a1: &v38, a2: v58) != 0 )
    {
      v33 = word_141313CAC;
      sub_140A255B0(a1: v34, a2: &v29);
      v35 = v33;
      sub_140A255B0(a1: v36, a2: v34);
      v37 = 1;
      sub_140A25690(a1: v34);
    }
    else
    {
      v37 = 0;
    }
    sub_140A25690(a1: &v29);
    result = sub_1407D6C20(a1: v20, a2: &v35);
    if ( v56 > 0xF )
    {
      v21 = (void *)v54;
      if ( v56 + 1 >= 0x1000 )
      {
        if ( (unsigned __int64)(v54 - *(_QWORD *)(v54 - 8) - 8) > 0x1F )
          goto LABEL_68;
        v21 = *(void **)(v54 - 8);
      }
      result = sub_1409DB4C0(lpMem: v21);
    }
    *(_QWORD *)&v54 = 19937;
    v55 = 0;
    v56 = 31;
    if ( v53 > 0xF )
    {
      v22 = (void *)v51;
      if ( v53 + 1 >= 0x1000 )
      {
        if ( (unsigned __int64)(v51 - *(_QWORD *)(v51 - 8) - 8) > 0x1F )
          goto LABEL_68;
        v22 = *(void **)(v51 - 8);
      }
      result = sub_1409DB4C0(lpMem: v22);
    }
    *(_QWORD *)&v51 = 19937;
    v52 = 0;
    v53 = 31;
    if ( v50 <= 0xF )
    {
LABEL_56:
      *(_QWORD *)&v48 = 19937;
      v49 = 0;
      v50 = 31;
LABEL_57:
      if ( v42 > 0xF )
      {
        v24 = (void *)v40;
        if ( v42 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v40 - *(_QWORD *)(v40 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v24 = *(void **)(v40 - 8);
        }
        result = sub_1409DB4C0(lpMem: v24);
      }
      *(_QWORD *)&v40 = 19937;
      v41 = 0;
      v42 = 31;
      if ( v45 > 0xF )
      {
        v25 = (void *)v43;
        if ( v45 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(v43 - *(_QWORD *)(v43 - 8) - 8) > 0x1F )
            __fastfail(5u);
          v25 = *(void **)(v43 - 8);
        }
        return sub_1409DB4C0(lpMem: v25);
      }
      return result;
    }
    v23 = (void *)v48;
    if ( v50 + 1 < 0x1000 )
    {
LABEL_55:
      result = sub_1409DB4C0(lpMem: v23);
      goto LABEL_56;
    }
    if ( (unsigned __int64)(v48 - *(_QWORD *)(v48 - 8) - 8) <= 0x1F )
    {
      v23 = *(void **)(v48 - 8);
      goto LABEL_55;
    }
LABEL_68:
    __fastfail(5u);
  }
  return result;
}