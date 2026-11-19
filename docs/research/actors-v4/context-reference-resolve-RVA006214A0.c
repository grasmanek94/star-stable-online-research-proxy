// Hex-Rays pseudocode exported through Official IDA MCP Server.
// Baseline SSOClient.exe 645.348067; IDA base 0x140000000.
// Descriptive filename is an analysis label, not a recovered private function name.

__int64 __fastcall sub_1406214A0(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 32);
  if ( result != 0 )
    return sub_140603560(a1: *(_QWORD *)(a1 + 32), a2: a1);
  return result;
}
