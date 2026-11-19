__int64 __fastcall sub_140451080(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // rax
  _BYTE v4[56]; // [rsp+20h] [rbp-38h] BYREF

  result = *(_QWORD *)(a1 + 1176);
  if ( result != 0 && *(_DWORD *)(result + 268) == a2 )
  {
    v3 = sub_1402B5B10(a1: &unk_141313CBC, a2: v4);
    return sub_1407EE6B0(a1: v3);
  }
  return result;
}