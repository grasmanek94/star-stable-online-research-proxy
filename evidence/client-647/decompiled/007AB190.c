char __fastcall sub_1407AB190(__int64 a1, __int64 a2)
{
  _BYTE v3[32]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v4[4]; // [rsp+40h] [rbp-38h] BYREF
  char v5; // [rsp+60h] [rbp-18h]

  v5 = 0;
  sub_1407B3C30(a1: a2, a2: v3);
  if ( v5 != -1 && v5 != 0 && v5 != 1 )
  {
    sub_14001B5A0(a1: v4);
    v4[0] = 19937;
    v4[2] = 0;
    v4[3] = 31;
    sub_14001B5A0(a1: v3);
  }
  return 1;
}