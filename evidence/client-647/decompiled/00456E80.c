__int64 __fastcall sub_140456E80(__int64 a1, _DWORD *a2)
{
  unsigned __int64 v4; // rdx
  __int128 *v5; // rax
  unsigned __int64 v6; // rdi
  __int128 *v7; // rbx
  char *v8; // rbx
  __int128 *v9; // rdx
  unsigned __int8 v10; // bl
  void *v11; // rcx
  void *v12; // rcx
  unsigned int v14; // [rsp+30h] [rbp-49h] BYREF
  unsigned __int8 v15; // [rsp+34h] [rbp-45h]
  __int128 v16; // [rsp+40h] [rbp-39h] BYREF
  unsigned __int64 v17; // [rsp+50h] [rbp-29h]
  unsigned __int64 v18; // [rsp+58h] [rbp-21h]
  __int128 v19; // [rsp+60h] [rbp-19h] BYREF
  __int64 v20; // [rsp+70h] [rbp-9h]
  unsigned __int64 v21; // [rsp+78h] [rbp-1h]
  unsigned int v22; // [rsp+80h] [rbp+7h]

  v16 = 0;
  v17 = 0;
  v18 = 15;
  LOBYTE(v16) = 0;
  v19 = 0;
  v20 = 0;
  v21 = 15;
  LOBYTE(v19) = 0;
  v22 = 0;
  v14 = 0;
  if ( sub_1401D0820(a1: a2, a2: &v14) == 0 )
    goto LABEL_21;
  v22 = v14;
  if ( (unsigned __int8)sub_1402B4D00(a1: a2, a2: &v19) == 0 )
    goto LABEL_21;
  if ( v17 >= 0xFFFFFFFF && (unsigned __int8)sub_140059CA0(a1: off_140F64800) != 0 )
    __debugbreak();
  v14 = v17;
  if ( sub_1401D0820(a1: a2, a2: &v14) == 0 || v14 > 0x1FA0 )
    goto LABEL_21;
  v4 = v17;
  if ( v14 > v17 )
  {
    v6 = v14 - v17;
    if ( v6 > v18 - v17 )
    {
      sub_140057960(a1: (unsigned int)&v16, a2: v14 - v17, a3: v15, a4: v14 - v17, a5: 0);
    }
    else
    {
      v17 = v14;
      v7 = &v16;
      if ( v18 > 0xF )
        v7 = (__int128 *)v16;
      v8 = (char *)v7 + v4;
      sub_140E827B0(a1: v8, a2: 0, a3: v14 - v4);
      v8[v6] = 0;
    }
  }
  else
  {
    v17 = v14;
    v5 = &v16;
    if ( v18 > 0xF )
      v5 = (__int128 *)v16;
    *((_BYTE *)v5 + v14) = 0;
  }
  v9 = &v16;
  if ( v18 > 0xF )
    v9 = (__int128 *)v16;
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, __int128 *, _QWORD))(*(_QWORD *)a2 + 16LL))(a1: a2, a2: v9, a3: v14) != 0 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, __int128 *, __int128 *))(a1 + 8))(a1: a1 + 16, a2: v22, a3: &v19, a4: &v16);
    v10 = 1;
  }
  else
  {
LABEL_21:
    v10 = 0;
  }
  if ( v21 > 0xF )
  {
    v11 = (void *)v19;
    if ( v21 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v19 - *(_QWORD *)(v19 - 8) - 8) > 0x1F )
        goto LABEL_33;
      v11 = *(void **)(v19 - 8);
    }
    sub_1409DB4C0(lpMem: v11);
  }
  *(_QWORD *)&v19 = 19937;
  v20 = 0;
  v21 = 31;
  if ( v18 > 0xF )
  {
    v12 = (void *)v16;
    if ( v18 + 1 < 0x1000 )
    {
LABEL_31:
      sub_1409DB4C0(lpMem: v12);
      return v10;
    }
    if ( (unsigned __int64)(v16 - *(_QWORD *)(v16 - 8) - 8) <= 0x1F )
    {
      v12 = *(void **)(v16 - 8);
      goto LABEL_31;
    }
LABEL_33:
    __fastfail(5u);
  }
  return v10;
}