__int64 __fastcall sub_1404FE980(__int64 a1, __int64 a2)
{
  _QWORD v3[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v4; // [rsp+60h] [rbp+8h] BYREF

  v3[4] = a2;
  v3[0] = a2 + 84;
  v4 = a1;
  v3[1] = a2 + 80;
  v3[2] = a2 + 48;
  v3[3] = a2 + 24;
  return sub_140500C80(a1: v3, a2: &v4, a3: 0);
}