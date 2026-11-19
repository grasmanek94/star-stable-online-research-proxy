void __fastcall sub_140A25890(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdi
  unsigned int v6; // ecx
  unsigned int v7; // eax
  unsigned int v8; // r9d
  unsigned int v9; // eax
  unsigned int v10; // r14d
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi

  if ( a3 != 0 )
  {
    v4 = a3;
    v6 = a3 + *(_DWORD *)(a1 + 20);
    v7 = *(_DWORD *)(a1 + 16);
    if ( v7 < v6 )
    {
      v8 = v7 + (v7 >> 1);
      v9 = 256;
      if ( *(_QWORD *)(a1 + 8) != 0 )
        v9 = v8;
      if ( v6 < v9 )
        v6 = v9;
      v10 = v6;
      v11 = sub_140083960(a1: 1, a2: v6);
      v12 = *(_QWORD *)(a1 + 8);
      v13 = v11;
      if ( v12 != 0 )
      {
        sub_140083990(a1: v11, a2: v12, a3: *(unsigned int *)(a1 + 16));
        sub_140083970(lpMem: *(LPVOID *)(a1 + 8));
      }
      *(_QWORD *)(a1 + 8) = v13;
      *(_DWORD *)(a1 + 16) = v10;
    }
    sub_140083990(a1: *(_QWORD *)(a1 + 8) + *(unsigned int *)(a1 + 20), a2, a3: v4);
    if ( *(_DWORD *)(a1 + 16) < (unsigned int)(v4 + *(_DWORD *)(a1 + 20))
      && (unsigned __int8)sub_140059CA0(a1: off_14109ECD0) != 0 )
    {
      __debugbreak();
    }
    *(_DWORD *)(a1 + 20) += v4;
  }
}