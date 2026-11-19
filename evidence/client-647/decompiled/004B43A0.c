__int64 __fastcall sub_1404B43A0(__int64 a1, _DWORD *a2)
{
  unsigned __int8 v4; // bl
  void *v5; // rax
  char v7; // [rsp+28h] [rbp-38h]
  _BYTE v8[4]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v9; // [rsp+34h] [rbp-2Ch]
  unsigned int v10; // [rsp+3Ch] [rbp-24h] BYREF
  __int128 v11; // [rsp+40h] [rbp-20h] BYREF
  __int64 v12; // [rsp+50h] [rbp-10h]
  int v13; // [rsp+78h] [rbp+18h] BYREF

  v8[0] = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  if ( (unsigned __int8)sub_1402B8720(a1: a2, a2: &v11) != 0
    && (unsigned __int8)sub_1402D2DB0(a1: a2, a2: &v10) != 0
    && (v13 = HIDWORD(v9), sub_1401D0820(a1: a2, a2: &v13) != 0)
    && (HIDWORD(v9) = v13, v13 = v9, sub_1401D0820(a1: a2, a2: &v13) != 0)
    && (LODWORD(v9) = v13,
        (*(unsigned __int8 (__fastcall **)(_DWORD *, _BYTE *, __int64))(*(_QWORD *)a2 + 16LL))(a1: a2, a2: v8, a3: 1) != 0) )
  {
    v7 = v8[0];
    (*(void (__fastcall **)(_QWORD, __int128 *, _QWORD, _QWORD, _DWORD, char))(a1 + 8))(
      a1: *(_QWORD *)(a1 + 16),
      a2: &v11,
      a3: v10,
      a4: HIDWORD(v9),
      a5: v9,
      a6: v7);
    v4 = 1;
  }
  else
  {
    v4 = 0;
  }
  if ( (_QWORD)v11 != 0 )
  {
    if ( (unsigned __int64)(4 * ((v12 - (__int64)v11) >> 2)) < 0x1000 )
    {
      v5 = (void *)v11;
    }
    else
    {
      v5 = *(void **)(v11 - 8);
      if ( (unsigned __int64)(v11 - (_QWORD)v5 - 8) > 0x1F )
        __fastfail(5u);
    }
    sub_1409DB4C0(lpMem: v5);
  }
  return v4;
}