// Hex-Rays pseudocode exported through Official IDA MCP Server.
// Baseline SSOClient.exe 645.348067; IDA base 0x140000000.
// Descriptive filename is an analysis label, not a recovered private function name.

char __fastcall sub_1401E6F50(__int64 a1)
{
  __int64 v1; // rax

  v1 = sub_1405F8CF0(a1: a1 + 152);
  if ( v1 != 0 )
    return sub_140799AD0(a1: v1);
  else
    return 1;
}
