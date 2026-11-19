void __fastcall sub_14037B2C0(__int64 a1)
{
  __int64 v1; // rax
  _BYTE v2[56]; // [rsp+20h] [rbp-38h] BYREF

  if ( *(_QWORD *)&nExitCode != 0 )
  {
    v1 = sub_1401D5630(a1: &unk_14131416C, a2: v2, a3: a1 + 460);
    sub_1407EE6B0(a1: v1);
  }
}