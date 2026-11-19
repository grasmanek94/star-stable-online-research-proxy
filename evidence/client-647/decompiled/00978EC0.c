__int64 __fastcall sub_140978EC0(__int64 a1, __int64 a2, const char *a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  __int64 v7; // rdi
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r12
  int v14; // eax
  DWORD Error; // eax
  DWORD v16; // edi
  unsigned int v17; // ebp
  const char *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  int vOutBuffer; // [rsp+50h] [rbp-168h] BYREF
  DWORD cbBytesReturned[3]; // [rsp+54h] [rbp-164h] BYREF
  CHAR Buffer[256]; // [rsp+60h] [rbp-158h] BYREF

  v7 = *(_QWORD *)(a1 + 16);
  *a6 = 0;
  v11 = *(char *)(a1 + 32);
  v12 = *(_QWORD *)(a1 + 24);
  v13 = *(_QWORD *)(v12 + 8 * v11 + 256);
  *(_QWORD *)(v12 + 8 * v11 + 256) = *(_QWORD *)(v7 + 152);
  v14 = send(s: *(_QWORD *)(v7 + 152), buf: a3, len: a4, flags: 0);
  if ( (unsigned __int8)sub_140957690(a1: v14, a2: a6) != 0 )
  {
    v17 = 0;
    v19 = sub_14097C610(a1: a2);
    if ( sub_140959F60(a1: v19, a2: v7 + 312) > 1000 )
    {
      if ( WSAIoctl(
             s: *(_QWORD *)(v7 + 152),
             dwIoControlCode: 0x4004747Bu,
             lpvInBuffer: nullptr,
             cbInBuffer: 0,
             lpvOutBuffer: &vOutBuffer,
             cbOutBuffer: 4u,
             lpcbBytesReturned: cbBytesReturned,
             lpOverlapped: nullptr,
             lpCompletionRoutine: nullptr) == 0
        && vOutBuffer != *(_DWORD *)(v7 + 328)
        && setsockopt(
             s: *(_QWORD *)(v7 + 152),
             level: 0xFFFF,
             optname: 4097,
             optval: (const char *)&vOutBuffer,
             optlen: 4) == 0 )
      {
        *(_DWORD *)(v7 + 328) = vOutBuffer;
      }
      *(_OWORD *)(v7 + 312) = *(_OWORD *)sub_14097C610(a1: a2);
    }
  }
  else
  {
    Error = WSAGetLastError();
    v16 = Error;
    if ( Error == 10035 )
    {
      v17 = 81;
    }
    else
    {
      v18 = (const char *)sub_1409BC8E0(dwMessageId: Error, lpBuffer: Buffer, nSize: 0x100u);
      sub_140971AD0(a1: a2, a2: "Send failure: %s", v18);
      *(_DWORD *)(a2 + 1880) = v16;
      v17 = 55;
    }
  }
  if ( a2 != 0 && (*(_DWORD *)(a2 + 1300) & 0x20000000) != 0 )
  {
    v20 = *(_QWORD *)(a2 + 2488);
    if ( (v20 == 0 || *(int *)(v20 + 8) >= 1) && *(int *)(*(_QWORD *)a1 + 12LL) >= 1 )
      sub_140971CC0(a1: a2, a2: a1, a3: "send(len=%zu) -> %d, %zu", a4, v17, *a6);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * *(char *)(a1 + 32) + 256) = v13;
  return v17;
}