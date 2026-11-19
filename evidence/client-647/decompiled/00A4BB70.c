__int64 __fastcall sub_140A4BB70(__int64 a1, SOCKET *a2, const char *a3, int a4, __int64 a5)
{
  int tolen; // eax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int128 v11; // xmm0
  __int128 v12; // [rsp+30h] [rbp-18h] BYREF

  if ( *(_DWORD *)a5 == 1 )
  {
    tolen = 16;
  }
  else
  {
    if ( *(_DWORD *)a5 != 2 )
    {
      LODWORD(v12) = 102;
      *((_QWORD *)&v12 + 1) = &off_141310008;
      *(_OWORD *)a1 = v12;
      *(_BYTE *)(a1 + 16) = 0;
      return a1;
    }
    tolen = 28;
  }
  v8 = sendto(s: *a2, buf: a3, len: a4, flags: 0, to: (const struct sockaddr *)(a5 + 4), tolen);
  if ( v8 >= 0 )
  {
    *(_QWORD *)a1 = v8;
    *(_BYTE *)(a1 + 16) = 1;
    return a1;
  }
  else
  {
    v11 = *(_OWORD *)sub_140A4B430(a1: &v12, a2: v9, a3: v10);
    *(_OWORD *)a1 = v11;
    *(_BYTE *)(a1 + 16) = 0;
    return a1;
  }
}