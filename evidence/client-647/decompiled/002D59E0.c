char __fastcall sub_1402D59E0(__int64 a1, _DWORD *a2)
{
  int v4; // [rsp+38h] [rbp+10h] BYREF
  int v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0;
  v4 = 0;
  if ( sub_1401D0820(a1: a2, a2: &v4) == 0 )
    return 0;
  v5 = v4;
  (*(void (__fastcall **)(__int64, int *))(a1 + 8))(a1: a1 + 16, a2: &v5);
  return 1;
}