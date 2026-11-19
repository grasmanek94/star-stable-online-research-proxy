__int64 __fastcall sub_1401F3830(__int64 a1, char a2)
{
  int v3; // eax
  __int64 v4; // rax
  _BYTE v6[56]; // [rsp+20h] [rbp-38h] BYREF
  int v7; // [rsp+60h] [rbp+8h] BYREF
  char v8; // [rsp+68h] [rbp+10h] BYREF

  if ( a2 == 0 && (*(_BYTE *)(a1 + 516) & 1) == 0 && *(_QWORD *)&nExitCode != 0 )
  {
    v3 = *(_DWORD *)(a1 + 16);
    v8 = 0;
    v7 = v3;
    v4 = sub_1401D56F0(a1: &unk_141313D38, a2: v6, a3: &v7, a4: &v8);
    sub_1407EE6B0(a1: v4);
  }
  return sub_1401FDB80(a1);
}