// Hex-Rays pseudocode exported through Official IDA MCP Server.
// Baseline SSOClient.exe 645.348067; IDA base 0x140000000.
// Descriptive filename is an analysis label, not a recovered private function name.

__int64 __fastcall sub_1406214C0(__int64 a1)
{
  __int64 result; // rax
  char **v2; // rcx

  if ( *(_QWORD *)(a1 + 32) == 0 )
  {
    v2 = off_140FA4DF0;
    goto LABEL_6;
  }
  result = sub_140603560(a1: *(_QWORD *)(a1 + 32), a2: a1);
  if ( result == 0 )
  {
    v2 = off_140FA5270;
LABEL_6:
    if ( (unsigned __int8)sub_140059A00(a1: v2) != 0 )
      __debugbreak();
    sub_1409E7D98(a1: 999);
    JUMPOUT(0x140621506LL);
  }
  return result;
}
