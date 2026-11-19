// Hex-Rays pseudocode exported through Official IDA MCP Server.
// Baseline SSOClient.exe 645.348067; IDA base 0x140000000.
// Descriptive filename is an analysis label, not a recovered private function name.

__int64 __fastcall sub_140621240(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 32);
  if ( result == 0 )
  {
    if ( (unsigned __int8)sub_140059A00(a1: off_140FA4DF0) != 0 )
      __debugbreak();
    sub_1409E7D98(a1: 999);
    JUMPOUT(0x14062126DLL);
  }
  return result;
}
