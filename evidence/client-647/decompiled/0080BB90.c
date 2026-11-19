char __fastcall sub_14080BB90(__int64 *a1, __int64 a2)
{
  __int64 v5; // rax
  __int128 v6; // [rsp+30h] [rbp-28h]
  char v7; // [rsp+60h] [rbp+8h] BYREF
  char v8; // [rsp+68h] [rbp+10h] BYREF

  v7 = *(_BYTE *)(a2 + 40);
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, char *, __int64))(*a1 + 16))(a1, a2: &v7, a3: 1) != 0 )
  {
    if ( v7 == 0 )
    {
      *(_BYTE *)(a2 + 40) = 0;
      return 1;
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 8))(a1) != 0 )
    {
      *((_QWORD *)&v6 + 1) = 1065353216;
      *(_QWORD *)&v6 = 0;
      *(_OWORD *)a2 = 0;
      *(_OWORD *)(a2 + 16) = v6;
      *(_QWORD *)(a2 + 32) = 0;
      if ( *(_BYTE *)(a2 + 40) == 0 )
        *(_BYTE *)(a2 + 40) = 1;
    }
    if ( *(_BYTE *)(a2 + 40) == 0 )
      __fastfail(5u);
    if ( (unsigned __int8)sub_140A25C40(a1, a2) != 0
      && (unsigned __int8)sub_140A25B40(a1, a2: a2 + 12) != 0
      && (unsigned __int8)sub_1404FEC60(a1, a2: a2 + 28) != 0 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 8))(a1) != 0 )
      {
        v5 = *a1;
        v8 = 0;
        if ( (*(unsigned __int8 (__fastcall **)(__int64 *, char *, __int64))(v5 + 16))(a1, a2: &v8, a3: 1) == 0 )
          return 0;
        *(_BYTE *)(a2 + 36) = v8;
      }
      else
      {
        v8 = *(_BYTE *)(a2 + 36);
        if ( (*(unsigned __int8 (__fastcall **)(__int64 *, char *, __int64))(*a1 + 16))(a1, a2: &v8, a3: 1) == 0 )
          return 0;
      }
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 16))(a1, a2: a2 + 37, a3: 1) != 0 )
        return 1;
    }
  }
  return 0;
}