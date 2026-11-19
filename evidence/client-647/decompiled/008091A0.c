void __fastcall sub_1408091A0(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // ebp
  __int64 v6; // rdi
  __int64 i; // rbx
  __int64 v8; // rsi
  __int64 v9; // rax
  void *v10; // rcx
  __int64 j; // rsi
  __int64 v12; // rax
  void *v13; // rcx
  __int64 v14; // rsi
  __int64 k; // rdi
  void *v16; // rcx
  void *v17; // rcx

  if ( (*(_BYTE *)(a3 + 40) & 1) == 0 && (unsigned __int8)sub_140059CA0(a1: off_14101B320) != 0 )
    __debugbreak();
  v5 = *(_DWORD *)(a3 + 80);
  v6 = *(_QWORD *)(a2 + 136);
  for ( i = *(_QWORD *)(a2 + 128); i != v6; i += 24 )
  {
    if ( *(_DWORD *)(i + 20) == v5 )
      break;
  }
  if ( i != v6 )
  {
    v8 = i + 24;
    if ( i + 24 == v6 )
      goto LABEL_16;
    do
    {
      if ( *(_DWORD *)(v8 + 20) != v5 )
      {
        *(_DWORD *)i = *(_DWORD *)v8;
        *(_DWORD *)(i + 4) = *(_DWORD *)(v8 + 4);
        if ( i != v8 )
        {
          v9 = *(_QWORD *)(v8 + 8);
          *(_QWORD *)(v8 + 8) = 0;
          v10 = *(void **)(i + 8);
          *(_QWORD *)(i + 8) = v9;
          if ( v10 != nullptr )
            sub_1409DB4C0(lpMem: v10);
        }
        *(_DWORD *)(i + 16) = *(_DWORD *)(v8 + 16);
        *(_DWORD *)(i + 20) = *(_DWORD *)(v8 + 20);
        i += 24;
      }
      v8 += 24;
    }
    while ( v8 != v6 );
    if ( i != v6 )
    {
LABEL_16:
      for ( j = *(_QWORD *)(a2 + 136); v6 != j; v6 += 24 )
      {
        *(_DWORD *)i = *(_DWORD *)v6;
        *(_DWORD *)(i + 4) = *(_DWORD *)(v6 + 4);
        if ( i != v6 )
        {
          v12 = *(_QWORD *)(v6 + 8);
          *(_QWORD *)(v6 + 8) = 0;
          v13 = *(void **)(i + 8);
          *(_QWORD *)(i + 8) = v12;
          if ( v13 != nullptr )
            sub_1409DB4C0(lpMem: v13);
        }
        *(_DWORD *)(i + 16) = *(_DWORD *)(v6 + 16);
        *(_DWORD *)(i + 20) = *(_DWORD *)(v6 + 20);
        i += 24;
      }
      v14 = *(_QWORD *)(a2 + 136);
      for ( k = i; k != v14; k += 24 )
      {
        v16 = *(void **)(k + 8);
        if ( v16 != nullptr )
          sub_1409DB4C0(lpMem: v16);
        *(_QWORD *)(k + 8) = 19937;
      }
      *(_QWORD *)(a2 + 136) = i;
    }
  }
  v17 = *(void **)(a3 + 88);
  if ( v17 != nullptr )
    sub_1409DB4C0(lpMem: v17);
  *(_QWORD *)(a3 + 88) = 19937;
}