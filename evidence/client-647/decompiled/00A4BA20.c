__int64 __fastcall sub_140A4BA20(__int64 a1, SOCKET *a2, char *a3, int a4)
{
  SOCKET v5; // rcx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // eax
  __int128 v10; // xmm0
  int v11; // edx
  int v12; // eax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  int fromlen; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v17[4]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v18[4]; // [rsp+3Ch] [rbp-C4h]
  _BYTE v19[28]; // [rsp+64h] [rbp-9Ch]
  struct sockaddr from[8]; // [rsp+90h] [rbp-70h] BYREF

  fromlen = 128;
  v5 = *a2;
  memset(from, 0, sizeof(from));
  v6 = recvfrom(s: v5, buf: a3, len: a4, flags: 0, from, &fromlen);
  v8 = v6;
  if ( v6 >= 0 )
  {
    if ( from[0].sa_family == 2 )
    {
      *(_QWORD *)v19 = *(_QWORD *)&from[0].sa_family;
      *(_OWORD *)((char *)&v18[1] + 4) = 0;
      v11 = 1;
      v12 = 0;
      *(struct sockaddr *)v18 = from[0];
      v10 = *(_OWORD *)&v18[1];
    }
    else
    {
      if ( from[0].sa_family != 23 )
      {
        v9 = v18[0];
        *(_QWORD *)(a1 + 8) = &off_141310008;
        *(_DWORD *)a1 = 102;
        *(_DWORD *)(a1 + 4) = v9;
        *(_BYTE *)(a1 + 40) = 0;
        return a1;
      }
      v10 = *(_OWORD *)&from[0].sa_data[6];
      *(_QWORD *)v19 = *(_QWORD *)&from[0].sa_family;
      v11 = 2;
      v12 = *(_DWORD *)&from[1].sa_data[6];
    }
    *(_DWORD *)&v19[24] = v12;
    *(_OWORD *)&v19[8] = v10;
    LODWORD(v18[1]) = *(_DWORD *)v19;
    v13 = *(_OWORD *)&v19[12];
    *(_QWORD *)((char *)&v18[1] + 4) = *(_QWORD *)&v19[4];
    HIDWORD(v18[0]) = v11;
    v14 = *(_OWORD *)((char *)v18 + 4);
    *(_QWORD *)a1 = v8;
    *(_BYTE *)(a1 + 40) = 1;
    *(_OWORD *)(a1 + 8) = v14;
    *(_OWORD *)(a1 + 24) = v13;
    return a1;
  }
  *(_OWORD *)a1 = *(_OWORD *)sub_140A4B430(a1: v17, a2: v7, a3: v6);
  *(_BYTE *)(a1 + 40) = 0;
  return a1;
}