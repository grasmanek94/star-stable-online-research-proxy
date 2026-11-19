char __fastcall sub_1407AF640(__int64 a1, __int64 **a2)
{
  int *v2; // rbx
  __int64 *v5; // rcx
  int *v6; // rbx
  __int64 *v7; // rcx
  __int64 *v8; // rbx
  __int64 *v9; // r15
  _QWORD *v10; // rcx
  __int64 v11; // r8
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // rbx
  int v18; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v19; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(int **)(a1 + 80);
  v5 = *a2;
  v18 = *v2;
  if ( sub_1401D0820(a1: v5, a2: &v18) != 0 )
  {
    *v2 = v18;
    if ( sub_1402B4D00(a1: *a2, a2: *(__int64 **)(a1 + 72)) != 0
      && (unsigned __int8)sub_1403476F0(a1: *a2, a2: *(_QWORD *)(a1 + 64)) != 0 )
    {
      v6 = *(int **)(a1 + 56);
      v7 = *a2;
      v18 = *v6;
      if ( sub_1401D0820(a1: v7, a2: &v18) != 0 )
      {
        *v6 = v18;
        if ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD, __int64))(**a2 + 16))(
               a1: *a2,
               a2: *(_QWORD *)(a1 + 48),
               a3: 1) != 0
          && sub_1402B8840(a1: *a2, a2: *(char **)(a1 + 40)) != 0
          && sub_1402B4D00(a1: *a2, a2: *(__int64 **)(a1 + 32)) != 0
          && (unsigned __int8)sub_1403474B0(a1: (__int64)*a2, a2: *(_QWORD *)(a1 + 24)) != 0 )
        {
          v8 = *(__int64 **)(a1 + 16);
          v9 = *a2;
          if ( (unsigned __int64)(v8[1] - *v8) >= 0x7FFFFFFF8LL
            && (unsigned __int8)sub_140059CA0(a1: off_141016888) != 0 )
          {
            __debugbreak();
          }
          v19 = (v8[1] - *v8) >> 3;
          if ( sub_1401D0820(a1: v9, a2: &v19) != 0 && v19 <= 0x3E80 )
          {
            v10 = (_QWORD *)v8[1];
            v11 = *v8;
            v12 = v19;
            v13 = ((__int64)v10 - *v8) >> 3;
            if ( v19 >= v13 )
            {
              if ( v19 > v13 )
              {
                if ( v19 <= (unsigned __int64)((v8[2] - v11) >> 3) )
                {
                  v14 = v19 - v13;
                  if ( v19 != v13 )
                  {
                    do
                    {
                      *v10++ = 0;
                      --v14;
                    }
                    while ( v14 != 0 );
                  }
                  v8[1] = (__int64)v10;
                }
                else
                {
                  sub_1407ACE00(a1: v8, a2: v19, a3: &v18);
                }
              }
            }
            else
            {
              v8[1] = v11 + 8LL * v19;
            }
            v15 = *v8;
            v16 = 0;
            if ( v19 != 0 )
            {
              while ( 1 )
              {
                v18 = *(_DWORD *)(v15 + 8 * v16);
                if ( sub_1401D0820(a1: v9, a2: &v18) == 0 )
                  break;
                *(_DWORD *)(v15 + 8 * v16) = v18;
                if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64, __int64))(*v9 + 16))(
                       a1: v9,
                       a2: v15 + 4 + 8 * v16,
                       a3: 1) == 0 )
                  break;
                if ( ++v16 >= v12 )
                  goto LABEL_26;
              }
            }
            else
            {
LABEL_26:
              if ( (unsigned __int8)sub_1407A79E0(a1: *a2, a2: *(_QWORD *)(a1 + 8)) != 0
                && (unsigned __int8)sub_1407A77D0(a1: *a2, a2: *(_QWORD *)a1) != 0 )
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