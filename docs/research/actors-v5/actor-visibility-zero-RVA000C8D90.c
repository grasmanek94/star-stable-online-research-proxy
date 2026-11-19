// Baseline 645.348067; IDA base 0x140000000. Exported through Official IDA MCP.
char __fastcall sub_1400C8D90(__int64 a1, char a2)
{
  char v2; // r8
  char result; // al

  v2 = *(_BYTE *)(a1 + 148);
  result = (v2 & 4) != 0;
  if ( result != a2 )
  {
    *(_BYTE *)(a1 + 148) = (4 * a2) | v2 & 0xFB;
    if ( qword_141379EF0 == 0 )
    {
      if ( (unsigned __int8)sub_140059A00(a1: off_140EFA938) != 0 )
        __debugbreak();
      sub_1409E7D98(a1: 999);
      JUMPOUT(0x1400C8DFCLL);
    }
    return sub_140688BB0(a1: *(_QWORD *)(qword_141379EF0 + 1208), a2: a1, a3: 0);
  }
  return result;
}
