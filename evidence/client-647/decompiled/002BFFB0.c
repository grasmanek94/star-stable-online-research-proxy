__int64 __fastcall sub_1402BFFB0(__int64 a1, _DWORD *a2)
{
  unsigned __int8 v4; // bl
  int v6; // [rsp+20h] [rbp-59h] BYREF
  _BYTE v7[4]; // [rsp+24h] [rbp-55h] BYREF
  __int64 v8; // [rsp+28h] [rbp-51h]
  _BYTE v9[144]; // [rsp+30h] [rbp-49h] BYREF
  char v10; // [rsp+C0h] [rbp+47h]
  int v11; // [rsp+E8h] [rbp+6Fh] BYREF

  sub_140E827B0(a1: &v6, a2: 0, a3: 168);
  v6 = 0;
  v7[0] = 0;
  v8 = 0;
  v10 = 0;
  v11 = 0;
  if ( sub_1401D0820(a1: a2, a2: &v11) != 0
    && (v6 = v11, (unsigned __int8)sub_1402B8840(a1: a2, a2: v7) != 0)
    && (v11 = v8, sub_1401D0820(a1: a2, a2: &v11) != 0)
    && (LODWORD(v8) = v11, v11 = HIDWORD(v8), sub_1401D0820(a1: a2, a2: &v11) != 0)
    && (HIDWORD(v8) = v11, (unsigned __int8)sub_1402B8400(a1: a2, a2: v9) != 0) )
  {
    (*(void (__fastcall **)(__int64, int *))(a1 + 8))(a1: a1 + 16, a2: &v6);
    v4 = 1;
  }
  else
  {
    v4 = 0;
  }
  if ( v10 != 0 )
    sub_1402BCEB0(a1: v9);
  return v4;
}