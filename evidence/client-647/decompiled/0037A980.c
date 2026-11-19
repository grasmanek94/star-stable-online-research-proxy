__int64 __fastcall sub_14037A980(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  _BYTE v10[96]; // [rsp+28h] [rbp-60h] BYREF

  if ( a2 == 58018 && *(_BYTE *)(a1 + 465) == 0 && *(_QWORD *)&nExitCode != 0 )
  {
    *(_BYTE *)(a1 + 465) = 1;
    v8 = sub_1401D5630(a1: &unk_141314170, a2: v10, a3: a1 + 460);
    sub_1407EE6B0(a1: v8);
  }
  return sub_1400CC5C0(a1, a2, a3, a4);
}