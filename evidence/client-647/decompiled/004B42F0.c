__int64 __fastcall sub_1404B42F0(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // bl
  void *v4; // rax
  LPVOID lpMem[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  *(_OWORD *)lpMem = 0;
  v7 = 0;
  if ( (unsigned __int8)sub_1402B8720(a1: a2, a2: lpMem) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, LPVOID *))(a1 + 8))(a1: *(_QWORD *)(a1 + 16), a2: lpMem);
    v3 = 1;
  }
  else
  {
    v3 = 0;
  }
  if ( lpMem[0] == nullptr )
    return v3;
  if ( (unsigned __int64)(4 * ((signed __int64)(v7 - (unsigned __int64)lpMem[0]) >> 2)) < 0x1000 )
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