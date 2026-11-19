__int64 __fastcall sub_140A257D0(__int64 a1, int a2)
{
  unsigned int v3; // ecx
  __int64 result; // rax
  unsigned int v5; // edx
  unsigned int v6; // eax
  unsigned int v7; // esi
  __int64 v8; // rdx
  __int64 v9; // rdi

  v3 = a2 + *(_DWORD *)(a1 + 20);
  result = *(unsigned int *)(a1 + 16);
  if ( (unsigned int)result < v3 )
  {
    v5 = result + ((unsigned int)result >> 1);
    v6 = 256;
    if ( *(_QWORD *)(a1 + 8) != 0 )
      v6 = v5;
    if ( v3 < v6 )
      v3 = v6;
    v7 = v3;
    result = sub_140083960(a1: 1, a2: v3);
    v8 = *(_QWORD *)(a1 + 8);
    v9 = result;
    if ( v8 != 0 )
    {
      sub_140083990(a1: result, a2: v8, a3: *(unsigned int *)(a1 + 16));
      result = sub_140083970(lpMem: *(LPVOID *)(a1 + 8));
    }
    *(_QWORD *)(a1 + 8) = v9;
    *(_DWORD *)(a1 + 16) = v7;
  }
  return result;
}