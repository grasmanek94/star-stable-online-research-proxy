__int64 __fastcall sub_140792F30(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // r8
  __int64 v7; // rcx
  unsigned __int8 v8; // bl
  char v9; // di
  int v10; // edx
  __int64 v11; // rax
  _QWORD v12[3]; // [rsp+20h] [rbp-49h] BYREF
  int v13; // [rsp+38h] [rbp-31h]
  void **v14; // [rsp+40h] [rbp-29h] BYREF
  int v15; // [rsp+48h] [rbp-21h]
  int v16; // [rsp+4Ch] [rbp-1Dh]
  __int16 v17; // [rsp+50h] [rbp-19h]
  _BYTE v18[32]; // [rsp+58h] [rbp-11h] BYREF
  __int16 v19; // [rsp+78h] [rbp+Fh] BYREF
  _BYTE v20[32]; // [rsp+80h] [rbp+17h] BYREF
  char v21; // [rsp+A0h] [rbp+37h]
  int v22; // [rsp+D8h] [rbp+6Fh] BYREF

  result = sub_1400AE640(a1);
  if ( (_BYTE)result != 0 )
  {
    v3 = qword_14138A6F0;
    if ( qword_14138A6F0 == 0 )
    {
      if ( (unsigned __int8)sub_140059CA0(a1: off_140F35058) != 0 )
        __debugbreak();
      sub_1409E29B8(a1: 999);
      __debugbreak();
    }
    v4 = sub_1405FD2E0(a1: qword_14138A6F0, a2: v12, a3: "Network");
    if ( (unsigned __int8)sub_1406006A0(a1: v3, a2: v4, a3: 122) != 0 )
    {
      sub_1405F1D60(a1: &v14, a2: *(unsigned int *)(v4 + 12), a3: *(unsigned int *)(v4 + 8));
    }
    else
    {
      v15 = 0;
      v16 = 195948557;
    }
    v14 = &PXEngine::SafeActorPtrAs<CPXNetwork>::`vftable';
    result = sub_1405F1EE0(a1: (__int64)&v14);
    v5 = result;
    if ( result != 0 )
    {
      v6 = *(_QWORD *)(a1 + 2192);
      v7 = *(_QWORD *)(v6 + 8);
      for ( result = v6; *(_BYTE *)(v7 + 25) == 0; v7 = *(_QWORD *)v7 )
      {
        if ( *(_BYTE *)(v7 + 32) >= *(_BYTE *)(a1 + 2184) )
          result = v7;
        else
          v7 += 16;
      }
      if ( *(_BYTE *)(result + 25) == 0 )
      {
        v8 = *(_BYTE *)(a1 + 2184);
        if ( v8 >= *(_BYTE *)(result + 32) && result != v6 )
        {
          v9 = *(_BYTE *)(*(_QWORD *)(result + 40) + 220LL);
          v10 = 0;
          if ( v8 == 1 )
          {
            v11 = sub_1404E03B0(a1: v7, a2: 0);
            v10 = 0;
            if ( v11 != 0 )
              v10 = sub_1404E0520(a1: v11, a2: 1);
          }
          v12[1] = 0;
          v12[2] = 0;
          v13 = 0;
          v12[0] = &PXEngine::ByteStreamWriter::`vftable';
          v22 = v10;
          if ( sub_1401D0820(a1: v12, a2: &v22) == 0 )
            goto LABEL_21;
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(v12[0] + 8LL))(a1: v12) != 0 )
          {
            LOBYTE(v22) = 0;
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, int *, __int64))(v12[0] + 16LL))(a1: v12, a2: &v22, a3: 1) == 0 )
            {
LABEL_21:
              v21 = 0;
LABEL_22:
              sub_140A25690(a1: v12);
              return sub_1407D6C20(a1: v5, a2: &v19);
            }
          }
          else
          {
            LOBYTE(v22) = v8;
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, int *, __int64))(v12[0] + 16LL))(a1: v12, a2: &v22, a3: 1) == 0 )
              goto LABEL_21;
          }
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(v12[0] + 8LL))(a1: v12) != 0 )
          {
            LOBYTE(v22) = 0;
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, int *, __int64))(v12[0] + 16LL))(a1: v12, a2: &v22, a3: 1) == 0 )
              goto LABEL_21;
          }
          else
          {
            LOBYTE(v22) = v9;
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, int *, __int64))(v12[0] + 16LL))(a1: v12, a2: &v22, a3: 1) == 0 )
              goto LABEL_21;
          }
          v17 = word_141313D10;
          sub_140A255B0(a1: v18, a2: v12);
          v19 = v17;
          sub_140A255B0(a1: v20, a2: v18);
          v21 = 1;
          sub_140A25690(a1: v18);
          goto LABEL_22;
        }
      }
    }
  }
  return result;
}