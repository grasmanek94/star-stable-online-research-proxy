char __fastcall sub_140351A70(__int64 a1, __int64 a2)
{
  char result; // al
  __int64 v4; // [rsp+20h] [rbp-59h] BYREF
  __int64 v5; // [rsp+28h] [rbp-51h] BYREF
  __int64 v6; // [rsp+30h] [rbp-49h] BYREF
  __int64 v7; // [rsp+38h] [rbp-41h] BYREF
  __int64 v8; // [rsp+40h] [rbp-39h] BYREF
  __int64 v9; // [rsp+48h] [rbp-31h] BYREF
  int v10; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v11[14]; // [rsp+60h] [rbp-19h] BYREF
  __int64 v12; // [rsp+E8h] [rbp+6Fh] BYREF

  v12 = a2;
  v11[0] = &v10;
  v11[1] = (char *)&v9 + 4;
  v10 = 0;
  v11[2] = &v9;
  v4 = 0;
  v11[3] = (char *)&v8 + 4;
  v11[4] = &v8;
  v11[5] = (char *)&v7 + 4;
  v11[6] = &v7;
  v11[7] = (char *)&v6 + 4;
  v11[8] = &v6;
  v11[9] = (char *)&v5 + 4;
  v11[10] = &v5;
  v11[11] = (char *)&v4 + 4;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v11[12] = &v4;
  result = sub_1403498D0(a1: v11, a2: &v12, a3: 0);
  if ( result != 0 )
  {
    (*(void (__fastcall **)(__int64, __int64 *))(a1 + 8))(a1: a1 + 16, a2: &v4);
    return 1;
  }
  return result;
}