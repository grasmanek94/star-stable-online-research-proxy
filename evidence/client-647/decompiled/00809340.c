__int64 __fastcall sub_140809340(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int v8; // r15d
  __int64 v9; // rax
  char *v10; // rbx
  unsigned int v11; // ecx
  __int64 result; // rax
  int v13; // r15d
  __int64 v14; // rcx
  __int64 v15; // rdx
  void *v16; // rcx
  unsigned int v17; // r14d
  __int64 v18; // rax
  unsigned int v19; // ecx
  __int64 v20; // r12
  __int64 v21; // rcx
  int v22; // r8d
  __int64 v23; // rdx
  unsigned int v24; // eax
  void *v25; // rcx
  int v26; // [rsp+30h] [rbp-89h] BYREF
  unsigned int v27; // [rsp+38h] [rbp-81h] BYREF
  int v28; // [rsp+40h] [rbp-79h] BYREF
  char *v29; // [rsp+48h] [rbp-71h] BYREF
  LPVOID lpMem; // [rsp+50h] [rbp-69h] BYREF
  void **v31; // [rsp+58h] [rbp-61h] BYREF
  void *v32; // [rsp+60h] [rbp-59h]
  unsigned int v33; // [rsp+68h] [rbp-51h]
  __int64 v34; // [rsp+6Ch] [rbp-4Dh]
  __int64 v35; // [rsp+78h] [rbp-41h]
  void *v36; // [rsp+80h] [rbp-39h] BYREF
  _BYTE v37[2]; // [rsp+88h] [rbp-31h] BYREF
  __int16 v38; // [rsp+8Ah] [rbp-2Fh]
  int v39; // [rsp+8Ch] [rbp-2Dh]
  int v40; // [rsp+90h] [rbp-29h]
  __int128 v41; // [rsp+94h] [rbp-25h]
  __int64 v42; // [rsp+A8h] [rbp-11h] BYREF
  unsigned int v43; // [rsp+B0h] [rbp-9h] BYREF
  __int16 v44; // [rsp+B4h] [rbp-5h]
  __int16 v45; // [rsp+B6h] [rbp-3h]
  int v46; // [rsp+130h] [rbp+77h] BYREF

  v46 = a3;
  v35 = a1;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 288) + 8LL))(a1: *(_QWORD *)(a1 + 288));
  v8 = *(_DWORD *)(a4 + 48);
  if ( v8 > 0x400 )
  {
    v27 = ((v8 - 1) >> 10) + 1;
    v29 = *(char **)(a4 + 40);
    v26 = 0;
    while ( 1 )
    {
      v17 = 1024;
      if ( v8 < 0x400 )
        v17 = v8;
      v18 = sub_1409DBF00(a1: v17 + 48);
      v10 = (char *)v18;
      if ( v18 != 0 )
        sub_140E827B0(a1: v18, a2: 0, a3: v17 + 48);
      else
        v10 = nullptr;
      lpMem = v10;
      v32 = v10;
      v33 = v17 + 48;
      v34 = 0;
      v31 = &PXEngine::PreallocatedByteStreamWriter::`vftable';
      v37[0] = 0;
      v38 = 0;
      v39 = 0;
      v40 = -1;
      v41 = 0;
      sub_1409CB2E0(a1: &v42);
      v37[0] = 3;
      v38 = *(_WORD *)(a4 + 4);
      v39 = *(_DWORD *)(a4 + 12);
      v40 = *(_DWORD *)(a4 + 8);
      v41 = *(_OWORD *)(a4 + 16);
      v42 = *(_QWORD *)(a4 + 32);
      v19 = *(_DWORD *)(a2 + 120);
      *(_DWORD *)(a2 + 120) = v19 + 1;
      v43 = v19;
      v44 = v27;
      v45 = v26;
      if ( sub_140801400(a1: (__int64 *)&v31, a2: (__int64)v37) == 0 )
        break;
      if ( (unsigned __int8)sub_140A4C2A0(a1: &v31, a2: v29, a3: v17) == 0 )
      {
        result = sub_140059D90(a1: off_14101B630, a2: "PXUdpMessageLayer: Failed To Write Payload!");
        goto LABEL_36;
      }
      v20 = v35;
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v35 + 368) + 8LL))(a1: *(_QWORD *)(v35 + 368));
      v28 = v34;
      v36 = v10;
      v21 = *(_QWORD *)(v20 + 64);
      if ( v21 == 0 )
      {
        sub_1409D2AC0(a1: 0);
        goto LABEL_43;
      }
      (*(void (__fastcall **)(__int64, __int64, void **, int *))(*(_QWORD *)v21 + 16LL))(
        a1: v21,
        a2,
        a3: &v36,
        a4: &v28);
      v22 = v34;
      v28 = v34;
      v23 = *(_QWORD *)(a2 + 136);
      if ( v23 == *(_QWORD *)(a2 + 144) )
      {
        sub_140805990(
          a1: a2 + 128,
          a2: v23,
          a3: (unsigned int)&v46,
          a4: (unsigned int)&lpMem,
          a5: (__int64)&v28,
          a6: (__int64)&v43);
        v25 = lpMem;
      }
      else
      {
        v24 = v43;
        v25 = nullptr;
        *(_DWORD *)v23 = a3;
        *(_DWORD *)(v23 + 4) = 1;
        *(_QWORD *)(v23 + 8) = v10;
        *(_DWORD *)(v23 + 16) = v22;
        *(_DWORD *)(v23 + 20) = v24;
        *(_QWORD *)(a2 + 136) += 24LL;
      }
      v29 += v17;
      v8 -= v17;
      if ( v25 != nullptr )
        sub_1409DB4C0(lpMem: v25);
      ++v26;
      if ( v8 == 0 )
        return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v20 + 320) + 8LL))(a1: *(_QWORD *)(v20 + 320));
    }
    result = sub_140059D90(a1: off_14101B608, a2: "PXUdpMessageLayer: Failed Serialize Splitted Packet Header!");
LABEL_36:
    if ( (_BYTE)result != 0 )
      __debugbreak();
    goto LABEL_38;
  }
  v9 = sub_1409DBF00(a1: v8 + 48);
  v10 = (char *)v9;
  if ( v9 != 0 )
    sub_140E827B0(a1: v9, a2: 0, a3: v8 + 48);
  else
    v10 = nullptr;
  v29 = v10;
  v32 = v10;
  v33 = v8 + 48;
  v34 = 0;
  v31 = &PXEngine::PreallocatedByteStreamWriter::`vftable';
  v38 = 0;
  v39 = 0;
  v40 = -1;
  v41 = 0;
  sub_1409CB2E0(a1: &v42);
  v37[0] = 1;
  v38 = *(_WORD *)(a4 + 4);
  v39 = *(_DWORD *)(a4 + 12);
  v40 = *(_DWORD *)(a4 + 8);
  v41 = *(_OWORD *)(a4 + 16);
  v42 = *(_QWORD *)(a4 + 32);
  v11 = *(_DWORD *)(a2 + 120);
  *(_DWORD *)(a2 + 120) = v11 + 1;
  v43 = v11;
  if ( sub_140801400(a1: (__int64 *)&v31, a2: (__int64)v37) == 0 )
  {
    result = sub_140059D90(a1: off_14101B580, a2: "PXUdpMessageLayer: Failed Serialize Packet Header!");
    if ( (_BYTE)result != 0 )
      __debugbreak();
LABEL_38:
    if ( v10 == nullptr )
      return result;
    v16 = v10;
    return sub_1409DB4C0(lpMem: v16);
  }
  if ( (unsigned __int8)sub_140A4C2A0(a1: &v31, a2: *(_QWORD *)(a4 + 40), a3: *(unsigned int *)(a4 + 48)) == 0 )
  {
    result = sub_140059D90(a1: off_14101B5E0, a2: "PXUdpMessageLayer: Failed To Write Payload!");
    if ( (_BYTE)result != 0 )
      __debugbreak();
    goto LABEL_38;
  }
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 368) + 8LL))(a1: *(_QWORD *)(a1 + 368));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 304) + 8LL))(a1: *(_QWORD *)(a1 + 304));
  v13 = v34;
  v26 = v34;
  v27 = v34;
  lpMem = v10;
  v14 = *(_QWORD *)(a1 + 64);
  if ( v14 == 0 )
  {
LABEL_43:
    sub_1409D2AC0(a1: v14);
    JUMPOUT(0x1408097E6LL);
  }
  (*(void (__fastcall **)(__int64, __int64, LPVOID *, unsigned int *))(*(_QWORD *)v14 + 16LL))(
    a1: v14,
    a2,
    a3: &lpMem,
    a4: &v27);
  v15 = *(_QWORD *)(a2 + 136);
  if ( v15 == *(_QWORD *)(a2 + 144) )
  {
    result = sub_140805990(
               a1: (int)a2 + 128,
               a2: v15,
               a3: (unsigned int)&v46,
               a4: (unsigned int)&v29,
               a5: (__int64)&v26,
               a6: (__int64)&v43);
    v16 = v29;
  }
  else
  {
    result = v43;
    v16 = nullptr;
    *(_DWORD *)v15 = a3;
    *(_DWORD *)(v15 + 4) = 1;
    *(_QWORD *)(v15 + 8) = v10;
    *(_DWORD *)(v15 + 16) = v13;
    *(_DWORD *)(v15 + 20) = result;
    *(_QWORD *)(a2 + 136) += 24LL;
  }
  if ( v16 != nullptr )
    return sub_1409DB4C0(lpMem: v16);
  return result;
}