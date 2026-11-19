// Hex-Rays export; function matched through nearby assertion-record references; confirm role in the text.
__int64 __fastcall sub_140108AF0(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rax
  int v11; // eax
  int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r14
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // r14
  int v23; // ecx
  int v24; // edx
  __int64 v25; // r14
  __int64 v26; // r15
  int v27; // eax
  int v28; // ecx
  __int64 v29; // r14
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // ebx
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  unsigned int v43; // eax
  __int64 *v44; // rax
  char *v45; // rbx
  char *v46; // rsi
  _BYTE *v47; // rcx
  __int64 *v48; // r15
  unsigned int v49; // eax
  __int64 *v50; // rax
  char *v51; // rbx
  char *v52; // rsi
  _BYTE *v53; // rcx
  __int64 v54; // rsi
  __int64 v55; // r14
  __int64 i; // rbx
  __int64 v57; // r14
  __int64 j; // rbx
  void **v59; // [rsp+30h] [rbp-50h] BYREF
  int v60; // [rsp+38h] [rbp-48h]
  int v61; // [rsp+3Ch] [rbp-44h]
  void **v62; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v63; // [rsp+48h] [rbp-38h]
  unsigned int v64; // [rsp+4Ch] [rbp-34h]
  void **v65; // [rsp+50h] [rbp-30h] BYREF
  int v66; // [rsp+58h] [rbp-28h]
  int v67; // [rsp+5Ch] [rbp-24h]
  LPVOID lpMem[2]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v69; // [rsp+70h] [rbp-10h]

  v4 = sub_14005D010(a1, a2);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 240LL))(a1);
  v6 = result;
  if ( result == 0 )
    return result;
  result = sub_14064F360(a1: result, a2: 1, a3: v4);
  if ( (_BYTE)result == 0 )
    return result;
  v9 = qword_141379EF0;
  v10 = sub_14005D010(a1: v8, a2: v7);
  if ( (unsigned __int8)sub_14064F360(a1: v6, a2: 33, a3: v10) != 0
    && (sub_1405F8B50(a1: &v62, a2: v6 + 120), (unsigned __int8)sub_140607410(a1: v9, a2: &v62, a3: 33) != 0) )
  {
    sub_1405F8B70(a1: &v59, a2: v64, a3: v63);
    v11 = v61;
    v12 = v60;
  }
  else
  {
    v11 = 195948557;
    v12 = 0;
  }
  *(_DWORD *)(a1 + 624) = v12;
  v59 = &PXEngine::SafeActorPtrAs<CPXSkinMesh>::`vftable';
  *(_DWORD *)(a1 + 628) = v11;
  if ( sub_1405F8CF0(a1: a1 + 616) == 0 )
  {
    v15 = sub_14005D010(a1: v14, a2: v13);
    if ( (unsigned __int8)sub_14064F360(a1: v6, a2: 120, a3: v15) != 0 )
    {
      v18 = qword_141379EF0;
      v19 = sub_1401E62C0(a1: v6);
      if ( v19 != 0
        && (sub_1405F8B50(a1: &v62, a2: v19 + 120), (unsigned __int8)sub_140607410(a1: v18, a2: &v62, a3: 33) != 0) )
      {
        sub_1405F8B70(a1: &v59, a2: v64, a3: v63);
        v20 = v61;
        *(_DWORD *)(a1 + 624) = v60;
        v59 = &PXEngine::SafeActorPtrAs<CPXSkinMesh>::`vftable';
      }
      else
      {
        v59 = &PXEngine::SafeActorPtrAs<CPXSkinMesh>::`vftable';
        *(_DWORD *)(a1 + 624) = 0;
        v20 = 195948557;
      }
    }
    else
    {
      v21 = sub_14005D010(a1: v17, a2: v16);
      if ( (unsigned __int8)sub_14064F360(a1: v6, a2: 167, a3: v21) == 0 )
        goto LABEL_16;
      sub_1405F8B50(a1: &v62, a2: v6 + 320);
      *(_DWORD *)(a1 + 624) = v63;
      v20 = v64;
      v62 = &PXEngine::SafeActorPtrAs<CPXSkinMesh>::`vftable';
    }
    *(_DWORD *)(a1 + 628) = v20;
LABEL_16:
    if ( sub_1405F8CF0(a1: a1 + 616) == 0 )
    {
      v22 = qword_141379EF0;
      if ( qword_141379EF0 == 0 )
      {
        if ( (unsigned __int8)sub_140059A00(a1: off_140EFA938) != 0 )
          __debugbreak();
        sub_1409E7D98(a1: 999);
        __debugbreak();
      }
      sub_1405F8B50(a1: &v62, a2: v6 + 120);
      if ( (unsigned __int8)sub_140607410(a1: v22, a2: &v62, a3: 1) != 0 )
      {
        sub_1405F8B70(a1: &v59, a2: v64, a3: v63);
        v23 = v61;
        v24 = v60;
      }
      else
      {
        v24 = 0;
        v23 = 195948557;
      }
      v25 = qword_141379EF0;
      v59 = &PXEngine::SafeActorPtrAs<CPXActor>::`vftable';
      v65 = &PXEngine::SafeActorPtr::`vftable';
      v66 = v24;
      v67 = v23;
      if ( qword_141379EF0 == 0 )
      {
        if ( (unsigned __int8)sub_140059A00(a1: off_140EFA938) != 0 )
          __debugbreak();
        sub_1409E7D98(a1: 999);
        __debugbreak();
      }
      v26 = sub_140601D00(a1: qword_141379EF0, a2: (unsigned int)&v62, a3: (unsigned int)&v65, a4: 33, a5: 1);
      if ( (unsigned __int8)sub_140607410(a1: v25, a2: v26, a3: 33) != 0 )
      {
        sub_1405F8B70(a1: &v59, a2: *(unsigned int *)(v26 + 12), a3: *(unsigned int *)(v26 + 8));
        v27 = v61;
        v28 = v60;
      }
      else
      {
        v28 = 0;
        v27 = 195948557;
      }
      v59 = &PXEngine::SafeActorPtrAs<CPXSkinMesh>::`vftable';
      *(_DWORD *)(a1 + 624) = v28;
      *(_DWORD *)(a1 + 628) = v27;
    }
  }
  result = sub_1405F8CF0(a1: a1 + 616);
  v29 = result;
  if ( result == 0 )
    return result;
  sub_1401089D0(a1: a1 + 176, a2: v6);
  v30 = a1 + 280;
  v31 = sub_1400E92F0(a1: v29, a2: &v65, a3: a1 + 280);
  *(_DWORD *)(a1 + 320) = *(_DWORD *)(v31 + 8);
  *(_DWORD *)(a1 + 324) = *(_DWORD *)(v31 + 12);
  v32 = sub_1400E92F0(a1: v29, a2: &v65, a3: a1 + 328);
  *(_DWORD *)(a1 + 368) = *(_DWORD *)(v32 + 8);
  *(_DWORD *)(a1 + 372) = *(_DWORD *)(v32 + 12);
  v33 = sub_1400E92F0(a1: v29, a2: &v65, a3: a1 + 472);
  *(_DWORD *)(a1 + 512) = *(_DWORD *)(v33 + 8);
  *(_DWORD *)(a1 + 516) = *(_DWORD *)(v33 + 12);
  v34 = sub_1400E92F0(a1: v29, a2: &v65, a3: a1 + 520);
  *(_DWORD *)(a1 + 560) = *(_DWORD *)(v34 + 8);
  *(_DWORD *)(a1 + 564) = *(_DWORD *)(v34 + 12);
  v35 = sub_1400E92F0(a1: v29, a2: &v65, a3: a1 + 568);
  *(_DWORD *)(a1 + 608) = *(_DWORD *)(v35 + 8);
  *(_DWORD *)(a1 + 612) = *(_DWORD *)(v35 + 12);
  if ( sub_1405F8CF0(a1: a1 + 208) == 0 )
    goto LABEL_37;
  v36 = qword_141379EF0;
  if ( qword_141379EF0 == 0 )
  {
    if ( (unsigned __int8)sub_140059A00(a1: off_140EFA938) != 0 )
      __debugbreak();
    sub_1409E7D98(a1: 999);
    __debugbreak();
  }
  v37 = sub_1405F8CF0(a1: a1 + 208);
  sub_1405F8B50(a1: &v65, a2: v37 + 120);
  v38 = sub_140601F90(a1: v36, a2: (unsigned int)&v62, a3: (unsigned int)&v65, a4: 33, a5: -1);
  if ( (unsigned __int8)sub_1405F8D80(a1: v38, a2: 33) != 0 )
  {
    sub_1405F8B70(a1: &v59, a2: *(unsigned int *)(v38 + 12), a3: *(unsigned int *)(v38 + 8));
  }
  else
  {
    v60 = 0;
    v61 = 195948557;
  }
  v59 = &PXEngine::SafeActorPtrAs<CPXSkinMesh>::`vftable';
  v39 = sub_1405F8CF0(a1: (__int64)&v59);
  if ( v39 != 0 )
    goto LABEL_35;
  if ( a2 != 0 )
  {
    v39 = a2;
LABEL_35:
    v40 = sub_1400E92F0(a1: v39, a2: lpMem, a3: a1 + 376);
    *(_DWORD *)(a1 + 416) = *(_DWORD *)(v40 + 8);
    *(_DWORD *)(a1 + 420) = *(_DWORD *)(v40 + 12);
    v41 = sub_1400E92F0(a1: v39, a2: lpMem, a3: a1 + 424);
    *(_DWORD *)(a1 + 464) = *(_DWORD *)(v41 + 8);
    *(_DWORD *)(a1 + 468) = *(_DWORD *)(v41 + 12);
    v42 = sub_1400E92F0(a1: v39, a2: lpMem, a3: a1 + 232);
    *(_DWORD *)(a1 + 272) = *(_DWORD *)(v42 + 8);
    *(_DWORD *)(a1 + 276) = *(_DWORD *)(v42 + 12);
  }
  v30 = a1 + 280;
LABEL_37:
  sub_140109250(a1, a2: v29);
  if ( sub_1405F8CF0(a1: a1 + 312) != 0 )
  {
    v43 = sub_140651300(a1: v30);
    v44 = sub_140105B30(a1, a2: (__int64 *)lpMem, a3: v43);
    sub_1400E49C0(a1: a1 + 632, a2: v44);
    v45 = (char *)lpMem[0];
    if ( lpMem[0] != nullptr )
    {
      v46 = (char *)lpMem[1];
      if ( lpMem[0] != lpMem[1] )
      {
        do
        {
          (**(void (__fastcall ***)(LPVOID, _QWORD))v45)(a1: v45, a2: 0);
          v45 += 16;
        }
        while ( v45 != v46 );
        v45 = (char *)lpMem[0];
      }
      if ( ((v69 - (_QWORD)v45) & 0xFFFFFFFFFFFFFFF0uLL) < 0x1000 )
      {
        v47 = v45;
      }
      else
      {
        v47 = *((_BYTE **)v45 - 1);
        if ( (unsigned __int64)(v45 - v47 - 8) > 0x1F )
          goto LABEL_55;
      }
      sub_1409E08A0(lpMem: v47);
    }
    *(__m128i *)lpMem = _mm_load_si128((const __m128i *)&xmmword_140EE4280);
    v69 = 19937;
  }
  v48 = (__int64 *)(a1 + 632);
  if ( sub_1405F8CF0(a1: a1 + 360) != 0 )
  {
    v49 = sub_140651300(a1: a1 + 328);
    v50 = sub_140105B30(a1, a2: (__int64 *)lpMem, a3: v49);
    sub_1400E49C0(a1: a1 + 656, a2: v50);
    v51 = (char *)lpMem[0];
    if ( lpMem[0] != nullptr )
    {
      v52 = (char *)lpMem[1];
      if ( lpMem[0] != lpMem[1] )
      {
        do
        {
          (**(void (__fastcall ***)(LPVOID, _QWORD))v51)(a1: v51, a2: 0);
          v51 += 16;
        }
        while ( v51 != v52 );
        v51 = (char *)lpMem[0];
      }
      if ( ((v69 - (_QWORD)v51) & 0xFFFFFFFFFFFFFFF0uLL) < 0x1000 )
      {
        v53 = v51;
      }
      else
      {
        v53 = *((_BYTE **)v51 - 1);
        if ( (unsigned __int64)(v51 - v53 - 8) > 0x1F )
LABEL_55:
          __fastfail(5u);
      }
      sub_1409E08A0(lpMem: v53);
      v48 = (__int64 *)(a1 + 632);
    }
    v69 = 19937;
  }
  result = sub_1405F8CF0(a1: a1 + 616);
  v54 = result;
  if ( result == 0 )
  {
    if ( (unsigned __int8)sub_140059A00(a1: off_140EFEA18) != 0 )
      __debugbreak();
    sub_1409E7D98(a1: 999);
    __debugbreak();
  }
  v55 = v48[1];
  for ( i = *v48; i != v55; i += 16 )
  {
    result = sub_1405F8CF0(a1: i);
    if ( result != 0 )
      result = sub_1400E6500(a1: v54, a2: i, a3: 4);
  }
  v57 = *(_QWORD *)(a1 + 664);
  for ( j = *(_QWORD *)(a1 + 656); j != v57; j += 16 )
  {
    result = sub_1405F8CF0(a1: j);
    if ( result != 0 )
      result = sub_1400E6500(a1: v54, a2: j, a3: 4);
  }
  *(_BYTE *)(a1 + 168) = 1;
  return result;
}