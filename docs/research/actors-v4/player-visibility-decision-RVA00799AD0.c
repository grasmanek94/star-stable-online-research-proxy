// Hex-Rays pseudocode exported through Official IDA MCP Server.
// Baseline SSOClient.exe 645.348067; IDA base 0x140000000.
// Descriptive filename is an analysis label, not a recovered private function name.

char __fastcall sub_140799AD0(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  bool v4; // bp
  bool v5; // si
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  _BYTE v16[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = sub_1405F8CF0(a1: (__int64)&off_141302F28);
  v3 = v2;
  if ( v2 != 0 )
  {
    if ( *(_BYTE *)(v2 + 2012) == 0 && (unsigned __int8)sub_140059A00(a1: off_140F0B318) != 0 )
      __debugbreak();
    v4 = *(_BYTE *)(v3 + 2012) != 120 && (*(_BYTE *)(a1 + 2383) & 4) != 0;
    v5 = byte_141300BA8 != 0 || (*(_BYTE *)(a1 + 2224) & 2) != 0;
    v8 = sub_1405F8CF0(a1: (__int64)&off_141300E00);
    if ( v4
      || (*(_BYTE *)(a1 + 2383) & 2) != 0
      || v5 && ((unsigned __int8)sub_1407AB490(a1) == 0 || v8 != 0 && *(_BYTE *)(v8 + 1169) != 0)
      || (v9 = sub_1400B5440(a1: v7, a2: v6), v10 = sub_1400DECA0(a1: v9, a2: v16), (v11 = sub_1405F8CF0(a1: v10)) != 0)
      && (v12 = *(_QWORD *)(v11 + 1504)) != 0
      && *(_BYTE *)(v12 + 4) == 1
      && sub_140803D00(a1: v12, a2: *(unsigned int *)(a1 + 1720)) == 0 )
    {
      LOBYTE(v2) = 1;
      return v2;
    }
    if ( sub_1405F8CF0(a1: v3 + 2256) != 0 )
    {
      v13 = v3 + 2256;
LABEL_27:
      v14 = sub_1405F8CF0(a1: v13);
      LOBYTE(v2) = !sub_14038D9B0(a1: v14, a2: *(_DWORD *)(a1 + 1720));
      return v2;
    }
    v2 = sub_1405F8CF0(a1: a1 + 2256);
    if ( v2 != 0 )
    {
      v13 = a1 + 2256;
      goto LABEL_27;
    }
  }
  return v2;
}
