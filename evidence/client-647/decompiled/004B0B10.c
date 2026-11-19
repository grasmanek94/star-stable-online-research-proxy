char __fastcall sub_1404B0B10(_QWORD *a1, _QWORD *a2)
{
  _DWORD *v4; // r15
  _QWORD *v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // r8
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // rbp
  int *v13[4]; // [rsp+20h] [rbp-48h] BYREF
  char v14; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v15; // [rsp+78h] [rbp+10h] BYREF

  v4 = (_DWORD *)*a2;
  if ( a1[2] - a1[1] >= 0xFFFFFFFF0uLL && (unsigned __int8)sub_140059CA0(a1: off_140FAE490) != 0 )
    __debugbreak();
  v15 = (__int64)(a1[2] - a1[1]) >> 4;
  if ( sub_1401D0820(a1: v4, a2: &v15) != 0 && v15 <= 0x3E80 )
  {
    v5 = (_QWORD *)a1[2];
    v6 = 0;
    v7 = a1[1];
    v8 = v15;
    v9 = ((__int64)v5 - v7) >> 4;
    if ( v15 >= v9 )
    {
      if ( v15 > v9 )
      {
        if ( v15 <= (unsigned __int64)((a1[3] - v7) >> 4) )
        {
          v10 = v15 - v9;
          if ( v15 != v9 )
          {
            do
            {
              *v5 = 0;
              v5[1] = 0;
              v5 += 2;
              --v10;
            }
            while ( v10 != 0 );
          }
          a1[2] = v5;
        }
        else
        {
          sub_1404AF200(a1: a1 + 1, a2: v15, a3: &v14);
        }
      }
    }
    else
    {
      a1[2] = v7 + 16LL * v15;
    }
    v11 = a1[1];
    if ( v15 != 0 )
    {
      while ( 1 )
      {
        v13[0] = (int *)(16 * v6 + v11 + 12);
        v13[1] = (int *)(16 * v6 + v11 + 8);
        v13[2] = (int *)(16 * v6 + v11 + 4);
        v13[3] = (int *)(16 * v6 + v11);
        if ( sub_1402EA660(a1: v4, a2: v13) == 0 )
          break;
        if ( ++v6 >= v8 )
          goto LABEL_17;
      }
    }
    else
    {
LABEL_17:
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*a2 + 16LL))(
             a1: *a2,
             a2: (__int64)a1 + 1,
             a3: 1) != 0
        && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD *, __int64))(*(_QWORD *)*a2 + 16LL))(
             a1: *a2,
             a2: a1,
             a3: 1) != 0 )
      {
        return 1;
      }
    }
  }
  return 0;
}