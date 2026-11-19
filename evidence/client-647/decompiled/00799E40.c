void __fastcall sub_140799E40(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  _BYTE v4[8]; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+2Ch] [rbp-1Ch]
  _BYTE v7[8]; // [rsp+30h] [rbp-18h] BYREF
  int v8; // [rsp+38h] [rbp-10h]
  int v9; // [rsp+3Ch] [rbp-Ch]

  if ( a2 != 0
    && (v3 = qword_14138A6F0,
        sub_1405F1D40(a1: (__int64)v4, a2: a2 + 120),
        (unsigned __int8)sub_1406006A0(a1: v3, a2: v4, a3: 230) != 0) )
  {
    sub_1405F1D60(a1: (__int64)v7, a2: v6, a3: v5);
    *(_DWORD *)(a1 + 1664) = v8;
    *(_DWORD *)(a1 + 1668) = v9;
  }
  else
  {
    *(_DWORD *)(a1 + 1664) = 0;
    *(_DWORD *)(a1 + 1668) = 195948557;
  }
}