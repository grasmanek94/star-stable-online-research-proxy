__int64 __fastcall sub_1407F3A00(_QWORD *a1, unsigned __int8 a2)
{
  __int64 v2; // r10
  _BYTE *v3; // r9
  unsigned __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 result; // rax
  _BYTE *v9; // rcx
  _BYTE *v10; // rax
  __int64 v11; // rdx

  v2 = a1[22];
  v3 = (_BYTE *)a1[20];
  v5 = a1[25] & (0x100000001B3LL * (a2 ^ 0xCBF29CE484222325uLL));
  v6 = 2 * v5;
  v7 = v2 + 16 * v5;
  result = *(_QWORD *)(v7 + 8);
  if ( (_BYTE *)result == v3 )
  {
LABEL_6:
    result = 0;
    goto LABEL_7;
  }
  if ( a2 != *(_BYTE *)(result + 16) )
  {
    while ( result != *(_QWORD *)(v2 + 8 * v6) )
    {
      result = *(_QWORD *)(result + 8);
      if ( a2 == *(_BYTE *)(result + 16) )
        goto LABEL_7;
    }
    goto LABEL_6;
  }
LABEL_7:
  if ( result == 0 || (_BYTE *)result == v3 )
    return result;
  v9 = *(_BYTE **)(v7 + 8);
  if ( v9 != v3 )
  {
    result = *(_QWORD *)(v2 + 8 * v6);
    if ( a2 == v9[16] )
      goto LABEL_15;
    while ( v9 != (_BYTE *)result )
    {
      v9 = *((_BYTE **)v9 + 1);
      if ( a2 == v9[16] )
        goto LABEL_15;
    }
  }
  v9 = nullptr;
LABEL_15:
  if ( v9 != nullptr )
  {
    v10 = *(_BYTE **)(v2 + 8 * v6);
    if ( *(_BYTE **)(v7 + 8) == v9 )
    {
      if ( v10 == v9 )
        *(_QWORD *)(v2 + 8 * v6) = v3;
      else
        v3 = *((_BYTE **)v9 + 1);
      *(_QWORD *)(v7 + 8) = v3;
    }
    else if ( v10 == v9 )
    {
      *(_QWORD *)(v2 + 8 * v6) = *(_QWORD *)v9;
    }
    v11 = *(_QWORD *)v9;
    --a1[21];
    **((_QWORD **)v9 + 1) = v11;
    *(_QWORD *)(v11 + 8) = *((_QWORD *)v9 + 1);
    return sub_1409DB4C0(lpMem: v9);
  }
  return result;
}