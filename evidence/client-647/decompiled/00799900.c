__int64 __fastcall sub_140799900(__int64 *a1, int a2, _DWORD *a3, int *a4, char a5)
{
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax
  int v11; // ecx
  __int64 result; // rax
  float v13; // xmm1_4
  float v14; // xmm2_4

  if ( a3 != nullptr )
    *((_DWORD *)a1 + 348) = *a3;
  if ( a4 != nullptr )
  {
    if ( a3 == nullptr || (v7 = *a3, (unsigned int)*a4 >= *a3) )
      v7 = *a4;
    *((_DWORD *)a1 + 349) = v7;
  }
  if ( a5 == 0 )
  {
    v8 = *((unsigned int *)a1 + 347);
    if ( a2 > (unsigned int)v8 )
    {
      v9 = *a1;
      *((_DWORD *)a1 + 352) = a2 - v8;
      v10 = sub_1400FBAF0(a1: v8);
      (*(void (__fastcall **)(__int64 *, __int64, _QWORD, __int64))(v9 + 776))(a1, a2: 226222, a3: 0, a4: v10);
    }
  }
  v11 = *((_DWORD *)a1 + 349);
  *((_DWORD *)a1 + 351) = *((_DWORD *)a1 + 350);
  result = *((unsigned int *)a1 + 348);
  *((_DWORD *)a1 + 347) = a2;
  if ( v11 <= (unsigned int)result )
  {
    *((_DWORD *)a1 + 350) = 1065353216;
  }
  else
  {
    v13 = 0.0;
    v14 = (float)((float)a2 - (float)(int)result) / (float)((float)v11 - (float)(int)result);
    if ( v14 >= 0.0 )
    {
      v13 = 1.0;
      if ( v14 <= 1.0 )
        v13 = (float)((float)a2 - (float)(int)result) / (float)((float)v11 - (float)(int)result);
    }
    *((float *)a1 + 350) = v13;
  }
  return result;
}