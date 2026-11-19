// Hex-Rays pseudocode exported through Official IDA MCP Server.
// Baseline SSOClient.exe 645.348067; IDA base 0x140000000.
// Descriptive filename is an analysis label, not a recovered private function name.

__int64 __fastcall sub_140603560(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rdx
  __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  unsigned int v8; // eax

  v5 = *(unsigned int *)(a2 + 12);
  if ( (_DWORD)v5 == 195948557 )
    return 0;
  v6 = *a1;
  if ( v5 >= (a1[1] - *a1) >> 6 )
    return 0;
  v7 = (unsigned __int64)(unsigned int)v5 << 6;
  if ( *(_DWORD *)(v7 + v6 + 44) != *(_DWORD *)(a2 + 8) )
    return 0;
  v8 = *(_DWORD *)(v7 + v6 + 52);
  if ( *(_QWORD *)(v7 + v6 + 32) != 0 )
  {
    if ( v8 == 1342177280 )
      *(_DWORD *)(v7 + v6 + 52) = 195948557;
    return *(_QWORD *)(v7 + v6 + 32);
  }
  else
  {
    LOBYTE(a4) = 1;
    sub_14060C610(a1, a2: *(unsigned int *)(a2 + 12), a3: v8, a4);
    return *(_QWORD *)(v7 + v6 + 32);
  }
}
