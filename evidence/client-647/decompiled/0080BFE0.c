bool __fastcall sub_14080BFE0(_DWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  _OWORD *v7; // rsi
  __int64 v8; // rax
  __int64 (__fastcall *v9)(); // r8
  char v10; // al
  _BYTE v12[52]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v13; // [rsp+60h] [rbp-10h]
  int v14; // [rsp+90h] [rbp+20h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1) != 0 )
  {
    v4 = *(_QWORD *)a1;
    LOBYTE(v14) = 0;
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, int *, __int64))(v4 + 16))(a1, a2: &v14, a3: 1) == 0 )
      return false;
    *(_BYTE *)a2 = v14;
  }
  else
  {
    LOBYTE(v14) = *(_BYTE *)a2;
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, int *, __int64))(*(_QWORD *)a1 + 16LL))(a1, a2: &v14, a3: 1) == 0 )
      return false;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1) != 0 )
  {
    v5 = *(_QWORD *)a1;
    LOBYTE(v14) = 0;
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, int *, __int64))(v5 + 16))(a1, a2: &v14, a3: 1) == 0 )
      return false;
    *(_BYTE *)(a2 + 1) = v14;
  }
  else
  {
    LOBYTE(v14) = *(_BYTE *)(a2 + 1);
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, int *, __int64))(*(_QWORD *)a1 + 16LL))(a1, a2: &v14, a3: 1) == 0 )
      return false;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1) != 0 )
  {
    v6 = *(_QWORD *)a1;
    LOBYTE(v14) = 0;
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, int *, __int64))(v6 + 16))(a1, a2: &v14, a3: 1) == 0 )
      return false;
    *(_BYTE *)(a2 + 2) = v14;
  }
  else
  {
    LOBYTE(v14) = *(_BYTE *)(a2 + 2);
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, int *, __int64))(*(_QWORD *)a1 + 16LL))(a1, a2: &v14, a3: 1) == 0 )
      return false;
  }
  v14 = *(_DWORD *)(a2 + 12);
  if ( sub_1401D0820(a1, a2: &v14) == 0 )
    return false;
  *(_DWORD *)(a2 + 12) = v14;
  LOBYTE(v14) = *(_BYTE *)(a2 + 44);
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, int *, __int64))(*(_QWORD *)a1 + 16LL))(a1, a2: &v14, a3: 1) == 0 )
    return false;
  if ( (_BYTE)v14 == 0 )
  {
    *(_BYTE *)(a2 + 44) = 0;
    goto LABEL_23;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1) == 0 )
    goto LABEL_20;
  *(_QWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 24) = 0;
  *(_QWORD *)(a2 + 32) = 0;
  *(_DWORD *)(a2 + 40) = 1065353216;
  if ( *(_BYTE *)(a2 + 44) == 0 )
  {
    *(_BYTE *)(a2 + 44) = 1;
LABEL_20:
    if ( *(_BYTE *)(a2 + 44) == 0 )
      goto LABEL_41;
  }
  if ( (unsigned __int8)sub_140A25C40(a1, a2: a2 + 16) == 0 || (unsigned __int8)sub_140A25B40(a1, a2: a2 + 28) == 0 )
    return false;
LABEL_23:
  v7 = (_OWORD *)(a2 + 48);
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1) == 0 )
  {
    LOBYTE(v14) = *(_BYTE *)(a2 + 116);
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, int *, __int64))(*(_QWORD *)a1 + 16LL))(a1, a2: &v14, a3: 1) == 0 )
      return false;
    if ( (unsigned __int8)v14 < 2uLL )
    {
      v10 = ((__int64 (__fastcall *)(_DWORD *, __int64))funcs_14080C294[(unsigned __int8)v14])(a1, a2: a2 + 48);
      goto LABEL_35;
    }
LABEL_41:
    __fastfail(5u);
  }
  v8 = *(_QWORD *)a1;
  LOBYTE(v14) = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, int *, __int64))(v8 + 16))(a1, a2: &v14, a3: 1) == 0
    || (unsigned __int8)v14 >= 2u )
  {
    return false;
  }
  if ( (unsigned __int8)v14 >= 2uLL )
    goto LABEL_41;
  v9 = funcs_14080C262[(unsigned __int8)v14];
  if ( v9 == sub_14080BF20 )
  {
    *(_OWORD *)&v12[36] = 0;
    *(__m128i *)&v12[20] = _mm_load_si128((const __m128i *)&xmmword_140FED100);
    memset(v12, 0, 20);
    *v7 = *(_OWORD *)v12;
    *(_OWORD *)(a2 + 64) = *(_OWORD *)&v12[16];
    BYTE4(v13) = 0;
    *(_OWORD *)(a2 + 80) = *(_OWORD *)&v12[32];
    *(_OWORD *)(a2 + 96) = 0u;
    *(_QWORD *)(a2 + 112) = v13;
    if ( *(_BYTE *)(a2 + 116) != 0 )
      v7 = nullptr;
    v10 = sub_14080BDB0(a1, a2: v7);
  }
  else
  {
    v10 = ((__int64 (__fastcall *)(_DWORD *, __int64))v9)(a1, a2: a2 + 48);
  }
LABEL_35:
  if ( v10 != 0
    && (unsigned __int8)sub_14080BB90(a1, a2: a2 + 120) != 0
    && (*(unsigned __int8 (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a1 + 16LL))(a1, a2: a2 + 164, a3: 1) != 0
    && sub_1401D0C80(a1, a2: (int *)(a2 + 168)) != 0
    && (unsigned __int8)sub_1404FEC60(a1, a2: a2 + 4) != 0 )
  {
    return sub_1401D0C80(a1, a2: (int *)(a2 + 172)) != 0;
  }
  return false;
}