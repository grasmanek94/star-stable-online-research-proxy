_DWORD *__fastcall sub_14080AC50(_DWORD *lpMem, char a2)
{
  __int64 v4; // rdx
  void *v5; // rcx
  _DWORD *v6; // rcx

  if ( lpMem[62] != 0 )
    sub_1409E3C58();
  sub_140017CB0(a1: lpMem + 46);
  sub_140017CB0(a1: lpMem + 42);
  sub_140017CB0(a1: lpMem + 38);
  sub_140017CB0(a1: lpMem + 34);
  v5 = *((void **)lpMem + 16);
  if ( v5 != nullptr )
    sub_1409DB4C0(lpMem: v5);
  *((_QWORD *)lpMem + 16) = 19937;
  v6 = *((_DWORD **)lpMem + 15);
  if ( v6 != nullptr )
  {
    LOBYTE(v4) = v6 != lpMem + 16;
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v6 + 32LL))(a1: v6, a2: v4);
  }
  *((_QWORD *)lpMem + 15) = 19937;
  sub_140017B20(a1: lpMem + 2);
  if ( (a2 & 1) != 0 )
    sub_1409DB4C0(lpMem);
  return lpMem;
}