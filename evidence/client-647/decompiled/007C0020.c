__int64 __fastcall sub_1407C0020(__int64 a1, _DWORD *a2)
{
  unsigned __int64 v4; // rdx
  __int128 *v5; // rax
  unsigned __int64 v6; // rdi
  __int128 *v7; // rbx
  char *v8; // rbx
  __int128 *v9; // rdx
  unsigned __int8 v10; // bl
  void *v11; // rcx
  unsigned int v13; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int8 v14; // [rsp+34h] [rbp-3Ch]
  __int128 v15; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-28h]
  unsigned __int64 v17; // [rsp+50h] [rbp-20h]
  unsigned int v18; // [rsp+58h] [rbp-18h]

  v15 = 0;
  v16 = 0;
  v17 = 15;
  LOBYTE(v15) = 0;
  v18 = 0;
  v13 = 0;
  if ( sub_1401D0820(a1: a2, a2: &v13) == 0 )
    goto LABEL_20;
  v18 = v13;
  if ( v16 >= 0xFFFFFFFF && (unsigned __int8)sub_140059CA0(a1: off_140F64800) != 0 )
    __debugbreak();
  v13 = v16;
  if ( sub_1401D0820(a1: a2, a2: &v13) == 0 || v13 > 0x1FA0 )
    goto LABEL_20;
  v4 = v16;
  if ( v13 > v16 )
  {
    v6 = v13 - v16;
    if ( v6 > v17 - v16 )
    {
      sub_140057960(a1: (unsigned int)&v15, a2: v13 - v16, a3: v14, a4: v13 - v16, a5: 0);
    }
    else
    {
      v16 = v13;
      v7 = &v15;
      if ( v17 > 0xF )
        v7 = (__int128 *)v15;
      v8 = (char *)v7 + v4;
      sub_140E827B0(a1: v8, a2: 0, a3: v13 - v4);
      v8[v6] = 0;
    }
  }
  else
  {
    v16 = v13;
    v5 = &v15;
    if ( v17 > 0xF )
      v5 = (__int128 *)v15;
    *((_BYTE *)v5 + v13) = 0;
  }
  v9 = &v15;
  if ( v17 > 0xF )
    v9 = (__int128 *)v15;
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, __int128 *, _QWORD))(*(_QWORD *)a2 + 16LL))(a1: a2, a2: v9, a3: v13) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, __int128 *))(a1 + 8))(a1: *(_QWORD *)(a1 + 16), a2: v18, a3: &v15);
    v10 = 1;
  }
  else
  {
LABEL_20:
    v10 = 0;
  }
  if ( v17 > 0xF )
  {
    v11 = (void *)v15;
    if ( v17 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v15 - *(_QWORD *)(v15 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v11 = *(void **)(v15 - 8);
    }
    sub_1409DB4C0(lpMem: v11);
  }
  return v10;
}