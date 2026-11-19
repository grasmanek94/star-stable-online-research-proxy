char __fastcall sub_140351FB0(__int64 a1, _DWORD *a2)
{
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF
  int v6; // [rsp+3Ch] [rbp+14h]
  unsigned int v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = -1;
  v6 = 0;
  if ( sub_1401D0820(a1: a2, a2: &v7) == 0 )
    return 0;
  v5 = -1;
  if ( sub_1401D0820(a1: a2, a2: &v5) == 0 )
    return 0;
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(a1 + 8))(a1: a1 + 16, a2: v7, a3: v5);
  return 1;
}