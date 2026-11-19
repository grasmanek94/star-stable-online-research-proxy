char __fastcall sub_1402F1B70(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rax
  __int128 v6; // [rsp+20h] [rbp-10h] BYREF
  int v7; // [rsp+48h] [rbp+18h] BYREF

  v7 = 0;
  v6 = 0;
  BYTE12(v6) = 2;
  if ( sub_1401D0820(a1: a2, a2: &v7) != 0 )
  {
    LODWORD(v6) = v7;
    v7 = DWORD1(v6);
    if ( sub_1401D0820(a1: a2, a2: &v7) != 0 )
    {
      DWORD1(v6) = v7;
      v7 = DWORD2(v6);
      if ( sub_1401D0820(a1: a2, a2: &v7) != 0 )
      {
        DWORD2(v6) = v7;
        if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 8LL))(a1: a2) != 0 )
        {
          v4 = *(_QWORD *)a2;
          LOBYTE(v7) = 0;
          if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, int *, __int64))(v4 + 16))(a1: a2, a2: &v7, a3: 1) != 0 )
          {
            BYTE12(v6) = v7;
            (*(void (__fastcall **)(__int64, __int128 *))(a1 + 8))(a1: a1 + 16, a2: &v6);
            return 1;
          }
        }
        else
        {
          LOBYTE(v7) = BYTE12(v6);
          if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, int *, __int64))(*(_QWORD *)a2 + 16LL))(
                 a1: a2,
                 a2: &v7,
                 a3: 1) != 0 )
          {
            (*(void (__fastcall **)(__int64, __int128 *))(a1 + 8))(a1: a1 + 16, a2: &v6);
            return 1;
          }
        }
      }
    }
  }
  return 0;
}