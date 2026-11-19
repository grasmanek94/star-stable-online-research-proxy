__int64 __fastcall sub_1407D9D70(__int64 a1)
{
  _BYTE *v2; // rdi
  __int16 v3; // r15
  __int64 v4; // rax
  __int64 *v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rax
  char v8; // al
  _BYTE v10[8]; // [rsp+20h] [rbp-E0h] BYREF
  int v11; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v12[3]; // [rsp+30h] [rbp-D0h] BYREF
  int v13; // [rsp+48h] [rbp-B8h]
  _QWORD v14[3]; // [rsp+50h] [rbp-B0h] BYREF
  int v15; // [rsp+68h] [rbp-98h]
  __int16 v16; // [rsp+70h] [rbp-90h] BYREF
  char v17; // [rsp+72h] [rbp-8Eh]
  char v18; // [rsp+78h] [rbp-88h]
  int v19; // [rsp+7Ch] [rbp-84h]
  char v20; // [rsp+9Ch] [rbp-64h]
  int v21; // [rsp+A0h] [rbp-60h]
  __int64 v22; // [rsp+A4h] [rbp-5Ch]
  int v23; // [rsp+ACh] [rbp-54h]
  __m128i si128; // [rsp+B0h] [rbp-50h]
  __int128 v25; // [rsp+C0h] [rbp-40h]
  __int128 v26; // [rsp+D0h] [rbp-30h]
  char v27; // [rsp+E4h] [rbp-1Ch]
  char v28; // [rsp+110h] [rbp+10h]
  char v29; // [rsp+114h] [rbp+14h]
  __int64 v30; // [rsp+118h] [rbp+18h]
  int v31; // [rsp+120h] [rbp+20h]
  __int16 v32; // [rsp+130h] [rbp+30h]
  _BYTE v33[32]; // [rsp+138h] [rbp+38h] BYREF
  int v34; // [rsp+158h] [rbp+58h] BYREF
  __int16 v35; // [rsp+15Ch] [rbp+5Ch]
  _DWORD v36[2]; // [rsp+160h] [rbp+60h] BYREF
  __int128 v37; // [rsp+168h] [rbp+68h]
  __int64 v38; // [rsp+178h] [rbp+78h] BYREF
  __int64 v39; // [rsp+180h] [rbp+80h]
  __int64 v40; // [rsp+188h] [rbp+88h]

  v2 = (_BYTE *)sub_1405F1EE0(a1: (__int64)&off_141313B68);
  if ( v2 == nullptr )
    goto LABEL_17;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_140EFE3F0);
  v25 = 0;
  v26 = 0u;
  BYTE12(v26) = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v31 = *(_QWORD *)sub_14009B080(a1: &v11) / 1000000LL;
  sub_1407A2A00(a1: v2, a2: &v16);
  v3 = 280;
  if ( (*(unsigned __int8 (__fastcall **)(_BYTE *))(*(_QWORD *)v2 + 880LL))(a1: v2) != 0
    && (unsigned __int8)sub_1407874D0(a1: v2) != 0 )
  {
    v4 = sub_1405F1EE0(a1: (__int64)(v2 + 1608));
    if ( v4 != 0 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 1000LL))(a1: v4) != 0 )
      v3 = 281;
  }
  v12[1] = 0;
  v12[2] = 0;
  v13 = 0;
  v12[0] = &PXEngine::ByteStreamWriter::`vftable';
  if ( sub_14080BFE0(a1: v12, a2: (__int64)&v16) && (v11 = v31, sub_1401D0820(a1: v12, a2: &v11) != 0) )
  {
    v31 = v11;
    v5 = *(__int64 **)(a1 + 2640);
    if ( v5 == nullptr )
    {
      while ( 1 )
      {
        if ( (unsigned __int8)sub_140059CA0(a1: off_141013AE8) != 0 )
          __debugbreak();
        sub_1409E29B8(a1: 999);
LABEL_17:
        if ( (unsigned __int8)sub_140059CA0(a1: off_140F4EF78) != 0 )
          __debugbreak();
        sub_1409E29B8(a1: 999);
      }
    }
    v6 = *v5;
    v34 = 1;
    v35 = v3;
    v36[0] = -1;
    v36[1] = 0;
    v37 = 0;
    sub_1409CB2E0(a1: &v38);
    v39 = 0;
    v40 = 0;
    v7 = sub_140801580(a1: (__int64)&v34, a2: (__int64)v12);
    (*(void (__fastcall **)(__int64 *, __int64))(v6 + 16))(a1: v5, a2: v7);
  }
  else if ( (unsigned __int8)sub_140059D90(
                               a1: off_141013B50,
                               a2: "CPXNetwork::TrySendPositionUpdate: Failed to serialize BroadcastPositionRequest message!") != 0 )
  {
    __debugbreak();
  }
  if ( (unsigned __int8)sub_1407A06B0(a1: v2) != 0 )
  {
    v8 = v2[2224];
    v14[1] = 0;
    v14[2] = 0;
    v15 = 0;
    v14[0] = &PXEngine::ByteStreamWriter::`vftable';
    v10[0] = v8;
    sub_140A25890(a1: (__int64)v14, a2: (__int64)v10, a3: 1u);
    v32 = word_141313D28;
    sub_140A255B0(a1: (__int64)v33, a2: (__int64)v14);
    LOWORD(v34) = v32;
    sub_140A255B0(a1: (__int64)v36, a2: (__int64)v33);
    LOBYTE(v39) = 1;
    sub_140A25690(a1: (__int64)v33);
    sub_140A25690(a1: (__int64)v14);
    sub_1407D6C20(a1, a2: &v34);
  }
  return sub_140A25690(a1: (__int64)v12);
}