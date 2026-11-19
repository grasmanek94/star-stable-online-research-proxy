char __fastcall sub_1402D5820(__int64 a1, _DWORD *a2)
{
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  int v6[4]; // [rsp+28h] [rbp-10h] BYREF
  int v7; // [rsp+48h] [rbp+10h] BYREF

  v6[0] = 3;
  v5 = 0;
  v7 = 0;
  if ( sub_1401D0820(a1: a2, a2: &v7) == 0 )
    return 0;
  LODWORD(v5) = v7;
  v7 = HIDWORD(v5);
  if ( sub_1401D0820(a1: a2, a2: &v7) == 0 )
    return 0;
  HIDWORD(v5) = v7;
  if ( (unsigned __int8)sub_1402D2DB0(a1: a2, a2: v6) == 0 )
    return 0;
  (*(void (__fastcall **)(__int64, __int64 *))(a1 + 8))(a1: a1 + 16, a2: &v5);
  return 1;
}