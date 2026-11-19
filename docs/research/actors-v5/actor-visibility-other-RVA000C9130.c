// Baseline 645.348067; IDA base 0x140000000. Exported through Official IDA MCP.
__int64 __fastcall sub_1400C9130(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax

  v1 = *a1;
  v3 = sub_140101B20(a1);
  return (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD, __int64))(v1 + 24))(
           a1,
           a2: 1091,
           a3: 0,
           a4: 0,
           a5: v3);
}
