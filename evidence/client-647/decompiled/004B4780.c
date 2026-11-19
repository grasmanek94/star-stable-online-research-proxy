__int64 __fastcall sub_1404B4780(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // bl
  void *v4; // rcx
  __int16 v6; // [rsp+20h] [rbp-28h] BYREF
  LPVOID lpMem[2]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v8; // [rsp+38h] [rbp-10h]
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v6 = 0;
  *(_OWORD *)lpMem = 0;
  v8 = 0;
  v9 = a2;
  if ( (unsigned __int8)sub_1404B0B10(a1: &v6, a2: &v9, a3: 0) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, LPVOID *, _QWORD, _QWORD))(a1 + 8))(
      a1: *(_QWORD *)(a1 + 16),
      a2: lpMem,
      a3: HIBYTE(v6),
      a4: (unsigned __int8)v6);
    v3 = 1;
  }
  else
  {
    v3 = 0;
  }
  if ( lpMem[0] == nullptr )
    return v3;
  if ( ((v8 - (unsigned __int64)lpMem[0]) & 0xFFFFFFFFFFFFFFF0uLL) < 0x1000 )
  {
    sub_1409DB4C0(lpMem: lpMem[0]);
    return v3;
  }
  v4 = *((void **)lpMem[0] - 1);
  if ( (unsigned __int64)((char *)lpMem[0] - (char *)v4 - 8) > 0x1F )
    __fastfail(5u);
  sub_1409DB4C0(lpMem: v4);
  return v3;
}