__int64 __fastcall sub_1409790F0(_QWORD *a1, __int64 a2, char *a3, __int64 a4, _QWORD *a5)
{
  __int64 v5; // rsi
  unsigned int v9; // ebx
  int v10; // eax
  DWORD Error; // eax
  DWORD v12; // ebx
  const char *v13; // rax
  __int64 v14; // rax
  __int128 v15; // xmm0
  CHAR Buffer[256]; // [rsp+30h] [rbp-148h] BYREF

  v5 = a1[2];
  v9 = 0;
  *a5 = 0;
  v10 = recv(s: *(_QWORD *)(v5 + 152), buf: a3, len: a4, flags: 0);
  if ( (unsigned __int8)sub_140957690(a1: v10, a2: a5) == 0 )
  {
    Error = WSAGetLastError();
    v12 = Error;
    if ( Error == 10035 )
    {
      v9 = 81;
    }
    else
    {
      v13 = (const char *)sub_1409BC8E0(dwMessageId: Error, lpBuffer: Buffer, nSize: 0x100u);
      sub_140971AD0(a1: a2, a2: "Recv failure: %s", v13);
      *(_DWORD *)(a2 + 1880) = v12;
      v9 = 56;
    }
  }
  if ( a2 != 0 && (*(_DWORD *)(a2 + 1300) & 0x20000000) != 0 )
  {
    v14 = *(_QWORD *)(a2 + 2488);
    if ( (v14 == 0 || *(int *)(v14 + 8) >= 1) && *(int *)(*a1 + 12LL) >= 1 )
      sub_140971CC0(a1: a2, a2: a1, a3: "recv(len=%zu) -> %d, %zu", a4, v9, *a5);
  }
  if ( v9 == 0 && (*(_BYTE *)(v5 + 340) & 1) == 0 )
  {
    v15 = *(_OWORD *)sub_14097C610(a1: a2);
    *(_DWORD *)(v5 + 340) |= 1u;
    *(_OWORD *)(v5 + 296) = v15;
  }
  return v9;
}