void __fastcall sub_140451190(__int64 a1)
{
  __int64 v1; // rdx
  int v2; // eax
  __int64 v3; // rax
  _BYTE v4[56]; // [rsp+20h] [rbp-38h] BYREF
  int v5; // [rsp+60h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 1176);
  if ( v1 != 0 )
  {
    v2 = *(_DWORD *)(a1 + 1192);
    if ( v2 != -1 && v2 != *(_DWORD *)(v1 + 268) )
    {
      v5 = *(_DWORD *)(a1 + 1192);
      v3 = sub_1401D5630(a1: &unk_141313CD8, a2: v4, a3: &v5);
      sub_1407EE6B0(a1: v3);
    }
  }
}