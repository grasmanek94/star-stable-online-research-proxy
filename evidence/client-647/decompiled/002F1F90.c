char __fastcall sub_1402F1F90(__int64 a1, _DWORD *a2)
{
  unsigned int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  if ( sub_1401D0820(a1: a2, a2: &v4) == 0 )
    return 0;
  (*(void (__fastcall **)(__int64, _QWORD))(a1 + 8))(a1: a1 + 16, a2: v4);
  return 1;
}