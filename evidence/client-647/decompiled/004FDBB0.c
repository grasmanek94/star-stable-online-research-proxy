bool __fastcall sub_1404FDBB0(__int64 *a1, __int64 a2)
{
  void *v4; // rcx
  char *v5; // rbx
  char *v6; // rdi
  void *v7; // rcx
  char v9; // r8
  LPVOID v10; // rdx
  LPVOID v11; // rcx
  LPVOID v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  LPVOID v15; // rax
  __int64 v16; // rdx
  LPVOID v17; // rcx
  LPVOID v18; // rax
  void *v19; // rcx
  __m128i v20; // xmm0
  void *v21; // rcx
  char *v22; // rbx
  char *v23; // rdi
  void *v24; // rcx
  char v25; // al
  unsigned __int8 (__fastcall *v26)(__int64 *, __int64 **, __int64); // r9
  char v27; // si
  __int64 v28; // rax
  void *v29; // rcx
  __int64 v30; // rax
  void *v31; // rcx
  __int64 v32; // rax
  unsigned __int8 *v33; // rax
  __int64 v34; // rax
  LPVOID v35[2]; // [rsp+20h] [rbp-49h] BYREF
  LPVOID lpMem[2]; // [rsp+30h] [rbp-39h] BYREF
  __m128i si128; // [rsp+40h] [rbp-29h]
  LPVOID v38[2]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v39; // [rsp+60h] [rbp-9h]
  char v40; // [rsp+68h] [rbp-1h]
  _QWORD v41[2]; // [rsp+70h] [rbp+7h] BYREF
  _QWORD v42[8]; // [rsp+80h] [rbp+17h] BYREF
  char v43; // [rsp+D0h] [rbp+67h] BYREF
  __int64 *v44; // [rsp+D8h] [rbp+6Fh] BYREF

  v43 = *(_BYTE *)(a2 + 88);
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, char *, __int64))(*a1 + 16))(a1, a2: &v43, a3: 1) == 0 )
    return false;
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 8))(a1) == 0 )
  {
    if ( v43 == 0 )
      return sub_1402B8840(a1, (char *)a2) != 0;
    if ( *(_BYTE *)(a2 + 88) == 0 )
    {
      v32 = sub_14001D730(a1: a2);
      v33 = (unsigned __int8 *)sub_14001D730(a1: v32);
      v34 = sub_140501020(a1: v42, a2: *v33);
      sub_140500C20(a1: v34);
    }
    return (unsigned __int8)sub_1404FE980(a1, a2) != 0;
  }
  if ( v43 != 0 )
  {
    *(_OWORD *)v35 = 0;
    *(_OWORD *)lpMem = 0;
    si128 = 0;
    v40 = 0;
    v41[0] = 0;
    v42[0] = (char *)v41 + 4;
    v42[1] = v41;
    v42[2] = v38;
    v42[3] = &lpMem[1];
    v42[4] = v35;
    v44 = a1;
    if ( (unsigned __int8)sub_140500C80(a1: v42, a2: &v44, a3: 0) == 0 )
    {
      if ( v40 != 0 )
      {
        sub_14002AE40(a1: v38);
        v40 = 0;
      }
      if ( lpMem[1] != nullptr )
      {
        if ( ((si128.m128i_i64[1] - (unsigned __int64)lpMem[1]) & 0xFFFFFFFFFFFFFFF0uLL) < 0x1000 )
        {
          v4 = lpMem[1];
        }
        else
        {
          v4 = *((void **)lpMem[1] - 1);
          if ( (unsigned __int64)((char *)lpMem[1] - (char *)v4 - 8) > 0x1F )
            goto LABEL_67;
        }
        sub_1409DB4C0(lpMem: v4);
      }
      lpMem[1] = (LPVOID)19937;
      si128 = _mm_load_si128((const __m128i *)&xmmword_140EEE200);
      v5 = (char *)v35[0];
      if ( v35[0] == nullptr )
        return false;
      v6 = (char *)v35[1];
      if ( v35[0] != v35[1] )
      {
        do
        {
          sub_140502800(a1: v5);
          v5 += 112;
        }
        while ( v5 != v6 );
        v5 = (char *)v35[0];
      }
      if ( (unsigned __int64)(112 * (((char *)lpMem[0] - (char *)v5) / 112)) < 0x1000 )
      {
        v7 = v5;
LABEL_21:
        sub_1409DB4C0(lpMem: v7);
        return false;
      }
      v7 = *((void **)v5 - 1);
      if ( (unsigned __int64)(v5 - (_BYTE *)v7 - 8) <= 0x1F )
        goto LABEL_21;
LABEL_67:
      __fastfail(5u);
    }
    if ( *(_BYTE *)(a2 + 88) != 0 )
    {
      sub_140502920(a1: a2, a2: v35);
      v9 = v40;
    }
    else
    {
      v10 = lpMem[0];
      lpMem[0] = nullptr;
      v11 = v35[1];
      v35[1] = nullptr;
      v12 = v35[0];
      v35[0] = nullptr;
      *(_QWORD *)a2 = v12;
      *(_QWORD *)(a2 + 8) = v11;
      *(_QWORD *)(a2 + 16) = v10;
      v13 = si128.m128i_i64[1];
      v14 = si128.m128i_i64[0];
      si128 = 0u;
      v15 = lpMem[1];
      lpMem[1] = nullptr;
      *(_QWORD *)(a2 + 24) = v15;
      *(_QWORD *)(a2 + 32) = v14;
      *(_QWORD *)(a2 + 40) = v13;
      *(_BYTE *)(a2 + 72) = 0;
      v9 = v40;
      if ( v40 != 0 )
      {
        v16 = v39;
        v39 = 0;
        v17 = v38[1];
        v38[1] = nullptr;
        v18 = v38[0];
        v38[0] = nullptr;
        *(_QWORD *)(a2 + 48) = v18;
        *(_QWORD *)(a2 + 56) = v17;
        *(_QWORD *)(a2 + 64) = v16;
        *(_BYTE *)(a2 + 72) = 1;
      }
      *(_QWORD *)(a2 + 80) = v41[0];
      *(_BYTE *)(a2 + 88) = 1;
    }
    if ( v9 != 0 )
    {
      if ( v38[0] != nullptr )
      {
        if ( ((v39 - (unsigned __int64)v38[0]) & 0xFFFFFFFFFFFFFFF0uLL) < 0x1000 )
        {
          v19 = v38[0];
        }
        else
        {
          v19 = *((void **)v38[0] - 1);
          if ( (unsigned __int64)((char *)v38[0] - (char *)v19 - 8) > 0x1F )
            goto LABEL_67;
        }
        sub_1409DB4C0(lpMem: v19);
      }
      v20 = _mm_load_si128((const __m128i *)&xmmword_140EEE200);
      *(__m128i *)v38 = v20;
      v39 = 19937;
      v40 = 0;
    }
    else
    {
      v20 = _mm_load_si128((const __m128i *)&xmmword_140EEE200);
    }
    if ( lpMem[1] != nullptr )
    {
      if ( ((si128.m128i_i64[1] - (unsigned __int64)lpMem[1]) & 0xFFFFFFFFFFFFFFF0uLL) < 0x1000 )
      {
        v21 = lpMem[1];
      }
      else
      {
        v21 = *((void **)lpMem[1] - 1);
        if ( (unsigned __int64)((char *)lpMem[1] - (char *)v21 - 8) > 0x1F )
          goto LABEL_67;
      }
      sub_1409DB4C0(lpMem: v21);
      v20 = _mm_load_si128((const __m128i *)&xmmword_140EEE200);
    }
    lpMem[1] = (LPVOID)19937;
    si128 = v20;
    v22 = (char *)v35[0];
    if ( v35[0] != nullptr )
    {
      v23 = (char *)v35[1];
      if ( v35[0] != v35[1] )
      {
        do
        {
          sub_140502800(a1: v22);
          v22 += 112;
        }
        while ( v22 != v23 );
      }
      if ( (unsigned __int64)(112 * (((char *)lpMem[0] - (char *)v35[0]) / 112)) < 0x1000 )
      {
        sub_1409DB4C0(lpMem: v35[0]);
        return true;
      }
      else
      {
        v24 = *((void **)v35[0] - 1);
        if ( (unsigned __int64)((char *)v35[0] - (char *)v24 - 8) > 0x1F )
          goto LABEL_67;
        sub_1409DB4C0(lpMem: v24);
        return true;
      }
    }
    return true;
  }
  v25 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 8))(a1);
  v26 = *(unsigned __int8 (__fastcall **)(__int64 *, __int64 **, __int64))(*a1 + 16);
  if ( v25 != 0 )
  {
    LOBYTE(v44) = 0;
    if ( v26(a1, a2: &v44, a3: 1) == 0 )
      return false;
    v27 = (char)v44;
  }
  else
  {
    v27 = 0;
    LOBYTE(v44) = 0;
    if ( v26(a1, a2: &v44, a3: 1) == 0 )
      return false;
  }
  if ( *(_BYTE *)(a2 + 88) != 0 )
  {
    if ( *(_BYTE *)(a2 + 72) != 0 )
    {
      v28 = *(_QWORD *)(a2 + 48);
      if ( v28 != 0 )
      {
        if ( ((*(_QWORD *)(a2 + 64) - v28) & 0xFFFFFFFFFFFFFFF0uLL) < 0x1000 )
        {
          v29 = *(void **)(a2 + 48);
        }
        else
        {
          v29 = *(void **)(v28 - 8);
          if ( (unsigned __int64)(v28 - (_QWORD)v29 - 8) > 0x1F )
            goto LABEL_67;
        }
        sub_1409DB4C0(lpMem: v29);
      }
      *(_QWORD *)(a2 + 48) = 19937;
      *(_QWORD *)(a2 + 56) = 19937;
      *(_QWORD *)(a2 + 64) = 19937;
      *(_BYTE *)(a2 + 72) = 0;
    }
    v30 = *(_QWORD *)(a2 + 24);
    if ( v30 != 0 )
    {
      if ( ((*(_QWORD *)(a2 + 40) - v30) & 0xFFFFFFFFFFFFFFF0uLL) < 0x1000 )
      {
        v31 = *(void **)(a2 + 24);
      }
      else
      {
        v31 = *(void **)(v30 - 8);
        if ( (unsigned __int64)(v30 - (_QWORD)v31 - 8) > 0x1F )
          goto LABEL_67;
      }
      sub_1409DB4C0(lpMem: v31);
    }
    *(_QWORD *)(a2 + 24) = 19937;
    *(_QWORD *)(a2 + 32) = 19937;
    *(_QWORD *)(a2 + 40) = 19937;
    sub_14050BEF0(a1: a2);
    *(_QWORD *)a2 = 19937;
    *(_QWORD *)(a2 + 8) = 19937;
    *(_QWORD *)(a2 + 16) = 19937;
    *(_BYTE *)a2 = v27;
    *(_BYTE *)(a2 + 88) = 0;
    return true;
  }
  else
  {
    *(_BYTE *)a2 = v27;
    return true;
  }
}