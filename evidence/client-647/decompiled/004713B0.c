__int64 __fastcall sub_1404713B0(__int64 a1, _DWORD *a2)
{
  unsigned __int8 v4; // si
  _QWORD *v5; // rbx
  _QWORD *v6; // rdi
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  void *v9; // r8
  _BYTE *v10; // rcx
  int v12; // [rsp+20h] [rbp-50h] BYREF
  __int64 lpMem; // [rsp+28h] [rbp-48h] BYREF
  LPVOID lpMem_8[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v15; // [rsp+40h] [rbp-30h]
  __int128 v16; // [rsp+48h] [rbp-28h] BYREF
  unsigned int v17; // [rsp+58h] [rbp-18h]

  lpMem = 0;
  *(_OWORD *)lpMem_8 = 0;
  v15 = 0;
  v16 = 0;
  v17 = -1;
  v12 = -1;
  if ( sub_1401D0820(a1: a2, a2: &v12) != 0
    && (v17 = v12, v12 = lpMem, sub_1401D0820(a1: a2, a2: &v12) != 0)
    && (LODWORD(lpMem) = v12, (unsigned __int8)sub_14046D530(a1: a2, a2: lpMem_8) != 0)
    && (*(unsigned __int8 (__fastcall **)(_DWORD *, __int128 *, __int64))(*(_QWORD *)a2 + 16LL))(
         a1: a2,
         a2: &v16,
         a3: 16) != 0 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, __int64 *))(a1 + 8))(a1: a1 + 16, a2: v17, a3: &lpMem);
    v4 = 1;
  }
  else
  {
    v4 = 0;
  }
  v5 = lpMem_8[0];
  if ( lpMem_8[0] != nullptr )
  {
    v6 = lpMem_8[1];
    if ( lpMem_8[0] != lpMem_8[1] )
    {
      do
      {
        v7 = v5[4];
        if ( v7 > 0xF )
        {
          v8 = v5[1];
          if ( v7 + 1 < 0x1000 )
          {
            v9 = (void *)v5[1];
          }
          else
          {
            v9 = *(void **)(v8 - 8);
            if ( (unsigned __int64)(v8 - (_QWORD)v9 - 8) > 0x1F )
              goto LABEL_19;
          }
          sub_1409DB4C0(lpMem: v9);
        }
        *((_BYTE *)v5 + 8) = 0;
        v5[1] = 19937;
        v5[3] = 0;
        v5[4] = 31;
        v5 += 6;
      }
      while ( v5 != v6 );
      v5 = lpMem_8[0];
    }
    if ( (unsigned __int64)(48 * ((v15 - (__int64)v5) / 48)) < 0x1000 )
    {
      v10 = v5;
    }
    else
    {
      v10 = (_BYTE *)*(v5 - 1);
      if ( (unsigned __int64)((char *)v5 - v10 - 8) > 0x1F )
LABEL_19:
        __fastfail(5u);
    }
    sub_1409DB4C0(lpMem: v10);
  }
  return v4;
}