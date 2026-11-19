__int64 __fastcall sub_1407C0A80(__int64 a1, _DWORD *a2)
{
  unsigned __int64 v4; // rdx
  __int128 *v5; // rax
  unsigned __int64 v6; // rdi
  __int128 *v7; // rbx
  char *v8; // rbx
  __int128 *v9; // rdx
  unsigned __int8 v10; // bl
  void *v11; // rcx
  unsigned int v13; // [rsp+30h] [rbp-19h] BYREF
  unsigned __int8 v14; // [rsp+38h] [rbp-11h]
  __int128 v15; // [rsp+40h] [rbp-9h] BYREF
  unsigned __int64 v16; // [rsp+50h] [rbp+7h]
  unsigned __int64 v17; // [rsp+58h] [rbp+Fh]
  __int128 v18; // [rsp+60h] [rbp+17h] BYREF
  unsigned __int64 v19; // [rsp+70h] [rbp+27h]
  unsigned __int64 v20; // [rsp+78h] [rbp+2Fh]
  unsigned int v21; // [rsp+80h] [rbp+37h]

  v18 = 0;
  v19 = 0;
  v20 = 15;
  LOBYTE(v18) = 0;
  v21 = -1;
  v13 = -1;
  if ( sub_1401D0820(a1: a2, a2: &v13) == 0 )
    goto LABEL_20;
  v21 = v13;
  if ( v19 >= 0xFFFFFFFF && (unsigned __int8)sub_140059CA0(a1: off_140F64800) != 0 )
    __debugbreak();
  v13 = v19;
  if ( sub_1401D0820(a1: a2, a2: &v13) == 0 || v13 > 0x1FA0 )
    goto LABEL_20;
  v4 = v19;
  if ( v13 > v19 )
  {
    v6 = v13 - v19;
    if ( v6 > v20 - v19 )
    {
      sub_140057960(a1: (unsigned int)&v18, a2: v13 - v19, a3: v14, a4: v13 - v19, a5: 0);
    }
    else
    {
      v19 = v13;
      v7 = &v18;
      if ( v20 > 0xF )
        v7 = (__int128 *)v18;
      v8 = (char *)v7 + v4;
      sub_140E827B0(a1: v8, a2: 0, a3: v13 - v4);
      v8[v6] = 0;
    }
  }
  else
  {
    v19 = v13;
    v5 = &v18;
    if ( v20 > 0xF )
      v5 = (__int128 *)v18;
    *((_BYTE *)v5 + v13) = 0;
  }
  v9 = &v18;
  if ( v20 > 0xF )
    v9 = (__int128 *)v18;
  if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, __int128 *, _QWORD))(*(_QWORD *)a2 + 16LL))(a1: a2, a2: v9, a3: v13) != 0 )
  {
    v15 = v18;
    v16 = v19;
    v17 = v20;
    v19 = 0;
    v20 = 15;
    LOBYTE(v18) = 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int128 *))(a1 + 8))(a1: *(_QWORD *)(a1 + 16), a2: v21, a3: &v15);
    v10 = 1;
  }
  else
  {
LABEL_20:
    v10 = 0;
  }
  if ( v20 > 0xF )
  {
    v11 = (void *)v18;
    if ( v20 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v18 - *(_QWORD *)(v18 - 8) - 8) > 0x1F )
        __fastfail(5u);
      v11 = *(void **)(v18 - 8);
    }
    sub_1409DB4C0(lpMem: v11);
  }
  return v10;
}