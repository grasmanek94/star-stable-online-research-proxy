__int64 __fastcall sub_1407BF9F0(__int64 a1, _DWORD *a2)
{
  unsigned __int8 v4; // bl
  void *v5; // rax
  __int128 v7; // [rsp+20h] [rbp-38h] BYREF
  __int128 v8; // [rsp+30h] [rbp-28h]
  __int128 v9; // [rsp+40h] [rbp-18h]
  int v10; // [rsp+68h] [rbp+10h] BYREF

  v7 = 0;
  v8 = 0;
  v9 = 0;
  LODWORD(v7) = 0;
  LOBYTE(v9) = 0;
  DWORD2(v9) = 0;
  v10 = 0;
  if ( sub_1401D0820(a1: a2, a2: &v10) != 0
    && (LODWORD(v7) = v10, (unsigned __int8)sub_1407A92E0(a1: a2, a2: (char *)&v7 + 8) != 0)
    && (v10 = DWORD2(v9), sub_1401D0820(a1: a2, a2: &v10) != 0) )
  {
    DWORD2(v9) = v10;
    (*(void (__fastcall **)(_QWORD, __int128 *))(a1 + 8))(a1: *(_QWORD *)(a1 + 16), a2: &v7);
    v4 = 1;
  }
  else
  {
    v4 = 0;
  }
  if ( (_BYTE)v9 != 0 && *((_QWORD *)&v7 + 1) != 0 )
  {
    if ( (unsigned __int64)(4 * ((__int64)(*((_QWORD *)&v8 + 1) - *((_QWORD *)&v7 + 1)) >> 2)) < 0x1000 )
    {
      v5 = *((void **)&v7 + 1);
    }
    else
    {
      v5 = *(void **)(*((_QWORD *)&v7 + 1) - 8LL);
      if ( (unsigned __int64)(*((_QWORD *)&v7 + 1) - (_QWORD)v5 - 8LL) > 0x1F )
        __fastfail(5u);
    }
    sub_1409DB4C0(lpMem: v5);
  }
  return v4;
}