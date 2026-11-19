char __fastcall sub_140470BF0(__int64 a1, _DWORD *a2)
{
  int v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+24h] [rbp-14h]
  unsigned int v7; // [rsp+28h] [rbp-10h]
  int v8; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0;
  v6 = -1;
  v7 = -1;
  v8 = -1;
  if ( sub_1401D0820(a1: a2, a2: &v8) == 0 )
    return 0;
  v7 = v8;
  v8 = v5;
  if ( sub_1401D0820(a1: a2, a2: &v8) == 0 )
    return 0;
  v5 = v8;
  v8 = v6;
  if ( sub_1401D0820(a1: a2, a2: &v8) == 0 )
    return 0;
  v6 = v8;
  (*(void (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1: a1 + 16, a2: v7, a3: &v5);
  return 1;
}