__int64 __fastcall sub_1407D0120(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  void (__fastcall ***v13)(_QWORD, __int64, __int64, __int64); // rcx
  __m128i *v14; // r8
  __int64 v15; // rdx
  void *v16; // rcx
  unsigned __int64 v17; // rdx
  void *v18; // rcx
  __int64 *v19; // rsi
  __int64 v20; // rax
  _BYTE *v21; // rbx
  const void *v22; // rax
  void *v23; // rcx
  __int64 v24; // rax
  char v25; // bl
  void *v26; // rcx
  __int64 *v27; // r14
  __int64 v28; // rbx
  __int128 *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // r8
  void (__fastcall ***v33)(_QWORD, __int64); // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  void (__fastcall ***v36)(_QWORD, __int64); // r8
  __int64 v37; // rdx
  __int64 v38; // rbx
  char v39; // si
  void (__fastcall ***v40)(_QWORD, __int64); // rcx
  char **v41; // rcx
  __m128i si128; // [rsp+30h] [rbp-59h] BYREF
  __int64 v43; // [rsp+40h] [rbp-49h]
  unsigned __int64 v44; // [rsp+48h] [rbp-41h]
  char v45; // [rsp+50h] [rbp-39h]
  _QWORD v46[4]; // [rsp+60h] [rbp-29h] BYREF
  __int128 v47; // [rsp+80h] [rbp-9h] BYREF
  __int128 v48; // [rsp+90h] [rbp+7h]

  v4 = *(_QWORD *)(a1 + 328);
  if ( v4 != 0 && (*(_BYTE *)(a1 + 336) == 0 || *(_BYTE *)(v4 + 232) == 0) )
  {
    *(_QWORD *)&v47 = 0;
    result = sub_1407B00C0(a1: a1 + 328, a2: &v47);
    if ( (_DWORD)result != 0 )
      return result;
    v7 = *(_QWORD *)(a1 + 328);
    *(_QWORD *)(a1 + 328) = 0;
    *(_QWORD *)&v47 = v7;
    BYTE8(v47) = 1;
    if ( v7 == 0 || *(_BYTE *)(v7 + 232) != 0 )
LABEL_116:
      sub_1401B7680(a1: 4);
    LOBYTE(v6) = 1;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 16LL))(a1: v7, a2: v6);
    v10 = v8;
    si128.m128i_i8[0] = 0;
    v45 = 0;
    if ( *(_BYTE *)(v8 + 32) != 0 )
    {
      v9 = *(_QWORD *)(v8 + 16);
      *(_QWORD *)(v8 + 16) = 0;
      v11 = *(_QWORD *)(v8 + 8);
      *(_QWORD *)(v8 + 8) = 0;
      v12 = *(_QWORD *)v8;
      *(_QWORD *)v8 = 0;
      si128.m128i_i64[0] = v12;
      si128.m128i_i64[1] = v11;
      v43 = v9;
      v45 = 1;
    }
    else
    {
      si128 = 0;
      v43 = 0;
      v44 = 0;
      si128 = *(__m128i *)v8;
      v43 = *(_QWORD *)(v8 + 16);
      v44 = *(_QWORD *)(v8 + 24);
      *(_QWORD *)(v8 + 16) = 0;
      *(_QWORD *)(v8 + 24) = 15;
      *(_BYTE *)v8 = 0;
      v45 = 0;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 8), 0xFFFFFFFF) == 1 )
    {
      v13 = *(void (__fastcall ****)(_QWORD, __int64, __int64, __int64))(v7 + 248);
      if ( v13 != nullptr )
        (**v13)(a1: v13, a2: v7, a3: v9, a4: v8);
      else
        (**(void (__fastcall ***)(__int64, __int64, __int64, __int64))v7)(a1: v7, a2: 1, a3: v9, a4: v8);
    }
    if ( v45 == 0 )
    {
      v14 = &si128;
      if ( v44 > 0xF )
        v14 = (__m128i *)si128.m128i_i64[0];
      if ( (unsigned __int8)sub_140059D90(a1: off_141013D70, a2: "ResolveUdp failed: '%s'", v14->m128i_i8) != 0 )
        __debugbreak();
      result = sub_140059D90(a1: off_141013DB8, a2: "ProcessConnect: Failed to resolve server hostname.");
      if ( (_BYTE)result != 0 )
        __debugbreak();
      *(_DWORD *)(a1 + 556) = 3071;
      if ( *(_DWORD *)(a1 + 312) == 1 )
        goto LABEL_26;
      *(_DWORD *)(a1 + 312) = 1;
      if ( *(_BYTE *)(a1 + 3024) != 2 )
      {
        result = sub_1407D4850(a1);
LABEL_26:
        if ( v45 != 0 )
        {
          v16 = (void *)si128.m128i_i64[0];
          if ( si128.m128i_i64[0] == 0 )
            return result;
          v17 = (v43 - si128.m128i_i64[0]) & 0xFFFFFFFFFFFFFFE0uLL;
        }
        else
        {
          if ( v44 <= 0xF )
            return result;
          v16 = (void *)si128.m128i_i64[0];
          v17 = v44 + 1;
        }
        if ( v17 < 0x1000 )
          return sub_1409DB4C0(lpMem: v16);
        if ( (unsigned __int64)v16 - *((_QWORD *)v16 - 1) - 8 <= 0x1F )
        {
          v16 = *((void **)v16 - 1);
          return sub_1409DB4C0(lpMem: v16);
        }
LABEL_83:
        __fastfail(5u);
      }
      v15 = *(_QWORD *)&nExitCode;
      if ( *(_QWORD *)&nExitCode != 0 )
      {
LABEL_25:
        result = sub_1407B75D0(a1, a2: v15, a3: 1);
        goto LABEL_26;
      }
      goto LABEL_112;
    }
    if ( si128.m128i_i64[0] == si128.m128i_i64[1] )
    {
      result = sub_140059D90(
                 a1: off_141013DE0,
                 a2: "ProcessConnect: No endpoints found when resolving server hostname.",
                 v9,
                 v10);
      if ( (_BYTE)result != 0 )
        __debugbreak();
      *(_DWORD *)(a1 + 556) = 3071;
      if ( *(_DWORD *)(a1 + 312) == 1 )
        goto LABEL_26;
      *(_DWORD *)(a1 + 312) = 1;
      if ( *(_BYTE *)(a1 + 3024) != 2 )
      {
        result = sub_1407D4850(a1);
        goto LABEL_26;
      }
      v15 = *(_QWORD *)&nExitCode;
      if ( *(_QWORD *)&nExitCode != 0 )
        goto LABEL_25;
LABEL_112:
      if ( (unsigned __int8)sub_140059CA0(a1: off_140F34FA8) != 0 )
        __debugbreak();
      sub_1409E29B8(a1: 999);
LABEL_115:
      sub_1409E29B8(a1: 999);
      goto LABEL_116;
    }
    sub_1407B3EB0(a1: a1 + 344, a2: &si128, a3: v9, a4: v10);
    if ( (unsigned __int8)sub_140059D90(
                            a1: off_141013E08,
                            a2: "Resolved %zu endpoints.",
                            (__int64)(*(_QWORD *)(a1 + 352) - *(_QWORD *)(a1 + 344)) >> 5) != 0 )
      __debugbreak();
    if ( v45 != 0 )
    {
      v18 = (void *)si128.m128i_i64[0];
      if ( si128.m128i_i64[0] != 0 )
      {
        if ( ((v43 - si128.m128i_i64[0]) & 0xFFFFFFFFFFFFFFE0uLL) >= 0x1000 )
        {
          if ( (unsigned __int64)(si128.m128i_i64[0] - *(_QWORD *)(si128.m128i_i64[0] - 8) - 8) > 0x1F )
            goto LABEL_83;
          v18 = *(void **)(si128.m128i_i64[0] - 8);
        }
        sub_1409DB4C0(lpMem: v18);
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_140EEE200);
      v43 = 19937;
    }
    else
    {
      if ( v44 > 0xF )
      {
        v23 = (void *)si128.m128i_i64[0];
        if ( v44 + 1 >= 0x1000 )
        {
          if ( (unsigned __int64)(si128.m128i_i64[0] - *(_QWORD *)(si128.m128i_i64[0] - 8) - 8) > 0x1F )
            goto LABEL_83;
          v23 = *(void **)(si128.m128i_i64[0] - 8);
        }
        sub_1409DB4C0(lpMem: v23);
      }
      si128.m128i_i64[0] = 19937;
      v43 = 0;
      v44 = 31;
    }
  }
  v19 = (__int64 *)(a1 + 368);
  v20 = *(_QWORD *)(a1 + 368);
  if ( v20 != 0 )
  {
    v21 = (_BYTE *)(a1 + 376);
    if ( *(_BYTE *)(a1 + 376) == 0 || *(_BYTE *)(v20 + 184) == 0 )
    {
LABEL_97:
      if ( *v19 == 0 || *v21 != 0 && *(_BYTE *)(*v19 + 184) != 0 )
      {
        if ( (unsigned __int8)sub_140059CA0(a1: off_141013EF8) != 0 )
          __debugbreak();
        goto LABEL_115;
      }
      *(_QWORD *)&v47 = 0;
      result = sub_1407B0290(a1: a1 + 368, a2: &v47);
      if ( (_DWORD)result == 0 )
      {
        v38 = *v19;
        *v19 = 0;
        *(_QWORD *)&v47 = v38;
        BYTE8(v47) = 1;
        if ( v38 == 0 || *(_BYTE *)(v38 + 184) != 0 )
          goto LABEL_123;
        LOBYTE(v37) = 1;
        v39 = *(_BYTE *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v38 + 16LL))(a1: v38, a2: v37);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v38 + 8), 0xFFFFFFFF) == 1 )
        {
          v40 = *(void (__fastcall ****)(_QWORD, __int64))(v38 + 200);
          if ( v40 != nullptr )
            (**v40)(a1: v40, a2: v38);
          else
            (**(void (__fastcall ***)(__int64, __int64))v38)(a1: v38, a2: 1);
        }
        if ( v39 != 0 )
          return sub_1407C1AF0(a1, a2);
        else
          return sub_1407B5F40(a1);
      }
      return result;
    }
  }
  v22 = *(const void **)(a1 + 344);
  if ( v22 != *(const void **)(a1 + 352) )
  {
    qmemcpy(v46, v22, sizeof(v46));
    v24 = sub_140A4BCF0(a1: &v47, a2: v46);
    if ( *(_QWORD *)(v24 + 24) > 0xFu )
      v24 = *(_QWORD *)v24;
    v25 = sub_140059D90(a1: off_141013E58, a2: "Connecting to endpoint '%s'", (const char *)v24);
    if ( *((_QWORD *)&v48 + 1) > 0xFu )
    {
      v26 = (void *)v47;
      if ( (unsigned __int64)(*((_QWORD *)&v48 + 1) + 1LL) >= 0x1000 )
      {
        if ( (unsigned __int64)(v47 - *(_QWORD *)(v47 - 8) - 8) > 0x1F )
          goto LABEL_83;
        v26 = *(void **)(v47 - 8);
      }
      sub_1409DB4C0(lpMem: v26);
    }
    *(_QWORD *)&v47 = 19937;
    *(_QWORD *)&v48 = 0;
    *((_QWORD *)&v48 + 1) = 31;
    if ( v25 != 0 )
      __debugbreak();
    sub_140E82100(
      a1: *(_QWORD *)(a1 + 344),
      a2: *(_QWORD *)(a1 + 344) + 32LL,
      a3: *(_QWORD *)(a1 + 352) - (*(_QWORD *)(a1 + 344) + 32LL));
    *(_QWORD *)(a1 + 352) -= 32LL;
    v27 = *(__int64 **)(a1 + 2648);
    if ( v27 != nullptr )
    {
      v28 = *v27;
      v29 = (__int128 *)sub_140A4B200(a1: &si128, a2: LODWORD(v46[0]), a3: 0);
      v47 = *v29;
      v48 = v29[1];
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int128 *))(v28 + 8))(a1: v27, a2: &v47) == 0 )
      {
        result = sub_140059D90(a1: off_141013EA8, a2: "ProcessConnect: Bind failed!");
        if ( (_BYTE)result != 0 )
          __debugbreak();
        return result;
      }
      v30 = *(_QWORD *)(a1 + 2640);
      if ( v30 != 0 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(a1: v30);
        v31 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD *, __int64, _BYTE))(**(_QWORD **)(a1 + 2640) + 32LL))(
                a1: *(_QWORD *)(a1 + 2640),
                a2: &v47,
                a3: v46,
                a4: 534,
                a5: *(_BYTE *)(a1 + 481));
        if ( v19 != (__int64 *)v31 )
        {
          v32 = *v19;
          if ( *v19 != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v32 + 8), 0xFFFFFFFF) == 1 )
          {
            v33 = *(void (__fastcall ****)(_QWORD, __int64))(v32 + 200);
            if ( v33 != nullptr )
              (**v33)(a1: v33, a2: v32);
            else
              (**(void (__fastcall ***)(__int64, __int64))v32)(a1: v32, a2: 1);
          }
          v34 = *(_QWORD *)v31;
          *(_QWORD *)v31 = 0;
          *v19 = v34;
          *(_BYTE *)(a1 + 376) = *(_BYTE *)(v31 + 8);
        }
        v21 = (_BYTE *)(a1 + 376);
        v35 = v47;
        if ( (_QWORD)v47 != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v47 + 8), 0xFFFFFFFF) == 1 )
        {
          v36 = *(void (__fastcall ****)(_QWORD, __int64))(v35 + 200);
          if ( v36 != nullptr )
          {
            (**v36)(a1: *(_QWORD *)(v35 + 200), a2: v35);
            v21 = (_BYTE *)(a1 + 376);
          }
          else
          {
            (**(void (__fastcall ***)(__int64, __int64))v35)(a1: v35, a2: 1);
          }
        }
        goto LABEL_97;
      }
      v41 = off_141013ED0;
    }
    else
    {
      v41 = off_141013E80;
    }
LABEL_120:
    if ( (unsigned __int8)sub_140059CA0(a1: v41) != 0 )
      __debugbreak();
    sub_1409E29B8(a1: 999);
LABEL_123:
    sub_1401B7680(a1: 4);
  }
  result = sub_140059D90(
             a1: off_141013E30,
             a2: "ProcessConnect: Exhausted all available endpoints when trying to connect to the server.");
  if ( (_BYTE)result != 0 )
    __debugbreak();
  *(_DWORD *)(a1 + 556) = 3070;
  if ( *(_DWORD *)(a1 + 312) != 1 )
  {
    *(_DWORD *)(a1 + 312) = 1;
    if ( *(_BYTE *)(a1 + 3024) != 2 )
      return sub_1407D4850(a1);
    if ( *(_QWORD *)&nExitCode != 0 )
      return sub_1407B75D0(a1, a2: *(_QWORD *)&nExitCode, a3: 1);
    v41 = off_140F34FA8;
    goto LABEL_120;
  }
  return result;
}