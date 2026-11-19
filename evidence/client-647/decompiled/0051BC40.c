char __fastcall sub_14051BC40(__int64 a1, __int64 a2)
{
  char result; // al
  _BYTE v3[8]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v4[24]; // [rsp+28h] [rbp-30h] BYREF
  char v5; // [rsp+40h] [rbp-18h]
  __int64 v6; // [rsp+68h] [rbp+10h] BYREF

  v6 = a2;
  v5 = 0;
  sub_14051E540(a1: 1, a2: &v6, a3: v3);
  switch ( v5 )
  {
    case 0:
    case 2:
    case 3:
    case 4:
    case 5:
    case 7:
      goto LABEL_4;
    case 1:
      sub_14002AE40(a1: v4);
      result = 1;
      break;
    case 6:
      sub_14004CCB0(a1: v3);
LABEL_4:
      result = 1;
      break;
  }
  return result;
}