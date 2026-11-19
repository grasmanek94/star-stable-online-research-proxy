__int64 __fastcall sub_1407D46B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v5; // r14
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 result; // rax
  __int64 v9; // rdi
  __int64 v10; // r15
  int v11; // ebp
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // [rsp+40h] [rbp-58h] BYREF
  int v18; // [rsp+48h] [rbp-50h]
  int v19; // [rsp+4Ch] [rbp-4Ch]

  v5 = a2;
  v17 = a3;
  v6 = a1 + 2800;
  v7 = *(_QWORD *)(a1 + 2800);
  result = *(_QWORD *)(v7 + 8);
  v9 = v7;
  if ( *(_BYTE *)(result + 25) != 0 )
  {
    v11 = 0;
    v10 = *(_QWORD *)(v7 + 8);
  }
  else
  {
    do
    {
      v10 = result;
      if ( *(_WORD *)(result + 32) >= (unsigned __int16)a2 )
      {
        v11 = 1;
        v9 = result;
        result = *(_QWORD *)result;
      }
      else
      {
        v11 = 0;
        result = *(_QWORD *)(result + 16);
      }
    }
    while ( *(_BYTE *)(result + 25) == 0 );
  }
  if ( *(_BYTE *)(v9 + 25) != 0 || (unsigned __int16)a2 < *(_WORD *)(v9 + 32) )
  {
    if ( *(_QWORD *)(a1 + 2808) == 0x276276276276276LL )
      sub_14005A5D0(a1, a2, a3, a4);
    v12 = sub_1409DB470(a1: 104);
    *(_WORD *)(v12 + 32) = v5;
    *(_QWORD *)(v12 + 96) = 0;
    *(_QWORD *)v12 = v7;
    *(_QWORD *)(v12 + 8) = v7;
    *(_QWORD *)(v12 + 16) = v7;
    *(_WORD *)(v12 + 24) = 0;
    v17 = v10;
    v18 = v11;
    v19 = 0;
    result = sub_14005A200(a1: v6, a2: &v17, a3: v12);
    v9 = result;
  }
  if ( v9 + 40 != a3 )
  {
    v13 = *(_QWORD *)(v9 + 96);
    if ( v13 != 0 )
    {
      LOBYTE(a2) = v13 != v9 + 40;
      result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 32LL))(a1: v13, a2);
      *(_QWORD *)(v9 + 96) = 0;
    }
    v14 = *(_QWORD *)(a3 + 56);
    if ( v14 != 0 )
    {
      if ( v14 == a3 )
      {
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 8LL))(a1: v14, a2: v9 + 40);
        *(_QWORD *)(v9 + 96) = result;
        v15 = *(_QWORD *)(a3 + 56);
        if ( v15 == 0 )
          goto LABEL_21;
        LOBYTE(a2) = v15 != a3;
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 32LL))(a1: v15, a2);
      }
      else
      {
        *(_QWORD *)(v9 + 96) = v14;
      }
      *(_QWORD *)(a3 + 56) = 0;
    }
  }
LABEL_21:
  v16 = *(_QWORD *)(a3 + 56);
  if ( v16 != 0 )
  {
    LOBYTE(a2) = v16 != a3;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 32LL))(a1: v16, a2);
  }
  *(_QWORD *)(a3 + 56) = 19937;
  return result;
}