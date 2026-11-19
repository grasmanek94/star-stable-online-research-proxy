void __fastcall sub_1407BB2B0(__int64 a1)
{
  float v2; // xmm6_4
  int v3; // edi
  void **v4; // [rsp+28h] [rbp-49h] BYREF
  __int64 v5; // [rsp+30h] [rbp-41h]
  __int64 v6; // [rsp+38h] [rbp-39h]
  int v7; // [rsp+40h] [rbp-31h]
  __int16 v8; // [rsp+48h] [rbp-29h]
  _BYTE v9[32]; // [rsp+50h] [rbp-21h] BYREF
  __int16 v10; // [rsp+70h] [rbp-1h] BYREF
  _BYTE v11[32]; // [rsp+78h] [rbp+7h] BYREF
  char v12; // [rsp+98h] [rbp+27h]
  __int16 *v13; // [rsp+D8h] [rbp+67h] BYREF

  v2 = *(float *)(a1 + 2632) + 60.0;
  if ( sub_1400AED80(a1) > v2 )
  {
    v3 = sub_14008A0B0();
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v4 = &PXEngine::ByteStreamWriter::`vftable';
    LODWORD(v13) = v3;
    if ( sub_1401D0820(a1: &v4, a2: &v13) != 0 )
    {
      v3 = (int)v13;
      v8 = word_141313C1C;
      sub_140A255B0(a1: v9, a2: &v4);
      v10 = v8;
      sub_140A255B0(a1: v11, a2: v9);
      v12 = 1;
      sub_140A25690(a1: v9);
    }
    else
    {
      v12 = 0;
    }
    sub_140A25690(a1: &v4);
    sub_1407D6C20(a1, a2: &v10);
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v4 = &PXEngine::ByteStreamWriter::`vftable';
    LODWORD(v13) = v3;
    if ( sub_1401D0820(a1: &v4, a2: &v13) != 0 )
    {
      v3 = (int)v13;
      v8 = word_1413140CC;
      sub_140A255B0(a1: v9, a2: &v4);
      v10 = v8;
      sub_140A255B0(a1: v11, a2: v9);
      v12 = 1;
      sub_140A25690(a1: v9);
    }
    else
    {
      v12 = 0;
    }
    sub_140A25690(a1: &v4);
    v13 = &v10;
    if ( v12 != 0 )
    {
      sub_1407D62B0(a1, a2: v10, a3: (__int64)v11);
      if ( v12 != 0 )
        sub_140A25690(a1: v11);
    }
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v4 = &PXEngine::ByteStreamWriter::`vftable';
    LODWORD(v13) = v3;
    if ( sub_1401D0820(a1: &v4, a2: &v13) != 0 )
    {
      v8 = word_1413140D0;
      sub_140A255B0(a1: v9, a2: &v4);
      v10 = v8;
      sub_140A255B0(a1: v11, a2: v9);
      v12 = 1;
      sub_140A25690(a1: v9);
    }
    else
    {
      v12 = 0;
    }
    sub_140A25690(a1: &v4);
    v13 = &v10;
    if ( v12 != 0 )
    {
      sub_1407D62B0(a1, a2: v10, a3: (__int64)v11);
      if ( v12 != 0 )
        sub_140A25690(a1: v11);
    }
    *(float *)(a1 + 2632) = *(float *)(a1 + 2632) + 60.0;
  }
}