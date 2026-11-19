__int64 __fastcall sub_1403C2FB0(__int64 a1)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 result; // rax
  unsigned __int64 v5; // rsi
  __int64 v6; // rdi
  _QWORD v7[3]; // [rsp+20h] [rbp-49h] BYREF
  int v8; // [rsp+38h] [rbp-31h]
  __int16 v9; // [rsp+40h] [rbp-29h]
  _BYTE v10[32]; // [rsp+48h] [rbp-21h] BYREF
  __int16 v11; // [rsp+68h] [rbp-1h] BYREF
  _BYTE v12[32]; // [rsp+70h] [rbp+7h] BYREF
  char v13; // [rsp+90h] [rbp+27h]
  int v14; // [rsp+D0h] [rbp+67h] BYREF
  unsigned int v15; // [rsp+E0h] [rbp+77h] BYREF

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 176);
  result = *(_QWORD *)(a1 + 184);
  if ( v3 != result )
  {
    v7[1] = 0;
    v7[2] = 0;
    v8 = 0;
    v7[0] = &PXEngine::ByteStreamWriter::`vftable';
    if ( (unsigned __int64)(result - v3) >= 0x7FFFFFFF8LL && (unsigned __int8)sub_140059CA0(a1: off_140F87610) != 0 )
      __debugbreak();
    v15 = (__int64)(*(_QWORD *)(a1 + 184) - *(_QWORD *)(a1 + 176)) >> 3;
    if ( sub_1401D0820(a1: v7, a2: &v15) != 0 && v15 <= 0x3E80 )
    {
      v5 = v15;
      sub_1403C0E60(a1: a1 + 176, a2: v15, a3: &v14);
      v6 = *(_QWORD *)(a1 + 176);
      if ( v15 == 0 )
      {
LABEL_11:
        v9 = word_141313D7C;
        sub_140A255B0(a1: v10, a2: v7);
        v11 = v9;
        sub_140A255B0(a1: v12, a2: v10);
        v13 = 1;
        sub_140A25690(a1: v10);
        goto LABEL_13;
      }
      while ( 1 )
      {
        v14 = *(_DWORD *)(v6 + 8 * v2);
        if ( sub_1401D0820(a1: v7, a2: &v14) == 0 )
          break;
        *(_DWORD *)(v6 + 8 * v2) = v14;
        v14 = *(_DWORD *)(v6 + 8 * v2 + 4);
        if ( sub_1401D0820(a1: v7, a2: &v14) == 0 )
          break;
        *(_DWORD *)(v6 + 8 * v2++ + 4) = v14;
        if ( v2 >= v5 )
          goto LABEL_11;
      }
    }
    v13 = 0;
LABEL_13:
    sub_140A25690(a1: v7);
    sub_1407EE6B0(a1: &v11);
    result = *(_QWORD *)(a1 + 176);
    if ( result != *(_QWORD *)(a1 + 184) )
      *(_QWORD *)(a1 + 184) = result;
  }
  return result;
}