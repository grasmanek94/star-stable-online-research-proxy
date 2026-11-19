__int64 sub_1405FADF0(__int64 *a1, __int64 a2, __int64 a3, int a4, int a5, int a6, int a7, char a8, ...)
{
  int v9; // esi
  unsigned __int64 v10; // rdx
  __int64 v12; // r10
  unsigned int v13; // eax
  int v14; // eax
  _BYTE v16[8]; // [rsp+40h] [rbp-18h] BYREF
  int v17; // [rsp+48h] [rbp-10h]
  int v18; // [rsp+4Ch] [rbp-Ch]

  v9 = 195948557;
  v10 = *(unsigned int *)(a3 + 12);
  if ( (_DWORD)v10 != 195948557 )
  {
    v12 = *a1;
    if ( v10 < (a1[1] - *a1) >> 6
      && *(_DWORD *)(((unsigned __int64)(unsigned int)v10 << 6) + v12 + 44) == *(_DWORD *)(a3 + 8) )
    {
      if ( v10 >= (a1[1] - v12) >> 6 )
        goto LABEL_8;
      v13 = sub_1405FC1B0((_DWORD)a1, a2: (int)v12 + ((_DWORD)v10 << 6), a3: a4, a4: a5, a5: a6, a6: a7, a7: a8);
      if ( v13 != 195948557 )
      {
        if ( v13 >= (unsigned __int64)((a1[1] - *a1) >> 6) )
LABEL_8:
          __fastfail(5u);
        sub_1405F1D60(a1: (__int64)v16, a2: v13, a3: *(_DWORD *)(((unsigned __int64)v13 << 6) + *a1 + 44));
        v14 = v17;
        v9 = v18;
LABEL_10:
        *(_DWORD *)(a2 + 8) = v14;
        *(_DWORD *)(a2 + 12) = v9;
        *(_QWORD *)a2 = &PXEngine::SafeActorPtr::`vftable';
        return a2;
      }
    }
  }
  v14 = 0;
  goto LABEL_10;
}