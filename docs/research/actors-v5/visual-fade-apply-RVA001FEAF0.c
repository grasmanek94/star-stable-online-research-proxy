// Baseline 645.348067; IDA base 0x140000000. Exported through Official IDA MCP.
void __fastcall sub_1401FEAF0(__int64 a1, float a2)
{
  if ( a2 >= 0.0 )
  {
    *(float *)(a1 + 696) = a2;
  }
  else
  {
    if ( (unsigned __int8)sub_140059AF0(a1: off_140F10CE0, a2: "Alpha must not be negative") != 0 )
      __debugbreak();
    *(float *)(a1 + 696) = a2;
  }
}
