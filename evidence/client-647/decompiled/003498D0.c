char __fastcall sub_1403498D0(__int64 a1, _DWORD **a2)
{
  int *v2; // rsi
  _DWORD *v5; // rcx
  int *v6; // rsi
  _DWORD *v7; // rcx
  int *v8; // rsi
  _DWORD *v9; // rcx
  int *v10; // rsi
  _DWORD *v11; // rcx
  _DWORD *v12; // rbx
  _BYTE *v13; // rdi
  char v14; // al
  int v16; // [rsp+30h] [rbp+8h] BYREF
  char v17; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(int **)(a1 + 96);
  v5 = *a2;
  v16 = *v2;
  if ( sub_1401D0820(a1: v5, a2: &v16) != 0 )
  {
    *v2 = v16;
    v6 = *(int **)(a1 + 88);
    v7 = *a2;
    v16 = *v6;
    if ( sub_1401D0820(a1: v7, a2: &v16) != 0 )
    {
      *v6 = v16;
      v8 = *(int **)(a1 + 80);
      v9 = *a2;
      v16 = *v8;
      if ( sub_1401D0820(a1: v9, a2: &v16) != 0 )
      {
        *v8 = v16;
        v10 = *(int **)(a1 + 72);
        v11 = *a2;
        v16 = *v10;
        if ( sub_1401D0820(a1: v11, a2: &v16) != 0 )
        {
          *v10 = v16;
          if ( sub_1402B7CD0(a1: a2, a2: *(int **)(a1 + 64)) != 0
            && sub_1402B7CD0(a1: a2, a2: *(int **)(a1 + 56)) != 0
            && sub_1402B7CD0(a1: a2, a2: *(int **)(a1 + 48)) != 0
            && sub_1402B7CD0(a1: a2, a2: *(int **)(a1 + 40)) != 0
            && sub_1402B7CD0(a1: a2, a2: *(int **)(a1 + 32)) != 0
            && sub_1402B7CD0(a1: a2, a2: *(int **)(a1 + 24)) != 0
            && sub_1402B7CD0(a1: a2, a2: *(int **)(a1 + 16)) != 0
            && sub_1402B7CD0(a1: a2, a2: *(int **)(a1 + 8)) != 0 )
          {
            v12 = *a2;
            v13 = *(_BYTE **)a1;
            LOBYTE(v16) = 0;
            v17 = 0;
            if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)v12 + 8LL))(a1: v12) != 0 )
            {
              if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, int *, __int64))(*(_QWORD *)v12 + 16LL))(
                     a1: v12,
                     a2: &v16,
                     a3: 1) != 0
                && (*(unsigned __int8 (__fastcall **)(_DWORD *, char *, __int64))(*(_QWORD *)v12 + 16LL))(
                     a1: v12,
                     a2: &v17,
                     a3: 1) != 0 )
              {
                v14 = v16;
                v13[1] &= ~1u;
                *v13 = v14;
                v13[1] |= v17 & 1;
                return 1;
              }
            }
            else
            {
              LOBYTE(v16) = *v13;
              v17 = v13[1] & 1;
              if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, int *, __int64))(*(_QWORD *)v12 + 16LL))(
                     a1: v12,
                     a2: &v16,
                     a3: 1) != 0
                && (*(unsigned __int8 (__fastcall **)(_DWORD *, char *, __int64))(*(_QWORD *)v12 + 16LL))(
                     a1: v12,
                     a2: &v17,
                     a3: 1) != 0 )
              {
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}