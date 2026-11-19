char __fastcall sub_1407AF080(__int64 a1, _DWORD **a2)
{
  int *v2; // rsi
  _DWORD *v5; // rcx
  int *v6; // rsi
  _DWORD *v7; // rcx
  _DWORD *v8; // r14
  int *v9; // rsi
  int v11; // [rsp+40h] [rbp+8h] BYREF
  __int16 v12; // [rsp+45h] [rbp+Dh]
  char v13; // [rsp+47h] [rbp+Fh]
  int v14; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(int **)(a1 + 88);
  v5 = *a2;
  v11 = *v2;
  if ( sub_1401D0820(a1: v5, a2: &v11) != 0 )
  {
    *v2 = v11;
    if ( sub_1402B8840(a1: (__int64 *)*a2, a2: *(char **)(a1 + 80)) != 0 )
    {
      v6 = *(int **)(a1 + 72);
      v7 = *a2;
      v11 = *v6;
      if ( sub_1401D0820(a1: v7, a2: &v11) != 0 )
      {
        *v6 = v11;
        if ( sub_1402B4D00(a1: *a2, a2: *(__int64 **)(a1 + 64)) != 0
          && sub_1402B4D00(a1: *a2, a2: *(__int64 **)(a1 + 56)) != 0
          && sub_1402B4D00(a1: *a2, a2: *(__int64 **)(a1 + 48)) != 0
          && sub_1402B7CD0(a1: a2, a2: *(int **)(a1 + 40)) != 0
          && sub_1402B7CD0(a1: a2, a2: *(int **)(a1 + 32)) != 0 )
        {
          v8 = *a2;
          v9 = *(int **)(a1 + 24);
          LOBYTE(v11) = *((_BYTE *)v9 + 4);
          if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, int *, __int64))(*(_QWORD *)v8 + 16LL))(
                 a1: v8,
                 a2: &v11,
                 a3: 1) != 0 )
          {
            if ( (_BYTE)v11 != 0 )
            {
              if ( (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 8LL))(a1: v8) != 0 )
              {
                *(_WORD *)((char *)v9 + 5) = v12;
                *((_BYTE *)v9 + 7) = v13;
                *v9 = 0;
                *((_BYTE *)v9 + 4) = 1;
              }
              if ( *((_BYTE *)v9 + 4) == 0 )
                __fastfail(5u);
              v14 = *v9;
              if ( sub_1401D0820(a1: v8, a2: &v14) == 0 )
                return 0;
              *v9 = v14;
            }
            else
            {
              *((_BYTE *)v9 + 4) = 0;
            }
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*a2 + 16LL))(
                   a1: *a2,
                   a2: *(_QWORD *)(a1 + 16),
                   a3: 1) != 0
              && sub_1402B7CD0(a1: a2, a2: *(int **)(a1 + 8)) != 0
              && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*a2 + 16LL))(
                   a1: *a2,
                   a2: *(_QWORD *)a1,
                   a3: 1) != 0 )
            {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}