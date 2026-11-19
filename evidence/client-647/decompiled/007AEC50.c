__int64 __fastcall sub_1407AEC50(__int64 a1, unsigned int a2, __int64 a3, int *a4, __int128 *a5, __int128 *a6)
{
  __int64 v7; // rbx
  void *v8; // rcx
  void *v9; // rcx
  void (__fastcall ***v10)(_QWORD, __int64); // rcx
  __int128 v12; // [rsp+50h] [rbp-68h] BYREF
  __int64 v13; // [rsp+60h] [rbp-58h]
  unsigned __int64 v14; // [rsp+68h] [rbp-50h]
  __int128 v15; // [rsp+70h] [rbp-48h]
  __int64 v16; // [rsp+80h] [rbp-38h]
  unsigned __int64 v17; // [rsp+88h] [rbp-30h]
  int v18; // [rsp+90h] [rbp-28h]
  __int64 v19; // [rsp+98h] [rbp-20h]

  v12 = 0;
  v12 = *a6;
  v13 = *((_QWORD *)a6 + 2);
  v14 = *((_QWORD *)a6 + 3);
  *((_QWORD *)a6 + 2) = 0;
  *((_QWORD *)a6 + 3) = 15;
  *(_BYTE *)a6 = 0;
  v15 = 0;
  v15 = *a5;
  v16 = *((_QWORD *)a5 + 2);
  v17 = *((_QWORD *)a5 + 3);
  *((_QWORD *)a5 + 2) = 0;
  *((_QWORD *)a5 + 3) = 15;
  *(_BYTE *)a5 = 0;
  v18 = *a4;
  v19 = a3;
  v7 = sub_1407AC260(a1: a2, a2: &v12);
  if ( v17 > 0xF )
  {
    v8 = (void *)v15;
    if ( v17 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v15 - *(_QWORD *)(v15 - 8) - 8) > 0x1F )
        goto LABEL_15;
      v8 = *(void **)(v15 - 8);
    }
    sub_1409DB4C0(lpMem: v8);
  }
  if ( v14 > 0xF )
  {
    v9 = (void *)v12;
    if ( v14 + 1 >= 0x1000 )
    {
      if ( (unsigned __int64)(v12 - *(_QWORD *)(v12 - 8) - 8) <= 0x1F )
      {
        v9 = *(void **)(v12 - 8);
        goto LABEL_10;
      }
LABEL_15:
      __fastfail(5u);
    }
LABEL_10:
    sub_1409DB4C0(lpMem: v9);
  }
  if ( v7 == 0 )
    sub_1401B7680(a1: 4);
  *(_QWORD *)a1 = v7;
  *(_BYTE *)(a1 + 8) = 1;
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 8), 0xFFFFFFFF) == 1 )
  {
    v10 = *(void (__fastcall ****)(_QWORD, __int64))(v7 + 248);
    if ( v10 != nullptr )
      (**v10)(a1: v10, a2: v7);
    else
      (**(void (__fastcall ***)(__int64, __int64))v7)(a1: v7, a2: 1);
  }
  return a1;
}