char __fastcall sub_14051B520(_DWORD *a1, __int64 *a2)
{
  _QWORD *v5; // rcx
  __int64 v6; // r8
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rbx
  int *v12[4]; // [rsp+20h] [rbp-38h] BYREF
  char v13; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v14; // [rsp+70h] [rbp+18h] BYREF

  if ( (unsigned __int64)(a2[1] - *a2) >= 0xFFFFFFFF0LL && (unsigned __int8)sub_140059CA0(a1: off_140FBD788) != 0 )
    __debugbreak();
  v14 = (a2[1] - *a2) >> 4;
  if ( sub_1401D0820(a1, a2: &v14) == 0 || v14 > 0x3E80 )
    return 0;
  v5 = (_QWORD *)a2[1];
  v6 = *a2;
  v7 = v14;
  v8 = ((__int64)v5 - *a2) >> 4;
  if ( v14 >= v8 )
  {
    if ( v14 > v8 )
    {
      if ( v14 <= (unsigned __int64)((a2[2] - v6) >> 4) )
      {
        v9 = v14 - v8;
        if ( v14 != v8 )
        {
          do
          {
            *v5 = 0;
            v5[1] = 0;
            v5 += 2;
            --v9;
          }
          while ( v9 != 0 );
        }
        a2[1] = (__int64)v5;
      }
      else
      {
        sub_1404AF200(a1: a2, a2: v14, a3: &v13);
      }
    }
  }
  else
  {
    a2[1] = v6 + 16LL * v14;
  }
  v10 = *a2;
  v11 = 0;
  if ( v14 == 0 )
    return 1;
  while ( 1 )
  {
    v12[0] = (int *)(16 * v11 + v10 + 12);
    v12[1] = (int *)(16 * v11 + v10 + 8);
    v12[2] = (int *)(16 * v11 + v10 + 4);
    v12[3] = (int *)(16 * v11 + v10);
    if ( sub_1402EA660(a1, a2: v12) == 0 )
      break;
    if ( ++v11 >= v7 )
      return 1;
  }
  return 0;
}