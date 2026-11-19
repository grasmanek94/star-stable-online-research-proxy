__int64 __fastcall sub_1404B81C0(_QWORD *a1, unsigned int *a2, unsigned int a3)
{
  __int64 v6; // r8
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  float v10; // xmm0_4
  __int64 v11; // rax
  float v12; // xmm0_4
  __int64 v13; // rsi
  __int64 v14; // r14
  __int64 v15; // r15
  unsigned int v16; // esi
  unsigned int v17; // r14d
  _QWORD v18[3]; // [rsp+20h] [rbp-59h] BYREF
  int v19; // [rsp+38h] [rbp-41h]
  void **v20; // [rsp+40h] [rbp-39h] BYREF
  int v21; // [rsp+48h] [rbp-31h]
  int v22; // [rsp+4Ch] [rbp-2Dh]
  __int16 v23; // [rsp+50h] [rbp-29h]
  _BYTE v24[32]; // [rsp+58h] [rbp-21h] BYREF
  __int16 v25; // [rsp+78h] [rbp-1h] BYREF
  char v26[32]; // [rsp+80h] [rbp+7h] BYREF
  char v27; // [rsp+A0h] [rbp+27h]
  unsigned int v28; // [rsp+F0h] [rbp+77h] BYREF

  v6 = a2[38];
  result = a1[75];
  v8 = a1[76];
  if ( result == v8 )
  {
LABEL_4:
    result = sub_1409D1F10(a1: a1[69], a2: a1[70], a3: v6);
    if ( result != a1[70] )
      return result;
    if ( a3 != 0 )
    {
      if ( a3 != 1 )
        return result;
      v11 = sub_1407876D0();
      if ( v11 == 0 )
      {
        result = sub_140059CA0(a1: off_140FADC30);
        if ( (_BYTE)result == 0 )
          return result;
LABEL_16:
        __debugbreak();
      }
      v12 = sub_14007F2A0(a1: v11 + 152, a2: 0);
      result = a2[41];
      if ( v12 < (float)(int)result )
        return result;
    }
    else
    {
      v9 = sub_140787620();
      if ( v9 == 0 )
      {
        result = sub_140059CA0(a1: off_140FADBB8);
        if ( (_BYTE)result == 0 )
          return result;
        goto LABEL_16;
      }
      v10 = sub_14007F2A0(a1: v9 + 152, a2: 0);
      result = a2[42];
      if ( v10 < (float)(int)result || (_DWORD)result == 0 && a2[41] != 0 )
        return result;
    }
    v13 = qword_14138A6F0;
    if ( qword_14138A6F0 == 0 )
    {
      if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
        __debugbreak();
      sub_1409E29B8(a1: 999);
      __debugbreak();
    }
    v14 = sub_1405FD2E0(a1: qword_14138A6F0, a2: v18, a3: "Network");
    if ( (unsigned __int8)sub_1406006A0(a1: v13, a2: v14, a3: 122) != 0 )
    {
      sub_1405F1D60(a1: &v20, a2: *(unsigned int *)(v14 + 12), a3: *(unsigned int *)(v14 + 8));
    }
    else
    {
      v21 = 0;
      v22 = 195948557;
    }
    v20 = &PXEngine::SafeActorPtrAs<CPXNetwork>::`vftable';
    result = sub_1405F1EE0(a1: (__int64)&v20);
    v15 = result;
    if ( result != 0 )
    {
      if ( a3 == 1 )
      {
        v16 = a2[41];
        v17 = 0;
      }
      else
      {
        v16 = 0;
        v17 = a2[42];
      }
      v18[1] = 0;
      v18[2] = 0;
      v19 = 0;
      v18[0] = &PXEngine::ByteStreamWriter::`vftable';
      v28 = a3;
      if ( sub_1401D0820(a1: v18, a2: &v28) != 0
        && (v28 = a2[39], sub_1401D0820(a1: v18, a2: &v28) != 0)
        && (a2[39] = v28, v28 = a2[38], sub_1401D0820(a1: v18, a2: &v28) != 0)
        && (a2[38] = v28, v28 = v17, sub_1401D0820(a1: v18, a2: &v28) != 0)
        && (v28 = v16, sub_1401D0820(a1: v18, a2: &v28) != 0) )
      {
        v23 = word_1413141B0;
        sub_140A255B0(a1: v24, a2: v18);
        v25 = v23;
        sub_140A255B0(a1: v26, a2: v24);
        v27 = 1;
        sub_140A25690(a1: v24);
      }
      else
      {
        v27 = 0;
      }
      sub_140A25690(a1: v18);
      return sub_1407D6BC0(a1: v15, a2: &v25);
    }
    return result;
  }
  while ( *(_DWORD *)result != (_DWORD)v6 )
  {
    result += 4;
    if ( result == v8 )
      goto LABEL_4;
  }
  return result;
}