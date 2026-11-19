// Hex-Rays pseudocode exported through Official IDA MCP Server.
// Baseline SSOClient.exe 645.348067; IDA base 0x140000000.
// Descriptive filename is an analysis label, not a recovered private function name.

unsigned __int64 __fastcall sub_1400D20B0(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rcx
  __int64 v5; // rdi
  __int64 v6; // rcx
  unsigned __int64 result; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx

  v3 = *(_QWORD *)(a1 + 80);
  if ( v3 != 0 )
  {
    v5 = *(_QWORD *)(v3 + 24);
    v6 = *(_QWORD *)(v3 + 32) - v5;
    result = (unsigned __int64)(v6 + ((unsigned __int128)(v6 * (__int128)(__int64)0xC30C30C30C30C30DuLL) >> 64)) >> 63;
    if ( a2 < (unsigned __int64)(v6 / 168) )
    {
      v8 = 168LL * a2;
      v9 = *(_QWORD *)(v8 + v5 + 16);
      *(_DWORD *)(v8 + v5 + 136) = a3;
      if ( v9 != 0 )
        result = sub_1405CA100(a1: v9, a2: a3);
      if ( *(_BYTE *)(v8 + v5 + 163) != 0 )
      {
        v10 = *(_QWORD *)(v8 + v5 + 24);
        if ( v10 != 0 )
          return sub_1405CA100(a1: v10, a2: a3);
      }
    }
  }
  return result;
}
