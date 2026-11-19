__int64 __fastcall sub_14025C2A0(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rax
  void **v8; // [rsp+30h] [rbp-38h] BYREF
  __int64 v9; // [rsp+38h] [rbp-30h]
  char v10[8]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v11; // [rsp+48h] [rbp-20h]
  _BYTE v12[24]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v13; // [rsp+70h] [rbp+8h] BYREF
  __int64 *v14; // [rsp+78h] [rbp+10h]
  __int64 v15; // [rsp+80h] [rbp+18h]

  *(_BYTE *)(a1 + 1226) |= 0x20u;
  if ( (unsigned __int8)sub_1405F1E20(a1: a1 + 440) != 0 || (_BYTE)(result = sub_14025D910(a1)) != 0 )
  {
    sub_1405F1D40(a1: (__int64)v12, a2: a1 + 440);
    v3 = sub_1405F1EE0(a1: (__int64)v12);
    if ( v3 != 0 )
      sub_1402622C0(a1, a2: v3);
    if ( *(_QWORD *)(a1 + 696) == 0 || *(_QWORD *)(a1 + 664) != 0 )
    {
      v7 = sub_1405F1EE0(a1: a1 + 440);
      return sub_140262320(a1, a2: v7);
    }
    else
    {
      *(_BYTE *)(a1 + 1224) &= ~2u;
      sub_1405F1D40(a1: (__int64)v10, a2: a1 + 120);
      v4 = sub_1409DB470(a1: 32);
      v13 = v4;
      if ( v4 != 0 )
      {
        v8 = &PXEngine::SafeActorPtr::`vftable';
        v9 = v11;
        v5 = sub_1405F1F60(a1: &v8);
        *(_QWORD *)(v4 + 8) = sub_140637CA0;
        *(_QWORD *)(v4 + 16) = v5;
        *(_BYTE *)(v4 + 24) = 0;
        *(_QWORD *)v4 = &PXEngine::ResourceActorCallBack::`vftable';
      }
      else
      {
        v4 = 0;
      }
      v14 = &v13;
      v15 = 0;
      v13 = v4;
      v6 = sub_14025E6A0(a1, a2: 0xFFFFFFFFLL, a3: 0);
      sub_1400AFEC0(a1, a2: (unsigned int)&v8, a3: v6, a4: (unsigned int)&v13, a5: 2);
      return sub_140645820(a1: v9);
    }
  }
  return result;
}