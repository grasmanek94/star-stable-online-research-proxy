LPVOID __fastcall sub_1404B8680(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void **v5; // r14
  LPVOID result; // rax
  __int128 v7; // rcx
  __int64 v8; // rdx
  int v9; // edi
  int v10; // esi
  _BYTE *v11; // r12
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rsi
  char *v17; // rdi
  __int64 v18; // rax
  unsigned __int64 v19; // r15
  LPVOID v20; // rdx
  char *v21; // rcx
  char *v22; // r8
  void *v23; // rcx
  char v24; // si
  __int64 v25; // rdi
  __int64 v26; // r14
  __int64 v27; // r8
  _DWORD *v28; // rax
  _DWORD *v29; // rcx
  _DWORD *v30; // rdi
  __int64 v31; // rbx
  __int64 v32; // rdi
  __int64 v33; // rbx
  __int64 v34; // rax
  void *v35; // rcx
  void **v36; // [rsp+30h] [rbp-59h] BYREF
  int v37; // [rsp+38h] [rbp-51h]
  int v38; // [rsp+3Ch] [rbp-4Dh]
  _BYTE v39[16]; // [rsp+40h] [rbp-49h] BYREF
  LPVOID lpMem[2]; // [rsp+50h] [rbp-39h] BYREF
  char *v41; // [rsp+60h] [rbp-29h]
  _BYTE v42[120]; // [rsp+68h] [rbp-21h] BYREF
  int v43; // [rsp+F0h] [rbp+67h]
  int v44; // [rsp+F8h] [rbp+6Fh]
  int v45; // [rsp+100h] [rbp+77h]
  int v46; // [rsp+108h] [rbp+7Fh]

  v5 = *(void ***)(a1 + 504);
  v36 = *(void ***)(a1 + 512);
  if ( v5 == v36 )
  {
    result = (LPVOID)sub_140059D90(
                       a1: off_140FAC8F0,
                       a2: "CustomizationRulesManager::RequestApplyCustomization: m_ApplyRequestSelection is empty!");
    if ( (_BYTE)result != 0 )
      __debugbreak();
    return result;
  }
  *(_OWORD *)lpMem = 0;
  v7 = 0;
  v41 = nullptr;
  do
  {
    v43 = *(_DWORD *)v5;
    v8 = *((unsigned int *)v5 + 1);
    v44 = *((_DWORD *)v5 + 1);
    v9 = *((_DWORD *)v5 + 2);
    v45 = v9;
    v10 = *((_DWORD *)v5 + 3);
    v46 = v10;
    if ( *((_QWORD *)&v7 + 1) == (_QWORD)v7 )
    {
      v11 = *((_BYTE **)&v7 + 1);
      v12 = *((_QWORD *)&v7 + 1) - (unsigned __int64)lpMem[0];
      *((_QWORD *)&v7 + 1) = (__int64)(*((_QWORD *)&v7 + 1) - (unsigned __int64)lpMem[0]) >> 4;
      if ( *((_QWORD *)&v7 + 1) == 0xFFFFFFFFFFFFFFFLL )
        sub_14001B6A0(a1: v7, a2: v8, a3: 0xFFFFFFFFFFFFFFFLL, a4);
      *(_QWORD *)&v7 = (__int64)(v7 - (unsigned __int64)lpMem[0]) >> 4;
      v13 = (unsigned __int64)v7 >> 1;
      if ( (unsigned __int64)v7 > 0xFFFFFFFFFFFFFFFLL - ((unsigned __int64)v7 >> 1) )
        goto LABEL_66;
      v14 = *((_QWORD *)&v7 + 1) + 1LL;
      v15 = v14;
      if ( v13 + (unsigned __int64)v7 >= v14 )
        v15 = v13 + v7;
      if ( v15 > 0xFFFFFFFFFFFFFFFLL )
      {
LABEL_66:
        sub_14001B170(a1: v7, a2: v13, a3: 0xFFFFFFFFFFFFFFFLL, a4);
        __debugbreak();
      }
      v16 = 16 * v15;
      if ( v16 != 0 )
      {
        if ( v16 < 0x1000 )
        {
          v17 = (char *)sub_1409DB470(a1: v16);
        }
        else
        {
          *(_QWORD *)&v7 = v16 + 39;
          if ( v16 + 39 < v16 )
            goto LABEL_66;
          v18 = sub_1409DB470(a1: v7);
          if ( v18 == 0 )
LABEL_43:
            __fastfail(5u);
          v17 = (char *)((v18 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
          *((_QWORD *)v17 - 1) = v18;
        }
      }
      else
      {
        v17 = nullptr;
      }
      v19 = v12 & 0xFFFFFFFFFFFFFFF0uLL;
      *(_DWORD *)&v17[v19] = v43;
      *(_DWORD *)&v17[v19 + 4] = v44;
      *(_DWORD *)&v17[v19 + 8] = v45;
      *(_DWORD *)&v17[v19 + 12] = v46;
      v20 = lpMem[0];
      v21 = v17;
      if ( v11 == lpMem[1] )
      {
        v22 = (char *)((char *)lpMem[1] - (char *)lpMem[0]);
      }
      else
      {
        sub_140E82100(a1: v17, a2: lpMem[0], a3: v11 - (char *)lpMem[0]);
        v22 = (char *)((char *)lpMem[1] - (char *)v11);
        v21 = &v17[v19 + 16];
        v20 = v11;
      }
      sub_140E82100(a1: v21, a2: v20, a3: v22);
      if ( lpMem[0] != nullptr )
      {
        if ( ((v41 - (char *)lpMem[0]) & 0xFFFFFFFFFFFFFFF0uLL) < 0x1000 )
        {
          v23 = lpMem[0];
        }
        else
        {
          v23 = *((void **)lpMem[0] - 1);
          if ( (unsigned __int64)((char *)lpMem[0] - (char *)v23 - 8) > 0x1F )
            goto LABEL_43;
        }
        sub_1409DB4C0(lpMem: v23);
      }
      lpMem[0] = v17;
      *((_QWORD *)&v7 + 1) = &v17[16 * v14];
      *(_QWORD *)&v7 = &v17[v16];
      v41 = &v17[v16];
    }
    else
    {
      **((_DWORD **)&v7 + 1) = *(_DWORD *)v5;
      *(_DWORD *)(*((_QWORD *)&v7 + 1) + 4LL) = v8;
      *(_DWORD *)(*((_QWORD *)&v7 + 1) + 8LL) = v9;
      *(_DWORD *)(*((_QWORD *)&v7 + 1) + 12LL) = v10;
      *((_QWORD *)&v7 + 1) = (char *)lpMem[1] + 16;
      *(_QWORD *)&v7 = v41;
    }
    lpMem[1] = *((LPVOID *)&v7 + 1);
    v5 += 6;
  }
  while ( v5 != v36 );
  v24 = 1;
  v25 = *(_QWORD *)(a1 + 504);
  v26 = *(_QWORD *)(a1 + 512);
  if ( v25 != v26 )
  {
    do
    {
      v27 = *(unsigned int *)(v25 + 12);
      v28 = *(_DWORD **)(a1 + 600);
      v29 = *(_DWORD **)(a1 + 608);
      if ( v28 == v29 )
      {
LABEL_35:
        if ( sub_1409D1F10(a1: *(_QWORD *)(a1 + 552), a2: *(_QWORD *)(a1 + 560), a3: v27) == *(_QWORD *)(a1 + 560) )
        {
          if ( (unsigned __int8)sub_140059D90(a1: off_140FAC968, a2: "Material %u is not owned.", *(_DWORD *)(v25 + 12)) != 0 )
            __debugbreak();
          v24 = 0;
        }
      }
      else
      {
        while ( *v28 != (_DWORD)v27 )
        {
          if ( ++v28 == v29 )
            goto LABEL_35;
        }
      }
      v25 += 48;
    }
    while ( v25 != v26 );
    if ( v24 == 0 )
    {
      if ( (unsigned __int8)sub_140059D90(
                              a1: off_140FAC990,
                              a2: "CustomizationRulesManager::RequestApplyStableCustomization: Failed validation, trying to a"
                              "pply non-owned materials.") == 0 )
        goto LABEL_60;
LABEL_53:
      __debugbreak();
    }
    *((LPVOID *)&v7 + 1) = lpMem[1];
  }
  v30 = lpMem[0];
  if ( (unsigned __int64)((__int64)(*((_QWORD *)&v7 + 1) - (unsigned __int64)lpMem[0]) >> 4) <= 1
    || *(_BYTE *)(a1 + 643) != 0 )
  {
    v31 = qword_14138A6F0;
    if ( qword_14138A6F0 == 0 )
    {
      if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
        __debugbreak();
      sub_1409E29B8(a1: 999);
      __debugbreak();
    }
    v32 = sub_1405FD2E0(a1: qword_14138A6F0, a2: v39, a3: "Network");
    if ( (unsigned __int8)sub_1406006A0(a1: v31, a2: v32, a3: 122) != 0 )
    {
      sub_1405F1D60(a1: &v36, a2: *(unsigned int *)(v32 + 12), a3: *(unsigned int *)(v32 + 8));
    }
    else
    {
      v37 = 0;
      v38 = 195948557;
    }
    v36 = &PXEngine::SafeActorPtrAs<CPXNetwork>::`vftable';
    v33 = sub_1405F1EE0(a1: (__int64)&v36);
    if ( v33 != 0 )
    {
      v34 = sub_1404B2460(a1: &unk_141314190, a2: v42, a3: lpMem, a4: a1 + 643);
      sub_1407D6BC0(a1: v33, a2: v34);
    }
    goto LABEL_60;
  }
  if ( lpMem[0] != *((LPVOID *)&v7 + 1) )
  {
    do
    {
      if ( (unsigned __int8)sub_140059D90(
                              a1: off_140FAC9B8,
                              a2: "Category: %u, Mesh: %u, SubsetHash: %u, Material %u",
                              *v30,
                              v30[1],
                              v30[2],
                              v30[3]) != 0 )
        __debugbreak();
      v30 += 4;
    }
    while ( v30 != *((_DWORD **)&v7 + 1) );
    *((LPVOID *)&v7 + 1) = lpMem[1];
  }
  if ( (unsigned __int8)sub_140059D90(
                          a1: off_140FAC9E0,
                          a2: "CustomizationRulesManager::RequestApplyStableCustomization: Too many requests %u for a materia"
                          "l change (should be 1)",
                          (__int64)(*((_QWORD *)&v7 + 1) - (unsigned __int64)lpMem[0]) >> 4) != 0 )
    goto LABEL_53;
LABEL_60:
  result = lpMem[0];
  if ( lpMem[0] != nullptr )
  {
    if ( ((v41 - (char *)lpMem[0]) & 0xFFFFFFFFFFFFFFF0uLL) < 0x1000 )
    {
      return (LPVOID)sub_1409DB4C0(lpMem: lpMem[0]);
    }
    else
    {
      v35 = *((void **)lpMem[0] - 1);
      if ( (unsigned __int64)((char *)lpMem[0] - (char *)v35 - 8) > 0x1F )
        __fastfail(5u);
      return (LPVOID)sub_1409DB4C0(lpMem: v35);
    }
  }
  return result;
}