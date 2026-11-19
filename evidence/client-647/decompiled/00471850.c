char __fastcall sub_140471850(__int64 a1, _DWORD *a2)
{
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v6; // [rsp+28h] [rbp-10h]
  int v7; // [rsp+48h] [rbp+10h] BYREF

  v5 = -1;
  v6 = -1;
  v7 = -1;
  if ( sub_1401D0820(a1: a2, a2: &v7) == 0 )
    return 0;
  v6 = v7;
  v7 = v5;
  if ( sub_1401D0820(a1: a2, a2: &v7) == 0 )
    return 0;
  LODWORD(v5) = v7;
  v7 = HIDWORD(v5);
  if ( sub_1401D0820(a1: a2, a2: &v7) == 0 )
    return 0;
  HIDWORD(v5) = v7;
  (*(void (__fastcall **)(__int64, _QWORD, __int64 *))(a1 + 8))(a1: a1 + 16, a2: v6, a3: &v5);
  return 1;
}