__int64 __fastcall sub_140809F50(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int *v4; // rsi
  unsigned int *v6; // r14
  signed __int64 i; // rdi
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v13; // [rsp+78h] [rbp+10h] BYREF

  v4 = *(unsigned int **)(a2 + 128);
  v6 = *(unsigned int **)(a2 + 136);
  for ( i = a3; v4 != v6; v4 += 6 )
  {
    if ( *v4 + a4 * v4[1] < i )
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 336) + 8LL))(a1: *(_QWORD *)(a1 + 336));
      v10 = *(_QWORD *)(a1 + 64);
      v13 = v4[4];
      v12 = *((_QWORD *)v4 + 1);
      if ( v10 == 0 )
      {
        sub_1409D2AC0(a1: 0);
        __debugbreak();
      }
      result = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *, unsigned int *))(*(_QWORD *)v10 + 16LL))(
                 a1: v10,
                 a2,
                 a3: &v12,
                 a4: &v13);
      ++v4[1];
      *v4 = i;
    }
  }
  return result;
}