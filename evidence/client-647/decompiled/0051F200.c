char __fastcall sub_14051F200(_QWORD *a1, _QWORD *a2)
{
  _DWORD *v2; // rbx
  int *v4; // r14
  int *v6; // rbx
  _DWORD *v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v11; // rcx
  void *v12; // rcx
  LPVOID lpMem[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+30h] [rbp-28h]
  int v15; // [rsp+60h] [rbp+8h] BYREF

  v2 = (_DWORD *)*a2;
  v4 = (int *)a1[3];
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 8LL))(a1: *a2) != 0 )
  {
    v15 = 0;
    if ( sub_140200540(a1: v2, a2: &v15) == 0 )
      return 0;
    *v4 = v15;
  }
  else
  {
    v15 = *v4;
    if ( sub_140200540(a1: v2, a2: &v15) == 0 )
      return 0;
  }
  v6 = (int *)a1[2];
  v7 = (_DWORD *)*a2;
  v15 = *v6;
  if ( sub_1401D0820(a1: v7, a2: &v15) != 0 )
  {
    *v6 = v15;
    if ( (unsigned __int8)sub_14051A660(a1: *a2, a2: a1[1]) != 0 )
    {
      v8 = *a2;
      v9 = *a1;
      LOBYTE(v15) = *(_BYTE *)(*a1 + 24LL);
      if ( (*(unsigned __int8 (__fastcall **)(__int64, int *, __int64))(*(_QWORD *)v8 + 16LL))(a1: v8, a2: &v15, a3: 1) != 0 )
      {
        if ( (_BYTE)v15 == 0 )
        {
          if ( *(_BYTE *)(v9 + 24) != 0 )
          {
            sub_14004CCB0(a1: v9);
            *(_QWORD *)v9 = 19937;
            *(_QWORD *)(v9 + 8) = 19937;
            *(_QWORD *)(v9 + 16) = 19937;
            *(_BYTE *)(v9 + 24) = 0;
            return 1;
          }
          return 1;
        }
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(a1: v8) != 0 )
        {
          v11 = 0;
          *(_OWORD *)lpMem = 0;
          v14 = 0;
          if ( *(_BYTE *)(v9 + 24) != 0 )
          {
            sub_140520480(a1: v9, a2: lpMem);
            v11 = v14;
          }
          else
          {
            *(_QWORD *)v9 = 0;
            *(_QWORD *)(v9 + 8) = 0;
            *(_QWORD *)(v9 + 16) = 0;
            *(_BYTE *)(v9 + 24) = 1;
          }
          if ( lpMem[0] != nullptr )
          {
            if ( (unsigned __int64)(8 * ((signed __int64)(v11 - (unsigned __int64)lpMem[0]) >> 3)) < 0x1000 )
            {
              v12 = lpMem[0];
            }
            else
            {
              v12 = *((void **)lpMem[0] - 1);
              if ( (unsigned __int64)((char *)lpMem[0] - (char *)v12 - 8) > 0x1F )
                goto LABEL_22;
            }
            sub_1409DB4C0(lpMem: v12);
          }
        }
        if ( *(_BYTE *)(v9 + 24) == 0 )
LABEL_22:
          __fastfail(5u);
        if ( (unsigned __int8)sub_14051B140(a1: v8, a2: v9) != 0 )
          return 1;
      }
    }
  }
  return 0;
}