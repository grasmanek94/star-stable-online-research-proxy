bool __fastcall sub_1404FE4F0(__int64 *a1, LPVOID *a2)
{
  char *v4; // rbx
  char *v5; // rdi
  void *v6; // rcx
  char *v8; // rsi
  char *v9; // rbx
  LPVOID v10; // rdx
  LPVOID v11; // rcx
  LPVOID v12; // rax
  _BYTE *v13; // rcx
  char v14; // al
  unsigned __int8 (__fastcall *v15)(__int64 *, char *, __int64); // r9
  char v16; // r14
  char *v17; // rbx
  char *i; // rsi
  char *v19; // r8
  _BYTE *v20; // rcx
  __int64 v21; // rax
  unsigned __int8 *v22; // rax
  __int64 v23; // rax
  LPVOID lpMem[3]; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v25[40]; // [rsp+38h] [rbp-28h] BYREF
  char v26; // [rsp+80h] [rbp+20h] BYREF
  char v27; // [rsp+88h] [rbp+28h] BYREF

  v26 = *((_BYTE *)a2 + 24);
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, char *, __int64))(*a1 + 16))(a1, a2: &v26, a3: 1) == 0 )
    return false;
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 8))(a1) == 0 )
  {
    if ( v26 == 0 )
      return sub_1402B8840(a1, (char *)a2) != 0;
    if ( *((_BYTE *)a2 + 24) == 0 )
    {
      v21 = sub_14001D730(a1: a2);
      v22 = (unsigned __int8 *)sub_14001D730(a1: v21);
      v23 = sub_140500FB0(a1: v25, a2: *v22);
      sub_140500BF0(a1: v23);
    }
    return (unsigned __int8)sub_1404FE100(a1, a2) != 0;
  }
  if ( v26 != 0 )
  {
    memset(lpMem, 0, sizeof(lpMem));
    if ( (unsigned __int8)sub_1404FE100(a1, a2: lpMem) == 0 )
    {
      v4 = (char *)lpMem[0];
      if ( lpMem[0] == nullptr )
        return false;
      v5 = (char *)lpMem[1];
      if ( lpMem[0] != lpMem[1] )
      {
        do
        {
          sub_140502800(a1: v4);
          v4 += 112;
        }
        while ( v4 != v5 );
        v4 = (char *)lpMem[0];
      }
      if ( (unsigned __int64)(112 * (((char *)lpMem[2] - (char *)v4) / 112)) < 0x1000 )
      {
        v6 = v4;
LABEL_13:
        sub_1409DB4C0(lpMem: v6);
        return false;
      }
      v6 = *((void **)v4 - 1);
      if ( (unsigned __int64)(v4 - (_BYTE *)v6 - 8) <= 0x1F )
        goto LABEL_13;
LABEL_40:
      __fastfail(5u);
    }
    if ( *((_BYTE *)a2 + 24) != 0 )
    {
      if ( a2 == lpMem )
      {
        v8 = (char *)lpMem[1];
        v9 = (char *)lpMem[0];
        goto LABEL_21;
      }
      sub_14050BEF0(a1: a2);
      qmemcpy(a2, lpMem, 24);
      *(_OWORD *)lpMem = 0;
      v8 = (char *)_mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
      v9 = nullptr;
    }
    else
    {
      v10 = lpMem[2];
      v11 = lpMem[1];
      v8 = nullptr;
      lpMem[1] = nullptr;
      v12 = lpMem[0];
      v9 = nullptr;
      lpMem[0] = nullptr;
      *a2 = v12;
      a2[1] = v11;
      a2[2] = v10;
      *((_BYTE *)a2 + 24) = 1;
    }
    lpMem[2] = nullptr;
LABEL_21:
    if ( v9 != nullptr )
    {
      if ( v9 != v8 )
      {
        do
        {
          sub_140502800(a1: v9);
          v9 += 112;
        }
        while ( v9 != v8 );
        v9 = (char *)lpMem[0];
      }
      if ( (unsigned __int64)(112 * (((char *)lpMem[2] - (char *)v9) / 112)) < 0x1000 )
      {
        sub_1409DB4C0(lpMem: v9);
        return true;
      }
      else
      {
        v13 = *((_BYTE **)v9 - 1);
        if ( (unsigned __int64)(v9 - v13 - 8) > 0x1F )
          goto LABEL_40;
        sub_1409DB4C0(lpMem: v13);
        return true;
      }
    }
    return true;
  }
  v14 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 8))(a1);
  v15 = *(unsigned __int8 (__fastcall **)(__int64 *, char *, __int64))(*a1 + 16);
  if ( v14 != 0 )
  {
    v27 = 0;
    if ( v15(a1, a2: &v27, a3: 1) == 0 )
      return false;
    v16 = v27;
  }
  else
  {
    v16 = 0;
    v27 = 0;
    if ( v15(a1, a2: &v27, a3: 1) == 0 )
      return false;
  }
  if ( *((_BYTE *)a2 + 24) != 0 )
  {
    v17 = (char *)*a2;
    if ( *a2 != nullptr )
    {
      for ( i = (char *)a2[1]; v17 != i; v17 += 112 )
        sub_140502800(a1: v17);
      v19 = (char *)*a2;
      if ( (unsigned __int64)(112 * (((_BYTE *)a2[2] - (_BYTE *)*a2) / 112)) < 0x1000 )
      {
        v20 = *a2;
      }
      else
      {
        v20 = *((_BYTE **)v19 - 1);
        if ( (unsigned __int64)(v19 - v20 - 8) > 0x1F )
          goto LABEL_40;
      }
      sub_1409DB4C0(lpMem: v20);
    }
    *a2 = (LPVOID)19937;
    a2[1] = (LPVOID)19937;
    a2[2] = (LPVOID)19937;
    *(_BYTE *)a2 = v16;
    *((_BYTE *)a2 + 24) = 0;
    return true;
  }
  else
  {
    *(_BYTE *)a2 = v16;
    return true;
  }
}