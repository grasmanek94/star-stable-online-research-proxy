// Read-only Hex-Rays export, client 645.348067.
_OWORD *__fastcall sub_140111DE0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // xmm0_8
  int *v7; // rax
  __int64 v8; // rax
  int v9; // xmm6_4
  int v10; // xmm7_4
  int v11; // xmm8_4
  __int64 v12; // rbx
  __int64 v13; // rax
  _OWORD *result; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int64 v17; // [rsp+20h] [rbp-58h] BYREF
  int v18; // [rsp+28h] [rbp-50h]
  _BYTE v19[20]; // [rsp+2Ch] [rbp-4Ch] BYREF

  if ( (a1[91] & 8) != 0 )
  {
    v3 = sub_1400CC630(a1);
    v6 = *(_QWORD *)v3;
    v18 = *(_DWORD *)(v3 + 8);
    v7 = (int *)&v17;
    v17 = v6;
  }
  else
  {
    v8 = sub_1400B5440(a1, a2);
    sub_1400CC650(a1, a2: v19, a3: v8);
  }
  if ( (a1[91] & 1) != 0 )
  {
    v9 = 0;
    v10 = 0;
    v11 = 0;
  }
  else
  {
    v10 = v7[1];
    v11 = v7[2];
    v9 = *v7;
  }
  v12 = *a1;
  v13 = sub_1400B5440(a1: v5, a2: v4);
  result = (_OWORD *)(*(__int64 (__fastcall **)(__int64 *, __int64))(v12 + 696))(a1, a2: v13);
  *(_OWORD *)(a1 + 21) = *result;
  *(_OWORD *)(a1 + 23) = result[1];
  *(_OWORD *)(a1 + 25) = result[2];
  v15 = result[3];
  v16 = *(_OWORD *)(a1 + 45);
  *((_DWORD *)a1 + 93) = 1065353216;
  *((_DWORD *)a1 + 90) = v9;
  *((_DWORD *)a1 + 91) = v10;
  *((_DWORD *)a1 + 92) = v11;
  *(_OWORD *)(a1 + 27) = v15;
  *(_OWORD *)(a1 + 47) = v16;
  return result;
}