char __fastcall sub_1407AB2A0(__int64 *a1, char *a2)
{
  char *v2; // rbx
  _BYTE v5[8]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v6[40]; // [rsp+28h] [rbp-40h] BYREF
  char v7; // [rsp+50h] [rbp-18h]

  v2 = a2;
  v5[0] = 0;
  v7 = 0;
  sub_1407B3D80(a1: a2, a2: v5);
  if ( v7 != -1 && v7 != 0 )
    sub_14001B5A0(a1: v6);
  if ( v2 == nullptr || v2[48] != 0 )
    v2 = nullptr;
  return sub_1402B8840(a1, a2: v2);
}