// Hex-Rays pseudocode exported through Official IDA MCP Server.
// Baseline SSOClient.exe 645.348067; IDA base 0x140000000.
// Descriptive filename is an analysis label, not a recovered private function name.

__int64 __fastcall sub_1400D10E0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8

  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 != 0
    && (v3 = *(_QWORD *)(v2 + 24),
        a2 < (*(_QWORD *)(v2 + 32) - v3) / 168
           + ((unsigned __int64)(*(_QWORD *)(v2 + 32)
                               - v3
                               + ((unsigned __int128)((*(_QWORD *)(v2 + 32) - v3)
                                                    * (__int128)(__int64)0xC30C30C30C30C30DuLL) >> 64)) >> 63)) )
  {
    return *(unsigned int *)(168LL * a2 + v3 + 136);
  }
  else
  {
    return 0;
  }
}
