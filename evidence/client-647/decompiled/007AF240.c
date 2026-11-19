char __fastcall sub_1407AF240(__int64 *a1, __int64 **a2)
{
  int *v4; // rdi
  int *v5; // rdi
  __int64 v6; // rbx
  __int64 *v7; // r14
  unsigned __int64 v9; // rsi
  int v10; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v11[4]; // [rsp+24h] [rbp-2Ch] BYREF
  __int128 v12; // [rsp+28h] [rbp-28h]
  __int64 v13; // [rsp+38h] [rbp-18h]

  v4 = (int *)a1[3];
  v10 = *v4;
  if ( sub_1401D0820(a1: *a2, a2: &v10) != 0 )
  {
    *v4 = v10;
    v5 = (int *)a1[2];
    v10 = *v5;
    if ( sub_1401D0820(a1: *a2, a2: &v10) != 0 )
    {
      *v5 = v10;
      if ( sub_1402B8840(a1: *a2, a2: (char *)a1[1]) != 0 )
      {
        v6 = *a1;
        v7 = *a2;
        v11[0] = *(_BYTE *)(v6 + 24);
        if ( (*(unsigned __int8 (__fastcall **)(__int64 *, _BYTE *, __int64))(*v7 + 16))(a1: v7, a2: v11, a3: 1) != 0 )
        {
          if ( v11[0] == 0 )
          {
            *(_BYTE *)(v6 + 24) = 0;
            return 1;
          }
          v9 = 0;
          if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*v7 + 8))(a1: v7) != 0 )
          {
            v12 = 0u;
            v13 = 0;
            *(_OWORD *)v6 = 0u;
            *(_QWORD *)(v6 + 16) = 0;
            if ( *(_BYTE *)(v6 + 24) != 0 )
              goto LABEL_12;
            *(_BYTE *)(v6 + 24) = 1;
          }
          if ( *(_BYTE *)(v6 + 24) == 0 )
            __fastfail(5u);
LABEL_12:
          while ( 1 )
          {
            v10 = *(_DWORD *)(v6 + 12 * v9);
            if ( sub_1401D0820(a1: v7, a2: &v10) == 0 )
              break;
            *(_DWORD *)(v6 + 12 * v9) = v10;
            v10 = *(_DWORD *)(v6 + 12 * v9 + 4);
            if ( sub_140200540(a1: v7, a2: &v10) == 0 )
              break;
            *(_DWORD *)(v6 + 12 * v9 + 4) = v10;
            v10 = *(_DWORD *)(v6 + 12 * v9 + 8);
            if ( sub_1401D0820(a1: v7, a2: &v10) == 0 )
              break;
            *(_DWORD *)(v6 + 12 * v9++ + 8) = v10;
            if ( v9 >= 2 )
              return 1;
          }
        }
      }
    }
  }
  return 0;
}