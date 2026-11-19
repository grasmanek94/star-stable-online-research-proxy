__int64 sub_1407E26F0()
{
  __int64 result; // rax
  __int64 v1; // rbx
  __int64 v2; // rax
  _BYTE v3[48]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v4[104]; // [rsp+50h] [rbp-68h] BYREF

  result = sub_1405F1EE0(a1: (__int64)&off_141313B68);
  v1 = result;
  if ( result != 0 )
  {
    if ( *(_BYTE *)(result + 2012) == 0 )
    {
      result = sub_140059CA0(a1: off_140F45C48);
      if ( (_BYTE)result != 0 )
        __debugbreak();
    }
    if ( *(_BYTE *)(v1 + 2012) == 120 && *(_QWORD *)&nExitCode != 0 )
    {
      v4[80] = 0;
      v2 = sub_1407DDE30(a1: &unk_141313D24, a2: v3, a3: v4);
      sub_1407EE6B0(a1: v2);
      return sub_1407E2780(a1: v4);
    }
  }
  return result;
}