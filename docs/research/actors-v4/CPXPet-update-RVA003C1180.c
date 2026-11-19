// Hex-Rays pseudocode, SSOClient.exe 645.348067. Image base 0x140000000.
char __fastcall sub_1403C1180(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rdi
  bool v9; // si
  char v10; // di
  unsigned int v11; // edx
  bool v12; // zf
  float v13; // xmm7_4
  char v14; // al
  float v15; // xmm2_4
  float v16; // xmm2_4
  __int64 v17; // rdi
  __int64 v18; // rbx
  _BYTE *v19; // rax
  void **v21; // [rsp+20h] [rbp-E8h] BYREF
  int v22; // [rsp+28h] [rbp-E0h]
  int v23; // [rsp+2Ch] [rbp-DCh]
  _BYTE v24[16]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v25[48]; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v26[48]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v27[48]; // [rsp+A0h] [rbp-68h] BYREF

  v6 = sub_1405F8CF0(a1: a1 + 584);
  v7 = v6;
  if ( v6 == 0 )
    return v6;
  v8 = sub_1405F8CF0(a1: a1 + 392);
  v9 = sub_1400B4980(a1);
  if ( v9 )
  {
    v10 = *(_BYTE *)(a1 + 916) & 1;
    v11 = (unsigned __int8)sub_1403C15A0(a1) | *(_DWORD *)(a1 + 916) & 0xFFFFFFFE;
    v12 = *(_BYTE *)(a1 + 528) == 0;
    *(_DWORD *)(a1 + 916) = v11;
    LOBYTE(v6) = !v12 || (v11 & 1) != v10;
    *(_BYTE *)(a1 + 528) = v6;
    if ( (v11 & 1) != 0 && v10 == 0 )
    {
      *(_BYTE *)(a1 + 529) = 1;
      return v6;
    }
  }
  else if ( v8 != 0 )
  {
    v13 = sub_1400B4560(a1);
    v14 = sub_140799AD0(a1: v7);
    v15 = *(float *)(a1 + 504);
    if ( v14 != 0 )
      v16 = fmaxf(v15 - v13, 0.0);
    else
      v16 = fminf(v15 + v13, *(float *)(a1 + 508));
    *(float *)(a1 + 504) = v16;
    if ( *(float *)(a1 + 508) <= v16 )
    {
      sub_1401FEAF0(a1: v8);
      LOBYTE(v6) = sub_1405F8CF0(a1: a1 + 408);
    }
    else
    {
      LOBYTE(v6) = sub_1401FEAF0(a1: v8);
      if ( *(float *)(a1 + 504) == 0.0 )
        return v6;
      LOBYTE(v6) = sub_1405F8CF0(a1: a1 + 408);
    }
    goto LABEL_23;
  }
  v6 = sub_1405F8CF0(a1: a1 + 408);
  if ( v9 && v6 != 0 && *(_BYTE *)(a1 + 528) != 0 )
  {
    sub_1400C9130(a1: v6);
    *(_BYTE *)(a1 + 528) = 0;
    v6 = sub_1405F8CF0(a1: a1 + 424);
    if ( v6 != 0 )
      LOBYTE(v6) = sub_14012F110(a1: v6, a2: 0);
  }
LABEL_23:
  if ( (*(_BYTE *)(a1 + 916) & 1) != 0 )
  {
    LOBYTE(v6) = sub_1400B3390(a1, a2, a3);
  }
  else if ( v9 )
  {
    v17 = qword_141379EF0;
    if ( qword_141379EF0 == 0 )
    {
      if ( (unsigned __int8)sub_140059A00(a1: off_140EFA938) != 0 )
        __debugbreak();
      sub_1409E7D98(a1: 999);
      __debugbreak();
    }
    sub_1405F8B50(a1: v24, a2: a1 + 120);
    sub_140603DB0(a1: v17, a2: v26, a3: v24);
    sub_140689540(a1: v26, a2: v25);
    sub_1406895C0(a1: v26, a2: v27);
    for ( LOBYTE(v6) = sub_1406894D0(a1: v25, a2: v27); (_BYTE)v6 != 0; LOBYTE(v6) = sub_1406894D0(a1: v25, a2: v27) )
    {
      v18 = sub_1406894F0(a1: v25);
      if ( (unsigned __int8)sub_1405F8D80(a1: v18, a2: 110) != 0 )
      {
        sub_1405F8B70(a1: &v21, a2: *(unsigned int *)(v18 + 12), a3: *(unsigned int *)(v18 + 8));
      }
      else
      {
        v22 = 0;
        v23 = 195948557;
      }
      v21 = &PXEngine::SafeActorPtrAs<CPXParticleSystemEx>::`vftable';
      v19 = (_BYTE *)sub_1405F8CF0(a1: (__int64)&v21);
      if ( v19 != nullptr && (v19[148] & 0x10) == 0 )
        (*(void (__fastcall **)(_BYTE *, __int64, __int64))(*(_QWORD *)v19 + 112LL))(a1: v19, a2, a3);
      sub_140689530(a1: v25);
    }
  }
  return v6;
}
