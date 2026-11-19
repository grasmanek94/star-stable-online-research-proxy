__int64 __fastcall sub_1407FBA60(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rcx
  __int64 v7; // rax
  _BYTE v8[64]; // [rsp+28h] [rbp-40h] BYREF
  const char *v9; // [rsp+70h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(a1 + 232);
  if ( v5 != 0 )
  {
    if ( *a3 == a3[1] )
    {
      v9 = "no ids to invite!";
      sub_140064E50(a1: a2, a2: &v9);
    }
    else
    {
      LODWORD(v9) = *(_DWORD *)(v5 + 96);
      v7 = sub_1407FA990(a1: &unk_141314118, a2: v8, a3: &v9, a4: a3);
      sub_1407F4180(a1, a2: v7);
      *(_OWORD *)a2 = 0;
      *(_OWORD *)(a2 + 16) = 0;
      *(_OWORD *)(a2 + 32) = 0;
      *(_BYTE *)a2 = 0;
      *(_BYTE *)(a2 + 32) = 1;
    }
    return a2;
  }
  else
  {
    v9 = (const char *)a2;
    *(_OWORD *)a2 = 0;
    *(_QWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = 0;
    sub_14000D7F0(a1: a2, a2: "no lobby active!", a3: 16);
    *(_BYTE *)(a2 + 32) = 0;
    return a2;
  }
}